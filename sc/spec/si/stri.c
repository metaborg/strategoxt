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
ATerm term_e_69;
ATerm term_r_68;
ATerm term_q_68;
ATerm term_p_68;
ATerm term_o_68;
ATerm term_n_68;
ATerm term_c_68;
ATerm term_p_67;
ATerm term_n_67;
ATerm term_m_67;
ATerm term_l_67;
ATerm term_g_67;
ATerm term_b_67;
ATerm term_z_66;
ATerm term_y_66;
ATerm term_x_66;
ATerm term_w_66;
ATerm term_v_66;
ATerm term_u_66;
ATerm term_h_66;
ATerm term_c_66;
ATerm term_u_65;
ATerm term_t_65;
ATerm term_s_65;
ATerm term_o_65;
ATerm term_n_65;
ATerm term_i_65;
ATerm term_h_65;
ATerm term_d_65;
ATerm term_c_65;
ATerm term_x_64;
ATerm term_w_64;
ATerm term_v_64;
ATerm term_u_64;
ATerm term_t_64;
ATerm term_s_64;
ATerm term_r_64;
ATerm term_q_64;
ATerm term_p_64;
ATerm term_o_64;
ATerm term_n_64;
ATerm term_e_64;
ATerm term_d_64;
ATerm term_c_64;
ATerm term_b_64;
ATerm term_a_64;
ATerm term_x_63;
ATerm term_v_63;
ATerm term_u_63;
ATerm term_t_63;
ATerm term_i_63;
ATerm term_a_63;
ATerm term_z_62;
ATerm term_y_62;
ATerm term_x_62;
ATerm term_w_62;
ATerm term_u_62;
ATerm term_t_62;
ATerm term_s_62;
ATerm term_p_62;
ATerm term_k_61;
ATerm term_f_61;
ATerm term_e_61;
ATerm term_w_60;
ATerm term_v_60;
ATerm term_a_58;
ATerm term_w_57;
ATerm term_n_57;
ATerm term_m_57;
ATerm term_l_57;
ATerm term_d_57;
ATerm term_d_56;
ATerm term_a_56;
ATerm term_z_55;
ATerm term_y_55;
ATerm term_d_53;
ATerm term_w_51;
ATerm term_v_51;
ATerm term_u_51;
ATerm term_t_51;
ATerm term_e_51;
ATerm term_b_51;
ATerm term_o_50;
ATerm term_h_50;
ATerm term_o_49;
ATerm term_s_46;
ATerm term_g_46;
ATerm term_f_46;
ATerm term_d_46;
ATerm term_z_45;
ATerm term_v_45;
ATerm term_t_45;
ATerm term_p_45;
ATerm term_m_45;
ATerm term_p_44;
ATerm term_n_44;
ATerm term_m_44;
ATerm term_l_44;
ATerm term_k_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_a_44;
ATerm term_z_43;
ATerm term_r_43;
ATerm term_i_43;
ATerm term_h_43;
ATerm term_f_43;
ATerm term_e_43;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_z_42;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_v_42;
ATerm term_u_42;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_r_42;
ATerm term_q_42;
ATerm term_p_42;
ATerm term_o_42;
ATerm term_l_42;
ATerm term_k_42;
ATerm term_j_42;
ATerm term_i_42;
ATerm term_h_42;
ATerm term_g_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_c_42;
ATerm term_b_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_x_41;
ATerm term_v_41;
ATerm term_u_41;
ATerm term_t_41;
ATerm term_s_41;
ATerm term_r_41;
ATerm term_q_41;
ATerm term_p_41;
ATerm term_o_41;
ATerm term_n_41;
ATerm term_m_41;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_h_41;
ATerm term_g_41;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_z_40;
ATerm term_y_40;
ATerm term_x_40;
ATerm term_w_40;
ATerm term_u_40;
ATerm term_s_40;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_p_40;
ATerm term_o_40;
ATerm term_n_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_y_39;
ATerm term_x_39;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_q_39;
ATerm term_p_39;
ATerm term_o_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_t_38;
ATerm term_s_38;
ATerm term_r_38;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_o_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_j_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_g_38;
ATerm term_f_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_x_37;
ATerm term_w_37;
ATerm term_v_37;
ATerm term_s_37;
ATerm term_y_26;
ATerm term_r_26;
ATerm term_a_25;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_c_13;
void init_constant_terms (void)
{
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("senv", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("tenv", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("eval-rules: ", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("rules normalized: ", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-d", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_38, term_v_37, term_g_38);
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_38, term_j_38, term_k_38);
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_38, term_o_38, term_p_38);
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_38, term_s_38, term_t_38);
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_38, term_w_38, term_x_38);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_38, term_a_39, term_d_39);
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_39, term_g_39, term_h_39);
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_39, term_l_39, term_o_39);
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_39, term_v_39, term_w_39);
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_39, term_z_39, term_a_40);
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_40, term_d_40, term_e_40);
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_40, term_j_40, term_k_40);
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_40, term_n_40, term_o_40);
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_40, term_r_40, term_s_40);
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_40, term_x_40, term_y_40);
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_41, term_b_41, term_c_41);
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_41, term_g_41, term_h_41);
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_41, term_m_41, term_n_41);
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_41, term_q_41, term_r_41);
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_41, term_u_41, term_v_41);
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_41, term_a_42, term_b_42);
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_42, term_e_42, term_f_42);
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_42, term_i_42, term_j_42);
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_42, term_o_42, term_p_42);
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_42, term_s_42, term_t_42);
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_42, term_w_42, term_x_42);
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_42, term_c_43, term_d_43);
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_43, term_h_43, term_i_43);
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("importing module: ", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(ATmakeSymbol("sc", 0, ATtrue));
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".sdefs", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("error: import of multiple modules not supported yet", 0, ATtrue));
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(ATmakeSymbol("loading image from file: ", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol("image: ", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(ATmakeSymbol("image ", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" loaded", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("image written to file: ", 0, ATtrue));
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(ATmakeSymbol("BindVar: ", 0, ATtrue));
  ATprotect(&(term_h_50));
  term_h_50 = (ATerm) ATmakeAppl(ATmakeSymbol("match1: ", 0, ATtrue));
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(ATmakeSymbol("match2: ", 0, ATtrue));
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(ATmakeSymbol("bindings: ", 0, ATtrue));
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(sym_NULL_0);
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeAppl(ATmakeSymbol("operator ", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(ATmakeSymbol(" not defined", 0, ATtrue));
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(ATmakeSymbol("eval: ", 0, ATtrue));
  ATprotect(&(term_y_55));
  term_y_55 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_z_55));
  term_z_55 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_a_56));
  term_a_56 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_d_56));
  term_d_56 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_m_57));
  term_m_57 = (ATerm) ATmakeAppl(sym_Sort_2, term_l_57, (ATerm) ATempty);
  ATprotect(&(term_n_57));
  term_n_57 = (ATerm) ATmakeAppl(sym_ConstType_1, term_m_57);
  ATprotect(&(term_w_57));
  term_w_57 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_a_58));
  term_a_58 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_v_60));
  term_v_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Evaluate strategy: ", 0, ATtrue));
  ATprotect(&(term_w_60));
  term_w_60 = (ATerm) ATmakeAppl(ATmakeSymbol("> ", 0, ATtrue));
  ATprotect(&(term_e_61));
  term_e_61 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_61));
  term_f_61 = (ATerm) ATmakeAppl(ATmakeSymbol("Evaluating command: ", 0, ATtrue));
  ATprotect(&(term_k_61));
  term_k_61 = (ATerm) ATmakeAppl(ATmakeSymbol("unknown command: ", 0, ATtrue));
  ATprotect(&(term_p_62));
  term_p_62 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_s_62));
  term_s_62 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_62));
  term_t_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--------------------------------------------------------------------", 0, ATtrue));
  ATprotect(&(term_u_62));
  term_u_62 = (ATerm) ATmakeAppl(ATmakeSymbol("This is SI, the Stratego Interpreter ", 0, ATtrue));
  ATprotect(&(term_w_62));
  term_w_62 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (c) 2001, Eelco Visser <visser@acm.org>", 0, ATtrue));
  ATprotect(&(term_x_62));
  term_x_62 = (ATerm) ATmakeAppl(ATmakeSymbol("This program is free software; you can redistribute it and/or modify", 0, ATtrue));
  ATprotect(&(term_y_62));
  term_y_62 = (ATerm) ATmakeAppl(ATmakeSymbol("it under the terms of the GNU General Public License as published by", 0, ATtrue));
  ATprotect(&(term_z_62));
  term_z_62 = (ATerm) ATmakeAppl(ATmakeSymbol("the Free Software Foundation; either version 2, or (at your option)", 0, ATtrue));
  ATprotect(&(term_a_63));
  term_a_63 = (ATerm) ATmakeAppl(ATmakeSymbol("any later version.", 0, ATtrue));
  ATprotect(&(term_i_63));
  term_i_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_63));
  term_t_63 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_63));
  term_u_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-I dir           include modules from directory dir", 0, ATtrue));
  ATprotect(&(term_v_63));
  term_v_63 = (ATerm) ATmakeAppl(ATmakeSymbol("@version", 0, ATtrue));
  ATprotect(&(term_x_63));
  term_x_63 = (ATerm) ATmakeAppl(ATmakeSymbol("@version v       declare version", 0, ATtrue));
  ATprotect(&(term_a_64));
  term_a_64 = (ATerm) ATmakeAppl(sym__2, term_y_26, term_v_37);
  ATprotect(&(term_b_64));
  term_b_64 = (ATerm) ATmakeAppl(sym__2, term_i_63, term_j_38);
  ATprotect(&(term_c_64));
  term_c_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-d               debug mode", 0, ATtrue));
  ATprotect(&(term_d_64));
  term_d_64 = (ATerm) ATmakeAppl(sym__2, term_i_44, term_v_37);
  ATprotect(&(term_e_64));
  term_e_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-t               trace mode", 0, ATtrue));
  ATprotect(&(term_n_64));
  term_n_64 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_64));
  term_o_64 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_64));
  term_p_64 = (ATerm) ATmakeAppl(sym__2, term_i_63, term_s_37);
  ATprotect(&(term_q_64));
  term_q_64 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_37);
  ATprotect(&(term_r_64));
  term_r_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_64));
  term_s_64 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_64));
  term_t_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_64));
  term_u_64 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_64));
  term_v_64 = (ATerm) ATmakeAppl(sym__2, term_t_64, term_u_64);
  ATprotect(&(term_w_64));
  term_w_64 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_64));
  term_x_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_65));
  term_c_65 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_65));
  term_d_65 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_65));
  term_h_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_65));
  term_i_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_65));
  term_n_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_65));
  term_o_65 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_65));
  term_s_65 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_65));
  term_t_65 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_65));
  term_u_65 = (ATerm) ATmakeAppl(sym__2, term_c_65, term_d_65);
  ATprotect(&(term_c_66));
  term_c_66 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_66));
  term_h_66 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_66));
  term_u_66 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_66));
  term_v_66 = (ATerm) ATmakeAppl(sym__2, term_u_66, term_u_64);
  ATprotect(&(term_w_66));
  term_w_66 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_66));
  term_x_66 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_66));
  term_y_66 = (ATerm) ATmakeAppl(sym__2, term_x_66, term_u_64);
  ATprotect(&(term_z_66));
  term_z_66 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_67));
  term_b_67 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_67));
  term_g_67 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_67));
  term_l_67 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_67));
  term_m_67 = (ATerm) ATmakeAppl(sym__2, term_l_67, term_u_64);
  ATprotect(&(term_n_67));
  term_n_67 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_67));
  term_p_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_68));
  term_c_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_68));
  term_n_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_68));
  term_o_68 = (ATerm) ATmakeAppl(sym__2, term_n_68, term_u_64);
  ATprotect(&(term_p_68));
  term_p_68 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_68));
  term_q_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_68));
  term_r_68 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_e_69));
  term_e_69 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm destroy_runtime_environment_0_0 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm RDtoSD_0_0 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm p_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm s_24 (ATerm m_195, ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm y_4 (ATerm);
ATerm a_5 (ATerm);
ATerm c_5 (ATerm);
ATerm f_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm spaste_1_0 (ATerm h_162 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm s_129 (ATerm), ATerm t_129 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm j_131 (ATerm), ATerm k_131 (ATerm), ATerm l_131 (ATerm), ATerm);
ATerm Let_2_0 (ATerm v_128 (ATerm), ATerm w_128 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm i_162 (ATerm), ATerm j_162 (ATerm), ATerm k_162 (ATerm), ATerm);
ATerm n_5 (ATerm);
ATerm x_24 (ATerm v_90, ATerm u_90, ATerm);
ATerm SVar_1_0 (ATerm u_128 (ATerm), ATerm);
ATerm y_24 (ATerm u_159 (ATerm), ATerm v_159 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm q_81, ATerm p_81, ATerm o_81, ATerm);
ATerm q_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm z_24 (ATerm o_159 (ATerm), ATerm p_159 (ATerm (ATerm), ATerm), ATerm i_81, ATerm l_81, ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm t_138 (ATerm), ATerm);
ATerm rename_4_0 (ATerm j_159 (ATerm (ATerm), ATerm), ATerm k_159 (ATerm), ATerm l_159 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm m_159 (ATerm (ATerm), ATerm), ATerm);
ATerm z_5 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm tpaste_1_0 (ATerm d_162 (ATerm), ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm f_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm DeclareVariables_0_0 (ATerm);
ATerm DynamicRules_1_0 (ATerm c_128 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm t_127 (ATerm), ATerm u_127 (ATerm), ATerm v_127 (ATerm), ATerm w_127 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm m_131 (ATerm), ATerm n_131 (ATerm), ATerm o_131 (ATerm), ATerm p_131 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm e_162 (ATerm), ATerm f_162 (ATerm), ATerm g_162 (ATerm), ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm w_7 (ATerm);
ATerm y_7 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm j_25 (ATerm y_143 (ATerm), ATerm j_56, ATerm i_56, ATerm);
ATerm k_25 (ATerm b_144 (ATerm), ATerm c_144 (ATerm), ATerm n_56, ATerm m_56, ATerm);
ATerm l_25 (ATerm t_143 (ATerm), ATerm h_56, ATerm g_56, ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm s_8 (ATerm);
ATerm n_25 (ATerm o_650, ATerm t_650, ATerm j_83, ATerm);
ATerm u_8 (ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm z_8 (ATerm);
ATerm i_9 (ATerm);
ATerm k_9 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm o_9 (ATerm);
ATerm p_9 (ATerm);
ATerm y_9 (ATerm);
ATerm a_10 (ATerm);
ATerm d_10 (ATerm);
ATerm e_10 (ATerm);
ATerm f_10 (ATerm);
ATerm free_vars_3_0 (ATerm z_160 (ATerm), ATerm a_161 (ATerm), ATerm b_161 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm bottomup_1_0 (ATerm e_134 (ATerm), ATerm);
ATerm o_10 (ATerm);
ATerm x_10 (ATerm);
ATerm y_10 (ATerm);
ATerm f_11 (ATerm);
ATerm g_11 (ATerm);
ATerm h_11 (ATerm);
ATerm i_11 (ATerm);
ATerm k_11 (ATerm);
ATerm l_11 (ATerm);
ATerm m_11 (ATerm);
ATerm p_25 (ATerm u_193, ATerm);
ATerm n_11 (ATerm);
ATerm o_11 (ATerm);
ATerm t_11 (ATerm);
ATerm u_11 (ATerm);
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
ATerm v_12 (ATerm);
ATerm x_25 (ATerm n_49, ATerm);
ATerm EvalPrim_0_0 (ATerm);
ATerm b_26 (ATerm l_100, ATerm m_100, ATerm);
ATerm w_12 (ATerm);
ATerm EvalTerm_0_0 (ATerm);
ATerm f_26 (ATerm k_79, ATerm l_79, ATerm m_79, ATerm);
ATerm x_12 (ATerm);
ATerm g_26 (ATerm f_101, ATerm g_101, ATerm);
ATerm y_12 (ATerm);
ATerm z_12 (ATerm);
ATerm a_13 (ATerm);
ATerm PatDecompose_0_0 (ATerm);
ATerm i_26 (ATerm i_160 (ATerm), ATerm v_82, ATerm w_82, ATerm t_82, ATerm u_82, ATerm);
ATerm while_not_2_0 (ATerm u_133 (ATerm), ATerm v_133 (ATerm), ATerm);
ATerm for_3_0 (ATerm x_133 (ATerm), ATerm y_133 (ATerm), ATerm z_133 (ATerm), ATerm);
ATerm e_13 (ATerm);
ATerm f_13 (ATerm);
ATerm h_13 (ATerm);
ATerm i_13 (ATerm);
ATerm j_13 (ATerm);
ATerm k_13 (ATerm);
ATerm stratego_match_1_0 (ATerm g_163 (ATerm), ATerm);
ATerm p_13 (ATerm);
ATerm q_13 (ATerm);
ATerm r_13 (ATerm);
ATerm k_26 (ATerm d_101, ATerm e_101, ATerm);
ATerm t_13 (ATerm);
ATerm u_13 (ATerm);
ATerm l_26 (ATerm h_163 (ATerm), ATerm m_101, ATerm j_101, ATerm k_101, ATerm);
ATerm v_13 (ATerm);
ATerm w_13 (ATerm);
ATerm x_13 (ATerm);
ATerm n_26 (ATerm e_163 (ATerm), ATerm r_99, ATerm s_99, ATerm r_786, ATerm);
ATerm p_26 (ATerm d_163 (ATerm), ATerm m_99, ATerm t_783, ATerm);
ATerm EvalAll_1_0 (ATerm j_0 (ATerm), ATerm);
ATerm e_14 (ATerm);
ATerm f_14 (ATerm);
ATerm i_14 (ATerm);
ATerm j_14 (ATerm);
ATerm k_14 (ATerm);
ATerm l_14 (ATerm);
ATerm v_14 (ATerm);
ATerm x_14 (ATerm);
ATerm s_26 (ATerm n_163 (ATerm), ATerm c_103, ATerm z_102, ATerm a_103, ATerm);
ATerm a_15 (ATerm);
ATerm b_15 (ATerm);
ATerm c_15 (ATerm);
ATerm t_26 (ATerm x_102, ATerm y_102, ATerm w_102, ATerm);
ATerm v_26 (ATerm z_78, ATerm a_79, ATerm);
ATerm z_26 (ATerm i_79, ATerm j_79, ATerm);
ATerm a_27 (ATerm i_66, ATerm j_66, ATerm);
ATerm foldr_3_0 (ATerm z_145 (ATerm), ATerm a_146 (ATerm), ATerm b_146 (ATerm), ATerm);
ATerm l_15 (ATerm);
ATerm n_15 (ATerm);
ATerm q_15 (ATerm);
ATerm r_15 (ATerm);
ATerm s_15 (ATerm);
ATerm v_15 (ATerm);
ATerm w_15 (ATerm);
ATerm x_15 (ATerm);
ATerm a_16 (ATerm);
ATerm b_27 (ATerm m_163 (ATerm), ATerm m_102, ATerm o_102, ATerm q_102, ATerm);
ATerm c_27 (ATerm l_163 (ATerm), ATerm i_102, ATerm j_102, ATerm k_102, ATerm);
ATerm d_27 (ATerm k_163 (ATerm), ATerm e_102, ATerm f_102, ATerm g_102, ATerm);
ATerm f_16 (ATerm);
ATerm k_154 (ATerm i_149, ATerm j_149, ATerm);
ATerm eval_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm As_2_0 (ATerm c_126 (ATerm), ATerm d_126 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm z_128 (ATerm), ATerm a_129 (ATerm), ATerm b_129 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm b_130 (ATerm), ATerm c_130 (ATerm), ATerm d_130 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm x_125 (ATerm), ATerm y_125 (ATerm), ATerm);
ATerm Op_2_0 (ATerm t_125 (ATerm), ATerm u_125 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm j_161 (ATerm), ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm map1_1_0 (ATerm i_0 (ATerm), ATerm);
ATerm g_17 (ATerm);
ATerm h_17 (ATerm);
ATerm i_17 (ATerm);
ATerm k_17 (ATerm);
ATerm l_17 (ATerm);
ATerm m_17 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm n_17 (ATerm);
ATerm o_17 (ATerm);
ATerm p_17 (ATerm);
ATerm q_17 (ATerm);
ATerm r_17 (ATerm);
ATerm s_17 (ATerm);
ATerm t_17 (ATerm);
ATerm v_17 (ATerm);
ATerm l_27 (ATerm a_88, ATerm b_88, ATerm c_88, ATerm);
ATerm genzip_4_0 (ATerm x_141 (ATerm), ATerm y_141 (ATerm), ATerm z_141 (ATerm), ATerm a_142 (ATerm), ATerm);
ATerm v_165 (ATerm p_165, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm Var_1_0 (ATerm h_123 (ATerm), ATerm);
ATerm w_17 (ATerm);
ATerm x_17 (ATerm);
ATerm y_17 (ATerm);
ATerm z_17 (ATerm);
ATerm a_18 (ATerm);
ATerm b_18 (ATerm);
ATerm c_18 (ATerm);
ATerm e_18 (ATerm);
ATerm f_18 (ATerm);
ATerm i_18 (ATerm);
ATerm j_18 (ATerm);
ATerm k_18 (ATerm);
ATerm p_18 (ATerm);
ATerm t_18 (ATerm);
ATerm u_18 (ATerm);
ATerm v_18 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm w_18 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm App_2_0 (ATerm z_125 (ATerm), ATerm a_126 (ATerm), ATerm);
ATerm Con_3_0 (ATerm l_126 (ATerm), ATerm m_126 (ATerm), ATerm n_126 (ATerm), ATerm);
ATerm a_19 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm Scope_2_0 (ATerm f_129 (ATerm), ATerm g_129 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm h_135 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm o_27 (ATerm p_83, ATerm q_83, ATerm r_83, ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm d_134 (ATerm), ATerm);
ATerm g_19 (ATerm);
ATerm h_19 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm s_19 (ATerm);
ATerm v_19 (ATerm);
ATerm p_27 (ATerm g_49, ATerm h_49, ATerm);
ATerm w_19 (ATerm);
ATerm x_19 (ATerm);
ATerm y_19 (ATerm);
ATerm eval_command_0_0 (ATerm);
ATerm repeat_1_0 (ATerm f_133 (ATerm), ATerm);
ATerm z_19 (ATerm);
ATerm evaluate_commands_0_0 (ATerm);
ATerm z_172 (ATerm t_172, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm q_27 (ATerm y_72, ATerm);
ATerm r_27 (ATerm k_69, ATerm l_69, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm a_20 (ATerm);
ATerm c_20 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm d_20 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm copyright_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm v_153 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm k_140 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm y_175 (ATerm q_175, ATerm);
ATerm conc_0_0 (ATerm);
ATerm t_27 (ATerm f_74, ATerm e_74, ATerm);
ATerm g_20 (ATerm);
ATerm h_20 (ATerm);
ATerm i_20 (ATerm);
ATerm j_20 (ATerm);
ATerm k_20 (ATerm);
ATerm m_20 (ATerm);
ATerm n_20 (ATerm);
ATerm o_20 (ATerm);
ATerm p_20 (ATerm);
ATerm q_20 (ATerm);
ATerm r_20 (ATerm);
ATerm t_20 (ATerm);
ATerm si_options_0_0 (ATerm);
ATerm v_20 (ATerm);
ATerm a_21 (ATerm);
ATerm b_21 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm c_21 (ATerm);
ATerm d_21 (ATerm);
ATerm e_21 (ATerm);
ATerm f_21 (ATerm);
ATerm g_21 (ATerm);
ATerm h_21 (ATerm);
ATerm j_21 (ATerm);
ATerm k_21 (ATerm);
ATerm l_21 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm z_27 (ATerm z_73, ATerm a_74, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm);
ATerm m_21 (ATerm);
ATerm n_21 (ATerm);
ATerm o_21 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm x_27 (ATerm x_78, ATerm y_78, ATerm w_78, ATerm);
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm q_21 (ATerm);
ATerm r_21 (ATerm);
ATerm s_21 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm i_124 (ATerm), ATerm);
ATerm u_21 (ATerm);
ATerm v_21 (ATerm);
ATerm w_21 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm j_124 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm e_140 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm v_27 (ATerm y_63, ATerm z_63, ATerm);
ATerm debug_1_0 (ATerm j_152 (ATerm), ATerm);
ATerm map_1_0 (ATerm u_139 (ATerm), ATerm);
ATerm x_21 (ATerm);
ATerm y_21 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm w_27 (ATerm o_80, ATerm p_80, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm a_22 (ATerm);
ATerm b_22 (ATerm);
ATerm c_22 (ATerm);
ATerm d_22 (ATerm);
ATerm e_22 (ATerm);
ATerm f_22 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm h_22 (ATerm);
ATerm parse_options_p__1_0 (ATerm o_158 (ATerm), ATerm);
ATerm m_22 (ATerm);
ATerm n_22 (ATerm);
ATerm q_22 (ATerm);
ATerm r_22 (ATerm);
ATerm parse_options_1_0 (ATerm n_158 (ATerm), ATerm);
ATerm f_23 (ATerm);
ATerm g_23 (ATerm);
ATerm i_23 (ATerm);
ATerm j_23 (ATerm);
ATerm make_option_table_0_0 (ATerm);
ATerm _2_0 (ATerm y_113 (ATerm), ATerm z_113 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm n_118 (ATerm), ATerm o_118 (ATerm), ATerm);
ATerm at_suffix_1_0 (ATerm o_140 (ATerm), ATerm);
ATerm split_fetch_1_0 (ATerm h_140 (ATerm), ATerm);
ATerm o_23 (ATerm);
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
  t = term_c_13;
  m_0 = t;
  t = SSL_table_destroy(m_0);
  t = term_v_23;
  n_0 = t;
  t = SSL_table_destroy(n_0);
  t = term_w_23;
  o_0 = t;
  t = SSL_table_destroy(o_0);
  t = l_0;
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm z_1 = NULL;
  ATerm y_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_1 = ATgetArgument(t, 0);
          {
            ATerm a_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_23);
      t = z_1;
    }
  else
    {
      t = y_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_1;
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm c_2 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_2);
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm b_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(e_24);
    }
  else
    {
      t = b_24;
      {
        ATerm e_2 = NULL,h_2 = NULL,j_2 = NULL,l_2 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            e_2 = ATgetArgument(t, 0);
            t = e_2;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                e_2 = ATgetArgument(t, 0);
                h_2 = ATgetArgument(t, 1);
                j_2 = ATgetArgument(t, 2);
                l_2 = ATgetArgument(t, 3);
                t = j_2;
                t = map_1_0(e_3, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    e_2 = ATgetArgument(t, 0);
                    h_2 = ATgetArgument(t, 1);
                    j_2 = ATgetArgument(t, 2);
                    l_2 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = j_2;
                t = map_1_0(f_3, t);
              }
          }
      }
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm y_2 = NULL;
  ATerm f_24 = t;
  int g_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_2 = ATgetArgument(t, 0);
          {
            ATerm h_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_24);
      t = y_2;
    }
  else
    {
      t = f_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_2;
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm h_3 = NULL;
  ATerm i_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_3 = ATgetArgument(t, 0);
          {
            ATerm l_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_24);
      t = h_3;
    }
  else
    {
      t = i_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_3;
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm o_3 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_3);
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm m_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(n_24);
    }
  else
    {
      t = m_24;
      {
        ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            q_3 = ATgetArgument(t, 0);
            t = q_3;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                q_3 = ATgetArgument(t, 0);
                r_3 = ATgetArgument(t, 1);
                s_3 = ATgetArgument(t, 2);
                t_3 = ATgetArgument(t, 3);
                t = s_3;
                t = map_1_0(j_3, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    q_3 = ATgetArgument(t, 0);
                    r_3 = ATgetArgument(t, 1);
                    s_3 = ATgetArgument(t, 2);
                    t_3 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = s_3;
                t = map_1_0(k_3, t);
              }
          }
      }
    }
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm b_4 = NULL;
  ATerm p_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_4 = ATgetArgument(t, 0);
          {
            ATerm t_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_24);
      t = b_4;
    }
  else
    {
      t = p_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_4;
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm k_4 = NULL;
  ATerm u_24 = t;
  int v_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_4 = ATgetArgument(t, 0);
          {
            ATerm w_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_24);
      t = k_4;
    }
  else
    {
      t = u_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_4;
    }
  return(t);
}
ATerm RDtoSD_0_0 (ATerm t)
{
  ATerm e_1 = NULL,h_1 = NULL,k_1 = NULL,m_1 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      h_1 = ATgetArgument(t, 0);
      k_1 = ATgetArgument(t, 1);
      m_1 = ATgetArgument(t, 2);
      e_1 = ATgetArgument(t, 3);
      {
        ATerm r_1 = NULL,s_1 = NULL,u_1 = NULL;
        t = m_1;
        t = map_1_0(b_3, t);
        r_1 = t;
        t = e_1;
        t = free_vars_3_0(c_3, d_3, tboundin_3_0, t);
        s_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_1, r_1);
        t = diff_0_0(t);
        u_1 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, h_1, k_1, m_1, (ATerm) ATmakeAppl(sym_Scope_2, u_1, (ATerm) ATmakeAppl(sym_SRule_1, e_1)));
      }
    }
  else
    {
      ATerm n_3 = NULL;
      if(match_cons(t, sym_RDef_3))
        {
          h_1 = ATgetArgument(t, 0);
          k_1 = ATgetArgument(t, 1);
          m_1 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = m_1;
      t = free_vars_3_0(g_3, i_3, tboundin_3_0, t);
      n_3 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, h_1, k_1, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, n_3, (ATerm) ATmakeAppl(sym_SRule_1, m_1)));
    }
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_a_25;
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = bottomup_1_0(p_3, t);
  t = RDtoSD_0_0(t);
  t = desugar_0_0(t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm b_25 = t;
  int c_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL,z_4 = NULL;
      if(match_cons(t, sym_LRule_1))
        {
          z_4 = ATgetArgument(t, 0);
          {
            ATerm d_5 = NULL;
            t = z_4;
            if(match_cons(t, sym_Rule_3))
              {
                v_4 = ATgetArgument(t, 0);
                w_4 = ATgetArgument(t, 1);
                x_4 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = v_4;
            t = free_vars_3_0(u_3, v_3, tboundin_3_0, t);
            d_5 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, d_5, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, v_4, w_4, x_4)));
          }
        }
      else
        {
          ATerm e_6 = NULL;
          if(match_cons(t, sym_ScopeDefault_1))
            {
              z_4 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_4;
          t = free_vars_3_0(y_3, z_3, tboundin_3_0, t);
          e_6 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, e_6, z_4);
        }
      ;
      LocalPopChoice(c_25);
    }
  else
    {
      t = b_25;
    }
  return(t);
}
ATerm u_3 (ATerm t)
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
ATerm v_3 (ATerm t)
{
  ATerm e_25 = t;
  int f_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(f_25);
    }
  else
    {
      t = e_25;
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
                t = map_1_0(w_3, t);
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
                t = map_1_0(x_3, t);
              }
          }
      }
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm r_5 = NULL;
  ATerm g_25 = t;
  int i_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_5 = ATgetArgument(t, 0);
          {
            ATerm m_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_25);
      t = r_5;
    }
  else
    {
      t = g_25;
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
ATerm x_3 (ATerm t)
{
  ATerm a_6 = NULL;
  ATerm o_25 = t;
  int r_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_6 = ATgetArgument(t, 0);
          {
            ATerm y_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_25);
      t = a_6;
    }
  else
    {
      t = o_25;
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
ATerm y_3 (ATerm t)
{
  ATerm f_6 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_6);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm a_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(c_26);
    }
  else
    {
      t = a_26;
      {
        ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            h_6 = ATgetArgument(t, 0);
            t = h_6;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                h_6 = ATgetArgument(t, 0);
                i_6 = ATgetArgument(t, 1);
                j_6 = ATgetArgument(t, 2);
                k_6 = ATgetArgument(t, 3);
                t = j_6;
                t = map_1_0(a_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    h_6 = ATgetArgument(t, 0);
                    i_6 = ATgetArgument(t, 1);
                    j_6 = ATgetArgument(t, 2);
                    k_6 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = j_6;
                t = map_1_0(c_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm s_6 = NULL;
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_6 = ATgetArgument(t, 0);
          {
            ATerm h_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_26);
      t = s_6;
    }
  else
    {
      t = d_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_6;
    }
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm b_7 = NULL;
  ATerm j_26 = t;
  int o_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_7 = ATgetArgument(t, 0);
          {
            ATerm q_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_26);
      t = b_7;
    }
  else
    {
      t = j_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_7;
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_r_26;
  return(t);
}
ATerm s_24 (ATerm m_195, ATerm t)
{
  t = m_195;
  {
    ATerm u_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_26;
        t = get_config_0_0(t);
        t = m_195;
        t = debug_1_0(l_3, t);
        ;
        LocalPopChoice(x_26);
      }
    else
      {
        t = u_26;
      }
    t = map_1_0(m_3, t);
    {
      ATerm e_27 = t;
      int g_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_7 = NULL;
          e_7 = t;
          t = term_y_26;
          t = get_config_0_0(t);
          t = e_7;
          t = debug_1_0(d_4, t);
          ;
          LocalPopChoice(g_27);
        }
      else
        {
          t = e_27;
        }
      t = define_strategies_0_0(t);
    }
  }
  return(t);
}
ATerm f_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_27 = ATgetArgument(t, 0);
      if(((ATgetType(h_27) != AT_LIST) || !(ATisEmpty(h_27))))
        _fail(t);
      {
        ATerm i_27 = ATgetArgument(t, 1);
        if(((ATgetType(i_27) != AT_LIST) || !(ATisEmpty(i_27))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_27 = ATgetArgument(t, 0);
      if(((ATgetType(j_27) == AT_LIST) && !(ATisEmpty(j_27))))
        {
          q_7 = ATgetFirst((ATermList) j_27);
          r_7 = (ATerm) ATgetNext((ATermList) j_27);
        }
      else
        _fail(t);
      {
        ATerm k_27 = ATgetArgument(t, 1);
        if(((ATgetType(k_27) == AT_LIST) && !(ATisEmpty(k_27))))
          {
            s_7 = ATgetFirst((ATermList) k_27);
            t_7 = (ATerm) ATgetNext((ATermList) k_27);
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
ATerm h_4 (ATerm t)
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
ATerm i_4 (ATerm t)
{
  ATerm x_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL;
  if(match_cons(t, sym__2))
    {
      x_7 = ATgetArgument(t, 0);
      c_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_7;
  {
    ATerm m_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm y_27 = ATgetArgument(t, 0);
            z_7 = ATgetArgument(t, 1);
            a_8 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(n_27);
        t = (ATerm) ATmakeAppl(sym_SDef_3, c_8, z_7, a_8);
      }
    else
      {
        t = m_27;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm a_28 = ATgetArgument(t, 0);
            z_7 = ATgetArgument(t, 1);
            a_8 = ATgetArgument(t, 2);
            b_8 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, c_8, z_7, a_8, b_8);
      }
  }
  return(t);
}
ATerm l_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_28 = ATgetArgument(t, 0);
      if(((ATgetType(b_28) != AT_LIST) || !(ATisEmpty(b_28))))
        _fail(t);
      {
        ATerm c_28 = ATgetArgument(t, 1);
        if(((ATgetType(c_28) != AT_LIST) || !(ATisEmpty(c_28))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_28 = ATgetArgument(t, 0);
      if(((ATgetType(d_28) == AT_LIST) && !(ATisEmpty(d_28))))
        {
          m_8 = ATgetFirst((ATermList) d_28);
          n_8 = (ATerm) ATgetNext((ATermList) d_28);
        }
      else
        _fail(t);
      {
        ATerm e_28 = ATgetArgument(t, 1);
        if(((ATgetType(e_28) == AT_LIST) && !(ATisEmpty(e_28))))
          {
            o_8 = ATgetFirst((ATermList) e_28);
            p_8 = (ATerm) ATgetNext((ATermList) e_28);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_8, o_8), (ATerm) ATmakeAppl(sym__2, n_8, p_8));
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL;
  if(match_cons(t, sym__2))
    {
      q_8 = ATgetArgument(t, 0);
      r_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_8), q_8);
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm t_8 = NULL,v_8 = NULL,w_8 = NULL;
  if(match_cons(t, sym__2))
    {
      t_8 = ATgetArgument(t, 0);
      w_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_8;
  {
    ATerm f_28 = t;
    int g_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm h_28 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_28);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, w_8);
      }
    else
      {
        t = f_28;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm i_28 = ATgetArgument(t, 0);
            v_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, w_8, v_8);
      }
  }
  return(t);
}
ATerm t_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_28 = ATgetArgument(t, 0);
      if(((ATgetType(j_28) != AT_LIST) || !(ATisEmpty(j_28))))
        _fail(t);
      {
        ATerm k_28 = ATgetArgument(t, 1);
        if(((ATgetType(k_28) != AT_LIST) || !(ATisEmpty(k_28))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_28 = ATgetArgument(t, 0);
      if(((ATgetType(l_28) == AT_LIST) && !(ATisEmpty(l_28))))
        {
          c_9 = ATgetFirst((ATermList) l_28);
          d_9 = (ATerm) ATgetNext((ATermList) l_28);
        }
      else
        _fail(t);
      {
        ATerm m_28 = ATgetArgument(t, 1);
        if(((ATgetType(m_28) == AT_LIST) && !(ATisEmpty(m_28))))
          {
            e_9 = ATgetFirst((ATermList) m_28);
            f_9 = (ATerm) ATgetNext((ATermList) m_28);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_9, e_9), (ATerm) ATmakeAppl(sym__2, d_9, f_9));
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm g_9 = NULL,h_9 = NULL;
  if(match_cons(t, sym__2))
    {
      g_9 = ATgetArgument(t, 0);
      h_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_9), g_9);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm j_9 = NULL,l_9 = NULL,m_9 = NULL;
  if(match_cons(t, sym__2))
    {
      j_9 = ATgetArgument(t, 0);
      m_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_9;
  {
    ATerm n_28 = t;
    int p_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm q_28 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(p_28);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, m_9);
      }
    else
      {
        t = n_28;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm r_28 = ATgetArgument(t, 0);
            l_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, m_9, l_9);
      }
  }
  return(t);
}
ATerm c_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_28 = ATgetArgument(t, 0);
      if(((ATgetType(t_28) != AT_LIST) || !(ATisEmpty(t_28))))
        _fail(t);
      {
        ATerm u_28 = ATgetArgument(t, 1);
        if(((ATgetType(u_28) != AT_LIST) || !(ATisEmpty(u_28))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_28 = ATgetArgument(t, 0);
      if(((ATgetType(v_28) == AT_LIST) && !(ATisEmpty(v_28))))
        {
          s_9 = ATgetFirst((ATermList) v_28);
          t_9 = (ATerm) ATgetNext((ATermList) v_28);
        }
      else
        _fail(t);
      {
        ATerm w_28 = ATgetArgument(t, 1);
        if(((ATgetType(w_28) == AT_LIST) && !(ATisEmpty(w_28))))
          {
            u_9 = ATgetFirst((ATermList) w_28);
            v_9 = (ATerm) ATgetNext((ATermList) w_28);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_9, u_9), (ATerm) ATmakeAppl(sym__2, t_9, v_9));
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL;
  if(match_cons(t, sym__2))
    {
      w_9 = ATgetArgument(t, 0);
      x_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_9), w_9);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm z_9 = NULL,b_10 = NULL,c_10 = NULL;
  if(match_cons(t, sym__2))
    {
      z_9 = ATgetArgument(t, 0);
      c_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_9;
  {
    ATerm x_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm z_28 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(y_28);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, c_10);
      }
    else
      {
        t = x_28;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm a_29 = ATgetArgument(t, 0);
            b_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, c_10, b_10);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm h_162 (ATerm), ATerm t)
{
  ATerm b_29 = t;
  int c_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_4 (ATerm t)
      {
        ATerm o_7 = NULL,p_7 = NULL;
        o_7 = t;
        t = h_162(t);
        p_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_7, p_7);
        t = genzip_4_0(f_4, g_4, h_4, i_4, t);
        return(t);
      }
      t = Let_2_0(e_4, _id, t);
      ;
      LocalPopChoice(c_29);
    }
  else
    {
      t = b_29;
      {
        ATerm d_29 = t;
        int e_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_4 (ATerm t)
            {
              ATerm k_8 = NULL,l_8 = NULL;
              k_8 = t;
              t = h_162(t);
              l_8 = t;
              t = (ATerm) ATmakeAppl(sym__2, k_8, l_8);
              t = genzip_4_0(l_4, m_4, n_4, o_4, t);
              return(t);
            }
            t = SDef_3_0(_id, j_4, _id, t);
            ;
            LocalPopChoice(e_29);
          }
        else
          {
            t = d_29;
            {
              ATerm f_29 = t;
              int g_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_4 (ATerm t)
                  {
                    ATerm a_9 = NULL,b_9 = NULL;
                    a_9 = t;
                    t = h_162(t);
                    b_9 = t;
                    t = (ATerm) ATmakeAppl(sym__2, a_9, b_9);
                    t = genzip_4_0(t_4, u_4, y_4, a_5, t);
                    return(t);
                  }
                  t = SDefT_4_0(_id, s_4, _id, _id, t);
                  ;
                  LocalPopChoice(g_29);
                }
              else
                {
                  t = f_29;
                  {
                    ATerm i_29 = t;
                    int j_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm b_5 (ATerm t)
                        {
                          ATerm q_9 = NULL,r_9 = NULL;
                          q_9 = t;
                          t = h_162(t);
                          r_9 = t;
                          t = (ATerm) ATmakeAppl(sym__2, q_9, r_9);
                          t = genzip_4_0(c_5, f_5, k_5, l_5, t);
                          return(t);
                        }
                        t = RDefT_4_0(_id, b_5, _id, _id, t);
                        ;
                        LocalPopChoice(j_29);
                      }
                    else
                      {
                        t = i_29;
                        {
                          ATerm m_5 (ATerm t)
                          {
                            ATerm g_10 = NULL;
                            t = h_162(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                g_10 = ATgetFirst((ATermList) t);
                                {
                                  ATerm k_29 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = g_10;
                            return(t);
                          }
                          t = Rec_2_0(m_5, _id, t);
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
ATerm Rec_2_0 (ATerm s_129 (ATerm), ATerm t_129 (ATerm), ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,k_0 = NULL,p_0 = NULL;
  m_10 = t;
  if(match_cons(t, sym_Rec_2))
    {
      i_10 = ATgetArgument(t, 0);
      j_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_10);
  h_10 = t;
  t = i_10;
  t = s_129(t);
  k_10 = t;
  t = j_10;
  t = t_129(t);
  l_10 = t;
  p_0 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, k_10, l_10);
  k_0 = t;
  t = SSLsetAnnotations(k_0, h_10);
  return(t);
}
ATerm SDef_3_0 (ATerm j_131 (ATerm), ATerm k_131 (ATerm), ATerm l_131 (ATerm), ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,q_0 = NULL,r_0 = NULL;
  w_10 = t;
  if(match_cons(t, sym_SDef_3))
    {
      q_10 = ATgetArgument(t, 0);
      r_10 = ATgetArgument(t, 1);
      s_10 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_10);
  p_10 = t;
  t = q_10;
  t = j_131(t);
  t_10 = t;
  t = r_10;
  t = k_131(t);
  u_10 = t;
  t = s_10;
  t = l_131(t);
  v_10 = t;
  r_0 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, t_10, u_10, v_10);
  q_0 = t;
  t = SSLsetAnnotations(q_0, p_10);
  return(t);
}
ATerm Let_2_0 (ATerm v_128 (ATerm), ATerm w_128 (ATerm), ATerm t)
{
  ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,s_0 = NULL,t_0 = NULL;
  e_11 = t;
  if(match_cons(t, sym_Let_2))
    {
      a_11 = ATgetArgument(t, 0);
      b_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_11);
  z_10 = t;
  t = a_11;
  t = v_128(t);
  c_11 = t;
  t = b_11;
  t = w_128(t);
  d_11 = t;
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, c_11, d_11);
  s_0 = t;
  t = SSLsetAnnotations(s_0, z_10);
  return(t);
}
ATerm sboundin_3_0 (ATerm i_162 (ATerm), ATerm j_162 (ATerm), ATerm k_162 (ATerm), ATerm t)
{
  ATerm l_29 = t;
  int o_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(i_162, i_162, t);
      ;
      LocalPopChoice(o_29);
    }
  else
    {
      t = l_29;
      {
        ATerm q_29 = t;
        int r_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(k_162, k_162, i_162, t);
            ;
            LocalPopChoice(r_29);
          }
        else
          {
            t = q_29;
            {
              ATerm s_29 = t;
              int t_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(k_162, k_162, k_162, i_162, t);
                  ;
                  LocalPopChoice(t_29);
                }
              else
                {
                  t = s_29;
                  t = Rec_2_0(k_162, i_162, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm j_11 = NULL;
  ATerm u_29 = t;
  int v_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          j_11 = ATgetArgument(t, 0);
          {
            ATerm w_29 = ATgetArgument(t, 1);
          }
          {
            ATerm y_29 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_29);
      t = j_11;
    }
  else
    {
      t = u_29;
      if(match_cons(t, sym_SDefT_4))
        {
          j_11 = ATgetArgument(t, 0);
          {
            ATerm z_29 = ATgetArgument(t, 1);
          }
          {
            ATerm b_30 = ATgetArgument(t, 2);
          }
          {
            ATerm c_30 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = j_11;
    }
  return(t);
}
ATerm x_24 (ATerm v_90, ATerm u_90, ATerm t)
{
  t = v_90;
  t = map_1_0(n_5, t);
  return(t);
}
ATerm SVar_1_0 (ATerm u_128 (ATerm), ATerm t)
{
  ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,v_0 = NULL,w_0 = NULL;
  s_11 = t;
  if(match_cons(t, sym_SVar_1))
    {
      q_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_11);
  p_11 = t;
  t = q_11;
  t = u_128(t);
  r_11 = t;
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, r_11);
  v_0 = t;
  t = SSLsetAnnotations(v_0, p_11);
  return(t);
}
ATerm y_24 (ATerm u_159 (ATerm), ATerm v_159 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm q_81, ATerm p_81, ATerm o_81, ATerm t)
{
  t = q_81;
  {
    ATerm o_5 (ATerm t)
    {
      ATerm v_11 = NULL;
      v_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_11, o_81);
      t = u_159(t);
      return(t);
    }
    ATerm p_5 (ATerm t)
    {
      ATerm w_11 = NULL;
      w_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_11, p_81);
      t = u_159(t);
      return(t);
    }
    t = v_159(o_5, p_5, _id, t);
  }
  return(t);
}
ATerm q_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_30 = ATgetArgument(t, 0);
      if(((ATgetType(d_30) != AT_LIST) || !(ATisEmpty(d_30))))
        _fail(t);
      {
        ATerm e_30 = ATgetArgument(t, 1);
        if(((ATgetType(e_30) != AT_LIST) || !(ATisEmpty(e_30))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_30 = ATgetArgument(t, 0);
      if(((ATgetType(f_30) == AT_LIST) && !(ATisEmpty(f_30))))
        {
          d_12 = ATgetFirst((ATermList) f_30);
          e_12 = (ATerm) ATgetNext((ATermList) f_30);
        }
      else
        _fail(t);
      {
        ATerm k_30 = ATgetArgument(t, 1);
        if(((ATgetType(k_30) == AT_LIST) && !(ATisEmpty(k_30))))
          {
            f_12 = ATgetFirst((ATermList) k_30);
            g_12 = (ATerm) ATgetNext((ATermList) k_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_12, f_12), (ATerm) ATmakeAppl(sym__2, e_12, g_12));
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL;
  if(match_cons(t, sym__2))
    {
      h_12 = ATgetArgument(t, 0);
      i_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_12), h_12);
  return(t);
}
ATerm z_24 (ATerm o_159 (ATerm), ATerm p_159 (ATerm (ATerm), ATerm), ATerm i_81, ATerm l_81, ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL;
  t = i_81;
  t = o_159(t);
  y_11 = t;
  t = map_1_0(new_0_0, t);
  z_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_11, z_11);
  t = genzip_4_0(q_5, s_5, t_5, _id, t);
  a_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_12, l_81);
  t = conc_0_0(t);
  b_12 = t;
  t = i_81;
  {
    ATerm u_5 (ATerm t)
    {
      t = z_11;
      return(t);
    }
    t = p_159(u_5, t);
    c_12 = t;
    t = (ATerm) ATmakeAppl(sym__3, c_12, l_81, b_12);
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL;
  o_12 = t;
  if(match_cons(t, sym__2))
    {
      p_12 = ATgetArgument(t, 0);
      q_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_12;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_12 = ATgetFirst((ATermList) t);
      s_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_12;
  if(match_cons(t, sym__2))
    {
      m_12 = ATgetArgument(t, 0);
      n_12 = ATgetArgument(t, 1);
      {
        ATerm l_30 = t;
        int m_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_12;
            if((p_12 != t))
              {
                _fail(t);
              }
            t = n_12;
            ;
            LocalPopChoice(m_30);
          }
        else
          {
            t = l_30;
            t = (ATerm) ATmakeAppl(sym__2, p_12, s_12);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, p_12, s_12);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm t_138 (ATerm), ATerm t)
{
  ATerm o_13 (ATerm t)
  {
    ATerm n_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_138(t);
        ;
        LocalPopChoice(o_30);
      }
    else
      {
        t = n_30;
        {
          ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL;
          ATerm v_5 (ATerm t)
          {
            ATerm u_0 = NULL;
            u_0 = t;
            t = (ATerm) ATmakeAppl(sym__2, u_0, not_null(n_13));
            t = o_13(t);
            return(t);
          }
          if(((l_13 != NULL) && (l_13 != t)))
            _fail(t);
          else
            l_13 = t;
          if(match_cons(t, sym__2))
            {
              if(((m_13 != NULL) && (m_13 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                m_13 = ATgetArgument(t, 0);
              if(((n_13 != NULL) && (n_13 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                n_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = not_null(m_13);
          t = SRTS_all(v_5, t);
        }
      }
    return(t);
  }
  t = o_13(t);
  return(t);
}
ATerm rename_4_0 (ATerm j_159 (ATerm (ATerm), ATerm), ATerm k_159 (ATerm), ATerm l_159 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm m_159 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm s_13 = NULL;
  s_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_13, (ATerm) ATempty);
  {
    ATerm h_14 (ATerm t)
    {
      ATerm w_5 (ATerm t)
      {
        ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL;
        b_14 = t;
        if(match_cons(t, sym__2))
          {
            c_14 = ATgetArgument(t, 0);
            d_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        {
          ATerm q_30 = t;
          int r_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_5 (ATerm t)
              {
                ATerm g_14 = NULL;
                g_14 = t;
                t = (ATerm) ATmakeAppl(sym__2, g_14, d_14);
                t = lookup_0_0(t);
                return(t);
              }
              t = c_14;
              t = j_159(x_5, t);
              ;
              LocalPopChoice(r_30);
            }
          else
            {
              t = q_30;
              {
                ATerm b_1 = NULL,c_1 = NULL,d_1 = NULL;
                t = b_14;
                t = z_24(k_159, m_159, c_14, d_14, t);
                if(match_cons(t, sym__3))
                  {
                    b_1 = ATgetArgument(t, 0);
                    c_1 = ATgetArgument(t, 1);
                    d_1 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = y_24(h_14, l_159, b_1, c_1, d_1, t);
              }
            }
        }
        return(t);
      }
      t = env_alltd_1_0(w_5, t);
      return(t);
    }
    t = h_14(t);
  }
  return(t);
}
ATerm z_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_30 = ATgetArgument(t, 0);
      if(((ATgetType(s_30) != AT_LIST) || !(ATisEmpty(s_30))))
        _fail(t);
      {
        ATerm t_30 = ATgetArgument(t, 1);
        if(((ATgetType(t_30) != AT_LIST) || !(ATisEmpty(t_30))))
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
  ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_30 = ATgetArgument(t, 0);
      if(((ATgetType(u_30) == AT_LIST) && !(ATisEmpty(u_30))))
        {
          p_14 = ATgetFirst((ATermList) u_30);
          q_14 = (ATerm) ATgetNext((ATermList) u_30);
        }
      else
        _fail(t);
      {
        ATerm v_30 = ATgetArgument(t, 1);
        if(((ATgetType(v_30) == AT_LIST) && !(ATisEmpty(v_30))))
          {
            r_14 = ATgetFirst((ATermList) v_30);
            s_14 = (ATerm) ATgetNext((ATermList) v_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_14, r_14), (ATerm) ATmakeAppl(sym__2, q_14, s_14));
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL;
  if(match_cons(t, sym__2))
    {
      t_14 = ATgetArgument(t, 0);
      u_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_14), t_14);
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm w_14 = NULL,y_14 = NULL,z_14 = NULL;
  if(match_cons(t, sym__2))
    {
      w_14 = ATgetArgument(t, 0);
      z_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_14;
  {
    ATerm w_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm z_30 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(y_30);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, z_14);
      }
    else
      {
        t = w_30;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm a_31 = ATgetArgument(t, 0);
            y_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, z_14, y_14);
      }
  }
  return(t);
}
ATerm l_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_31 = ATgetArgument(t, 0);
      if(((ATgetType(b_31) != AT_LIST) || !(ATisEmpty(b_31))))
        _fail(t);
      {
        ATerm c_31 = ATgetArgument(t, 1);
        if(((ATgetType(c_31) != AT_LIST) || !(ATisEmpty(c_31))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_31 = ATgetArgument(t, 0);
      if(((ATgetType(d_31) == AT_LIST) && !(ATisEmpty(d_31))))
        {
          f_15 = ATgetFirst((ATermList) d_31);
          g_15 = (ATerm) ATgetNext((ATermList) d_31);
        }
      else
        _fail(t);
      {
        ATerm e_31 = ATgetArgument(t, 1);
        if(((ATgetType(e_31) == AT_LIST) && !(ATisEmpty(e_31))))
          {
            h_15 = ATgetFirst((ATermList) e_31);
            i_15 = (ATerm) ATgetNext((ATermList) e_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_15, h_15), (ATerm) ATmakeAppl(sym__2, g_15, i_15));
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL;
  if(match_cons(t, sym__2))
    {
      j_15 = ATgetArgument(t, 0);
      k_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_15), j_15);
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm m_15 = NULL,o_15 = NULL,p_15 = NULL;
  if(match_cons(t, sym__2))
    {
      m_15 = ATgetArgument(t, 0);
      p_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_15;
  {
    ATerm f_31 = t;
    int g_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm h_31 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_31);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, p_15);
      }
    else
      {
        t = f_31;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm i_31 = ATgetArgument(t, 0);
            o_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, p_15, o_15);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm d_162 (ATerm), ATerm t)
{
  ATerm j_31 = t;
  int l_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(d_162, _id, t);
      ;
      LocalPopChoice(l_31);
    }
  else
    {
      t = j_31;
      {
        ATerm o_31 = t;
        int p_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_5 (ATerm t)
            {
              ATerm n_14 = NULL,o_14 = NULL;
              n_14 = t;
              t = d_162(t);
              o_14 = t;
              t = (ATerm) ATmakeAppl(sym__2, n_14, o_14);
              t = genzip_4_0(z_5, b_6, c_6, d_6, t);
              return(t);
            }
            t = SDefT_4_0(_id, _id, y_5, _id, t);
            ;
            LocalPopChoice(p_31);
          }
        else
          {
            t = o_31;
            {
              ATerm g_6 (ATerm t)
              {
                ATerm d_15 = NULL,e_15 = NULL;
                d_15 = t;
                t = d_162(t);
                e_15 = t;
                t = (ATerm) ATmakeAppl(sym__2, d_15, e_15);
                t = genzip_4_0(l_6, m_6, n_6, o_6, t);
                return(t);
              }
              t = RDefT_4_0(_id, _id, g_6, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm q_31 = t;
  int r_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(r_31);
    }
  else
    {
      t = q_31;
      {
        ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            b_16 = ATgetArgument(t, 0);
            c_16 = ATgetArgument(t, 1);
            d_16 = ATgetArgument(t, 2);
            e_16 = ATgetArgument(t, 3);
            t = d_16;
            t = map_1_0(q_6, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                b_16 = ATgetArgument(t, 0);
                c_16 = ATgetArgument(t, 1);
                d_16 = ATgetArgument(t, 2);
                e_16 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = d_16;
            t = map_1_0(r_6, t);
          }
      }
    }
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm l_16 = NULL;
  ATerm s_31 = t;
  int t_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_16 = ATgetArgument(t, 0);
          {
            ATerm x_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_31);
      t = l_16;
    }
  else
    {
      t = s_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_16;
    }
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm u_16 = NULL;
  ATerm y_31 = t;
  int z_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_16 = ATgetArgument(t, 0);
          {
            ATerm a_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_31);
      t = u_16;
    }
  else
    {
      t = y_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_16;
    }
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL;
  x_16 = t;
  if(match_cons(t, sym_Let_2))
    {
      y_16 = ATgetArgument(t, 0);
      z_16 = ATgetArgument(t, 1);
      t = x_16;
      t = x_24(y_16, z_16, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          y_16 = ATgetArgument(t, 0);
          z_16 = ATgetArgument(t, 1);
          a_17 = ATgetArgument(t, 2);
          t = z_16;
          t = map_1_0(u_6, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              y_16 = ATgetArgument(t, 0);
              z_16 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, y_16);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  y_16 = ATgetArgument(t, 0);
                  z_16 = ATgetArgument(t, 1);
                  a_17 = ATgetArgument(t, 2);
                  b_17 = ATgetArgument(t, 3);
                  t = z_16;
                  t = map_1_0(v_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      y_16 = ATgetArgument(t, 0);
                      z_16 = ATgetArgument(t, 1);
                      a_17 = ATgetArgument(t, 2);
                      b_17 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_16;
                  t = map_1_0(w_6, t);
                }
            }
        }
    }
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm j_17 = NULL;
  ATerm c_32 = t;
  int d_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_17 = ATgetArgument(t, 0);
          {
            ATerm f_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_32);
      t = j_17;
    }
  else
    {
      t = c_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_17;
    }
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm u_17 = NULL;
  ATerm g_32 = t;
  int h_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_17 = ATgetArgument(t, 0);
          {
            ATerm i_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_32);
      t = u_17;
    }
  else
    {
      t = g_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_17;
    }
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm d_18 = NULL;
  ATerm n_32 = t;
  int o_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_18 = ATgetArgument(t, 0);
          {
            ATerm q_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_32);
      t = d_18;
    }
  else
    {
      t = n_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_18;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, p_6, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, t_6, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm c_19 = NULL;
  ATerm t_32 = t;
  int u_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_19 = ATgetArgument(t, 0);
          {
            ATerm v_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_32);
      t = c_19;
    }
  else
    {
      t = t_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_19;
    }
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm j_19 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_19);
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm w_32 = t;
  int x_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(x_32);
    }
  else
    {
      t = w_32;
      {
        ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            l_19 = ATgetArgument(t, 0);
            t = l_19;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                l_19 = ATgetArgument(t, 0);
                m_19 = ATgetArgument(t, 1);
                n_19 = ATgetArgument(t, 2);
                o_19 = ATgetArgument(t, 3);
                t = n_19;
                t = map_1_0(a_7, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    l_19 = ATgetArgument(t, 0);
                    m_19 = ATgetArgument(t, 1);
                    n_19 = ATgetArgument(t, 2);
                    o_19 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = n_19;
                t = map_1_0(c_7, t);
              }
          }
      }
    }
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm b_20 = NULL;
  ATerm y_32 = t;
  int h_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_20 = ATgetArgument(t, 0);
          {
            ATerm i_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_33);
      t = b_20;
    }
  else
    {
      t = y_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_20;
    }
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm l_20 = NULL;
  ATerm k_33 = t;
  int l_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_20 = ATgetArgument(t, 0);
          {
            ATerm m_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_33);
      t = l_20;
    }
  else
    {
      t = k_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_20;
    }
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm u_20 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_20);
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm n_33 = t;
  int o_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(o_33);
    }
  else
    {
      t = n_33;
      {
        ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            w_20 = ATgetArgument(t, 0);
            t = w_20;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                w_20 = ATgetArgument(t, 0);
                x_20 = ATgetArgument(t, 1);
                y_20 = ATgetArgument(t, 2);
                z_20 = ATgetArgument(t, 3);
                t = y_20;
                t = map_1_0(i_7, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    w_20 = ATgetArgument(t, 0);
                    x_20 = ATgetArgument(t, 1);
                    y_20 = ATgetArgument(t, 2);
                    z_20 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = y_20;
                t = map_1_0(j_7, t);
              }
          }
      }
    }
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm i_21 = NULL;
  ATerm p_33 = t;
  int q_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_21 = ATgetArgument(t, 0);
          {
            ATerm t_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_33);
      t = i_21;
    }
  else
    {
      t = p_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_21;
    }
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm g_22 = NULL;
  ATerm z_33 = t;
  int a_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_22 = ATgetArgument(t, 0);
          {
            ATerm b_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_34);
      t = g_22;
    }
  else
    {
      t = z_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_22;
    }
  return(t);
}
ATerm DeclareVariables_0_0 (ATerm t)
{
  ATerm o_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      q_18 = ATgetArgument(t, 0);
      r_18 = ATgetArgument(t, 1);
      s_18 = ATgetArgument(t, 2);
      o_18 = ATgetArgument(t, 3);
      {
        ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL;
        t = s_18;
        t = map_1_0(x_6, t);
        x_18 = t;
        t = o_18;
        t = free_vars_3_0(y_6, z_6, tboundin_3_0, t);
        y_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_18, x_18);
        t = diff_0_0(t);
        z_18 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, q_18, r_18, s_18, (ATerm) ATmakeAppl(sym_Scope_2, z_18, o_18));
      }
    }
  else
    {
      ATerm s_20 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          q_18 = ATgetArgument(t, 0);
          r_18 = ATgetArgument(t, 1);
          s_18 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = s_18;
      t = free_vars_3_0(d_7, f_7, tboundin_3_0, t);
      s_20 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, q_18, r_18, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, s_20, s_18));
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm c_128 (ATerm), ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL,o_22 = NULL,p_22 = NULL,x_0 = NULL,y_0 = NULL;
  p_22 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      k_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_22);
  j_22 = t;
  t = k_22;
  t = c_128(t);
  o_22 = t;
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym_DynamicRules_1, o_22);
  x_0 = t;
  t = SSLsetAnnotations(x_0, j_22);
  return(t);
}
ATerm RDefT_4_0 (ATerm t_127 (ATerm), ATerm u_127 (ATerm), ATerm v_127 (ATerm), ATerm w_127 (ATerm), ATerm t)
{
  ATerm t_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,z_0 = NULL,a_1 = NULL;
  e_23 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      v_22 = ATgetArgument(t, 0);
      w_22 = ATgetArgument(t, 1);
      x_22 = ATgetArgument(t, 2);
      y_22 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_23);
  t_22 = t;
  t = v_22;
  t = t_127(t);
  z_22 = t;
  t = w_22;
  t = u_127(t);
  b_23 = t;
  t = x_22;
  t = v_127(t);
  c_23 = t;
  t = y_22;
  t = w_127(t);
  d_23 = t;
  a_1 = t;
  t = (ATerm) ATmakeAppl(sym_RDefT_4, z_22, b_23, c_23, d_23);
  z_0 = t;
  t = SSLsetAnnotations(z_0, t_22);
  return(t);
}
ATerm SDefT_4_0 (ATerm m_131 (ATerm), ATerm n_131 (ATerm), ATerm o_131 (ATerm), ATerm p_131 (ATerm), ATerm t)
{
  ATerm h_23 = NULL,m_23 = NULL,n_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,x_23 = NULL,f_1 = NULL,g_1 = NULL;
  x_23 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      m_23 = ATgetArgument(t, 0);
      n_23 = ATgetArgument(t, 1);
      p_23 = ATgetArgument(t, 2);
      q_23 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_23);
  h_23 = t;
  t = m_23;
  t = m_131(t);
  r_23 = t;
  t = n_23;
  t = n_131(t);
  s_23 = t;
  t = p_23;
  t = o_131(t);
  t_23 = t;
  t = q_23;
  t = p_131(t);
  u_23 = t;
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, r_23, s_23, t_23, u_23);
  f_1 = t;
  t = SSLsetAnnotations(f_1, h_23);
  return(t);
}
ATerm tboundin_3_0 (ATerm e_162 (ATerm), ATerm f_162 (ATerm), ATerm g_162 (ATerm), ATerm t)
{
  ATerm c_34 = t;
  int d_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(g_162, e_162, t);
      ;
      LocalPopChoice(d_34);
    }
  else
    {
      t = c_34;
      {
        ATerm e_34 = t;
        int f_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(g_162, g_162, g_162, e_162, t);
            ;
            LocalPopChoice(f_34);
          }
        else
          {
            t = e_34;
            {
              ATerm g_34 = t;
              int h_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(g_162, g_162, g_162, e_162, t);
                  ;
                  LocalPopChoice(h_34);
                }
              else
                {
                  t = g_34;
                  t = DynamicRules_1_0(e_162, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm j_24 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_24);
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm m_34 = t;
  int n_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(n_34);
    }
  else
    {
      t = m_34;
      {
        ATerm r_24 = NULL,h_25 = NULL,m_26 = NULL,f_27 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            r_24 = ATgetArgument(t, 0);
            t = r_24;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                r_24 = ATgetArgument(t, 0);
                h_25 = ATgetArgument(t, 1);
                m_26 = ATgetArgument(t, 2);
                f_27 = ATgetArgument(t, 3);
                t = m_26;
                t = map_1_0(m_7, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    r_24 = ATgetArgument(t, 0);
                    h_25 = ATgetArgument(t, 1);
                    m_26 = ATgetArgument(t, 2);
                    f_27 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = m_26;
                t = map_1_0(n_7, t);
              }
          }
      }
    }
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm s_28 = NULL;
  ATerm o_34 = t;
  int p_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_28 = ATgetArgument(t, 0);
          {
            ATerm q_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_34);
      t = s_28;
    }
  else
    {
      t = o_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_28;
    }
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm h_29 = NULL;
  ATerm s_34 = t;
  int t_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_29 = ATgetArgument(t, 0);
          {
            ATerm u_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_34);
      t = h_29;
    }
  else
    {
      t = s_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_29;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(k_7, l_7, tboundin_3_0, t);
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm a_30 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_30);
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm y_34 = t;
  int z_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(z_34);
    }
  else
    {
      t = y_34;
      {
        ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            g_30 = ATgetArgument(t, 0);
            t = g_30;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                g_30 = ATgetArgument(t, 0);
                h_30 = ATgetArgument(t, 1);
                i_30 = ATgetArgument(t, 2);
                j_30 = ATgetArgument(t, 3);
                t = i_30;
                t = map_1_0(d_8, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    g_30 = ATgetArgument(t, 0);
                    h_30 = ATgetArgument(t, 1);
                    i_30 = ATgetArgument(t, 2);
                    j_30 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = i_30;
                t = map_1_0(e_8, t);
              }
          }
      }
    }
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm x_30 = NULL;
  ATerm c_35 = t;
  int d_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_30 = ATgetArgument(t, 0);
          {
            ATerm e_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_35);
      t = x_30;
    }
  else
    {
      t = c_35;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_30;
    }
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm k_31 = NULL;
  ATerm f_35 = t;
  int g_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_31 = ATgetArgument(t, 0);
          {
            ATerm h_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_35);
      t = k_31;
    }
  else
    {
      t = f_35;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_31;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm p_29 = NULL,x_29 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      x_29 = ATgetArgument(t, 0);
      t = x_29;
      if(match_cons(t, sym_Rule_3))
        {
          p_29 = ATgetArgument(t, 0);
          {
            ATerm i_35 = ATgetArgument(t, 1);
          }
          {
            ATerm j_35 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = p_29;
      t = free_vars_3_0(w_7, y_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          x_29 = ATgetArgument(t, 0);
          {
            ATerm l_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = x_29;
    }
  return(t);
}
ATerm j_25 (ATerm y_143 (ATerm), ATerm j_56, ATerm i_56, ATerm t)
{
  t = j_56;
  {
    ATerm b_32 (ATerm t)
    {
      ATerm m_35 = t;
      int n_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = i_56;
          ;
          LocalPopChoice(n_35);
        }
      else
        {
          t = m_35;
          {
            ATerm q_35 = t;
            int r_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL;
                u_31 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    v_31 = ATgetFirst((ATermList) t);
                    w_31 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = u_31;
                {
                  ATerm f_8 (ATerm t)
                  {
                    t = i_56;
                    return(t);
                  }
                  t = k_25(y_143, f_8, v_31, w_31, t);
                  t = b_32(t);
                }
                ;
                LocalPopChoice(r_35);
              }
            else
              {
                t = q_35;
                t = Cons_2_0(_id, b_32, t);
              }
          }
        }
      return(t);
    }
    t = b_32(t);
  }
  return(t);
}
ATerm k_25 (ATerm b_144 (ATerm), ATerm c_144 (ATerm), ATerm n_56, ATerm m_56, ATerm t)
{
  t = c_144(t);
  {
    ATerm g_8 (ATerm t)
    {
      ATerm e_32 = NULL;
      e_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_56, e_32);
      t = b_144(t);
      return(t);
    }
    t = fetch_1_0(g_8, t);
    t = m_56;
  }
  return(t);
}
ATerm l_25 (ATerm t_143 (ATerm), ATerm h_56, ATerm g_56, ATerm t)
{
  t = h_56;
  {
    ATerm p_32 (ATerm t)
    {
      ATerm s_35 = t;
      int t_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(t_35);
        }
      else
        {
          t = s_35;
          {
            ATerm u_35 = t;
            int v_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL;
                k_32 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    l_32 = ATgetFirst((ATermList) t);
                    m_32 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = k_32;
                {
                  ATerm h_8 (ATerm t)
                  {
                    t = g_56;
                    return(t);
                  }
                  t = k_25(t_143, h_8, l_32, m_32, t);
                  t = p_32(t);
                }
                ;
                LocalPopChoice(v_35);
              }
            else
              {
                t = u_35;
                t = Cons_2_0(_id, p_32, t);
              }
          }
        }
      return(t);
    }
    t = p_32(t);
  }
  return(t);
}
ATerm i_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_35 = ATgetArgument(t, 0);
      if(((ATgetType(w_35) != AT_LIST) || !(ATisEmpty(w_35))))
        _fail(t);
      {
        ATerm x_35 = ATgetArgument(t, 1);
        if(((ATgetType(x_35) != AT_LIST) || !(ATisEmpty(x_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_35 = ATgetArgument(t, 0);
      if(((ATgetType(y_35) == AT_LIST) && !(ATisEmpty(y_35))))
        {
          b_33 = ATgetFirst((ATermList) y_35);
          c_33 = (ATerm) ATgetNext((ATermList) y_35);
        }
      else
        _fail(t);
      {
        ATerm z_35 = ATgetArgument(t, 1);
        if(((ATgetType(z_35) == AT_LIST) && !(ATisEmpty(z_35))))
          {
            d_33 = ATgetFirst((ATermList) z_35);
            e_33 = (ATerm) ATgetNext((ATermList) z_35);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_33, d_33), (ATerm) ATmakeAppl(sym__2, c_33, e_33));
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL;
  if(match_cons(t, sym__2))
    {
      f_33 = ATgetArgument(t, 0);
      g_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_33), f_33);
  return(t);
}
ATerm n_25 (ATerm o_650, ATerm t_650, ATerm j_83, ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL,z_32 = NULL,a_33 = NULL;
  t = SSL_explode_term(t_650);
  if(match_cons(t, sym__2))
    {
      r_32 = ATgetArgument(t, 0);
      s_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(o_650);
  if(match_cons(t, sym__2))
    {
      if((r_32 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      z_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_32, s_32);
  t = genzip_4_0(i_8, j_8, s_8, _id, t);
  a_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_33, j_83);
  t = conc_0_0(t);
  return(t);
}
ATerm u_8 (ATerm t)
{
  ATerm r_33 = NULL;
  r_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, r_33);
  return(t);
}
ATerm x_8 (ATerm t)
{
  t = _2_0(_id, z_8, t);
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm a_36 = t;
  int c_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, i_9, t);
      ;
      LocalPopChoice(c_36);
    }
  else
    {
      t = a_36;
      {
        ATerm i_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL;
        if(match_cons(t, sym__2))
          {
            i_34 = ATgetArgument(t, 0);
            j_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_34;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_34 = ATgetFirst((ATermList) t);
            l_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_34), k_34), l_34);
      }
    }
  return(t);
}
ATerm z_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm i_9 (ATerm t)
{
  ATerm s_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL;
  s_33 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_33 = ATgetFirst((ATermList) t);
      x_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_33;
  if(match_cons(t, sym__2))
    {
      v_33 = ATgetArgument(t, 0);
      w_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_36 = t;
    int e_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_33;
        if((v_33 != t))
          {
            _fail(t);
          }
        t = x_33;
        ;
        LocalPopChoice(e_36);
      }
    else
      {
        t = d_36;
        t = s_33;
        t = n_25(v_33, w_33, x_33, t);
      }
  }
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm a_35 = NULL;
  if(match_cons(t, sym__2))
    {
      a_35 = ATgetArgument(t, 0);
      if((a_35 != ATgetArgument(t, 1)))
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
  ATerm f_36 = t;
  int g_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(u_8, x_8, y_8, t);
      ;
      LocalPopChoice(g_36);
    }
  else
    {
      t = f_36;
      {
        ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL;
        v_34 = t;
        if(match_cons(t, sym__2))
          {
            w_34 = ATgetArgument(t, 0);
            x_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_34;
        t = l_25(k_9, w_34, x_34, t);
      }
    }
  return(t);
}
ATerm o_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_9 (ATerm t)
{
  ATerm k_2 = NULL,m_2 = NULL;
  if(match_cons(t, sym__2))
    {
      k_2 = ATgetArgument(t, 0);
      m_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_25(a_10, k_2, m_2, t);
  return(t);
}
ATerm a_10 (ATerm t)
{
  ATerm o_2 = NULL;
  if(match_cons(t, sym__2))
    {
      o_2 = ATgetArgument(t, 0);
      if((o_2 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm d_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_10 (ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL;
  if(match_cons(t, sym__2))
    {
      p_4 = ATgetArgument(t, 0);
      q_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_25(f_10, p_4, q_4, t);
  return(t);
}
ATerm f_10 (ATerm t)
{
  ATerm r_4 = NULL;
  if(match_cons(t, sym__2))
    {
      r_4 = ATgetArgument(t, 0);
      if((r_4 != ATgetArgument(t, 1)))
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
  ATerm k_36 (ATerm t)
  {
    ATerm h_36 = t;
    int i_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_160(t);
        ;
        LocalPopChoice(i_36);
      }
    else
      {
        t = h_36;
        {
          ATerm m_36 = t;
          int n_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_35 = NULL,k_35 = NULL,x_1 = NULL,y_1 = NULL;
              b_35 = t;
              t = a_161(t);
              k_35 = t;
              t = b_35;
              {
                ATerm n_9 (ATerm t)
                {
                  ATerm b_36 = NULL;
                  t = k_36(t);
                  b_36 = t;
                  t = (ATerm) ATmakeAppl(sym__2, b_36, k_35);
                  t = diff_0_0(t);
                  return(t);
                }
                t = b_161(n_9, k_36, o_9, t);
                x_1 = t;
                t = SSL_explode_term(x_1);
                if(match_cons(t, sym__2))
                  {
                    ATerm o_36 = ATgetArgument(t, 0);
                    y_1 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = y_1;
                t = foldr_3_0(p_9, y_9, _id, t);
              }
              ;
              LocalPopChoice(n_36);
            }
          else
            {
              t = m_36;
              {
                ATerm p_2 = NULL,q_2 = NULL;
                p_2 = t;
                t = SSL_explode_term(p_2);
                if(match_cons(t, sym__2))
                  {
                    ATerm p_36 = ATgetArgument(t, 0);
                    q_2 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = q_2;
                t = foldr_3_0(d_10, e_10, k_36, t);
              }
            }
        }
      }
    return(t);
  }
  t = k_36(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm e_134 (ATerm), ATerm t)
{
  ATerm n_10 (ATerm t)
  {
    t = bottomup_1_0(e_134, t);
    return(t);
  }
  t = SRTS_all(n_10, t);
  t = e_134(t);
  return(t);
}
ATerm o_10 (ATerm t)
{
  t = bottomup_1_0(x_10, t);
  t = DeclareVariables_0_0(t);
  t = desugar_0_0(t);
  t = strename_0_0(t);
  return(t);
}
ATerm x_10 (ATerm t)
{
  ATerm q_36 = t;
  int r_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL,f_37 = NULL;
      if(match_cons(t, sym_LRule_1))
        {
          f_37 = ATgetArgument(t, 0);
          {
            ATerm l_37 = NULL;
            t = f_37;
            if(match_cons(t, sym_Rule_3))
              {
                b_37 = ATgetArgument(t, 0);
                c_37 = ATgetArgument(t, 1);
                d_37 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = b_37;
            t = free_vars_3_0(y_10, f_11, tboundin_3_0, t);
            l_37 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, l_37, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, b_37, c_37, d_37)));
          }
        }
      else
        {
          ATerm m_39 = NULL;
          if(match_cons(t, sym_ScopeDefault_1))
            {
              f_37 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_37;
          t = free_vars_3_0(i_11, k_11, tboundin_3_0, t);
          m_39 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, m_39, f_37);
        }
      ;
      LocalPopChoice(r_36);
    }
  else
    {
      t = q_36;
    }
  return(t);
}
ATerm y_10 (ATerm t)
{
  ATerm m_37 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_37);
  return(t);
}
ATerm f_11 (ATerm t)
{
  ATerm s_36 = t;
  int t_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(t_36);
    }
  else
    {
      t = s_36;
      {
        ATerm p_37 = NULL,t_37 = NULL,u_37 = NULL,d_38 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            p_37 = ATgetArgument(t, 0);
            t = p_37;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                p_37 = ATgetArgument(t, 0);
                t_37 = ATgetArgument(t, 1);
                u_37 = ATgetArgument(t, 2);
                d_38 = ATgetArgument(t, 3);
                t = u_37;
                t = map_1_0(g_11, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    p_37 = ATgetArgument(t, 0);
                    t_37 = ATgetArgument(t, 1);
                    u_37 = ATgetArgument(t, 2);
                    d_38 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = u_37;
                t = map_1_0(h_11, t);
              }
          }
      }
    }
  return(t);
}
ATerm g_11 (ATerm t)
{
  ATerm n_38 = NULL;
  ATerm u_36 = t;
  int v_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_38 = ATgetArgument(t, 0);
          {
            ATerm w_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_36);
      t = n_38;
    }
  else
    {
      t = u_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_38;
    }
  return(t);
}
ATerm h_11 (ATerm t)
{
  ATerm i_39 = NULL;
  ATerm z_36 = t;
  int a_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_39 = ATgetArgument(t, 0);
          {
            ATerm e_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_37);
      t = i_39;
    }
  else
    {
      t = z_36;
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
ATerm i_11 (ATerm t)
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
ATerm k_11 (ATerm t)
{
  ATerm g_37 = t;
  int h_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(h_37);
    }
  else
    {
      t = g_37;
      {
        ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            r_39 = ATgetArgument(t, 0);
            t = r_39;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                r_39 = ATgetArgument(t, 0);
                s_39 = ATgetArgument(t, 1);
                t_39 = ATgetArgument(t, 2);
                u_39 = ATgetArgument(t, 3);
                t = t_39;
                t = map_1_0(l_11, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    r_39 = ATgetArgument(t, 0);
                    s_39 = ATgetArgument(t, 1);
                    t_39 = ATgetArgument(t, 2);
                    u_39 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = t_39;
                t = map_1_0(m_11, t);
              }
          }
      }
    }
  return(t);
}
ATerm l_11 (ATerm t)
{
  ATerm d_41 = NULL;
  ATerm i_37 = t;
  int j_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_41 = ATgetArgument(t, 0);
          {
            ATerm k_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_37);
      t = d_41;
    }
  else
    {
      t = i_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_41;
    }
  return(t);
}
ATerm m_11 (ATerm t)
{
  ATerm g_43 = NULL;
  ATerm n_37 = t;
  int o_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_43 = ATgetArgument(t, 0);
          {
            ATerm q_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_37);
      t = g_43;
    }
  else
    {
      t = n_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_43;
    }
  return(t);
}
ATerm p_25 (ATerm u_193, ATerm t)
{
  t = u_193;
  t = map_1_0(o_10, t);
  t = define_strategies_0_0(t);
  return(t);
}
ATerm n_11 (ATerm t)
{
  ATerm j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL;
  j_43 = t;
  if(match_cons(t, sym_SDef_3))
    {
      k_43 = ATgetArgument(t, 0);
      l_43 = ATgetArgument(t, 1);
      {
        ATerm r_37 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = l_43;
  t = foldr_3_0(o_11, t_11, u_11, t);
  m_43 = t;
  t = term_v_23;
  n_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_43, m_43);
  o_43 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_23, (ATerm)ATmakeAppl(sym__2, k_43, m_43), j_43);
  t = x_27(n_43, o_43, j_43, t);
  return(t);
}
ATerm o_11 (ATerm t)
{
  t = term_s_37;
  return(t);
}
ATerm t_11 (ATerm t)
{
  ATerm p_43 = NULL,q_43 = NULL;
  if(match_cons(t, sym__2))
    {
      p_43 = ATgetArgument(t, 0);
      q_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_27(p_43, q_43, t);
  return(t);
}
ATerm u_11 (ATerm t)
{
  t = term_v_37;
  return(t);
}
ATerm define_strategies_0_0 (ATerm t)
{
  t = map_1_0(n_11, t);
  return(t);
}
ATerm q_25 (ATerm b_75, ATerm c_75, ATerm t)
{
  t = SSL_execvp(b_75, c_75);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm o_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL;
  o_44 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      r_44 = ATgetArgument(t, 0);
      {
        ATerm g_7 = NULL,h_7 = NULL;
        t = SSL_int_to_string(r_44);
        g_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_37), g_7), term_w_37);
        h_7 = t;
        t = SSL_concat_strings(h_7);
      }
    }
  else
    {
      ATerm l_12 = NULL,d_13 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          r_44 = ATgetArgument(t, 0);
          s_44 = ATgetArgument(t, 1);
          t_44 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(s_44);
      l_12 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_44), term_b_38), l_12), term_a_38), r_44);
      d_13 = t;
      t = SSL_concat_strings(d_13);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm g_140 (ATerm), ATerm t)
{
  ATerm x_44 = NULL;
  ATerm x_11 (ATerm t)
  {
    t = g_140(t);
    if(((x_44 != NULL) && (x_44 != t)))
      _fail(t);
    else
      x_44 = t;
    return(t);
  }
  t = fetch_1_0(x_11, t);
  t = not_null(x_44);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm b_45 = NULL;
  b_45 = t;
  {
    ATerm c_38 = t;
    int e_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_43), term_e_43), term_y_42), term_u_42), term_q_42), term_k_42), term_g_42), term_c_42), term_x_41), term_s_41), term_o_41), term_k_41), term_e_41), term_z_40), term_u_40), term_p_40), term_l_40), term_h_40), term_b_40), term_x_39), term_p_39), term_j_39), term_e_39), term_y_38), term_u_38), term_q_38), term_l_38), term_h_38);
        {
          ATerm j_12 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm s_43 = ATgetArgument(t, 0);
                if((b_45 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm t_43 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(j_12, t);
        }
        ;
        LocalPopChoice(e_38);
      }
    else
      {
        t = c_38;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, b_45);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm f_45 = NULL;
  f_45 = t;
  {
    ATerm u_43 = t;
    int v_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_45 = NULL,m_14 = NULL,t_15 = NULL,u_15 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm w_43 = ATgetArgument(t, 0);
            r_45 = ATgetArgument(t, 1);
            {
              ATerm x_43 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = r_45;
        {
          ATerm y_43 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = y_43;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          m_14 = t;
          t = term_z_43;
          t_15 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, m_14), term_a_44);
          u_15 = t;
          t = SSL_printnl(t_15, u_15);
          t = (ATerm) ATmakeAppl(sym__2, term_z_43, (ATerm) ATinsert(ATinsert(ATempty, m_14), term_a_44));
        }
        ;
        LocalPopChoice(v_43);
      }
    else
      {
        t = u_43;
      }
    t = f_45;
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
  ATerm x_45 = NULL,y_45 = NULL;
  x_45 = t;
  t = fork_0_0(t);
  y_45 = t;
  {
    ATerm b_44 = t;
    int c_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = x_45;
        t = i_155(t);
        ;
        LocalPopChoice(c_44);
      }
    else
      {
        t = b_44;
        t = SSL_waitpid(y_45);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm d_44 = ATgetArgument(t, 0);
            if(((ATgetType(d_44) != AT_INT) || (ATgetInt((ATermInt) d_44) != 0)))
              _fail(t);
            {
              ATerm e_44 = ATgetArgument(t, 1);
            }
            {
              ATerm f_44 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = x_45;
      }
  }
  return(t);
}
ATerm call_sc_0_0 (ATerm t)
{
  ATerm b_46 = NULL,e_46 = NULL,j_46 = NULL;
  b_46 = t;
  {
    ATerm g_44 = t;
    int h_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL;
        t = term_i_44;
        t = get_config_0_0(t);
        t = term_j_44;
        k_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_44, b_46);
        t = v_27(k_46, b_46, t);
        l_46 = t;
        t = term_z_43;
        m_46 = t;
        t = (ATerm) ATinsert(ATempty, l_46);
        n_46 = t;
        t = SSL_printnl(m_46, n_46);
        t = b_46;
        ;
        LocalPopChoice(h_44);
      }
    else
      {
        t = g_44;
      }
    t = term_k_44;
    t = get_config_0_0(t);
    e_46 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_l_44, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(e_46), term_n_44), b_46), term_m_44));
    {
      ATerm k_12 (ATerm t)
      {
        ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL,t_46 = NULL;
        t = term_z_43;
        q_46 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_l_44, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(e_46), term_n_44), b_46), term_m_44)));
        t_46 = t;
        t = SSL_printnl(q_46, t_46);
        t = term_l_44;
        o_46 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(e_46), term_n_44), b_46), term_m_44);
        p_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_l_44, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(e_46), term_n_44), b_46), term_m_44));
        t = q_25(o_46, p_46, t);
        return(t);
      }
      t = fork_and_wait_1_0(k_12, t);
      t = term_p_44;
      j_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_46, term_p_44);
      t = v_27(b_46, j_46, t);
      t = ReadFromFile_0_0(t);
    }
  }
  return(t);
}
ATerm eval_import_0_0 (ATerm t)
{
  ATerm u_46 = NULL;
  ATerm u_44 = t;
  int v_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Imports_1))
        {
          ATerm y_44 = ATgetArgument(t, 0);
          if(((ATgetType(y_44) != AT_LIST) || !(ATisEmpty(y_44))))
            _fail(t);
        }
      else
        _fail(t);
      LocalPopChoice(v_44);
    }
  else
    {
      t = u_44;
      {
        ATerm z_44 = t;
        int a_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Imports_1))
              {
                ATerm c_45 = ATgetArgument(t, 0);
                if(((ATgetType(c_45) == AT_LIST) && !(ATisEmpty(c_45))))
                  {
                    u_46 = ATgetFirst((ATermList) c_45);
                    {
                      ATerm d_45 = (ATerm) ATgetNext((ATermList) c_45);
                      if(((ATgetType(d_45) != AT_LIST) || !(ATisEmpty(d_45))))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            LocalPopChoice(a_45);
            {
              ATerm v_46 = NULL;
              t = u_46;
              t = call_sc_0_0(t);
              if(match_cons(t, sym_Specification_1))
                {
                  ATerm e_45 = ATgetArgument(t, 0);
                  if(((ATgetType(e_45) == AT_LIST) && !(ATisEmpty(e_45))))
                    {
                      ATerm g_45 = ATgetFirst((ATermList) e_45);
                      if(match_cons(g_45, sym_Signature_1))
                        {
                          ATerm i_45 = ATgetArgument(g_45, 0);
                        }
                      else
                        _fail(t);
                      {
                        ATerm h_45 = (ATerm) ATgetNext((ATermList) e_45);
                        if(((ATgetType(h_45) == AT_LIST) && !(ATisEmpty(h_45))))
                          {
                            ATerm j_45 = ATgetFirst((ATermList) h_45);
                            if(match_cons(j_45, sym_Strategies_1))
                              {
                                v_46 = ATgetArgument(j_45, 0);
                              }
                            else
                              _fail(t);
                            {
                              ATerm k_45 = (ATerm) ATgetNext((ATermList) h_45);
                              if(((ATgetType(k_45) != AT_LIST) || !(ATisEmpty(k_45))))
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
              t = v_46;
              t = define_strategies_0_0(t);
            }
          }
        else
          {
            t = z_44;
            {
              ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL;
              if(match_cons(t, sym_Imports_1))
                {
                  ATerm l_45 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = term_z_43;
              w_46 = t;
              t = (ATerm) ATinsert(ATempty, term_m_45);
              x_46 = t;
              t = SSL_printnl(w_46, x_46);
              t = term_v_37;
              y_46 = t;
              t = SSL_exit(y_46);
              t = (ATerm) ATinsert(ATempty, term_m_45);
            }
          }
      }
    }
  return(t);
}
ATerm s_25 (ATerm a_80, ATerm z_79, ATerm t)
{
  t = z_79;
  {
    ATerm t_12 (ATerm t)
    {
      ATerm z_46 = NULL,a_47 = NULL;
      if(match_cons(t, sym__2))
        {
          z_46 = ATgetArgument(t, 0);
          a_47 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_table_put(a_80, z_46, a_47);
      t = (ATerm) ATmakeAppl(sym__3, a_80, z_46, a_47);
      return(t);
    }
    t = map_1_0(t_12, t);
  }
  return(t);
}
ATerm t_25 (ATerm c_69, ATerm d_69, ATerm t)
{
  t = SSL_access(c_69, d_69);
  return(t);
}
ATerm u_25 (ATerm q_49, ATerm t)
{
  ATerm d_47 = NULL,e_47 = NULL,h_47 = NULL,i_47 = NULL;
  ATerm n_45 = t;
  int o_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_47 = NULL,y_15 = NULL,z_15 = NULL,g_18 = NULL,h_18 = NULL;
      t_47 = t;
      t = term_i_44;
      t = get_config_0_0(t);
      t = term_p_45;
      y_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_p_45, q_49);
      t = v_27(y_15, q_49, t);
      z_15 = t;
      t = term_z_43;
      g_18 = t;
      t = (ATerm) ATinsert(ATempty, z_15);
      h_18 = t;
      t = SSL_printnl(g_18, h_18);
      t = t_47;
      ;
      LocalPopChoice(o_45);
    }
  else
    {
      t = n_45;
    }
  t = q_49;
  {
    ATerm q_45 = t;
    int s_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_47 = NULL;
        t = (ATerm) ATinsert(ATempty, term_t_45);
        u_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_49, (ATerm) ATinsert(ATempty, term_t_45));
        t = t_25(q_49, u_47, t);
        ;
        LocalPopChoice(s_45);
      }
    else
      {
        t = q_45;
        {
          ATerm v_47 = NULL,w_47 = NULL,x_47 = NULL;
          t = term_z_43;
          v_47 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_45), q_49), term_v_45);
          w_47 = t;
          t = SSL_printnl(v_47, w_47);
          t = term_v_37;
          x_47 = t;
          t = SSL_exit(x_47);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_45), q_49), term_v_45);
        }
      }
    t = q_49;
    t = ReadFromFile_0_0(t);
    if(match_cons(t, sym_StrategoDump_2))
      {
        d_47 = ATgetArgument(t, 0);
        e_47 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = term_w_23;
    h_47 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_w_23, d_47);
    t = s_25(h_47, d_47, t);
    t = term_v_23;
    i_47 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_v_23, e_47);
    t = s_25(i_47, e_47, t);
    {
      ATerm a_46 = t;
      int c_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_48 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,d_19 = NULL;
          e_48 = t;
          t = term_i_44;
          t = get_config_0_0(t);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_46), q_49), term_d_46);
          l_18 = t;
          t = SSL_concat_strings(l_18);
          m_18 = t;
          t = term_z_43;
          n_18 = t;
          t = (ATerm) ATinsert(ATempty, m_18);
          d_19 = t;
          t = SSL_printnl(n_18, d_19);
          t = e_48;
          ;
          LocalPopChoice(c_46);
        }
      else
        {
          t = a_46;
        }
    }
  }
  return(t);
}
ATerm v_25 (ATerm s_72, ATerm t_72, ATerm t)
{
  ATerm h_48 = NULL;
  t = SSL_write_term_to_stream_baf(s_72, t_72);
  h_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_48);
  return(t);
}
ATerm w_25 (ATerm l_152 (ATerm), ATerm y_494, ATerm a_73, ATerm t)
{
  ATerm i_48 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_494, term_g_46);
  t = open_stream_0_0(t);
  i_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_48, a_73);
  t = l_152(t);
  t = fclose_0_0(t);
  t = a_73;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm j_48 = NULL;
  j_48 = t;
  t = SSL_table_keys(j_48);
  {
    ATerm u_12 (ATerm t)
    {
      ATerm k_48 = NULL,l_48 = NULL;
      k_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_48, k_48);
      t = w_27(j_48, k_48, t);
      l_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_48, l_48);
      return(t);
    }
    t = map_1_0(u_12, t);
  }
  return(t);
}
ATerm v_12 (ATerm t)
{
  ATerm q_48 = NULL,r_48 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_46 = ATgetArgument(t, 0);
      if(match_cons(h_46, sym_Stream_1))
        {
          q_48 = ATgetArgument(h_46, 0);
        }
      else
        _fail(t);
      r_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_25(q_48, r_48, t);
  return(t);
}
ATerm x_25 (ATerm n_49, ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL;
  t = term_w_23;
  t = table_getlist_0_0(t);
  n_48 = t;
  t = term_v_23;
  t = table_getlist_0_0(t);
  o_48 = t;
  t = (ATerm) ATmakeAppl(sym_StrategoDump_2, n_48, o_48);
  p_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_49, (ATerm) ATmakeAppl(sym_StrategoDump_2, n_48, o_48));
  t = w_25(v_12, n_49, p_48, t);
  {
    ATerm i_46 = t;
    int r_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_49 = NULL,q_19 = NULL,r_19 = NULL,t_19 = NULL,u_19 = NULL;
        a_49 = t;
        t = term_i_44;
        t = get_config_0_0(t);
        t = term_s_46;
        q_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_46, n_49);
        t = v_27(q_19, n_49, t);
        r_19 = t;
        t = term_z_43;
        t_19 = t;
        t = (ATerm) ATinsert(ATempty, r_19);
        u_19 = t;
        t = SSL_printnl(t_19, u_19);
        t = a_49;
        ;
        LocalPopChoice(r_46);
      }
    else
      {
        t = i_46;
      }
  }
  return(t);
}
ATerm EvalPrim_0_0 (ATerm t)
{
  ATerm f_125 = NULL,g_125 = NULL,h_125 = NULL,i_125 = NULL,j_125 = NULL,k_125 = NULL,l_125 = NULL,m_125 = NULL,p_125 = NULL,q_125 = NULL,r_125 = NULL;
  j_125 = t;
  if(match_cons(t, sym_App_2))
    {
      k_125 = ATgetArgument(t, 0);
      r_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_125;
  if(match_cons(t, sym_Prim_2))
    {
      l_125 = ATgetArgument(t, 0);
      m_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_125;
  if(match_string(t, "\"_cpl_loaded\""))
    {
      ATerm p_21 = NULL;
      t = m_125;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_125 = ATgetFirst((ATermList) t);
          q_125 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_125;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_125;
      t = EvalTerm_0_0(t);
      p_21 = t;
      t = _cpl_loaded(p_21);
    }
  else
    {
      if(match_string(t, "\"SSL_strlen\""))
        {
          ATerm z_21 = NULL;
          t = m_125;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              p_125 = ATgetFirst((ATermList) t);
              q_125 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = q_125;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = p_125;
          t = EvalTerm_0_0(t);
          z_21 = t;
          t = SSL_strlen(z_21);
        }
      else
        {
          if(match_string(t, "\"SSL_concat_strings\""))
            {
              ATerm u_22 = NULL;
              t = m_125;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_125 = ATgetFirst((ATermList) t);
                  q_125 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = q_125;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = p_125;
              t = EvalTerm_0_0(t);
              u_22 = t;
              t = SSL_concat_strings(u_22);
            }
          else
            {
              if(match_string(t, "\"SSL_strcat\""))
                {
                  ATerm c_24 = NULL,d_24 = NULL;
                  t = m_125;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      p_125 = ATgetFirst((ATermList) t);
                      q_125 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = q_125;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      f_125 = ATgetFirst((ATermList) t);
                      g_125 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = g_125;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = p_125;
                  t = EvalTerm_0_0(t);
                  c_24 = t;
                  t = f_125;
                  t = EvalTerm_0_0(t);
                  d_24 = t;
                  t = SSL_strcat(c_24, d_24);
                }
              else
                {
                  if(match_string(t, "\"SSL_explode_string\""))
                    {
                      ATerm o_24 = NULL;
                      t = m_125;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          p_125 = ATgetFirst((ATermList) t);
                          q_125 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = q_125;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = p_125;
                      t = EvalTerm_0_0(t);
                      o_24 = t;
                      t = SSL_explode_string(o_24);
                    }
                  else
                    {
                      if(match_string(t, "\"SSL_implode_string\""))
                        {
                          ATerm d_25 = NULL;
                          t = m_125;
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              p_125 = ATgetFirst((ATermList) t);
                              q_125 = (ATerm) ATgetNext((ATermList) t);
                            }
                          else
                            _fail(t);
                          t = q_125;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = p_125;
                          t = EvalTerm_0_0(t);
                          d_25 = t;
                          t = SSL_implode_string(d_25);
                        }
                      else
                        {
                          if(match_string(t, "\"SSL_is_string\""))
                            {
                              ATerm z_25 = NULL;
                              t = m_125;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  p_125 = ATgetFirst((ATermList) t);
                                  q_125 = (ATerm) ATgetNext((ATermList) t);
                                }
                              else
                                _fail(t);
                              t = q_125;
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              t = p_125;
                              t = EvalTerm_0_0(t);
                              z_25 = t;
                              t = SSL_is_string(z_25);
                            }
                          else
                            {
                              if(match_string(t, "SSL_new"))
                                {
                                  t = m_125;
                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                    _fail(t);
                                  t = SSL_new();
                                }
                              else
                                {
                                  if(match_string(t, "\"SSL_address\""))
                                    {
                                      ATerm w_26 = NULL;
                                      t = m_125;
                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                        {
                                          p_125 = ATgetFirst((ATermList) t);
                                          q_125 = (ATerm) ATgetNext((ATermList) t);
                                        }
                                      else
                                        _fail(t);
                                      t = q_125;
                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                        _fail(t);
                                      t = p_125;
                                      t = EvalTerm_0_0(t);
                                      w_26 = t;
                                      t = SSL_address(w_26);
                                    }
                                  else
                                    {
                                      if(match_string(t, "\"SSL_address_lt\""))
                                        {
                                          ATerm s_27 = NULL,u_27 = NULL;
                                          t = m_125;
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              p_125 = ATgetFirst((ATermList) t);
                                              q_125 = (ATerm) ATgetNext((ATermList) t);
                                            }
                                          else
                                            _fail(t);
                                          t = q_125;
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              f_125 = ATgetFirst((ATermList) t);
                                              g_125 = (ATerm) ATgetNext((ATermList) t);
                                            }
                                          else
                                            _fail(t);
                                          t = g_125;
                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                            _fail(t);
                                          t = p_125;
                                          t = EvalTerm_0_0(t);
                                          s_27 = t;
                                          t = f_125;
                                          t = EvalTerm_0_0(t);
                                          u_27 = t;
                                          t = SSL_address_lt(s_27, u_27);
                                        }
                                      else
                                        {
                                          if(match_string(t, "\"SSL_explode_term\""))
                                            {
                                              ATerm o_28 = NULL;
                                              t = m_125;
                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                {
                                                  p_125 = ATgetFirst((ATermList) t);
                                                  q_125 = (ATerm) ATgetNext((ATermList) t);
                                                }
                                              else
                                                _fail(t);
                                              t = q_125;
                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                _fail(t);
                                              t = p_125;
                                              t = EvalTerm_0_0(t);
                                              o_28 = t;
                                              t = SSL_explode_term(o_28);
                                            }
                                          else
                                            {
                                              if(match_string(t, "\"SSL_mkterm\""))
                                                {
                                                  ATerm m_29 = NULL,n_29 = NULL;
                                                  t = m_125;
                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                    {
                                                      p_125 = ATgetFirst((ATermList) t);
                                                      q_125 = (ATerm) ATgetNext((ATermList) t);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = q_125;
                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                    {
                                                      f_125 = ATgetFirst((ATermList) t);
                                                      g_125 = (ATerm) ATgetNext((ATermList) t);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = g_125;
                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                    _fail(t);
                                                  t = p_125;
                                                  t = EvalTerm_0_0(t);
                                                  m_29 = t;
                                                  t = f_125;
                                                  t = EvalTerm_0_0(t);
                                                  n_29 = t;
                                                  t = SSL_mkterm(m_29, n_29);
                                                }
                                              else
                                                {
                                                  if(match_string(t, "\"ATremoveAnnotations\""))
                                                    {
                                                      ATerm p_30 = NULL;
                                                      t = m_125;
                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                        {
                                                          p_125 = ATgetFirst((ATermList) t);
                                                          q_125 = (ATerm) ATgetNext((ATermList) t);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = q_125;
                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                        _fail(t);
                                                      t = p_125;
                                                      t = EvalTerm_0_0(t);
                                                      p_30 = t;
                                                      t = ATremoveAnnotations(p_30);
                                                    }
                                                  else
                                                    {
                                                      if(match_string(t, "\"SSLsetAnnotations\""))
                                                        {
                                                          ATerm m_31 = NULL,n_31 = NULL;
                                                          t = m_125;
                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                            {
                                                              p_125 = ATgetFirst((ATermList) t);
                                                              q_125 = (ATerm) ATgetNext((ATermList) t);
                                                            }
                                                          else
                                                            _fail(t);
                                                          t = q_125;
                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                            {
                                                              f_125 = ATgetFirst((ATermList) t);
                                                              g_125 = (ATerm) ATgetNext((ATermList) t);
                                                            }
                                                          else
                                                            _fail(t);
                                                          t = g_125;
                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                            _fail(t);
                                                          t = p_125;
                                                          t = EvalTerm_0_0(t);
                                                          m_31 = t;
                                                          t = f_125;
                                                          t = EvalTerm_0_0(t);
                                                          n_31 = t;
                                                          t = SSLsetAnnotations(m_31, n_31);
                                                        }
                                                      else
                                                        {
                                                          if(match_string(t, "\"SSLgetAnnotations\""))
                                                            {
                                                              ATerm j_32 = NULL;
                                                              t = m_125;
                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                {
                                                                  p_125 = ATgetFirst((ATermList) t);
                                                                  q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = q_125;
                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                _fail(t);
                                                              t = p_125;
                                                              t = EvalTerm_0_0(t);
                                                              j_32 = t;
                                                              t = SSLgetAnnotations(j_32);
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t, "\"SSL_string_to_int\""))
                                                                {
                                                                  ATerm j_33 = NULL;
                                                                  t = m_125;
                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                    {
                                                                      p_125 = ATgetFirst((ATermList) t);
                                                                      q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  t = q_125;
                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                    _fail(t);
                                                                  t = p_125;
                                                                  t = EvalTerm_0_0(t);
                                                                  j_33 = t;
                                                                  t = SSL_string_to_int(j_33);
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "\"SSL_int_to_string\""))
                                                                    {
                                                                      ATerm y_33 = NULL;
                                                                      t = m_125;
                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                        {
                                                                          p_125 = ATgetFirst((ATermList) t);
                                                                          q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      t = q_125;
                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                        _fail(t);
                                                                      t = p_125;
                                                                      t = EvalTerm_0_0(t);
                                                                      y_33 = t;
                                                                      t = SSL_int_to_string(y_33);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, "\"SSL_int\""))
                                                                        {
                                                                          ATerm r_34 = NULL;
                                                                          t = m_125;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              p_125 = ATgetFirst((ATermList) t);
                                                                              q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          t = q_125;
                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                            _fail(t);
                                                                          t = p_125;
                                                                          t = EvalTerm_0_0(t);
                                                                          r_34 = t;
                                                                          t = SSL_int(r_34);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, "\"SSL_gtr\""))
                                                                            {
                                                                              t = m_125;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  p_125 = ATgetFirst((ATermList) t);
                                                                                  q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = q_125;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  f_125 = ATgetFirst((ATermList) t);
                                                                                  g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = g_125;
                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                _fail(t);
                                                                              {
                                                                                ATerm b_47 = t;
                                                                                int c_47 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm o_35 = NULL,p_35 = NULL;
                                                                                    t = p_125;
                                                                                    t = EvalTerm_0_0(t);
                                                                                    o_35 = t;
                                                                                    t = f_125;
                                                                                    t = EvalTerm_0_0(t);
                                                                                    p_35 = t;
                                                                                    t = SSL_gtr(o_35, p_35);
                                                                                    ;
                                                                                    LocalPopChoice(c_47);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = b_47;
                                                                                    {
                                                                                      ATerm j_36 = NULL,l_36 = NULL;
                                                                                      t = p_125;
                                                                                      t = EvalTerm_0_0(t);
                                                                                      j_36 = t;
                                                                                      t = f_125;
                                                                                      t = EvalTerm_0_0(t);
                                                                                      l_36 = t;
                                                                                      t = SSL_gtr(j_36, l_36);
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "\"SSL_gti\""))
                                                                                {
                                                                                  t = m_125;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      p_125 = ATgetFirst((ATermList) t);
                                                                                      q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  t = q_125;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      f_125 = ATgetFirst((ATermList) t);
                                                                                      g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  t = g_125;
                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                    _fail(t);
                                                                                  {
                                                                                    ATerm j_47 = t;
                                                                                    int k_47 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm x_36 = NULL,y_36 = NULL;
                                                                                        t = p_125;
                                                                                        t = EvalTerm_0_0(t);
                                                                                        x_36 = t;
                                                                                        t = f_125;
                                                                                        t = EvalTerm_0_0(t);
                                                                                        y_36 = t;
                                                                                        t = SSL_gti(x_36, y_36);
                                                                                        ;
                                                                                        LocalPopChoice(k_47);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = j_47;
                                                                                        {
                                                                                          ATerm y_37 = NULL,z_37 = NULL;
                                                                                          t = p_125;
                                                                                          t = EvalTerm_0_0(t);
                                                                                          y_37 = t;
                                                                                          t = f_125;
                                                                                          t = EvalTerm_0_0(t);
                                                                                          z_37 = t;
                                                                                          t = SSL_gti(y_37, z_37);
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "\"SSL_mod\""))
                                                                                    {
                                                                                      ATerm b_39 = NULL,c_39 = NULL;
                                                                                      t = m_125;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          p_125 = ATgetFirst((ATermList) t);
                                                                                          q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = q_125;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          f_125 = ATgetFirst((ATermList) t);
                                                                                          g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = g_125;
                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                        _fail(t);
                                                                                      t = p_125;
                                                                                      t = EvalTerm_0_0(t);
                                                                                      b_39 = t;
                                                                                      t = f_125;
                                                                                      t = EvalTerm_0_0(t);
                                                                                      c_39 = t;
                                                                                      t = SSL_mod(b_39, c_39);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "\"SSL_divr\""))
                                                                                        {
                                                                                          t = m_125;
                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                            {
                                                                                              p_125 = ATgetFirst((ATermList) t);
                                                                                              q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = q_125;
                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                            {
                                                                                              f_125 = ATgetFirst((ATermList) t);
                                                                                              g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = g_125;
                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                            _fail(t);
                                                                                          {
                                                                                            ATerm l_47 = t;
                                                                                            int m_47 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm f_40 = NULL,g_40 = NULL;
                                                                                                t = p_125;
                                                                                                t = EvalTerm_0_0(t);
                                                                                                f_40 = t;
                                                                                                t = f_125;
                                                                                                t = EvalTerm_0_0(t);
                                                                                                g_40 = t;
                                                                                                t = SSL_divr(f_40, g_40);
                                                                                                ;
                                                                                                LocalPopChoice(m_47);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = l_47;
                                                                                                {
                                                                                                  ATerm t_40 = NULL,v_40 = NULL;
                                                                                                  t = p_125;
                                                                                                  t = EvalTerm_0_0(t);
                                                                                                  t_40 = t;
                                                                                                  t = f_125;
                                                                                                  t = EvalTerm_0_0(t);
                                                                                                  v_40 = t;
                                                                                                  t = SSL_divr(t_40, v_40);
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, "\"SSL_divi\""))
                                                                                            {
                                                                                              t = m_125;
                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                {
                                                                                                  p_125 = ATgetFirst((ATermList) t);
                                                                                                  q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              t = q_125;
                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                {
                                                                                                  f_125 = ATgetFirst((ATermList) t);
                                                                                                  g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              t = g_125;
                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                _fail(t);
                                                                                              {
                                                                                                ATerm n_47 = t;
                                                                                                int o_47 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm i_41 = NULL,j_41 = NULL;
                                                                                                    t = p_125;
                                                                                                    t = EvalTerm_0_0(t);
                                                                                                    i_41 = t;
                                                                                                    t = f_125;
                                                                                                    t = EvalTerm_0_0(t);
                                                                                                    j_41 = t;
                                                                                                    t = SSL_divi(i_41, j_41);
                                                                                                    ;
                                                                                                    LocalPopChoice(o_47);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = n_47;
                                                                                                    {
                                                                                                      ATerm w_41 = NULL,y_41 = NULL;
                                                                                                      t = p_125;
                                                                                                      t = EvalTerm_0_0(t);
                                                                                                      w_41 = t;
                                                                                                      t = f_125;
                                                                                                      t = EvalTerm_0_0(t);
                                                                                                      y_41 = t;
                                                                                                      t = SSL_divi(w_41, y_41);
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "\"SSL_mulr\""))
                                                                                                {
                                                                                                  t = m_125;
                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                    {
                                                                                                      p_125 = ATgetFirst((ATermList) t);
                                                                                                      q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = q_125;
                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                    {
                                                                                                      f_125 = ATgetFirst((ATermList) t);
                                                                                                      g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = g_125;
                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                    _fail(t);
                                                                                                  {
                                                                                                    ATerm p_47 = t;
                                                                                                    int q_47 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm m_42 = NULL,n_42 = NULL;
                                                                                                        t = p_125;
                                                                                                        t = EvalTerm_0_0(t);
                                                                                                        m_42 = t;
                                                                                                        t = f_125;
                                                                                                        t = EvalTerm_0_0(t);
                                                                                                        n_42 = t;
                                                                                                        t = SSL_mulr(m_42, n_42);
                                                                                                        ;
                                                                                                        LocalPopChoice(q_47);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = p_47;
                                                                                                        {
                                                                                                          ATerm a_43 = NULL,b_43 = NULL;
                                                                                                          t = p_125;
                                                                                                          t = EvalTerm_0_0(t);
                                                                                                          a_43 = t;
                                                                                                          t = f_125;
                                                                                                          t = EvalTerm_0_0(t);
                                                                                                          b_43 = t;
                                                                                                          t = SSL_mulr(a_43, b_43);
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "\"SSL_muli\""))
                                                                                                    {
                                                                                                      t = m_125;
                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                        {
                                                                                                          p_125 = ATgetFirst((ATermList) t);
                                                                                                          q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      t = q_125;
                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                        {
                                                                                                          f_125 = ATgetFirst((ATermList) t);
                                                                                                          g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      t = g_125;
                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                        _fail(t);
                                                                                                      {
                                                                                                        ATerm r_47 = t;
                                                                                                        int s_47 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm q_44 = NULL,w_44 = NULL;
                                                                                                            t = p_125;
                                                                                                            t = EvalTerm_0_0(t);
                                                                                                            q_44 = t;
                                                                                                            t = f_125;
                                                                                                            t = EvalTerm_0_0(t);
                                                                                                            w_44 = t;
                                                                                                            t = SSL_muli(q_44, w_44);
                                                                                                            ;
                                                                                                            LocalPopChoice(s_47);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = r_47;
                                                                                                            {
                                                                                                              ATerm u_45 = NULL,w_45 = NULL;
                                                                                                              t = p_125;
                                                                                                              t = EvalTerm_0_0(t);
                                                                                                              u_45 = t;
                                                                                                              t = f_125;
                                                                                                              t = EvalTerm_0_0(t);
                                                                                                              w_45 = t;
                                                                                                              t = SSL_muli(u_45, w_45);
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "\"SSL_subtr\""))
                                                                                                        {
                                                                                                          t = m_125;
                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                            {
                                                                                                              p_125 = ATgetFirst((ATermList) t);
                                                                                                              q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          t = q_125;
                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                            {
                                                                                                              f_125 = ATgetFirst((ATermList) t);
                                                                                                              g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          t = g_125;
                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                            _fail(t);
                                                                                                          {
                                                                                                            ATerm y_47 = t;
                                                                                                            int z_47 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                ATerm f_47 = NULL,g_47 = NULL;
                                                                                                                t = p_125;
                                                                                                                t = EvalTerm_0_0(t);
                                                                                                                f_47 = t;
                                                                                                                t = f_125;
                                                                                                                t = EvalTerm_0_0(t);
                                                                                                                g_47 = t;
                                                                                                                t = SSL_subtr(f_47, g_47);
                                                                                                                ;
                                                                                                                LocalPopChoice(z_47);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = y_47;
                                                                                                                {
                                                                                                                  ATerm f_49 = NULL,i_49 = NULL;
                                                                                                                  t = p_125;
                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                  f_49 = t;
                                                                                                                  t = f_125;
                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                  i_49 = t;
                                                                                                                  t = SSL_subtr(f_49, i_49);
                                                                                                                }
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "\"SSL_subti\""))
                                                                                                            {
                                                                                                              t = m_125;
                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                {
                                                                                                                  p_125 = ATgetFirst((ATermList) t);
                                                                                                                  q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              t = q_125;
                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                {
                                                                                                                  f_125 = ATgetFirst((ATermList) t);
                                                                                                                  g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              t = g_125;
                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                _fail(t);
                                                                                                              {
                                                                                                                ATerm a_48 = t;
                                                                                                                int b_48 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    ATerm x_49 = NULL,y_49 = NULL;
                                                                                                                    t = p_125;
                                                                                                                    t = EvalTerm_0_0(t);
                                                                                                                    x_49 = t;
                                                                                                                    t = f_125;
                                                                                                                    t = EvalTerm_0_0(t);
                                                                                                                    y_49 = t;
                                                                                                                    t = SSL_subti(x_49, y_49);
                                                                                                                    ;
                                                                                                                    LocalPopChoice(b_48);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = a_48;
                                                                                                                    {
                                                                                                                      ATerm k_50 = NULL,l_50 = NULL;
                                                                                                                      t = p_125;
                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                      k_50 = t;
                                                                                                                      t = f_125;
                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                      l_50 = t;
                                                                                                                      t = SSL_subti(k_50, l_50);
                                                                                                                    }
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "\"SSL_addr\""))
                                                                                                                {
                                                                                                                  t = m_125;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                    {
                                                                                                                      p_125 = ATgetFirst((ATermList) t);
                                                                                                                      q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  t = q_125;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                    {
                                                                                                                      f_125 = ATgetFirst((ATermList) t);
                                                                                                                      g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  t = g_125;
                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                    _fail(t);
                                                                                                                  {
                                                                                                                    ATerm c_48 = t;
                                                                                                                    int d_48 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        ATerm x_50 = NULL,y_50 = NULL;
                                                                                                                        t = p_125;
                                                                                                                        t = EvalTerm_0_0(t);
                                                                                                                        x_50 = t;
                                                                                                                        t = f_125;
                                                                                                                        t = EvalTerm_0_0(t);
                                                                                                                        y_50 = t;
                                                                                                                        t = SSL_addr(x_50, y_50);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(d_48);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = c_48;
                                                                                                                        {
                                                                                                                          ATerm k_51 = NULL,l_51 = NULL;
                                                                                                                          t = p_125;
                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                          k_51 = t;
                                                                                                                          t = f_125;
                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                          l_51 = t;
                                                                                                                          t = SSL_addr(k_51, l_51);
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "\"SSL_addi\""))
                                                                                                                    {
                                                                                                                      t = m_125;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                        {
                                                                                                                          p_125 = ATgetFirst((ATermList) t);
                                                                                                                          q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      t = q_125;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                        {
                                                                                                                          f_125 = ATgetFirst((ATermList) t);
                                                                                                                          g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      t = g_125;
                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                        _fail(t);
                                                                                                                      {
                                                                                                                        ATerm f_48 = t;
                                                                                                                        int g_48 = stack_ptr;
                                                                                                                        if((PushChoice() == 0))
                                                                                                                          {
                                                                                                                            ATerm x_51 = NULL,y_51 = NULL;
                                                                                                                            t = p_125;
                                                                                                                            t = EvalTerm_0_0(t);
                                                                                                                            x_51 = t;
                                                                                                                            t = f_125;
                                                                                                                            t = EvalTerm_0_0(t);
                                                                                                                            y_51 = t;
                                                                                                                            t = SSL_addi(x_51, y_51);
                                                                                                                            ;
                                                                                                                            LocalPopChoice(g_48);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            t = f_48;
                                                                                                                            {
                                                                                                                              ATerm k_52 = NULL,l_52 = NULL;
                                                                                                                              t = p_125;
                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                              k_52 = t;
                                                                                                                              t = f_125;
                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                              l_52 = t;
                                                                                                                              t = SSL_addi(k_52, l_52);
                                                                                                                            }
                                                                                                                          }
                                                                                                                      }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "\"SSL_is_int\""))
                                                                                                                        {
                                                                                                                          ATerm v_52 = NULL;
                                                                                                                          t = m_125;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                            {
                                                                                                                              p_125 = ATgetFirst((ATermList) t);
                                                                                                                              q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            _fail(t);
                                                                                                                          t = q_125;
                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                            _fail(t);
                                                                                                                          t = p_125;
                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                          v_52 = t;
                                                                                                                          t = SSL_is_int(v_52);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "\"SSL_real\""))
                                                                                                                            {
                                                                                                                              ATerm e_53 = NULL;
                                                                                                                              t = m_125;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                {
                                                                                                                                  p_125 = ATgetFirst((ATermList) t);
                                                                                                                                  q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                _fail(t);
                                                                                                                              t = q_125;
                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                _fail(t);
                                                                                                                              t = p_125;
                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                              e_53 = t;
                                                                                                                              t = SSL_real(e_53);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "\"SSL_string_to_real\""))
                                                                                                                                {
                                                                                                                                  ATerm n_53 = NULL;
                                                                                                                                  t = m_125;
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      p_125 = ATgetFirst((ATermList) t);
                                                                                                                                      q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    _fail(t);
                                                                                                                                  t = q_125;
                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                    _fail(t);
                                                                                                                                  t = p_125;
                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                  n_53 = t;
                                                                                                                                  t = SSL_string_to_real(n_53);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "\"SSL_real_to_string\""))
                                                                                                                                    {
                                                                                                                                      ATerm w_53 = NULL;
                                                                                                                                      t = m_125;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                        {
                                                                                                                                          p_125 = ATgetFirst((ATermList) t);
                                                                                                                                          q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        _fail(t);
                                                                                                                                      t = q_125;
                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                        _fail(t);
                                                                                                                                      t = p_125;
                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                      w_53 = t;
                                                                                                                                      t = SSL_real_to_string(w_53);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "\"SSL_atan2\""))
                                                                                                                                        {
                                                                                                                                          ATerm h_54 = NULL,i_54 = NULL;
                                                                                                                                          t = m_125;
                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                            {
                                                                                                                                              p_125 = ATgetFirst((ATermList) t);
                                                                                                                                              q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            _fail(t);
                                                                                                                                          t = q_125;
                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                            {
                                                                                                                                              f_125 = ATgetFirst((ATermList) t);
                                                                                                                                              g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            _fail(t);
                                                                                                                                          t = g_125;
                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                            _fail(t);
                                                                                                                                          t = p_125;
                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                          h_54 = t;
                                                                                                                                          t = f_125;
                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                          i_54 = t;
                                                                                                                                          t = SSL_atan2(h_54, i_54);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "\"SSL_sqrt\""))
                                                                                                                                            {
                                                                                                                                              ATerm s_54 = NULL;
                                                                                                                                              t = m_125;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                {
                                                                                                                                                  p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                  q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              t = q_125;
                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                _fail(t);
                                                                                                                                              t = p_125;
                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                              s_54 = t;
                                                                                                                                              t = SSL_sqrt(s_54);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(t, "\"SSL_sin\""))
                                                                                                                                                {
                                                                                                                                                  ATerm b_55 = NULL;
                                                                                                                                                  t = m_125;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                    {
                                                                                                                                                      p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                      q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    _fail(t);
                                                                                                                                                  t = q_125;
                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                    _fail(t);
                                                                                                                                                  t = p_125;
                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                  b_55 = t;
                                                                                                                                                  t = SSL_sin(b_55);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_string(t, "\"SSL_cos\""))
                                                                                                                                                    {
                                                                                                                                                      ATerm k_55 = NULL;
                                                                                                                                                      t = m_125;
                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                        {
                                                                                                                                                          p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                          q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        _fail(t);
                                                                                                                                                      t = q_125;
                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                        _fail(t);
                                                                                                                                                      t = p_125;
                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                      k_55 = t;
                                                                                                                                                      t = SSL_cos(k_55);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      if(match_string(t, "\"SSL_is_real\""))
                                                                                                                                                        {
                                                                                                                                                          ATerm t_55 = NULL;
                                                                                                                                                          t = m_125;
                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                            {
                                                                                                                                                              p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                              q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            _fail(t);
                                                                                                                                                          t = q_125;
                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                            _fail(t);
                                                                                                                                                          t = p_125;
                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                          t_55 = t;
                                                                                                                                                          t = SSL_is_real(t_55);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          if(match_string(t, "\"SSL_open_file\""))
                                                                                                                                                            {
                                                                                                                                                              ATerm e_56 = NULL,f_56 = NULL;
                                                                                                                                                              t = m_125;
                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                {
                                                                                                                                                                  p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                  q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                _fail(t);
                                                                                                                                                              t = q_125;
                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                {
                                                                                                                                                                  f_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                  g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                _fail(t);
                                                                                                                                                              t = g_125;
                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                _fail(t);
                                                                                                                                                              t = p_125;
                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                              e_56 = t;
                                                                                                                                                              t = f_125;
                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                              f_56 = t;
                                                                                                                                                              t = SSL_open_file(e_56, f_56);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              if(match_string(t, "\"SSL_close_file\""))
                                                                                                                                                                {
                                                                                                                                                                  ATerm v_56 = NULL;
                                                                                                                                                                  t = m_125;
                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                    {
                                                                                                                                                                      p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                      q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                    }
                                                                                                                                                                  else
                                                                                                                                                                    _fail(t);
                                                                                                                                                                  t = q_125;
                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                    _fail(t);
                                                                                                                                                                  t = p_125;
                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                  v_56 = t;
                                                                                                                                                                  t = SSL_close_file(v_56);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  if(match_string(t, "SSL_pipe"))
                                                                                                                                                                    {
                                                                                                                                                                      t = m_125;
                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      t = SSL_pipe();
                                                                                                                                                                    }
                                                                                                                                                                  else
                                                                                                                                                                    {
                                                                                                                                                                      if(match_string(t, "\"SSL_fileno\""))
                                                                                                                                                                        {
                                                                                                                                                                          ATerm g_57 = NULL;
                                                                                                                                                                          t = m_125;
                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                            {
                                                                                                                                                                              p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                              q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                            }
                                                                                                                                                                          else
                                                                                                                                                                            _fail(t);
                                                                                                                                                                          t = q_125;
                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                            _fail(t);
                                                                                                                                                                          t = p_125;
                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                          g_57 = t;
                                                                                                                                                                          t = SSL_fileno(g_57);
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        {
                                                                                                                                                                          if(match_string(t, "\"SSL_fdopen\""))
                                                                                                                                                                            {
                                                                                                                                                                              ATerm r_57 = NULL,s_57 = NULL;
                                                                                                                                                                              t = m_125;
                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                {
                                                                                                                                                                                  p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                  q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              t = q_125;
                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                {
                                                                                                                                                                                  f_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                  g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              t = g_125;
                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              t = p_125;
                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                              r_57 = t;
                                                                                                                                                                              t = f_125;
                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                              s_57 = t;
                                                                                                                                                                              t = SSL_fdopen(r_57, s_57);
                                                                                                                                                                            }
                                                                                                                                                                          else
                                                                                                                                                                            {
                                                                                                                                                                              if(match_string(t, "\"SSL_access\""))
                                                                                                                                                                                {
                                                                                                                                                                                  ATerm e_58 = NULL,f_58 = NULL;
                                                                                                                                                                                  t = m_125;
                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                    {
                                                                                                                                                                                      p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                      q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                    }
                                                                                                                                                                                  else
                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                  t = q_125;
                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                    {
                                                                                                                                                                                      f_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                      g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                    }
                                                                                                                                                                                  else
                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                  t = g_125;
                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                  t = p_125;
                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                  e_58 = t;
                                                                                                                                                                                  t = f_125;
                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                  f_58 = t;
                                                                                                                                                                                  t = SSL_access(e_58, f_58);
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                {
                                                                                                                                                                                  if(match_string(t, "\"SSL_dup2\""))
                                                                                                                                                                                    {
                                                                                                                                                                                      ATerm r_58 = NULL,s_58 = NULL;
                                                                                                                                                                                      t = m_125;
                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                        {
                                                                                                                                                                                          p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                          q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                        }
                                                                                                                                                                                      else
                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                      t = q_125;
                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                        {
                                                                                                                                                                                          f_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                          g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                        }
                                                                                                                                                                                      else
                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                      t = g_125;
                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                      t = p_125;
                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                      r_58 = t;
                                                                                                                                                                                      t = f_125;
                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                      s_58 = t;
                                                                                                                                                                                      t = SSL_dup2(r_58, s_58);
                                                                                                                                                                                    }
                                                                                                                                                                                  else
                                                                                                                                                                                    {
                                                                                                                                                                                      if(match_string(t, "\"SSL_dup\""))
                                                                                                                                                                                        {
                                                                                                                                                                                          ATerm c_59 = NULL;
                                                                                                                                                                                          t = m_125;
                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                            {
                                                                                                                                                                                              p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                              q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                            }
                                                                                                                                                                                          else
                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                          t = q_125;
                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                          t = p_125;
                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                          c_59 = t;
                                                                                                                                                                                          t = SSL_dup(c_59);
                                                                                                                                                                                        }
                                                                                                                                                                                      else
                                                                                                                                                                                        {
                                                                                                                                                                                          if(match_string(t, "\"SSL_close\""))
                                                                                                                                                                                            {
                                                                                                                                                                                              ATerm l_59 = NULL;
                                                                                                                                                                                              t = m_125;
                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                {
                                                                                                                                                                                                  p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                  q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                }
                                                                                                                                                                                              else
                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                              t = q_125;
                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                              t = p_125;
                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                              l_59 = t;
                                                                                                                                                                                              t = SSL_close(l_59);
                                                                                                                                                                                            }
                                                                                                                                                                                          else
                                                                                                                                                                                            {
                                                                                                                                                                                              if(match_string(t, "\"SSL_mkstemp\""))
                                                                                                                                                                                                {
                                                                                                                                                                                                  ATerm u_59 = NULL;
                                                                                                                                                                                                  t = m_125;
                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                    {
                                                                                                                                                                                                      p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                      q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                    }
                                                                                                                                                                                                  else
                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                  t = q_125;
                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                  t = p_125;
                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                  u_59 = t;
                                                                                                                                                                                                  t = SSL_mkstemp(u_59);
                                                                                                                                                                                                }
                                                                                                                                                                                              else
                                                                                                                                                                                                {
                                                                                                                                                                                                  if(match_string(t, "\"SSL_open\""))
                                                                                                                                                                                                    {
                                                                                                                                                                                                      ATerm d_60 = NULL;
                                                                                                                                                                                                      t = m_125;
                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                        {
                                                                                                                                                                                                          p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                          q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                        }
                                                                                                                                                                                                      else
                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                      t = q_125;
                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                      t = p_125;
                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                      d_60 = t;
                                                                                                                                                                                                      t = SSL_open(d_60);
                                                                                                                                                                                                    }
                                                                                                                                                                                                  else
                                                                                                                                                                                                    {
                                                                                                                                                                                                      if(match_string(t, "\"SSL_creat\""))
                                                                                                                                                                                                        {
                                                                                                                                                                                                          ATerm m_60 = NULL;
                                                                                                                                                                                                          t = m_125;
                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                            {
                                                                                                                                                                                                              p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                              q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                            }
                                                                                                                                                                                                          else
                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                          t = q_125;
                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                          t = p_125;
                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                          m_60 = t;
                                                                                                                                                                                                          t = SSL_creat(m_60);
                                                                                                                                                                                                        }
                                                                                                                                                                                                      else
                                                                                                                                                                                                        {
                                                                                                                                                                                                          if(match_string(t, "SSL_P_tmpdir"))
                                                                                                                                                                                                            {
                                                                                                                                                                                                              t = m_125;
                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                              t = SSL_P_tmpdir();
                                                                                                                                                                                                            }
                                                                                                                                                                                                          else
                                                                                                                                                                                                            {
                                                                                                                                                                                                              if(match_string(t, "SSL_STDERR_FILENO"))
                                                                                                                                                                                                                {
                                                                                                                                                                                                                  t = m_125;
                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                  t = SSL_STDERR_FILENO();
                                                                                                                                                                                                                }
                                                                                                                                                                                                              else
                                                                                                                                                                                                                {
                                                                                                                                                                                                                  if(match_string(t, "SSL_STDOUT_FILENO"))
                                                                                                                                                                                                                    {
                                                                                                                                                                                                                      t = m_125;
                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                      t = SSL_STDOUT_FILENO();
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                  else
                                                                                                                                                                                                                    {
                                                                                                                                                                                                                      if(match_string(t, "SSL_STDIN_FILENO"))
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                          t = m_125;
                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                          t = SSL_STDIN_FILENO();
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                      else
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                          if(match_string(t, "\"SSL_fgetc\""))
                                                                                                                                                                                                                            {
                                                                                                                                                                                                                              ATerm d_61 = NULL;
                                                                                                                                                                                                                              t = m_125;
                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                  p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                  q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                }
                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                              t = q_125;
                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                              t = p_125;
                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                              d_61 = t;
                                                                                                                                                                                                                              t = SSL_fgetc(d_61);
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                          else
                                                                                                                                                                                                                            {
                                                                                                                                                                                                                              if(match_string(t, "\"SSL_fputc\""))
                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                  ATerm o_61 = NULL,p_61 = NULL;
                                                                                                                                                                                                                                  t = m_125;
                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                      p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                      q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                  t = q_125;
                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                      f_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                      g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                  t = g_125;
                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                  t = p_125;
                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                  o_61 = t;
                                                                                                                                                                                                                                  t = f_125;
                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                  p_61 = t;
                                                                                                                                                                                                                                  t = SSL_fputc(o_61, p_61);
                                                                                                                                                                                                                                }
                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_puts\""))
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                      ATerm z_61 = NULL;
                                                                                                                                                                                                                                      t = m_125;
                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                          p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                          q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                      t = q_125;
                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                      t = p_125;
                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                      z_61 = t;
                                                                                                                                                                                                                                      t = SSL_puts(z_61);
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_fputs\""))
                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                          ATerm k_62 = NULL,l_62 = NULL;
                                                                                                                                                                                                                                          t = m_125;
                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                              p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                              q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                          t = q_125;
                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                              f_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                              g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                          t = g_125;
                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                          t = p_125;
                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                          k_62 = t;
                                                                                                                                                                                                                                          t = f_125;
                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                          l_62 = t;
                                                                                                                                                                                                                                          t = SSL_fputs(k_62, l_62);
                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_fflush\""))
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                              t = m_125;
                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                  p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                  q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                              t = q_125;
                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                ATerm m_48 = t;
                                                                                                                                                                                                                                                int s_48 = stack_ptr;
                                                                                                                                                                                                                                                if((PushChoice() == 0))
                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                    ATerm v_62 = NULL;
                                                                                                                                                                                                                                                    t = p_125;
                                                                                                                                                                                                                                                    t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                    v_62 = t;
                                                                                                                                                                                                                                                    t = SSL_fflush(v_62);
                                                                                                                                                                                                                                                    ;
                                                                                                                                                                                                                                                    LocalPopChoice(s_48);
                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                else
                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                    t = m_48;
                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                      ATerm e_63 = NULL;
                                                                                                                                                                                                                                                      t = p_125;
                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                      e_63 = t;
                                                                                                                                                                                                                                                      t = SSL_fflush(e_63);
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_fclose\""))
                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                  t = m_125;
                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                      p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                      q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                  t = q_125;
                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                    ATerm t_48 = t;
                                                                                                                                                                                                                                                    int u_48 = stack_ptr;
                                                                                                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                        ATerm n_63 = NULL;
                                                                                                                                                                                                                                                        t = p_125;
                                                                                                                                                                                                                                                        t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                        n_63 = t;
                                                                                                                                                                                                                                                        t = SSL_fclose(n_63);
                                                                                                                                                                                                                                                        ;
                                                                                                                                                                                                                                                        LocalPopChoice(u_48);
                                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                        t = t_48;
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          ATerm w_63 = NULL;
                                                                                                                                                                                                                                                          t = p_125;
                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                          w_63 = t;
                                                                                                                                                                                                                                                          t = SSL_fclose(w_63);
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_fopen\""))
                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                      ATerm j_64 = NULL,k_64 = NULL;
                                                                                                                                                                                                                                                      t = m_125;
                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                          q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                      t = q_125;
                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          f_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                          g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                      t = g_125;
                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                      t = p_125;
                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                      j_64 = t;
                                                                                                                                                                                                                                                      t = f_125;
                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                      k_64 = t;
                                                                                                                                                                                                                                                      t = SSL_fopen(j_64, k_64);
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                      if(match_string(t, "SSL_stderr_stream"))
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          t = m_125;
                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                          t = SSL_stderr_stream();
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          if(match_string(t, "SSL_stdout_stream"))
                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                              t = m_125;
                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                              t = SSL_stdout_stream();
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                              if(match_string(t, "SSL_stdin_stream"))
                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                  t = m_125;
                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                  t = SSL_stdin_stream();
                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_setenv\""))
                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                      ATerm e_65 = NULL,f_65 = NULL,g_65 = NULL;
                                                                                                                                                                                                                                                                      t = m_125;
                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                          q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                      t = q_125;
                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          f_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                          g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                      t = g_125;
                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          h_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                          i_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                      t = i_125;
                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                      t = p_125;
                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                      e_65 = t;
                                                                                                                                                                                                                                                                      t = f_125;
                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                      f_65 = t;
                                                                                                                                                                                                                                                                      t = h_125;
                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                      g_65 = t;
                                                                                                                                                                                                                                                                      t = SSL_setenv(e_65, f_65, g_65);
                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_getenv\""))
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          ATerm r_65 = NULL;
                                                                                                                                                                                                                                                                          t = m_125;
                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                              p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                              q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                          t = q_125;
                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                          t = p_125;
                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                          r_65 = t;
                                                                                                                                                                                                                                                                          t = SSL_getenv(r_65);
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_remove\""))
                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                              ATerm a_66 = NULL;
                                                                                                                                                                                                                                                                              t = m_125;
                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                  p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                  q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                              t = q_125;
                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                              t = p_125;
                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                              a_66 = t;
                                                                                                                                                                                                                                                                              t = SSL_remove(a_66);
                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_link\""))
                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                  ATerm n_66 = NULL,o_66 = NULL;
                                                                                                                                                                                                                                                                                  t = m_125;
                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                      p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                      q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                  t = q_125;
                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                      f_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                      g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                  t = g_125;
                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                  t = p_125;
                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                  n_66 = t;
                                                                                                                                                                                                                                                                                  t = f_125;
                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                  o_66 = t;
                                                                                                                                                                                                                                                                                  t = SSL_link(n_66, o_66);
                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_fdcopy\""))
                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                      ATerm a_67 = NULL,o_67 = NULL;
                                                                                                                                                                                                                                                                                      t = m_125;
                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                          p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                          q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                      t = q_125;
                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                          f_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                          g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                      t = g_125;
                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                      t = p_125;
                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                      a_67 = t;
                                                                                                                                                                                                                                                                                      t = f_125;
                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                      o_67 = t;
                                                                                                                                                                                                                                                                                      t = SSL_fdcopy(a_67, o_67);
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_copy\""))
                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                          ATerm y_68 = NULL,m_69 = NULL;
                                                                                                                                                                                                                                                                                          t = m_125;
                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                              p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                              q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                          t = q_125;
                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                              f_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                              g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                          t = g_125;
                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                          t = p_125;
                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                          y_68 = t;
                                                                                                                                                                                                                                                                                          t = f_125;
                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                          m_69 = t;
                                                                                                                                                                                                                                                                                          t = SSL_copy(y_68, m_69);
                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_rename\""))
                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                              ATerm y_70 = NULL,z_70 = NULL;
                                                                                                                                                                                                                                                                                              t = m_125;
                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                  p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                  q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                              t = q_125;
                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                  f_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                  g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                              t = g_125;
                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                              t = p_125;
                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                              y_70 = t;
                                                                                                                                                                                                                                                                                              t = f_125;
                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                              z_70 = t;
                                                                                                                                                                                                                                                                                              t = SSL_rename(y_70, z_70);
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_modification_time\""))
                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                  ATerm x_71 = NULL;
                                                                                                                                                                                                                                                                                                  t = m_125;
                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                      p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                      q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                  t = q_125;
                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                  t = p_125;
                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                  x_71 = t;
                                                                                                                                                                                                                                                                                                  t = SSL_modification_time(x_71);
                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_readdir\""))
                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                      ATerm n_72 = NULL;
                                                                                                                                                                                                                                                                                                      t = m_125;
                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                          p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                          q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                      t = q_125;
                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                      t = p_125;
                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                      n_72 = t;
                                                                                                                                                                                                                                                                                                      t = SSL_readdir(n_72);
                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_getchar\""))
                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                          ATerm s_73 = NULL;
                                                                                                                                                                                                                                                                                                          t = m_125;
                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                              p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                              q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                          t = q_125;
                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                          t = p_125;
                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                          s_73 = t;
                                                                                                                                                                                                                                                                                                          t = SSL_getchar(s_73);
                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_printascii\""))
                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                              ATerm r_74 = NULL,d_75 = NULL;
                                                                                                                                                                                                                                                                                                              t = m_125;
                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                  p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                  q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                              t = q_125;
                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                  f_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                  g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                              t = g_125;
                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                              t = p_125;
                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                              r_74 = t;
                                                                                                                                                                                                                                                                                                              t = f_125;
                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                              d_75 = t;
                                                                                                                                                                                                                                                                                                              t = SSL_printascii(r_74, d_75);
                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_printnl\""))
                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                  ATerm x_79 = NULL,y_79 = NULL;
                                                                                                                                                                                                                                                                                                                  t = m_125;
                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                      p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                      q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                  t = q_125;
                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                      f_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                      g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                  t = g_125;
                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                  t = p_125;
                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                  x_79 = t;
                                                                                                                                                                                                                                                                                                                  t = f_125;
                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                  y_79 = t;
                                                                                                                                                                                                                                                                                                                  t = SSL_printnl(x_79, y_79);
                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_print\""))
                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                      ATerm h_83 = NULL,i_83 = NULL;
                                                                                                                                                                                                                                                                                                                      t = m_125;
                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                          p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                          q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                      t = q_125;
                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                          f_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                          g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                      t = g_125;
                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                      t = p_125;
                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                      h_83 = t;
                                                                                                                                                                                                                                                                                                                      t = f_125;
                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                      i_83 = t;
                                                                                                                                                                                                                                                                                                                      t = SSL_print(h_83, i_83);
                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_read_term_from_stream\""))
                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                          ATerm r_84 = NULL;
                                                                                                                                                                                                                                                                                                                          t = m_125;
                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                              p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                              q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                          t = q_125;
                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                          t = p_125;
                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                          r_84 = t;
                                                                                                                                                                                                                                                                                                                          t = SSL_read_term_from_stream(r_84);
                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_write_term_to_stream_text\""))
                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                              ATerm c_85 = NULL,d_85 = NULL;
                                                                                                                                                                                                                                                                                                                              t = m_125;
                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                  p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                  q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                              t = q_125;
                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                  f_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                  g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                              t = g_125;
                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                              t = p_125;
                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                              c_85 = t;
                                                                                                                                                                                                                                                                                                                              t = f_125;
                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                              d_85 = t;
                                                                                                                                                                                                                                                                                                                              t = SSL_write_term_to_stream_text(c_85, d_85);
                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_write_term_to_stream_taf\""))
                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                  ATerm b_86 = NULL,c_86 = NULL;
                                                                                                                                                                                                                                                                                                                                  t = m_125;
                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                      p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                      q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                  t = q_125;
                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                      f_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                      g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                  t = g_125;
                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                  t = p_125;
                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                  b_86 = t;
                                                                                                                                                                                                                                                                                                                                  t = f_125;
                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                  c_86 = t;
                                                                                                                                                                                                                                                                                                                                  t = SSL_write_term_to_stream_taf(b_86, c_86);
                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_write_term_to_stream_baf\""))
                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                      ATerm y_86 = NULL,z_86 = NULL;
                                                                                                                                                                                                                                                                                                                                      t = m_125;
                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                          p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                          q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                      t = q_125;
                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                          f_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                          g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                      t = g_125;
                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                      t = p_125;
                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                      y_86 = t;
                                                                                                                                                                                                                                                                                                                                      t = f_125;
                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                      z_86 = t;
                                                                                                                                                                                                                                                                                                                                      t = SSL_write_term_to_stream_baf(y_86, z_86);
                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_pipe_term_to_child\""))
                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                          ATerm o_87 = NULL,p_87 = NULL,q_87 = NULL;
                                                                                                                                                                                                                                                                                                                                          t = m_125;
                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                              p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                              q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                          t = q_125;
                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                              f_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                              g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                          t = g_125;
                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                              h_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                              i_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                          t = i_125;
                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                          t = p_125;
                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                          o_87 = t;
                                                                                                                                                                                                                                                                                                                                          t = f_125;
                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                          p_87 = t;
                                                                                                                                                                                                                                                                                                                                          t = h_125;
                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                          q_87 = t;
                                                                                                                                                                                                                                                                                                                                          t = SSL_pipe_term_to_child(o_87, p_87, q_87);
                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_kill\""))
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                              ATerm g_88 = NULL,h_88 = NULL;
                                                                                                                                                                                                                                                                                                                                              t = m_125;
                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                  p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                  q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                              t = q_125;
                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                  f_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                  g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                              t = g_125;
                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                              t = p_125;
                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                              g_88 = t;
                                                                                                                                                                                                                                                                                                                                              t = f_125;
                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                              h_88 = t;
                                                                                                                                                                                                                                                                                                                                              t = SSL_kill(g_88, h_88);
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_exit\""))
                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                  ATerm r_88 = NULL;
                                                                                                                                                                                                                                                                                                                                                  t = m_125;
                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                      p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                      q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                  t = q_125;
                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                  t = p_125;
                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                  r_88 = t;
                                                                                                                                                                                                                                                                                                                                                  t = SSL_exit(r_88);
                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_waitpid\""))
                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                      ATerm a_89 = NULL;
                                                                                                                                                                                                                                                                                                                                                      t = m_125;
                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                          p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                          q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                      t = q_125;
                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                      t = p_125;
                                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                      a_89 = t;
                                                                                                                                                                                                                                                                                                                                                      t = SSL_waitpid(a_89);
                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_execvp\""))
                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                          ATerm l_89 = NULL,m_89 = NULL;
                                                                                                                                                                                                                                                                                                                                                          t = m_125;
                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                              p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                              q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                          t = q_125;
                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                              f_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                              g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                          t = g_125;
                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                          t = p_125;
                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                          l_89 = t;
                                                                                                                                                                                                                                                                                                                                                          t = f_125;
                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                          m_89 = t;
                                                                                                                                                                                                                                                                                                                                                          t = SSL_execvp(l_89, m_89);
                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "SSL_fork"))
                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                              t = m_125;
                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                              t = SSL_fork();
                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "SSL_get_pid"))
                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                  t = m_125;
                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                  t = SSL_get_pid();
                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_TicksToSeconds\""))
                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                      ATerm c_92 = NULL;
                                                                                                                                                                                                                                                                                                                                                                      t = m_125;
                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                          p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                          q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                      t = q_125;
                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                      t = p_125;
                                                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                      c_92 = t;
                                                                                                                                                                                                                                                                                                                                                                      t = SSL_TicksToSeconds(c_92);
                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "SSL_times"))
                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                          t = m_125;
                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                          t = SSL_times();
                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "SSL_clock"))
                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                              t = m_125;
                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                              t = SSL_clock();
                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_ClockToSeconds\""))
                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                  ATerm l_93 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                  t = m_125;
                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                      p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                      q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                  t = q_125;
                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                  t = p_125;
                                                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                  l_93 = t;
                                                                                                                                                                                                                                                                                                                                                                                  t = SSL_ClockToSeconds(l_93);
                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "SSL_dtime"))
                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                      t = m_125;
                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                      t = SSL_dtime();
                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_epoch2UTC\""))
                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                          t = m_125;
                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                              p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                              q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                          t = q_125;
                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                                                                                                                                                                            ATerm v_48 = t;
                                                                                                                                                                                                                                                                                                                                                                                            int w_48 = stack_ptr;
                                                                                                                                                                                                                                                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                                                                                                                                                ATerm n_94 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                t = p_125;
                                                                                                                                                                                                                                                                                                                                                                                                t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                n_94 = t;
                                                                                                                                                                                                                                                                                                                                                                                                t = SSL_epoch2UTC(n_94);
                                                                                                                                                                                                                                                                                                                                                                                                ;
                                                                                                                                                                                                                                                                                                                                                                                                LocalPopChoice(w_48);
                                                                                                                                                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                                                                                                                                                            else
                                                                                                                                                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                                                                                                                                                t = v_48;
                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                  ATerm y_94 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                  t = p_125;
                                                                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                  y_94 = t;
                                                                                                                                                                                                                                                                                                                                                                                                  t = SSL_epoch2UTC(y_94);
                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                                                                                                                                                          }
                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_epoch2localtime\""))
                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                              ATerm p_95 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                              t = m_125;
                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                  p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                  q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                              t = q_125;
                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                              t = p_125;
                                                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                              p_95 = t;
                                                                                                                                                                                                                                                                                                                                                                                              t = SSL_epoch2localtime(p_95);
                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "SSL_now_epoch_time"))
                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                  t = m_125;
                                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                  t = SSL_now_epoch_time();
                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "SSL_time"))
                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                      t = m_125;
                                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                      t = SSL_time();
                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_table_rename\""))
                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                          ATerm f_98 = NULL,k_98 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                          t = m_125;
                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                              p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                              q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                          t = q_125;
                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                              f_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                              g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                          t = g_125;
                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                          t = p_125;
                                                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                          f_98 = t;
                                                                                                                                                                                                                                                                                                                                                                                                          t = f_125;
                                                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                          k_98 = t;
                                                                                                                                                                                                                                                                                                                                                                                                          t = SSL_table_rename(f_98, k_98);
                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_table_keys\""))
                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                              ATerm h_99 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                              t = m_125;
                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                  p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                  q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                              t = q_125;
                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                              t = p_125;
                                                                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                              h_99 = t;
                                                                                                                                                                                                                                                                                                                                                                                                              t = SSL_table_keys(h_99);
                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "\"SSL_table_remove\""))
                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                  ATerm v_100 = NULL,w_100 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                  t = m_125;
                                                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                      p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                      q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                  t = q_125;
                                                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                      f_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                      g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                  t = g_125;
                                                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                  t = p_125;
                                                                                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                  v_100 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                  t = f_125;
                                                                                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                  w_100 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                  t = SSL_table_remove(v_100, w_100);
                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "\"SSL_table_get\""))
                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                      ATerm r_102 = NULL,s_102 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                      t = m_125;
                                                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                                          p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                          q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                      t = q_125;
                                                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                                          f_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                          g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                      t = g_125;
                                                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                      t = p_125;
                                                                                                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                      r_102 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                      t = f_125;
                                                                                                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                      s_102 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                      t = SSL_table_get(r_102, s_102);
                                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "\"SSL_table_put\""))
                                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                                          ATerm r_103 = NULL,s_103 = NULL,t_103 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = m_125;
                                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                              p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                              q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          t = q_125;
                                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                              f_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                              g_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          t = g_125;
                                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                              h_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                              i_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          t = i_125;
                                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          t = p_125;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          r_103 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = f_125;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          s_103 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = h_125;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          t_103 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = SSL_table_put(r_103, s_103, t_103);
                                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "\"SSL_table_destroy\""))
                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                              ATerm g_104 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = m_125;
                                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                                  p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                  q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t = q_125;
                                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t = p_125;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              g_104 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = SSL_table_destroy(g_104);
                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                              ATerm s_104 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("\"SSL_table_create\"", 0, ATtrue)))
                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t = m_125;
                                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                                  p_125 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                  q_125 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t = q_125;
                                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t = p_125;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              s_104 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = SSL_table_create(s_104);
                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                }
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                }
                                                                                                                                                                                                            }
                                                                                                                                                                                                        }
                                                                                                                                                                                                    }
                                                                                                                                                                                                }
                                                                                                                                                                                            }
                                                                                                                                                                                        }
                                                                                                                                                                                    }
                                                                                                                                                                                }
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                    }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
ATerm w_12 (ATerm t)
{
  t = map_1_0(EvalTerm_0_0, t);
  return(t);
}
ATerm EvalTerm_0_0 (ATerm t)
{
  ATerm x_48 = t;
  int y_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_134 = NULL,a_105 = NULL,b_105 = NULL;
      g_134 = t;
      if(match_cons(t, sym_Var_1))
        {
          ATerm z_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_w_23;
      b_105 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_w_23, g_134);
      t = z_26(b_105, g_134, t);
      a_105 = t;
      {
        ATerm b_49 = t;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_NULL_0)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = b_49;
          }
        t = a_105;
      }
      ;
      LocalPopChoice(y_48);
    }
  else
    {
      t = x_48;
      {
        ATerm c_49 = t;
        int d_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_134 = NULL,j_134 = NULL,n_134 = NULL,r_134 = NULL,v_134 = NULL,c_135 = NULL,g_135 = NULL;
            t = Op_2_0(_id, w_12, t);
            v_134 = t;
            if(match_cons(t, sym_Op_2))
              {
                c_135 = ATgetArgument(t, 0);
                g_135 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = g_135;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_134 = ATgetFirst((ATermList) t);
                j_134 = (ATerm) ATgetNext((ATermList) t);
                t = j_134;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    n_134 = ATgetFirst((ATermList) t);
                    r_134 = (ATerm) ATgetNext((ATermList) t);
                    t = r_134;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = c_135;
                        if(match_string(t, "Cons"))
                          {
                            ATerm e_49 = t;
                            int j_49 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = (ATerm) ATinsert(CheckATermList(n_134), i_134);
                                ;
                                LocalPopChoice(j_49);
                              }
                            else
                              {
                                t = e_49;
                                t = v_134;
                                t = b_26(c_135, g_135, t);
                              }
                          }
                        else
                          {
                            t = v_134;
                            t = b_26(c_135, g_135, t);
                          }
                      }
                    else
                      {
                        t = v_134;
                        t = b_26(c_135, g_135, t);
                      }
                  }
                else
                  {
                    t = v_134;
                    t = b_26(c_135, g_135, t);
                  }
              }
            else
              {
                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                  {
                    t = c_135;
                    if(match_string(t, "Nil"))
                      {
                        ATerm k_49 = t;
                        int l_49 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = (ATerm) ATempty;
                            ;
                            LocalPopChoice(l_49);
                          }
                        else
                          {
                            t = k_49;
                            t = v_134;
                            t = b_26(c_135, g_135, t);
                          }
                      }
                    else
                      {
                        t = v_134;
                        t = b_26(c_135, g_135, t);
                      }
                  }
                else
                  {
                    t = v_134;
                    t = b_26(c_135, g_135, t);
                  }
              }
            ;
            LocalPopChoice(d_49);
          }
        else
          {
            t = c_49;
            {
              ATerm m_136 = NULL;
              if(match_cons(t, sym_Real_1))
                {
                  m_136 = ATgetArgument(t, 0);
                  t = m_136;
                }
              else
                {
                  if(match_cons(t, sym_Str_1))
                    {
                      m_136 = ATgetArgument(t, 0);
                      t = m_136;
                    }
                  else
                    {
                      if(match_cons(t, sym_Int_1))
                        {
                          m_136 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = m_136;
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm f_26 (ATerm k_79, ATerm l_79, ATerm m_79, ATerm t)
{
  ATerm s_136 = NULL,t_136 = NULL,x_136 = NULL;
  s_136 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_79, l_79);
  t = w_27(k_79, l_79, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_49 = ATgetFirst((ATermList) t);
      t_136 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_136), m_79);
  x_136 = t;
  t = SSL_table_put(k_79, l_79, x_136);
  t = s_136;
  return(t);
}
ATerm x_12 (ATerm t)
{
  t = term_o_49;
  return(t);
}
ATerm g_26 (ATerm f_101, ATerm g_101, ATerm t)
{
  ATerm d_137 = NULL;
  d_137 = t;
  {
    ATerm p_49 = t;
    int r_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_26;
        t = get_config_0_0(t);
        t = d_137;
        t = debug_1_0(x_12, t);
        ;
        LocalPopChoice(r_49);
      }
    else
      {
        t = p_49;
      }
    {
      ATerm s_49 = t;
      int t_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_137 = NULL,f_137 = NULL;
          t = term_w_23;
          e_137 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_w_23, f_101);
          t = z_26(e_137, f_101, t);
          f_137 = t;
          if(match_cons(t, sym_NULL_0))
            {
              ATerm u_49 = t;
              int v_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_137;
                  if((g_101 != t))
                    {
                      _fail(t);
                    }
                  t = f_137;
                  ;
                  LocalPopChoice(v_49);
                }
              else
                {
                  t = u_49;
                  {
                    ATerm i_137 = NULL;
                    t = term_w_23;
                    i_137 = t;
                    t = (ATerm) ATmakeAppl(sym__3, term_w_23, f_101, g_101);
                    t = f_26(i_137, f_101, g_101, t);
                  }
                }
            }
          else
            {
              t = f_137;
              if((g_101 != t))
                {
                  _fail(t);
                }
              t = f_137;
            }
          ;
          LocalPopChoice(t_49);
        }
      else
        {
          t = s_49;
          {
            ATerm j_137 = NULL;
            t = term_w_23;
            j_137 = t;
            t = (ATerm) ATmakeAppl(sym__3, term_w_23, f_101, g_101);
            t = x_27(j_137, f_101, g_101, t);
          }
        }
      t = (ATerm) ATmakeAppl(sym__2, f_101, g_101);
    }
  }
  return(t);
}
ATerm y_12 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_49 = ATgetArgument(t, 0);
      if(((ATgetType(w_49) != AT_LIST) || !(ATisEmpty(w_49))))
        _fail(t);
      {
        ATerm z_49 = ATgetArgument(t, 1);
        if(((ATgetType(z_49) != AT_LIST) || !(ATisEmpty(z_49))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_12 (ATerm t)
{
  ATerm o_105 = NULL,p_105 = NULL,q_105 = NULL,r_105 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_50 = ATgetArgument(t, 0);
      if(((ATgetType(a_50) == AT_LIST) && !(ATisEmpty(a_50))))
        {
          o_105 = ATgetFirst((ATermList) a_50);
          p_105 = (ATerm) ATgetNext((ATermList) a_50);
        }
      else
        _fail(t);
      {
        ATerm b_50 = ATgetArgument(t, 1);
        if(((ATgetType(b_50) == AT_LIST) && !(ATisEmpty(b_50))))
          {
            q_105 = ATgetFirst((ATermList) b_50);
            r_105 = (ATerm) ATgetNext((ATermList) b_50);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_105, q_105), (ATerm) ATmakeAppl(sym__2, p_105, r_105));
  return(t);
}
ATerm a_13 (ATerm t)
{
  ATerm s_105 = NULL,t_105 = NULL;
  if(match_cons(t, sym__2))
    {
      s_105 = ATgetArgument(t, 0);
      t_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_105), s_105);
  return(t);
}
ATerm PatDecompose_0_0 (ATerm t)
{
  ATerm m_138 = NULL,n_138 = NULL,o_138 = NULL,p_138 = NULL,q_138 = NULL,r_138 = NULL,s_138 = NULL;
  m_138 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_138 = ATgetFirst((ATermList) t);
      s_138 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_138;
  if(match_cons(t, sym__2))
    {
      o_138 = ATgetArgument(t, 0);
      r_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_138;
  if(match_cons(t, sym_Real_1))
    {
      p_138 = ATgetArgument(t, 0);
      t = r_138;
      if((p_138 != t))
        {
          _fail(t);
        }
      t = s_138;
    }
  else
    {
      if(match_cons(t, sym_Str_1))
        {
          p_138 = ATgetArgument(t, 0);
          t = r_138;
          if((p_138 != t))
            {
              _fail(t);
            }
          t = s_138;
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              p_138 = ATgetArgument(t, 0);
              t = r_138;
              if((p_138 != t))
                {
                  _fail(t);
                }
              t = s_138;
            }
          else
            {
              ATerm m_105 = NULL,n_105 = NULL;
              if(match_cons(t, sym_Op_2))
                {
                  p_138 = ATgetArgument(t, 0);
                  q_138 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_explode_term(r_138);
              if(match_cons(t, sym__2))
                {
                  if((p_138 != ATgetArgument(t, 0)))
                    {
                      _fail(ATgetArgument(t, 0));
                    }
                  m_105 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, q_138, m_105);
              t = genzip_4_0(y_12, z_12, a_13, _id, t);
              n_105 = t;
              t = (ATerm) ATmakeAppl(sym__2, n_105, s_138);
              t = conc_0_0(t);
            }
        }
    }
  return(t);
}
ATerm i_26 (ATerm i_160 (ATerm), ATerm v_82, ATerm w_82, ATerm t_82, ATerm u_82, ATerm t)
{
  t = v_82;
  t = i_160(t);
  t = u_82;
  {
    ATerm c_50 = t;
    if((PushChoice() == 0))
      {
        ATerm b_13 (ATerm t)
        {
          ATerm c_139 = NULL;
          if(match_cons(t, sym__2))
            {
              if((v_82 != ATgetArgument(t, 0)))
                {
                  _fail(ATgetArgument(t, 0));
                }
              c_139 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, w_82, c_139);
          {
            ATerm d_50 = t;
            if((PushChoice() == 0))
              {
                ATerm d_139 = NULL;
                if(match_cons(t, sym__2))
                  {
                    d_139 = ATgetArgument(t, 0);
                    if((d_139 != ATgetArgument(t, 1)))
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
                t = d_50;
              }
          }
          return(t);
        }
        t = fetch_1_0(b_13, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_50;
      }
    t = (ATerm) ATmakeAppl(sym__2, t_82, (ATerm) ATinsert(CheckATermList(u_82), (ATerm) ATmakeAppl(sym__2, v_82, w_82)));
  }
  return(t);
}
ATerm while_not_2_0 (ATerm u_133 (ATerm), ATerm v_133 (ATerm), ATerm t)
{
  ATerm e_139 (ATerm t)
  {
    ATerm e_50 = t;
    int f_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_133(t);
        ;
        LocalPopChoice(f_50);
      }
    else
      {
        t = e_50;
        t = v_133(t);
        t = e_139(t);
      }
    return(t);
  }
  t = e_139(t);
  return(t);
}
ATerm for_3_0 (ATerm x_133 (ATerm), ATerm y_133 (ATerm), ATerm z_133 (ATerm), ATerm t)
{
  t = x_133(t);
  t = while_not_2_0(y_133, z_133, t);
  return(t);
}
ATerm e_13 (ATerm t)
{
  ATerm j_139 = NULL;
  j_139 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_139, (ATerm) ATempty);
  return(t);
}
ATerm f_13 (ATerm t)
{
  ATerm k_139 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_50 = ATgetArgument(t, 0);
      if(((ATgetType(g_50) != AT_LIST) || !(ATisEmpty(g_50))))
        _fail(t);
      k_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_139;
  return(t);
}
ATerm h_13 (ATerm t)
{
  t = term_h_50;
  return(t);
}
ATerm i_13 (ATerm t)
{
  ATerm o_139 = NULL,q_139 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_50 = ATgetFirst((ATermList) t);
      if(match_cons(i_50, sym__2))
        {
          o_139 = ATgetArgument(i_50, 0);
          if((o_139 != ATgetArgument(i_50, 1)))
            {
              _fail(ATgetArgument(i_50, 1));
            }
        }
      else
        _fail(t);
      q_139 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_139;
  return(t);
}
ATerm j_13 (ATerm t)
{
  ATerm s_140 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_50 = ATgetFirst((ATermList) t);
      if(match_cons(j_50, sym__2))
        {
          ATerm m_50 = ATgetArgument(j_50, 0);
          if(!(match_cons(m_50, sym_Wld_0)))
            _fail(t);
          {
            ATerm n_50 = ATgetArgument(j_50, 1);
          }
        }
      else
        _fail(t);
      s_140 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_140;
  return(t);
}
ATerm k_13 (ATerm t)
{
  t = term_o_50;
  return(t);
}
ATerm stratego_match_1_0 (ATerm g_163 (ATerm), ATerm t)
{
  ATerm g_13 (ATerm t)
  {
    ATerm p_50 = t;
    int q_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_139 = NULL;
        l_139 = t;
        t = term_y_26;
        t = get_config_0_0(t);
        t = l_139;
        t = debug_1_0(h_13, t);
        ;
        LocalPopChoice(q_50);
      }
    else
      {
        t = p_50;
      }
    {
      ATerm r_50 = t;
      int s_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = _2_0(i_13, _id, t);
          ;
          LocalPopChoice(s_50);
        }
      else
        {
          t = r_50;
          {
            ATerm t_50 = t;
            int u_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_139 = NULL,t_139 = NULL,x_139 = NULL,y_139 = NULL,a_140 = NULL,b_140 = NULL,c_140 = NULL;
                r_139 = t;
                if(match_cons(t, sym__2))
                  {
                    t_139 = ATgetArgument(t, 0);
                    c_140 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = t_139;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    x_139 = ATgetFirst((ATermList) t);
                    b_140 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = x_139;
                if(match_cons(t, sym__2))
                  {
                    y_139 = ATgetArgument(t, 0);
                    a_140 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = r_139;
                t = i_26(g_163, y_139, a_140, b_140, c_140, t);
                ;
                LocalPopChoice(u_50);
              }
            else
              {
                t = t_50;
                {
                  ATerm v_50 = t;
                  int w_50 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = _2_0(j_13, _id, t);
                      ;
                      LocalPopChoice(w_50);
                    }
                  else
                    {
                      t = v_50;
                      t = _2_0(PatDecompose_0_0, _id, t);
                    }
                }
              }
          }
        }
      {
        ATerm z_50 = t;
        int a_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_140 = NULL;
            t_140 = t;
            t = term_y_26;
            t = get_config_0_0(t);
            t = t_140;
            t = debug_1_0(k_13, t);
            ;
            LocalPopChoice(a_51);
          }
        else
          {
            t = z_50;
          }
      }
    }
    return(t);
  }
  t = for_3_0(e_13, f_13, g_13, t);
  return(t);
}
ATerm p_13 (ATerm t)
{
  t = Var_1_0(_id, t);
  return(t);
}
ATerm q_13 (ATerm t)
{
  t = term_b_51;
  return(t);
}
ATerm r_13 (ATerm t)
{
  ATerm b_141 = NULL,c_141 = NULL;
  if(match_cons(t, sym__2))
    {
      b_141 = ATgetArgument(t, 0);
      c_141 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_26(b_141, c_141, t);
  return(t);
}
ATerm k_26 (ATerm d_101, ATerm e_101, ATerm t)
{
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, d_101, e_101));
  t = stratego_match_1_0(p_13, t);
  {
    ATerm c_51 = t;
    int d_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_140 = NULL;
        z_140 = t;
        t = term_y_26;
        t = get_config_0_0(t);
        t = z_140;
        t = debug_1_0(q_13, t);
        ;
        LocalPopChoice(d_51);
      }
    else
      {
        t = c_51;
      }
    t = map_1_0(r_13, t);
    t = e_101;
  }
  return(t);
}
ATerm t_13 (ATerm t)
{
  ATerm e_141 = NULL,f_141 = NULL,g_141 = NULL,h_141 = NULL;
  e_141 = t;
  t = term_w_23;
  f_141 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, e_141);
  g_141 = t;
  t = term_e_51;
  h_141 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_23, (ATerm)ATmakeAppl(sym_Var_1, e_141), term_e_51);
  t = x_27(f_141, g_141, h_141, t);
  return(t);
}
ATerm u_13 (ATerm t)
{
  ATerm k_141 = NULL,l_141 = NULL,m_141 = NULL;
  k_141 = t;
  t = term_w_23;
  l_141 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, k_141);
  m_141 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_23, (ATerm) ATmakeAppl(sym_Var_1, k_141));
  t = v_26(l_141, m_141, t);
  return(t);
}
ATerm l_26 (ATerm h_163 (ATerm), ATerm m_101, ATerm j_101, ATerm k_101, ATerm t)
{
  ATerm d_141 = NULL;
  t = m_101;
  t = map_1_0(t_13, t);
  t = (ATerm) ATmakeAppl(sym_App_2, j_101, k_101);
  t = h_163(t);
  d_141 = t;
  t = m_101;
  t = map_1_0(u_13, t);
  t = d_141;
  return(t);
}
ATerm v_13 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_51 = ATgetArgument(t, 0);
      if(((ATgetType(f_51) != AT_LIST) || !(ATisEmpty(f_51))))
        _fail(t);
      {
        ATerm g_51 = ATgetArgument(t, 1);
        if(((ATgetType(g_51) != AT_LIST) || !(ATisEmpty(g_51))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_13 (ATerm t)
{
  ATerm u_141 = NULL,v_141 = NULL,w_141 = NULL,c_142 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_51 = ATgetArgument(t, 0);
      if(((ATgetType(h_51) == AT_LIST) && !(ATisEmpty(h_51))))
        {
          u_141 = ATgetFirst((ATermList) h_51);
          v_141 = (ATerm) ATgetNext((ATermList) h_51);
        }
      else
        _fail(t);
      {
        ATerm i_51 = ATgetArgument(t, 1);
        if(((ATgetType(i_51) == AT_LIST) && !(ATisEmpty(i_51))))
          {
            w_141 = ATgetFirst((ATermList) i_51);
            c_142 = (ATerm) ATgetNext((ATermList) i_51);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_141, w_141), (ATerm) ATmakeAppl(sym__2, v_141, c_142));
  return(t);
}
ATerm x_13 (ATerm t)
{
  ATerm d_142 = NULL,e_142 = NULL;
  if(match_cons(t, sym__2))
    {
      d_142 = ATgetArgument(t, 0);
      e_142 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_142), d_142);
  return(t);
}
ATerm n_26 (ATerm e_163 (ATerm), ATerm r_99, ATerm s_99, ATerm r_786, ATerm t)
{
  ATerm s_141 = NULL,t_141 = NULL;
  t = SSL_explode_term(r_786);
  if(match_cons(t, sym__2))
    {
      if((r_99 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      s_141 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_99, s_141);
  {
    ATerm y_13 (ATerm t)
    {
      ATerm f_142 = NULL,g_142 = NULL;
      if(match_cons(t, sym__2))
        {
          f_142 = ATgetArgument(t, 0);
          g_142 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_App_2, f_142, g_142);
      t = e_163(t);
      {
        ATerm j_51 = t;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = j_51;
          }
      }
      return(t);
    }
    t = genzip_4_0(v_13, w_13, x_13, y_13, t);
    t_141 = t;
    t = SSL_mkterm(r_99, t_141);
  }
  return(t);
}
ATerm p_26 (ATerm d_163 (ATerm), ATerm m_99, ATerm t_783, ATerm t)
{
  ATerm i_142 = NULL,j_142 = NULL,k_142 = NULL;
  t = SSL_explode_term(t_783);
  if(match_cons(t, sym__2))
    {
      i_142 = ATgetArgument(t, 0);
      j_142 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_142;
  {
    ATerm z_13 (ATerm t)
    {
      ATerm l_142 = NULL;
      l_142 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, m_99, l_142);
      t = d_163(t);
      {
        ATerm m_51 = t;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = m_51;
          }
      }
      return(t);
    }
    t = fetch_1_0(z_13, t);
    k_142 = t;
    t = SSL_mkterm(i_142, k_142);
  }
  return(t);
}
ATerm EvalAll_1_0 (ATerm j_0 (ATerm), ATerm t)
{
  ATerm f_143 = NULL,g_143 = NULL,h_143 = NULL,i_143 = NULL;
  f_143 = t;
  if(match_cons(t, sym_App_2))
    {
      g_143 = ATgetArgument(t, 0);
      i_143 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_143;
  if(match_cons(t, sym_All_1))
    {
      h_143 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm n_51 = t;
    int o_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_is_string(i_143);
        t = i_143;
        ;
        LocalPopChoice(o_51);
      }
    else
      {
        t = n_51;
        {
          ATerm l_106 = NULL,m_106 = NULL,n_106 = NULL;
          t = SSL_explode_term(i_143);
          if(match_cons(t, sym__2))
            {
              l_106 = ATgetArgument(t, 0);
              m_106 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_143;
          {
            ATerm p_51 = t;
            if((PushChoice() == 0))
              {
                ATerm o_106 = NULL;
                o_106 = t;
                t = SSL_is_string(o_106);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = p_51;
              }
            t = m_106;
            {
              ATerm a_14 (ATerm t)
              {
                ATerm p_106 = NULL;
                p_106 = t;
                t = (ATerm) ATmakeAppl(sym_App_2, h_143, p_106);
                t = j_0(t);
                {
                  ATerm q_51 = t;
                  if((PushChoice() == 0))
                    {
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = q_51;
                    }
                }
                return(t);
              }
              t = map_1_0(a_14, t);
              n_106 = t;
              t = SSL_mkterm(l_106, n_106);
            }
          }
        }
      }
  }
  return(t);
}
ATerm e_14 (ATerm t)
{
  ATerm o_143 = NULL,p_143 = NULL,q_143 = NULL,r_143 = NULL,a_144 = NULL,d_144 = NULL;
  o_143 = t;
  if(match_cons(t, sym_SDef_3))
    {
      p_143 = ATgetArgument(t, 0);
      q_143 = ATgetArgument(t, 1);
      {
        ATerm r_51 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = q_143;
  t = foldr_3_0(f_14, i_14, j_14, t);
  r_143 = t;
  t = term_v_23;
  a_144 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_143, r_143);
  d_144 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_23, (ATerm)ATmakeAppl(sym__2, p_143, r_143), o_143);
  t = x_27(a_144, d_144, o_143, t);
  return(t);
}
ATerm f_14 (ATerm t)
{
  t = term_s_37;
  return(t);
}
ATerm i_14 (ATerm t)
{
  ATerm e_144 = NULL,f_144 = NULL;
  if(match_cons(t, sym__2))
    {
      e_144 = ATgetArgument(t, 0);
      f_144 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_27(e_144, f_144, t);
  return(t);
}
ATerm j_14 (ATerm t)
{
  t = term_v_37;
  return(t);
}
ATerm k_14 (ATerm t)
{
  ATerm g_144 = NULL,h_144 = NULL,i_144 = NULL,j_144 = NULL,k_144 = NULL;
  if(match_cons(t, sym_SDef_3))
    {
      g_144 = ATgetArgument(t, 0);
      h_144 = ATgetArgument(t, 1);
      {
        ATerm s_51 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = h_144;
  t = foldr_3_0(l_14, v_14, x_14, t);
  i_144 = t;
  t = term_v_23;
  j_144 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_144, i_144);
  k_144 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_23, (ATerm) ATmakeAppl(sym__2, g_144, i_144));
  t = v_26(j_144, k_144, t);
  return(t);
}
ATerm l_14 (ATerm t)
{
  t = term_s_37;
  return(t);
}
ATerm v_14 (ATerm t)
{
  ATerm n_144 = NULL,o_144 = NULL;
  if(match_cons(t, sym__2))
    {
      n_144 = ATgetArgument(t, 0);
      o_144 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_27(n_144, o_144, t);
  return(t);
}
ATerm x_14 (ATerm t)
{
  t = term_v_37;
  return(t);
}
ATerm s_26 (ATerm n_163 (ATerm), ATerm c_103, ATerm z_102, ATerm a_103, ATerm t)
{
  ATerm l_143 = NULL;
  t = c_103;
  t = map_1_0(e_14, t);
  t = (ATerm) ATmakeAppl(sym_App_2, z_102, a_103);
  t = n_163(t);
  l_143 = t;
  t = c_103;
  t = map_1_0(k_14, t);
  t = l_143;
  return(t);
}
ATerm a_15 (ATerm t)
{
  t = term_s_37;
  return(t);
}
ATerm b_15 (ATerm t)
{
  ATerm x_144 = NULL,y_144 = NULL;
  if(match_cons(t, sym__2))
    {
      x_144 = ATgetArgument(t, 0);
      y_144 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_27(x_144, y_144, t);
  return(t);
}
ATerm c_15 (ATerm t)
{
  t = term_v_37;
  return(t);
}
ATerm t_26 (ATerm x_102, ATerm y_102, ATerm w_102, ATerm t)
{
  ATerm p_144 = NULL,q_144 = NULL,v_144 = NULL,w_144 = NULL;
  t = y_102;
  t = foldr_3_0(a_15, b_15, c_15, t);
  p_144 = t;
  t = term_z_43;
  q_144 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_51), p_144), term_u_51), x_102), term_t_51);
  v_144 = t;
  t = SSL_printnl(q_144, v_144);
  t = term_v_37;
  w_144 = t;
  t = SSL_exit(w_144);
  t = term_w_51;
  return(t);
}
ATerm v_26 (ATerm z_78, ATerm a_79, ATerm t)
{
  ATerm b_145 = NULL,c_145 = NULL;
  b_145 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_78, a_79);
  {
    ATerm z_51 = t;
    int a_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_106 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm b_52 = ATgetArgument(t, 0);
            ATerm c_52 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_78, a_79);
        t = w_27(z_78, a_79, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_52 = ATgetFirst((ATermList) t);
            u_106 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_106;
        ;
        LocalPopChoice(a_52);
      }
    else
      {
        t = z_51;
        t = (ATerm) ATempty;
      }
    c_145 = t;
    t = SSL_table_put(z_78, a_79, c_145);
    t = b_145;
  }
  return(t);
}
ATerm z_26 (ATerm i_79, ATerm j_79, ATerm t)
{
  ATerm q_145 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_79, j_79);
  t = w_27(i_79, j_79, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_145 = ATgetFirst((ATermList) t);
      {
        ATerm e_52 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_145;
  return(t);
}
ATerm a_27 (ATerm i_66, ATerm j_66, ATerm t)
{
  ATerm f_52 = t;
  int g_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_66, j_66);
      ;
      LocalPopChoice(g_52);
    }
  else
    {
      t = f_52;
      t = SSL_addr(i_66, j_66);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm z_145 (ATerm), ATerm a_146 (ATerm), ATerm b_146 (ATerm), ATerm t)
{
  ATerm h_52 = t;
  int i_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_145(t);
      ;
      LocalPopChoice(i_52);
    }
  else
    {
      t = h_52;
      {
        ATerm t_145 = NULL,u_145 = NULL,x_145 = NULL,d_146 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_145 = ATgetFirst((ATermList) t);
            u_145 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_145;
        t = b_146(t);
        x_145 = t;
        t = u_145;
        t = foldr_3_0(z_145, a_146, b_146, t);
        d_146 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_145, d_146);
        t = a_146(t);
      }
    }
  return(t);
}
ATerm l_15 (ATerm t)
{
  t = term_s_37;
  return(t);
}
ATerm n_15 (ATerm t)
{
  ATerm q_146 = NULL,r_146 = NULL;
  if(match_cons(t, sym__2))
    {
      q_146 = ATgetArgument(t, 0);
      r_146 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_27(q_146, r_146, t);
  return(t);
}
ATerm q_15 (ATerm t)
{
  t = term_v_37;
  return(t);
}
ATerm r_15 (ATerm t)
{
  ATerm t_146 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      t_146 = ATgetArgument(t, 0);
      t = t_146;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_146 = ATgetArgument(t, 0);
          {
            ATerm j_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = t_146;
    }
  return(t);
}
ATerm s_15 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_52 = ATgetArgument(t, 0);
      if(((ATgetType(m_52) != AT_LIST) || !(ATisEmpty(m_52))))
        _fail(t);
      {
        ATerm n_52 = ATgetArgument(t, 1);
        if(((ATgetType(n_52) != AT_LIST) || !(ATisEmpty(n_52))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_15 (ATerm t)
{
  ATerm g_147 = NULL,k_147 = NULL,l_147 = NULL,m_147 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_52 = ATgetArgument(t, 0);
      if(((ATgetType(o_52) == AT_LIST) && !(ATisEmpty(o_52))))
        {
          g_147 = ATgetFirst((ATermList) o_52);
          k_147 = (ATerm) ATgetNext((ATermList) o_52);
        }
      else
        _fail(t);
      {
        ATerm p_52 = ATgetArgument(t, 1);
        if(((ATgetType(p_52) == AT_LIST) && !(ATisEmpty(p_52))))
          {
            l_147 = ATgetFirst((ATermList) p_52);
            m_147 = (ATerm) ATgetNext((ATermList) p_52);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_147, l_147), (ATerm) ATmakeAppl(sym__2, k_147, m_147));
  return(t);
}
ATerm w_15 (ATerm t)
{
  ATerm n_147 = NULL,o_147 = NULL;
  if(match_cons(t, sym__2))
    {
      n_147 = ATgetArgument(t, 0);
      o_147 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_147), n_147);
  return(t);
}
ATerm x_15 (ATerm t)
{
  ATerm p_147 = NULL,q_147 = NULL,r_147 = NULL,s_147 = NULL,u_147 = NULL;
  if(match_cons(t, sym__2))
    {
      p_147 = ATgetArgument(t, 0);
      q_147 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_v_23;
  r_147 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_147, term_s_37);
  s_147 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, p_147, (ATerm)ATempty, q_147);
  u_147 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_23, (ATerm)ATmakeAppl(sym__2, p_147, term_s_37), (ATerm) ATmakeAppl(sym_SDef_3, p_147, (ATerm)ATempty, q_147));
  t = x_27(r_147, s_147, u_147, t);
  return(t);
}
ATerm a_16 (ATerm t)
{
  ATerm v_147 = NULL,w_147 = NULL,x_147 = NULL;
  v_147 = t;
  t = term_v_23;
  w_147 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_147, term_s_37);
  x_147 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_23, (ATerm) ATmakeAppl(sym__2, v_147, term_s_37));
  t = v_26(w_147, x_147, t);
  return(t);
}
ATerm b_27 (ATerm m_163 (ATerm), ATerm m_102, ATerm o_102, ATerm q_102, ATerm t)
{
  ATerm f_146 = NULL,g_146 = NULL,l_146 = NULL,m_146 = NULL,n_146 = NULL,o_146 = NULL,p_146 = NULL;
  t = o_102;
  t = foldr_3_0(l_15, n_15, q_15, t);
  f_146 = t;
  t = term_v_23;
  o_146 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_102, f_146);
  p_146 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_23, (ATerm) ATmakeAppl(sym__2, m_102, f_146));
  t = z_26(o_146, p_146, t);
  if(match_cons(t, sym_SDef_3))
    {
      if((m_102 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      g_146 = ATgetArgument(t, 1);
      l_146 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = g_146;
  t = map_1_0(r_15, t);
  m_146 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_146, o_102);
  t = genzip_4_0(s_15, v_15, w_15, x_15, t);
  t = (ATerm) ATmakeAppl(sym_App_2, l_146, q_102);
  t = m_163(t);
  n_146 = t;
  t = m_146;
  t = map_1_0(a_16, t);
  t = n_146;
  return(t);
}
ATerm c_27 (ATerm l_163 (ATerm), ATerm i_102, ATerm j_102, ATerm k_102, ATerm t)
{
  ATerm q_52 = t;
  int r_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_App_2, i_102, k_102);
      t = l_163(t);
      {
        ATerm s_52 = t;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = s_52;
          }
      }
      ;
      LocalPopChoice(r_52);
    }
  else
    {
      t = q_52;
      {
        ATerm t_52 = t;
        int u_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_App_2, j_102, k_102);
            t = l_163(t);
            {
              ATerm w_52 = t;
              if((PushChoice() == 0))
                {
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = w_52;
                }
            }
            ;
            LocalPopChoice(u_52);
          }
        else
          {
            t = t_52;
            t = term_w_51;
          }
      }
    }
  return(t);
}
ATerm d_27 (ATerm k_163 (ATerm), ATerm e_102, ATerm f_102, ATerm g_102, ATerm t)
{
  ATerm x_52 = t;
  int y_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATmakeAppl(sym_App_2, e_102, g_102);
      t = k_163(t);
      {
        ATerm z_52 = t;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = z_52;
          }
      }
      ;
      LocalPopChoice(y_52);
    }
  else
    {
      t = x_52;
      {
        ATerm a_53 = t;
        int b_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_App_2, f_102, g_102);
            t = k_163(t);
            {
              ATerm c_53 = t;
              if((PushChoice() == 0))
                {
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = c_53;
                }
            }
            ;
            LocalPopChoice(b_53);
          }
        else
          {
            t = a_53;
            t = term_w_51;
          }
      }
    }
  return(t);
}
ATerm f_16 (ATerm t)
{
  t = term_d_53;
  return(t);
}
ATerm k_154 (ATerm i_149, ATerm j_149, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Not_1, i_149), j_149);
  {
    ATerm f_53 = t;
    int g_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_App_2, i_149, j_149);
        t = eval_0_0(t);
        if(!(match_cons(t, sym_Fail_0)))
          _fail(t);
        t = j_149;
        ;
        LocalPopChoice(g_53);
      }
    else
      {
        t = f_53;
        t = term_w_51;
      }
  }
  return(t);
}
ATerm eval_0_0 (ATerm t)
{
  ATerm h_53 = t;
  int i_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = App_2_0(_id, eval_0_0, t);
      ;
      LocalPopChoice(i_53);
    }
  else
    {
      t = h_53;
    }
  {
    ATerm j_53 = t;
    int k_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_149 = NULL;
        g_149 = t;
        t = term_y_26;
        t = get_config_0_0(t);
        t = g_149;
        t = debug_1_0(f_16, t);
        ;
        LocalPopChoice(k_53);
      }
    else
      {
        t = j_53;
      }
    {
      ATerm l_53 = t;
      int m_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_53 = t;
          int p_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_149 = NULL,n_149 = NULL,o_149 = NULL,p_149 = NULL,q_149 = NULL,r_149 = NULL;
              n_149 = t;
              if(match_cons(t, sym_App_2))
                {
                  o_149 = ATgetArgument(t, 0);
                  r_149 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_149;
              if(match_cons(t, sym_Fail_0))
                {
                  t = o_149;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm q_53 = t;
                      int r_53 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = r_149;
                          ;
                          LocalPopChoice(r_53);
                        }
                      else
                        {
                          t = q_53;
                          t = term_w_51;
                        }
                    }
                  else
                    {
                      if(match_cons(t, sym_Fail_0))
                        {
                          t = term_w_51;
                        }
                      else
                        {
                          if(match_cons(t, sym_Test_1))
                            {
                              p_149 = ATgetArgument(t, 0);
                              {
                                ATerm s_53 = t;
                                int t_53 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_w_51;
                                    ;
                                    LocalPopChoice(t_53);
                                  }
                                else
                                  {
                                    t = s_53;
                                    t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Seq_2, p_149, (ATerm) ATmakeAppl(sym_Build_1, r_149)), r_149);
                                    {
                                      ATerm u_53 = t;
                                      int v_53 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = eval_0_0(t);
                                          ;
                                          LocalPopChoice(v_53);
                                        }
                                      else
                                        {
                                          t = u_53;
                                        }
                                    }
                                  }
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_Not_1))
                                {
                                  p_149 = ATgetArgument(t, 0);
                                  {
                                    ATerm x_53 = t;
                                    int y_53 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_w_51;
                                        ;
                                        LocalPopChoice(y_53);
                                      }
                                    else
                                      {
                                        t = x_53;
                                        t = k_154(p_149, r_149, t);
                                      }
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Seq_2))
                                    {
                                      p_149 = ATgetArgument(t, 0);
                                      q_149 = ATgetArgument(t, 1);
                                      {
                                        ATerm z_53 = t;
                                        int a_54 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_w_51;
                                            ;
                                            LocalPopChoice(a_54);
                                          }
                                        else
                                          {
                                            t = z_53;
                                            t = (ATerm) ATmakeAppl(sym_App_2, q_149, (ATerm) ATmakeAppl(sym_App_2, p_149, r_149));
                                            {
                                              ATerm b_54 = t;
                                              int c_54 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = eval_0_0(t);
                                                  ;
                                                  LocalPopChoice(c_54);
                                                }
                                              else
                                                {
                                                  t = b_54;
                                                }
                                            }
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          p_149 = ATgetArgument(t, 0);
                                          q_149 = ATgetArgument(t, 1);
                                          {
                                            ATerm d_54 = t;
                                            int e_54 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_w_51;
                                                ;
                                                LocalPopChoice(e_54);
                                              }
                                            else
                                              {
                                                t = d_54;
                                                t = n_149;
                                                t = d_27(eval_0_0, p_149, q_149, r_149, t);
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              p_149 = ATgetArgument(t, 0);
                                              q_149 = ATgetArgument(t, 1);
                                              {
                                                ATerm f_54 = t;
                                                int g_54 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_w_51;
                                                    ;
                                                    LocalPopChoice(g_54);
                                                  }
                                                else
                                                  {
                                                    t = f_54;
                                                    t = n_149;
                                                    t = c_27(eval_0_0, p_149, q_149, r_149, t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Call_2))
                                                {
                                                  p_149 = ATgetArgument(t, 0);
                                                  q_149 = ATgetArgument(t, 1);
                                                  t = p_149;
                                                  if(match_cons(t, sym_SVar_1))
                                                    {
                                                      m_149 = ATgetArgument(t, 0);
                                                      {
                                                        ATerm j_54 = t;
                                                        int k_54 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_w_51;
                                                            ;
                                                            LocalPopChoice(k_54);
                                                          }
                                                        else
                                                          {
                                                            t = j_54;
                                                            {
                                                              ATerm l_54 = t;
                                                              int m_54 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = n_149;
                                                                  t = b_27(eval_0_0, m_149, q_149, r_149, t);
                                                                  ;
                                                                  LocalPopChoice(m_54);
                                                                }
                                                              else
                                                                {
                                                                  t = l_54;
                                                                  t = n_149;
                                                                  t = t_26(m_149, q_149, r_149, t);
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      t = term_w_51;
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Let_2))
                                                    {
                                                      p_149 = ATgetArgument(t, 0);
                                                      q_149 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm n_54 = t;
                                                        int o_54 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_w_51;
                                                            ;
                                                            LocalPopChoice(o_54);
                                                          }
                                                        else
                                                          {
                                                            t = n_54;
                                                            t = n_149;
                                                            t = s_26(eval_0_0, p_149, q_149, r_149, t);
                                                          }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Rec_2))
                                                        {
                                                          p_149 = ATgetArgument(t, 0);
                                                          q_149 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm p_54 = t;
                                                            int q_54 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = term_w_51;
                                                                ;
                                                                LocalPopChoice(q_54);
                                                              }
                                                            else
                                                              {
                                                                t = p_54;
                                                                t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, p_149, (ATerm)ATempty, q_149)), q_149), r_149);
                                                                {
                                                                  ATerm r_54 = t;
                                                                  int t_54 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = eval_0_0(t);
                                                                      ;
                                                                      LocalPopChoice(t_54);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = r_54;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = term_w_51;
                                                        }
                                                    }
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
                  t = o_149;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = r_149;
                    }
                  else
                    {
                      if(match_cons(t, sym_Fail_0))
                        {
                          t = term_w_51;
                        }
                      else
                        {
                          if(match_cons(t, sym_Test_1))
                            {
                              p_149 = ATgetArgument(t, 0);
                              t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Seq_2, p_149, (ATerm) ATmakeAppl(sym_Build_1, r_149)), r_149);
                              {
                                ATerm u_54 = t;
                                int v_54 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = eval_0_0(t);
                                    ;
                                    LocalPopChoice(v_54);
                                  }
                                else
                                  {
                                    t = u_54;
                                  }
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_Not_1))
                                {
                                  p_149 = ATgetArgument(t, 0);
                                  t = k_154(p_149, r_149, t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Seq_2))
                                    {
                                      p_149 = ATgetArgument(t, 0);
                                      q_149 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_App_2, q_149, (ATerm) ATmakeAppl(sym_App_2, p_149, r_149));
                                      {
                                        ATerm w_54 = t;
                                        int x_54 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = eval_0_0(t);
                                            ;
                                            LocalPopChoice(x_54);
                                          }
                                        else
                                          {
                                            t = w_54;
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          p_149 = ATgetArgument(t, 0);
                                          q_149 = ATgetArgument(t, 1);
                                          t = n_149;
                                          t = d_27(eval_0_0, p_149, q_149, r_149, t);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              p_149 = ATgetArgument(t, 0);
                                              q_149 = ATgetArgument(t, 1);
                                              t = n_149;
                                              t = c_27(eval_0_0, p_149, q_149, r_149, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Call_2))
                                                {
                                                  p_149 = ATgetArgument(t, 0);
                                                  q_149 = ATgetArgument(t, 1);
                                                  t = p_149;
                                                  if(match_cons(t, sym_SVar_1))
                                                    {
                                                      m_149 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  {
                                                    ATerm y_54 = t;
                                                    int z_54 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = n_149;
                                                        t = b_27(eval_0_0, m_149, q_149, r_149, t);
                                                        ;
                                                        LocalPopChoice(z_54);
                                                      }
                                                    else
                                                      {
                                                        t = y_54;
                                                        t = n_149;
                                                        t = t_26(m_149, q_149, r_149, t);
                                                      }
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Let_2))
                                                    {
                                                      p_149 = ATgetArgument(t, 0);
                                                      q_149 = ATgetArgument(t, 1);
                                                      t = n_149;
                                                      t = s_26(eval_0_0, p_149, q_149, r_149, t);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Rec_2))
                                                        {
                                                          p_149 = ATgetArgument(t, 0);
                                                          q_149 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, p_149, (ATerm)ATempty, q_149)), q_149), r_149);
                                                      {
                                                        ATerm a_55 = t;
                                                        int c_55 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = eval_0_0(t);
                                                            ;
                                                            LocalPopChoice(c_55);
                                                          }
                                                        else
                                                          {
                                                            t = a_55;
                                                          }
                                                      }
                                                    }
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
              LocalPopChoice(p_53);
            }
          else
            {
              t = o_53;
              {
                ATerm d_55 = t;
                int e_55 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_55 = t;
                    int g_55 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = EvalAll_1_0(eval_0_0, t);
                        ;
                        LocalPopChoice(g_55);
                      }
                    else
                      {
                        t = f_55;
                        {
                          ATerm b_152 = NULL,c_152 = NULL,d_152 = NULL;
                          if(match_cons(t, sym_App_2))
                            {
                              b_152 = ATgetArgument(t, 0);
                              d_152 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = b_152;
                          if(match_cons(t, sym_All_1))
                            {
                              c_152 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = term_w_51;
                        }
                      }
                    ;
                    LocalPopChoice(e_55);
                  }
                else
                  {
                    t = d_55;
                    {
                      ATerm h_55 = t;
                      int i_55 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm v_152 = NULL,w_152 = NULL,x_152 = NULL,a_153 = NULL,b_153 = NULL;
                          w_152 = t;
                          if(match_cons(t, sym_App_2))
                            {
                              x_152 = ATgetArgument(t, 0);
                              b_153 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = x_152;
                          if(match_cons(t, sym_One_1))
                            {
                              a_153 = ATgetArgument(t, 0);
                              {
                                ATerm j_55 = t;
                                int l_55 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = w_152;
                                    t = p_26(eval_0_0, a_153, b_153, t);
                                    ;
                                    LocalPopChoice(l_55);
                                  }
                                else
                                  {
                                    t = j_55;
                                    t = term_w_51;
                                  }
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_Cong_2))
                                {
                                  a_153 = ATgetArgument(t, 0);
                                  v_152 = ATgetArgument(t, 1);
                                  {
                                    ATerm m_55 = t;
                                    int n_55 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = w_152;
                                        t = n_26(eval_0_0, a_153, v_152, b_153, t);
                                        ;
                                        LocalPopChoice(n_55);
                                      }
                                    else
                                      {
                                        t = m_55;
                                        t = SSL_explode_term(b_153);
                                        if(match_cons(t, sym__2))
                                          {
                                            ATerm o_55 = ATgetArgument(t, 0);
                                            ATerm p_55 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = term_w_51;
                                      }
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Scope_2))
                                    {
                                      a_153 = ATgetArgument(t, 0);
                                      v_152 = ATgetArgument(t, 1);
                                      t = w_152;
                                      t = l_26(eval_0_0, a_153, v_152, b_153, t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          a_153 = ATgetArgument(t, 0);
                                          {
                                            ATerm q_55 = t;
                                            int r_55 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = w_152;
                                                t = k_26(a_153, b_153, t);
                                                ;
                                                LocalPopChoice(r_55);
                                              }
                                            else
                                              {
                                                t = q_55;
                                                t = term_w_51;
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Build_1))
                                            {
                                              a_153 = ATgetArgument(t, 0);
                                              t = a_153;
                                              t = EvalTerm_0_0(t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  a_153 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              {
                                                ATerm s_55 = t;
                                                int u_55 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = (ATerm) ATmakeAppl(sym_App_2, a_153, b_153);
                                                    t = eval_0_0(t);
                                                    {
                                                      ATerm v_55 = t;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(!(match_cons(t, sym_Fail_0)))
                                                            _fail(t);
                                                          PopChoice();
                                                          _fail(t);
                                                        }
                                                      else
                                                        {
                                                          t = v_55;
                                                        }
                                                      t = b_153;
                                                    }
                                                    ;
                                                    LocalPopChoice(u_55);
                                                  }
                                                else
                                                  {
                                                    t = s_55;
                                                    t = term_w_51;
                                                  }
                                              }
                                            }
                                        }
                                    }
                                }
                            }
                          ;
                          LocalPopChoice(i_55);
                        }
                      else
                        {
                          t = h_55;
                          {
                            ATerm w_55 = t;
                            int x_55 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = EvalPrim_0_0(t);
                                ;
                                LocalPopChoice(x_55);
                              }
                            else
                              {
                                t = w_55;
                                {
                                  ATerm a_154 = NULL,b_154 = NULL,c_154 = NULL,d_154 = NULL;
                                  if(match_cons(t, sym_App_2))
                                    {
                                      a_154 = ATgetArgument(t, 0);
                                      d_154 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = a_154;
                                  if(match_cons(t, sym_Prim_2))
                                    {
                                      b_154 = ATgetArgument(t, 0);
                                      c_154 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = term_w_51;
                                }
                              }
                          }
                        }
                    }
                  }
              }
            }
          ;
          LocalPopChoice(m_53);
        }
      else
        {
          t = l_53;
        }
    }
  }
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm o_154 = NULL,q_154 = NULL,s_154 = NULL;
  q_154 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      s_154 = ATgetArgument(t, 0);
      o_154 = ATgetArgument(t, 1);
      {
        ATerm z_154 = NULL,g_155 = NULL,h_155 = NULL,j_155 = NULL;
        t = q_154;
        t = new_0_0(t);
        z_154 = t;
        t = new_0_0(t);
        g_155 = t;
        t = new_0_0(t);
        h_155 = t;
        t = new_0_0(t);
        j_155 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_155), h_155), g_155), z_154), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, z_154), (ATerm) ATmakeAppl(sym_Var_1, h_155))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, s_154, (ATerm)ATmakeAppl(sym_Var_1, z_154), (ATerm) ATmakeAppl(sym_Var_1, g_155)), (ATerm) ATmakeAppl(sym_BAM_3, o_154, (ATerm)ATmakeAppl(sym_Var_1, h_155), (ATerm) ATmakeAppl(sym_Var_1, j_155)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_y_55, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, j_155)), (ATerm) ATmakeAppl(sym_Var_1, g_155))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          s_154 = ATgetArgument(t, 0);
          {
            ATerm o_155 = NULL,q_155 = NULL,u_155 = NULL,v_155 = NULL;
            t = q_154;
            t = new_0_0(t);
            o_155 = t;
            t = s_154;
            {
              ATerm g_16 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((q_155 != NULL) && (q_155 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      q_155 = ATgetArgument(t, 0);
                    if(((u_155 != NULL) && (u_155 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      u_155 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, o_155);
                return(t);
              }
              t = oncetd_1_0(g_16, t);
              v_155 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_155), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_y_55, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_155)), not_null(q_155))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, o_155)), (ATerm) ATmakeAppl(sym_Build_1, v_155))));
            }
          }
        }
      else
        {
          ATerm x_155 = NULL,z_155 = NULL,c_156 = NULL,e_156 = NULL,f_156 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              s_154 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_154;
          t = new_0_0(t);
          x_155 = t;
          t = new_0_0(t);
          z_155 = t;
          t = s_154;
          {
            ATerm h_16 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((c_156 != NULL) && (c_156 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    c_156 = ATgetArgument(t, 0);
                  if(((e_156 != NULL) && (e_156 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    e_156 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, x_155);
              return(t);
            }
            t = oncetd_1_0(h_16, t);
            f_156 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_155), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, f_156), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_155), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, z_155)), (ATerm) ATmakeAppl(sym_PrimT_3, term_z_55, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, z_155))))), (ATerm)ATmakeAppl(sym_Var_1, x_155), (ATerm) ATmakeAppl(sym_Op_2, term_a_56, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_156)), not_null(c_156)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm h_156 = NULL,i_156 = NULL;
  h_156 = t;
  if(match_cons(t, sym_Match_1))
    {
      i_156 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_56 = t;
    int c_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_156 = NULL,n_156 = NULL,o_156 = NULL,p_156 = NULL;
        t = h_156;
        t = new_0_0(t);
        k_156 = t;
        t = i_156;
        {
          ATerm i_16 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((o_156 != NULL) && (o_156 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  o_156 = ATgetArgument(t, 0);
                if(((n_156 != NULL) && (n_156 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  n_156 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, k_156), not_null(o_156));
            return(t);
          }
          t = pat_td_1_0(i_16, t);
          p_156 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_156), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_156), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_d_56, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, k_156))), (ATerm) ATmakeAppl(sym_Match_1, not_null(n_156))))));
        }
        ;
        LocalPopChoice(c_56);
      }
    else
      {
        t = b_56;
        {
          ATerm k_56 = t;
          int l_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_156 = NULL,s_156 = NULL,t_156 = NULL;
              t = h_156;
              t = new_0_0(t);
              r_156 = t;
              t = i_156;
              {
                ATerm j_16 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((s_156 != NULL) && (s_156 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        s_156 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, r_156);
                  return(t);
                }
                t = pat_td_1_0(j_16, t);
                t_156 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_156), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, t_156), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, r_156)), not_null(s_156))));
              }
              ;
              LocalPopChoice(l_56);
            }
          else
            {
              t = k_56;
              {
                ATerm v_156 = NULL,w_156 = NULL,x_156 = NULL,z_156 = NULL;
                t = h_156;
                t = new_0_0(t);
                v_156 = t;
                t = i_156;
                {
                  ATerm k_16 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((w_156 != NULL) && (w_156 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          w_156 = ATgetArgument(t, 0);
                        if(((x_156 != NULL) && (x_156 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          x_156 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, v_156);
                    return(t);
                  }
                  t = pat_td_1_0(k_16, t);
                  z_156 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_156), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_156), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, v_156)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_156)), not_null(w_156)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm As_2_0 (ATerm c_126 (ATerm), ATerm d_126 (ATerm), ATerm t)
{
  ATerm a_157 = NULL,b_157 = NULL,c_157 = NULL,d_157 = NULL,e_157 = NULL,f_157 = NULL,i_1 = NULL,j_1 = NULL;
  f_157 = t;
  if(match_cons(t, sym_As_2))
    {
      b_157 = ATgetArgument(t, 0);
      c_157 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_157);
  a_157 = t;
  t = b_157;
  t = c_126(t);
  d_157 = t;
  t = c_157;
  t = d_126(t);
  e_157 = t;
  j_1 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, d_157, e_157);
  i_1 = t;
  t = SSLsetAnnotations(i_1, a_157);
  return(t);
}
ATerm CallT_3_0 (ATerm z_128 (ATerm), ATerm a_129 (ATerm), ATerm b_129 (ATerm), ATerm t)
{
  ATerm k_157 = NULL,l_157 = NULL,m_157 = NULL,o_157 = NULL,p_157 = NULL,q_157 = NULL,s_157 = NULL,t_157 = NULL,l_1 = NULL,n_1 = NULL;
  t_157 = t;
  if(match_cons(t, sym_CallT_3))
    {
      l_157 = ATgetArgument(t, 0);
      m_157 = ATgetArgument(t, 1);
      o_157 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_157);
  k_157 = t;
  t = l_157;
  t = z_128(t);
  p_157 = t;
  t = m_157;
  t = a_129(t);
  q_157 = t;
  t = o_157;
  t = b_129(t);
  s_157 = t;
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, p_157, q_157, s_157);
  l_1 = t;
  t = SSLsetAnnotations(l_1, k_157);
  return(t);
}
ATerm PrimT_3_0 (ATerm b_130 (ATerm), ATerm c_130 (ATerm), ATerm d_130 (ATerm), ATerm t)
{
  ATerm x_157 = NULL,z_157 = NULL,a_158 = NULL,h_158 = NULL,i_158 = NULL,j_158 = NULL,k_158 = NULL,l_158 = NULL,o_1 = NULL,p_1 = NULL;
  l_158 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      z_157 = ATgetArgument(t, 0);
      a_158 = ATgetArgument(t, 1);
      h_158 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_158);
  x_157 = t;
  t = z_157;
  t = b_130(t);
  i_158 = t;
  t = a_158;
  t = c_130(t);
  j_158 = t;
  t = h_158;
  t = d_130(t);
  k_158 = t;
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, i_158, j_158, k_158);
  o_1 = t;
  t = SSLsetAnnotations(o_1, x_157);
  return(t);
}
ATerm Explode_2_0 (ATerm x_125 (ATerm), ATerm y_125 (ATerm), ATerm t)
{
  ATerm r_158 = NULL,t_158 = NULL,u_158 = NULL,v_158 = NULL,w_158 = NULL,y_158 = NULL,q_1 = NULL,t_1 = NULL;
  y_158 = t;
  if(match_cons(t, sym_Explode_2))
    {
      t_158 = ATgetArgument(t, 0);
      u_158 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_158);
  r_158 = t;
  t = t_158;
  t = x_125(t);
  v_158 = t;
  t = u_158;
  t = y_125(t);
  w_158 = t;
  t_1 = t;
  t = (ATerm) ATmakeAppl(sym_Explode_2, v_158, w_158);
  q_1 = t;
  t = SSLsetAnnotations(q_1, r_158);
  return(t);
}
ATerm Op_2_0 (ATerm t_125 (ATerm), ATerm u_125 (ATerm), ATerm t)
{
  ATerm d_159 = NULL,e_159 = NULL,f_159 = NULL,g_159 = NULL,h_159 = NULL,i_159 = NULL,v_1 = NULL,w_1 = NULL;
  i_159 = t;
  if(match_cons(t, sym_Op_2))
    {
      e_159 = ATgetArgument(t, 0);
      f_159 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_159);
  d_159 = t;
  t = e_159;
  t = t_125(t);
  g_159 = t;
  t = f_159;
  t = u_125(t);
  h_159 = t;
  w_1 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, g_159, h_159);
  v_1 = t;
  t = SSLsetAnnotations(v_1, d_159);
  return(t);
}
ATerm pat_td_1_0 (ATerm j_161 (ATerm), ATerm t)
{
  ATerm o_56 = t;
  int p_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_161(t);
      ;
      LocalPopChoice(p_56);
    }
  else
    {
      t = o_56;
      {
        ATerm q_56 = t;
        int r_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_16 (ATerm t)
            {
              ATerm n_16 (ATerm t)
              {
                t = pat_td_1_0(j_161, t);
                return(t);
              }
              t = fetch_1_0(n_16, t);
              return(t);
            }
            t = Op_2_0(_id, m_16, t);
            ;
            LocalPopChoice(r_56);
          }
        else
          {
            t = q_56;
            {
              ATerm s_56 = t;
              int t_56 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_16 (ATerm t)
                  {
                    t = pat_td_1_0(j_161, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, o_16, t);
                  ;
                  LocalPopChoice(t_56);
                }
              else
                {
                  t = s_56;
                  {
                    ATerm u_56 = t;
                    int w_56 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm p_16 (ATerm t)
                        {
                          t = pat_td_1_0(j_161, t);
                          return(t);
                        }
                        t = Explode_2_0(p_16, _id, t);
                        ;
                        LocalPopChoice(w_56);
                      }
                    else
                      {
                        t = u_56;
                        {
                          ATerm x_56 = t;
                          int y_56 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm q_16 (ATerm t)
                              {
                                ATerm r_16 (ATerm t)
                                {
                                  t = pat_td_1_0(j_161, t);
                                  return(t);
                                }
                                t = fetch_1_0(r_16, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, q_16, t);
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
                                    ATerm s_16 (ATerm t)
                                    {
                                      ATerm t_16 (ATerm t)
                                      {
                                        t = pat_td_1_0(j_161, t);
                                        return(t);
                                      }
                                      t = fetch_1_0(t_16, t);
                                      return(t);
                                    }
                                    t = CallT_3_0(_id, _id, s_16, t);
                                    ;
                                    LocalPopChoice(a_57);
                                  }
                                else
                                  {
                                    t = z_56;
                                    {
                                      ATerm v_16 (ATerm t)
                                      {
                                        t = pat_td_1_0(j_161, t);
                                        return(t);
                                      }
                                      t = As_2_0(_id, v_16, t);
                                    }
                                  }
                              }
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
  ATerm y_159 = NULL,z_159 = NULL;
  y_159 = t;
  if(match_cons(t, sym_Build_1))
    {
      z_159 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_57 = t;
    int c_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_160 = NULL,h_160 = NULL,l_160 = NULL,o_160 = NULL;
        t = y_159;
        t = new_0_0(t);
        b_160 = t;
        t = z_159;
        {
          ATerm w_16 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((h_160 != NULL) && (h_160 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_160 = ATgetArgument(t, 0);
                if(((l_160 != NULL) && (l_160 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  l_160 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, b_160);
            return(t);
          }
          t = pat_td_1_0(w_16, t);
          o_160 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_160), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_d_57, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_160)), not_null(h_160))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_160)))), (ATerm) ATmakeAppl(sym_Build_1, o_160)));
        }
        ;
        LocalPopChoice(c_57);
      }
    else
      {
        t = b_57;
        {
          ATerm e_57 = t;
          int f_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_160 = NULL,t_160 = NULL,u_160 = NULL;
              t = y_159;
              t = new_0_0(t);
              q_160 = t;
              t = z_159;
              {
                ATerm c_17 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((t_160 != NULL) && (t_160 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        t_160 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, q_160);
                  return(t);
                }
                t = pat_td_1_0(c_17, t);
                u_160 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_160), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_160), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_160)))), (ATerm) ATmakeAppl(sym_Build_1, u_160)));
              }
              ;
              LocalPopChoice(f_57);
            }
          else
            {
              t = e_57;
              {
                ATerm y_160 = NULL,e_161 = NULL,f_161 = NULL,k_161 = NULL;
                t = y_159;
                t = new_0_0(t);
                y_160 = t;
                t = z_159;
                {
                  ATerm d_17 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((e_161 != NULL) && (e_161 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          e_161 = ATgetArgument(t, 0);
                        if(((f_161 != NULL) && (f_161 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          f_161 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, y_160);
                    return(t);
                  }
                  t = pat_td_1_0(d_17, t);
                  k_161 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_160), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(e_161), not_null(f_161), (ATerm) ATmakeAppl(sym_Var_1, y_160))), (ATerm) ATmakeAppl(sym_Build_1, k_161)));
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
  ATerm h_57 = t;
  int i_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(i_0, _id, t);
      {
        ATerm e_17 (ATerm t)
        {
          ATerm j_57 = t;
          int k_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(i_0, t);
              ;
              LocalPopChoice(k_57);
            }
          else
            {
              t = j_57;
            }
          return(t);
        }
        t = Cons_2_0(_id, e_17, t);
      }
      ;
      LocalPopChoice(i_57);
    }
  else
    {
      t = h_57;
      {
        ATerm f_17 (ATerm t)
        {
          t = map1_1_0(i_0, t);
          return(t);
        }
        t = Cons_2_0(_id, f_17, t);
      }
    }
  return(t);
}
ATerm g_17 (ATerm t)
{
  ATerm i_163 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      i_163 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, i_163, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_57), term_n_57));
  return(t);
}
ATerm h_17 (ATerm t)
{
  ATerm o_57 = t;
  int p_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_163 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_163 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, p_163, term_n_57);
      ;
      LocalPopChoice(p_57);
    }
  else
    {
      t = o_57;
    }
  return(t);
}
ATerm i_17 (ATerm t)
{
  ATerm x_163 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      x_163 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, x_163, term_n_57);
  return(t);
}
ATerm k_17 (ATerm t)
{
  ATerm q_57 = t;
  int t_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_163 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_163 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, z_163, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_57), term_n_57));
      ;
      LocalPopChoice(t_57);
    }
  else
    {
      t = q_57;
    }
  return(t);
}
ATerm l_17 (ATerm t)
{
  ATerm h_164 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_164 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, h_164, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_57), term_n_57));
  return(t);
}
ATerm m_17 (ATerm t)
{
  ATerm u_57 = t;
  int v_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_164 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_164 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, j_164, term_n_57);
      ;
      LocalPopChoice(v_57);
    }
  else
    {
      t = u_57;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm a_162 = NULL,b_162 = NULL,c_162 = NULL,l_162 = NULL,n_162 = NULL,o_162 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      n_162 = ATgetArgument(t, 0);
      o_162 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, n_162, o_162);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          n_162 = ATgetArgument(t, 0);
          t = n_162;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_162 = ATgetFirst((ATermList) t);
              b_162 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, a_162, (ATerm) ATmakeAppl(sym_LChoices_1, b_162));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_w_51;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              n_162 = ATgetArgument(t, 0);
              t = n_162;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_162 = ATgetFirst((ATermList) t);
                  b_162 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, a_162, (ATerm) ATmakeAppl(sym_Choices_1, b_162));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_w_51;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  n_162 = ATgetArgument(t, 0);
                  t = n_162;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      a_162 = ATgetFirst((ATermList) t);
                      b_162 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_162, (ATerm) ATmakeAppl(sym_Seqs_1, b_162));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_w_57;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      n_162 = ATgetArgument(t, 0);
                      o_162 = ATgetArgument(t, 1);
                      l_162 = ATgetArgument(t, 2);
                      c_162 = ATgetArgument(t, 3);
                      {
                        ATerm b_163 = NULL,c_163 = NULL;
                        t = o_162;
                        t = map1_1_0(g_17, t);
                        b_163 = t;
                        t = l_162;
                        t = map1_1_0(h_17, t);
                        c_163 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, n_162, b_163, c_163, c_162);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          n_162 = ATgetArgument(t, 0);
                          o_162 = ATgetArgument(t, 1);
                          l_162 = ATgetArgument(t, 2);
                          c_162 = ATgetArgument(t, 3);
                          {
                            ATerm x_57 = t;
                            int y_57 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm v_163 = NULL,w_163 = NULL;
                                t = l_162;
                                t = map1_1_0(i_17, t);
                                v_163 = t;
                                t = o_162;
                                t = map_1_0(k_17, t);
                                w_163 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, n_162, w_163, v_163, c_162);
                                ;
                                LocalPopChoice(y_57);
                              }
                            else
                              {
                                t = x_57;
                                {
                                  ATerm f_164 = NULL,g_164 = NULL;
                                  t = o_162;
                                  t = map1_1_0(l_17, t);
                                  f_164 = t;
                                  t = l_162;
                                  t = map_1_0(m_17, t);
                                  g_164 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, n_162, f_164, g_164, c_162);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              n_162 = ATgetArgument(t, 0);
                              o_162 = ATgetArgument(t, 1);
                              l_162 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, o_162, (ATerm) ATmakeAppl(sym_Op_2, term_a_56, (ATerm) ATinsert(ATinsert(ATempty, l_162), n_162)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  n_162 = ATgetArgument(t, 0);
                                  o_162 = ATgetArgument(t, 1);
                                  l_162 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, l_162)), n_162), (ATerm) ATmakeAppl(sym_Build_1, o_162)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      n_162 = ATgetArgument(t, 0);
                                      o_162 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_162, (ATerm) ATmakeAppl(sym_Match_1, o_162));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          n_162 = ATgetArgument(t, 0);
                                          o_162 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_162), o_162);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              n_162 = ATgetArgument(t, 0);
                                              o_162 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, o_162), n_162);
                                        }
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
ATerm n_17 (ATerm t)
{
  ATerm z_57 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_57;
    }
  return(t);
}
ATerm o_17 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_a_58;
  return(t);
}
ATerm p_17 (ATerm t)
{
  ATerm a_165 = NULL,b_165 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_165 = ATgetFirst((ATermList) t);
      b_165 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_165, b_165);
  return(t);
}
ATerm q_17 (ATerm t)
{
  ATerm c_165 = NULL,d_165 = NULL,e_165 = NULL,f_165 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_58 = ATgetArgument(t, 0);
      if(match_cons(b_58, sym__2))
        {
          c_165 = ATgetArgument(b_58, 0);
          d_165 = ATgetArgument(b_58, 1);
        }
      else
        _fail(t);
      {
        ATerm c_58 = ATgetArgument(t, 1);
        if(match_cons(c_58, sym__2))
          {
            e_165 = ATgetArgument(c_58, 0);
            f_165 = ATgetArgument(c_58, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_165), c_165), (ATerm) ATinsert(CheckATermList(f_165), d_165));
  return(t);
}
ATerm r_17 (ATerm t)
{
  t = genzip_4_0(s_17, t_17, v_17, _id, t);
  return(t);
}
ATerm s_17 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_a_58;
  return(t);
}
ATerm t_17 (ATerm t)
{
  ATerm g_165 = NULL,h_165 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_165 = ATgetFirst((ATermList) t);
      h_165 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_165, h_165);
  return(t);
}
ATerm v_17 (ATerm t)
{
  ATerm i_165 = NULL,j_165 = NULL,k_165 = NULL,l_165 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_58 = ATgetArgument(t, 0);
      if(match_cons(d_58, sym__2))
        {
          i_165 = ATgetArgument(d_58, 0);
          j_165 = ATgetArgument(d_58, 1);
        }
      else
        _fail(t);
      {
        ATerm g_58 = ATgetArgument(t, 1);
        if(match_cons(g_58, sym__2))
          {
            k_165 = ATgetArgument(g_58, 0);
            l_165 = ATgetArgument(g_58, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_165), i_165), (ATerm) ATinsert(CheckATermList(l_165), j_165));
  return(t);
}
ATerm l_27 (ATerm a_88, ATerm b_88, ATerm c_88, ATerm t)
{
  ATerm x_164 = NULL,y_164 = NULL,z_164 = NULL;
  t = c_88;
  t = fetch_1_0(n_17, t);
  t = c_88;
  t = genzip_4_0(o_17, p_17, q_17, LiftPrimArg_0_0, t);
  t = _2_0(concat_0_0, r_17, t);
  if(match_cons(t, sym__2))
    {
      x_164 = ATgetArgument(t, 0);
      {
        ATerm h_58 = ATgetArgument(t, 1);
        if(match_cons(h_58, sym__2))
          {
            y_164 = ATgetArgument(h_58, 0);
            z_164 = ATgetArgument(h_58, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, x_164, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, y_164), (ATerm) ATmakeAppl(sym_CallT_3, a_88, b_88, z_164)));
  return(t);
}
ATerm genzip_4_0 (ATerm x_141 (ATerm), ATerm y_141 (ATerm), ATerm z_141 (ATerm), ATerm a_142 (ATerm), ATerm t)
{
  ATerm m_165 (ATerm t)
  {
    ATerm i_58 = t;
    int j_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_141(t);
        ;
        LocalPopChoice(j_58);
      }
    else
      {
        t = i_58;
        t = y_141(t);
        t = _2_0(a_142, m_165, t);
        t = z_141(t);
      }
    return(t);
  }
  t = m_165(t);
  return(t);
}
ATerm v_165 (ATerm p_165, ATerm t)
{
  ATerm r_165 = NULL;
  t = p_165;
  {
    ATerm k_58 = t;
    if((PushChoice() == 0))
      {
        t = Var_1_0(_id, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_58;
      }
    t = new_0_0(t);
    r_165 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, r_165), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_165), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_165)))), (ATerm) ATmakeAppl(sym_Var_1, r_165)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm s_165 = NULL,t_165 = NULL;
  s_165 = t;
  if(match_cons(t, sym_Var_1))
    {
      t_165 = ATgetArgument(t, 0);
      {
        ATerm l_58 = t;
        int m_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_165(s_165, t);
            ;
            LocalPopChoice(m_58);
          }
        else
          {
            t = l_58;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_w_57, (ATerm) ATmakeAppl(sym_Var_1, t_165)));
          }
      }
    }
  else
    {
      t = v_165(s_165, t);
    }
  return(t);
}
ATerm Var_1_0 (ATerm h_123 (ATerm), ATerm t)
{
  ATerm w_165 = NULL,x_165 = NULL,y_165 = NULL,z_165 = NULL,a_2 = NULL,b_2 = NULL;
  z_165 = t;
  if(match_cons(t, sym_Var_1))
    {
      x_165 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_165);
  w_165 = t;
  t = x_165;
  t = h_123(t);
  y_165 = t;
  b_2 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, y_165);
  a_2 = t;
  t = SSLsetAnnotations(a_2, w_165);
  return(t);
}
ATerm w_17 (ATerm t)
{
  ATerm n_58 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_58;
    }
  return(t);
}
ATerm x_17 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_a_58;
  return(t);
}
ATerm y_17 (ATerm t)
{
  ATerm k_108 = NULL,l_108 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_108 = ATgetFirst((ATermList) t);
      l_108 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_108, l_108);
  return(t);
}
ATerm z_17 (ATerm t)
{
  ATerm m_108 = NULL,n_108 = NULL,o_108 = NULL,p_108 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_58 = ATgetArgument(t, 0);
      if(match_cons(o_58, sym__2))
        {
          m_108 = ATgetArgument(o_58, 0);
          n_108 = ATgetArgument(o_58, 1);
        }
      else
        _fail(t);
      {
        ATerm p_58 = ATgetArgument(t, 1);
        if(match_cons(p_58, sym__2))
          {
            o_108 = ATgetArgument(p_58, 0);
            p_108 = ATgetArgument(p_58, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_108), m_108), (ATerm) ATinsert(CheckATermList(p_108), n_108));
  return(t);
}
ATerm a_18 (ATerm t)
{
  t = genzip_4_0(b_18, c_18, e_18, _id, t);
  return(t);
}
ATerm b_18 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_a_58;
  return(t);
}
ATerm c_18 (ATerm t)
{
  ATerm q_108 = NULL,r_108 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_108 = ATgetFirst((ATermList) t);
      r_108 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_108, r_108);
  return(t);
}
ATerm e_18 (ATerm t)
{
  ATerm s_108 = NULL,t_108 = NULL,u_108 = NULL,v_108 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_58 = ATgetArgument(t, 0);
      if(match_cons(q_58, sym__2))
        {
          s_108 = ATgetArgument(q_58, 0);
          t_108 = ATgetArgument(q_58, 1);
        }
      else
        _fail(t);
      {
        ATerm t_58 = ATgetArgument(t, 1);
        if(match_cons(t_58, sym__2))
          {
            u_108 = ATgetArgument(t_58, 0);
            v_108 = ATgetArgument(t_58, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_108), s_108), (ATerm) ATinsert(CheckATermList(v_108), t_108));
  return(t);
}
ATerm f_18 (ATerm t)
{
  ATerm u_58 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_58;
    }
  return(t);
}
ATerm i_18 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_a_58;
  return(t);
}
ATerm j_18 (ATerm t)
{
  ATerm j_109 = NULL,k_109 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_109 = ATgetFirst((ATermList) t);
      k_109 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_109, k_109);
  return(t);
}
ATerm k_18 (ATerm t)
{
  ATerm l_109 = NULL,m_109 = NULL,n_109 = NULL,o_109 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_58 = ATgetArgument(t, 0);
      if(match_cons(v_58, sym__2))
        {
          l_109 = ATgetArgument(v_58, 0);
          m_109 = ATgetArgument(v_58, 1);
        }
      else
        _fail(t);
      {
        ATerm w_58 = ATgetArgument(t, 1);
        if(match_cons(w_58, sym__2))
          {
            n_109 = ATgetArgument(w_58, 0);
            o_109 = ATgetArgument(w_58, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_109), l_109), (ATerm) ATinsert(CheckATermList(o_109), m_109));
  return(t);
}
ATerm p_18 (ATerm t)
{
  t = genzip_4_0(t_18, u_18, v_18, _id, t);
  return(t);
}
ATerm t_18 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_a_58;
  return(t);
}
ATerm u_18 (ATerm t)
{
  ATerm p_109 = NULL,q_109 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_109 = ATgetFirst((ATermList) t);
      q_109 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_109, q_109);
  return(t);
}
ATerm v_18 (ATerm t)
{
  ATerm r_109 = NULL,s_109 = NULL,t_109 = NULL,u_109 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_58 = ATgetArgument(t, 0);
      if(match_cons(x_58, sym__2))
        {
          r_109 = ATgetArgument(x_58, 0);
          s_109 = ATgetArgument(x_58, 1);
        }
      else
        _fail(t);
      {
        ATerm y_58 = ATgetArgument(t, 1);
        if(match_cons(y_58, sym__2))
          {
            t_109 = ATgetArgument(y_58, 0);
            u_109 = ATgetArgument(y_58, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_109), r_109), (ATerm) ATinsert(CheckATermList(u_109), s_109));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm v_167 = NULL,w_167 = NULL,x_167 = NULL,y_167 = NULL;
  w_167 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      x_167 = ATgetArgument(t, 0);
      y_167 = ATgetArgument(t, 1);
      v_167 = ATgetArgument(t, 2);
      {
        ATerm h_108 = NULL,i_108 = NULL,j_108 = NULL;
        t = v_167;
        t = fetch_1_0(w_17, t);
        t = v_167;
        t = genzip_4_0(x_17, y_17, z_17, LiftPrimArg_0_0, t);
        t = _2_0(concat_0_0, a_18, t);
        if(match_cons(t, sym__2))
          {
            h_108 = ATgetArgument(t, 0);
            {
              ATerm z_58 = ATgetArgument(t, 1);
              if(match_cons(z_58, sym__2))
                {
                  i_108 = ATgetArgument(z_58, 0);
                  j_108 = ATgetArgument(z_58, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, h_108, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, i_108), (ATerm) ATmakeAppl(sym_PrimT_3, x_167, y_167, j_108)));
      }
    }
  else
    {
      ATerm g_109 = NULL,h_109 = NULL,i_109 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          x_167 = ATgetArgument(t, 0);
          y_167 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_167;
      t = fetch_1_0(f_18, t);
      t = y_167;
      t = genzip_4_0(i_18, j_18, k_18, LiftPrimArg_0_0, t);
      t = _2_0(concat_0_0, p_18, t);
      if(match_cons(t, sym__2))
        {
          g_109 = ATgetArgument(t, 0);
          {
            ATerm a_59 = ATgetArgument(t, 1);
            if(match_cons(a_59, sym__2))
              {
                h_109 = ATgetArgument(a_59, 0);
                i_109 = ATgetArgument(a_59, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, g_109, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, h_109), (ATerm) ATmakeAppl(sym_PrimT_3, x_167, (ATerm)ATempty, i_109)));
    }
  return(t);
}
ATerm w_18 (ATerm t)
{
  ATerm b_59 = t;
  int d_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Con_3_0(_id, _id, _id, t);
      ;
      LocalPopChoice(d_59);
    }
  else
    {
      t = b_59;
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm e_59 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(w_18, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_59;
    }
  return(t);
}
ATerm App_2_0 (ATerm z_125 (ATerm), ATerm a_126 (ATerm), ATerm t)
{
  ATerm b_168 = NULL,c_168 = NULL,d_168 = NULL,e_168 = NULL,f_168 = NULL,g_168 = NULL,d_2 = NULL,f_2 = NULL;
  g_168 = t;
  if(match_cons(t, sym_App_2))
    {
      c_168 = ATgetArgument(t, 0);
      d_168 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_168);
  b_168 = t;
  t = c_168;
  t = z_125(t);
  e_168 = t;
  t = d_168;
  t = a_126(t);
  f_168 = t;
  f_2 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, e_168, f_168);
  d_2 = t;
  t = SSLsetAnnotations(d_2, b_168);
  return(t);
}
ATerm Con_3_0 (ATerm l_126 (ATerm), ATerm m_126 (ATerm), ATerm n_126 (ATerm), ATerm t)
{
  ATerm j_168 = NULL,k_168 = NULL,l_168 = NULL,m_168 = NULL,n_168 = NULL,o_168 = NULL,p_168 = NULL,q_168 = NULL,g_2 = NULL,i_2 = NULL;
  q_168 = t;
  if(match_cons(t, sym_Con_3))
    {
      k_168 = ATgetArgument(t, 0);
      l_168 = ATgetArgument(t, 1);
      m_168 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_168);
  j_168 = t;
  t = k_168;
  t = l_126(t);
  n_168 = t;
  t = l_168;
  t = m_126(t);
  o_168 = t;
  t = m_168;
  t = n_126(t);
  p_168 = t;
  i_2 = t;
  t = (ATerm) ATmakeAppl(sym_Con_3, n_168, o_168, p_168);
  g_2 = t;
  t = SSLsetAnnotations(g_2, j_168);
  return(t);
}
ATerm a_19 (ATerm t)
{
  ATerm f_59 = t;
  int g_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Con_3_0(_id, _id, _id, t);
      ;
      LocalPopChoice(g_59);
    }
  else
    {
      t = f_59;
      t = App_2_0(_id, _id, t);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm h_59 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(a_19, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_59;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm w_168 = NULL,x_168 = NULL,y_168 = NULL,z_168 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      w_168 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_168;
  if(match_cons(t, sym_StratRule_3))
    {
      x_168 = ATgetArgument(t, 0);
      y_168 = ATgetArgument(t, 1);
      z_168 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_168), (ATerm) ATmakeAppl(sym_Where_1, z_168)), x_168));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          x_168 = ATgetArgument(t, 0);
          y_168 = ATgetArgument(t, 1);
          z_168 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = x_168;
      t = pureterm_0_0(t);
      t = y_168;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, y_168)), (ATerm) ATmakeAppl(sym_Where_1, z_168)), (ATerm) ATmakeAppl(sym_Match_1, x_168)));
    }
  return(t);
}
ATerm Scope_2_0 (ATerm f_129 (ATerm), ATerm g_129 (ATerm), ATerm t)
{
  ATerm g_169 = NULL,h_169 = NULL,i_169 = NULL,j_169 = NULL,k_169 = NULL,l_169 = NULL,n_2 = NULL,r_2 = NULL;
  l_169 = t;
  if(match_cons(t, sym_Scope_2))
    {
      h_169 = ATgetArgument(t, 0);
      i_169 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_169);
  g_169 = t;
  t = h_169;
  t = f_129(t);
  j_169 = t;
  t = i_169;
  t = g_129(t);
  k_169 = t;
  r_2 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, j_169, k_169);
  n_2 = t;
  t = SSLsetAnnotations(n_2, g_169);
  return(t);
}
ATerm oncetd_1_0 (ATerm h_135 (ATerm), ATerm t)
{
  ATerm o_169 (ATerm t)
  {
    ATerm i_59 = t;
    int j_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_135(t);
        ;
        LocalPopChoice(j_59);
      }
    else
      {
        t = i_59;
        t = SRTS_one(o_169, t);
      }
    return(t);
  }
  t = o_169(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm o_27 (ATerm p_83, ATerm q_83, ATerm r_83, ATerm t)
{
  ATerm p_169 = NULL,q_169 = NULL,r_169 = NULL,s_169 = NULL,t_169 = NULL,u_169 = NULL,v_169 = NULL;
  t = new_0_0(t);
  p_169 = t;
  t = p_83;
  {
    ATerm b_19 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm k_59 = ATgetArgument(t, 0);
          if(match_cons(k_59, sym_Var_1))
            {
              if(((r_169 != NULL) && (r_169 != ATgetArgument(k_59, 0))))
                _fail(ATgetArgument(k_59, 0));
              else
                r_169 = ATgetArgument(k_59, 0);
            }
          else
            _fail(t);
          if(((q_169 != NULL) && (q_169 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            q_169 = ATgetArgument(t, 1);
          {
            ATerm m_59 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_169));
      return(t);
    }
    t = oncetd_1_0(b_19, t);
    s_169 = t;
    t = q_83;
    {
      ATerm e_19 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm n_59 = ATgetArgument(t, 0);
            if(match_cons(n_59, sym_Var_1))
              {
                if(((r_169 != NULL) && (r_169 != ATgetArgument(n_59, 0))))
                  _fail(ATgetArgument(n_59, 0));
                else
                  r_169 = ATgetArgument(n_59, 0);
              }
            else
              _fail(t);
            if(((t_169 != NULL) && (t_169 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              t_169 = ATgetArgument(t, 1);
            {
              ATerm o_59 = ATgetArgument(t, 2);
              if(match_cons(o_59, sym_CallT_3))
                {
                  if(((u_169 != NULL) && (u_169 != ATgetArgument(o_59, 0))))
                    _fail(ATgetArgument(o_59, 0));
                  else
                    u_169 = ATgetArgument(o_59, 0);
                  {
                    ATerm p_59 = ATgetArgument(o_59, 1);
                    if(((ATgetType(p_59) != AT_LIST) || !(ATisEmpty(p_59))))
                      _fail(t);
                  }
                  {
                    ATerm q_59 = ATgetArgument(o_59, 2);
                    if(((ATgetType(q_59) != AT_LIST) || !(ATisEmpty(q_59))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, p_169);
        return(t);
      }
      t = oncetd_1_0(e_19, t);
      v_169 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_169), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, s_169, v_169, (ATerm) ATmakeAppl(sym_Seq_2, r_83, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(u_169), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(q_169), not_null(t_169), term_w_57))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(r_169)), (ATerm) ATmakeAppl(sym_Var_1, p_169))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm r_59 = t;
  int s_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_59 = t;
      int v_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_169 = NULL,z_169 = NULL,a_170 = NULL,b_170 = NULL,c_170 = NULL;
          y_169 = t;
          if(match_cons(t, sym_SRule_1))
            {
              z_169 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_169;
          if(match_cons(t, sym_Rule_3))
            {
              a_170 = ATgetArgument(t, 0);
              b_170 = ATgetArgument(t, 1);
              c_170 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = y_169;
          t = o_27(a_170, b_170, c_170, t);
          t = desugarRule_0_0(t);
          ;
          LocalPopChoice(v_59);
        }
      else
        {
          t = t_59;
          {
            ATerm w_59 = t;
            int x_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Scope_2_0(_id, desugarRule_0_0, t);
                ;
                LocalPopChoice(x_59);
              }
            else
              {
                t = w_59;
                t = RtoS_0_0(t);
              }
          }
        }
      ;
      LocalPopChoice(s_59);
    }
  else
    {
      t = r_59;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm d_134 (ATerm), ATerm t)
{
  t = d_134(t);
  {
    ATerm f_19 (ATerm t)
    {
      t = topdown_1_0(d_134, t);
      return(t);
    }
    t = SRTS_all(f_19, t);
  }
  return(t);
}
ATerm g_19 (ATerm t)
{
  ATerm y_59 = t;
  int z_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(z_59);
    }
  else
    {
      t = y_59;
    }
  t = repeat_1_0(h_19, t);
  return(t);
}
ATerm h_19 (ATerm t)
{
  ATerm a_60 = t;
  int b_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
      LocalPopChoice(b_60);
    }
  else
    {
      t = a_60;
      {
        ATerm c_60 = t;
        int e_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_170 = NULL,l_170 = NULL,m_170 = NULL,n_170 = NULL;
            k_170 = t;
            if(match_cons(t, sym_CallT_3))
              {
                l_170 = ATgetArgument(t, 0);
                m_170 = ATgetArgument(t, 1);
                n_170 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = k_170;
            t = l_27(l_170, m_170, n_170, t);
            ;
            LocalPopChoice(e_60);
          }
        else
          {
            t = c_60;
            {
              ATerm f_60 = t;
              int g_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(g_60);
                }
              else
                {
                  t = f_60;
                  {
                    ATerm h_60 = t;
                    int i_60 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(i_60);
                      }
                    else
                      {
                        t = h_60;
                        {
                          ATerm j_60 = t;
                          int k_60 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm l_60 = t;
                              int n_60 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm s_170 = NULL,t_170 = NULL,u_170 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      s_170 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = s_170;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      t_170 = ATgetArgument(t, 0);
                                      {
                                        ATerm o_60 = t;
                                        int p_60 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm w_170 = NULL,x_170 = NULL;
                                            t = s_170;
                                            {
                                              ATerm i_19 (ATerm t)
                                              {
                                                if(match_cons(t, sym_RootApp_1))
                                                  {
                                                    ATerm q_60 = ATgetArgument(t, 0);
                                                    if(match_cons(q_60, sym_Match_1))
                                                      {
                                                        if(((w_170 != NULL) && (w_170 != ATgetArgument(q_60, 0))))
                                                          _fail(ATgetArgument(q_60, 0));
                                                        else
                                                          w_170 = ATgetArgument(q_60, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = not_null(w_170);
                                                return(t);
                                              }
                                              t = pat_td_1_0(i_19, t);
                                              x_170 = t;
                                              t = (ATerm) ATmakeAppl(sym_Match_1, x_170);
                                            }
                                            ;
                                            LocalPopChoice(p_60);
                                          }
                                        else
                                          {
                                            t = o_60;
                                            t = t_170;
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          t_170 = ATgetArgument(t, 0);
                                          u_170 = ATgetArgument(t, 1);
                                          {
                                            ATerm r_60 = t;
                                            int s_60 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm a_171 = NULL,b_171 = NULL;
                                                t = s_170;
                                                {
                                                  ATerm k_19 (ATerm t)
                                                  {
                                                    if(match_cons(t, sym_RootApp_1))
                                                      {
                                                        ATerm t_60 = ATgetArgument(t, 0);
                                                        if(match_cons(t_60, sym_Match_1))
                                                          {
                                                            if(((a_171 != NULL) && (a_171 != ATgetArgument(t_60, 0))))
                                                              _fail(ATgetArgument(t_60, 0));
                                                            else
                                                              a_171 = ATgetArgument(t_60, 0);
                                                          }
                                                        else
                                                          _fail(t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = not_null(a_171);
                                                    return(t);
                                                  }
                                                  t = pat_td_1_0(k_19, t);
                                                  b_171 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, b_171);
                                                }
                                                ;
                                                LocalPopChoice(s_60);
                                              }
                                            else
                                              {
                                                t = r_60;
                                                t = (ATerm) ATmakeAppl(sym_BA_2, t_170, u_170);
                                              }
                                          }
                                        }
                                      else
                                        {
                                          ATerm f_171 = NULL,g_171 = NULL;
                                          t = s_170;
                                          {
                                            ATerm p_19 (ATerm t)
                                            {
                                              if(match_cons(t, sym_RootApp_1))
                                                {
                                                  ATerm u_60 = ATgetArgument(t, 0);
                                                  if(match_cons(u_60, sym_Match_1))
                                                    {
                                                      if(((f_171 != NULL) && (f_171 != ATgetArgument(u_60, 0))))
                                                        _fail(ATgetArgument(u_60, 0));
                                                      else
                                                        f_171 = ATgetArgument(u_60, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                _fail(t);
                                              t = not_null(f_171);
                                              return(t);
                                            }
                                            t = pat_td_1_0(p_19, t);
                                            g_171 = t;
                                            t = (ATerm) ATmakeAppl(sym_Match_1, g_171);
                                          }
                                        }
                                    }
                                  ;
                                  LocalPopChoice(n_60);
                                }
                              else
                                {
                                  t = l_60;
                                  t = Mapp2_0_0(t);
                                }
                              ;
                              LocalPopChoice(k_60);
                            }
                          else
                            {
                              t = j_60;
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
  t = topdown_1_0(g_19, t);
  return(t);
}
ATerm s_19 (ATerm t)
{
  t = term_v_60;
  return(t);
}
ATerm v_19 (ATerm t)
{
  t = term_w_60;
  return(t);
}
ATerm p_27 (ATerm g_49, ATerm h_49, ATerm t)
{
  ATerm h_171 = NULL;
  t = g_49;
  t = desugar_0_0(t);
  h_171 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, h_171, h_49);
  {
    ATerm x_60 = t;
    int y_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_26;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym_App_2, h_171, h_49);
        t = debug_1_0(s_19, t);
        ;
        LocalPopChoice(y_60);
      }
    else
      {
        t = x_60;
      }
    t = eval_0_0(t);
    {
      ATerm z_60 = t;
      int a_61 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_171 = NULL;
          i_171 = t;
          t = term_i_44;
          t = get_config_0_0(t);
          t = i_171;
          t = debug_1_0(v_19, t);
          ;
          LocalPopChoice(a_61);
        }
      else
        {
          t = z_60;
        }
      {
        ATerm b_61 = t;
        int c_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_171 = NULL,l_171 = NULL,m_171 = NULL;
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            t = term_z_43;
            k_171 = t;
            t = (ATerm) ATinsert(ATempty, term_e_61);
            l_171 = t;
            t = SSL_printnl(k_171, l_171);
            t = term_v_37;
            m_171 = t;
            t = SSL_exit(m_171);
            t = (ATerm) ATinsert(ATempty, term_e_61);
            ;
            LocalPopChoice(c_61);
          }
        else
          {
            t = b_61;
          }
      }
    }
  }
  return(t);
}
ATerm w_19 (ATerm t)
{
  t = term_f_61;
  return(t);
}
ATerm x_19 (ATerm t)
{
  ATerm g_61 = t;
  int h_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_171 = NULL,z_171 = NULL;
      y_171 = t;
      if(match_cons(t, sym_Dump_1))
        {
          z_171 = ATgetArgument(t, 0);
          t = y_171;
          t = x_25(z_171, t);
        }
      else
        {
          if(match_cons(t, sym_Load_1))
            {
              z_171 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_171;
          t = u_25(z_171, t);
        }
      ;
      LocalPopChoice(h_61);
    }
  else
    {
      t = g_61;
      {
        ATerm i_61 = t;
        int j_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_import_0_0(t);
            ;
            LocalPopChoice(j_61);
          }
        else
          {
            t = i_61;
            {
              ATerm c_172 = NULL,d_172 = NULL;
              c_172 = t;
              if(match_cons(t, sym_Strategies_1))
                {
                  d_172 = ATgetArgument(t, 0);
                  t = c_172;
                  t = p_25(d_172, t);
                }
              else
                {
                  if(match_cons(t, sym_Rules_1))
                    {
                      d_172 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = c_172;
                  t = s_24(d_172, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm y_19 (ATerm t)
{
  t = term_k_61;
  return(t);
}
ATerm eval_command_0_0 (ATerm t)
{
  ATerm l_61 = t;
  int m_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_61 = t;
      int q_61 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_171 = NULL;
          r_171 = t;
          t = term_y_26;
          t = get_config_0_0(t);
          t = r_171;
          t = debug_1_0(w_19, t);
          ;
          LocalPopChoice(q_61);
        }
      else
        {
          t = n_61;
        }
      {
        ATerm r_61 = t;
        int s_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_171 = NULL,t_171 = NULL,u_171 = NULL,v_171 = NULL;
            s_171 = t;
            if(match_cons(t, sym__2))
              {
                t_171 = ATgetArgument(t, 0);
                v_171 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = t_171;
            if(match_cons(t, sym_Eval_1))
              {
                u_171 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = s_171;
            t = p_27(u_171, v_171, t);
            ;
            LocalPopChoice(s_61);
          }
        else
          {
            t = r_61;
            {
              ATerm y_109 = NULL,z_109 = NULL;
              t = _2_0(x_19, _id, t);
              y_109 = t;
              t = SSL_explode_term(y_109);
              if(match_cons(t, sym__2))
                {
                  ATerm t_61 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) t_61) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm u_61 = ATgetArgument(t, 1);
                    if(((ATgetType(u_61) == AT_LIST) && !(ATisEmpty(u_61))))
                      {
                        ATerm v_61 = ATgetFirst((ATermList) u_61);
                        ATerm w_61 = (ATerm) ATgetNext((ATermList) u_61);
                        if(((ATgetType(w_61) == AT_LIST) && !(ATisEmpty(w_61))))
                          {
                            z_109 = ATgetFirst((ATermList) w_61);
                            {
                              ATerm x_61 = (ATerm) ATgetNext((ATermList) w_61);
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
              t = z_109;
            }
          }
      }
      ;
      LocalPopChoice(m_61);
    }
  else
    {
      t = l_61;
      {
        ATerm g_172 = NULL;
        t = debug_1_0(y_19, t);
        t = term_v_37;
        g_172 = t;
        t = SSL_exit(g_172);
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm f_133 (ATerm), ATerm t)
{
  ATerm h_172 (ATerm t)
  {
    ATerm y_61 = t;
    int a_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_133(t);
        t = h_172(t);
        ;
        LocalPopChoice(a_62);
      }
    else
      {
        t = y_61;
      }
    return(t);
  }
  t = h_172(t);
  return(t);
}
ATerm z_19 (ATerm t)
{
  ATerm i_172 = NULL,j_172 = NULL,k_172 = NULL,l_172 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_62 = ATgetArgument(t, 0);
      if(((ATgetType(b_62) == AT_LIST) && !(ATisEmpty(b_62))))
        {
          i_172 = ATgetFirst((ATermList) b_62);
          j_172 = (ATerm) ATgetNext((ATermList) b_62);
        }
      else
        _fail(t);
      k_172 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_172, k_172);
  t = eval_command_0_0(t);
  l_172 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_172, l_172);
  return(t);
}
ATerm evaluate_commands_0_0 (ATerm t)
{
  t = repeat_1_0(z_19, t);
  return(t);
}
ATerm z_172 (ATerm t_172, ATerm t)
{
  t = SSL_fclose(t_172);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_172 = NULL,x_172 = NULL;
  x_172 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_172 = ATgetArgument(t, 0);
      {
        ATerm c_62 = t;
        int d_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_172);
            ;
            LocalPopChoice(d_62);
          }
        else
          {
            t = c_62;
            t = z_172(x_172, t);
          }
      }
    }
  else
    {
      t = z_172(x_172, t);
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
  ATerm a_173 = NULL;
  t = SSL_fopen(k_69, l_69);
  a_173 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_173);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_173 = NULL;
  t = SSL_stdin_stream();
  b_173 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_173);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm c_173 = NULL;
  t = SSL_stdout_stream();
  c_173 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_173);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_173 = NULL;
  t = SSL_stderr_stream();
  d_173 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_173);
  return(t);
}
ATerm a_20 (ATerm t)
{
  ATerm n_173 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      n_173 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_173;
  return(t);
}
ATerm c_20 (ATerm t)
{
  ATerm q_173 = NULL;
  q_173 = t;
  t = SSL_is_string(q_173);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_62 = ATgetArgument(t, 0);
      ATerm f_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_62 = t;
    int h_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_173 = NULL,i_110 = NULL;
        k_173 = t;
        t = SSL_explode_term(k_173);
        if(match_cons(t, sym__2))
          {
            ATerm i_62 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_62) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm j_62 = ATgetArgument(t, 1);
              if(((ATgetType(j_62) == AT_LIST) && !(ATisEmpty(j_62))))
                {
                  i_110 = ATgetFirst((ATermList) j_62);
                  {
                    ATerm m_62 = (ATerm) ATgetNext((ATermList) j_62);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = i_110;
        if(match_cons(t, sym_stderr_0))
          {
            t = i_110;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = i_110;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = i_110;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(h_62);
      }
    else
      {
        t = g_62;
        {
          ATerm n_62 = t;
          int o_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_173 = NULL,m_173 = NULL;
              t = _2_0(a_20, _id, t);
              if(match_cons(t, sym__2))
                {
                  l_173 = ATgetArgument(t, 0);
                  m_173 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_27(l_173, m_173, t);
              ;
              LocalPopChoice(o_62);
            }
          else
            {
              t = n_62;
              {
                ATerm o_173 = NULL,p_173 = NULL;
                t = _2_0(c_20, _id, t);
                if(match_cons(t, sym__2))
                  {
                    o_173 = ATgetArgument(t, 0);
                    p_173 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = r_27(o_173, p_173, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm d_20 (ATerm t)
{
  t = term_p_62;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_173 = NULL,t_173 = NULL,u_173 = NULL;
  ATerm q_62 = t;
  int r_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_173 = NULL;
      v_173 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_173, term_s_62);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(r_62);
    }
  else
    {
      t = q_62;
      t = debug_1_0(d_20, t);
      _fail(t);
    }
  s_173 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_173 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_27(u_173, t);
  t_173 = t;
  t = s_173;
  t = fclose_0_0(t);
  t = t_173;
  return(t);
}
ATerm copyright_0_0 (ATerm t)
{
  ATerm x_173 = NULL,y_173 = NULL,z_173 = NULL,a_174 = NULL,b_174 = NULL,c_174 = NULL,d_174 = NULL,e_174 = NULL,f_174 = NULL,g_174 = NULL,h_174 = NULL,i_174 = NULL,j_174 = NULL,k_174 = NULL,l_174 = NULL,m_174 = NULL,n_174 = NULL;
  x_173 = t;
  t = term_z_43;
  y_173 = t;
  t = (ATerm) ATinsert(ATempty, term_t_62);
  z_173 = t;
  t = SSL_printnl(y_173, z_173);
  t = term_z_43;
  a_174 = t;
  t = (ATerm) ATinsert(ATempty, term_u_62);
  b_174 = t;
  t = SSL_printnl(a_174, b_174);
  t = term_z_43;
  c_174 = t;
  t = (ATerm) ATinsert(ATempty, term_w_62);
  d_174 = t;
  t = SSL_printnl(c_174, d_174);
  t = term_z_43;
  e_174 = t;
  t = (ATerm) ATinsert(ATempty, term_x_62);
  f_174 = t;
  t = SSL_printnl(e_174, f_174);
  t = term_z_43;
  g_174 = t;
  t = (ATerm) ATinsert(ATempty, term_y_62);
  h_174 = t;
  t = SSL_printnl(g_174, h_174);
  t = term_z_43;
  i_174 = t;
  t = (ATerm) ATinsert(ATempty, term_z_62);
  j_174 = t;
  t = SSL_printnl(i_174, j_174);
  t = term_z_43;
  k_174 = t;
  t = (ATerm) ATinsert(ATempty, term_a_63);
  l_174 = t;
  t = SSL_printnl(k_174, l_174);
  t = term_z_43;
  m_174 = t;
  t = (ATerm) ATinsert(ATempty, term_t_62);
  n_174 = t;
  t = SSL_printnl(m_174, n_174);
  t = x_173;
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_174 = NULL,x_174 = NULL,y_174 = NULL;
  w_174 = t;
  if(match_cons(t, sym__2))
    {
      x_174 = ATgetArgument(t, 0);
      y_174 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_63 = t;
    int c_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_174;
        if((x_174 != t))
          {
            _fail(t);
          }
        t = w_174;
        ;
        LocalPopChoice(c_63);
      }
    else
      {
        t = b_63;
        t = (ATerm) ATmakeAppl(sym__2, x_174, y_174);
        {
          ATerm d_63 = t;
          int f_63 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_174, y_174);
              ;
              LocalPopChoice(f_63);
            }
          else
            {
              t = d_63;
              t = SSL_gtr(x_174, y_174);
            }
          t = (ATerm) ATmakeAppl(sym__2, x_174, y_174);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_153 (ATerm), ATerm t)
{
  ATerm g_63 = t;
  int h_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_175 = NULL,d_175 = NULL;
      b_175 = t;
      t = term_i_63;
      t = get_config_0_0(t);
      d_175 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_175, term_v_37);
      t = geq_0_0(t);
      t = b_175;
      t = v_153(t);
      ;
      LocalPopChoice(h_63);
    }
  else
    {
      t = g_63;
    }
  return(t);
}
ATerm at_end_1_0 (ATerm k_140 (ATerm), ATerm t)
{
  ATerm n_175 (ATerm t)
  {
    ATerm j_63 = t;
    int k_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, n_175, t);
        ;
        LocalPopChoice(k_63);
      }
    else
      {
        t = j_63;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_140(t);
      }
    return(t);
  }
  t = n_175(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_63 = t;
  int m_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(m_63);
    }
  else
    {
      t = l_63;
      {
        ATerm i_175 = NULL,j_175 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_175 = ATgetFirst((ATermList) t);
            j_175 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_175;
        {
          ATerm e_20 (ATerm t)
          {
            t = j_175;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(e_20, t);
        }
      }
    }
  return(t);
}
ATerm y_175 (ATerm q_175, ATerm t)
{
  ATerm s_175 = NULL;
  t = SSL_explode_term(q_175);
  if(match_cons(t, sym__2))
    {
      ATerm o_63 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_63) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      s_175 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_175;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm t_175 = NULL,u_175 = NULL,v_175 = NULL;
  v_175 = t;
  if(match_cons(t, sym__2))
    {
      t_175 = ATgetArgument(t, 0);
      u_175 = ATgetArgument(t, 1);
      {
        ATerm p_63 = t;
        int q_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_20 (ATerm t)
            {
              t = u_175;
              return(t);
            }
            t = t_175;
            t = at_end_1_0(f_20, t);
            ;
            LocalPopChoice(q_63);
          }
        else
          {
            t = p_63;
            t = y_175(v_175, t);
          }
      }
    }
  else
    {
      t = y_175(v_175, t);
    }
  return(t);
}
ATerm t_27 (ATerm f_74, ATerm e_74, ATerm t)
{
  ATerm z_175 = NULL,a_176 = NULL,b_176 = NULL;
  t = f_74;
  {
    ATerm r_63 = t;
    int s_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(s_63);
      }
    else
      {
        t = r_63;
        t = (ATerm) ATempty;
      }
    z_175 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_74, z_175);
    t = conc_0_0(t);
    a_176 = t;
    t = term_t_63;
    b_176 = t;
    t = SSL_table_put(b_176, f_74, a_176);
    t = (ATerm) ATmakeAppl(sym__3, term_t_63, f_74, a_176);
  }
  return(t);
}
ATerm g_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-I", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_20 (ATerm t)
{
  ATerm c_176 = NULL,d_176 = NULL,e_176 = NULL;
  c_176 = t;
  t = term_k_44;
  d_176 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_176), term_k_44);
  e_176 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_44, (ATerm) ATinsert(ATinsert(ATempty, c_176), term_k_44));
  t = t_27(d_176, e_176, t);
  return(t);
}
ATerm i_20 (ATerm t)
{
  t = term_u_63;
  return(t);
}
ATerm j_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("@version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_20 (ATerm t)
{
  ATerm f_176 = NULL,g_176 = NULL;
  f_176 = t;
  t = term_v_63;
  g_176 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_63, f_176);
  t = z_27(g_176, f_176, t);
  return(t);
}
ATerm m_20 (ATerm t)
{
  t = term_x_63;
  return(t);
}
ATerm n_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-d", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_20 (ATerm t)
{
  ATerm h_176 = NULL,i_176 = NULL,j_176 = NULL,k_176 = NULL;
  t = term_y_26;
  h_176 = t;
  t = term_v_37;
  i_176 = t;
  t = term_a_64;
  t = z_27(h_176, i_176, t);
  t = term_i_63;
  j_176 = t;
  t = term_j_38;
  k_176 = t;
  t = term_b_64;
  t = z_27(j_176, k_176, t);
  return(t);
}
ATerm p_20 (ATerm t)
{
  t = term_c_64;
  return(t);
}
ATerm q_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_20 (ATerm t)
{
  ATerm l_176 = NULL,m_176 = NULL;
  t = term_i_44;
  l_176 = t;
  t = term_v_37;
  m_176 = t;
  t = term_d_64;
  t = z_27(l_176, m_176, t);
  return(t);
}
ATerm t_20 (ATerm t)
{
  t = term_e_64;
  return(t);
}
ATerm si_options_0_0 (ATerm t)
{
  ATerm f_64 = t;
  int g_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(g_20, h_20, i_20, t);
      ;
      LocalPopChoice(g_64);
    }
  else
    {
      t = f_64;
      {
        ATerm h_64 = t;
        int i_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(j_20, k_20, m_20, t);
            ;
            LocalPopChoice(i_64);
          }
        else
          {
            t = h_64;
            {
              ATerm l_64 = t;
              int m_64 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(n_20, o_20, p_20, t);
                  ;
                  LocalPopChoice(m_64);
                }
              else
                {
                  t = l_64;
                  t = Option_3_0(q_20, r_20, t_20, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm v_20 (ATerm t)
{
  ATerm o_176 = NULL;
  o_176 = t;
  if(match_string(t, "-k"))
    {
      t = o_176;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_176;
    }
  return(t);
}
ATerm a_21 (ATerm t)
{
  ATerm p_176 = NULL,q_176 = NULL,r_176 = NULL;
  p_176 = t;
  t = SSL_string_to_int(p_176);
  q_176 = t;
  t = term_n_64;
  r_176 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_64, q_176);
  t = z_27(r_176, q_176, t);
  t = p_176;
  return(t);
}
ATerm b_21 (ATerm t)
{
  t = term_o_64;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_20, a_21, b_21, t);
  return(t);
}
ATerm c_21 (ATerm t)
{
  ATerm t_176 = NULL;
  t_176 = t;
  if(match_string(t, "-S"))
    {
      t = t_176;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_176;
    }
  return(t);
}
ATerm d_21 (ATerm t)
{
  ATerm u_176 = NULL,v_176 = NULL;
  t = term_i_63;
  u_176 = t;
  t = term_s_37;
  v_176 = t;
  t = term_p_64;
  t = z_27(u_176, v_176, t);
  t = term_q_64;
  return(t);
}
ATerm e_21 (ATerm t)
{
  t = term_r_64;
  return(t);
}
ATerm f_21 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_21 (ATerm t)
{
  ATerm w_176 = NULL,x_176 = NULL,y_176 = NULL;
  w_176 = t;
  t = SSL_string_to_int(w_176);
  x_176 = t;
  t = term_i_63;
  y_176 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_63, x_176);
  t = z_27(y_176, x_176, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_176);
  return(t);
}
ATerm h_21 (ATerm t)
{
  t = term_s_64;
  return(t);
}
ATerm j_21 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_21 (ATerm t)
{
  ATerm z_176 = NULL,a_177 = NULL;
  t = term_t_64;
  z_176 = t;
  t = term_u_64;
  a_177 = t;
  t = term_v_64;
  t = z_27(z_176, a_177, t);
  t = term_w_64;
  return(t);
}
ATerm l_21 (ATerm t)
{
  t = term_x_64;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_64 = t;
  int z_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_21, d_21, e_21, t);
      ;
      LocalPopChoice(z_64);
    }
  else
    {
      t = y_64;
      {
        ATerm a_65 = t;
        int b_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(f_21, g_21, h_21, t);
            ;
            LocalPopChoice(b_65);
          }
        else
          {
            t = a_65;
            t = Option_3_0(j_21, k_21, l_21, t);
          }
      }
    }
  return(t);
}
ATerm z_27 (ATerm z_73, ATerm a_74, ATerm t)
{
  ATerm b_177 = NULL;
  t = term_t_63;
  b_177 = t;
  t = SSL_table_put(b_177, z_73, a_74);
  t = (ATerm) ATmakeAppl(sym__3, term_t_63, z_73, a_74);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm t)
{
  ATerm e_177 = NULL,f_177 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_177 = NULL,h_177 = NULL,i_177 = NULL;
      t = term_u_64;
      t = c_0(t);
      g_177 = t;
      t = term_c_65;
      h_177 = t;
      t = term_d_65;
      i_177 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_65, term_d_65, g_177);
      t = x_27(h_177, i_177, g_177, t);
      _fail(t);
    }
  else
    {
      ATerm l_177 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_177 = ATgetFirst((ATermList) t);
          f_177 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_177;
      t = a_0(t);
      t = term_u_64;
      t = b_0(t);
      l_177 = t;
      t = (ATerm) ATinsert(CheckATermList(f_177), l_177);
    }
  return(t);
}
ATerm m_21 (ATerm t)
{
  ATerm n_177 = NULL;
  n_177 = t;
  if(match_string(t, "-o"))
    {
      t = n_177;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_177;
    }
  return(t);
}
ATerm n_21 (ATerm t)
{
  ATerm o_177 = NULL,p_177 = NULL;
  o_177 = t;
  t = term_h_65;
  p_177 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_65, o_177);
  t = z_27(p_177, o_177, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_177);
  return(t);
}
ATerm o_21 (ATerm t)
{
  t = term_i_65;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_21, n_21, o_21, t);
  return(t);
}
ATerm x_27 (ATerm x_78, ATerm y_78, ATerm w_78, ATerm t)
{
  ATerm r_177 = NULL,s_177 = NULL,t_177 = NULL;
  r_177 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_78, y_78);
  {
    ATerm j_65 = t;
    int k_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_65 = ATgetArgument(t, 0);
            ATerm m_65 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, x_78, y_78);
        t = w_27(x_78, y_78, t);
        ;
        LocalPopChoice(k_65);
      }
    else
      {
        t = j_65;
        t = (ATerm) ATempty;
      }
    s_177 = t;
    t = (ATerm) ATinsert(CheckATermList(s_177), w_78);
    t_177 = t;
    t = SSL_table_put(x_78, y_78, t_177);
    t = r_177;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm a_178 = NULL,b_178 = NULL,c_178 = NULL,d_178 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_178 = NULL,f_178 = NULL,g_178 = NULL;
      t = term_u_64;
      t = h_0(t);
      e_178 = t;
      t = term_c_65;
      f_178 = t;
      t = term_d_65;
      g_178 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_65, term_d_65, e_178);
      t = x_27(f_178, g_178, e_178, t);
      _fail(t);
    }
  else
    {
      ATerm k_178 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_178 = ATgetFirst((ATermList) t);
          b_178 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_178;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_178 = ATgetFirst((ATermList) t);
          d_178 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_178;
      t = f_0(t);
      t = c_178;
      t = g_0(t);
      k_178 = t;
      t = (ATerm) ATinsert(CheckATermList(d_178), k_178);
    }
  return(t);
}
ATerm q_21 (ATerm t)
{
  ATerm m_178 = NULL;
  m_178 = t;
  if(match_string(t, "-i"))
    {
      t = m_178;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_178;
    }
  return(t);
}
ATerm r_21 (ATerm t)
{
  ATerm n_178 = NULL,o_178 = NULL;
  n_178 = t;
  t = term_m_44;
  o_178 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_44, n_178);
  t = z_27(o_178, n_178, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, n_178);
  return(t);
}
ATerm s_21 (ATerm t)
{
  t = term_n_65;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_21, r_21, s_21, t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm q_178 = NULL,r_178 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_178 = ATgetFirst((ATermList) t);
      r_178 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_178 = NULL,w_178 = NULL;
        t = r_178;
        t = e_0(t);
        v_178 = t;
        t = q_178;
        t = d_0(t);
        w_178 = t;
        t = r_178;
        {
          ATerm t_21 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(v_178), w_178);
            return(t);
          }
          t = reverse_acc_2_0(d_0, t_21, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_64;
      t = e_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm i_124 (ATerm), ATerm t)
{
  ATerm x_178 = NULL,y_178 = NULL,z_178 = NULL,a_179 = NULL,s_2 = NULL,t_2 = NULL;
  a_179 = t;
  if(match_cons(t, sym_Program_1))
    {
      y_178 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_179);
  x_178 = t;
  t = y_178;
  t = i_124(t);
  z_178 = t;
  t_2 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, z_178);
  s_2 = t;
  t = SSLsetAnnotations(s_2, x_178);
  return(t);
}
ATerm u_21 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm v_21 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_21 (ATerm t)
{
  ATerm f_179 = NULL;
  f_179 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_179), term_o_65);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_179 = NULL,e_179 = NULL;
  ATerm p_65 = t;
  int q_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_65;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_65);
    }
  else
    {
      t = p_65;
      t = fetch_1_0(u_21, t);
    }
  t = term_t_65;
  t = echo_0_0(t);
  t = term_c_65;
  d_179 = t;
  t = term_d_65;
  e_179 = t;
  t = term_u_65;
  t = w_27(d_179, e_179, t);
  t = reverse_acc_2_0(_id, v_21, t);
  t = map_1_0(w_21, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm j_124 (ATerm), ATerm t)
{
  ATerm g_179 = NULL,h_179 = NULL,i_179 = NULL,j_179 = NULL,u_2 = NULL,v_2 = NULL;
  j_179 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      h_179 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_179);
  g_179 = t;
  t = h_179;
  t = j_124(t);
  i_179 = t;
  v_2 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, i_179);
  u_2 = t;
  t = SSLsetAnnotations(u_2, g_179);
  return(t);
}
ATerm fetch_1_0 (ATerm e_140 (ATerm), ATerm t)
{
  ATerm m_179 (ATerm t)
  {
    ATerm v_65 = t;
    int w_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(e_140, _id, t);
        ;
        LocalPopChoice(w_65);
      }
    else
      {
        t = v_65;
        t = Cons_2_0(_id, m_179, t);
      }
    return(t);
  }
  t = m_179(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_179 = NULL,p_179 = NULL,q_179 = NULL;
  o_179 = t;
  {
    ATerm x_65 = t;
    int y_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_179;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_65 = ATgetFirst((ATermList) t);
                ATerm b_66 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_179;
          }
        ;
        LocalPopChoice(y_65);
      }
    else
      {
        t = x_65;
        t = (ATerm) ATinsert(ATempty, o_179);
      }
    p_179 = t;
    t = term_c_66;
    q_179 = t;
    t = SSL_printnl(q_179, p_179);
    t = o_179;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_s_65;
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
  ATerm u_179 = NULL,v_179 = NULL,w_179 = NULL,x_179 = NULL;
  u_179 = t;
  t = j_152(t);
  v_179 = t;
  t = term_z_43;
  w_179 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_179), v_179);
  x_179 = t;
  t = SSL_printnl(w_179, x_179);
  t = u_179;
  return(t);
}
ATerm map_1_0 (ATerm u_139 (ATerm), ATerm t)
{
  ATerm y_179 (ATerm t)
  {
    ATerm d_66 = t;
    int e_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(e_66);
      }
    else
      {
        t = d_66;
        t = Cons_2_0(u_139, y_179, t);
      }
    return(t);
  }
  t = y_179(t);
  return(t);
}
ATerm x_21 (ATerm t)
{
  ATerm f_66 = t;
  int g_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(g_66);
    }
  else
    {
      t = f_66;
    }
  return(t);
}
ATerm y_21 (ATerm t)
{
  t = term_h_66;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm k_66 = t;
  int l_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_180 = NULL;
      e_180 = t;
      t = SSL_is_string(e_180);
      ;
      LocalPopChoice(l_66);
    }
  else
    {
      t = k_66;
      {
        ATerm m_66 = t;
        int p_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(x_21, t);
            ;
            LocalPopChoice(p_66);
          }
        else
          {
            t = m_66;
            {
              ATerm i_180 = NULL,j_180 = NULL,k_180 = NULL;
              i_180 = t;
              if(match_cons(t, sym_Path_1))
                {
                  j_180 = ATgetArgument(t, 0);
                  t = j_180;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      j_180 = ATgetArgument(t, 0);
                      t = j_180;
                      {
                        ATerm q_66 = t;
                        int r_66 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(r_66);
                          }
                        else
                          {
                            t = q_66;
                            t = debug_1_0(y_21, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm o_180 = NULL,p_180 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          j_180 = ATgetArgument(t, 0);
                          k_180 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = j_180;
                      t = eval_config_0_0(t);
                      o_180 = t;
                      t = k_180;
                      t = eval_config_0_0(t);
                      p_180 = t;
                      t = (ATerm) ATmakeAppl(sym__2, o_180, p_180);
                      t = v_27(o_180, p_180, t);
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
  ATerm s_180 = NULL,t_180 = NULL;
  s_180 = t;
  t = term_t_63;
  t_180 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_63, s_180);
  t = w_27(t_180, s_180, t);
  {
    ATerm s_66 = t;
    int t_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_180 = NULL,v_180 = NULL;
        t = eval_config_0_0(t);
        u_180 = t;
        t = term_t_63;
        v_180 = t;
        t = SSL_table_put(v_180, s_180, u_180);
        t = u_180;
        ;
        LocalPopChoice(t_66);
      }
    else
      {
        t = s_66;
      }
  }
  return(t);
}
ATerm a_22 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_22 (ATerm t)
{
  ATerm w_180 = NULL,x_180 = NULL;
  t = term_u_66;
  w_180 = t;
  t = term_u_64;
  x_180 = t;
  t = term_v_66;
  t = z_27(w_180, x_180, t);
  return(t);
}
ATerm c_22 (ATerm t)
{
  t = term_w_66;
  return(t);
}
ATerm d_22 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_22 (ATerm t)
{
  ATerm y_180 = NULL,z_180 = NULL,a_181 = NULL,b_181 = NULL;
  t = term_u_66;
  y_180 = t;
  t = term_u_64;
  z_180 = t;
  t = term_v_66;
  t = z_27(y_180, z_180, t);
  t = term_x_66;
  a_181 = t;
  t = term_u_64;
  b_181 = t;
  t = term_y_66;
  t = z_27(a_181, b_181, t);
  t = term_z_66;
  return(t);
}
ATerm f_22 (ATerm t)
{
  t = term_b_67;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_67 = t;
  int d_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_22, b_22, c_22, t);
      ;
      LocalPopChoice(d_67);
    }
  else
    {
      t = c_67;
      t = Option_3_0(d_22, e_22, f_22, t);
    }
  return(t);
}
ATerm h_22 (ATerm t)
{
  ATerm e_181 = NULL,f_181 = NULL;
  e_181 = t;
  t = term_s_65;
  f_181 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_65, e_181);
  t = z_27(f_181, e_181, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, e_181);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_158 (ATerm), ATerm t)
{
  ATerm d_181 = NULL;
  d_181 = t;
  {
    ATerm e_67 = t;
    int f_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_67;
        t = o_158(t);
        ;
        LocalPopChoice(f_67);
      }
    else
      {
        t = e_67;
      }
    t = d_181;
    {
      ATerm i_22 (ATerm t)
      {
        ATerm h_67 = t;
        int i_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_67 = t;
            int k_67 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(k_67);
              }
            else
              {
                t = j_67;
                t = o_158(t);
                t = Cons_2_0(_id, i_22, t);
              }
            ;
            LocalPopChoice(i_67);
          }
        else
          {
            t = h_67;
            {
              ATerm h_181 = NULL,i_181 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_181 = ATgetFirst((ATermList) t);
                  i_181 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(i_181), (ATerm) ATmakeAppl(sym_Undefined_1, h_181));
            }
          }
        return(t);
      }
      t = Cons_2_0(h_22, i_22, t);
    }
  }
  return(t);
}
ATerm m_22 (ATerm t)
{
  ATerm w_181 = NULL;
  w_181 = t;
  if(match_string(t, "--help"))
    {
      t = w_181;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = w_181;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = w_181;
        }
    }
  return(t);
}
ATerm n_22 (ATerm t)
{
  ATerm x_181 = NULL,y_181 = NULL;
  t = term_l_67;
  x_181 = t;
  t = term_u_64;
  y_181 = t;
  t = term_m_67;
  t = z_27(x_181, y_181, t);
  t = term_n_67;
  return(t);
}
ATerm q_22 (ATerm t)
{
  t = term_p_67;
  return(t);
}
ATerm r_22 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_158 (ATerm), ATerm t)
{
  ATerm p_181 = NULL,q_181 = NULL,r_181 = NULL,s_181 = NULL,t_181 = NULL,u_181 = NULL,v_181 = NULL;
  p_181 = t;
  t = term_c_65;
  s_181 = t;
  t = term_d_65;
  t_181 = t;
  t = (ATerm) ATempty;
  u_181 = t;
  t = SSL_table_put(s_181, t_181, u_181);
  t = p_181;
  {
    ATerm l_22 (ATerm t)
    {
      ATerm q_67 = t;
      int r_67 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_158(t);
          ;
          LocalPopChoice(r_67);
        }
      else
        {
          t = q_67;
          {
            ATerm s_67 = t;
            int t_67 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_22, n_22, q_22, t);
                ;
                LocalPopChoice(t_67);
              }
            else
              {
                t = s_67;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_22, t);
    {
      ATerm u_67 = t;
      int v_67 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_182 = NULL;
          f_182 = t;
          {
            ATerm w_67 = t;
            int x_67 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_111 = NULL;
                t = f_182;
                {
                  ATerm y_67 = t;
                  int z_67 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_l_67;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(z_67);
                    }
                  else
                    {
                      t = y_67;
                      t = fetch_1_0(r_22, t);
                    }
                  t = f_182;
                  t = default_system_usage_0_0(t);
                  t = term_s_37;
                  e_111 = t;
                  t = SSL_exit(e_111);
                }
                ;
                LocalPopChoice(x_67);
              }
            else
              {
                t = w_67;
                {
                  ATerm i_111 = NULL;
                  t = term_u_66;
                  t = get_config_0_0(t);
                  t = f_182;
                  t = default_system_about_0_0(t);
                  t = term_s_37;
                  i_111 = t;
                  t = SSL_exit(i_111);
                }
              }
          }
          ;
          LocalPopChoice(v_67);
        }
      else
        {
          t = u_67;
          {
            ATerm a_68 = t;
            int b_68 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_182 = NULL,h_182 = NULL,i_182 = NULL;
                ATerm s_22 (ATerm t)
                {
                  ATerm a_23 (ATerm t)
                  {
                    if(((q_181 != NULL) && (q_181 != t)))
                      _fail(t);
                    else
                      q_181 = t;
                    return(t);
                  }
                  t = Undefined_1_0(a_23, t);
                  return(t);
                }
                t = fetch_1_0(s_22, t);
                t = term_z_43;
                g_182 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_181)), term_c_68);
                h_182 = t;
                t = SSL_printnl(g_182, h_182);
                t = (ATerm) ATmakeAppl(sym__2, term_z_43, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_181)), term_c_68));
                t = default_system_usage_0_0(t);
                t = term_v_37;
                i_182 = t;
                t = SSL_exit(i_182);
                ;
                LocalPopChoice(b_68);
              }
            else
              {
                t = a_68;
              }
          }
        }
      r_181 = t;
      t = term_c_65;
      v_181 = t;
      t = SSL_table_destroy(v_181);
      t = r_181;
    }
  }
  return(t);
}
ATerm f_23 (ATerm t)
{
  ATerm d_68 = t;
  int e_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_68 = t;
      int g_68 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = input_option_0_0(t);
          ;
          LocalPopChoice(g_68);
        }
      else
        {
          t = f_68;
          {
            ATerm h_68 = t;
            int i_68 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = output_option_0_0(t);
                ;
                LocalPopChoice(i_68);
              }
            else
              {
                t = h_68;
                {
                  ATerm j_68 = t;
                  int k_68 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Option_3_0(g_23, i_23, j_23, t);
                      ;
                      LocalPopChoice(k_68);
                    }
                  else
                    {
                      t = j_68;
                      {
                        ATerm l_68 = t;
                        int m_68 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = verbose_option_0_0(t);
                            ;
                            LocalPopChoice(m_68);
                          }
                        else
                          {
                            t = l_68;
                            t = keep_option_0_0(t);
                          }
                      }
                    }
                }
              }
          }
        }
      ;
      LocalPopChoice(e_68);
    }
  else
    {
      t = d_68;
      t = si_options_0_0(t);
    }
  return(t);
}
ATerm g_23 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_23 (ATerm t)
{
  ATerm o_182 = NULL,p_182 = NULL;
  t = term_n_68;
  o_182 = t;
  t = term_u_64;
  p_182 = t;
  t = term_o_68;
  t = z_27(o_182, p_182, t);
  t = term_p_68;
  return(t);
}
ATerm j_23 (ATerm t)
{
  t = term_q_68;
  return(t);
}
ATerm make_option_table_0_0 (ATerm t)
{
  ATerm l_182 = NULL,m_182 = NULL,n_182 = NULL;
  l_182 = t;
  t = term_k_44;
  m_182 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_68), term_k_44);
  n_182 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_44, (ATerm) ATinsert(ATinsert(ATempty, term_r_68), term_k_44));
  t = z_27(m_182, n_182, t);
  t = l_182;
  t = parse_options_1_0(f_23, t);
  return(t);
}
ATerm _2_0 (ATerm y_113 (ATerm), ATerm z_113 (ATerm), ATerm t)
{
  ATerm q_182 = NULL,r_182 = NULL,s_182 = NULL,t_182 = NULL,u_182 = NULL,v_182 = NULL,w_2 = NULL,x_2 = NULL;
  v_182 = t;
  if(match_cons(t, sym__2))
    {
      r_182 = ATgetArgument(t, 0);
      s_182 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_182);
  q_182 = t;
  t = r_182;
  t = y_113(t);
  t_182 = t;
  t = s_182;
  t = z_113(t);
  u_182 = t;
  x_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_182, u_182);
  w_2 = t;
  t = SSLsetAnnotations(w_2, q_182);
  return(t);
}
ATerm Cons_2_0 (ATerm n_118 (ATerm), ATerm o_118 (ATerm), ATerm t)
{
  ATerm y_182 = NULL,z_182 = NULL,a_183 = NULL,b_183 = NULL,c_183 = NULL,d_183 = NULL,z_2 = NULL,a_3 = NULL;
  d_183 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_182 = ATgetFirst((ATermList) t);
      a_183 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_183);
  y_182 = t;
  t = z_182;
  t = n_118(t);
  b_183 = t;
  t = a_183;
  t = o_118(t);
  c_183 = t;
  a_3 = t;
  t = (ATerm) ATinsert(CheckATermList(c_183), b_183);
  z_2 = t;
  t = SSLsetAnnotations(z_2, y_182);
  return(t);
}
ATerm at_suffix_1_0 (ATerm o_140 (ATerm), ATerm t)
{
  ATerm g_183 (ATerm t)
  {
    ATerm s_68 = t;
    int t_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_140(t);
        ;
        LocalPopChoice(t_68);
      }
    else
      {
        t = s_68;
        t = Cons_2_0(_id, g_183, t);
      }
    return(t);
  }
  t = g_183(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm h_140 (ATerm), ATerm t)
{
  ATerm h_183 = NULL,i_183 = NULL;
  ATerm k_23 (ATerm t)
  {
    t = Cons_2_0(h_140, _id, t);
    {
      ATerm l_23 (ATerm t)
      {
        if(((h_183 != NULL) && (h_183 != t)))
          _fail(t);
        else
          h_183 = t;
        return(t);
      }
      t = Cons_2_0(_id, l_23, t);
      t = (ATerm) ATempty;
    }
    return(t);
  }
  t = at_suffix_1_0(k_23, t);
  i_183 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_183, not_null(h_183));
  return(t);
}
ATerm o_23 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--args", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm process_options_0_0 (ATerm t)
{
  ATerm k_111 = NULL,l_111 = NULL;
  ATerm u_68 = t;
  int v_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(o_23, t);
      ;
      LocalPopChoice(v_68);
    }
  else
    {
      t = u_68;
      {
        ATerm j_183 = NULL;
        j_183 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_183, (ATerm) ATempty);
      }
    }
  t = _2_0(make_option_table_0_0, _id, t);
  k_111 = t;
  t = SSL_explode_term(k_111);
  if(match_cons(t, sym__2))
    {
      ATerm w_68 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_68) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_68 = ATgetArgument(t, 1);
        if(((ATgetType(x_68) == AT_LIST) && !(ATisEmpty(x_68))))
          {
            ATerm z_68 = ATgetFirst((ATermList) x_68);
            ATerm a_69 = (ATerm) ATgetNext((ATermList) x_68);
            if(((ATgetType(a_69) == AT_LIST) && !(ATisEmpty(a_69))))
              {
                l_111 = ATgetFirst((ATermList) a_69);
                {
                  ATerm b_69 = (ATerm) ATgetNext((ATermList) a_69);
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
  t = l_111;
  return(t);
}
ATerm create_runtime_environment_0_0 (ATerm t)
{
  ATerm l_183 = NULL,m_183 = NULL,n_183 = NULL,o_183 = NULL;
  l_183 = t;
  t = term_c_13;
  m_183 = t;
  t = SSL_table_create(m_183);
  t = term_v_23;
  n_183 = t;
  t = SSL_table_create(n_183);
  t = term_w_23;
  o_183 = t;
  t = SSL_table_create(o_183);
  t = l_183;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm p_183 = NULL,q_183 = NULL,r_183 = NULL;
  t = create_runtime_environment_0_0(t);
  t = process_options_0_0(t);
  t = if_verbose1_1_0(copyright_0_0, t);
  p_183 = t;
  t = term_e_69;
  t = ReadFromFile_0_0(t);
  q_183 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_183, p_183);
  t = evaluate_commands_0_0(t);
  t = destroy_runtime_environment_0_0(t);
  t = term_s_37;
  r_183 = t;
  t = SSL_exit(r_183);
  return(t);
}
