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
ATerm term_t_50;
ATerm term_s_50;
ATerm term_d_50;
ATerm term_c_50;
ATerm term_b_50;
ATerm term_a_50;
ATerm term_z_49;
ATerm term_u_49;
ATerm term_t_49;
ATerm term_s_49;
ATerm term_r_49;
ATerm term_q_49;
ATerm term_l_49;
ATerm term_o_48;
ATerm term_n_48;
ATerm term_m_48;
ATerm term_j_48;
ATerm term_e_48;
ATerm term_d_48;
ATerm term_c_48;
ATerm term_z_47;
ATerm term_w_47;
ATerm term_v_47;
ATerm term_u_47;
ATerm term_r_47;
ATerm term_q_47;
ATerm term_n_47;
ATerm term_l_47;
ATerm term_k_47;
ATerm term_j_47;
ATerm term_i_47;
ATerm term_f_47;
ATerm term_e_47;
ATerm term_b_47;
ATerm term_y_46;
ATerm term_v_46;
ATerm term_q_46;
ATerm term_p_46;
ATerm term_m_46;
ATerm term_l_46;
ATerm term_k_46;
ATerm term_j_46;
ATerm term_i_46;
ATerm term_h_46;
ATerm term_g_46;
ATerm term_f_46;
ATerm term_q_45;
ATerm term_a_45;
ATerm term_x_44;
ATerm term_w_44;
ATerm term_v_44;
ATerm term_u_44;
ATerm term_i_43;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_b_43;
ATerm term_a_43;
ATerm term_c_42;
ATerm term_s_41;
ATerm term_p_41;
ATerm term_o_41;
ATerm term_n_41;
ATerm term_r_38;
ATerm term_m_37;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_b_36;
ATerm term_x_35;
ATerm term_v_35;
ATerm term_i_35;
ATerm term_r_34;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_f_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_o_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_k_26;
ATerm term_h_26;
ATerm term_r_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_v_24;
ATerm term_r_24;
ATerm term_o_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_z_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_l_23;
ATerm term_x_15;
ATerm term_s_8;
void init_constant_terms (void)
{
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("eval-rules: ", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("rules normalized: ", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("senv", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_23, term_u_23, term_v_23);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_23, term_z_23, term_b_24);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_24, term_h_24, term_j_24);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_24, term_o_24, term_r_24);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_24, term_y_24, term_d_25);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_25, term_j_25, term_r_25);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_26, term_m_26, term_n_26);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_26, term_q_26, term_s_26);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_26, term_v_26, term_w_26);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_26, term_a_27, term_b_27);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_27, term_f_27, term_g_27);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_27, term_j_27, term_k_27);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_27, term_p_27, term_q_27);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_27, term_u_27, term_v_27);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_27, term_z_27, term_a_28);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_28, term_d_28, term_e_28);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_28, term_j_28, term_k_28);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_28, term_o_28, term_p_28);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_28, term_s_28, term_t_28);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_28, term_x_28, term_y_28);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_29, term_b_29, term_e_29);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_29, term_h_29, term_i_29);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_29, term_n_29, term_o_29);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_29, term_r_29, term_s_29);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_29, term_x_29, term_y_29);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_30, term_c_30, term_d_30);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_30, term_g_30, term_i_30);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_30, term_l_30, term_m_30);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("importing module: ", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("sc", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol(".sdefs", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("error: import of multiple modules not supported yet", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("loading image from file: ", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("image: ", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("tenv", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("image ", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" loaded", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("image written to file: ", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("BindVar: ", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("match1: ", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("match2: ", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("bindings: ", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(sym_NULL_0);
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("operator ", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" not defined", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("eval: ", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(sym_Op_2, term_b_43, (ATerm) ATempty);
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(sym_ConstType_1, term_c_43);
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Evaluate strategy: ", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("> ", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-d", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Evaluating command: ", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol("unknown command: ", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--------------------------------------------------------------------", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol("This is SI, the Stratego Interpreter ", 0, ATtrue));
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (c) 2001, Eelco Visser <visser@acm.org>", 0, ATtrue));
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol("This program is free software; you can redistribute it and/or modify", 0, ATtrue));
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(ATmakeSymbol("it under the terms of the GNU General Public License as published by", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol("the Free Software Foundation; either version 2, or (at your option)", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("any later version.", 0, ATtrue));
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-I dir           include modules from directory dir", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(ATmakeSymbol("@version", 0, ATtrue));
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("@version v       declare version", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(sym__3, term_y_46, term_v_46, term_z_23);
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-d               debug mode", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(sym__3, term_y_46, term_q_32, term_u_23);
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-t               trace mode", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_37);
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(sym__3, term_y_46, term_q_49, term_j_48);
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm RDtoSD_0_0 (ATerm);
ATerm eval_rules_0_0 (ATerm);
ATerm spaste_1_0 (ATerm c_156 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm s_123 (ATerm), ATerm t_123 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm j_125 (ATerm), ATerm k_125 (ATerm), ATerm l_125 (ATerm), ATerm);
ATerm Let_2_0 (ATerm v_122 (ATerm), ATerm w_122 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm d_156 (ATerm), ATerm e_156 (ATerm), ATerm f_156 (ATerm), ATerm);
ATerm Bind7_0_0 (ATerm);
ATerm Bind5_0_0 (ATerm);
ATerm Bind2_0_0 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm SVar_1_0 (ATerm u_122 (ATerm), ATerm);
ATerm srename_0_0 (ATerm);
ATerm tpaste_1_0 (ATerm y_155 (ATerm), ATerm);
ATerm DistBinding_2_0 (ATerm p_153 (ATerm), ATerm q_153 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm RnBinding_2_0 (ATerm j_153 (ATerm), ATerm k_153 (ATerm (ATerm), ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm RnVar_1_0 (ATerm u_153 (ATerm (ATerm), ATerm), ATerm);
ATerm all_dist_1_0 (ATerm j_133 (ATerm), ATerm);
ATerm env_alltd_1_0 (ATerm t_132 (ATerm), ATerm);
ATerm rename_4_0 (ATerm e_153 (ATerm (ATerm), ATerm), ATerm f_153 (ATerm), ATerm g_153 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm h_153 (ATerm (ATerm), ATerm), ATerm);
ATerm trename_0_0 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm DeclareVariables_0_0 (ATerm);
ATerm DefScopeDefault_0_0 (ATerm);
ATerm DynamicRules_1_0 (ATerm c_122 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm t_121 (ATerm), ATerm u_121 (ATerm), ATerm v_121 (ATerm), ATerm w_121 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm m_125 (ATerm), ATerm n_125 (ATerm), ATerm o_125 (ATerm), ATerm p_125 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm z_155 (ATerm), ATerm a_156 (ATerm), ATerm b_156 (ATerm), ATerm);
ATerm Bind8_0_0 (ATerm);
ATerm declared_vars_0_0 (ATerm);
ATerm Bind6_0_0 (ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm union_1_0 (ATerm x_137 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm crush_3_0 (ATerm q_143 (ATerm), ATerm r_143 (ATerm), ATerm s_143 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm b_138 (ATerm), ATerm c_138 (ATerm), ATerm);
ATerm diff_1_0 (ATerm t_137 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm free_vars_3_0 (ATerm u_154 (ATerm), ATerm v_154 (ATerm), ATerm w_154 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm tvars_0_0 (ATerm);
ATerm DefLRule_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm e_128 (ATerm), ATerm);
ATerm define_lrules_0_0 (ATerm);
ATerm eval_strategies_0_0 (ATerm);
ATerm define_strategies_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm g_134 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm b_149 (ATerm), ATerm c_149 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm d_149 (ATerm), ATerm);
ATerm call_noisy_0_0 (ATerm);
ATerm call_sc_0_0 (ATerm);
ATerm eval_import_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm table_putlist_0_0 (ATerm);
ATerm eval_load_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm g_146 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm eval_dump_0_0 (ATerm);
ATerm fatal_error_0_0 (ATerm);
ATerm iftrace_1_0 (ATerm i_126 (ATerm), ATerm);
ATerm EvalPrim_0_0 (ATerm);
ATerm EvalWhere_1_0 (ATerm d_157 (ATerm), ATerm);
ATerm fold_op_0_0 (ATerm);
ATerm SubsVar_0_0 (ATerm);
ATerm EvalTerm_0_0 (ATerm);
ATerm EvalBuild_0_0 (ATerm);
ATerm table_replace_0_0 (ATerm);
ATerm BindVar_0_0 (ATerm);
ATerm PatDecompose_0_0 (ATerm);
ATerm MatchVar_1_0 (ATerm d_154 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm u_127 (ATerm), ATerm v_127 (ATerm), ATerm);
ATerm for_3_0 (ATerm x_127 (ATerm), ATerm y_127 (ATerm), ATerm z_127 (ATerm), ATerm);
ATerm stratego_match_1_0 (ATerm b_157 (ATerm), ATerm);
ATerm EvalMatch_0_0 (ATerm);
ATerm EvalScope_1_0 (ATerm c_157 (ATerm), ATerm);
ATerm EvalCong_1_0 (ATerm z_156 (ATerm), ATerm);
ATerm EvalOne_1_0 (ATerm y_156 (ATerm), ATerm);
ATerm EvalAll_1_0 (ATerm j_0 (ATerm), ATerm);
ATerm EvalLet_1_0 (ATerm i_157 (ATerm), ATerm);
ATerm EvalCallFail_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm zip_1_0 (ATerm c_136 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm x_139 (ATerm), ATerm y_139 (ATerm), ATerm z_139 (ATerm), ATerm);
ATerm length_0_0 (ATerm);
ATerm EvalCall_1_0 (ATerm h_157 (ATerm), ATerm);
ATerm EvalLChoice_1_0 (ATerm g_157 (ATerm), ATerm);
ATerm EvalChoice_1_0 (ATerm f_157 (ATerm), ATerm);
ATerm EvalNot_1_0 (ATerm e_157 (ATerm), ATerm);
ATerm eval_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm Mapp0_0_0 (ATerm);
ATerm Mapp_0_0 (ATerm);
ATerm Bapp2_0_0 (ATerm);
ATerm As_2_0 (ATerm c_120 (ATerm), ATerm d_120 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm b_124 (ATerm), ATerm c_124 (ATerm), ATerm d_124 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm x_119 (ATerm), ATerm y_119 (ATerm), ATerm);
ATerm Op_2_0 (ATerm t_119 (ATerm), ATerm u_119 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm e_155 (ATerm), ATerm);
ATerm Bapp0_0_0 (ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm map1_1_0 (ATerm i_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm genzip_4_0 (ATerm x_135 (ATerm), ATerm y_135 (ATerm), ATerm z_135 (ATerm), ATerm a_136 (ATerm), ATerm);
ATerm unzip_1_0 (ATerm h_136 (ATerm), ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm Var_1_0 (ATerm u_116 (ATerm), ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm App_2_0 (ATerm z_119 (ATerm), ATerm a_120 (ATerm), ATerm);
ATerm Con_3_0 (ATerm l_120 (ATerm), ATerm m_120 (ATerm), ATerm n_120 (ATerm), ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm Scope_2_0 (ATerm f_123 (ATerm), ATerm g_123 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm h_129 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm Rcon_0_0 (ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm d_128 (ATerm), ATerm);
ATerm desugar_0_0 (ATerm);
ATerm eval_strategy_0_0 (ATerm);
ATerm ifdebug_1_0 (ATerm h_126 (ATerm), ATerm);
ATerm eval_command_0_0 (ATerm);
ATerm repeat_1_0 (ATerm f_127 (ATerm), ATerm);
ATerm evaluate_commands_0_0 (ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm k_141 (ATerm), ATerm l_141 (ATerm), ATerm);
ATerm read_script_0_0 (ATerm);
ATerm say_1_0 (ATerm w_145 (ATerm), ATerm);
ATerm copyright_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm j_147 (ATerm), ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm si_options_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm v_117 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm w_117 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm e_134 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm g_151 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm k_134 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm s_145 (ATerm), ATerm);
ATerm map_1_0 (ATerm u_133 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm try_1_0 (ATerm j_126 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm l_152 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm j_152 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm i_152 (ATerm), ATerm);
ATerm make_option_table_0_0 (ATerm);
ATerm _2_0 (ATerm r_110 (ATerm), ATerm s_110 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm a_112 (ATerm), ATerm b_112 (ATerm), ATerm);
ATerm at_suffix_1_0 (ATerm o_134 (ATerm), ATerm);
ATerm split_fetch_1_0 (ATerm h_134 (ATerm), ATerm);
ATerm process_options_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm RDtoSD_0_0 (ATerm t)
{
  ATerm i_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      k_2 = ATgetArgument(t, 0);
      l_2 = ATgetArgument(t, 1);
      m_2 = ATgetArgument(t, 2);
      i_2 = ATgetArgument(t, 3);
      {
        ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL;
        t = m_2;
        t = declared_vars_0_0(t);
        r_2 = t;
        t = i_2;
        t = tvars_0_0(t);
        s_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_2, r_2);
        t = diff_0_0(t);
        t_2 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, k_2, l_2, m_2, (ATerm) ATmakeAppl(sym_Scope_2, t_2, (ATerm) ATmakeAppl(sym_SRule_1, i_2)));
      }
    }
  else
    {
      ATerm x_2 = NULL;
      if(match_cons(t, sym_RDef_3))
        {
          k_2 = ATgetArgument(t, 0);
          l_2 = ATgetArgument(t, 1);
          m_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = m_2;
      t = tvars_0_0(t);
      x_2 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, k_2, l_2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, x_2, (ATerm) ATmakeAppl(sym_SRule_1, m_2)));
    }
  return(t);
}
ATerm eval_rules_0_0 (ATerm t)
{
  ATerm y_2 = NULL;
  if(match_cons(t, sym_Rules_1))
    {
      y_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_2;
  {
    ATerm k_0 (ATerm t)
    {
      ATerm l_0 (ATerm t)
      {
        t = term_s_8;
        return(t);
      }
      t = debug_1_0(l_0, t);
      return(t);
    }
    t = ifdebug_1_0(k_0, t);
    {
      ATerm m_0 (ATerm t)
      {
        t = define_lrules_0_0(t);
        t = RDtoSD_0_0(t);
        t = desugar_0_0(t);
        return(t);
      }
      t = map_1_0(m_0, t);
      {
        ATerm n_0 (ATerm t)
        {
          ATerm o_0 (ATerm t)
          {
            t = term_x_15;
            return(t);
          }
          t = debug_1_0(o_0, t);
          return(t);
        }
        t = ifdebug_1_0(n_0, t);
        t = define_strategies_0_0(t);
      }
    }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm c_156 (ATerm), ATerm t)
{
  ATerm y_15 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_0 (ATerm t)
      {
        t = split_2_0(_id, c_156, t);
        {
          ATerm r_0 (ATerm t)
          {
            ATerm i_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL;
            if(match_cons(t, sym__2))
              {
                i_3 = ATgetArgument(t, 0);
                n_3 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = i_3;
            {
              ATerm d_16 = t;
              int f_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDef_3))
                    {
                      ATerm g_16 = ATgetArgument(t, 0);
                      k_3 = ATgetArgument(t, 1);
                      l_3 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(f_16);
                  t = (ATerm) ATmakeAppl(sym_SDef_3, n_3, k_3, l_3);
                }
              else
                {
                  t = d_16;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm h_16 = ATgetArgument(t, 0);
                      k_3 = ATgetArgument(t, 1);
                      l_3 = ATgetArgument(t, 2);
                      m_3 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_SDefT_4, n_3, k_3, l_3, m_3);
                }
            }
            return(t);
          }
          t = zip_1_0(r_0, t);
        }
        return(t);
      }
      t = Let_2_0(q_0, _id, t);
      ;
      LocalPopChoice(b_16);
    }
  else
    {
      t = y_15;
      {
        ATerm l_16 = t;
        int n_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_0 (ATerm t)
            {
              t = split_2_0(_id, c_156, t);
              {
                ATerm t_0 (ATerm t)
                {
                  ATerm w_3 = NULL,y_3 = NULL,z_3 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      w_3 = ATgetArgument(t, 0);
                      z_3 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = w_3;
                  {
                    ATerm q_16 = t;
                    int r_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            ATerm s_16 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(r_16);
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, z_3);
                      }
                    else
                      {
                        t = q_16;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm t_16 = ATgetArgument(t, 0);
                            y_3 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, z_3, y_3);
                      }
                  }
                  return(t);
                }
                t = zip_1_0(t_0, t);
              }
              return(t);
            }
            t = SDef_3_0(_id, s_0, _id, t);
            ;
            LocalPopChoice(n_16);
          }
        else
          {
            t = l_16;
            {
              ATerm u_16 = t;
              int v_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_0 (ATerm t)
                  {
                    t = split_2_0(_id, c_156, t);
                    {
                      ATerm v_0 (ATerm t)
                      {
                        ATerm e_4 = NULL,g_4 = NULL,h_4 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            e_4 = ATgetArgument(t, 0);
                            h_4 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = e_4;
                        {
                          ATerm w_16 = t;
                          int d_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_DefaultVarDec_1))
                                {
                                  ATerm e_17 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(d_17);
                              t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, h_4);
                            }
                          else
                            {
                              t = w_16;
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  ATerm h_17 = ATgetArgument(t, 0);
                                  g_4 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_VarDec_2, h_4, g_4);
                            }
                        }
                        return(t);
                      }
                      t = zip_1_0(v_0, t);
                    }
                    return(t);
                  }
                  t = SDefT_4_0(_id, u_0, _id, _id, t);
                  ;
                  LocalPopChoice(v_16);
                }
              else
                {
                  t = u_16;
                  {
                    ATerm i_17 = t;
                    int j_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_0 (ATerm t)
                        {
                          t = split_2_0(_id, c_156, t);
                          {
                            ATerm y_0 (ATerm t)
                            {
                              ATerm m_4 = NULL,o_4 = NULL,p_4 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  m_4 = ATgetArgument(t, 0);
                                  p_4 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = m_4;
                              {
                                ATerm k_17 = t;
                                int l_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        ATerm p_17 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(l_17);
                                    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, p_4);
                                  }
                                else
                                  {
                                    t = k_17;
                                    if(match_cons(t, sym_VarDec_2))
                                      {
                                        ATerm r_17 = ATgetArgument(t, 0);
                                        o_4 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, p_4, o_4);
                                  }
                              }
                              return(t);
                            }
                            t = zip_1_0(y_0, t);
                          }
                          return(t);
                        }
                        t = RDefT_4_0(_id, w_0, _id, _id, t);
                        ;
                        LocalPopChoice(j_17);
                      }
                    else
                      {
                        t = i_17;
                        {
                          ATerm z_0 (ATerm t)
                          {
                            ATerm t_4 = NULL;
                            t = c_156(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                t_4 = ATgetFirst((ATermList) t);
                                {
                                  ATerm s_17 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = t_4;
                            return(t);
                          }
                          t = Rec_2_0(z_0, _id, t);
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
ATerm Rec_2_0 (ATerm s_123 (ATerm), ATerm t_123 (ATerm), ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL;
  z_4 = t;
  if(match_cons(t, sym_Rec_2))
    {
      v_4 = ATgetArgument(t, 0);
      w_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_4);
  u_4 = t;
  t = v_4;
  t = s_123(t);
  x_4 = t;
  t = w_4;
  t = t_123(t);
  y_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, x_4, y_4), u_4);
  return(t);
}
ATerm SDef_3_0 (ATerm j_125 (ATerm), ATerm k_125 (ATerm), ATerm l_125 (ATerm), ATerm t)
{
  ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL;
  k_5 = t;
  if(match_cons(t, sym_SDef_3))
    {
      e_5 = ATgetArgument(t, 0);
      f_5 = ATgetArgument(t, 1);
      g_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_5);
  d_5 = t;
  t = e_5;
  t = j_125(t);
  h_5 = t;
  t = f_5;
  t = k_125(t);
  i_5 = t;
  t = g_5;
  t = l_125(t);
  j_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, h_5, i_5, j_5), d_5);
  return(t);
}
ATerm Let_2_0 (ATerm v_122 (ATerm), ATerm w_122 (ATerm), ATerm t)
{
  ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL;
  t_5 = t;
  if(match_cons(t, sym_Let_2))
    {
      p_5 = ATgetArgument(t, 0);
      q_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_5);
  o_5 = t;
  t = p_5;
  t = v_122(t);
  r_5 = t;
  t = q_5;
  t = w_122(t);
  s_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, r_5, s_5), o_5);
  return(t);
}
ATerm sboundin_3_0 (ATerm d_156 (ATerm), ATerm e_156 (ATerm), ATerm f_156 (ATerm), ATerm t)
{
  ATerm t_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(d_156, d_156, t);
      ;
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
            t = SDef_3_0(f_156, f_156, d_156, t);
            ;
            LocalPopChoice(w_17);
          }
        else
          {
            t = v_17;
            {
              ATerm z_17 = t;
              int b_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(f_156, f_156, f_156, d_156, t);
                  ;
                  LocalPopChoice(b_18);
                }
              else
                {
                  t = z_17;
                  t = Rec_2_0(f_156, d_156, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm x_5 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      ATerm c_18 = ATgetArgument(t, 0);
      x_5 = ATgetArgument(t, 1);
      {
        ATerm d_18 = ATgetArgument(t, 2);
      }
      {
        ATerm e_18 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = x_5;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind5_0_0 (ATerm t)
{
  ATerm y_5 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm f_18 = ATgetArgument(t, 0);
      y_5 = ATgetArgument(t, 1);
      {
        ATerm g_18 = ATgetArgument(t, 2);
      }
      {
        ATerm h_18 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = y_5;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind2_0_0 (ATerm t)
{
  ATerm z_5 = NULL;
  if(match_cons(t, sym_SDef_3))
    {
      ATerm k_18 = ATgetArgument(t, 0);
      z_5 = ATgetArgument(t, 1);
      {
        ATerm l_18 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = z_5;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm b_6 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      b_6 = ATgetArgument(t, 0);
      {
        ATerm n_18 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = b_6;
  {
    ATerm a_1 (ATerm t)
    {
      ATerm d_6 = NULL;
      ATerm o_18 = t;
      int p_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_SDef_3))
            {
              d_6 = ATgetArgument(t, 0);
              {
                ATerm q_18 = ATgetArgument(t, 1);
              }
              {
                ATerm r_18 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          LocalPopChoice(p_18);
          t = d_6;
        }
      else
        {
          t = o_18;
          if(match_cons(t, sym_SDefT_4))
            {
              d_6 = ATgetArgument(t, 0);
              {
                ATerm u_18 = ATgetArgument(t, 1);
              }
              {
                ATerm x_18 = ATgetArgument(t, 2);
              }
              {
                ATerm y_18 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = d_6;
        }
      return(t);
    }
    t = map_1_0(a_1, t);
  }
  return(t);
}
ATerm SVar_1_0 (ATerm u_122 (ATerm), ATerm t)
{
  ATerm j_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL;
  m_6 = t;
  if(match_cons(t, sym_SVar_1))
    {
      k_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_6);
  j_6 = t;
  t = k_6;
  t = u_122(t);
  l_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, l_6), j_6);
  return(t);
}
ATerm srename_0_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    ATerm z_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0_0(t);
        ;
        LocalPopChoice(a_19);
      }
    else
      {
        t = z_18;
        {
          ATerm c_19 = t;
          int d_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0_0(t);
              ;
              LocalPopChoice(d_19);
            }
          else
            {
              t = c_19;
              {
                ATerm e_19 = t;
                int f_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_6 = NULL;
                    if(match_cons(t, sym_Rec_2))
                      {
                        s_6 = ATgetArgument(t, 0);
                        {
                          ATerm g_19 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATempty, s_6);
                    ;
                    LocalPopChoice(f_19);
                  }
                else
                  {
                    t = e_19;
                    {
                      ATerm j_19 = t;
                      int k_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0_0(t);
                          ;
                          LocalPopChoice(k_19);
                        }
                      else
                        {
                          t = j_19;
                          t = Bind7_0_0(t);
                        }
                    }
                  }
              }
            }
        }
      }
    return(t);
  }
  t = rename_4_0(SVar_1_0, b_1, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm tpaste_1_0 (ATerm y_155 (ATerm), ATerm t)
{
  ATerm l_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(y_155, _id, t);
      ;
      LocalPopChoice(m_19);
    }
  else
    {
      t = l_19;
      {
        ATerm n_19 = t;
        int p_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_1 (ATerm t)
            {
              t = split_2_0(_id, y_155, t);
              {
                ATerm d_1 (ATerm t)
                {
                  ATerm a_7 = NULL,c_7 = NULL,d_7 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      a_7 = ATgetArgument(t, 0);
                      d_7 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = a_7;
                  {
                    ATerm q_19 = t;
                    int v_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            ATerm w_19 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(v_19);
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, d_7);
                      }
                    else
                      {
                        t = q_19;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm x_19 = ATgetArgument(t, 0);
                            c_7 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, d_7, c_7);
                      }
                  }
                  return(t);
                }
                t = zip_1_0(d_1, t);
              }
              return(t);
            }
            t = SDefT_4_0(_id, _id, c_1, _id, t);
            ;
            LocalPopChoice(p_19);
          }
        else
          {
            t = n_19;
            {
              ATerm e_1 (ATerm t)
              {
                t = split_2_0(_id, y_155, t);
                {
                  ATerm f_1 (ATerm t)
                  {
                    ATerm i_7 = NULL,k_7 = NULL,l_7 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        i_7 = ATgetArgument(t, 0);
                        l_7 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = i_7;
                    {
                      ATerm y_19 = t;
                      int z_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              ATerm a_20 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(z_19);
                          t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, l_7);
                        }
                      else
                        {
                          t = y_19;
                          if(match_cons(t, sym_VarDec_2))
                            {
                              ATerm c_20 = ATgetArgument(t, 0);
                              k_7 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, l_7, k_7);
                        }
                    }
                    return(t);
                  }
                  t = zip_1_0(f_1, t);
                }
                return(t);
              }
              t = RDefT_4_0(_id, _id, e_1, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm DistBinding_2_0 (ATerm p_153 (ATerm), ATerm q_153 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL;
  if(match_cons(t, sym__3))
    {
      r_7 = ATgetArgument(t, 0);
      q_7 = ATgetArgument(t, 1);
      p_7 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = r_7;
  {
    ATerm g_1 (ATerm t)
    {
      ATerm s_7 = NULL;
      s_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_7, p_7);
      t = p_153(t);
      return(t);
    }
    ATerm h_1 (ATerm t)
    {
      ATerm t_7 = NULL;
      t_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_7, q_7);
      t = p_153(t);
      return(t);
    }
    t = q_153(g_1, h_1, _id, t);
  }
  return(t);
}
ATerm RnBinding_2_0 (ATerm j_153 (ATerm), ATerm k_153 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL;
  if(match_cons(t, sym__2))
    {
      u_7 = ATgetArgument(t, 0);
      v_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_7;
  t = j_153(t);
  w_7 = t;
  t = map_1_0(new_0_0, t);
  x_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_7, x_7);
  t = zip_1_0(_id, t);
  y_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_7, v_7);
  t = conc_0_0(t);
  z_7 = t;
  t = u_7;
  {
    ATerm i_1 (ATerm t)
    {
      t = x_7;
      return(t);
    }
    t = k_153(i_1, t);
    a_8 = t;
    t = (ATerm) ATmakeAppl(sym__3, a_8, v_7, z_7);
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL;
  if(match_cons(t, sym__2))
    {
      h_8 = ATgetArgument(t, 0);
      i_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_8;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_8 = ATgetFirst((ATermList) t);
      k_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_8;
  if(match_cons(t, sym__2))
    {
      e_8 = ATgetArgument(t, 0);
      f_8 = ATgetArgument(t, 1);
      {
        ATerm d_20 = t;
        int e_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_8;
            if((h_8 != t))
              {
                _fail(t);
              }
            t = f_8;
            ;
            LocalPopChoice(e_20);
          }
        else
          {
            t = d_20;
            t = (ATerm) ATmakeAppl(sym__2, h_8, k_8);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, h_8, k_8);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm RnVar_1_0 (ATerm u_153 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm t_8 = NULL,u_8 = NULL;
  if(match_cons(t, sym__2))
    {
      u_8 = ATgetArgument(t, 0);
      t_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_8;
  {
    ATerm k_1 (ATerm t)
    {
      ATerm l_1 (ATerm t)
      {
        t = t_8;
        return(t);
      }
      t = split_2_0(_id, l_1, t);
      t = lookup_0_0(t);
      return(t);
    }
    t = u_153(k_1, t);
  }
  return(t);
}
ATerm all_dist_1_0 (ATerm j_133 (ATerm), ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL;
  if(match_cons(t, sym__2))
    {
      w_8 = ATgetArgument(t, 0);
      v_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_8;
  {
    ATerm m_1 (ATerm t)
    {
      ATerm x_8 = NULL;
      x_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_8, v_8);
      t = j_133(t);
      return(t);
    }
    t = SRTS_all(m_1, t);
  }
  return(t);
}
ATerm env_alltd_1_0 (ATerm t_132 (ATerm), ATerm t)
{
  ATerm y_8 (ATerm t)
  {
    ATerm f_20 = t;
    int i_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_132(t);
        ;
        LocalPopChoice(i_20);
      }
    else
      {
        t = f_20;
        t = all_dist_1_0(y_8, t);
      }
    return(t);
  }
  t = y_8(t);
  return(t);
}
ATerm rename_4_0 (ATerm e_153 (ATerm (ATerm), ATerm), ATerm f_153 (ATerm), ATerm g_153 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm h_153 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm z_8 = NULL;
  z_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_8, (ATerm) ATempty);
  {
    ATerm a_9 (ATerm t)
    {
      ATerm n_1 (ATerm t)
      {
        ATerm j_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RnVar_1_0(e_153, t);
            ;
            LocalPopChoice(k_20);
          }
        else
          {
            t = j_20;
            t = RnBinding_2_0(f_153, h_153, t);
            t = DistBinding_2_0(a_9, g_153, t);
          }
        return(t);
      }
      t = env_alltd_1_0(n_1, t);
      return(t);
    }
    t = a_9(t);
  }
  return(t);
}
ATerm trename_0_0 (ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    ATerm l_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(m_20);
      }
    else
      {
        t = l_20;
        {
          ATerm n_20 = t;
          int o_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind6_0_0(t);
              ;
              LocalPopChoice(o_20);
            }
          else
            {
              t = n_20;
              t = Bind8_0_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4_0(Var_1_0, o_1, tboundin_3_0, tpaste_1_0, t);
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = trename_0_0(t);
  t = srename_0_0(t);
  return(t);
}
ATerm DeclareVariables_0_0 (ATerm t)
{
  ATerm c_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      e_9 = ATgetArgument(t, 0);
      f_9 = ATgetArgument(t, 1);
      g_9 = ATgetArgument(t, 2);
      c_9 = ATgetArgument(t, 3);
      {
        ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL;
        t = g_9;
        t = declared_vars_0_0(t);
        l_9 = t;
        t = c_9;
        t = tvars_0_0(t);
        m_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_9, l_9);
        t = diff_0_0(t);
        n_9 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, e_9, f_9, g_9, (ATerm) ATmakeAppl(sym_Scope_2, n_9, c_9));
      }
    }
  else
    {
      ATerm r_9 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          e_9 = ATgetArgument(t, 0);
          f_9 = ATgetArgument(t, 1);
          g_9 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = g_9;
      t = tvars_0_0(t);
      r_9 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, e_9, f_9, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, r_9, g_9));
    }
  return(t);
}
ATerm DefScopeDefault_0_0 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL;
  if(match_cons(t, sym_ScopeDefault_1))
    {
      s_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_9;
  t = tvars_0_0(t);
  t_9 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, t_9, s_9);
  return(t);
}
ATerm DynamicRules_1_0 (ATerm c_122 (ATerm), ATerm t)
{
  ATerm u_9 = NULL,v_9 = NULL,b_10 = NULL,f_10 = NULL;
  f_10 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      v_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_10);
  u_9 = t;
  t = v_9;
  t = c_122(t);
  b_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, b_10), u_9);
  return(t);
}
ATerm RDefT_4_0 (ATerm t_121 (ATerm), ATerm u_121 (ATerm), ATerm v_121 (ATerm), ATerm w_121 (ATerm), ATerm t)
{
  ATerm n_10 = NULL,o_10 = NULL,s_10 = NULL,t_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL;
  b_11 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      o_10 = ATgetArgument(t, 0);
      s_10 = ATgetArgument(t, 1);
      t_10 = ATgetArgument(t, 2);
      v_10 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_11);
  n_10 = t;
  t = o_10;
  t = t_121(t);
  w_10 = t;
  t = s_10;
  t = u_121(t);
  x_10 = t;
  t = t_10;
  t = v_121(t);
  z_10 = t;
  t = v_10;
  t = w_121(t);
  a_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, w_10, x_10, z_10, a_11), n_10);
  return(t);
}
ATerm SDefT_4_0 (ATerm m_125 (ATerm), ATerm n_125 (ATerm), ATerm o_125 (ATerm), ATerm p_125 (ATerm), ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL,l_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,s_11 = NULL,t_11 = NULL;
  t_11 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      h_11 = ATgetArgument(t, 0);
      i_11 = ATgetArgument(t, 1);
      j_11 = ATgetArgument(t, 2);
      l_11 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_11);
  g_11 = t;
  t = h_11;
  t = m_125(t);
  o_11 = t;
  t = i_11;
  t = n_125(t);
  p_11 = t;
  t = j_11;
  t = o_125(t);
  q_11 = t;
  t = l_11;
  t = p_125(t);
  s_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, o_11, p_11, q_11, s_11), g_11);
  return(t);
}
ATerm tboundin_3_0 (ATerm z_155 (ATerm), ATerm a_156 (ATerm), ATerm b_156 (ATerm), ATerm t)
{
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(b_156, z_155, t);
      ;
      LocalPopChoice(s_20);
    }
  else
    {
      t = r_20;
      {
        ATerm v_20 = t;
        int w_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(b_156, b_156, b_156, z_155, t);
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
                  t = RDefT_4_0(b_156, b_156, b_156, z_155, t);
                  ;
                  LocalPopChoice(y_20);
                }
              else
                {
                  t = x_20;
                  t = DynamicRules_1_0(z_155, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm y_11 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      ATerm z_20 = ATgetArgument(t, 0);
      ATerm c_21 = ATgetArgument(t, 1);
      y_11 = ATgetArgument(t, 2);
      {
        ATerm d_21 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = y_11;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm declared_vars_0_0 (ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    ATerm c_12 = NULL;
    ATerm e_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_VarDec_2))
          {
            c_12 = ATgetArgument(t, 0);
            {
              ATerm h_21 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(f_21);
        t = c_12;
      }
    else
      {
        t = e_21;
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            c_12 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = c_12;
      }
    return(t);
  }
  t = map_1_0(q_1, t);
  return(t);
}
ATerm Bind6_0_0 (ATerm t)
{
  ATerm h_12 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm i_21 = ATgetArgument(t, 0);
      ATerm j_21 = ATgetArgument(t, 1);
      h_12 = ATgetArgument(t, 2);
      {
        ATerm k_21 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = h_12;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm r_12 = NULL;
  if(match_cons(t, sym_DynamicRules_1))
    {
      r_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_12;
  t = tvars_0_0(t);
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm w_12 = NULL,o_13 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      o_13 = ATgetArgument(t, 0);
      t = o_13;
      if(match_cons(t, sym_Rule_3))
        {
          w_12 = ATgetArgument(t, 0);
          {
            ATerm n_21 = ATgetArgument(t, 1);
          }
          {
            ATerm o_21 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = w_12;
      t = tvars_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          o_13 = ATgetArgument(t, 0);
          {
            ATerm p_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = o_13;
    }
  return(t);
}
ATerm union_1_0 (ATerm x_137 (ATerm), ATerm t)
{
  ATerm h_14 = NULL,o_14 = NULL;
  if(match_cons(t, sym__2))
    {
      o_14 = ATgetArgument(t, 0);
      h_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_14;
  {
    ATerm q_14 (ATerm t)
    {
      ATerm q_21 = t;
      int r_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = h_14;
          ;
          LocalPopChoice(r_21);
        }
      else
        {
          t = q_21;
          {
            ATerm s_21 = t;
            int t_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_1 (ATerm t)
                {
                  t = h_14;
                  return(t);
                }
                t = HdMember_p__2_0(x_137, r_1, t);
                t = q_14(t);
                ;
                LocalPopChoice(t_21);
              }
            else
              {
                t = s_21;
                t = Cons_2_0(_id, q_14, t);
              }
          }
        }
      return(t);
    }
    t = q_14(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    ATerm y_14 = NULL;
    if(match_cons(t, sym__2))
      {
        y_14 = ATgetArgument(t, 0);
        if((y_14 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(s_1, t);
  return(t);
}
ATerm crush_3_0 (ATerm q_143 (ATerm), ATerm r_143 (ATerm), ATerm s_143 (ATerm), ATerm t)
{
  ATerm a_15 = NULL,c_16 = NULL;
  a_15 = t;
  t = SSL_explode_term(a_15);
  if(match_cons(t, sym__2))
    {
      ATerm w_21 = ATgetArgument(t, 0);
      c_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_16;
  t = foldr_3_0(q_143, r_143, s_143, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm b_138 (ATerm), ATerm c_138 (ATerm), ATerm t)
{
  ATerm e_16 = NULL,i_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_16 = ATgetFirst((ATermList) t);
      i_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_138(t);
  {
    ATerm t_1 (ATerm t)
    {
      ATerm j_16 = NULL;
      j_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_16, j_16);
      t = b_138(t);
      return(t);
    }
    t = fetch_1_0(t_1, t);
    t = i_16;
  }
  return(t);
}
ATerm diff_1_0 (ATerm t_137 (ATerm), ATerm t)
{
  ATerm k_16 = NULL,m_16 = NULL;
  if(match_cons(t, sym__2))
    {
      m_16 = ATgetArgument(t, 0);
      k_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_16;
  {
    ATerm z_16 (ATerm t)
    {
      ATerm x_21 = t;
      int y_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(y_21);
        }
      else
        {
          t = x_21;
          {
            ATerm b_22 = t;
            int c_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_1 (ATerm t)
                {
                  t = k_16;
                  return(t);
                }
                t = HdMember_p__2_0(t_137, u_1, t);
                t = z_16(t);
                ;
                LocalPopChoice(c_22);
              }
            else
              {
                t = b_22;
                t = Cons_2_0(_id, z_16, t);
              }
          }
        }
      return(t);
    }
    t = z_16(t);
  }
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL,f_17 = NULL,g_17 = NULL,o_17 = NULL,q_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_22 = ATgetFirst((ATermList) t);
      if(match_cons(f_22, sym__2))
        {
          a_17 = ATgetArgument(f_22, 0);
          b_17 = ATgetArgument(f_22, 1);
        }
      else
        _fail(t);
      c_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(b_17);
  if(match_cons(t, sym__2))
    {
      f_17 = ATgetArgument(t, 0);
      g_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(a_17);
  if(match_cons(t, sym__2))
    {
      if((f_17 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      o_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_17, g_17);
  t = zip_1_0(_id, t);
  q_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_17, c_17);
  t = conc_0_0(t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm g_22 = t;
  int n_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_1 (ATerm t)
      {
        ATerm a_18 = NULL;
        a_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, a_18);
        return(t);
      }
      ATerm x_1 (ATerm t)
      {
        ATerm z_1 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, z_1, t);
        return(t);
      }
      ATerm y_1 (ATerm t)
      {
        ATerm o_22 = t;
        int p_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_2 (ATerm t)
            {
              ATerm t_22 = t;
              int u_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_18 = NULL,v_18 = NULL,w_18 = NULL,b_19 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      m_18 = ATgetFirst((ATermList) t);
                      b_19 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = m_18;
                  if(match_cons(t, sym__2))
                    {
                      v_18 = ATgetArgument(t, 0);
                      w_18 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = w_18;
                  if((v_18 != t))
                    {
                      _fail(t);
                    }
                  t = b_19;
                  ;
                  LocalPopChoice(u_22);
                }
              else
                {
                  t = t_22;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, a_2, t);
            ;
            LocalPopChoice(p_22);
          }
        else
          {
            t = o_22;
            {
              ATerm o_19 = NULL,t_19 = NULL,u_19 = NULL,b_20 = NULL;
              if(match_cons(t, sym__2))
                {
                  o_19 = ATgetArgument(t, 0);
                  t_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = t_19;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_19 = ATgetFirst((ATermList) t);
                  b_20 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_19), u_19), b_20);
            }
          }
        return(t);
      }
      t = for_3_0(w_1, x_1, y_1, t);
      ;
      LocalPopChoice(n_22);
    }
  else
    {
      t = g_22;
      {
        ATerm c_2 (ATerm t)
        {
          ATerm t_20 = NULL;
          if(match_cons(t, sym__2))
            {
              t_20 = ATgetArgument(t, 0);
              if((t_20 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = diff_1_0(c_2, t);
      }
    }
  return(t);
}
ATerm free_vars_3_0 (ATerm u_154 (ATerm), ATerm v_154 (ATerm), ATerm w_154 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm z_21 (ATerm t)
  {
    ATerm w_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_154(t);
        ;
        LocalPopChoice(x_22);
      }
    else
      {
        t = w_22;
        {
          ATerm y_22 = t;
          int z_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_20 = NULL,g_21 = NULL;
              u_20 = t;
              t = v_154(t);
              g_21 = t;
              t = u_20;
              {
                ATerm d_2 (ATerm t)
                {
                  ATerm f_2 (ATerm t)
                  {
                    t = g_21;
                    return(t);
                  }
                  t = split_2_0(z_21, f_2, t);
                  t = diff_0_0(t);
                  return(t);
                }
                ATerm e_2 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = w_154(d_2, z_21, e_2, t);
                {
                  ATerm g_2 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3_0(g_2, union_0_0, _id, t);
                }
              }
              ;
              LocalPopChoice(z_22);
            }
          else
            {
              t = y_22;
              {
                ATerm h_2 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3_0(h_2, union_0_0, z_21, t);
              }
            }
        }
      }
    return(t);
  }
  t = z_21(t);
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  ATerm j_2 (ATerm t)
  {
    ATerm a_22 = NULL;
    if(match_cons(t, sym_Var_1))
      {
        a_22 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(ATempty, a_22);
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    ATerm a_23 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(b_23);
      }
    else
      {
        t = a_23;
        {
          ATerm d_23 = t;
          int e_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0_0(t);
              ;
              LocalPopChoice(e_23);
            }
          else
            {
              t = d_23;
              {
                ATerm f_23 = t;
                int g_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0_0(t);
                    ;
                    LocalPopChoice(g_23);
                  }
                else
                  {
                    t = f_23;
                    t = Bind8_0_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = free_vars_3_0(j_2, n_2, tboundin_3_0, t);
  return(t);
}
ATerm DefLRule_0_0 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,h_22 = NULL,i_22 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      ATerm h_23 = ATgetArgument(t, 0);
      if(match_cons(h_23, sym_Rule_3))
        {
          d_22 = ATgetArgument(h_23, 0);
          e_22 = ATgetArgument(h_23, 1);
          h_22 = ATgetArgument(h_23, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = d_22;
  t = tvars_0_0(t);
  i_22 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, i_22, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, d_22, e_22, h_22)));
  return(t);
}
ATerm bottomup_1_0 (ATerm e_128 (ATerm), ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    t = bottomup_1_0(e_128, t);
    return(t);
  }
  t = SRTS_all(o_2, t);
  t = e_128(t);
  return(t);
}
ATerm define_lrules_0_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm q_2 (ATerm t)
    {
      ATerm i_23 = t;
      int j_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DefLRule_0_0(t);
          ;
          LocalPopChoice(j_23);
        }
      else
        {
          t = i_23;
          t = DefScopeDefault_0_0(t);
        }
      return(t);
    }
    t = try_1_0(q_2, t);
    return(t);
  }
  t = bottomup_1_0(p_2, t);
  return(t);
}
ATerm eval_strategies_0_0 (ATerm t)
{
  ATerm l_22 = NULL;
  if(match_cons(t, sym_Strategies_1))
    {
      l_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_22;
  {
    ATerm u_2 (ATerm t)
    {
      t = define_lrules_0_0(t);
      t = DeclareVariables_0_0(t);
      t = desugar_0_0(t);
      t = strename_0_0(t);
      return(t);
    }
    t = map_1_0(u_2, t);
    t = define_strategies_0_0(t);
  }
  return(t);
}
ATerm define_strategies_0_0 (ATerm t)
{
  ATerm v_2 (ATerm t)
  {
    ATerm m_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL;
    m_22 = t;
    if(match_cons(t, sym_SDef_3))
      {
        q_22 = ATgetArgument(t, 0);
        r_22 = ATgetArgument(t, 1);
        {
          ATerm k_23 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = r_22;
    t = length_0_0(t);
    s_22 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_l_23, (ATerm)ATmakeAppl(sym__2, q_22, s_22), m_22);
    t = table_push_0_0(t);
    return(t);
  }
  t = map_1_0(v_2, t);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm y_23 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL;
  y_23 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      d_24 = ATgetArgument(t, 0);
      {
        ATerm p_0 = NULL;
        t = SSL_int_to_string(d_24);
        p_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_23), p_0), term_n_23);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm x_0 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          d_24 = ATgetArgument(t, 0);
          e_24 = ATgetArgument(t, 1);
          f_24 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(e_24);
      x_0 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_24), term_q_23), x_0), term_p_23), d_24);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm g_134 (ATerm), ATerm t)
{
  ATerm i_24 = NULL;
  ATerm w_2 (ATerm t)
  {
    t = g_134(t);
    i_24 = t;
    return(t);
  }
  t = fetch_1_0(w_2, t);
  t = not_null(i_24);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm m_24 = NULL;
  m_24 = t;
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_30), term_j_30), term_e_30), term_z_29), term_t_29), term_p_29), term_j_29), term_f_29), term_z_28), term_v_28), term_q_28), term_l_28), term_f_28), term_b_28), term_w_27), term_r_27), term_n_27), term_h_27), term_c_27), term_y_26), term_t_26), term_o_26), term_h_26), term_e_25), term_v_24), term_k_24), term_c_24), term_w_23);
        {
          ATerm z_2 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm p_30 = ATgetArgument(t, 0);
                if((m_24 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm q_30 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(z_2, t);
        }
        ;
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, m_24);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm n_24 = NULL;
  n_24 = t;
  {
    ATerm b_3 (ATerm t)
    {
      ATerm p_24 = NULL,q_24 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm r_30 = ATgetArgument(t, 0);
          p_24 = ATgetArgument(t, 1);
          {
            ATerm s_30 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = p_24;
      {
        ATerm u_30 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = u_30;
          }
        t = signal_from_number_0_0(t);
        t = signal_to_descr_0_0(t);
        q_24 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, q_24), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_v_30, (ATerm) ATinsert(ATinsert(ATempty, q_24), term_w_30));
      }
      return(t);
    }
    t = try_1_0(b_3, t);
    t = n_24;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm b_149 (ATerm), ATerm c_149 (ATerm), ATerm t)
{
  ATerm s_24 = NULL,w_24 = NULL;
  s_24 = t;
  t = fork_0_0(t);
  w_24 = t;
  {
    ATerm x_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = s_24;
        t = b_149(t);
        ;
        LocalPopChoice(y_30);
      }
    else
      {
        t = x_30;
        t = (ATerm) ATmakeAppl(sym__2, w_24, s_24);
        t = c_149(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm d_149 (ATerm), ATerm t)
{
  ATerm z_24 = NULL;
  ATerm c_3 (ATerm t)
  {
    ATerm a_25 = NULL;
    if(match_cons(t, sym__2))
      {
        a_25 = ATgetArgument(t, 0);
        z_24 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_waitpid(a_25);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm a_31 = ATgetArgument(t, 0);
        if(((ATgetType(a_31) != AT_INT) || (ATgetInt((ATermInt) a_31) != 0)))
          _fail(t);
        {
          ATerm b_31 = ATgetArgument(t, 1);
        }
        {
          ATerm c_31 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = z_24;
    return(t);
  }
  t = fork_2_0(d_149, c_3, t);
  return(t);
}
ATerm call_noisy_0_0 (ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL;
  if(match_cons(t, sym__2))
    {
      b_25 = ATgetArgument(t, 0);
      c_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_3 (ATerm t)
    {
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, b_25, c_25)));
      t = SSL_execvp(b_25, c_25);
      return(t);
    }
    t = fork_and_wait_1_0(d_3, t);
  }
  return(t);
}
ATerm call_sc_0_0 (ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL;
  f_25 = t;
  {
    ATerm e_3 (ATerm t)
    {
      ATerm f_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_31, f_25);
        t = conc_strings_0_0(t);
        return(t);
      }
      t = say_1_0(f_3, t);
      return(t);
    }
    t = iftrace_1_0(e_3, t);
    t = term_e_31;
    t = get_config_0_0(t);
    g_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_f_31, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(g_25), term_h_31), f_25), term_g_31));
    t = call_noisy_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, f_25, term_i_31);
    t = conc_strings_0_0(t);
    t = ReadFromFile_0_0(t);
  }
  return(t);
}
ATerm eval_import_0_0 (ATerm t)
{
  ATerm h_25 = NULL;
  ATerm k_31 = t;
  int l_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Imports_1))
        {
          ATerm m_31 = ATgetArgument(t, 0);
          if(((ATgetType(m_31) != AT_LIST) || !(ATisEmpty(m_31))))
            _fail(t);
        }
      else
        _fail(t);
      LocalPopChoice(l_31);
    }
  else
    {
      t = k_31;
      {
        ATerm n_31 = t;
        int o_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Imports_1))
              {
                ATerm p_31 = ATgetArgument(t, 0);
                if(((ATgetType(p_31) == AT_LIST) && !(ATisEmpty(p_31))))
                  {
                    h_25 = ATgetFirst((ATermList) p_31);
                    {
                      ATerm q_31 = (ATerm) ATgetNext((ATermList) p_31);
                      if(((ATgetType(q_31) != AT_LIST) || !(ATisEmpty(q_31))))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            LocalPopChoice(o_31);
            {
              ATerm k_25 = NULL;
              t = h_25;
              t = call_sc_0_0(t);
              if(match_cons(t, sym_Specification_1))
                {
                  ATerm t_31 = ATgetArgument(t, 0);
                  if(((ATgetType(t_31) == AT_LIST) && !(ATisEmpty(t_31))))
                    {
                      ATerm u_31 = ATgetFirst((ATermList) t_31);
                      if(match_cons(u_31, sym_Signature_1))
                        {
                          ATerm w_31 = ATgetArgument(u_31, 0);
                        }
                      else
                        _fail(t);
                      {
                        ATerm v_31 = (ATerm) ATgetNext((ATermList) t_31);
                        if(((ATgetType(v_31) == AT_LIST) && !(ATisEmpty(v_31))))
                          {
                            ATerm x_31 = ATgetFirst((ATermList) v_31);
                            if(match_cons(x_31, sym_Strategies_1))
                              {
                                k_25 = ATgetArgument(x_31, 0);
                              }
                            else
                              _fail(t);
                            {
                              ATerm z_31 = (ATerm) ATgetNext((ATermList) v_31);
                              if(((ATgetType(z_31) != AT_LIST) || !(ATisEmpty(z_31))))
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
              t = k_25;
              t = define_strategies_0_0(t);
            }
          }
        else
          {
            t = n_31;
            if(match_cons(t, sym_Imports_1))
              {
                ATerm a_32 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATempty, term_b_32);
            t = fatal_error_0_0(t);
          }
      }
    }
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm l_25 = NULL;
  ATerm g_3 (ATerm t)
  {
    ATerm m_25 = NULL;
    m_25 = t;
    t = SSL_explode_string(m_25);
    return(t);
  }
  t = map_1_0(g_3, t);
  t = concat_0_0(t);
  l_25 = t;
  t = SSL_implode_string(l_25);
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL;
  if(match_cons(t, sym__2))
    {
      o_25 = ATgetArgument(t, 0);
      n_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_25;
  {
    ATerm h_3 (ATerm t)
    {
      ATerm p_25 = NULL,q_25 = NULL;
      if(match_cons(t, sym__2))
        {
          p_25 = ATgetArgument(t, 0);
          q_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_table_put(o_25, p_25, q_25);
      t = (ATerm) ATmakeAppl(sym__3, o_25, p_25, q_25);
      return(t);
    }
    t = map_1_0(h_3, t);
  }
  return(t);
}
ATerm eval_load_0_0 (ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL;
  if(match_cons(t, sym_Load_1))
    {
      s_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm j_3 (ATerm t)
    {
      ATerm o_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_32, s_25);
        t = conc_strings_0_0(t);
        return(t);
      }
      t = say_1_0(o_3, t);
      return(t);
    }
    t = iftrace_1_0(j_3, t);
    t = s_25;
    {
      ATerm d_32 = t;
      int e_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_access(s_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
          ;
          LocalPopChoice(e_32);
        }
      else
        {
          t = d_32;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_32), s_25), term_f_32);
          t = fatal_error_0_0(t);
        }
      t = s_25;
      t = ReadFromFile_0_0(t);
      if(match_cons(t, sym_StrategoDump_2))
        {
          t_25 = ATgetArgument(t, 0);
          u_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, term_j_32, t_25);
      t = table_putlist_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, term_l_23, u_25);
      t = table_putlist_0_0(t);
      {
        ATerm p_3 (ATerm t)
        {
          ATerm q_3 (ATerm t)
          {
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_32), s_25), term_k_32);
            t = concat_strings_0_0(t);
            return(t);
          }
          t = say_1_0(q_3, t);
          return(t);
        }
        t = iftrace_1_0(p_3, t);
      }
    }
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm g_146 (ATerm), ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
  if(match_cons(t, sym__2))
    {
      v_25 = ATgetArgument(t, 0);
      w_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_25, term_m_32);
  t = open_stream_0_0(t);
  x_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_25, w_25);
  t = g_146(t);
  t = fclose_0_0(t);
  t = w_25;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm o_32 = ATgetArgument(t, 0);
        if(match_cons(o_32, sym_Stream_1))
          {
            y_25 = ATgetArgument(o_32, 0);
          }
        else
          _fail(t);
        z_25 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(y_25, z_25);
    a_26 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, a_26);
    return(t);
  }
  t = WriteToFile_1_0(r_3, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm b_26 = NULL;
  b_26 = t;
  t = SSL_table_keys(b_26);
  {
    ATerm s_3 (ATerm t)
    {
      ATerm c_26 = NULL,d_26 = NULL;
      c_26 = t;
      t = SSL_table_get(b_26, c_26);
      d_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_26, d_26);
      return(t);
    }
    t = map_1_0(s_3, t);
  }
  return(t);
}
ATerm eval_dump_0_0 (ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL;
  if(match_cons(t, sym_Dump_1))
    {
      e_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_j_32;
  t = table_getlist_0_0(t);
  f_26 = t;
  t = term_l_23;
  t = table_getlist_0_0(t);
  g_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_26, (ATerm) ATmakeAppl(sym_StrategoDump_2, f_26, g_26));
  t = WriteToBinaryFile_0_0(t);
  {
    ATerm t_3 (ATerm t)
    {
      ATerm u_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_32, e_26);
        t = conc_strings_0_0(t);
        return(t);
      }
      t = say_1_0(u_3, t);
      return(t);
    }
    t = iftrace_1_0(t_3, t);
  }
  return(t);
}
ATerm fatal_error_0_0 (ATerm t)
{
  ATerm i_26 = NULL;
  i_26 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), i_26);
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = i_26;
  return(t);
}
ATerm iftrace_1_0 (ATerm i_126 (ATerm), ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm j_26 = NULL;
    j_26 = t;
    t = term_q_32;
    t = get_config_0_0(t);
    t = j_26;
    t = i_126(t);
    return(t);
  }
  t = try_1_0(v_3, t);
  return(t);
}
ATerm EvalPrim_0_0 (ATerm t)
{
  ATerm x_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL,c_73 = NULL,d_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL;
  b_73 = t;
  if(match_cons(t, sym_App_2))
    {
      c_73 = ATgetArgument(t, 0);
      h_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_73;
  if(match_cons(t, sym_Prim_2))
    {
      d_73 = ATgetArgument(t, 0);
      e_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_73;
  if(match_string(t, "_cpl_loaded"))
    {
      ATerm j_1 = NULL;
      t = e_73;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_73 = ATgetFirst((ATermList) t);
          g_73 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_73;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_73;
      t = EvalTerm_0_0(t);
      j_1 = t;
      t = _cpl_loaded(j_1);
    }
  else
    {
      if(match_string(t, "SSL_explode_string"))
        {
          ATerm p_1 = NULL;
          t = e_73;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_73 = ATgetFirst((ATermList) t);
              g_73 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = g_73;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = f_73;
          t = EvalTerm_0_0(t);
          p_1 = t;
          t = SSL_explode_string(p_1);
        }
      else
        {
          if(match_string(t, "SSL_implode_string"))
            {
              ATerm v_1 = NULL;
              t = e_73;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_73 = ATgetFirst((ATermList) t);
                  g_73 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = g_73;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = f_73;
              t = EvalTerm_0_0(t);
              v_1 = t;
              t = SSL_implode_string(v_1);
            }
          else
            {
              if(match_string(t, "SSL_is_string"))
                {
                  ATerm b_2 = NULL;
                  t = e_73;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      f_73 = ATgetFirst((ATermList) t);
                      g_73 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = g_73;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = f_73;
                  t = EvalTerm_0_0(t);
                  b_2 = t;
                  t = SSL_is_string(b_2);
                }
              else
                {
                  if(match_string(t, "SSL_new"))
                    {
                      t = e_73;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = SSL_new();
                    }
                  else
                    {
                      if(match_string(t, "SSL_address"))
                        {
                          ATerm a_3 = NULL;
                          t = e_73;
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              f_73 = ATgetFirst((ATermList) t);
                              g_73 = (ATerm) ATgetNext((ATermList) t);
                            }
                          else
                            _fail(t);
                          t = g_73;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = f_73;
                          t = EvalTerm_0_0(t);
                          a_3 = t;
                          t = SSL_address(a_3);
                        }
                      else
                        {
                          if(match_string(t, "SSL_address_lt"))
                            {
                              ATerm q_6 = NULL,v_6 = NULL;
                              t = e_73;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  f_73 = ATgetFirst((ATermList) t);
                                  g_73 = (ATerm) ATgetNext((ATermList) t);
                                }
                              else
                                _fail(t);
                              t = g_73;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  x_72 = ATgetFirst((ATermList) t);
                                  y_72 = (ATerm) ATgetNext((ATermList) t);
                                }
                              else
                                _fail(t);
                              t = y_72;
                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                _fail(t);
                              t = f_73;
                              t = EvalTerm_0_0(t);
                              q_6 = t;
                              t = x_72;
                              t = EvalTerm_0_0(t);
                              v_6 = t;
                              t = SSL_address_lt(q_6, v_6);
                            }
                          else
                            {
                              if(match_string(t, "SSL_explode_term"))
                                {
                                  ATerm d_8 = NULL;
                                  t = e_73;
                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                    {
                                      f_73 = ATgetFirst((ATermList) t);
                                      g_73 = (ATerm) ATgetNext((ATermList) t);
                                    }
                                  else
                                    _fail(t);
                                  t = g_73;
                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                    _fail(t);
                                  t = f_73;
                                  t = EvalTerm_0_0(t);
                                  d_8 = t;
                                  t = SSL_explode_term(d_8);
                                }
                              else
                                {
                                  if(match_string(t, "SSL_mkterm"))
                                    {
                                      ATerm c_10 = NULL,d_10 = NULL;
                                      t = e_73;
                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                        {
                                          f_73 = ATgetFirst((ATermList) t);
                                          g_73 = (ATerm) ATgetNext((ATermList) t);
                                        }
                                      else
                                        _fail(t);
                                      t = g_73;
                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                        {
                                          x_72 = ATgetFirst((ATermList) t);
                                          y_72 = (ATerm) ATgetNext((ATermList) t);
                                        }
                                      else
                                        _fail(t);
                                      t = y_72;
                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                        _fail(t);
                                      t = f_73;
                                      t = EvalTerm_0_0(t);
                                      c_10 = t;
                                      t = x_72;
                                      t = EvalTerm_0_0(t);
                                      d_10 = t;
                                      t = SSL_mkterm(c_10, d_10);
                                    }
                                  else
                                    {
                                      if(match_string(t, "ATremoveAnnotations"))
                                        {
                                          ATerm p_10 = NULL;
                                          t = e_73;
                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                            {
                                              f_73 = ATgetFirst((ATermList) t);
                                              g_73 = (ATerm) ATgetNext((ATermList) t);
                                            }
                                          else
                                            _fail(t);
                                          t = g_73;
                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                            _fail(t);
                                          t = f_73;
                                          t = EvalTerm_0_0(t);
                                          p_10 = t;
                                          t = ATremoveAnnotations(p_10);
                                        }
                                      else
                                        {
                                          if(match_string(t, "SSLsetAnnotations"))
                                            {
                                              ATerm n_11 = NULL,r_11 = NULL;
                                              t = e_73;
                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                {
                                                  f_73 = ATgetFirst((ATermList) t);
                                                  g_73 = (ATerm) ATgetNext((ATermList) t);
                                                }
                                              else
                                                _fail(t);
                                              t = g_73;
                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                {
                                                  x_72 = ATgetFirst((ATermList) t);
                                                  y_72 = (ATerm) ATgetNext((ATermList) t);
                                                }
                                              else
                                                _fail(t);
                                              t = y_72;
                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                _fail(t);
                                              t = f_73;
                                              t = EvalTerm_0_0(t);
                                              n_11 = t;
                                              t = x_72;
                                              t = EvalTerm_0_0(t);
                                              r_11 = t;
                                              t = SSLsetAnnotations(n_11, r_11);
                                            }
                                          else
                                            {
                                              if(match_string(t, "SSLgetAnnotations"))
                                                {
                                                  ATerm j_12 = NULL;
                                                  t = e_73;
                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                    {
                                                      f_73 = ATgetFirst((ATermList) t);
                                                      g_73 = (ATerm) ATgetNext((ATermList) t);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = g_73;
                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                    _fail(t);
                                                  t = f_73;
                                                  t = EvalTerm_0_0(t);
                                                  j_12 = t;
                                                  t = SSLgetAnnotations(j_12);
                                                }
                                              else
                                                {
                                                  if(match_string(t, "SSL_string_to_int"))
                                                    {
                                                      ATerm p_12 = NULL;
                                                      t = e_73;
                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                        {
                                                          f_73 = ATgetFirst((ATermList) t);
                                                          g_73 = (ATerm) ATgetNext((ATermList) t);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = g_73;
                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                        _fail(t);
                                                      t = f_73;
                                                      t = EvalTerm_0_0(t);
                                                      p_12 = t;
                                                      t = SSL_string_to_int(p_12);
                                                    }
                                                  else
                                                    {
                                                      if(match_string(t, "SSL_int_to_string"))
                                                        {
                                                          ATerm x_12 = NULL;
                                                          t = e_73;
                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                            {
                                                              f_73 = ATgetFirst((ATermList) t);
                                                              g_73 = (ATerm) ATgetNext((ATermList) t);
                                                            }
                                                          else
                                                            _fail(t);
                                                          t = g_73;
                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                            _fail(t);
                                                          t = f_73;
                                                          t = EvalTerm_0_0(t);
                                                          x_12 = t;
                                                          t = SSL_int_to_string(x_12);
                                                        }
                                                      else
                                                        {
                                                          if(match_string(t, "SSL_int"))
                                                            {
                                                              ATerm f_13 = NULL;
                                                              t = e_73;
                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                {
                                                                  f_73 = ATgetFirst((ATermList) t);
                                                                  g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = g_73;
                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                _fail(t);
                                                              t = f_73;
                                                              t = EvalTerm_0_0(t);
                                                              f_13 = t;
                                                              t = SSL_int(f_13);
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t, "SSL_gtr"))
                                                                {
                                                                  t = e_73;
                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                    {
                                                                      f_73 = ATgetFirst((ATermList) t);
                                                                      g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  t = g_73;
                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                    {
                                                                      x_72 = ATgetFirst((ATermList) t);
                                                                      y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  t = y_72;
                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                    _fail(t);
                                                                  {
                                                                    ATerm r_32 = t;
                                                                    int s_32 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm p_13 = NULL,r_13 = NULL;
                                                                        t = f_73;
                                                                        t = EvalTerm_0_0(t);
                                                                        p_13 = t;
                                                                        t = x_72;
                                                                        t = EvalTerm_0_0(t);
                                                                        r_13 = t;
                                                                        t = SSL_gtr(p_13, r_13);
                                                                        ;
                                                                        LocalPopChoice(s_32);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = r_32;
                                                                        {
                                                                          ATerm b_14 = NULL,c_14 = NULL;
                                                                          t = f_73;
                                                                          t = EvalTerm_0_0(t);
                                                                          b_14 = t;
                                                                          t = x_72;
                                                                          t = EvalTerm_0_0(t);
                                                                          c_14 = t;
                                                                          t = SSL_gtr(b_14, c_14);
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "SSL_gti"))
                                                                    {
                                                                      t = e_73;
                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                        {
                                                                          f_73 = ATgetFirst((ATermList) t);
                                                                          g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      t = g_73;
                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                        {
                                                                          x_72 = ATgetFirst((ATermList) t);
                                                                          y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      t = y_72;
                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                        _fail(t);
                                                                      {
                                                                        ATerm u_32 = t;
                                                                        int v_32 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            ATerm l_14 = NULL,m_14 = NULL;
                                                                            t = f_73;
                                                                            t = EvalTerm_0_0(t);
                                                                            l_14 = t;
                                                                            t = x_72;
                                                                            t = EvalTerm_0_0(t);
                                                                            m_14 = t;
                                                                            t = SSL_gti(l_14, m_14);
                                                                            ;
                                                                            LocalPopChoice(v_32);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = u_32;
                                                                            {
                                                                              ATerm w_14 = NULL,x_14 = NULL;
                                                                              t = f_73;
                                                                              t = EvalTerm_0_0(t);
                                                                              w_14 = t;
                                                                              t = x_72;
                                                                              t = EvalTerm_0_0(t);
                                                                              x_14 = t;
                                                                              t = SSL_gti(w_14, x_14);
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, "SSL_mod"))
                                                                        {
                                                                          ATerm h_15 = NULL,i_15 = NULL;
                                                                          t = e_73;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              f_73 = ATgetFirst((ATermList) t);
                                                                              g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          t = g_73;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              x_72 = ATgetFirst((ATermList) t);
                                                                              y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          t = y_72;
                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                            _fail(t);
                                                                          t = f_73;
                                                                          t = EvalTerm_0_0(t);
                                                                          h_15 = t;
                                                                          t = x_72;
                                                                          t = EvalTerm_0_0(t);
                                                                          i_15 = t;
                                                                          t = SSL_mod(h_15, i_15);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, "SSL_divr"))
                                                                            {
                                                                              t = e_73;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  f_73 = ATgetFirst((ATermList) t);
                                                                                  g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = g_73;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  x_72 = ATgetFirst((ATermList) t);
                                                                                  y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = y_72;
                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                _fail(t);
                                                                              {
                                                                                ATerm w_32 = t;
                                                                                int x_32 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm q_15 = NULL,r_15 = NULL;
                                                                                    t = f_73;
                                                                                    t = EvalTerm_0_0(t);
                                                                                    q_15 = t;
                                                                                    t = x_72;
                                                                                    t = EvalTerm_0_0(t);
                                                                                    r_15 = t;
                                                                                    t = SSL_divr(q_15, r_15);
                                                                                    ;
                                                                                    LocalPopChoice(x_32);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = w_32;
                                                                                    {
                                                                                      ATerm z_15 = NULL,a_16 = NULL;
                                                                                      t = f_73;
                                                                                      t = EvalTerm_0_0(t);
                                                                                      z_15 = t;
                                                                                      t = x_72;
                                                                                      t = EvalTerm_0_0(t);
                                                                                      a_16 = t;
                                                                                      t = SSL_divr(z_15, a_16);
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "SSL_divi"))
                                                                                {
                                                                                  t = e_73;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      f_73 = ATgetFirst((ATermList) t);
                                                                                      g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  t = g_73;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      x_72 = ATgetFirst((ATermList) t);
                                                                                      y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  t = y_72;
                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                    _fail(t);
                                                                                  {
                                                                                    ATerm y_32 = t;
                                                                                    int a_33 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm o_16 = NULL,p_16 = NULL;
                                                                                        t = f_73;
                                                                                        t = EvalTerm_0_0(t);
                                                                                        o_16 = t;
                                                                                        t = x_72;
                                                                                        t = EvalTerm_0_0(t);
                                                                                        p_16 = t;
                                                                                        t = SSL_divi(o_16, p_16);
                                                                                        ;
                                                                                        LocalPopChoice(a_33);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = y_32;
                                                                                        {
                                                                                          ATerm x_16 = NULL,y_16 = NULL;
                                                                                          t = f_73;
                                                                                          t = EvalTerm_0_0(t);
                                                                                          x_16 = t;
                                                                                          t = x_72;
                                                                                          t = EvalTerm_0_0(t);
                                                                                          y_16 = t;
                                                                                          t = SSL_divi(x_16, y_16);
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "SSL_mulr"))
                                                                                    {
                                                                                      t = e_73;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          f_73 = ATgetFirst((ATermList) t);
                                                                                          g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = g_73;
                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                        {
                                                                                          x_72 = ATgetFirst((ATermList) t);
                                                                                          y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = y_72;
                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                        _fail(t);
                                                                                      {
                                                                                        ATerm b_33 = t;
                                                                                        int c_33 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm m_17 = NULL,n_17 = NULL;
                                                                                            t = f_73;
                                                                                            t = EvalTerm_0_0(t);
                                                                                            m_17 = t;
                                                                                            t = x_72;
                                                                                            t = EvalTerm_0_0(t);
                                                                                            n_17 = t;
                                                                                            t = SSL_mulr(m_17, n_17);
                                                                                            ;
                                                                                            LocalPopChoice(c_33);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = b_33;
                                                                                            {
                                                                                              ATerm x_17 = NULL,y_17 = NULL;
                                                                                              t = f_73;
                                                                                              t = EvalTerm_0_0(t);
                                                                                              x_17 = t;
                                                                                              t = x_72;
                                                                                              t = EvalTerm_0_0(t);
                                                                                              y_17 = t;
                                                                                              t = SSL_mulr(x_17, y_17);
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "SSL_muli"))
                                                                                        {
                                                                                          t = e_73;
                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                            {
                                                                                              f_73 = ATgetFirst((ATermList) t);
                                                                                              g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = g_73;
                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                            {
                                                                                              x_72 = ATgetFirst((ATermList) t);
                                                                                              y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = y_72;
                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                            _fail(t);
                                                                                          {
                                                                                            ATerm d_33 = t;
                                                                                            int e_33 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm i_18 = NULL,j_18 = NULL;
                                                                                                t = f_73;
                                                                                                t = EvalTerm_0_0(t);
                                                                                                i_18 = t;
                                                                                                t = x_72;
                                                                                                t = EvalTerm_0_0(t);
                                                                                                j_18 = t;
                                                                                                t = SSL_muli(i_18, j_18);
                                                                                                ;
                                                                                                LocalPopChoice(e_33);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = d_33;
                                                                                                {
                                                                                                  ATerm s_18 = NULL,t_18 = NULL;
                                                                                                  t = f_73;
                                                                                                  t = EvalTerm_0_0(t);
                                                                                                  s_18 = t;
                                                                                                  t = x_72;
                                                                                                  t = EvalTerm_0_0(t);
                                                                                                  t_18 = t;
                                                                                                  t = SSL_muli(s_18, t_18);
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, "SSL_subtr"))
                                                                                            {
                                                                                              t = e_73;
                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                {
                                                                                                  f_73 = ATgetFirst((ATermList) t);
                                                                                                  g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              t = g_73;
                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                {
                                                                                                  x_72 = ATgetFirst((ATermList) t);
                                                                                                  y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              t = y_72;
                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                _fail(t);
                                                                                              {
                                                                                                ATerm g_33 = t;
                                                                                                int h_33 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm h_19 = NULL,i_19 = NULL;
                                                                                                    t = f_73;
                                                                                                    t = EvalTerm_0_0(t);
                                                                                                    h_19 = t;
                                                                                                    t = x_72;
                                                                                                    t = EvalTerm_0_0(t);
                                                                                                    i_19 = t;
                                                                                                    t = SSL_subtr(h_19, i_19);
                                                                                                    ;
                                                                                                    LocalPopChoice(h_33);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = g_33;
                                                                                                    {
                                                                                                      ATerm r_19 = NULL,s_19 = NULL;
                                                                                                      t = f_73;
                                                                                                      t = EvalTerm_0_0(t);
                                                                                                      r_19 = t;
                                                                                                      t = x_72;
                                                                                                      t = EvalTerm_0_0(t);
                                                                                                      s_19 = t;
                                                                                                      t = SSL_subtr(r_19, s_19);
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "SSL_subti"))
                                                                                                {
                                                                                                  t = e_73;
                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                    {
                                                                                                      f_73 = ATgetFirst((ATermList) t);
                                                                                                      g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = g_73;
                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                    {
                                                                                                      x_72 = ATgetFirst((ATermList) t);
                                                                                                      y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = y_72;
                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                    _fail(t);
                                                                                                  {
                                                                                                    ATerm i_33 = t;
                                                                                                    int j_33 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm g_20 = NULL,h_20 = NULL;
                                                                                                        t = f_73;
                                                                                                        t = EvalTerm_0_0(t);
                                                                                                        g_20 = t;
                                                                                                        t = x_72;
                                                                                                        t = EvalTerm_0_0(t);
                                                                                                        h_20 = t;
                                                                                                        t = SSL_subti(g_20, h_20);
                                                                                                        ;
                                                                                                        LocalPopChoice(j_33);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = i_33;
                                                                                                        {
                                                                                                          ATerm p_20 = NULL,q_20 = NULL;
                                                                                                          t = f_73;
                                                                                                          t = EvalTerm_0_0(t);
                                                                                                          p_20 = t;
                                                                                                          t = x_72;
                                                                                                          t = EvalTerm_0_0(t);
                                                                                                          q_20 = t;
                                                                                                          t = SSL_subti(p_20, q_20);
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "SSL_addr"))
                                                                                                    {
                                                                                                      t = e_73;
                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                        {
                                                                                                          f_73 = ATgetFirst((ATermList) t);
                                                                                                          g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      t = g_73;
                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                        {
                                                                                                          x_72 = ATgetFirst((ATermList) t);
                                                                                                          y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      t = y_72;
                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                        _fail(t);
                                                                                                      {
                                                                                                        ATerm k_33 = t;
                                                                                                        int l_33 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm a_21 = NULL,b_21 = NULL;
                                                                                                            t = f_73;
                                                                                                            t = EvalTerm_0_0(t);
                                                                                                            a_21 = t;
                                                                                                            t = x_72;
                                                                                                            t = EvalTerm_0_0(t);
                                                                                                            b_21 = t;
                                                                                                            t = SSL_addr(a_21, b_21);
                                                                                                            ;
                                                                                                            LocalPopChoice(l_33);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = k_33;
                                                                                                            {
                                                                                                              ATerm l_21 = NULL,m_21 = NULL;
                                                                                                              t = f_73;
                                                                                                              t = EvalTerm_0_0(t);
                                                                                                              l_21 = t;
                                                                                                              t = x_72;
                                                                                                              t = EvalTerm_0_0(t);
                                                                                                              m_21 = t;
                                                                                                              t = SSL_addr(l_21, m_21);
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "SSL_addi"))
                                                                                                        {
                                                                                                          t = e_73;
                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                            {
                                                                                                              f_73 = ATgetFirst((ATermList) t);
                                                                                                              g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          t = g_73;
                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                            {
                                                                                                              x_72 = ATgetFirst((ATermList) t);
                                                                                                              y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          t = y_72;
                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                            _fail(t);
                                                                                                          {
                                                                                                            ATerm m_33 = t;
                                                                                                            int p_33 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                ATerm u_21 = NULL,v_21 = NULL;
                                                                                                                t = f_73;
                                                                                                                t = EvalTerm_0_0(t);
                                                                                                                u_21 = t;
                                                                                                                t = x_72;
                                                                                                                t = EvalTerm_0_0(t);
                                                                                                                v_21 = t;
                                                                                                                t = SSL_addi(u_21, v_21);
                                                                                                                ;
                                                                                                                LocalPopChoice(p_33);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = m_33;
                                                                                                                {
                                                                                                                  ATerm j_22 = NULL,k_22 = NULL;
                                                                                                                  t = f_73;
                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                  j_22 = t;
                                                                                                                  t = x_72;
                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                  k_22 = t;
                                                                                                                  t = SSL_addi(j_22, k_22);
                                                                                                                }
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "SSL_is_int"))
                                                                                                            {
                                                                                                              ATerm v_22 = NULL;
                                                                                                              t = e_73;
                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                {
                                                                                                                  f_73 = ATgetFirst((ATermList) t);
                                                                                                                  g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              t = g_73;
                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                _fail(t);
                                                                                                              t = f_73;
                                                                                                              t = EvalTerm_0_0(t);
                                                                                                              v_22 = t;
                                                                                                              t = SSL_is_int(v_22);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "SSL_real"))
                                                                                                                {
                                                                                                                  ATerm c_23 = NULL;
                                                                                                                  t = e_73;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                    {
                                                                                                                      f_73 = ATgetFirst((ATermList) t);
                                                                                                                      g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  t = g_73;
                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                    _fail(t);
                                                                                                                  t = f_73;
                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                  c_23 = t;
                                                                                                                  t = SSL_real(c_23);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "SSL_string_to_real"))
                                                                                                                    {
                                                                                                                      ATerm m_23 = NULL;
                                                                                                                      t = e_73;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                        {
                                                                                                                          f_73 = ATgetFirst((ATermList) t);
                                                                                                                          g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      t = g_73;
                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                        _fail(t);
                                                                                                                      t = f_73;
                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                      m_23 = t;
                                                                                                                      t = SSL_string_to_real(m_23);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "SSL_real_to_string"))
                                                                                                                        {
                                                                                                                          ATerm a_24 = NULL;
                                                                                                                          t = e_73;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                            {
                                                                                                                              f_73 = ATgetFirst((ATermList) t);
                                                                                                                              g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            _fail(t);
                                                                                                                          t = g_73;
                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                            _fail(t);
                                                                                                                          t = f_73;
                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                          a_24 = t;
                                                                                                                          t = SSL_real_to_string(a_24);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "SSL_atan2"))
                                                                                                                            {
                                                                                                                              ATerm t_24 = NULL,u_24 = NULL;
                                                                                                                              t = e_73;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                {
                                                                                                                                  f_73 = ATgetFirst((ATermList) t);
                                                                                                                                  g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                _fail(t);
                                                                                                                              t = g_73;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                {
                                                                                                                                  x_72 = ATgetFirst((ATermList) t);
                                                                                                                                  y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                _fail(t);
                                                                                                                              t = y_72;
                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                _fail(t);
                                                                                                                              t = f_73;
                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                              t_24 = t;
                                                                                                                              t = x_72;
                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                              u_24 = t;
                                                                                                                              t = SSL_atan2(t_24, u_24);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "SSL_sqrt"))
                                                                                                                                {
                                                                                                                                  ATerm l_26 = NULL;
                                                                                                                                  t = e_73;
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      f_73 = ATgetFirst((ATermList) t);
                                                                                                                                      g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    _fail(t);
                                                                                                                                  t = g_73;
                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                    _fail(t);
                                                                                                                                  t = f_73;
                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                  l_26 = t;
                                                                                                                                  t = SSL_sqrt(l_26);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "SSL_sin"))
                                                                                                                                    {
                                                                                                                                      ATerm r_26 = NULL;
                                                                                                                                      t = e_73;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                        {
                                                                                                                                          f_73 = ATgetFirst((ATermList) t);
                                                                                                                                          g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        _fail(t);
                                                                                                                                      t = g_73;
                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                        _fail(t);
                                                                                                                                      t = f_73;
                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                      r_26 = t;
                                                                                                                                      t = SSL_sin(r_26);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "SSL_cos"))
                                                                                                                                        {
                                                                                                                                          ATerm x_26 = NULL;
                                                                                                                                          t = e_73;
                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                            {
                                                                                                                                              f_73 = ATgetFirst((ATermList) t);
                                                                                                                                              g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            _fail(t);
                                                                                                                                          t = g_73;
                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                            _fail(t);
                                                                                                                                          t = f_73;
                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                          x_26 = t;
                                                                                                                                          t = SSL_cos(x_26);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "SSL_is_real"))
                                                                                                                                            {
                                                                                                                                              ATerm d_27 = NULL;
                                                                                                                                              t = e_73;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                {
                                                                                                                                                  f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                  g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              t = g_73;
                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                _fail(t);
                                                                                                                                              t = f_73;
                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                              d_27 = t;
                                                                                                                                              t = SSL_is_real(d_27);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(t, "SSL_open_file"))
                                                                                                                                                {
                                                                                                                                                  ATerm l_27 = NULL,m_27 = NULL;
                                                                                                                                                  t = e_73;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                    {
                                                                                                                                                      f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                      g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    _fail(t);
                                                                                                                                                  t = g_73;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                    {
                                                                                                                                                      x_72 = ATgetFirst((ATermList) t);
                                                                                                                                                      y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    _fail(t);
                                                                                                                                                  t = y_72;
                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                    _fail(t);
                                                                                                                                                  t = f_73;
                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                  l_27 = t;
                                                                                                                                                  t = x_72;
                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                  m_27 = t;
                                                                                                                                                  t = SSL_open_file(l_27, m_27);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_string(t, "SSL_close_file"))
                                                                                                                                                    {
                                                                                                                                                      ATerm s_27 = NULL;
                                                                                                                                                      t = e_73;
                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                        {
                                                                                                                                                          f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                          g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        _fail(t);
                                                                                                                                                      t = g_73;
                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                        _fail(t);
                                                                                                                                                      t = f_73;
                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                      s_27 = t;
                                                                                                                                                      t = SSL_close_file(s_27);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      if(match_string(t, "SSL_concat_strings"))
                                                                                                                                                        {
                                                                                                                                                          ATerm y_27 = NULL;
                                                                                                                                                          t = e_73;
                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                            {
                                                                                                                                                              f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                              g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            _fail(t);
                                                                                                                                                          t = g_73;
                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                            _fail(t);
                                                                                                                                                          t = f_73;
                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                          y_27 = t;
                                                                                                                                                          t = SSL_concat_strings(y_27);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          if(match_string(t, "SSL_strcat"))
                                                                                                                                                            {
                                                                                                                                                              ATerm g_28 = NULL,h_28 = NULL;
                                                                                                                                                              t = e_73;
                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                {
                                                                                                                                                                  f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                  g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                _fail(t);
                                                                                                                                                              t = g_73;
                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                {
                                                                                                                                                                  x_72 = ATgetFirst((ATermList) t);
                                                                                                                                                                  y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                _fail(t);
                                                                                                                                                              t = y_72;
                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                _fail(t);
                                                                                                                                                              t = f_73;
                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                              g_28 = t;
                                                                                                                                                              t = x_72;
                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                              h_28 = t;
                                                                                                                                                              t = SSL_strcat(g_28, h_28);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              if(match_string(t, "SSL_strlen"))
                                                                                                                                                                {
                                                                                                                                                                  ATerm n_28 = NULL;
                                                                                                                                                                  t = e_73;
                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                    {
                                                                                                                                                                      f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                      g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                    }
                                                                                                                                                                  else
                                                                                                                                                                    _fail(t);
                                                                                                                                                                  t = g_73;
                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                    _fail(t);
                                                                                                                                                                  t = f_73;
                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                  n_28 = t;
                                                                                                                                                                  t = SSL_strlen(n_28);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  if(match_string(t, "SSL_pipe"))
                                                                                                                                                                    {
                                                                                                                                                                      t = e_73;
                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      t = SSL_pipe();
                                                                                                                                                                    }
                                                                                                                                                                  else
                                                                                                                                                                    {
                                                                                                                                                                      if(match_string(t, "SSL_fileno"))
                                                                                                                                                                        {
                                                                                                                                                                          ATerm u_28 = NULL;
                                                                                                                                                                          t = e_73;
                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                            {
                                                                                                                                                                              f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                              g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                            }
                                                                                                                                                                          else
                                                                                                                                                                            _fail(t);
                                                                                                                                                                          t = g_73;
                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                            _fail(t);
                                                                                                                                                                          t = f_73;
                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                          u_28 = t;
                                                                                                                                                                          t = SSL_fileno(u_28);
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        {
                                                                                                                                                                          if(match_string(t, "SSL_fdopen"))
                                                                                                                                                                            {
                                                                                                                                                                              ATerm c_29 = NULL,d_29 = NULL;
                                                                                                                                                                              t = e_73;
                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                {
                                                                                                                                                                                  f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                  g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              t = g_73;
                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                {
                                                                                                                                                                                  x_72 = ATgetFirst((ATermList) t);
                                                                                                                                                                                  y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              t = y_72;
                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              t = f_73;
                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                              c_29 = t;
                                                                                                                                                                              t = x_72;
                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                              d_29 = t;
                                                                                                                                                                              t = SSL_fdopen(c_29, d_29);
                                                                                                                                                                            }
                                                                                                                                                                          else
                                                                                                                                                                            {
                                                                                                                                                                              if(match_string(t, "SSL_access"))
                                                                                                                                                                                {
                                                                                                                                                                                  ATerm l_29 = NULL,m_29 = NULL;
                                                                                                                                                                                  t = e_73;
                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                    {
                                                                                                                                                                                      f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                      g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                    }
                                                                                                                                                                                  else
                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                  t = g_73;
                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                    {
                                                                                                                                                                                      x_72 = ATgetFirst((ATermList) t);
                                                                                                                                                                                      y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                    }
                                                                                                                                                                                  else
                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                  t = y_72;
                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                  t = f_73;
                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                  l_29 = t;
                                                                                                                                                                                  t = x_72;
                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                  m_29 = t;
                                                                                                                                                                                  t = SSL_access(l_29, m_29);
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                {
                                                                                                                                                                                  if(match_string(t, "SSL_dup2"))
                                                                                                                                                                                    {
                                                                                                                                                                                      ATerm u_29 = NULL,v_29 = NULL;
                                                                                                                                                                                      t = e_73;
                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                        {
                                                                                                                                                                                          f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                          g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                        }
                                                                                                                                                                                      else
                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                      t = g_73;
                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                        {
                                                                                                                                                                                          x_72 = ATgetFirst((ATermList) t);
                                                                                                                                                                                          y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                        }
                                                                                                                                                                                      else
                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                      t = y_72;
                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                      t = f_73;
                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                      u_29 = t;
                                                                                                                                                                                      t = x_72;
                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                      v_29 = t;
                                                                                                                                                                                      t = SSL_dup2(u_29, v_29);
                                                                                                                                                                                    }
                                                                                                                                                                                  else
                                                                                                                                                                                    {
                                                                                                                                                                                      if(match_string(t, "SSL_dup"))
                                                                                                                                                                                        {
                                                                                                                                                                                          ATerm b_30 = NULL;
                                                                                                                                                                                          t = e_73;
                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                            {
                                                                                                                                                                                              f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                              g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                            }
                                                                                                                                                                                          else
                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                          t = g_73;
                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                          t = f_73;
                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                          b_30 = t;
                                                                                                                                                                                          t = SSL_dup(b_30);
                                                                                                                                                                                        }
                                                                                                                                                                                      else
                                                                                                                                                                                        {
                                                                                                                                                                                          if(match_string(t, "SSL_close"))
                                                                                                                                                                                            {
                                                                                                                                                                                              ATerm h_30 = NULL;
                                                                                                                                                                                              t = e_73;
                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                {
                                                                                                                                                                                                  f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                  g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                }
                                                                                                                                                                                              else
                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                              t = g_73;
                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                              t = f_73;
                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                              h_30 = t;
                                                                                                                                                                                              t = SSL_close(h_30);
                                                                                                                                                                                            }
                                                                                                                                                                                          else
                                                                                                                                                                                            {
                                                                                                                                                                                              if(match_string(t, "SSL_mkstemp"))
                                                                                                                                                                                                {
                                                                                                                                                                                                  ATerm n_30 = NULL;
                                                                                                                                                                                                  t = e_73;
                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                    {
                                                                                                                                                                                                      f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                      g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                    }
                                                                                                                                                                                                  else
                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                  t = g_73;
                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                  t = f_73;
                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                  n_30 = t;
                                                                                                                                                                                                  t = SSL_mkstemp(n_30);
                                                                                                                                                                                                }
                                                                                                                                                                                              else
                                                                                                                                                                                                {
                                                                                                                                                                                                  if(match_string(t, "SSL_open"))
                                                                                                                                                                                                    {
                                                                                                                                                                                                      ATerm t_30 = NULL;
                                                                                                                                                                                                      t = e_73;
                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                        {
                                                                                                                                                                                                          f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                          g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                        }
                                                                                                                                                                                                      else
                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                      t = g_73;
                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                      t = f_73;
                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                      t_30 = t;
                                                                                                                                                                                                      t = SSL_open(t_30);
                                                                                                                                                                                                    }
                                                                                                                                                                                                  else
                                                                                                                                                                                                    {
                                                                                                                                                                                                      if(match_string(t, "SSL_creat"))
                                                                                                                                                                                                        {
                                                                                                                                                                                                          ATerm z_30 = NULL;
                                                                                                                                                                                                          t = e_73;
                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                            {
                                                                                                                                                                                                              f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                              g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                            }
                                                                                                                                                                                                          else
                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                          t = g_73;
                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                          t = f_73;
                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                          z_30 = t;
                                                                                                                                                                                                          t = SSL_creat(z_30);
                                                                                                                                                                                                        }
                                                                                                                                                                                                      else
                                                                                                                                                                                                        {
                                                                                                                                                                                                          if(match_string(t, "SSL_P_tmpdir"))
                                                                                                                                                                                                            {
                                                                                                                                                                                                              t = e_73;
                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                              t = SSL_P_tmpdir();
                                                                                                                                                                                                            }
                                                                                                                                                                                                          else
                                                                                                                                                                                                            {
                                                                                                                                                                                                              if(match_string(t, "SSL_STDERR_FILENO"))
                                                                                                                                                                                                                {
                                                                                                                                                                                                                  t = e_73;
                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                  t = SSL_STDERR_FILENO();
                                                                                                                                                                                                                }
                                                                                                                                                                                                              else
                                                                                                                                                                                                                {
                                                                                                                                                                                                                  if(match_string(t, "SSL_STDOUT_FILENO"))
                                                                                                                                                                                                                    {
                                                                                                                                                                                                                      t = e_73;
                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                      t = SSL_STDOUT_FILENO();
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                  else
                                                                                                                                                                                                                    {
                                                                                                                                                                                                                      if(match_string(t, "SSL_STDIN_FILENO"))
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                          t = e_73;
                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                          t = SSL_STDIN_FILENO();
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                      else
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                          if(match_string(t, "SSL_fgetc"))
                                                                                                                                                                                                                            {
                                                                                                                                                                                                                              ATerm j_31 = NULL;
                                                                                                                                                                                                                              t = e_73;
                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                  f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                  g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                }
                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                              t = g_73;
                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                              t = f_73;
                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                              j_31 = t;
                                                                                                                                                                                                                              t = SSL_fgetc(j_31);
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                          else
                                                                                                                                                                                                                            {
                                                                                                                                                                                                                              if(match_string(t, "SSL_fputc"))
                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                  ATerm r_31 = NULL,s_31 = NULL;
                                                                                                                                                                                                                                  t = e_73;
                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                      f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                      g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                  t = g_73;
                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                      x_72 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                      y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                  t = y_72;
                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                  t = f_73;
                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                  r_31 = t;
                                                                                                                                                                                                                                  t = x_72;
                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                  s_31 = t;
                                                                                                                                                                                                                                  t = SSL_fputc(r_31, s_31);
                                                                                                                                                                                                                                }
                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                  if(match_string(t, "SSL_puts"))
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                      ATerm y_31 = NULL;
                                                                                                                                                                                                                                      t = e_73;
                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                          f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                          g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                      t = g_73;
                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                      t = f_73;
                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                      y_31 = t;
                                                                                                                                                                                                                                      t = SSL_puts(y_31);
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                      if(match_string(t, "SSL_fputs"))
                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                          ATerm g_32 = NULL,h_32 = NULL;
                                                                                                                                                                                                                                          t = e_73;
                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                              f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                              g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                          t = g_73;
                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                              x_72 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                              y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                          t = y_72;
                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                          t = f_73;
                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                          g_32 = t;
                                                                                                                                                                                                                                          t = x_72;
                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                          h_32 = t;
                                                                                                                                                                                                                                          t = SSL_fputs(g_32, h_32);
                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                          if(match_string(t, "SSL_fflush"))
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                              t = e_73;
                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                  f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                  g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                              t = g_73;
                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                ATerm q_33 = t;
                                                                                                                                                                                                                                                int r_33 = stack_ptr;
                                                                                                                                                                                                                                                if((PushChoice() == 0))
                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                    ATerm n_32 = NULL;
                                                                                                                                                                                                                                                    t = f_73;
                                                                                                                                                                                                                                                    t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                    n_32 = t;
                                                                                                                                                                                                                                                    t = SSL_fflush(n_32);
                                                                                                                                                                                                                                                    ;
                                                                                                                                                                                                                                                    LocalPopChoice(r_33);
                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                else
                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                    t = q_33;
                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                      ATerm t_32 = NULL;
                                                                                                                                                                                                                                                      t = f_73;
                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                      t_32 = t;
                                                                                                                                                                                                                                                      t = SSL_fflush(t_32);
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                              if(match_string(t, "SSL_fclose"))
                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                  t = e_73;
                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                      f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                      g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                  t = g_73;
                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                    ATerm s_33 = t;
                                                                                                                                                                                                                                                    int t_33 = stack_ptr;
                                                                                                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                        ATerm z_32 = NULL;
                                                                                                                                                                                                                                                        t = f_73;
                                                                                                                                                                                                                                                        t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                        z_32 = t;
                                                                                                                                                                                                                                                        t = SSL_fclose(z_32);
                                                                                                                                                                                                                                                        ;
                                                                                                                                                                                                                                                        LocalPopChoice(t_33);
                                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                        t = s_33;
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          ATerm f_33 = NULL;
                                                                                                                                                                                                                                                          t = f_73;
                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                          f_33 = t;
                                                                                                                                                                                                                                                          t = SSL_fclose(f_33);
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                  if(match_string(t, "SSL_fopen"))
                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                      ATerm n_33 = NULL,o_33 = NULL;
                                                                                                                                                                                                                                                      t = e_73;
                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                          g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                      t = g_73;
                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          x_72 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                          y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                      t = y_72;
                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                      t = f_73;
                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                      n_33 = t;
                                                                                                                                                                                                                                                      t = x_72;
                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                      o_33 = t;
                                                                                                                                                                                                                                                      t = SSL_fopen(n_33, o_33);
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                      if(match_string(t, "SSL_stderr_stream"))
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          t = e_73;
                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                          t = SSL_stderr_stream();
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          if(match_string(t, "SSL_stdout_stream"))
                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                              t = e_73;
                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                              t = SSL_stdout_stream();
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                              if(match_string(t, "SSL_stdin_stream"))
                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                  t = e_73;
                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                  t = SSL_stdin_stream();
                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                  if(match_string(t, "SSL_setenv"))
                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                      ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL;
                                                                                                                                                                                                                                                                      t = e_73;
                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                          g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                      t = g_73;
                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          x_72 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                          y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                      t = y_72;
                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          z_72 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                          a_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                      t = a_73;
                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                      t = f_73;
                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                      b_34 = t;
                                                                                                                                                                                                                                                                      t = x_72;
                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                      c_34 = t;
                                                                                                                                                                                                                                                                      t = z_72;
                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                      d_34 = t;
                                                                                                                                                                                                                                                                      t = SSL_setenv(b_34, c_34, d_34);
                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                      if(match_string(t, "SSL_getenv"))
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          ATerm j_34 = NULL;
                                                                                                                                                                                                                                                                          t = e_73;
                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                              f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                              g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                          t = g_73;
                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                          t = f_73;
                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                          j_34 = t;
                                                                                                                                                                                                                                                                          t = SSL_getenv(j_34);
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          if(match_string(t, "SSL_remove"))
                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                              ATerm p_34 = NULL;
                                                                                                                                                                                                                                                                              t = e_73;
                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                  f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                  g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                              t = g_73;
                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                              t = f_73;
                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                              p_34 = t;
                                                                                                                                                                                                                                                                              t = SSL_remove(p_34);
                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                              if(match_string(t, "SSL_link"))
                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                  ATerm x_34 = NULL,y_34 = NULL;
                                                                                                                                                                                                                                                                                  t = e_73;
                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                      f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                      g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                  t = g_73;
                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                      x_72 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                      y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                  t = y_72;
                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                  t = f_73;
                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                  x_34 = t;
                                                                                                                                                                                                                                                                                  t = x_72;
                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                  y_34 = t;
                                                                                                                                                                                                                                                                                  t = SSL_link(x_34, y_34);
                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                  if(match_string(t, "SSL_fdcopy"))
                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                      ATerm g_35 = NULL,h_35 = NULL;
                                                                                                                                                                                                                                                                                      t = e_73;
                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                          f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                          g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                      t = g_73;
                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                          x_72 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                          y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                      t = y_72;
                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                      t = f_73;
                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                      g_35 = t;
                                                                                                                                                                                                                                                                                      t = x_72;
                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                      h_35 = t;
                                                                                                                                                                                                                                                                                      t = SSL_fdcopy(g_35, h_35);
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                      if(match_string(t, "SSL_copy"))
                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                          ATerm p_35 = NULL,q_35 = NULL;
                                                                                                                                                                                                                                                                                          t = e_73;
                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                              f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                              g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                          t = g_73;
                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                              x_72 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                              y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                          t = y_72;
                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                          t = f_73;
                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                          p_35 = t;
                                                                                                                                                                                                                                                                                          t = x_72;
                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                          q_35 = t;
                                                                                                                                                                                                                                                                                          t = SSL_copy(p_35, q_35);
                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                          if(match_string(t, "SSL_rename"))
                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                              ATerm y_35 = NULL,z_35 = NULL;
                                                                                                                                                                                                                                                                                              t = e_73;
                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                  f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                  g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                              t = g_73;
                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                  x_72 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                  y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                              t = y_72;
                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                              t = f_73;
                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                              y_35 = t;
                                                                                                                                                                                                                                                                                              t = x_72;
                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                              z_35 = t;
                                                                                                                                                                                                                                                                                              t = SSL_rename(y_35, z_35);
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                              if(match_string(t, "SSL_modification_time"))
                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                  ATerm f_36 = NULL;
                                                                                                                                                                                                                                                                                                  t = e_73;
                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                      f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                      g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                  t = g_73;
                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                  t = f_73;
                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                  f_36 = t;
                                                                                                                                                                                                                                                                                                  t = SSL_modification_time(f_36);
                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                  if(match_string(t, "SSL_readdir"))
                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                      ATerm l_36 = NULL;
                                                                                                                                                                                                                                                                                                      t = e_73;
                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                          f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                          g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                      t = g_73;
                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                      t = f_73;
                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                      l_36 = t;
                                                                                                                                                                                                                                                                                                      t = SSL_readdir(l_36);
                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                      if(match_string(t, "SSL_getchar"))
                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                          ATerm r_36 = NULL;
                                                                                                                                                                                                                                                                                                          t = e_73;
                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                              f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                              g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                          t = g_73;
                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                          t = f_73;
                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                          r_36 = t;
                                                                                                                                                                                                                                                                                                          t = SSL_getchar(r_36);
                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                          if(match_string(t, "SSL_printascii"))
                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                              ATerm z_36 = NULL,a_37 = NULL;
                                                                                                                                                                                                                                                                                                              t = e_73;
                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                  f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                  g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                              t = g_73;
                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                  x_72 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                  y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                              t = y_72;
                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                              t = f_73;
                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                              z_36 = t;
                                                                                                                                                                                                                                                                                                              t = x_72;
                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                              a_37 = t;
                                                                                                                                                                                                                                                                                                              t = SSL_printascii(z_36, a_37);
                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                              if(match_string(t, "SSL_printnl"))
                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                  ATerm i_37 = NULL,j_37 = NULL;
                                                                                                                                                                                                                                                                                                                  t = e_73;
                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                      f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                      g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                  t = g_73;
                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                      x_72 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                      y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                  t = y_72;
                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                  t = f_73;
                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                  i_37 = t;
                                                                                                                                                                                                                                                                                                                  t = x_72;
                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                  j_37 = t;
                                                                                                                                                                                                                                                                                                                  t = SSL_printnl(i_37, j_37);
                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                  if(match_string(t, "SSL_print"))
                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                      ATerm r_37 = NULL,s_37 = NULL;
                                                                                                                                                                                                                                                                                                                      t = e_73;
                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                          f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                          g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                      t = g_73;
                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                          x_72 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                          y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                      t = y_72;
                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                      t = f_73;
                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                      r_37 = t;
                                                                                                                                                                                                                                                                                                                      t = x_72;
                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                      s_37 = t;
                                                                                                                                                                                                                                                                                                                      t = SSL_print(r_37, s_37);
                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                      if(match_string(t, "SSL_read_term_from_stream"))
                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                          ATerm y_37 = NULL;
                                                                                                                                                                                                                                                                                                                          t = e_73;
                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                              f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                              g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                          t = g_73;
                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                          t = f_73;
                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                          y_37 = t;
                                                                                                                                                                                                                                                                                                                          t = SSL_read_term_from_stream(y_37);
                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                          if(match_string(t, "SSL_write_term_to_stream_text"))
                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                              ATerm g_38 = NULL,h_38 = NULL;
                                                                                                                                                                                                                                                                                                                              t = e_73;
                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                  f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                  g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                              t = g_73;
                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                  x_72 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                  y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                              t = y_72;
                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                              t = f_73;
                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                              g_38 = t;
                                                                                                                                                                                                                                                                                                                              t = x_72;
                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                              h_38 = t;
                                                                                                                                                                                                                                                                                                                              t = SSL_write_term_to_stream_text(g_38, h_38);
                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                              if(match_string(t, "SSL_write_term_to_stream_taf"))
                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                  ATerm p_38 = NULL,q_38 = NULL;
                                                                                                                                                                                                                                                                                                                                  t = e_73;
                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                      f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                      g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                  t = g_73;
                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                      x_72 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                      y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                  t = y_72;
                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                  t = f_73;
                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                  p_38 = t;
                                                                                                                                                                                                                                                                                                                                  t = x_72;
                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                  q_38 = t;
                                                                                                                                                                                                                                                                                                                                  t = SSL_write_term_to_stream_taf(p_38, q_38);
                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "SSL_write_term_to_stream_baf"))
                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                      ATerm y_38 = NULL,z_38 = NULL;
                                                                                                                                                                                                                                                                                                                                      t = e_73;
                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                          f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                          g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                      t = g_73;
                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                          x_72 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                          y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                      t = y_72;
                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                      t = f_73;
                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                      y_38 = t;
                                                                                                                                                                                                                                                                                                                                      t = x_72;
                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                      z_38 = t;
                                                                                                                                                                                                                                                                                                                                      t = SSL_write_term_to_stream_baf(y_38, z_38);
                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "SSL_pipe_term_to_child"))
                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                          ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL;
                                                                                                                                                                                                                                                                                                                                          t = e_73;
                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                              f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                              g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                          t = g_73;
                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                              x_72 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                              y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                          t = y_72;
                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                              z_72 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                              a_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                          t = a_73;
                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                          t = f_73;
                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                          j_39 = t;
                                                                                                                                                                                                                                                                                                                                          t = x_72;
                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                          k_39 = t;
                                                                                                                                                                                                                                                                                                                                          t = z_72;
                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                          l_39 = t;
                                                                                                                                                                                                                                                                                                                                          t = SSL_pipe_term_to_child(j_39, k_39, l_39);
                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "SSL_kill"))
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                              ATerm t_39 = NULL,u_39 = NULL;
                                                                                                                                                                                                                                                                                                                                              t = e_73;
                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                  f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                  g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                              t = g_73;
                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                  x_72 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                  y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                              t = y_72;
                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                              t = f_73;
                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                              t_39 = t;
                                                                                                                                                                                                                                                                                                                                              t = x_72;
                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                              u_39 = t;
                                                                                                                                                                                                                                                                                                                                              t = SSL_kill(t_39, u_39);
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "SSL_exit"))
                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                  ATerm a_40 = NULL;
                                                                                                                                                                                                                                                                                                                                                  t = e_73;
                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                      f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                      g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                  t = g_73;
                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                  t = f_73;
                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                  a_40 = t;
                                                                                                                                                                                                                                                                                                                                                  t = SSL_exit(a_40);
                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "SSL_waitpid"))
                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                      ATerm g_40 = NULL;
                                                                                                                                                                                                                                                                                                                                                      t = e_73;
                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                          f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                          g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                      t = g_73;
                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                      t = f_73;
                                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                      g_40 = t;
                                                                                                                                                                                                                                                                                                                                                      t = SSL_waitpid(g_40);
                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "SSL_execvp"))
                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                          ATerm n_46 = NULL,o_46 = NULL;
                                                                                                                                                                                                                                                                                                                                                          t = e_73;
                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                              f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                              g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                          t = g_73;
                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                              x_72 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                              y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                          t = y_72;
                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                          t = f_73;
                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                          n_46 = t;
                                                                                                                                                                                                                                                                                                                                                          t = x_72;
                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                          o_46 = t;
                                                                                                                                                                                                                                                                                                                                                          t = SSL_execvp(n_46, o_46);
                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "SSL_fork"))
                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                              t = e_73;
                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                              t = SSL_fork();
                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "SSL_get_pid"))
                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                  t = e_73;
                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                  t = SSL_get_pid();
                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "SSL_TicksToSeconds"))
                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                      ATerm m_47 = NULL;
                                                                                                                                                                                                                                                                                                                                                                      t = e_73;
                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                          f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                          g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                      t = g_73;
                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                      t = f_73;
                                                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                      m_47 = t;
                                                                                                                                                                                                                                                                                                                                                                      t = SSL_TicksToSeconds(m_47);
                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "SSL_times"))
                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                          t = e_73;
                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                          t = SSL_times();
                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "SSL_clock"))
                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                              t = e_73;
                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                              t = SSL_clock();
                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "SSL_ClockToSeconds"))
                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                  ATerm s_48 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                  t = e_73;
                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                      f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                      g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                  t = g_73;
                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                  t = f_73;
                                                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                  s_48 = t;
                                                                                                                                                                                                                                                                                                                                                                                  t = SSL_ClockToSeconds(s_48);
                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "SSL_dtime"))
                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                      t = e_73;
                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                      t = SSL_dtime();
                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "SSL_epoch2UTC"))
                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                          t = e_73;
                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                              f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                              g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                          t = g_73;
                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                                                                                                                                                                            ATerm u_33 = t;
                                                                                                                                                                                                                                                                                                                                                                                            int v_33 = stack_ptr;
                                                                                                                                                                                                                                                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                                                                                                                                                ATerm o_53 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                t = f_73;
                                                                                                                                                                                                                                                                                                                                                                                                t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                o_53 = t;
                                                                                                                                                                                                                                                                                                                                                                                                t = SSL_epoch2UTC(o_53);
                                                                                                                                                                                                                                                                                                                                                                                                ;
                                                                                                                                                                                                                                                                                                                                                                                                LocalPopChoice(v_33);
                                                                                                                                                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                                                                                                                                                            else
                                                                                                                                                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                                                                                                                                                t = u_33;
                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                  ATerm e_56 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                  t = f_73;
                                                                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                  e_56 = t;
                                                                                                                                                                                                                                                                                                                                                                                                  t = SSL_epoch2UTC(e_56);
                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                                                                                                                                                          }
                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "SSL_epoch2localtime"))
                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                              ATerm z_69 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                              t = e_73;
                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                  f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                  g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                              t = g_73;
                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                              t = f_73;
                                                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                              z_69 = t;
                                                                                                                                                                                                                                                                                                                                                                                              t = SSL_epoch2localtime(z_69);
                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "SSL_now_epoch_time"))
                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                  t = e_73;
                                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                  t = SSL_now_epoch_time();
                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "SSL_time"))
                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                      t = e_73;
                                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                      t = SSL_time();
                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "SSL_table_rename"))
                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                          ATerm m_71 = NULL,u_71 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                          t = e_73;
                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                              f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                              g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                          t = g_73;
                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                              x_72 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                              y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                          t = y_72;
                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                          t = f_73;
                                                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                          m_71 = t;
                                                                                                                                                                                                                                                                                                                                                                                                          t = x_72;
                                                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                          u_71 = t;
                                                                                                                                                                                                                                                                                                                                                                                                          t = SSL_table_rename(m_71, u_71);
                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "SSL_table_keys"))
                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                              ATerm i_72 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                              t = e_73;
                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                  f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                  g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                              t = g_73;
                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                              t = f_73;
                                                                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                              i_72 = t;
                                                                                                                                                                                                                                                                                                                                                                                                              t = SSL_table_keys(i_72);
                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                              if(match_string(t, "SSL_table_remove"))
                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                  ATerm l_75 = NULL,w_75 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                  t = e_73;
                                                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                      f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                      g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                  t = g_73;
                                                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                      x_72 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                      y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                  t = y_72;
                                                                                                                                                                                                                                                                                                                                                                                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                  t = f_73;
                                                                                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                  l_75 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                  t = x_72;
                                                                                                                                                                                                                                                                                                                                                                                                                  t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                  w_75 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                  t = SSL_table_remove(l_75, w_75);
                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                  if(match_string(t, "SSL_table_get"))
                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                      ATerm j_76 = NULL,k_76 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                      t = e_73;
                                                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                                          f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                          g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                      t = g_73;
                                                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                                          x_72 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                          y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                      t = y_72;
                                                                                                                                                                                                                                                                                                                                                                                                                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                      t = f_73;
                                                                                                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                      j_76 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                      t = x_72;
                                                                                                                                                                                                                                                                                                                                                                                                                      t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                      k_76 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                      t = SSL_table_get(j_76, k_76);
                                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                                  else
                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                      if(match_string(t, "SSL_table_put"))
                                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                                          ATerm h_78 = NULL,i_78 = NULL,j_78 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = e_73;
                                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                              f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                              g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          t = g_73;
                                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                              x_72 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                              y_72 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          t = y_72;
                                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                              z_72 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                              a_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          t = a_73;
                                                                                                                                                                                                                                                                                                                                                                                                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                            _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          t = f_73;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          h_78 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = x_72;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          i_78 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = z_72;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                          j_78 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                          t = SSL_table_put(h_78, i_78, j_78);
                                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                      else
                                                                                                                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                                                                                                                          if(match_string(t, "SSL_table_destroy"))
                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                              ATerm q_78 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = e_73;
                                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                                  f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                  g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t = g_73;
                                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t = f_73;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              q_78 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = SSL_table_destroy(q_78);
                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                          else
                                                                                                                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                                              ATerm j_79 = NULL;
                                                                                                                                                                                                                                                                                                                                                                                                                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("SSL_table_create", 0, ATtrue)))
                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t = e_73;
                                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                                                                                                                                  f_73 = ATgetFirst((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                  g_73 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                                              else
                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t = g_73;
                                                                                                                                                                                                                                                                                                                                                                                                                              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                                                                                                                                                                                                                                                                                                                _fail(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              t = f_73;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = EvalTerm_0_0(t);
                                                                                                                                                                                                                                                                                                                                                                                                                              j_79 = t;
                                                                                                                                                                                                                                                                                                                                                                                                                              t = SSL_table_create(j_79);
                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                }
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                }
                                                                                                                                                                                                            }
                                                                                                                                                                                                        }
                                                                                                                                                                                                    }
                                                                                                                                                                                                }
                                                                                                                                                                                            }
                                                                                                                                                                                        }
                                                                                                                                                                                    }
                                                                                                                                                                                }
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                    }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
ATerm EvalWhere_1_0 (ATerm d_157 (ATerm), ATerm t)
{
  ATerm f_79 = NULL,g_79 = NULL;
  if(match_cons(t, sym_App_2))
    {
      ATerm w_33 = ATgetArgument(t, 0);
      if(match_cons(w_33, sym_Where_1))
        {
          f_79 = ATgetArgument(w_33, 0);
        }
      else
        _fail(t);
      g_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_App_2, f_79, g_79);
  t = d_157(t);
  {
    ATerm x_33 = t;
    if((PushChoice() == 0))
      {
        if(!(match_cons(t, sym_Fail_0)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_33;
      }
    t = g_79;
  }
  return(t);
}
ATerm fold_op_0_0 (ATerm t)
{
  ATerm a_81 (ATerm r_79, ATerm x_79, ATerm y_79, ATerm t)
  {
    t = SSL_mkterm(r_79, x_79);
    return(t);
  }
  ATerm b_80 = NULL,d_80 = NULL,e_80 = NULL,j_80 = NULL,k_80 = NULL,m_80 = NULL,n_80 = NULL;
  k_80 = t;
  if(match_cons(t, sym_Op_2))
    {
      m_80 = ATgetArgument(t, 0);
      n_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_80;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_80 = ATgetFirst((ATermList) t);
      d_80 = (ATerm) ATgetNext((ATermList) t);
      t = d_80;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_80 = ATgetFirst((ATermList) t);
          j_80 = (ATerm) ATgetNext((ATermList) t);
          t = j_80;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = m_80;
              if(match_string(t, "Cons"))
                {
                  ATerm y_33 = t;
                  int z_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATinsert(CheckATermList(e_80), b_80);
                      ;
                      LocalPopChoice(z_33);
                    }
                  else
                    {
                      t = y_33;
                      t = a_81(m_80, n_80, k_80, t);
                    }
                }
              else
                {
                  t = a_81(m_80, n_80, k_80, t);
                }
            }
          else
            {
              t = m_80;
              t = a_81(m_80, n_80, k_80, t);
            }
        }
      else
        {
          t = m_80;
          t = a_81(m_80, n_80, k_80, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = m_80;
          if(match_string(t, "Nil"))
            {
              ATerm a_34 = t;
              int e_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = (ATerm) ATempty;
                  ;
                  LocalPopChoice(e_34);
                }
              else
                {
                  t = a_34;
                  t = a_81(m_80, n_80, k_80, t);
                }
            }
          else
            {
              t = a_81(m_80, n_80, k_80, t);
            }
        }
      else
        {
          t = m_80;
          t = a_81(m_80, n_80, k_80, t);
        }
    }
  return(t);
}
ATerm SubsVar_0_0 (ATerm t)
{
  ATerm b_81 = NULL,p_79 = NULL;
  b_81 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm f_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("tenv", 0, ATtrue)), b_81);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_79 = ATgetFirst((ATermList) t);
      {
        ATerm g_34 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = p_79;
  {
    ATerm h_34 = t;
    if((PushChoice() == 0))
      {
        if(!(match_cons(t, sym_NULL_0)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_34;
      }
    t = p_79;
  }
  return(t);
}
ATerm EvalTerm_0_0 (ATerm t)
{
  ATerm i_34 = t;
  int k_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SubsVar_0_0(t);
      ;
      LocalPopChoice(k_34);
    }
  else
    {
      t = i_34;
      {
        ATerm l_34 = t;
        int m_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_3 (ATerm t)
            {
              t = map_1_0(EvalTerm_0_0, t);
              return(t);
            }
            t = Op_2_0(_id, x_3, t);
            t = fold_op_0_0(t);
            ;
            LocalPopChoice(m_34);
          }
        else
          {
            t = l_34;
            {
              ATerm f_81 = NULL;
              if(match_cons(t, sym_Real_1))
                {
                  f_81 = ATgetArgument(t, 0);
                  t = f_81;
                }
              else
                {
                  if(match_cons(t, sym_Str_1))
                    {
                      f_81 = ATgetArgument(t, 0);
                      t = f_81;
                    }
                  else
                    {
                      if(match_cons(t, sym_Int_1))
                        {
                          f_81 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = f_81;
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm EvalBuild_0_0 (ATerm t)
{
  ATerm k_81 = NULL;
  if(match_cons(t, sym_App_2))
    {
      ATerm n_34 = ATgetArgument(t, 0);
      if(match_cons(n_34, sym_Build_1))
        {
          k_81 = ATgetArgument(n_34, 0);
        }
      else
        _fail(t);
      {
        ATerm o_34 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = k_81;
  t = EvalTerm_0_0(t);
  return(t);
}
ATerm table_replace_0_0 (ATerm t)
{
  ATerm l_81 = NULL,m_81 = NULL,n_81 = NULL,o_81 = NULL;
  if(match_cons(t, sym__3))
    {
      l_81 = ATgetArgument(t, 0);
      m_81 = ATgetArgument(t, 1);
      n_81 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_get(l_81, m_81);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_34 = ATgetFirst((ATermList) t);
      o_81 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_table_put(l_81, m_81, (ATerm) ATinsert(CheckATermList(o_81), n_81));
  t = (ATerm) ATmakeAppl(sym__3, l_81, m_81, n_81);
  return(t);
}
ATerm BindVar_0_0 (ATerm t)
{
  ATerm n_82 = NULL,o_82 = NULL;
  if(match_cons(t, sym__2))
    {
      n_82 = ATgetArgument(t, 0);
      o_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_4 (ATerm t)
    {
      ATerm b_4 (ATerm t)
      {
        t = term_r_34;
        return(t);
      }
      t = debug_1_0(b_4, t);
      return(t);
    }
    t = ifdebug_1_0(a_4, t);
    {
      ATerm s_34 = t;
      int t_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_79 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("tenv", 0, ATtrue)), n_82);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              w_79 = ATgetFirst((ATermList) t);
              {
                ATerm u_34 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = w_79;
          if(match_cons(t, sym_NULL_0))
            {
              ATerm v_34 = t;
              int w_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_79;
                  if((o_82 != t))
                    {
                      _fail(t);
                    }
                  t = w_79;
                  ;
                  LocalPopChoice(w_34);
                }
              else
                {
                  t = v_34;
                  t = (ATerm) ATmakeAppl(sym__3, term_j_32, n_82, o_82);
                  t = table_replace_0_0(t);
                }
            }
          else
            {
              t = w_79;
              if((o_82 != t))
                {
                  _fail(t);
                }
              t = w_79;
            }
          ;
          LocalPopChoice(t_34);
        }
      else
        {
          t = s_34;
          t = (ATerm) ATmakeAppl(sym__3, term_j_32, n_82, o_82);
          t = table_push_0_0(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, n_82, o_82);
    }
  }
  return(t);
}
ATerm PatDecompose_0_0 (ATerm t)
{
  ATerm q_86 = NULL,r_86 = NULL,s_86 = NULL,t_86 = NULL,u_86 = NULL,v_86 = NULL,w_86 = NULL;
  q_86 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_86 = ATgetFirst((ATermList) t);
      w_86 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_86;
  if(match_cons(t, sym__2))
    {
      s_86 = ATgetArgument(t, 0);
      v_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_86;
  if(match_cons(t, sym_Real_1))
    {
      t_86 = ATgetArgument(t, 0);
      t = v_86;
      if((t_86 != t))
        {
          _fail(t);
        }
      t = w_86;
    }
  else
    {
      if(match_cons(t, sym_Str_1))
        {
          t_86 = ATgetArgument(t, 0);
          t = v_86;
          if((t_86 != t))
            {
              _fail(t);
            }
          t = w_86;
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              t_86 = ATgetArgument(t, 0);
              t = v_86;
              if((t_86 != t))
                {
                  _fail(t);
                }
              t = w_86;
            }
          else
            {
              ATerm r_80 = NULL,s_80 = NULL;
              if(match_cons(t, sym_Op_2))
                {
                  t_86 = ATgetArgument(t, 0);
                  u_86 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_explode_term(v_86);
              if(match_cons(t, sym__2))
                {
                  if((t_86 != ATgetArgument(t, 0)))
                    {
                      _fail(ATgetArgument(t, 0));
                    }
                  r_80 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, u_86, r_80);
              t = zip_1_0(_id, t);
              s_80 = t;
              t = (ATerm) ATmakeAppl(sym__2, s_80, w_86);
              t = conc_0_0(t);
            }
        }
    }
  return(t);
}
ATerm MatchVar_1_0 (ATerm d_154 (ATerm), ATerm t)
{
  ATerm n_87 = NULL,p_87 = NULL,q_87 = NULL,s_87 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_34 = ATgetArgument(t, 0);
      if(((ATgetType(z_34) == AT_LIST) && !(ATisEmpty(z_34))))
        {
          ATerm a_35 = ATgetFirst((ATermList) z_34);
          if(match_cons(a_35, sym__2))
            {
              n_87 = ATgetArgument(a_35, 0);
              p_87 = ATgetArgument(a_35, 1);
            }
          else
            _fail(t);
          q_87 = (ATerm) ATgetNext((ATermList) z_34);
        }
      else
        _fail(t);
      s_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_87;
  t = d_154(t);
  t = s_87;
  {
    ATerm b_35 = t;
    if((PushChoice() == 0))
      {
        ATerm c_4 (ATerm t)
        {
          ATerm t_87 = NULL;
          if(match_cons(t, sym__2))
            {
              if((n_87 != ATgetArgument(t, 0)))
                {
                  _fail(ATgetArgument(t, 0));
                }
              t_87 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, p_87, t_87);
          {
            ATerm c_35 = t;
            if((PushChoice() == 0))
              {
                ATerm v_87 = NULL;
                if(match_cons(t, sym__2))
                  {
                    v_87 = ATgetArgument(t, 0);
                    if((v_87 != ATgetArgument(t, 1)))
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
                t = c_35;
              }
          }
          return(t);
        }
        t = fetch_1_0(c_4, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_35;
      }
    t = (ATerm) ATmakeAppl(sym__2, q_87, (ATerm) ATinsert(CheckATermList(s_87), (ATerm) ATmakeAppl(sym__2, n_87, p_87)));
  }
  return(t);
}
ATerm while_not_2_0 (ATerm u_127 (ATerm), ATerm v_127 (ATerm), ATerm t)
{
  ATerm w_87 (ATerm t)
  {
    ATerm d_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_127(t);
        ;
        LocalPopChoice(e_35);
      }
    else
      {
        t = d_35;
        t = v_127(t);
        t = w_87(t);
      }
    return(t);
  }
  t = w_87(t);
  return(t);
}
ATerm for_3_0 (ATerm x_127 (ATerm), ATerm y_127 (ATerm), ATerm z_127 (ATerm), ATerm t)
{
  t = x_127(t);
  t = while_not_2_0(y_127, z_127, t);
  return(t);
}
ATerm stratego_match_1_0 (ATerm b_157 (ATerm), ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    ATerm x_87 = NULL;
    x_87 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_87, (ATerm) ATempty);
    return(t);
  }
  ATerm f_4 (ATerm t)
  {
    ATerm z_87 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm f_35 = ATgetArgument(t, 0);
        if(((ATgetType(f_35) != AT_LIST) || !(ATisEmpty(f_35))))
          _fail(t);
        z_87 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = z_87;
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    ATerm j_4 (ATerm t)
    {
      ATerm k_4 (ATerm t)
      {
        t = term_i_35;
        return(t);
      }
      t = debug_1_0(k_4, t);
      return(t);
    }
    t = ifdebug_1_0(j_4, t);
    {
      ATerm j_35 = t;
      int k_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_4 (ATerm t)
          {
            ATerm a_88 = NULL,b_88 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_35 = ATgetFirst((ATermList) t);
                if(match_cons(l_35, sym__2))
                  {
                    a_88 = ATgetArgument(l_35, 0);
                    if((a_88 != ATgetArgument(l_35, 1)))
                      {
                        _fail(ATgetArgument(l_35, 1));
                      }
                  }
                else
                  _fail(t);
                b_88 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_88;
            return(t);
          }
          t = _2_0(l_4, _id, t);
          ;
          LocalPopChoice(k_35);
        }
      else
        {
          t = j_35;
          {
            ATerm m_35 = t;
            int n_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = MatchVar_1_0(b_157, t);
                ;
                LocalPopChoice(n_35);
              }
            else
              {
                t = m_35;
                {
                  ATerm o_35 = t;
                  int r_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_4 (ATerm t)
                      {
                        ATerm d_88 = NULL;
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm s_35 = ATgetFirst((ATermList) t);
                            if(match_cons(s_35, sym__2))
                              {
                                ATerm t_35 = ATgetArgument(s_35, 0);
                                if(!(match_cons(t_35, sym_Wld_0)))
                                  _fail(t);
                                {
                                  ATerm u_35 = ATgetArgument(s_35, 1);
                                }
                              }
                            else
                              _fail(t);
                            d_88 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = d_88;
                        return(t);
                      }
                      t = _2_0(n_4, _id, t);
                      ;
                      LocalPopChoice(r_35);
                    }
                  else
                    {
                      t = o_35;
                      t = _2_0(PatDecompose_0_0, _id, t);
                    }
                }
              }
          }
        }
      {
        ATerm q_4 (ATerm t)
        {
          ATerm r_4 (ATerm t)
          {
            t = term_v_35;
            return(t);
          }
          t = debug_1_0(r_4, t);
          return(t);
        }
        t = ifdebug_1_0(q_4, t);
      }
    }
    return(t);
  }
  t = for_3_0(d_4, f_4, i_4, t);
  return(t);
}
ATerm EvalMatch_0_0 (ATerm t)
{
  ATerm e_88 = NULL,f_88 = NULL;
  if(match_cons(t, sym_App_2))
    {
      ATerm w_35 = ATgetArgument(t, 0);
      if(match_cons(w_35, sym_Match_1))
        {
          e_88 = ATgetArgument(w_35, 0);
        }
      else
        _fail(t);
      f_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_88, f_88));
  {
    ATerm s_4 (ATerm t)
    {
      t = Var_1_0(_id, t);
      return(t);
    }
    t = stratego_match_1_0(s_4, t);
    {
      ATerm a_5 (ATerm t)
      {
        ATerm b_5 (ATerm t)
        {
          t = term_x_35;
          return(t);
        }
        t = debug_1_0(b_5, t);
        return(t);
      }
      t = ifdebug_1_0(a_5, t);
      t = map_1_0(BindVar_0_0, t);
      t = f_88;
    }
  }
  return(t);
}
ATerm EvalScope_1_0 (ATerm c_157 (ATerm), ATerm t)
{
  ATerm h_88 = NULL,i_88 = NULL,j_88 = NULL,l_88 = NULL;
  if(match_cons(t, sym_App_2))
    {
      ATerm a_36 = ATgetArgument(t, 0);
      if(match_cons(a_36, sym_Scope_2))
        {
          h_88 = ATgetArgument(a_36, 0);
          i_88 = ATgetArgument(a_36, 1);
        }
      else
        _fail(t);
      j_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_88;
  {
    ATerm c_5 (ATerm t)
    {
      ATerm m_88 = NULL;
      m_88 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_32, (ATerm)ATmakeAppl(sym_Var_1, m_88), term_b_36);
      t = table_push_0_0(t);
      return(t);
    }
    t = map_1_0(c_5, t);
    t = (ATerm) ATmakeAppl(sym_App_2, i_88, j_88);
    t = c_157(t);
    l_88 = t;
    t = h_88;
    {
      ATerm l_5 (ATerm t)
      {
        ATerm n_88 = NULL;
        n_88 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_32, (ATerm) ATmakeAppl(sym_Var_1, n_88));
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(l_5, t);
      t = l_88;
    }
  }
  return(t);
}
ATerm EvalCong_1_0 (ATerm z_156 (ATerm), ATerm t)
{
  ATerm p_88 = NULL,q_88 = NULL,r_88 = NULL,s_88 = NULL,t_88 = NULL;
  if(match_cons(t, sym_App_2))
    {
      ATerm c_36 = ATgetArgument(t, 0);
      if(match_cons(c_36, sym_Cong_2))
        {
          p_88 = ATgetArgument(c_36, 0);
          q_88 = ATgetArgument(c_36, 1);
        }
      else
        _fail(t);
      r_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(r_88);
  if(match_cons(t, sym__2))
    {
      if((p_88 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      s_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_88, s_88);
  {
    ATerm m_5 (ATerm t)
    {
      ATerm u_88 = NULL,v_88 = NULL;
      if(match_cons(t, sym__2))
        {
          u_88 = ATgetArgument(t, 0);
          v_88 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_App_2, u_88, v_88);
      t = z_156(t);
      {
        ATerm d_36 = t;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = d_36;
          }
      }
      return(t);
    }
    t = zip_1_0(m_5, t);
    t_88 = t;
    t = SSL_mkterm(p_88, t_88);
  }
  return(t);
}
ATerm EvalOne_1_0 (ATerm y_156 (ATerm), ATerm t)
{
  ATerm w_88 = NULL,x_88 = NULL,y_88 = NULL,z_88 = NULL,a_89 = NULL;
  if(match_cons(t, sym_App_2))
    {
      ATerm e_36 = ATgetArgument(t, 0);
      if(match_cons(e_36, sym_One_1))
        {
          w_88 = ATgetArgument(e_36, 0);
        }
      else
        _fail(t);
      x_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(x_88);
  if(match_cons(t, sym__2))
    {
      y_88 = ATgetArgument(t, 0);
      z_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_88;
  {
    ATerm n_5 (ATerm t)
    {
      ATerm b_89 = NULL;
      b_89 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, w_88, b_89);
      t = y_156(t);
      {
        ATerm g_36 = t;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = g_36;
          }
      }
      return(t);
    }
    t = fetch_1_0(n_5, t);
    a_89 = t;
    t = SSL_mkterm(y_88, a_89);
  }
  return(t);
}
ATerm EvalAll_1_0 (ATerm j_0 (ATerm), ATerm t)
{
  ATerm v_89 = NULL,w_89 = NULL,x_89 = NULL,y_89 = NULL;
  v_89 = t;
  if(match_cons(t, sym_App_2))
    {
      w_89 = ATgetArgument(t, 0);
      y_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_89;
  if(match_cons(t, sym_All_1))
    {
      x_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_36 = t;
    int i_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_is_string(y_89);
        t = y_89;
        ;
        LocalPopChoice(i_36);
      }
    else
      {
        t = h_36;
        {
          ATerm t_81 = NULL,u_81 = NULL,v_81 = NULL;
          t = SSL_explode_term(y_89);
          if(match_cons(t, sym__2))
            {
              t_81 = ATgetArgument(t, 0);
              u_81 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_89;
          {
            ATerm j_36 = t;
            if((PushChoice() == 0))
              {
                ATerm w_81 = NULL;
                w_81 = t;
                t = SSL_is_string(w_81);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = j_36;
              }
            t = u_81;
            {
              ATerm u_5 (ATerm t)
              {
                ATerm x_81 = NULL;
                x_81 = t;
                t = (ATerm) ATmakeAppl(sym_App_2, x_89, x_81);
                t = j_0(t);
                {
                  ATerm k_36 = t;
                  if((PushChoice() == 0))
                    {
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = k_36;
                    }
                }
                return(t);
              }
              t = map_1_0(u_5, t);
              v_81 = t;
              t = SSL_mkterm(t_81, v_81);
            }
          }
        }
      }
  }
  return(t);
}
ATerm EvalLet_1_0 (ATerm i_157 (ATerm), ATerm t)
{
  ATerm b_90 = NULL,c_90 = NULL,d_90 = NULL,e_90 = NULL;
  if(match_cons(t, sym_App_2))
    {
      ATerm m_36 = ATgetArgument(t, 0);
      if(match_cons(m_36, sym_Let_2))
        {
          b_90 = ATgetArgument(m_36, 0);
          c_90 = ATgetArgument(m_36, 1);
        }
      else
        _fail(t);
      d_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_90;
  {
    ATerm v_5 (ATerm t)
    {
      ATerm f_90 = NULL,g_90 = NULL,h_90 = NULL,i_90 = NULL;
      f_90 = t;
      if(match_cons(t, sym_SDef_3))
        {
          g_90 = ATgetArgument(t, 0);
          h_90 = ATgetArgument(t, 1);
          {
            ATerm n_36 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = h_90;
      t = length_0_0(t);
      i_90 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_23, (ATerm)ATmakeAppl(sym__2, g_90, i_90), f_90);
      t = table_push_0_0(t);
      return(t);
    }
    t = map_1_0(v_5, t);
    t = (ATerm) ATmakeAppl(sym_App_2, c_90, d_90);
    t = i_157(t);
    e_90 = t;
    t = b_90;
    {
      ATerm w_5 (ATerm t)
      {
        ATerm j_90 = NULL,k_90 = NULL,l_90 = NULL;
        if(match_cons(t, sym_SDef_3))
          {
            j_90 = ATgetArgument(t, 0);
            k_90 = ATgetArgument(t, 1);
            {
              ATerm o_36 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = k_90;
        t = length_0_0(t);
        l_90 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_l_23, (ATerm) ATmakeAppl(sym__2, j_90, l_90));
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(w_5, t);
      t = e_90;
    }
  }
  return(t);
}
ATerm EvalCallFail_0_0 (ATerm t)
{
  ATerm m_90 = NULL,n_90 = NULL,o_90 = NULL;
  if(match_cons(t, sym_App_2))
    {
      ATerm p_36 = ATgetArgument(t, 0);
      if(match_cons(p_36, sym_Call_2))
        {
          ATerm s_36 = ATgetArgument(p_36, 0);
          if(match_cons(s_36, sym_SVar_1))
            {
              m_90 = ATgetArgument(s_36, 0);
            }
          else
            _fail(t);
          n_90 = ATgetArgument(p_36, 1);
        }
      else
        _fail(t);
      {
        ATerm q_36 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = n_90;
  t = length_0_0(t);
  o_90 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_36), o_90), term_u_36), m_90), term_t_36);
  t = fatal_error_0_0(t);
  t = term_w_36;
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm r_90 = NULL,s_90 = NULL,t_90 = NULL;
  if(match_cons(t, sym__2))
    {
      r_90 = ATgetArgument(t, 0);
      s_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_36 = t;
    int y_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_81 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm b_37 = ATgetArgument(t, 0);
            ATerm c_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(r_90, s_90);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_37 = ATgetFirst((ATermList) t);
            z_81 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_81;
        ;
        LocalPopChoice(y_36);
      }
    else
      {
        t = x_36;
        t = (ATerm) ATempty;
      }
    t_90 = t;
    t = SSL_table_put(r_90, s_90, t_90);
    t = (ATerm) ATmakeAppl(sym__2, r_90, s_90);
  }
  return(t);
}
ATerm zip_1_0 (ATerm c_136 (ATerm), ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm e_37 = ATgetArgument(t, 0);
        if(((ATgetType(e_37) != AT_LIST) || !(ATisEmpty(e_37))))
          _fail(t);
        {
          ATerm f_37 = ATgetArgument(t, 1);
          if(((ATgetType(f_37) != AT_LIST) || !(ATisEmpty(f_37))))
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
    ATerm z_90 = NULL,a_91 = NULL,b_91 = NULL,c_91 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm g_37 = ATgetArgument(t, 0);
        if(((ATgetType(g_37) == AT_LIST) && !(ATisEmpty(g_37))))
          {
            z_90 = ATgetFirst((ATermList) g_37);
            b_91 = (ATerm) ATgetNext((ATermList) g_37);
          }
        else
          _fail(t);
        {
          ATerm h_37 = ATgetArgument(t, 1);
          if(((ATgetType(h_37) == AT_LIST) && !(ATisEmpty(h_37))))
            {
              a_91 = ATgetFirst((ATermList) h_37);
              c_91 = (ATerm) ATgetNext((ATermList) h_37);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_90, a_91), (ATerm) ATmakeAppl(sym__2, b_91, c_91));
    return(t);
  }
  ATerm e_6 (ATerm t)
  {
    ATerm d_91 = NULL,e_91 = NULL;
    if(match_cons(t, sym__2))
      {
        d_91 = ATgetArgument(t, 0);
        e_91 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(e_91), d_91);
    return(t);
  }
  t = genzip_4_0(a_6, c_6, e_6, c_136, t);
  return(t);
}
ATerm foldr_3_0 (ATerm x_139 (ATerm), ATerm y_139 (ATerm), ATerm z_139 (ATerm), ATerm t)
{
  ATerm k_37 = t;
  int l_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_139(t);
      ;
      LocalPopChoice(l_37);
    }
  else
    {
      t = k_37;
      {
        ATerm a_92 = NULL,b_92 = NULL,e_92 = NULL,f_92 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_92 = ATgetFirst((ATermList) t);
            b_92 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_92;
        t = z_139(t);
        e_92 = t;
        t = b_92;
        t = foldr_3_0(x_139, y_139, z_139, t);
        f_92 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_92, f_92);
        t = y_139(t);
      }
    }
  return(t);
}
ATerm length_0_0 (ATerm t)
{
  ATerm f_6 (ATerm t)
  {
    t = term_m_37;
    return(t);
  }
  ATerm g_6 (ATerm t)
  {
    ATerm g_92 = NULL,h_92 = NULL;
    if(match_cons(t, sym__2))
      {
        g_92 = ATgetArgument(t, 0);
        h_92 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm n_37 = t;
      int o_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(g_92, h_92);
          ;
          LocalPopChoice(o_37);
        }
      else
        {
          t = n_37;
          t = SSL_addr(g_92, h_92);
        }
    }
    return(t);
  }
  ATerm h_6 (ATerm t)
  {
    t = term_u_23;
    return(t);
  }
  t = foldr_3_0(f_6, g_6, h_6, t);
  return(t);
}
ATerm EvalCall_1_0 (ATerm h_157 (ATerm), ATerm t)
{
  ATerm j_92 = NULL,k_92 = NULL,l_92 = NULL,m_92 = NULL,n_92 = NULL,o_92 = NULL,p_92 = NULL,q_92 = NULL,f_82 = NULL;
  if(match_cons(t, sym_App_2))
    {
      ATerm p_37 = ATgetArgument(t, 0);
      if(match_cons(p_37, sym_Call_2))
        {
          ATerm q_37 = ATgetArgument(p_37, 0);
          if(match_cons(q_37, sym_SVar_1))
            {
              j_92 = ATgetArgument(q_37, 0);
            }
          else
            _fail(t);
          k_92 = ATgetArgument(p_37, 1);
        }
      else
        _fail(t);
      l_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_92;
  t = length_0_0(t);
  m_92 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("senv", 0, ATtrue)), (ATerm) ATmakeAppl(sym__2, j_92, m_92));
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_82 = ATgetFirst((ATermList) t);
      {
        ATerm t_37 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = f_82;
  if(match_cons(t, sym_SDef_3))
    {
      if((j_92 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      n_92 = ATgetArgument(t, 1);
      o_92 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = n_92;
  {
    ATerm i_6 (ATerm t)
    {
      ATerm s_92 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_92 = ATgetArgument(t, 0);
          t = s_92;
        }
      else
        {
          if(match_cons(t, sym_VarDec_2))
            {
              s_92 = ATgetArgument(t, 0);
              {
                ATerm u_37 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = s_92;
        }
      return(t);
    }
    t = map_1_0(i_6, t);
    p_92 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_92, k_92);
    {
      ATerm n_6 (ATerm t)
      {
        ATerm w_92 = NULL,x_92 = NULL;
        if(match_cons(t, sym__2))
          {
            w_92 = ATgetArgument(t, 0);
            x_92 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, term_l_23, (ATerm)ATmakeAppl(sym__2, w_92, term_m_37), (ATerm) ATmakeAppl(sym_SDef_3, w_92, (ATerm)ATempty, x_92));
        t = table_push_0_0(t);
        return(t);
      }
      t = zip_1_0(n_6, t);
      t = (ATerm) ATmakeAppl(sym_App_2, o_92, l_92);
      t = h_157(t);
      q_92 = t;
      t = p_92;
      {
        ATerm o_6 (ATerm t)
        {
          ATerm y_92 = NULL;
          y_92 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_l_23, (ATerm) ATmakeAppl(sym__2, y_92, term_m_37));
          t = table_pop_0_0(t);
          return(t);
        }
        t = map_1_0(o_6, t);
        t = q_92;
      }
    }
  }
  return(t);
}
ATerm EvalLChoice_1_0 (ATerm g_157 (ATerm), ATerm t)
{
  ATerm z_92 = NULL,a_93 = NULL,b_93 = NULL;
  if(match_cons(t, sym_App_2))
    {
      ATerm v_37 = ATgetArgument(t, 0);
      if(match_cons(v_37, sym_LChoice_2))
        {
          z_92 = ATgetArgument(v_37, 0);
          a_93 = ATgetArgument(v_37, 1);
        }
      else
        _fail(t);
      b_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_37 = t;
    int x_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_App_2, z_92, b_93);
        t = g_157(t);
        {
          ATerm z_37 = t;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = z_37;
            }
        }
        ;
        LocalPopChoice(x_37);
      }
    else
      {
        t = w_37;
        {
          ATerm a_38 = t;
          int b_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_App_2, a_93, b_93);
              t = g_157(t);
              {
                ATerm c_38 = t;
                if((PushChoice() == 0))
                  {
                    if(!(match_cons(t, sym_Fail_0)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = c_38;
                  }
              }
              ;
              LocalPopChoice(b_38);
            }
          else
            {
              t = a_38;
              t = term_w_36;
            }
        }
      }
  }
  return(t);
}
ATerm EvalChoice_1_0 (ATerm f_157 (ATerm), ATerm t)
{
  ATerm c_93 = NULL,d_93 = NULL,e_93 = NULL;
  if(match_cons(t, sym_App_2))
    {
      ATerm d_38 = ATgetArgument(t, 0);
      if(match_cons(d_38, sym_Choice_2))
        {
          c_93 = ATgetArgument(d_38, 0);
          d_93 = ATgetArgument(d_38, 1);
        }
      else
        _fail(t);
      e_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_38 = t;
    int f_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_App_2, c_93, e_93);
        t = f_157(t);
        {
          ATerm i_38 = t;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_38;
            }
        }
        ;
        LocalPopChoice(f_38);
      }
    else
      {
        t = e_38;
        {
          ATerm j_38 = t;
          int k_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_App_2, d_93, e_93);
              t = f_157(t);
              {
                ATerm l_38 = t;
                if((PushChoice() == 0))
                  {
                    if(!(match_cons(t, sym_Fail_0)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = l_38;
                  }
              }
              ;
              LocalPopChoice(k_38);
            }
          else
            {
              t = j_38;
              t = term_w_36;
            }
        }
      }
  }
  return(t);
}
ATerm EvalNot_1_0 (ATerm e_157 (ATerm), ATerm t)
{
  ATerm f_93 = NULL,g_93 = NULL;
  if(match_cons(t, sym_App_2))
    {
      ATerm m_38 = ATgetArgument(t, 0);
      if(match_cons(m_38, sym_Not_1))
        {
          f_93 = ATgetArgument(m_38, 0);
        }
      else
        _fail(t);
      g_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_38 = t;
    int o_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_App_2, f_93, g_93);
        t = e_157(t);
        if(!(match_cons(t, sym_Fail_0)))
          _fail(t);
        t = g_93;
        ;
        LocalPopChoice(o_38);
      }
    else
      {
        t = n_38;
        t = term_w_36;
      }
  }
  return(t);
}
ATerm eval_0_0 (ATerm t)
{
  ATerm p_6 (ATerm t)
  {
    t = App_2_0(_id, eval_0_0, t);
    return(t);
  }
  t = try_1_0(p_6, t);
  {
    ATerm r_6 (ATerm t)
    {
      ATerm t_6 (ATerm t)
      {
        t = term_r_38;
        return(t);
      }
      t = debug_1_0(t_6, t);
      return(t);
    }
    t = ifdebug_1_0(r_6, t);
    {
      ATerm u_6 (ATerm t)
      {
        ATerm s_38 = t;
        int t_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_94 = NULL,f_94 = NULL,g_94 = NULL;
            if(match_cons(t, sym_App_2))
              {
                e_94 = ATgetArgument(t, 0);
                g_94 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = g_94;
            if(match_cons(t, sym_Fail_0))
              {
                t = e_94;
                if(match_cons(t, sym_Id_0))
                  {
                    ATerm u_38 = t;
                    int v_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = g_94;
                        ;
                        LocalPopChoice(v_38);
                      }
                    else
                      {
                        t = u_38;
                        t = term_w_36;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = term_w_36;
                      }
                    else
                      {
                        if(match_cons(t, sym_Test_1))
                          {
                            f_94 = ATgetArgument(t, 0);
                            {
                              ATerm w_38 = t;
                              int x_38 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = term_w_36;
                                  ;
                                  LocalPopChoice(x_38);
                                }
                              else
                                {
                                  t = w_38;
                                  t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Seq_2, f_94, (ATerm) ATmakeAppl(sym_Build_1, g_94)), g_94);
                                  t = try_1_0(eval_0_0, t);
                                }
                            }
                          }
                        else
                          {
                            t = term_w_36;
                          }
                      }
                  }
              }
            else
              {
                t = e_94;
                if(match_cons(t, sym_Id_0))
                  {
                    t = g_94;
                  }
                else
                  {
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = term_w_36;
                      }
                    else
                      {
                        if(match_cons(t, sym_Test_1))
                          {
                            f_94 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Seq_2, f_94, (ATerm) ATmakeAppl(sym_Build_1, g_94)), g_94);
                        t = try_1_0(eval_0_0, t);
                      }
                  }
              }
            ;
            LocalPopChoice(t_38);
          }
        else
          {
            t = s_38;
            {
              ATerm a_39 = t;
              int b_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = EvalNot_1_0(eval_0_0, t);
                  ;
                  LocalPopChoice(b_39);
                }
              else
                {
                  t = a_39;
                  {
                    ATerm c_39 = t;
                    int d_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_94 = NULL,p_94 = NULL,q_94 = NULL,r_94 = NULL;
                        if(match_cons(t, sym_App_2))
                          {
                            o_94 = ATgetArgument(t, 0);
                            r_94 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = o_94;
                        if(match_cons(t, sym_Seq_2))
                          {
                            p_94 = ATgetArgument(t, 0);
                            q_94 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_App_2, q_94, (ATerm) ATmakeAppl(sym_App_2, p_94, r_94));
                        t = try_1_0(eval_0_0, t);
                        ;
                        LocalPopChoice(d_39);
                      }
                    else
                      {
                        t = c_39;
                        {
                          ATerm e_39 = t;
                          int f_39 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = EvalChoice_1_0(eval_0_0, t);
                              ;
                              LocalPopChoice(f_39);
                            }
                          else
                            {
                              t = e_39;
                              {
                                ATerm g_39 = t;
                                int h_39 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EvalLChoice_1_0(eval_0_0, t);
                                    ;
                                    LocalPopChoice(h_39);
                                  }
                                else
                                  {
                                    t = g_39;
                                    {
                                      ATerm i_39 = t;
                                      int m_39 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm n_39 = t;
                                          int o_39 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = EvalCall_1_0(eval_0_0, t);
                                              ;
                                              LocalPopChoice(o_39);
                                            }
                                          else
                                            {
                                              t = n_39;
                                              t = EvalCallFail_0_0(t);
                                            }
                                          ;
                                          LocalPopChoice(m_39);
                                        }
                                      else
                                        {
                                          t = i_39;
                                          {
                                            ATerm p_39 = t;
                                            int q_39 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = EvalLet_1_0(eval_0_0, t);
                                                ;
                                                LocalPopChoice(q_39);
                                              }
                                            else
                                              {
                                                t = p_39;
                                                {
                                                  ATerm r_39 = t;
                                                  int s_39 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm w_94 = NULL,x_94 = NULL,y_94 = NULL,z_94 = NULL;
                                                      if(match_cons(t, sym_App_2))
                                                        {
                                                          w_94 = ATgetArgument(t, 0);
                                                          z_94 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = w_94;
                                                      if(match_cons(t, sym_Rec_2))
                                                        {
                                                          x_94 = ATgetArgument(t, 0);
                                                          y_94 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, x_94, (ATerm)ATempty, y_94)), y_94), z_94);
                                                      t = try_1_0(eval_0_0, t);
                                                      ;
                                                      LocalPopChoice(s_39);
                                                    }
                                                  else
                                                    {
                                                      t = r_39;
                                                      {
                                                        ATerm v_39 = t;
                                                        int w_39 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm x_39 = t;
                                                            int y_39 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = EvalAll_1_0(eval_0_0, t);
                                                                ;
                                                                LocalPopChoice(y_39);
                                                              }
                                                            else
                                                              {
                                                                t = x_39;
                                                                {
                                                                  ATerm e_95 = NULL;
                                                                  if(match_cons(t, sym_App_2))
                                                                    {
                                                                      e_95 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm z_39 = ATgetArgument(t, 1);
                                                                      }
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  t = e_95;
                                                                  if(match_cons(t, sym_All_1))
                                                                    {
                                                                      ATerm b_40 = ATgetArgument(t, 0);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  t = term_w_36;
                                                                }
                                                              }
                                                            ;
                                                            LocalPopChoice(w_39);
                                                          }
                                                        else
                                                          {
                                                            t = v_39;
                                                            {
                                                              ATerm c_40 = t;
                                                              int d_40 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm e_40 = t;
                                                                  int f_40 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = EvalOne_1_0(eval_0_0, t);
                                                                      ;
                                                                      LocalPopChoice(f_40);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = e_40;
                                                                      {
                                                                        ATerm i_95 = NULL;
                                                                        if(match_cons(t, sym_App_2))
                                                                          {
                                                                            i_95 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm h_40 = ATgetArgument(t, 1);
                                                                            }
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        t = i_95;
                                                                        if(match_cons(t, sym_One_1))
                                                                          {
                                                                            ATerm i_40 = ATgetArgument(t, 0);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        t = term_w_36;
                                                                      }
                                                                    }
                                                                  ;
                                                                  LocalPopChoice(d_40);
                                                                }
                                                              else
                                                                {
                                                                  t = c_40;
                                                                  {
                                                                    ATerm j_40 = t;
                                                                    int k_40 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm l_40 = t;
                                                                        int m_40 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = EvalCong_1_0(eval_0_0, t);
                                                                            ;
                                                                            LocalPopChoice(m_40);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = l_40;
                                                                            {
                                                                              ATerm h_82 = NULL;
                                                                              if(match_cons(t, sym_App_2))
                                                                                {
                                                                                  ATerm n_40 = ATgetArgument(t, 0);
                                                                                  if(match_cons(n_40, sym_Cong_2))
                                                                                    {
                                                                                      ATerm o_40 = ATgetArgument(n_40, 0);
                                                                                      ATerm p_40 = ATgetArgument(n_40, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  h_82 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = SSL_explode_term(h_82);
                                                                              if(match_cons(t, sym__2))
                                                                                {
                                                                                  ATerm q_40 = ATgetArgument(t, 0);
                                                                                  ATerm r_40 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = term_w_36;
                                                                            }
                                                                          }
                                                                        ;
                                                                        LocalPopChoice(k_40);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = j_40;
                                                                        {
                                                                          ATerm s_40 = t;
                                                                          int t_40 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = EvalScope_1_0(eval_0_0, t);
                                                                              ;
                                                                              LocalPopChoice(t_40);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = s_40;
                                                                              {
                                                                                ATerm u_40 = t;
                                                                                int v_40 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm w_40 = t;
                                                                                    int x_40 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = EvalMatch_0_0(t);
                                                                                        ;
                                                                                        LocalPopChoice(x_40);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = w_40;
                                                                                        {
                                                                                          ATerm m_95 = NULL;
                                                                                          if(match_cons(t, sym_App_2))
                                                                                            {
                                                                                              m_95 = ATgetArgument(t, 0);
                                                                                              {
                                                                                                ATerm y_40 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = m_95;
                                                                                          if(match_cons(t, sym_Match_1))
                                                                                            {
                                                                                              ATerm z_40 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = term_w_36;
                                                                                        }
                                                                                      }
                                                                                    ;
                                                                                    LocalPopChoice(v_40);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = u_40;
                                                                                    {
                                                                                      ATerm a_41 = t;
                                                                                      int b_41 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = EvalBuild_0_0(t);
                                                                                          ;
                                                                                          LocalPopChoice(b_41);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = a_41;
                                                                                          {
                                                                                            ATerm c_41 = t;
                                                                                            int d_41 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm e_41 = t;
                                                                                                int f_41 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    t = EvalWhere_1_0(eval_0_0, t);
                                                                                                    ;
                                                                                                    LocalPopChoice(f_41);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = e_41;
                                                                                                    {
                                                                                                      ATerm q_95 = NULL;
                                                                                                      if(match_cons(t, sym_App_2))
                                                                                                        {
                                                                                                          q_95 = ATgetArgument(t, 0);
                                                                                                          {
                                                                                                            ATerm g_41 = ATgetArgument(t, 1);
                                                                                                          }
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      t = q_95;
                                                                                                      if(match_cons(t, sym_Where_1))
                                                                                                        {
                                                                                                          ATerm h_41 = ATgetArgument(t, 0);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      t = term_w_36;
                                                                                                    }
                                                                                                  }
                                                                                                ;
                                                                                                LocalPopChoice(d_41);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = c_41;
                                                                                                {
                                                                                                  ATerm i_41 = t;
                                                                                                  int j_41 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = EvalPrim_0_0(t);
                                                                                                      ;
                                                                                                      LocalPopChoice(j_41);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = i_41;
                                                                                                      {
                                                                                                        ATerm i_96 = NULL;
                                                                                                        if(match_cons(t, sym_App_2))
                                                                                                          {
                                                                                                            i_96 = ATgetArgument(t, 0);
                                                                                                            {
                                                                                                              ATerm k_41 = ATgetArgument(t, 1);
                                                                                                            }
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        t = i_96;
                                                                                                        if(match_cons(t, sym_Prim_2))
                                                                                                          {
                                                                                                            ATerm l_41 = ATgetArgument(t, 0);
                                                                                                            ATerm m_41 = ATgetArgument(t, 1);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        t = term_w_36;
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
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
      t = try_1_0(u_6, t);
    }
  }
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm u_96 = NULL,v_96 = NULL,w_96 = NULL;
  v_96 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      w_96 = ATgetArgument(t, 0);
      u_96 = ATgetArgument(t, 1);
      {
        ATerm c_97 = NULL,d_97 = NULL,e_97 = NULL,f_97 = NULL;
        t = v_96;
        t = new_0_0(t);
        c_97 = t;
        t = new_0_0(t);
        d_97 = t;
        t = new_0_0(t);
        e_97 = t;
        t = new_0_0(t);
        f_97 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_97), e_97), d_97), c_97), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, c_97), (ATerm) ATmakeAppl(sym_Var_1, e_97))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, w_96, (ATerm)ATmakeAppl(sym_Var_1, c_97), (ATerm) ATmakeAppl(sym_Var_1, d_97)), (ATerm) ATmakeAppl(sym_BAM_3, u_96, (ATerm)ATmakeAppl(sym_Var_1, e_97), (ATerm) ATmakeAppl(sym_Var_1, f_97)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_n_41, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, f_97)), (ATerm) ATmakeAppl(sym_Var_1, d_97))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          w_96 = ATgetArgument(t, 0);
          {
            ATerm h_97 = NULL,i_97 = NULL,j_97 = NULL,a_98 = NULL;
            t = v_96;
            t = new_0_0(t);
            h_97 = t;
            t = w_96;
            {
              ATerm w_6 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    i_97 = ATgetArgument(t, 0);
                    j_97 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, h_97);
                return(t);
              }
              t = oncetd_1_0(w_6, t);
              a_98 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_97), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_n_41, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_97)), not_null(i_97))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_97)), (ATerm) ATmakeAppl(sym_Build_1, a_98))));
            }
          }
        }
      else
        {
          ATerm k_98 = NULL,l_98 = NULL,m_98 = NULL,n_98 = NULL,o_98 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              w_96 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_96;
          t = new_0_0(t);
          k_98 = t;
          t = new_0_0(t);
          l_98 = t;
          t = w_96;
          {
            ATerm x_6 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  m_98 = ATgetArgument(t, 0);
                  n_98 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, k_98);
              return(t);
            }
            t = oncetd_1_0(x_6, t);
            o_98 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_98), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, o_98), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_98), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, l_98)), (ATerm) ATmakeAppl(sym_PrimT_3, term_o_41, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_98))))), (ATerm)ATmakeAppl(sym_Var_1, k_98), (ATerm) ATmakeAppl(sym_Op_2, term_p_41, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_98)), not_null(m_98)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm q_98 = NULL,t_98 = NULL;
  q_98 = t;
  if(match_cons(t, sym_Match_1))
    {
      t_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_41 = t;
    int r_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_98 = NULL,w_98 = NULL,a_99 = NULL,e_99 = NULL;
        t = q_98;
        t = new_0_0(t);
        v_98 = t;
        t = t_98;
        {
          ATerm y_6 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                a_99 = ATgetArgument(t, 0);
                w_98 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, v_98), a_99);
            return(t);
          }
          t = pat_td_1_0(y_6, t);
          e_99 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_98), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, e_99), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_s_41, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_98))), (ATerm) ATmakeAppl(sym_Match_1, not_null(w_98))))));
        }
        ;
        LocalPopChoice(r_41);
      }
    else
      {
        t = q_41;
        {
          ATerm t_41 = t;
          int u_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_100 = NULL,c_100 = NULL,d_100 = NULL;
              t = q_98;
              t = new_0_0(t);
              b_100 = t;
              t = t_98;
              {
                ATerm z_6 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      c_100 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, b_100);
                  return(t);
                }
                t = pat_td_1_0(z_6, t);
                d_100 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_100), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, d_100), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, b_100)), not_null(c_100))));
              }
              ;
              LocalPopChoice(u_41);
            }
          else
            {
              t = t_41;
              {
                ATerm y_100 = NULL,f_101 = NULL,i_101 = NULL,j_101 = NULL;
                t = q_98;
                t = new_0_0(t);
                y_100 = t;
                t = t_98;
                {
                  ATerm b_7 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        f_101 = ATgetArgument(t, 0);
                        i_101 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, y_100);
                    return(t);
                  }
                  t = pat_td_1_0(b_7, t);
                  j_101 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_100), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, j_101), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, y_100)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(i_101)), not_null(f_101)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm Mapp0_0_0 (ATerm t)
{
  ATerm m_101 = NULL,n_101 = NULL,w_103 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      m_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_101;
  {
    ATerm e_7 (ATerm t)
    {
      if(match_cons(t, sym_RootApp_1))
        {
          ATerm v_41 = ATgetArgument(t, 0);
          if(match_cons(v_41, sym_Match_1))
            {
              n_101 = ATgetArgument(v_41, 0);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      t = n_101;
      return(t);
    }
    t = pat_td_1_0(e_7, t);
    w_103 = t;
    t = (ATerm) ATmakeAppl(sym_Match_1, w_103);
  }
  return(t);
}
ATerm Mapp_0_0 (ATerm t)
{
  ATerm w_41 = t;
  int x_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0_0(t);
      ;
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
            ATerm v_104 = NULL,w_104 = NULL,x_104 = NULL;
            if(match_cons(t, sym_Match_1))
              {
                v_104 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = v_104;
            if(match_cons(t, sym_RootApp_1))
              {
                w_104 = ATgetArgument(t, 0);
                t = w_104;
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    w_104 = ATgetArgument(t, 0);
                    x_104 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_BA_2, w_104, x_104);
              }
            ;
            LocalPopChoice(z_41);
          }
        else
          {
            t = y_41;
            t = Mapp2_0_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0_0 (ATerm t)
{
  ATerm u_110 = NULL,v_110 = NULL;
  u_110 = t;
  if(match_cons(t, sym_Build_1))
    {
      v_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_42 = t;
    int b_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_110 = NULL,y_110 = NULL,z_110 = NULL,a_111 = NULL;
        t = u_110;
        t = new_0_0(t);
        x_110 = t;
        t = v_110;
        {
          ATerm f_7 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                y_110 = ATgetArgument(t, 0);
                z_110 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, x_110);
            return(t);
          }
          t = pat_td_1_0(f_7, t);
          a_111 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_110), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_c_42, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_110)), not_null(y_110))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, x_110)))), (ATerm) ATmakeAppl(sym_Build_1, a_111)));
        }
        ;
        LocalPopChoice(b_42);
      }
    else
      {
        t = a_42;
        {
          ATerm d_42 = t;
          int e_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_111 = NULL,d_111 = NULL,e_111 = NULL;
              t = u_110;
              t = new_0_0(t);
              c_111 = t;
              t = v_110;
              {
                ATerm g_7 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      d_111 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, c_111);
                  return(t);
                }
                t = pat_td_1_0(g_7, t);
                e_111 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_111), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_111), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, c_111)))), (ATerm) ATmakeAppl(sym_Build_1, e_111)));
              }
              ;
              LocalPopChoice(e_42);
            }
          else
            {
              t = d_42;
              {
                ATerm g_111 = NULL,h_111 = NULL,i_111 = NULL,j_111 = NULL;
                t = u_110;
                t = new_0_0(t);
                g_111 = t;
                t = v_110;
                {
                  ATerm h_7 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        h_111 = ATgetArgument(t, 0);
                        i_111 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, g_111);
                    return(t);
                  }
                  t = pat_td_1_0(h_7, t);
                  j_111 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_111), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(h_111), not_null(i_111), (ATerm) ATmakeAppl(sym_Var_1, g_111))), (ATerm) ATmakeAppl(sym_Build_1, j_111)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm As_2_0 (ATerm c_120 (ATerm), ATerm d_120 (ATerm), ATerm t)
{
  ATerm k_111 = NULL,l_111 = NULL,m_111 = NULL,n_111 = NULL,o_111 = NULL,p_111 = NULL;
  p_111 = t;
  if(match_cons(t, sym_As_2))
    {
      l_111 = ATgetArgument(t, 0);
      m_111 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_111);
  k_111 = t;
  t = l_111;
  t = c_120(t);
  n_111 = t;
  t = m_111;
  t = d_120(t);
  o_111 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, n_111, o_111), k_111);
  return(t);
}
ATerm PrimT_3_0 (ATerm b_124 (ATerm), ATerm c_124 (ATerm), ATerm d_124 (ATerm), ATerm t)
{
  ATerm t_111 = NULL,u_111 = NULL,v_111 = NULL,w_111 = NULL,x_111 = NULL,y_111 = NULL,z_111 = NULL,c_112 = NULL;
  c_112 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      u_111 = ATgetArgument(t, 0);
      v_111 = ATgetArgument(t, 1);
      w_111 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_112);
  t_111 = t;
  t = u_111;
  t = b_124(t);
  x_111 = t;
  t = v_111;
  t = c_124(t);
  y_111 = t;
  t = w_111;
  t = d_124(t);
  z_111 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, x_111, y_111, z_111), t_111);
  return(t);
}
ATerm Explode_2_0 (ATerm x_119 (ATerm), ATerm y_119 (ATerm), ATerm t)
{
  ATerm g_112 = NULL,h_112 = NULL,i_112 = NULL,j_112 = NULL,k_112 = NULL,l_112 = NULL;
  l_112 = t;
  if(match_cons(t, sym_Explode_2))
    {
      h_112 = ATgetArgument(t, 0);
      i_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_112);
  g_112 = t;
  t = h_112;
  t = x_119(t);
  j_112 = t;
  t = i_112;
  t = y_119(t);
  k_112 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, j_112, k_112), g_112);
  return(t);
}
ATerm Op_2_0 (ATerm t_119 (ATerm), ATerm u_119 (ATerm), ATerm t)
{
  ATerm p_112 = NULL,q_112 = NULL,r_112 = NULL,s_112 = NULL,t_112 = NULL,u_112 = NULL;
  u_112 = t;
  if(match_cons(t, sym_Op_2))
    {
      q_112 = ATgetArgument(t, 0);
      r_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_112);
  p_112 = t;
  t = q_112;
  t = t_119(t);
  s_112 = t;
  t = r_112;
  t = u_119(t);
  t_112 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, s_112, t_112), p_112);
  return(t);
}
ATerm pat_td_1_0 (ATerm e_155 (ATerm), ATerm t)
{
  ATerm f_42 = t;
  int g_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_155(t);
      ;
      LocalPopChoice(g_42);
    }
  else
    {
      t = f_42;
      {
        ATerm h_42 = t;
        int i_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_7 (ATerm t)
            {
              ATerm m_7 (ATerm t)
              {
                t = pat_td_1_0(e_155, t);
                return(t);
              }
              t = fetch_1_0(m_7, t);
              return(t);
            }
            t = Op_2_0(_id, j_7, t);
            ;
            LocalPopChoice(i_42);
          }
        else
          {
            t = h_42;
            {
              ATerm j_42 = t;
              int k_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_7 (ATerm t)
                  {
                    t = pat_td_1_0(e_155, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, n_7, t);
                  ;
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
                        ATerm o_7 (ATerm t)
                        {
                          t = pat_td_1_0(e_155, t);
                          return(t);
                        }
                        t = Explode_2_0(o_7, _id, t);
                        ;
                        LocalPopChoice(m_42);
                      }
                    else
                      {
                        t = l_42;
                        {
                          ATerm n_42 = t;
                          int o_42 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm b_8 (ATerm t)
                              {
                                ATerm c_8 (ATerm t)
                                {
                                  t = pat_td_1_0(e_155, t);
                                  return(t);
                                }
                                t = fetch_1_0(c_8, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, b_8, t);
                              ;
                              LocalPopChoice(o_42);
                            }
                          else
                            {
                              t = n_42;
                              {
                                ATerm g_8 (ATerm t)
                                {
                                  t = pat_td_1_0(e_155, t);
                                  return(t);
                                }
                                t = As_2_0(_id, g_8, t);
                              }
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
ATerm Bapp0_0_0 (ATerm t)
{
  ATerm a_113 = NULL;
  if(match_cons(t, sym_Build_1))
    {
      a_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm p_42 = t;
    int q_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_113 = NULL,d_113 = NULL;
        t = a_113;
        {
          ATerm l_8 (ATerm t)
          {
            if(match_cons(t, sym_RootApp_1))
              {
                ATerm r_42 = ATgetArgument(t, 0);
                if(match_cons(r_42, sym_Build_1))
                  {
                    c_113 = ATgetArgument(r_42, 0);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            t = c_113;
            return(t);
          }
          t = pat_td_1_0(l_8, t);
          d_113 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, d_113);
        }
        ;
        LocalPopChoice(q_42);
      }
    else
      {
        t = p_42;
        {
          ATerm f_113 = NULL,g_113 = NULL;
          t = a_113;
          {
            ATerm m_8 (ATerm t)
            {
              if(match_cons(t, sym_App_2))
                {
                  ATerm s_42 = ATgetArgument(t, 0);
                  if(match_cons(s_42, sym_Build_1))
                    {
                      f_113 = ATgetArgument(s_42, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm t_42 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = f_113;
              return(t);
            }
            t = pat_td_1_0(m_8, t);
            g_113 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, g_113);
          }
        }
      }
  }
  return(t);
}
ATerm Bapp_0_0 (ATerm t)
{
  ATerm u_42 = t;
  int v_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0_0(t);
      ;
      LocalPopChoice(v_42);
    }
  else
    {
      t = u_42;
      {
        ATerm w_42 = t;
        int x_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_113 = NULL,l_113 = NULL,m_113 = NULL;
            if(match_cons(t, sym_Build_1))
              {
                k_113 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = k_113;
            if(match_cons(t, sym_RootApp_1))
              {
                l_113 = ATgetArgument(t, 0);
                t = l_113;
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    l_113 = ATgetArgument(t, 0);
                    m_113 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_113), l_113);
              }
            ;
            LocalPopChoice(x_42);
          }
        else
          {
            t = w_42;
            t = Bapp2_0_0(t);
          }
      }
    }
  return(t);
}
ATerm map1_1_0 (ATerm i_0 (ATerm), ATerm t)
{
  ATerm y_42 = t;
  int z_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(i_0, _id, t);
      {
        ATerm n_8 (ATerm t)
        {
          ATerm o_8 (ATerm t)
          {
            t = map1_1_0(i_0, t);
            return(t);
          }
          t = try_1_0(o_8, t);
          return(t);
        }
        t = Cons_2_0(_id, n_8, t);
      }
      ;
      LocalPopChoice(z_42);
    }
  else
    {
      t = y_42;
      {
        ATerm p_8 (ATerm t)
        {
          t = map1_1_0(i_0, t);
          return(t);
        }
        t = Cons_2_0(_id, p_8, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm u_113 = NULL,v_113 = NULL,w_113 = NULL,x_113 = NULL,z_113 = NULL,a_114 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      z_113 = ATgetArgument(t, 0);
      a_114 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, z_113, a_114);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          z_113 = ATgetArgument(t, 0);
          t = z_113;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_113 = ATgetFirst((ATermList) t);
              v_113 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, u_113, (ATerm) ATmakeAppl(sym_LChoices_1, v_113));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_w_36;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              z_113 = ATgetArgument(t, 0);
              t = z_113;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_113 = ATgetFirst((ATermList) t);
                  v_113 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, u_113, (ATerm) ATmakeAppl(sym_Choices_1, v_113));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_w_36;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  z_113 = ATgetArgument(t, 0);
                  t = z_113;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      u_113 = ATgetFirst((ATermList) t);
                      v_113 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_113, (ATerm) ATmakeAppl(sym_Seqs_1, v_113));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_a_43;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      z_113 = ATgetArgument(t, 0);
                      a_114 = ATgetArgument(t, 1);
                      x_113 = ATgetArgument(t, 2);
                      w_113 = ATgetArgument(t, 3);
                      {
                        ATerm n_114 = NULL,o_114 = NULL;
                        t = a_114;
                        {
                          ATerm q_8 (ATerm t)
                          {
                            ATerm p_114 = NULL;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                p_114 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_VarDec_2, p_114, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_d_43), term_d_43));
                            return(t);
                          }
                          t = map1_1_0(q_8, t);
                          n_114 = t;
                          t = x_113;
                          {
                            ATerm r_8 (ATerm t)
                            {
                              ATerm b_9 (ATerm t)
                              {
                                ATerm q_114 = NULL;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    q_114 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, q_114, term_d_43);
                                return(t);
                              }
                              t = try_1_0(b_9, t);
                              return(t);
                            }
                            t = map1_1_0(r_8, t);
                            o_114 = t;
                            t = (ATerm) ATmakeAppl(sym_RDefT_4, z_113, n_114, o_114, w_113);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          z_113 = ATgetArgument(t, 0);
                          a_114 = ATgetArgument(t, 1);
                          x_113 = ATgetArgument(t, 2);
                          w_113 = ATgetArgument(t, 3);
                          {
                            ATerm e_43 = t;
                            int f_43 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm v_114 = NULL,w_114 = NULL;
                                t = x_113;
                                {
                                  ATerm d_9 (ATerm t)
                                  {
                                    ATerm x_114 = NULL;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        x_114 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, x_114, term_d_43);
                                    return(t);
                                  }
                                  t = map1_1_0(d_9, t);
                                  v_114 = t;
                                  t = a_114;
                                  {
                                    ATerm h_9 (ATerm t)
                                    {
                                      ATerm i_9 (ATerm t)
                                      {
                                        ATerm y_114 = NULL;
                                        if(match_cons(t, sym_DefaultVarDec_1))
                                          {
                                            y_114 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_VarDec_2, y_114, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_d_43), term_d_43));
                                        return(t);
                                      }
                                      t = try_1_0(i_9, t);
                                      return(t);
                                    }
                                    t = map_1_0(h_9, t);
                                    w_114 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, z_113, w_114, v_114, w_113);
                                  }
                                }
                                ;
                                LocalPopChoice(f_43);
                              }
                            else
                              {
                                t = e_43;
                                {
                                  ATerm d_115 = NULL,e_115 = NULL;
                                  t = a_114;
                                  {
                                    ATerm j_9 (ATerm t)
                                    {
                                      ATerm f_115 = NULL;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          f_115 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_VarDec_2, f_115, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_d_43), term_d_43));
                                      return(t);
                                    }
                                    t = map1_1_0(j_9, t);
                                    d_115 = t;
                                    t = x_113;
                                    {
                                      ATerm k_9 (ATerm t)
                                      {
                                        ATerm o_9 (ATerm t)
                                        {
                                          ATerm g_115 = NULL;
                                          if(match_cons(t, sym_DefaultVarDec_1))
                                            {
                                              g_115 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_VarDec_2, g_115, term_d_43);
                                          return(t);
                                        }
                                        t = try_1_0(o_9, t);
                                        return(t);
                                      }
                                      t = map_1_0(k_9, t);
                                      e_115 = t;
                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, z_113, d_115, e_115, w_113);
                                    }
                                  }
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              z_113 = ATgetArgument(t, 0);
                              a_114 = ATgetArgument(t, 1);
                              x_113 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, a_114, (ATerm) ATmakeAppl(sym_Op_2, term_p_41, (ATerm) ATinsert(ATinsert(ATempty, x_113), z_113)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  z_113 = ATgetArgument(t, 0);
                                  a_114 = ATgetArgument(t, 1);
                                  x_113 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, x_113)), z_113), (ATerm) ATmakeAppl(sym_Build_1, a_114)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      z_113 = ATgetArgument(t, 0);
                                      a_114 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_113, (ATerm) ATmakeAppl(sym_Match_1, a_114));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          z_113 = ATgetArgument(t, 0);
                                          a_114 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_113), a_114);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              z_113 = ATgetArgument(t, 0);
                                              a_114 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, a_114), z_113);
                                        }
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
ATerm genzip_4_0 (ATerm x_135 (ATerm), ATerm y_135 (ATerm), ATerm z_135 (ATerm), ATerm a_136 (ATerm), ATerm t)
{
  ATerm t_115 (ATerm t)
  {
    ATerm g_43 = t;
    int h_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_135(t);
        ;
        LocalPopChoice(h_43);
      }
    else
      {
        t = g_43;
        t = y_135(t);
        t = _2_0(a_136, t_115, t);
        t = z_135(t);
      }
    return(t);
  }
  t = t_115(t);
  return(t);
}
ATerm unzip_1_0 (ATerm h_136 (ATerm), ATerm t)
{
  ATerm p_9 (ATerm t)
  {
    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
      _fail(t);
    t = term_i_43;
    return(t);
  }
  ATerm q_9 (ATerm t)
  {
    ATerm u_115 = NULL,v_115 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_115 = ATgetFirst((ATermList) t);
        v_115 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, u_115, v_115);
    return(t);
  }
  ATerm w_9 (ATerm t)
  {
    ATerm w_115 = NULL,x_115 = NULL,y_115 = NULL,z_115 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm j_43 = ATgetArgument(t, 0);
        if(match_cons(j_43, sym__2))
          {
            w_115 = ATgetArgument(j_43, 0);
            y_115 = ATgetArgument(j_43, 1);
          }
        else
          _fail(t);
        {
          ATerm k_43 = ATgetArgument(t, 1);
          if(match_cons(k_43, sym__2))
            {
              x_115 = ATgetArgument(k_43, 0);
              z_115 = ATgetArgument(k_43, 1);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_115), w_115), (ATerm) ATinsert(CheckATermList(z_115), y_115));
    return(t);
  }
  t = genzip_4_0(p_9, q_9, w_9, h_136, t);
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm i_116 (ATerm c_116, ATerm t)
  {
    ATerm e_116 = NULL;
    t = c_116;
    {
      ATerm l_43 = t;
      if((PushChoice() == 0))
        {
          t = Var_1_0(_id, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = l_43;
        }
      t = new_0_0(t);
      e_116 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, e_116), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, c_116), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, e_116)))), (ATerm) ATmakeAppl(sym_Var_1, e_116)));
    }
    return(t);
  }
  ATerm f_116 = NULL,g_116 = NULL;
  f_116 = t;
  if(match_cons(t, sym_Var_1))
    {
      g_116 = ATgetArgument(t, 0);
      {
        ATerm m_43 = t;
        int n_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_116(f_116, t);
            ;
            LocalPopChoice(n_43);
          }
        else
          {
            t = m_43;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_a_43, (ATerm) ATmakeAppl(sym_Var_1, g_116)));
          }
      }
    }
  else
    {
      t = i_116(f_116, t);
    }
  return(t);
}
ATerm Var_1_0 (ATerm u_116 (ATerm), ATerm t)
{
  ATerm j_116 = NULL,k_116 = NULL,l_116 = NULL,m_116 = NULL;
  m_116 = t;
  if(match_cons(t, sym_Var_1))
    {
      k_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_116);
  j_116 = t;
  t = k_116;
  t = u_116(t);
  l_116 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, l_116), j_116);
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm m_117 = NULL,n_117 = NULL,o_117 = NULL,p_117 = NULL;
  n_117 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      o_117 = ATgetArgument(t, 0);
      p_117 = ATgetArgument(t, 1);
      m_117 = ATgetArgument(t, 2);
      {
        ATerm s_82 = NULL,t_82 = NULL,y_82 = NULL;
        t = m_117;
        {
          ATerm x_9 (ATerm t)
          {
            ATerm o_43 = t;
            if((PushChoice() == 0))
              {
                t = Var_1_0(_id, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = o_43;
              }
            return(t);
          }
          t = fetch_1_0(x_9, t);
          t = m_117;
          t = unzip_1_0(LiftPrimArg_0_0, t);
          {
            ATerm y_9 (ATerm t)
            {
              t = unzip_1_0(_id, t);
              return(t);
            }
            t = _2_0(concat_0_0, y_9, t);
            if(match_cons(t, sym__2))
              {
                s_82 = ATgetArgument(t, 0);
                {
                  ATerm p_43 = ATgetArgument(t, 1);
                  if(match_cons(p_43, sym__2))
                    {
                      t_82 = ATgetArgument(p_43, 0);
                      y_82 = ATgetArgument(p_43, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, s_82, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, t_82), (ATerm) ATmakeAppl(sym_PrimT_3, o_117, p_117, y_82)));
          }
        }
      }
    }
  else
    {
      ATerm e_83 = NULL,f_83 = NULL,h_83 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          o_117 = ATgetArgument(t, 0);
          p_117 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_117;
      {
        ATerm z_9 (ATerm t)
        {
          ATerm q_43 = t;
          if((PushChoice() == 0))
            {
              t = Var_1_0(_id, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = q_43;
            }
          return(t);
        }
        t = fetch_1_0(z_9, t);
        t = p_117;
        t = unzip_1_0(LiftPrimArg_0_0, t);
        {
          ATerm a_10 (ATerm t)
          {
            t = unzip_1_0(_id, t);
            return(t);
          }
          t = _2_0(concat_0_0, a_10, t);
          if(match_cons(t, sym__2))
            {
              e_83 = ATgetArgument(t, 0);
              {
                ATerm r_43 = ATgetArgument(t, 1);
                if(match_cons(r_43, sym__2))
                  {
                    f_83 = ATgetArgument(r_43, 0);
                    h_83 = ATgetArgument(r_43, 1);
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Scope_2, e_83, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, f_83), (ATerm) ATmakeAppl(sym_PrimT_3, o_117, (ATerm)ATempty, h_83)));
        }
      }
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm s_43 = t;
  if((PushChoice() == 0))
    {
      ATerm e_10 (ATerm t)
      {
        ATerm t_43 = t;
        int u_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(u_43);
          }
        else
          {
            t = t_43;
            if(!(match_cons(t, sym_Wld_0)))
              _fail(t);
          }
        return(t);
      }
      t = topdown_1_0(e_10, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_43;
    }
  return(t);
}
ATerm App_2_0 (ATerm z_119 (ATerm), ATerm a_120 (ATerm), ATerm t)
{
  ATerm s_117 = NULL,t_117 = NULL,u_117 = NULL,x_117 = NULL,y_117 = NULL,z_117 = NULL;
  z_117 = t;
  if(match_cons(t, sym_App_2))
    {
      t_117 = ATgetArgument(t, 0);
      u_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_117);
  s_117 = t;
  t = t_117;
  t = z_119(t);
  x_117 = t;
  t = u_117;
  t = a_120(t);
  y_117 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, x_117, y_117), s_117);
  return(t);
}
ATerm Con_3_0 (ATerm l_120 (ATerm), ATerm m_120 (ATerm), ATerm n_120 (ATerm), ATerm t)
{
  ATerm d_118 = NULL,e_118 = NULL,f_118 = NULL,g_118 = NULL,h_118 = NULL,i_118 = NULL,j_118 = NULL,k_118 = NULL;
  k_118 = t;
  if(match_cons(t, sym_Con_3))
    {
      e_118 = ATgetArgument(t, 0);
      f_118 = ATgetArgument(t, 1);
      g_118 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_118);
  d_118 = t;
  t = e_118;
  t = l_120(t);
  h_118 = t;
  t = f_118;
  t = m_120(t);
  i_118 = t;
  t = g_118;
  t = n_120(t);
  j_118 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, h_118, i_118, j_118), d_118);
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm v_43 = t;
  if((PushChoice() == 0))
    {
      ATerm g_10 (ATerm t)
      {
        ATerm w_43 = t;
        int x_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(x_43);
          }
        else
          {
            t = w_43;
            t = App_2_0(_id, _id, t);
          }
        return(t);
      }
      t = topdown_1_0(g_10, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_43;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm r_118 = NULL,s_118 = NULL,t_118 = NULL,u_118 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      r_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_118;
  if(match_cons(t, sym_StratRule_3))
    {
      s_118 = ATgetArgument(t, 0);
      t_118 = ATgetArgument(t, 1);
      u_118 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, t_118), (ATerm) ATmakeAppl(sym_Where_1, u_118)), s_118));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          s_118 = ATgetArgument(t, 0);
          t_118 = ATgetArgument(t, 1);
          u_118 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = s_118;
      t = pureterm_0_0(t);
      t = t_118;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, t_118)), (ATerm) ATmakeAppl(sym_Where_1, u_118)), (ATerm) ATmakeAppl(sym_Match_1, s_118)));
    }
  return(t);
}
ATerm Scope_2_0 (ATerm f_123 (ATerm), ATerm g_123 (ATerm), ATerm t)
{
  ATerm b_119 = NULL,c_119 = NULL,d_119 = NULL,e_119 = NULL,f_119 = NULL,g_119 = NULL;
  g_119 = t;
  if(match_cons(t, sym_Scope_2))
    {
      c_119 = ATgetArgument(t, 0);
      d_119 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_119);
  b_119 = t;
  t = c_119;
  t = f_123(t);
  e_119 = t;
  t = d_119;
  t = g_123(t);
  f_119 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, e_119, f_119), b_119);
  return(t);
}
ATerm oncetd_1_0 (ATerm h_129 (ATerm), ATerm t)
{
  ATerm k_119 (ATerm t)
  {
    ATerm y_43 = t;
    int z_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_129(t);
        ;
        LocalPopChoice(z_43);
      }
    else
      {
        t = y_43;
        t = SRTS_one(k_119, t);
      }
    return(t);
  }
  t = k_119(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm Rcon_0_0 (ATerm t)
{
  ATerm l_119 = NULL,m_119 = NULL,n_119 = NULL,o_119 = NULL,p_119 = NULL,q_119 = NULL,r_119 = NULL,s_119 = NULL,v_119 = NULL,w_119 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      ATerm a_44 = ATgetArgument(t, 0);
      if(match_cons(a_44, sym_Rule_3))
        {
          l_119 = ATgetArgument(a_44, 0);
          m_119 = ATgetArgument(a_44, 1);
          n_119 = ATgetArgument(a_44, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = new_0_0(t);
  o_119 = t;
  t = l_119;
  {
    ATerm h_10 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm b_44 = ATgetArgument(t, 0);
          if(match_cons(b_44, sym_Var_1))
            {
              q_119 = ATgetArgument(b_44, 0);
            }
          else
            _fail(t);
          p_119 = ATgetArgument(t, 1);
          {
            ATerm c_44 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, q_119);
      return(t);
    }
    t = oncetd_1_0(h_10, t);
    r_119 = t;
    t = m_119;
    {
      ATerm i_10 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm d_44 = ATgetArgument(t, 0);
            if(match_cons(d_44, sym_Var_1))
              {
                q_119 = ATgetArgument(d_44, 0);
              }
            else
              _fail(t);
            s_119 = ATgetArgument(t, 1);
            {
              ATerm e_44 = ATgetArgument(t, 2);
              if(match_cons(e_44, sym_CallT_3))
                {
                  v_119 = ATgetArgument(e_44, 0);
                  {
                    ATerm f_44 = ATgetArgument(e_44, 1);
                    if(((ATgetType(f_44) != AT_LIST) || !(ATisEmpty(f_44))))
                      _fail(t);
                  }
                  {
                    ATerm g_44 = ATgetArgument(e_44, 2);
                    if(((ATgetType(g_44) != AT_LIST) || !(ATisEmpty(g_44))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, o_119);
        return(t);
      }
      t = oncetd_1_0(i_10, t);
      w_119 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_119), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, r_119, w_119, (ATerm) ATmakeAppl(sym_Seq_2, n_119, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(v_119), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(p_119), not_null(s_119), term_a_43))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(q_119)), (ATerm) ATmakeAppl(sym_Var_1, o_119))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm j_10 (ATerm t)
  {
    ATerm h_44 = t;
    int i_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0_0(t);
        t = desugarRule_0_0(t);
        ;
        LocalPopChoice(i_44);
      }
    else
      {
        t = h_44;
        {
          ATerm j_44 = t;
          int k_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2_0(_id, desugarRule_0_0, t);
              ;
              LocalPopChoice(k_44);
            }
          else
            {
              t = j_44;
              t = RtoS_0_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1_0(j_10, t);
  return(t);
}
ATerm topdown_1_0 (ATerm d_128 (ATerm), ATerm t)
{
  t = d_128(t);
  {
    ATerm k_10 (ATerm t)
    {
      t = topdown_1_0(d_128, t);
      return(t);
    }
    t = SRTS_all(k_10, t);
  }
  return(t);
}
ATerm desugar_0_0 (ATerm t)
{
  ATerm l_10 (ATerm t)
  {
    t = try_1_0(desugarRule_0_0, t);
    {
      ATerm m_10 (ATerm t)
      {
        ATerm l_44 = t;
        int m_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0_0(t);
            ;
            LocalPopChoice(m_44);
          }
        else
          {
            t = l_44;
            {
              ATerm n_44 = t;
              int o_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(o_44);
                }
              else
                {
                  t = n_44;
                  {
                    ATerm p_44 = t;
                    int q_44 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(q_44);
                      }
                    else
                      {
                        t = p_44;
                        {
                          ATerm r_44 = t;
                          int s_44 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0_0(t);
                              ;
                              LocalPopChoice(s_44);
                            }
                          else
                            {
                              t = r_44;
                              t = Expl_0_0(t);
                            }
                        }
                      }
                  }
                }
            }
          }
        return(t);
      }
      t = repeat_1_0(m_10, t);
    }
    return(t);
  }
  t = topdown_1_0(l_10, t);
  return(t);
}
ATerm eval_strategy_0_0 (ATerm t)
{
  ATerm e_120 = NULL,f_120 = NULL,g_120 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_44 = ATgetArgument(t, 0);
      if(match_cons(t_44, sym_Eval_1))
        {
          e_120 = ATgetArgument(t_44, 0);
        }
      else
        _fail(t);
      f_120 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_120;
  t = desugar_0_0(t);
  g_120 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, g_120, f_120);
  {
    ATerm q_10 (ATerm t)
    {
      ATerm r_10 (ATerm t)
      {
        t = term_u_44;
        return(t);
      }
      t = debug_1_0(r_10, t);
      return(t);
    }
    t = ifdebug_1_0(q_10, t);
    t = eval_0_0(t);
    {
      ATerm u_10 (ATerm t)
      {
        ATerm y_10 (ATerm t)
        {
          t = term_v_44;
          return(t);
        }
        t = debug_1_0(y_10, t);
        return(t);
      }
      t = iftrace_1_0(u_10, t);
      {
        ATerm c_11 (ATerm t)
        {
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = (ATerm) ATinsert(ATempty, term_w_44);
          t = fatal_error_0_0(t);
          return(t);
        }
        t = try_1_0(c_11, t);
      }
    }
  }
  return(t);
}
ATerm ifdebug_1_0 (ATerm h_126 (ATerm), ATerm t)
{
  ATerm d_11 (ATerm t)
  {
    ATerm h_120 = NULL;
    h_120 = t;
    t = term_x_44;
    t = get_config_0_0(t);
    t = h_120;
    t = h_126(t);
    return(t);
  }
  t = try_1_0(d_11, t);
  return(t);
}
ATerm eval_command_0_0 (ATerm t)
{
  ATerm y_44 = t;
  int z_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_11 (ATerm t)
      {
        ATerm f_11 (ATerm t)
        {
          t = term_a_45;
          return(t);
        }
        t = debug_1_0(f_11, t);
        return(t);
      }
      t = ifdebug_1_0(e_11, t);
      {
        ATerm b_45 = t;
        int c_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_strategy_0_0(t);
            ;
            LocalPopChoice(c_45);
          }
        else
          {
            t = b_45;
            {
              ATerm k_83 = NULL,l_83 = NULL;
              ATerm k_11 (ATerm t)
              {
                ATerm d_45 = t;
                int e_45 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = eval_dump_0_0(t);
                    ;
                    LocalPopChoice(e_45);
                  }
                else
                  {
                    t = d_45;
                    {
                      ATerm f_45 = t;
                      int g_45 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = eval_load_0_0(t);
                          ;
                          LocalPopChoice(g_45);
                        }
                      else
                        {
                          t = f_45;
                          {
                            ATerm h_45 = t;
                            int i_45 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = eval_import_0_0(t);
                                ;
                                LocalPopChoice(i_45);
                              }
                            else
                              {
                                t = h_45;
                                {
                                  ATerm j_45 = t;
                                  int k_45 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = eval_strategies_0_0(t);
                                      ;
                                      LocalPopChoice(k_45);
                                    }
                                  else
                                    {
                                      t = j_45;
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
              t = _2_0(k_11, _id, t);
              k_83 = t;
              t = SSL_explode_term(k_83);
              if(match_cons(t, sym__2))
                {
                  ATerm l_45 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) l_45) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm m_45 = ATgetArgument(t, 1);
                    if(((ATgetType(m_45) == AT_LIST) && !(ATisEmpty(m_45))))
                      {
                        ATerm n_45 = ATgetFirst((ATermList) m_45);
                        ATerm o_45 = (ATerm) ATgetNext((ATermList) m_45);
                        if(((ATgetType(o_45) == AT_LIST) && !(ATisEmpty(o_45))))
                          {
                            l_83 = ATgetFirst((ATermList) o_45);
                            {
                              ATerm p_45 = (ATerm) ATgetNext((ATermList) o_45);
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
              t = l_83;
            }
          }
      }
      ;
      LocalPopChoice(z_44);
    }
  else
    {
      t = y_44;
      {
        ATerm m_11 (ATerm t)
        {
          t = term_q_45;
          return(t);
        }
        t = debug_1_0(m_11, t);
        t = SSL_exit((ATerm) ATmakeInt(1));
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm f_127 (ATerm), ATerm t)
{
  ATerm i_120 (ATerm t)
  {
    ATerm u_11 (ATerm t)
    {
      t = f_127(t);
      t = i_120(t);
      return(t);
    }
    t = try_1_0(u_11, t);
    return(t);
  }
  t = i_120(t);
  return(t);
}
ATerm evaluate_commands_0_0 (ATerm t)
{
  ATerm v_11 (ATerm t)
  {
    ATerm j_120 = NULL,k_120 = NULL,o_120 = NULL,p_120 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm r_45 = ATgetArgument(t, 0);
        if(((ATgetType(r_45) == AT_LIST) && !(ATisEmpty(r_45))))
          {
            j_120 = ATgetFirst((ATermList) r_45);
            k_120 = (ATerm) ATgetNext((ATermList) r_45);
          }
        else
          _fail(t);
        o_120 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, j_120, o_120);
    t = eval_command_0_0(t);
    p_120 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_120, p_120);
    return(t);
  }
  t = repeat_1_0(v_11, t);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_121 (ATerm x_120, ATerm t)
  {
    t = SSL_fclose(x_120);
    return(t);
  }
  ATerm a_121 = NULL,b_121 = NULL;
  b_121 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_121 = ATgetArgument(t, 0);
      {
        ATerm s_45 = t;
        int t_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_121);
            ;
            LocalPopChoice(t_45);
          }
        else
          {
            t = s_45;
            t = d_121(b_121, t);
          }
      }
    }
  else
    {
      t = d_121(b_121, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_121 = NULL;
  t = SSL_stdin_stream();
  e_121 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_121);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_121 = NULL;
  t = SSL_stdout_stream();
  f_121 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_121);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_121 = NULL;
  t = SSL_stderr_stream();
  g_121 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_121);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm i_121 = NULL;
  i_121 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_121;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_121;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_121;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_45 = ATgetArgument(t, 0);
      ATerm v_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_45 = t;
    int x_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_83 = NULL,w_83 = NULL;
        t_83 = t;
        t = SSL_explode_term(t_83);
        if(match_cons(t, sym__2))
          {
            ATerm y_45 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_45) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm z_45 = ATgetArgument(t, 1);
              if(((ATgetType(z_45) == AT_LIST) && !(ATisEmpty(z_45))))
                {
                  w_83 = ATgetFirst((ATermList) z_45);
                  {
                    ATerm a_46 = (ATerm) ATgetNext((ATermList) z_45);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = w_83;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(x_45);
      }
    else
      {
        t = w_45;
        {
          ATerm b_46 = t;
          int c_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_121 = NULL,m_121 = NULL,n_121 = NULL;
              ATerm w_11 (ATerm t)
              {
                ATerm o_121 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    o_121 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = o_121;
                return(t);
              }
              t = _2_0(w_11, _id, t);
              if(match_cons(t, sym__2))
                {
                  l_121 = ATgetArgument(t, 0);
                  m_121 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(l_121, m_121);
              n_121 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, n_121);
              ;
              LocalPopChoice(c_46);
            }
          else
            {
              t = b_46;
              {
                ATerm p_121 = NULL,q_121 = NULL,r_121 = NULL;
                ATerm x_11 (ATerm t)
                {
                  ATerm s_121 = NULL;
                  s_121 = t;
                  t = SSL_is_string(s_121);
                  return(t);
                }
                t = _2_0(x_11, _id, t);
                if(match_cons(t, sym__2))
                  {
                    p_121 = ATgetArgument(t, 0);
                    q_121 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(p_121, q_121);
                r_121 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, r_121);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_121 = NULL,y_121 = NULL,z_121 = NULL;
  ATerm d_46 = t;
  int e_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_122 = NULL;
      a_122 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_122, term_f_46);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(e_46);
    }
  else
    {
      t = d_46;
      {
        ATerm z_11 (ATerm t)
        {
          t = term_g_46;
          return(t);
        }
        t = debug_1_0(z_11, t);
        _fail(t);
      }
    }
  x_121 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(z_121);
  y_121 = t;
  t = x_121;
  t = fclose_0_0(t);
  t = y_121;
  return(t);
}
ATerm split_2_0 (ATerm k_141 (ATerm), ATerm l_141 (ATerm), ATerm t)
{
  ATerm d_122 = NULL,e_122 = NULL,f_122 = NULL;
  d_122 = t;
  t = k_141(t);
  e_122 = t;
  t = d_122;
  t = l_141(t);
  f_122 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_122, f_122);
  return(t);
}
ATerm read_script_0_0 (ATerm t)
{
  ATerm a_12 (ATerm t)
  {
    t = term_h_46;
    t = ReadFromFile_0_0(t);
    return(t);
  }
  t = split_2_0(a_12, _id, t);
  return(t);
}
ATerm say_1_0 (ATerm w_145 (ATerm), ATerm t)
{
  ATerm h_122 = NULL,y_83 = NULL;
  h_122 = t;
  t = w_145(t);
  y_83 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, y_83));
  t = h_122;
  return(t);
}
ATerm copyright_0_0 (ATerm t)
{
  ATerm b_12 (ATerm t)
  {
    t = term_i_46;
    return(t);
  }
  t = say_1_0(b_12, t);
  {
    ATerm d_12 (ATerm t)
    {
      t = term_j_46;
      return(t);
    }
    t = say_1_0(d_12, t);
    {
      ATerm e_12 (ATerm t)
      {
        t = term_k_46;
        return(t);
      }
      t = say_1_0(e_12, t);
      {
        ATerm f_12 (ATerm t)
        {
          t = term_l_46;
          return(t);
        }
        t = say_1_0(f_12, t);
        {
          ATerm g_12 (ATerm t)
          {
            t = term_m_46;
            return(t);
          }
          t = say_1_0(g_12, t);
          {
            ATerm i_12 (ATerm t)
            {
              t = term_p_46;
              return(t);
            }
            t = say_1_0(i_12, t);
            {
              ATerm k_12 (ATerm t)
              {
                t = term_q_46;
                return(t);
              }
              t = say_1_0(k_12, t);
              {
                ATerm l_12 (ATerm t)
                {
                  t = term_i_46;
                  return(t);
                }
                t = say_1_0(l_12, t);
              }
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_122 = NULL,r_122 = NULL,s_122 = NULL;
  q_122 = t;
  if(match_cons(t, sym__2))
    {
      r_122 = ATgetArgument(t, 0);
      s_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_46 = t;
    int s_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_122;
        if((r_122 != t))
          {
            _fail(t);
          }
        t = q_122;
        ;
        LocalPopChoice(s_46);
      }
    else
      {
        t = r_46;
        t = q_122;
        {
          ATerm t_46 = t;
          int u_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_122, s_122);
              ;
              LocalPopChoice(u_46);
            }
          else
            {
              t = t_46;
              t = SSL_gtr(r_122, s_122);
            }
          t = (ATerm) ATmakeAppl(sym__2, r_122, s_122);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_147 (ATerm), ATerm t)
{
  ATerm m_12 (ATerm t)
  {
    ATerm y_122 = NULL,z_122 = NULL;
    y_122 = t;
    t = term_v_46;
    t = get_config_0_0(t);
    z_122 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_122, term_u_23);
    t = geq_0_0(t);
    t = y_122;
    t = j_147(t);
    return(t);
  }
  t = try_1_0(m_12, t);
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm c_123 = NULL,d_123 = NULL,e_123 = NULL,h_123 = NULL;
  if(match_cons(t, sym__2))
    {
      c_123 = ATgetArgument(t, 0);
      d_123 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_123;
  {
    ATerm w_46 = t;
    int x_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(x_46);
      }
    else
      {
        t = w_46;
        t = (ATerm) ATempty;
      }
    e_123 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_123, e_123);
    t = conc_0_0(t);
    h_123 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), c_123, h_123);
    t = (ATerm) ATmakeAppl(sym__3, term_y_46, c_123, h_123);
  }
  return(t);
}
ATerm si_options_0_0 (ATerm t)
{
  ATerm z_46 = t;
  int a_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_12 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-I", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm o_12 (ATerm t)
      {
        ATerm i_123 = NULL;
        i_123 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_31, (ATerm) ATinsert(ATinsert(ATempty, i_123), term_e_31));
        t = extend_config_0_0(t);
        return(t);
      }
      ATerm q_12 (ATerm t)
      {
        t = term_b_47;
        return(t);
      }
      t = ArgOption_3_0(n_12, o_12, q_12, t);
      ;
      LocalPopChoice(a_47);
    }
  else
    {
      t = z_46;
      {
        ATerm c_47 = t;
        int d_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_12 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("@version", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm t_12 (ATerm t)
            {
              ATerm j_123 = NULL;
              j_123 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("@version", 0, ATtrue)), j_123);
              t = (ATerm) ATmakeAppl(sym__3, term_y_46, term_e_47, j_123);
              return(t);
            }
            ATerm u_12 (ATerm t)
            {
              t = term_f_47;
              return(t);
            }
            t = ArgOption_3_0(s_12, t_12, u_12, t);
            ;
            LocalPopChoice(d_47);
          }
        else
          {
            t = c_47;
            {
              ATerm g_47 = t;
              int h_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_12 (ATerm t)
                  {
                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-d", 0, ATtrue)))
                      _fail(t);
                    return(t);
                  }
                  ATerm y_12 (ATerm t)
                  {
                    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-d", 0, ATtrue)), (ATerm) ATmakeInt(1));
                    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(2));
                    t = term_i_47;
                    return(t);
                  }
                  ATerm z_12 (ATerm t)
                  {
                    t = term_j_47;
                    return(t);
                  }
                  t = Option_3_0(v_12, y_12, z_12, t);
                  ;
                  LocalPopChoice(h_47);
                }
              else
                {
                  t = g_47;
                  {
                    ATerm a_13 (ATerm t)
                    {
                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
                        _fail(t);
                      return(t);
                    }
                    ATerm b_13 (ATerm t)
                    {
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue)), (ATerm) ATmakeInt(1));
                      t = term_k_47;
                      return(t);
                    }
                    ATerm c_13 (ATerm t)
                    {
                      t = term_l_47;
                      return(t);
                    }
                    t = Option_3_0(a_13, b_13, c_13, t);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm d_13 (ATerm t)
  {
    ATerm l_123 = NULL;
    l_123 = t;
    if(match_string(t, "-k"))
      {
        t = l_123;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = l_123;
      }
    return(t);
  }
  ATerm e_13 (ATerm t)
  {
    ATerm m_123 = NULL,n_123 = NULL;
    m_123 = t;
    t = SSL_string_to_int(m_123);
    n_123 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), n_123);
    t = m_123;
    return(t);
  }
  ATerm g_13 (ATerm t)
  {
    t = term_n_47;
    return(t);
  }
  t = ArgOption_3_0(d_13, e_13, g_13, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_47 = t;
  int p_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_13 (ATerm t)
      {
        ATerm p_123 = NULL;
        p_123 = t;
        if(match_string(t, "-S"))
          {
            t = p_123;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = p_123;
          }
        return(t);
      }
      ATerm i_13 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_q_47;
        return(t);
      }
      ATerm j_13 (ATerm t)
      {
        t = term_r_47;
        return(t);
      }
      t = Option_3_0(h_13, i_13, j_13, t);
      ;
      LocalPopChoice(p_47);
    }
  else
    {
      t = o_47;
      {
        ATerm s_47 = t;
        int t_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_13 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm l_13 (ATerm t)
            {
              ATerm q_123 = NULL,r_123 = NULL;
              q_123 = t;
              t = SSL_string_to_int(q_123);
              r_123 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), r_123);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, q_123);
              return(t);
            }
            ATerm m_13 (ATerm t)
            {
              t = term_u_47;
              return(t);
            }
            t = ArgOption_3_0(k_13, l_13, m_13, t);
            ;
            LocalPopChoice(t_47);
          }
        else
          {
            t = s_47;
            {
              ATerm n_13 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm q_13 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_v_47;
                return(t);
              }
              ATerm s_13 (ATerm t)
              {
                t = term_w_47;
                return(t);
              }
              t = Option_3_0(n_13, q_13, s_13, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm x_47 = t;
  int y_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(y_47);
    }
  else
    {
      t = x_47;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm t_13 (ATerm t)
  {
    ATerm v_123 = NULL;
    v_123 = t;
    if(match_string(t, "-o"))
      {
        t = v_123;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = v_123;
      }
    return(t);
  }
  ATerm u_13 (ATerm t)
  {
    ATerm w_123 = NULL;
    w_123 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), w_123);
    t = (ATerm) ATmakeAppl(sym_Output_1, w_123);
    return(t);
  }
  ATerm v_13 (ATerm t)
  {
    t = term_z_47;
    return(t);
  }
  t = ArgOption_3_0(t_13, u_13, v_13, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm a_48 = t;
  int b_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(b_48);
    }
  else
    {
      t = a_48;
      {
        ATerm w_13 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm x_13 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_c_48;
          return(t);
        }
        ATerm y_13 (ATerm t)
        {
          t = term_d_48;
          return(t);
        }
        t = Option_3_0(w_13, x_13, y_13, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm z_123 = NULL,a_124 = NULL,e_124 = NULL,f_124 = NULL,g_124 = NULL;
  z_123 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = z_123;
      t = register_usage_1_0(h_0, t);
    }
  else
    {
      ATerm k_124 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_124 = ATgetFirst((ATermList) t);
          e_124 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_124;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_124 = ATgetFirst((ATermList) t);
          g_124 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_124;
      t = f_0(t);
      t = f_124;
      t = g_0(t);
      k_124 = t;
      t = (ATerm) ATinsert(CheckATermList(g_124), k_124);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm z_13 (ATerm t)
  {
    ATerm m_124 = NULL;
    m_124 = t;
    if(match_string(t, "-i"))
      {
        t = m_124;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = m_124;
      }
    return(t);
  }
  ATerm a_14 (ATerm t)
  {
    ATerm n_124 = NULL;
    n_124 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), n_124);
    t = (ATerm) ATmakeAppl(sym_Input_1, n_124);
    return(t);
  }
  ATerm d_14 (ATerm t)
  {
    t = term_e_48;
    return(t);
  }
  t = ArgOption_3_0(z_13, a_14, d_14, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm f_48 = t;
  int g_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(g_48);
    }
  else
    {
      t = f_48;
      {
        ATerm h_48 = t;
        int i_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(i_48);
          }
        else
          {
            t = h_48;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm p_124 = NULL,q_124 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_124 = ATgetFirst((ATermList) t);
      q_124 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_124 = NULL,v_124 = NULL;
        t = q_124;
        t = e_0(t);
        u_124 = t;
        t = p_124;
        t = d_0(t);
        v_124 = t;
        t = q_124;
        {
          ATerm e_14 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(u_124), v_124);
            return(t);
          }
          t = reverse_acc_2_0(d_0, e_14, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_48;
      t = e_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm f_14 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, f_14, t);
  return(t);
}
ATerm Program_1_0 (ATerm v_117 (ATerm), ATerm t)
{
  ATerm w_124 = NULL,x_124 = NULL,y_124 = NULL,z_124 = NULL;
  z_124 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_124 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_124);
  w_124 = t;
  t = x_124;
  t = v_117(t);
  y_124 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, y_124), w_124);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_48 = t;
  int l_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_48;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_48);
    }
  else
    {
      t = k_48;
      {
        ATerm g_14 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(g_14, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_n_48;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm i_14 (ATerm t)
    {
      ATerm d_125 = NULL;
      d_125 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, d_125), term_o_48);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(i_14, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm w_117 (ATerm), ATerm t)
{
  ATerm e_125 = NULL,f_125 = NULL,g_125 = NULL,h_125 = NULL;
  h_125 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      f_125 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_125);
  e_125 = t;
  t = f_125;
  t = w_117(t);
  g_125 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, g_125), e_125);
  return(t);
}
ATerm fetch_1_0 (ATerm e_134 (ATerm), ATerm t)
{
  ATerm s_125 (ATerm t)
  {
    ATerm p_48 = t;
    int q_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(e_134, _id, t);
        ;
        LocalPopChoice(q_48);
      }
    else
      {
        t = p_48;
        t = Cons_2_0(_id, s_125, t);
      }
    return(t);
  }
  t = s_125(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm g_151 (ATerm), ATerm t)
{
  t = fetch_1_0(g_151, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_125 = NULL,v_125 = NULL;
  u_125 = t;
  {
    ATerm r_48 = t;
    int t_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_125;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_48 = ATgetFirst((ATermList) t);
                ATerm v_48 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_125;
          }
        ;
        LocalPopChoice(t_48);
      }
    else
      {
        t = r_48;
        t = (ATerm) ATinsert(ATempty, u_125);
      }
    v_125 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), v_125);
    t = u_125;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_m_48;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm w_48 = t;
  int x_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(x_48);
    }
  else
    {
      t = w_48;
      {
        ATerm b_126 = NULL,c_126 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_126 = ATgetFirst((ATermList) t);
            c_126 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_126;
        {
          ATerm j_14 (ATerm t)
          {
            t = c_126;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(j_14, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm g_126 = NULL,k_126 = NULL;
  g_126 = t;
  t = SSL_explode_term(g_126);
  if(match_cons(t, sym__2))
    {
      ATerm y_48 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_48) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      k_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_126;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm k_134 (ATerm), ATerm t)
{
  ATerm l_126 (ATerm t)
  {
    ATerm z_48 = t;
    int a_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, l_126, t);
        ;
        LocalPopChoice(a_49);
      }
    else
      {
        t = z_48;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_134(t);
      }
    return(t);
  }
  t = l_126(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm m_126 = NULL,n_126 = NULL;
  if(match_cons(t, sym__2))
    {
      n_126 = ATgetArgument(t, 0);
      m_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_126;
  {
    ATerm k_14 (ATerm t)
    {
      t = m_126;
      return(t);
    }
    t = at_end_1_0(k_14, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm b_49 = t;
  int c_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(c_49);
    }
  else
    {
      t = b_49;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm o_126 = NULL;
  ATerm n_14 (ATerm t)
  {
    ATerm p_126 = NULL;
    p_126 = t;
    t = SSL_explode_string(p_126);
    return(t);
  }
  ATerm p_14 (ATerm t)
  {
    ATerm q_126 = NULL;
    q_126 = t;
    t = SSL_explode_string(q_126);
    return(t);
  }
  t = _2_0(n_14, p_14, t);
  t = conc_0_0(t);
  o_126 = t;
  t = SSL_implode_string(o_126);
  return(t);
}
ATerm debug_1_0 (ATerm s_145 (ATerm), ATerm t)
{
  ATerm r_126 = NULL,s_126 = NULL;
  r_126 = t;
  t = s_145(t);
  s_126 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_126), s_126));
  t = r_126;
  return(t);
}
ATerm map_1_0 (ATerm u_133 (ATerm), ATerm t)
{
  ATerm t_126 (ATerm t)
  {
    ATerm d_49 = t;
    int e_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(e_49);
      }
    else
      {
        t = d_49;
        t = Cons_2_0(u_133, t_126, t);
      }
    return(t);
  }
  t = t_126(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm f_49 = t;
  int g_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_126 = NULL;
      z_126 = t;
      t = SSL_is_string(z_126);
      ;
      LocalPopChoice(g_49);
    }
  else
    {
      t = f_49;
      {
        ATerm h_49 = t;
        int i_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_14 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(r_14, t);
            ;
            LocalPopChoice(i_49);
          }
        else
          {
            t = h_49;
            {
              ATerm d_127 = NULL,e_127 = NULL,h_127 = NULL;
              d_127 = t;
              if(match_cons(t, sym_Path_1))
                {
                  e_127 = ATgetArgument(t, 0);
                  t = e_127;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      e_127 = ATgetArgument(t, 0);
                      t = e_127;
                      {
                        ATerm j_49 = t;
                        int k_49 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(k_49);
                          }
                        else
                          {
                            t = j_49;
                            {
                              ATerm s_14 (ATerm t)
                              {
                                t = term_l_49;
                                return(t);
                              }
                              t = debug_1_0(s_14, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm l_127 = NULL,m_127 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          e_127 = ATgetArgument(t, 0);
                          h_127 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = e_127;
                      t = eval_config_0_0(t);
                      l_127 = t;
                      t = h_127;
                      t = eval_config_0_0(t);
                      m_127 = t;
                      t = (ATerm) ATmakeAppl(sym__2, l_127, m_127);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm p_127 = NULL;
  p_127 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), p_127);
  {
    ATerm t_14 (ATerm t)
    {
      ATerm q_127 = NULL;
      t = eval_config_0_0(t);
      q_127 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), p_127, q_127);
      t = q_127;
      return(t);
    }
    t = try_1_0(t_14, t);
  }
  return(t);
}
ATerm try_1_0 (ATerm j_126 (ATerm), ATerm t)
{
  ATerm m_49 = t;
  int n_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_126(t);
      ;
      LocalPopChoice(n_49);
    }
  else
    {
      t = m_49;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_49 = t;
  int p_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_14 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm v_14 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_r_49;
        return(t);
      }
      ATerm z_14 (ATerm t)
      {
        t = term_s_49;
        return(t);
      }
      t = Option_3_0(u_14, v_14, z_14, t);
      ;
      LocalPopChoice(p_49);
    }
  else
    {
      t = o_49;
      {
        ATerm b_15 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm c_15 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_t_49;
          return(t);
        }
        ATerm d_15 (ATerm t)
        {
          t = term_u_49;
          return(t);
        }
        t = Option_3_0(b_15, c_15, d_15, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm t_127 = NULL,a_128 = NULL,b_128 = NULL,c_128 = NULL;
  if(match_cons(t, sym__3))
    {
      t_127 = ATgetArgument(t, 0);
      a_128 = ATgetArgument(t, 1);
      b_128 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_127, a_128);
  {
    ATerm v_49 = t;
    int w_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_49 = ATgetArgument(t, 0);
            ATerm y_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(t_127, a_128);
        ;
        LocalPopChoice(w_49);
      }
    else
      {
        t = v_49;
        t = (ATerm) ATempty;
      }
    c_128 = t;
    t = SSL_table_put(t_127, a_128, (ATerm) ATinsert(CheckATermList(c_128), b_128));
    t = (ATerm) ATmakeAppl(sym__3, t_127, a_128, b_128);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm l_152 (ATerm), ATerm t)
{
  ATerm j_128 = NULL;
  t = term_j_48;
  t = l_152(t);
  j_128 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_49, term_a_50, j_128);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm t)
{
  ATerm l_128 = NULL,m_128 = NULL,n_128 = NULL;
  l_128 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = l_128;
      t = register_usage_1_0(c_0, t);
    }
  else
    {
      ATerm q_128 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_128 = ATgetFirst((ATermList) t);
          n_128 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_128;
      t = a_0(t);
      t = term_j_48;
      t = b_0(t);
      q_128 = t;
      t = (ATerm) ATinsert(CheckATermList(n_128), q_128);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm e_15 (ATerm t)
  {
    ATerm s_128 = NULL;
    s_128 = t;
    if(match_string(t, "--help"))
      {
        t = s_128;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = s_128;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = s_128;
          }
      }
    return(t);
  }
  ATerm f_15 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_b_50;
    return(t);
  }
  ATerm g_15 (ATerm t)
  {
    t = term_c_50;
    return(t);
  }
  t = Option_3_0(e_15, f_15, g_15, t);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_152 (ATerm), ATerm t)
{
  ATerm u_128 = NULL;
  u_128 = t;
  {
    ATerm j_15 (ATerm t)
    {
      t = term_d_50;
      t = j_152(t);
      return(t);
    }
    t = try_1_0(j_15, t);
    t = u_128;
    {
      ATerm k_15 (ATerm t)
      {
        ATerm v_128 = NULL;
        v_128 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), v_128);
        t = (ATerm) ATmakeAppl(sym_Program_1, v_128);
        return(t);
      }
      ATerm l_15 (ATerm t)
      {
        ATerm e_50 = t;
        int f_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_50 = t;
            int h_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(h_50);
              }
            else
              {
                t = g_50;
                t = j_152(t);
                t = Cons_2_0(_id, l_15, t);
              }
            ;
            LocalPopChoice(f_50);
          }
        else
          {
            t = e_50;
            {
              ATerm x_128 = NULL,y_128 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  x_128 = ATgetFirst((ATermList) t);
                  y_128 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(y_128), (ATerm) ATmakeAppl(sym_Undefined_1, x_128));
            }
          }
        return(t);
      }
      t = Cons_2_0(k_15, l_15, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm i_152 (ATerm), ATerm t)
{
  ATerm e_129 = NULL,f_129 = NULL,g_129 = NULL;
  e_129 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = e_129;
  {
    ATerm m_15 (ATerm t)
    {
      ATerm i_50 = t;
      int j_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_152(t);
          ;
          LocalPopChoice(j_50);
        }
      else
        {
          t = i_50;
          {
            ATerm k_50 = t;
            int l_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(l_50);
              }
            else
              {
                t = k_50;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_15, t);
    {
      ATerm n_15 (ATerm t)
      {
        ATerm m_50 = t;
        int n_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_129 = NULL;
            n_129 = t;
            {
              ATerm o_50 = t;
              int p_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_129;
                  {
                    ATerm q_50 = t;
                    int r_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_s_50;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(r_50);
                      }
                    else
                      {
                        t = q_50;
                        {
                          ATerm o_15 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(o_15, t);
                        }
                      }
                    t = n_129;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(p_50);
                }
              else
                {
                  t = o_50;
                  t = term_q_49;
                  t = get_config_0_0(t);
                  t = n_129;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(n_50);
          }
        else
          {
            t = m_50;
            {
              ATerm p_15 (ATerm t)
              {
                ATerm s_15 (ATerm t)
                {
                  f_129 = t;
                  return(t);
                }
                t = Undefined_1_0(s_15, t);
                return(t);
              }
              t = option_defined_1_0(p_15, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(f_129)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_v_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_129)), term_t_50));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(n_15, t);
      g_129 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = g_129;
    }
  }
  return(t);
}
ATerm make_option_table_0_0 (ATerm t)
{
  ATerm s_129 = NULL;
  s_129 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))));
  t = s_129;
  {
    ATerm t_15 (ATerm t)
    {
      ATerm u_50 = t;
      int v_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = io_options_0_0(t);
          ;
          LocalPopChoice(v_50);
        }
      else
        {
          t = u_50;
          t = si_options_0_0(t);
        }
      return(t);
    }
    t = parse_options_1_0(t_15, t);
  }
  return(t);
}
ATerm _2_0 (ATerm r_110 (ATerm), ATerm s_110 (ATerm), ATerm t)
{
  ATerm t_129 = NULL,u_129 = NULL,v_129 = NULL,w_129 = NULL,x_129 = NULL,y_129 = NULL;
  y_129 = t;
  if(match_cons(t, sym__2))
    {
      u_129 = ATgetArgument(t, 0);
      v_129 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_129);
  t_129 = t;
  t = u_129;
  t = r_110(t);
  w_129 = t;
  t = v_129;
  t = s_110(t);
  x_129 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, w_129, x_129), t_129);
  return(t);
}
ATerm Cons_2_0 (ATerm a_112 (ATerm), ATerm b_112 (ATerm), ATerm t)
{
  ATerm c_130 = NULL,d_130 = NULL,e_130 = NULL,f_130 = NULL,g_130 = NULL,h_130 = NULL;
  h_130 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_130 = ATgetFirst((ATermList) t);
      e_130 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_130);
  c_130 = t;
  t = d_130;
  t = a_112(t);
  f_130 = t;
  t = e_130;
  t = b_112(t);
  g_130 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(g_130), f_130), c_130);
  return(t);
}
ATerm at_suffix_1_0 (ATerm o_134 (ATerm), ATerm t)
{
  ATerm l_130 (ATerm t)
  {
    ATerm w_50 = t;
    int x_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_134(t);
        ;
        LocalPopChoice(x_50);
      }
    else
      {
        t = w_50;
        t = Cons_2_0(_id, l_130, t);
      }
    return(t);
  }
  t = l_130(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm h_134 (ATerm), ATerm t)
{
  ATerm m_130 = NULL,n_130 = NULL;
  ATerm u_15 (ATerm t)
  {
    t = Cons_2_0(h_134, _id, t);
    {
      ATerm v_15 (ATerm t)
      {
        m_130 = t;
        return(t);
      }
      t = Cons_2_0(_id, v_15, t);
      t = (ATerm) ATempty;
    }
    return(t);
  }
  t = at_suffix_1_0(u_15, t);
  n_130 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_130, not_null(m_130));
  return(t);
}
ATerm process_options_0_0 (ATerm t)
{
  ATerm f_89 = NULL,p_90 = NULL;
  ATerm y_50 = t;
  int z_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_15 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--args", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      t = split_fetch_1_0(w_15, t);
      ;
      LocalPopChoice(z_50);
    }
  else
    {
      t = y_50;
      {
        ATerm o_130 = NULL;
        o_130 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_130, (ATerm) ATempty);
      }
    }
  t = _2_0(make_option_table_0_0, _id, t);
  f_89 = t;
  t = SSL_explode_term(f_89);
  if(match_cons(t, sym__2))
    {
      ATerm a_51 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_51) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_51 = ATgetArgument(t, 1);
        if(((ATgetType(b_51) == AT_LIST) && !(ATisEmpty(b_51))))
          {
            ATerm c_51 = ATgetFirst((ATermList) b_51);
            ATerm d_51 = (ATerm) ATgetNext((ATermList) b_51);
            if(((ATgetType(d_51) == AT_LIST) && !(ATisEmpty(d_51))))
              {
                p_90 = ATgetFirst((ATermList) d_51);
                {
                  ATerm e_51 = (ATerm) ATgetNext((ATermList) d_51);
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
  t = p_90;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm i_91 = NULL;
  i_91 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)));
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("senv", 0, ATtrue)));
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("tenv", 0, ATtrue)));
  t = i_91;
  t = process_options_0_0(t);
  t = if_verbose1_1_0(copyright_0_0, t);
  t = read_script_0_0(t);
  t = evaluate_commands_0_0(t);
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)));
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("senv", 0, ATtrue)));
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("tenv", 0, ATtrue)));
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
