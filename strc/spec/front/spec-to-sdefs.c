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
Symbol sym_Cong_2;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_w_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_b_34;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_f_33;
ATerm term_u_32;
ATerm term_s_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_x_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_a_31;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_g_30;
ATerm term_a_30;
ATerm term_d_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_w_28;
ATerm term_t_28;
ATerm term_f_28;
ATerm term_q_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_f_19;
ATerm term_d_19;
ATerm term_z_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_m_18;
ATerm term_k_18;
ATerm term_i_18;
ATerm term_l_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
void init_constant_terms (void)
{
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Sort_2, term_y_13, (ATerm) ATempty);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_ConstType_1, term_z_13);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CongDefined", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Defined_1, term_d_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_19);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("s1", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("s2", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Var_1, term_q_20);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("y", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Var_1, term_s_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_Anno_2, term_r_20, term_t_20);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("x'", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_Var_1, term_v_20);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("y'", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Var_1, term_x_20);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_Anno_2, term_w_20, term_y_20);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_20);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Call_2, term_c_21, (ATerm) ATempty);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_BAM_3, term_d_21, term_r_20, term_w_20);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_20);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Call_2, term_g_21, (ATerm) ATempty);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_BAM_3, term_h_21, term_t_20, term_y_20);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_20);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym__2, term_q_30, term_s_18);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_18);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym__2, term_w_30, term_m_18);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym__2, term_h_31, term_i_31);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym__2, term_q_33, term_m_18);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym__2, term_t_33, term_m_18);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym__2, term_n_32, term_m_18);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(sym__2, term_d_29, term_m_18);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm x_6 (ATerm d_24, ATerm);
ATerm y_6 (ATerm a_24, ATerm);
ATerm map1_1_0 (ATerm r_0 (ATerm), ATerm);
ATerm q_0 (ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm c_1 (ATerm);
ATerm f_1 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm repeat_1_0 (ATerm t_83 (ATerm), ATerm);
ATerm g_1 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm k_1 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm v_85 (ATerm), ATerm);
ATerm b_7 (ATerm r_21, ATerm t_21, ATerm u_21, ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm o_1 (ATerm);
ATerm s_1 (ATerm);
ATerm ListVarScope_0_0 (ATerm);
ATerm topdown_1_0 (ATerm r_84 (ATerm), ATerm);
ATerm w_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm k_2 (ATerm);
ATerm DeclareVariables_0_0 (ATerm);
ATerm l_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm RDtoSD_0_0 (ATerm);
ATerm d_7 (ATerm b_101 (ATerm), ATerm u_45, ATerm s_45, ATerm);
ATerm f_7 (ATerm g_57, ATerm h_57, ATerm);
ATerm g_33 (ATerm r_32, ATerm);
ATerm h_33 (ATerm t_32, ATerm);
ATerm CongDefined_0_0 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm MkCongDef_0_0 (ATerm);
ATerm filter_1_0 (ATerm e_97 (ATerm), ATerm);
ATerm j_7 (ATerm a_57, ATerm b_57, ATerm);
ATerm end_scope_1_0 (ATerm y_100 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm m_83 (ATerm), ATerm n_83 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm x_100 (ATerm), ATerm);
ATerm scope_2_0 (ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm k_7 (ATerm u_18, ATerm v_18, ATerm);
ATerm at_end_1_0 (ATerm y_90 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm k_42 (ATerm q_41, ATerm);
ATerm conc_0_0 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm tpaste_1_0 (ATerm j_112 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm m_112 (ATerm), ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm l_4 (ATerm);
ATerm o_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm q_7 (ATerm b_94 (ATerm), ATerm f_34, ATerm e_34, ATerm);
ATerm foldr_3_0 (ATerm c_96 (ATerm), ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm);
ATerm r_7 (ATerm e_94 (ATerm), ATerm f_94 (ATerm), ATerm j_34, ATerm i_34, ATerm);
ATerm s_7 (ATerm w_93 (ATerm), ATerm d_34, ATerm c_34, ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm g_5 (ATerm);
ATerm u_7 (ATerm h_622, ATerm m_622, ATerm h_61, ATerm);
ATerm while_not_2_0 (ATerm i_84 (ATerm), ATerm j_84 (ATerm), ATerm);
ATerm for_3_0 (ATerm l_84 (ATerm), ATerm m_84 (ATerm), ATerm n_84 (ATerm), ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm k_5 (ATerm);
ATerm y_60 (ATerm l_58, ATerm o_58, ATerm p_58, ATerm);
ATerm l_5 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm q_5 (ATerm);
ATerm s_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm free_vars_3_0 (ATerm i_111 (ATerm), ATerm j_111 (ATerm), ATerm k_111 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm Var_1_0 (ATerm f_70 (ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm x_7 (ATerm d_110 (ATerm), ATerm e_110 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm o_59, ATerm n_59, ATerm m_59, ATerm);
ATerm new_0_0 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm y_7 (ATerm x_109 (ATerm), ATerm y_109 (ATerm (ATerm), ATerm), ATerm g_59, ATerm j_59, ATerm);
ATerm env_alltd_1_0 (ATerm h_89 (ATerm), ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_6_0 (ATerm e_109 (ATerm), ATerm f_109 (ATerm (ATerm), ATerm), ATerm g_109 (ATerm), ATerm h_109 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm i_109 (ATerm (ATerm), ATerm), ATerm j_109 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm l_92 (ATerm), ATerm m_92 (ATerm), ATerm n_92 (ATerm), ATerm o_92 (ATerm), ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm c_7 (ATerm);
ATerm f_8 (ATerm s_82 (ATerm), ATerm x_19, ATerm z_19, ATerm);
ATerm Trm_to_Cong_0_0 (ATerm);
ATerm trm_to_cong_0_0 (ATerm);
ATerm e_7 (ATerm);
ATerm l_7 (ATerm f_20, ATerm i_20, ATerm h_20, ATerm);
ATerm p_7 (ATerm);
ATerm g_8 (ATerm w_18, ATerm y_18, ATerm x_18, ATerm);
ATerm h_8 (ATerm g_47, ATerm h_47, ATerm);
ATerm i_8 (ATerm u_50, ATerm v_50, ATerm);
ATerm k_8 (ATerm u_102 (ATerm), ATerm r_466, ATerm y_50, ATerm);
ATerm j_8 (ATerm q_50, ATerm r_50, ATerm);
ATerm z_7 (ATerm);
ATerm b_8 (ATerm);
ATerm output_1_0 (ATerm d_107 (ATerm), ATerm);
ATerm p_75 (ATerm j_75, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm l_8 (ATerm w_50, ATerm);
ATerm m_8 (ATerm i_47, ATerm j_47, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm a_77 (ATerm z_75, ATerm);
ATerm b_77 (ATerm d_76, ATerm e_76, ATerm f_76, ATerm);
ATerm c_77 (ATerm n_76, ATerm o_76, ATerm p_76, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm d_8 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm e_107 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm w_8 (ATerm);
ATerm x_8 (ATerm);
ATerm z_8 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm a_9 (ATerm);
ATerm b_9 (ATerm);
ATerm c_9 (ATerm);
ATerm e_9 (ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm i_9 (ATerm);
ATerm k_9 (ATerm);
ATerm o_9 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm u_8 (ATerm x_51, ATerm y_51, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm r_9 (ATerm);
ATerm v_9 (ATerm);
ATerm x_9 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm s_8 (ATerm v_56, ATerm w_56, ATerm u_56, ATerm);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm);
ATerm b_10 (ATerm);
ATerm o_10 (ATerm);
ATerm p_10 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm n_8 (ATerm g_44, ATerm h_44, ATerm);
ATerm foldr_2_0 (ATerm a_96 (ATerm), ATerm b_96 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm r_10 (ATerm);
ATerm s_10 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm e_104 (ATerm), ATerm);
ATerm u_10 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm v_10 (ATerm);
ATerm need_help_1_0 (ATerm u_106 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm x_10 (ATerm);
ATerm a_11 (ATerm);
ATerm b_11 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm s_90 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm q_8 (ATerm w_41, ATerm x_41, ATerm);
ATerm debug_1_0 (ATerm s_102 (ATerm), ATerm);
ATerm map_1_0 (ATerm i_90 (ATerm), ATerm);
ATerm c_11 (ATerm);
ATerm e_11 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm r_8 (ATerm m_58, ATerm n_58, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm f_11 (ATerm);
ATerm g_11 (ATerm);
ATerm j_11 (ATerm);
ATerm l_11 (ATerm);
ATerm o_11 (ATerm);
ATerm q_11 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm y_68 (ATerm), ATerm z_68 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm x_108 (ATerm), ATerm);
ATerm s_11 (ATerm);
ATerm t_11 (ATerm);
ATerm u_11 (ATerm);
ATerm v_11 (ATerm);
ATerm parse_options_1_0 (ATerm w_108 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm w_106 (ATerm), ATerm x_106 (ATerm), ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm);
ATerm x_11 (ATerm);
ATerm y_11 (ATerm);
ATerm z_11 (ATerm);
ATerm a_12 (ATerm);
ATerm j_12 (ATerm);
ATerm l_12 (ATerm);
ATerm m_12 (ATerm);
ATerm o_12 (ATerm);
ATerm p_12 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm x_6 (ATerm d_24, ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL;
  t = d_24;
  {
    ATerm h_0 (ATerm t)
    {
      if(match_cons(t, sym_Op_2))
        {
          ATerm q_12 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) q_12) != ATmakeSymbol("Cons", 0, ATtrue)))
            _fail(t);
          {
            ATerm r_12 = ATgetArgument(t, 1);
            if(((ATgetType(r_12) == AT_LIST) && !(ATisEmpty(r_12))))
              {
                ATerm s_12 = ATgetFirst((ATermList) r_12);
                if(match_cons(s_12, sym_Var_1))
                  {
                    ATerm v_12 = ATgetArgument(s_12, 0);
                    if(match_cons(v_12, sym_ListVar_1))
                      {
                        if(((a_0 != NULL) && (a_0 != ATgetArgument(v_12, 0))))
                          _fail(ATgetArgument(v_12, 0));
                        else
                          a_0 = ATgetArgument(v_12, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm u_12 = (ATerm) ATgetNext((ATermList) r_12);
                  if(((ATgetType(u_12) == AT_LIST) && !(ATisEmpty(u_12))))
                    {
                      ATerm x_12 = ATgetFirst((ATermList) u_12);
                      if(match_cons(x_12, sym_Op_2))
                        {
                          ATerm a_13 = ATgetArgument(x_12, 0);
                          if((ATgetSymbol((ATermAppl) a_13) != ATmakeSymbol("Nil", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm b_13 = ATgetArgument(x_12, 1);
                            if(((ATgetType(b_13) != AT_LIST) || !(ATisEmpty(b_13))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      {
                        ATerm z_12 = (ATerm) ATgetNext((ATermList) u_12);
                        if(((ATgetType(z_12) != AT_LIST) || !(ATisEmpty(z_12))))
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
    t = oncetd_1_0(h_0, t);
    b_0 = t;
    t = (ATerm) ATmakeAppl(sym_Build_1, b_0);
  }
  return(t);
}
ATerm y_6 (ATerm a_24, ATerm t)
{
  ATerm f_0 = NULL,j_0 = NULL;
  t = a_24;
  {
    ATerm o_0 (ATerm t)
    {
      if(match_cons(t, sym_Op_2))
        {
          ATerm d_13 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) d_13) != ATmakeSymbol("Cons", 0, ATtrue)))
            _fail(t);
          {
            ATerm e_13 = ATgetArgument(t, 1);
            if(((ATgetType(e_13) == AT_LIST) && !(ATisEmpty(e_13))))
              {
                ATerm m_13 = ATgetFirst((ATermList) e_13);
                if(match_cons(m_13, sym_Var_1))
                  {
                    ATerm o_13 = ATgetArgument(m_13, 0);
                    if(match_cons(o_13, sym_ListVar_1))
                      {
                        if(((f_0 != NULL) && (f_0 != ATgetArgument(o_13, 0))))
                          _fail(ATgetArgument(o_13, 0));
                        else
                          f_0 = ATgetArgument(o_13, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm n_13 = (ATerm) ATgetNext((ATermList) e_13);
                  if(((ATgetType(n_13) == AT_LIST) && !(ATisEmpty(n_13))))
                    {
                      ATerm p_13 = ATgetFirst((ATermList) n_13);
                      if(match_cons(p_13, sym_Op_2))
                        {
                          ATerm s_13 = ATgetArgument(p_13, 0);
                          if((ATgetSymbol((ATermAppl) s_13) != ATmakeSymbol("Nil", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm t_13 = ATgetArgument(p_13, 1);
                            if(((ATgetType(t_13) != AT_LIST) || !(ATisEmpty(t_13))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      {
                        ATerm r_13 = (ATerm) ATgetNext((ATermList) n_13);
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
      t = (ATerm) ATmakeAppl(sym_Var_1, f_0);
      return(t);
    }
    t = oncetd_1_0(o_0, t);
    j_0 = t;
    t = (ATerm) ATmakeAppl(sym_Match_1, j_0);
  }
  return(t);
}
ATerm map1_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm a_2 = NULL,b_2 = NULL,e_2 = NULL;
  a_2 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_2 = ATgetFirst((ATermList) t);
      e_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm u_13 = t;
    int v_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_0 = NULL,t_0 = NULL,b_1 = NULL,h_1 = NULL,i_1 = NULL,p_1 = NULL,r_1 = NULL,v_0 = NULL,u_0 = NULL;
        t = SSLgetAnnotations(a_2);
        i_1 = t;
        t = b_2;
        t = r_0(t);
        p_1 = t;
        t = (ATerm) ATinsert(CheckATermList(e_2), p_1);
        u_0 = t;
        t = SSLsetAnnotations(u_0, i_1);
        r_1 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_0 = ATgetFirst((ATermList) t);
            b_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_1);
        s_0 = t;
        t = b_1;
        {
          ATerm w_13 = t;
          int x_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(r_0, t);
              ;
              LocalPopChoice(x_13);
            }
          else
            {
              t = w_13;
            }
          h_1 = t;
          t = (ATerm) ATinsert(CheckATermList(h_1), t_0);
          v_0 = t;
          t = SSLsetAnnotations(v_0, s_0);
        }
        ;
        LocalPopChoice(v_13);
      }
    else
      {
        t = u_13;
        {
          ATerm m_2 = NULL,p_2 = NULL,w_0 = NULL;
          t = SSLgetAnnotations(a_2);
          m_2 = t;
          t = e_2;
          t = map1_1_0(r_0, t);
          p_2 = t;
          t = (ATerm) ATinsert(CheckATermList(p_2), b_2);
          w_0 = t;
          t = SSLsetAnnotations(w_0, m_2);
        }
      }
  }
  return(t);
}
ATerm q_0 (ATerm t)
{
  ATerm m_4 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      m_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, m_4, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_14), term_a_14));
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm n_4 = NULL,p_4 = NULL;
  p_4 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      n_4 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, n_4, term_a_14);
    }
  else
    {
      t = p_4;
    }
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm d_5 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      d_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, d_5, term_a_14);
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL;
  f_5 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      e_5 = ATgetArgument(t, 0);
      {
        ATerm b_14 = t;
        int c_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, e_5, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_14), term_a_14));
            ;
            LocalPopChoice(c_14);
          }
        else
          {
            t = b_14;
            t = f_5;
          }
      }
    }
  else
    {
      t = f_5;
    }
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm t_5 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      t_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, t_5, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_14), term_a_14));
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL;
  v_5 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      u_5 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, u_5, term_a_14);
    }
  else
    {
      t = v_5;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL,c_3 = NULL,d_3 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      c_3 = ATgetArgument(t, 0);
      d_3 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, c_3, d_3);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          c_3 = ATgetArgument(t, 0);
          t = c_3;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              w_2 = ATgetFirst((ATermList) t);
              x_2 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, w_2, (ATerm) ATmakeAppl(sym_LChoices_1, x_2));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_e_14;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              c_3 = ATgetArgument(t, 0);
              t = c_3;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_2 = ATgetFirst((ATermList) t);
                  x_2 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, w_2, (ATerm) ATmakeAppl(sym_Choices_1, x_2));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_e_14;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  c_3 = ATgetArgument(t, 0);
                  t = c_3;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      w_2 = ATgetFirst((ATermList) t);
                      x_2 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_2, (ATerm) ATmakeAppl(sym_Seqs_1, x_2));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_f_14;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      c_3 = ATgetArgument(t, 0);
                      d_3 = ATgetArgument(t, 1);
                      z_2 = ATgetArgument(t, 2);
                      y_2 = ATgetArgument(t, 3);
                      {
                        ATerm b_4 = NULL,k_4 = NULL;
                        t = d_3;
                        t = map1_1_0(q_0, t);
                        b_4 = t;
                        t = z_2;
                        t = map1_1_0(x_0, t);
                        k_4 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, c_3, b_4, k_4, y_2);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          c_3 = ATgetArgument(t, 0);
                          d_3 = ATgetArgument(t, 1);
                          z_2 = ATgetArgument(t, 2);
                          y_2 = ATgetArgument(t, 3);
                          {
                            ATerm g_14 = t;
                            int h_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm z_4 = NULL,c_5 = NULL;
                                t = z_2;
                                t = map1_1_0(y_0, t);
                                z_4 = t;
                                t = d_3;
                                t = map_1_0(z_0, t);
                                c_5 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, c_3, c_5, z_4, y_2);
                                ;
                                LocalPopChoice(h_14);
                              }
                            else
                              {
                                t = g_14;
                                {
                                  ATerm p_5 = NULL,r_5 = NULL;
                                  t = d_3;
                                  t = map1_1_0(c_1, t);
                                  p_5 = t;
                                  t = z_2;
                                  t = map_1_0(f_1, t);
                                  r_5 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, c_3, p_5, r_5, y_2);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              c_3 = ATgetArgument(t, 0);
                              d_3 = ATgetArgument(t, 1);
                              z_2 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, d_3, (ATerm) ATmakeAppl(sym_Op_2, term_l_14, (ATerm) ATinsert(ATinsert(ATempty, z_2), c_3)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  c_3 = ATgetArgument(t, 0);
                                  d_3 = ATgetArgument(t, 1);
                                  z_2 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, z_2)), c_3), (ATerm) ATmakeAppl(sym_Build_1, d_3)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      c_3 = ATgetArgument(t, 0);
                                      d_3 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, c_3, (ATerm) ATmakeAppl(sym_Match_1, d_3));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          c_3 = ATgetArgument(t, 0);
                                          d_3 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_3), d_3);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              c_3 = ATgetArgument(t, 0);
                                              d_3 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_3), c_3);
                                        }
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
ATerm repeat_1_0 (ATerm t_83 (ATerm), ATerm t)
{
  ATerm a_7 (ATerm t)
  {
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_83(t);
        t = a_7(t);
        ;
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
      }
    return(t);
  }
  t = a_7(t);
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm e_8 = NULL,o_8 = NULL,p_8 = NULL,t_8 = NULL;
  t_8 = t;
  if(match_cons(t, sym_Con_3))
    {
      e_8 = ATgetArgument(t, 0);
      o_8 = ATgetArgument(t, 1);
      p_8 = ATgetArgument(t, 2);
      {
        ATerm g_3 = NULL,a_1 = NULL;
        t = SSLgetAnnotations(t_8);
        g_3 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, e_8, o_8, p_8);
        a_1 = t;
        t = SSLsetAnnotations(a_1, g_3);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = t_8;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm r_14 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(g_1, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_14;
    }
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL,q_10 = NULL;
  f_10 = t;
  if(match_cons(t, sym_Con_3))
    {
      g_10 = ATgetArgument(t, 0);
      q_10 = ATgetArgument(t, 1);
      e_10 = ATgetArgument(t, 2);
      {
        ATerm f_4 = NULL,d_1 = NULL;
        t = SSLgetAnnotations(f_10);
        f_4 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, g_10, q_10, e_10);
        d_1 = t;
        t = SSLsetAnnotations(d_1, f_4);
      }
    }
  else
    {
      ATerm j_5 = NULL,e_1 = NULL;
      if(match_cons(t, sym_App_2))
        {
          g_10 = ATgetArgument(t, 0);
          q_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_10);
      j_5 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, g_10, q_10);
      e_1 = t;
      t = SSLsetAnnotations(e_1, j_5);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm v_14 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(k_1, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_14;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm d_11 = NULL,i_11 = NULL,k_11 = NULL,p_11 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      d_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_11;
  if(match_cons(t, sym_StratRule_3))
    {
      i_11 = ATgetArgument(t, 0);
      k_11 = ATgetArgument(t, 1);
      p_11 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_11), (ATerm) ATmakeAppl(sym_Where_1, p_11)), i_11));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          i_11 = ATgetArgument(t, 0);
          k_11 = ATgetArgument(t, 1);
          p_11 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = i_11;
      t = pureterm_0_0(t);
      t = k_11;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, k_11)), (ATerm) ATmakeAppl(sym_Where_1, p_11)), (ATerm) ATmakeAppl(sym_Match_1, i_11)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm v_85 (ATerm), ATerm t)
{
  ATerm b_12 (ATerm t)
  {
    ATerm w_14 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_85(t);
        ;
        LocalPopChoice(b_15);
      }
    else
      {
        t = w_14;
        t = SRTS_one(b_12, t);
      }
    return(t);
  }
  t = b_12(t);
  return(t);
}
ATerm b_7 (ATerm r_21, ATerm t_21, ATerm u_21, ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL;
  t = new_0_0(t);
  g_12 = t;
  t = r_21;
  {
    ATerm m_1 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm e_15 = ATgetArgument(t, 0);
          if(match_cons(e_15, sym_Var_1))
            {
              if(((f_12 != NULL) && (f_12 != ATgetArgument(e_15, 0))))
                _fail(ATgetArgument(e_15, 0));
              else
                f_12 = ATgetArgument(e_15, 0);
            }
          else
            _fail(t);
          if(((d_12 != NULL) && (d_12 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            d_12 = ATgetArgument(t, 1);
          {
            ATerm g_15 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, f_12);
      return(t);
    }
    t = oncetd_1_0(m_1, t);
    h_12 = t;
    t = t_21;
    {
      ATerm n_1 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm h_15 = ATgetArgument(t, 0);
            if(match_cons(h_15, sym_Var_1))
              {
                if(((f_12 != NULL) && (f_12 != ATgetArgument(h_15, 0))))
                  _fail(ATgetArgument(h_15, 0));
                else
                  f_12 = ATgetArgument(h_15, 0);
              }
            else
              _fail(t);
            if(((e_12 != NULL) && (e_12 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              e_12 = ATgetArgument(t, 1);
            {
              ATerm i_15 = ATgetArgument(t, 2);
              if(match_cons(i_15, sym_CallT_3))
                {
                  if(((c_12 != NULL) && (c_12 != ATgetArgument(i_15, 0))))
                    _fail(ATgetArgument(i_15, 0));
                  else
                    c_12 = ATgetArgument(i_15, 0);
                  {
                    ATerm j_15 = ATgetArgument(i_15, 1);
                    if(((ATgetType(j_15) != AT_LIST) || !(ATisEmpty(j_15))))
                      _fail(t);
                  }
                  {
                    ATerm n_15 = ATgetArgument(i_15, 2);
                    if(((ATgetType(n_15) != AT_LIST) || !(ATisEmpty(n_15))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, g_12);
        return(t);
      }
      t = oncetd_1_0(n_1, t);
      i_12 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_12), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, h_12, i_12, (ATerm) ATmakeAppl(sym_Seq_2, u_21, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(c_12), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(d_12), not_null(e_12), term_f_14))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(f_12)), (ATerm) ATmakeAppl(sym_Var_1, g_12))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm o_15 = t;
  int p_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_15 = t;
      int t_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,q_13 = NULL;
          k_13 = t;
          if(match_cons(t, sym_SRule_1))
            {
              l_13 = ATgetArgument(t, 0);
              t = l_13;
              if(match_cons(t, sym_Rule_3))
                {
                  g_13 = ATgetArgument(t, 0);
                  i_13 = ATgetArgument(t, 1);
                  j_13 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = k_13;
              t = b_7(g_13, i_13, j_13, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm u_6 = NULL,z_6 = NULL,j_1 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  l_13 = ATgetArgument(t, 0);
                  q_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(k_13);
              u_6 = t;
              t = q_13;
              t = desugarRule_0_0(t);
              z_6 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, l_13, z_6);
              j_1 = t;
              t = SSLsetAnnotations(j_1, u_6);
            }
          ;
          LocalPopChoice(t_15);
        }
      else
        {
          t = q_15;
          t = RtoS_0_0(t);
        }
      ;
      LocalPopChoice(p_15);
    }
  else
    {
      t = o_15;
    }
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL;
  a_15 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      z_14 = ATgetArgument(t, 0);
      t = z_14;
    }
  else
    {
      t = a_15;
    }
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL;
  m_15 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      l_15 = ATgetArgument(t, 0);
      t = l_15;
    }
  else
    {
      t = m_15;
    }
  return(t);
}
ATerm ListVarScope_0_0 (ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL,m_14 = NULL,n_14 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      m_14 = ATgetArgument(t, 0);
      n_14 = ATgetArgument(t, 1);
      j_14 = ATgetArgument(t, 2);
      k_14 = ATgetArgument(t, 3);
      {
        ATerm y_14 = NULL;
        t = j_14;
        t = map_1_0(o_1, t);
        y_14 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, m_14, n_14, y_14, k_14);
      }
    }
  else
    {
      ATerm k_15 = NULL;
      if(match_cons(t, sym_Scope_2))
        {
          m_14 = ATgetArgument(t, 0);
          n_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_14;
      t = map_1_0(s_1, t);
      k_15 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, k_15, n_14);
    }
  return(t);
}
ATerm topdown_1_0 (ATerm r_84 (ATerm), ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    t = topdown_1_0(r_84, t);
    return(t);
  }
  t = r_84(t);
  t = SRTS_all(t_1, t);
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm c_17 = NULL;
  ATerm u_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_17 = ATgetArgument(t, 0);
          {
            ATerm w_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_15);
      t = c_17;
    }
  else
    {
      t = u_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_17;
    }
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm l_17 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_17);
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm x_15 = t;
  int y_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(y_15);
    }
  else
    {
      t = x_15;
      {
        ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            n_17 = ATgetArgument(t, 0);
            t = n_17;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                n_17 = ATgetArgument(t, 0);
                o_17 = ATgetArgument(t, 1);
                p_17 = ATgetArgument(t, 2);
                q_17 = ATgetArgument(t, 3);
                t = p_17;
                t = map_1_0(c_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    n_17 = ATgetArgument(t, 0);
                    o_17 = ATgetArgument(t, 1);
                    p_17 = ATgetArgument(t, 2);
                    q_17 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = p_17;
                t = map_1_0(d_2, t);
              }
          }
      }
    }
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm b_18 = NULL;
  ATerm z_15 = t;
  int a_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_18 = ATgetArgument(t, 0);
          {
            ATerm b_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_16);
      t = b_18;
    }
  else
    {
      t = z_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_18;
    }
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm q_18 = NULL;
  ATerm c_16 = t;
  int d_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_18 = ATgetArgument(t, 0);
          {
            ATerm e_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_16);
      t = q_18;
    }
  else
    {
      t = c_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_18;
    }
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm y_19 = NULL,d_20 = NULL;
  d_20 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      y_19 = ATgetArgument(t, 0);
      t = y_19;
    }
  else
    {
      t = d_20;
    }
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm e_21 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_21);
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm f_16 = t;
  int h_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(h_16);
    }
  else
    {
      t = f_16;
      {
        ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL,o_21 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            k_21 = ATgetArgument(t, 0);
            t = k_21;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                k_21 = ATgetArgument(t, 0);
                l_21 = ATgetArgument(t, 1);
                m_21 = ATgetArgument(t, 2);
                o_21 = ATgetArgument(t, 3);
                t = m_21;
                t = map_1_0(i_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    k_21 = ATgetArgument(t, 0);
                    l_21 = ATgetArgument(t, 1);
                    m_21 = ATgetArgument(t, 2);
                    o_21 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = m_21;
                t = map_1_0(k_2, t);
              }
          }
      }
    }
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm f_23 = NULL;
  ATerm i_16 = t;
  int k_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_23 = ATgetArgument(t, 0);
          {
            ATerm l_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_16);
      t = f_23;
    }
  else
    {
      t = i_16;
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
ATerm k_2 (ATerm t)
{
  ATerm h_24 = NULL;
  ATerm p_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_24 = ATgetArgument(t, 0);
          {
            ATerm t_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_16);
      t = h_24;
    }
  else
    {
      t = p_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_24;
    }
  return(t);
}
ATerm DeclareVariables_0_0 (ATerm t)
{
  ATerm j_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      m_16 = ATgetArgument(t, 0);
      n_16 = ATgetArgument(t, 1);
      o_16 = ATgetArgument(t, 2);
      j_16 = ATgetArgument(t, 3);
      {
        ATerm w_16 = NULL,y_16 = NULL,z_16 = NULL;
        t = o_16;
        t = map_1_0(w_1, t);
        w_16 = t;
        t = j_16;
        t = free_vars_3_0(y_1, z_1, tboundin_3_0, t);
        t = map_1_0(f_2, t);
        y_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_16, w_16);
        t = diff_0_0(t);
        z_16 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, m_16, n_16, o_16, (ATerm) ATmakeAppl(sym_Scope_2, z_16, j_16));
      }
    }
  else
    {
      ATerm b_21 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          m_16 = ATgetArgument(t, 0);
          n_16 = ATgetArgument(t, 1);
          o_16 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = o_16;
      t = free_vars_3_0(g_2, h_2, tboundin_3_0, t);
      b_21 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, m_16, n_16, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, b_21, o_16));
    }
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm d_26 = NULL;
  ATerm u_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_26 = ATgetArgument(t, 0);
          {
            ATerm x_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_16);
      t = d_26;
    }
  else
    {
      t = u_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_26;
    }
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm h_26 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_26);
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm a_17 = t;
  int b_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(b_17);
    }
  else
    {
      t = a_17;
      {
        ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            n_26 = ATgetArgument(t, 0);
            t = n_26;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                n_26 = ATgetArgument(t, 0);
                o_26 = ATgetArgument(t, 1);
                p_26 = ATgetArgument(t, 2);
                q_26 = ATgetArgument(t, 3);
                t = p_26;
                t = map_1_0(q_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    n_26 = ATgetArgument(t, 0);
                    o_26 = ATgetArgument(t, 1);
                    p_26 = ATgetArgument(t, 2);
                    q_26 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = p_26;
                t = map_1_0(r_2, t);
              }
          }
      }
    }
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm o_28 = NULL;
  ATerm d_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_28 = ATgetArgument(t, 0);
          {
            ATerm m_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_17);
      t = o_28;
    }
  else
    {
      t = d_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_28;
    }
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm e_29 = NULL;
  ATerm r_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_29 = ATgetArgument(t, 0);
          {
            ATerm t_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_17);
      t = e_29;
    }
  else
    {
      t = r_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_29;
    }
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm n_29 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_29);
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm u_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(w_17);
    }
  else
    {
      t = u_17;
      {
        ATerm z_29 = NULL,b_30 = NULL,d_30 = NULL,e_30 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            z_29 = ATgetArgument(t, 0);
            t = z_29;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                z_29 = ATgetArgument(t, 0);
                b_30 = ATgetArgument(t, 1);
                d_30 = ATgetArgument(t, 2);
                e_30 = ATgetArgument(t, 3);
                t = d_30;
                t = map_1_0(u_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    z_29 = ATgetArgument(t, 0);
                    b_30 = ATgetArgument(t, 1);
                    d_30 = ATgetArgument(t, 2);
                    e_30 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = d_30;
                t = map_1_0(v_2, t);
              }
          }
      }
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm t_30 = NULL;
  ATerm x_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_30 = ATgetArgument(t, 0);
          {
            ATerm z_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_17);
      t = t_30;
    }
  else
    {
      t = x_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_30;
    }
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm e_31 = NULL;
  ATerm a_18 = t;
  int e_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_31 = ATgetArgument(t, 0);
          {
            ATerm f_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_18);
      t = e_31;
    }
  else
    {
      t = a_18;
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
ATerm RDtoSD_0_0 (ATerm t)
{
  ATerm b_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      f_25 = ATgetArgument(t, 0);
      g_25 = ATgetArgument(t, 1);
      h_25 = ATgetArgument(t, 2);
      b_25 = ATgetArgument(t, 3);
      {
        ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
        t = h_25;
        t = map_1_0(l_2, t);
        v_25 = t;
        t = b_25;
        t = free_vars_3_0(n_2, o_2, tboundin_3_0, t);
        x_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_25, v_25);
        t = diff_0_0(t);
        w_25 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, f_25, g_25, h_25, (ATerm) ATmakeAppl(sym_Scope_2, w_25, (ATerm) ATmakeAppl(sym_SRule_1, b_25)));
      }
    }
  else
    {
      ATerm m_29 = NULL;
      if(match_cons(t, sym_RDef_3))
        {
          f_25 = ATgetArgument(t, 0);
          g_25 = ATgetArgument(t, 1);
          h_25 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = h_25;
      t = free_vars_3_0(s_2, t_2, tboundin_3_0, t);
      m_29 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, f_25, g_25, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, m_29, (ATerm) ATmakeAppl(sym_SRule_1, h_25)));
    }
  return(t);
}
ATerm d_7 (ATerm b_101 (ATerm), ATerm u_45, ATerm s_45, ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL,p_31 = NULL,q_31 = NULL,s_31 = NULL,w_31 = NULL;
  q_31 = t;
  t = b_101(t);
  k_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_31, u_45, s_45);
  t = s_8(k_31, u_45, s_45, t);
  {
    ATerm g_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_31 = NULL;
        t = term_i_18;
        z_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_31, term_i_18);
        t = r_8(k_31, z_31, t);
        ;
        LocalPopChoice(h_18);
      }
    else
      {
        t = g_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_31 = ATgetFirst((ATermList) t);
        p_31 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_i_18;
    s_31 = t;
    t = (ATerm) ATinsert(CheckATermList(p_31), (ATerm) ATinsert(CheckATermList(l_31), u_45));
    w_31 = t;
    t = SSL_table_put(k_31, s_31, w_31);
    t = q_31;
  }
  return(t);
}
ATerm f_7 (ATerm g_57, ATerm h_57, ATerm t)
{
  ATerm a_32 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_57, h_57);
  t = r_8(g_57, h_57, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_32 = ATgetFirst((ATermList) t);
      {
        ATerm j_18 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_32;
  return(t);
}
ATerm g_33 (ATerm r_32, ATerm t)
{
  ATerm w_7 = NULL;
  t = term_k_18;
  w_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_18, r_32);
  t = f_7(w_7, r_32, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm l_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_18) != ATmakeSymbol("e_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_m_18;
  return(t);
}
ATerm h_33 (ATerm t_32, ATerm t)
{
  ATerm v_8 = NULL;
  t = term_k_18;
  v_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_18, t_32);
  t = f_7(v_8, t_32, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm n_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_18) != ATmakeSymbol("c_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_m_18;
  return(t);
}
ATerm CongDefined_0_0 (ATerm t)
{
  ATerm a_33 = NULL,c_33 = NULL;
  a_33 = t;
  if(match_cons(t, sym__2))
    {
      ATerm o_18 = ATgetArgument(t, 0);
      c_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_33;
  if(match_int(t, 0))
    {
      ATerm p_18 = t;
      int r_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_33(a_33, t);
          ;
          LocalPopChoice(r_18);
        }
      else
        {
          t = p_18;
          t = h_33(a_33, t);
        }
    }
  else
    {
      t = g_33(a_33, t);
    }
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_s_18;
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL;
  if(match_cons(t, sym__2))
    {
      z_9 = ATgetArgument(t, 0);
      a_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_8(z_9, a_10, t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_t_18;
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_k_18;
  return(t);
}
ATerm h_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_18;
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm d_10 = NULL,h_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_10 = ATgetFirst((ATermList) t);
      h_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_10, h_10);
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_19 = ATgetArgument(t, 0);
      if(match_cons(a_19, sym__2))
        {
          i_10 = ATgetArgument(a_19, 0);
          j_10 = ATgetArgument(a_19, 1);
        }
      else
        _fail(t);
      {
        ATerm b_19 = ATgetArgument(t, 1);
        if(match_cons(b_19, sym__2))
          {
            k_10 = ATgetArgument(b_19, 0);
            l_10 = ATgetArgument(b_19, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_10), i_10), (ATerm) ATinsert(CheckATermList(l_10), j_10));
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm m_10 = NULL;
  t = new_0_0(t);
  m_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, m_10, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_14), term_a_14)), m_10);
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm n_10 = NULL;
  n_10 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_10), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_k_18;
  return(t);
}
ATerm MkCongDef_0_0 (ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,y_35 = NULL;
  t_35 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      u_35 = ATgetArgument(t, 0);
      v_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_35;
  if(match_cons(t, sym_FunType_2))
    {
      y_35 = ATgetArgument(t, 0);
      s_35 = ATgetArgument(t, 1);
      {
        ATerm h_9 = NULL,l_9 = NULL,m_9 = NULL,p_9 = NULL,t_9 = NULL,w_9 = NULL;
        t = y_35;
        t = foldr_3_0(a_3, b_3, e_3, t);
        h_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_35, h_9);
        {
          ATerm c_19 = t;
          if((PushChoice() == 0))
            {
              t = CongDefined_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = c_19;
            }
          t = (ATerm) ATmakeAppl(sym__2, u_35, h_9);
          t_9 = t;
          t = term_f_19;
          w_9 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_35, h_9), term_f_19);
          t = d_7(f_3, t_9, w_9, t);
          t = y_35;
          t = genzip_4_0(h_3, i_3, j_3, k_3, t);
          if(match_cons(t, sym__2))
            {
              l_9 = ATgetArgument(t, 0);
              m_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_9;
          t = map_1_0(l_3, t);
          p_9 = t;
          t = (ATerm) ATmakeAppl(sym_SDefT_4, u_35, l_9, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, u_35, p_9));
        }
      }
    }
  else
    {
      ATerm y_10 = NULL,z_10 = NULL;
      if(match_cons(t, sym_ConstType_1))
        {
          ATerm g_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, u_35, term_s_18);
      {
        ATerm j_19 = t;
        if((PushChoice() == 0))
          {
            t = CongDefined_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = j_19;
          }
        t = (ATerm) ATmakeAppl(sym__2, u_35, term_s_18);
        y_10 = t;
        t = term_l_19;
        z_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_35, term_s_18), term_l_19);
        t = d_7(m_3, y_10, z_10, t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, u_35, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, u_35, (ATerm) ATempty));
      }
    }
  return(t);
}
ATerm filter_1_0 (ATerm e_97 (ATerm), ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL;
  c_37 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_37;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_37 = ATgetFirst((ATermList) t);
          e_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm m_19 = t;
        int n_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_11 = NULL,m_11 = NULL,n_11 = NULL,l_1 = NULL;
            t = SSLgetAnnotations(c_37);
            h_11 = t;
            t = d_37;
            t = e_97(t);
            m_11 = t;
            t = e_37;
            t = filter_1_0(e_97, t);
            n_11 = t;
            t = (ATerm) ATinsert(CheckATermList(n_11), m_11);
            l_1 = t;
            t = SSLsetAnnotations(l_1, h_11);
            ;
            LocalPopChoice(n_19);
          }
        else
          {
            t = m_19;
            t = e_37;
            t = filter_1_0(e_97, t);
          }
      }
    }
  return(t);
}
ATerm j_7 (ATerm a_57, ATerm b_57, ATerm t)
{
  ATerm p_37 = NULL,q_37 = NULL;
  q_37 = t;
  {
    ATerm o_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, a_57, b_57);
        t = r_8(a_57, b_57, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_19 = ATgetFirst((ATermList) t);
            p_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(p_19);
        t = SSL_table_put(a_57, b_57, p_37);
        t = (ATerm) ATmakeAppl(sym__3, a_57, b_57, p_37);
      }
    else
      {
        t = o_19;
        t = SSL_table_remove(a_57, b_57);
        t = (ATerm) ATmakeAppl(sym__2, a_57, b_57);
      }
    t = q_37;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm y_100 (ATerm), ATerm t)
{
  ATerm r_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL;
  b_38 = t;
  t = y_100(t);
  a_38 = t;
  {
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_38 = NULL;
        t = term_i_18;
        d_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_38, term_i_18);
        t = r_8(a_38, d_38, t);
        ;
        LocalPopChoice(s_19);
      }
    else
      {
        t = r_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_37 = ATgetFirst((ATermList) t);
        r_37 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_i_18;
    c_38 = t;
    t = SSL_table_put(a_38, c_38, r_37);
    t = z_37;
    {
      ATerm n_3 (ATerm t)
      {
        ATerm e_38 = NULL;
        e_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_38, e_38);
        t = j_7(a_38, e_38, t);
        return(t);
      }
      t = map_1_0(n_3, t);
      t = b_38;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm m_83 (ATerm), ATerm n_83 (ATerm), ATerm t)
{
  ATerm u_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_83(t);
      t = n_83(t);
      ;
      LocalPopChoice(v_19);
    }
  else
    {
      t = u_19;
      t = n_83(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm x_100 (ATerm), ATerm t)
{
  ATerm g_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL;
  j_38 = t;
  t = x_100(t);
  g_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_38, term_i_18);
  {
    ATerm w_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_38 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm j_20 = ATgetArgument(t, 0);
            ATerm k_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_i_18;
        x_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_38, term_i_18);
        t = r_8(g_38, x_38, t);
        ;
        LocalPopChoice(a_20);
      }
    else
      {
        t = w_19;
        t = (ATerm) ATempty;
      }
    k_38 = t;
    t = term_i_18;
    l_38 = t;
    t = (ATerm) ATinsert(CheckATermList(k_38), (ATerm) ATempty);
    m_38 = t;
    t = SSL_table_put(g_38, l_38, m_38);
    t = j_38;
  }
  return(t);
}
ATerm scope_2_0 (ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm t)
{
  ATerm o_3 (ATerm t)
  {
    t = end_scope_1_0(z_100, t);
    return(t);
  }
  t = begin_scope_1_0(z_100, t);
  t = restore_always_2_0(a_101, o_3, t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_k_18;
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = filter_1_0(r_3, t);
  t = concat_0_0(t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm k_39 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      k_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_39;
  t = filter_1_0(MkCongDef_0_0, t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm l_20 = t;
  int m_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RDtoSD_0_0(t);
      ;
      LocalPopChoice(m_20);
    }
  else
    {
      t = l_20;
      t = DeclareVariables_0_0(t);
    }
  t = topdown_1_0(t_3, t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm l_39 = NULL,m_39 = NULL,s_39 = NULL;
  s_39 = t;
  if(match_cons(t, sym_Call_2))
    {
      l_39 = ATgetArgument(t, 0);
      m_39 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_CallT_3, l_39, m_39, (ATerm) ATempty);
    }
  else
    {
      t = s_39;
    }
  return(t);
}
ATerm k_7 (ATerm u_18, ATerm v_18, ATerm t)
{
  ATerm a_39 = NULL,i_39 = NULL,j_39 = NULL;
  t = u_18;
  t = scope_2_0(p_3, q_3, t);
  i_39 = t;
  t = (ATerm) ATinsert(CheckATermList(v_18), (ATerm) ATmakeAppl(sym_RDefT_4, term_n_20, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_VarDec_2, term_p_20, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_14), term_a_14))), (ATerm) ATmakeAppl(sym_VarDec_2, term_o_20, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_14), term_a_14))), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, term_u_20, term_z_20, (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATempty, term_q_21), term_f_21)))));
  t = map_1_0(s_3, t);
  j_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_39, j_39);
  t = conc_0_0(t);
  a_39 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, a_39)), (ATerm) ATmakeAppl(sym_Signature_1, u_18)));
  return(t);
}
ATerm at_end_1_0 (ATerm y_90 (ATerm), ATerm t)
{
  ATerm m_41 (ATerm t)
  {
    ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL;
    l_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_41 = ATgetFirst((ATermList) t);
        k_41 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm k_12 = NULL,n_12 = NULL,q_1 = NULL;
          t = SSLgetAnnotations(l_41);
          k_12 = t;
          t = k_41;
          t = m_41(t);
          n_12 = t;
          t = (ATerm) ATinsert(CheckATermList(n_12), j_41);
          q_1 = t;
          t = SSLsetAnnotations(q_1, k_12);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_41;
        t = y_90(t);
      }
    return(t);
  }
  t = m_41(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL;
  j_40 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_40;
    }
  else
    {
      ATerm u_3 (ATerm t)
      {
        t = not_null(l_40);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_40 = ATgetFirst((ATermList) t);
          if(((l_40 != NULL) && (l_40 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            l_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_40;
      t = at_end_1_0(u_3, t);
    }
  return(t);
}
ATerm k_42 (ATerm q_41, ATerm t)
{
  ATerm u_41 = NULL;
  t = SSL_explode_term(q_41);
  if(match_cons(t, sym__2))
    {
      ATerm s_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      u_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_41;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL;
  b_42 = t;
  if(match_cons(t, sym__2))
    {
      z_41 = ATgetArgument(t, 0);
      a_42 = ATgetArgument(t, 1);
      {
        ATerm v_21 = t;
        int w_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_3 (ATerm t)
            {
              t = a_42;
              return(t);
            }
            t = z_41;
            t = at_end_1_0(v_3, t);
            ;
            LocalPopChoice(w_21);
          }
        else
          {
            t = v_21;
            t = k_42(b_42, t);
          }
      }
    }
  else
    {
      t = k_42(b_42, t);
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_21 = ATgetArgument(t, 0);
      if(((ATgetType(x_21) != AT_LIST) || !(ATisEmpty(x_21))))
        _fail(t);
      {
        ATerm y_21 = ATgetArgument(t, 1);
        if(((ATgetType(y_21) != AT_LIST) || !(ATisEmpty(y_21))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL,x_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_21 = ATgetArgument(t, 0);
      if(((ATgetType(z_21) == AT_LIST) && !(ATisEmpty(z_21))))
        {
          s_14 = ATgetFirst((ATermList) z_21);
          t_14 = (ATerm) ATgetNext((ATermList) z_21);
        }
      else
        _fail(t);
      {
        ATerm a_22 = ATgetArgument(t, 1);
        if(((ATgetType(a_22) == AT_LIST) && !(ATisEmpty(a_22))))
          {
            u_14 = ATgetFirst((ATermList) a_22);
            x_14 = (ATerm) ATgetNext((ATermList) a_22);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_14, u_14), (ATerm) ATmakeAppl(sym__2, t_14, x_14));
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL;
  if(match_cons(t, sym__2))
    {
      c_15 = ATgetArgument(t, 0);
      d_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_15), c_15);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm f_15 = NULL,r_15 = NULL,s_15 = NULL;
  if(match_cons(t, sym__2))
    {
      f_15 = ATgetArgument(t, 0);
      s_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_15;
  {
    ATerm b_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm f_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(d_22);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, s_15);
      }
    else
      {
        t = b_22;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm g_22 = ATgetArgument(t, 0);
            r_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, s_15, r_15);
      }
  }
  return(t);
}
ATerm a_4 (ATerm t)
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
ATerm c_4 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_22 = ATgetArgument(t, 0);
      if(((ATgetType(j_22) == AT_LIST) && !(ATisEmpty(j_22))))
        {
          e_17 = ATgetFirst((ATermList) j_22);
          f_17 = (ATerm) ATgetNext((ATermList) j_22);
        }
      else
        _fail(t);
      {
        ATerm k_22 = ATgetArgument(t, 1);
        if(((ATgetType(k_22) == AT_LIST) && !(ATisEmpty(k_22))))
          {
            g_17 = ATgetFirst((ATermList) k_22);
            h_17 = (ATerm) ATgetNext((ATermList) k_22);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_17, g_17), (ATerm) ATmakeAppl(sym__2, f_17, h_17));
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL;
  if(match_cons(t, sym__2))
    {
      i_17 = ATgetArgument(t, 0);
      j_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_17), i_17);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm v_17 = NULL,c_18 = NULL,d_18 = NULL;
  if(match_cons(t, sym__2))
    {
      v_17 = ATgetArgument(t, 0);
      d_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_17;
  {
    ATerm l_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm o_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(n_22);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, d_18);
      }
    else
      {
        t = l_22;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm q_22 = ATgetArgument(t, 0);
            c_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, d_18, c_18);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm j_112 (ATerm), ATerm t)
{
  ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL;
  o_46 = t;
  if(match_cons(t, sym_Scope_2))
    {
      p_46 = ATgetArgument(t, 0);
      q_46 = ATgetArgument(t, 1);
      {
        ATerm c_13 = NULL,h_13 = NULL,u_1 = NULL;
        t = SSLgetAnnotations(o_46);
        c_13 = t;
        t = p_46;
        t = j_112(t);
        h_13 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, h_13, q_46);
        u_1 = t;
        t = SSLsetAnnotations(u_1, c_13);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          p_46 = ATgetArgument(t, 0);
          q_46 = ATgetArgument(t, 1);
          r_46 = ATgetArgument(t, 2);
          s_46 = ATgetArgument(t, 3);
          {
            ATerm d_14 = NULL,i_14 = NULL,q_14 = NULL,v_1 = NULL;
            t = SSLgetAnnotations(o_46);
            d_14 = t;
            t = r_46;
            t = j_112(t);
            q_14 = t;
            t = (ATerm) ATmakeAppl(sym__2, r_46, q_14);
            t = genzip_4_0(w_3, x_3, y_3, z_3, t);
            i_14 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, p_46, q_46, i_14, s_46);
            v_1 = t;
            t = SSLsetAnnotations(v_1, d_14);
          }
        }
      else
        {
          ATerm g_16 = NULL,r_16 = NULL,s_16 = NULL,x_1 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              p_46 = ATgetArgument(t, 0);
              q_46 = ATgetArgument(t, 1);
              r_46 = ATgetArgument(t, 2);
              s_46 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_46);
          g_16 = t;
          t = r_46;
          t = j_112(t);
          s_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_46, s_16);
          t = genzip_4_0(a_4, c_4, d_4, e_4, t);
          r_16 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, p_46, q_46, r_16, s_46);
          x_1 = t;
          t = SSLsetAnnotations(x_1, g_16);
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm m_112 (ATerm), ATerm t)
{
  ATerm t_49 = NULL,u_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL;
  w_49 = t;
  if(match_cons(t, sym_Scope_2))
    {
      x_49 = ATgetArgument(t, 0);
      t_49 = ATgetArgument(t, 1);
      {
        ATerm e_19 = NULL,h_19 = NULL,i_19 = NULL,j_2 = NULL;
        t = SSLgetAnnotations(w_49);
        e_19 = t;
        t = x_49;
        t = m_112(t);
        h_19 = t;
        t = t_49;
        t = k_112(t);
        i_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, h_19, i_19);
        j_2 = t;
        t = SSLsetAnnotations(j_2, e_19);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          x_49 = ATgetArgument(t, 0);
          t_49 = ATgetArgument(t, 1);
          u_49 = ATgetArgument(t, 2);
          v_49 = ATgetArgument(t, 3);
          {
            ATerm t_19 = NULL,b_20 = NULL,c_20 = NULL,e_20 = NULL,g_20 = NULL,h_7 = NULL;
            t = SSLgetAnnotations(w_49);
            t_19 = t;
            t = x_49;
            t = m_112(t);
            b_20 = t;
            t = t_49;
            t = m_112(t);
            c_20 = t;
            t = u_49;
            t = m_112(t);
            e_20 = t;
            t = v_49;
            t = k_112(t);
            g_20 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, b_20, c_20, e_20, g_20);
            h_7 = t;
            t = SSLsetAnnotations(h_7, t_19);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              x_49 = ATgetArgument(t, 0);
              t_49 = ATgetArgument(t, 1);
              u_49 = ATgetArgument(t, 2);
              v_49 = ATgetArgument(t, 3);
              {
                ATerm a_21 = NULL,i_21 = NULL,j_21 = NULL,n_21 = NULL,p_21 = NULL,i_7 = NULL;
                t = SSLgetAnnotations(w_49);
                a_21 = t;
                t = x_49;
                t = m_112(t);
                i_21 = t;
                t = t_49;
                t = m_112(t);
                j_21 = t;
                t = u_49;
                t = m_112(t);
                n_21 = t;
                t = v_49;
                t = k_112(t);
                p_21 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, i_21, j_21, n_21, p_21);
                i_7 = t;
                t = SSLsetAnnotations(i_7, a_21);
              }
            }
          else
            {
              ATerm c_22 = NULL,e_22 = NULL,m_7 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  x_49 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(w_49);
              c_22 = t;
              t = x_49;
              t = k_112(t);
              e_22 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, e_22);
              m_7 = t;
              t = SSLsetAnnotations(m_7, c_22);
            }
        }
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm g_50 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_50);
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm r_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(s_22);
    }
  else
    {
      t = r_22;
      {
        ATerm t_22 = t;
        int u_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            ;
            LocalPopChoice(u_22);
          }
        else
          {
            t = t_22;
            {
              ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  i_50 = ATgetArgument(t, 0);
                  j_50 = ATgetArgument(t, 1);
                  k_50 = ATgetArgument(t, 2);
                  l_50 = ATgetArgument(t, 3);
                  t = k_50;
                  t = map_1_0(i_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      i_50 = ATgetArgument(t, 0);
                      j_50 = ATgetArgument(t, 1);
                      k_50 = ATgetArgument(t, 2);
                      l_50 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_50;
                  t = map_1_0(j_4, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm z_50 = NULL;
  ATerm v_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_50 = ATgetArgument(t, 0);
          {
            ATerm x_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_22);
      t = z_50;
    }
  else
    {
      t = v_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_50;
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm i_51 = NULL;
  ATerm y_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_51 = ATgetArgument(t, 0);
          {
            ATerm b_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_22);
      t = i_51;
    }
  else
    {
      t = y_22;
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
  ATerm f_50 = NULL;
  if(match_cons(t, sym_DynamicRules_1))
    {
      f_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_50;
  t = free_vars_3_0(g_4, h_4, tboundin_3_0, t);
  return(t);
}
ATerm l_4 (ATerm t)
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
ATerm o_4 (ATerm t)
{
  ATerm c_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(d_23);
    }
  else
    {
      t = c_23;
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
                t = map_1_0(q_4, t);
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
                t = map_1_0(r_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm d_52 = NULL;
  ATerm e_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_52 = ATgetArgument(t, 0);
          {
            ATerm i_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_23);
      t = d_52;
    }
  else
    {
      t = e_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_52;
    }
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm r_52 = NULL;
  ATerm j_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_52 = ATgetArgument(t, 0);
          {
            ATerm l_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_23);
      t = r_52;
    }
  else
    {
      t = j_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_52;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(l_4, o_4, tboundin_3_0, t);
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm g_53 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_53);
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(n_23);
    }
  else
    {
      t = m_23;
      {
        ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            i_53 = ATgetArgument(t, 0);
            t = i_53;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                i_53 = ATgetArgument(t, 0);
                j_53 = ATgetArgument(t, 1);
                k_53 = ATgetArgument(t, 2);
                l_53 = ATgetArgument(t, 3);
                t = k_53;
                t = map_1_0(u_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    i_53 = ATgetArgument(t, 0);
                    j_53 = ATgetArgument(t, 1);
                    k_53 = ATgetArgument(t, 2);
                    l_53 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = k_53;
                t = map_1_0(v_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm t_53 = NULL;
  ATerm o_23 = t;
  int p_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_53 = ATgetArgument(t, 0);
          {
            ATerm q_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_23);
      t = t_53;
    }
  else
    {
      t = o_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_53;
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm c_54 = NULL;
  ATerm r_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_54 = ATgetArgument(t, 0);
          {
            ATerm w_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_23);
      t = c_54;
    }
  else
    {
      t = r_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_54;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm z_52 = NULL,d_53 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      d_53 = ATgetArgument(t, 0);
      t = d_53;
      if(match_cons(t, sym_Rule_3))
        {
          z_52 = ATgetArgument(t, 0);
          {
            ATerm b_24 = ATgetArgument(t, 1);
          }
          {
            ATerm f_24 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = z_52;
      t = free_vars_3_0(s_4, t_4, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          d_53 = ATgetArgument(t, 0);
          {
            ATerm g_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = d_53;
    }
  return(t);
}
ATerm q_7 (ATerm b_94 (ATerm), ATerm f_34, ATerm e_34, ATerm t)
{
  ATerm z_54 (ATerm t)
  {
    ATerm u_54 = NULL,v_54 = NULL,w_54 = NULL;
    u_54 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_34;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_54 = ATgetFirst((ATermList) t);
            w_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm i_24 = t;
          int j_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_54;
              {
                ATerm w_4 (ATerm t)
                {
                  t = e_34;
                  return(t);
                }
                t = r_7(b_94, w_4, v_54, w_54, t);
                t = z_54(t);
              }
              ;
              LocalPopChoice(j_24);
            }
          else
            {
              t = i_24;
              {
                ATerm m_22 = NULL,p_22 = NULL,a_8 = NULL;
                t = SSLgetAnnotations(u_54);
                m_22 = t;
                t = w_54;
                t = z_54(t);
                p_22 = t;
                t = (ATerm) ATinsert(CheckATermList(p_22), v_54);
                a_8 = t;
                t = SSLsetAnnotations(a_8, m_22);
              }
            }
        }
      }
    return(t);
  }
  t = f_34;
  t = z_54(t);
  return(t);
}
ATerm foldr_3_0 (ATerm c_96 (ATerm), ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm t)
{
  ATerm e_55 = NULL,f_55 = NULL,g_55 = NULL;
  e_55 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_55;
      t = c_96(t);
    }
  else
    {
      ATerm j_55 = NULL,k_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_55 = ATgetFirst((ATermList) t);
          g_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_55;
      t = e_96(t);
      j_55 = t;
      t = g_55;
      t = foldr_3_0(c_96, d_96, e_96, t);
      k_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_55, k_55);
      t = d_96(t);
    }
  return(t);
}
ATerm r_7 (ATerm e_94 (ATerm), ATerm f_94 (ATerm), ATerm j_34, ATerm i_34, ATerm t)
{
  t = f_94(t);
  {
    ATerm x_4 (ATerm t)
    {
      ATerm o_55 = NULL;
      o_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_34, o_55);
      t = e_94(t);
      return(t);
    }
    t = fetch_1_0(x_4, t);
    t = i_34;
  }
  return(t);
}
ATerm s_7 (ATerm w_93 (ATerm), ATerm d_34, ATerm c_34, ATerm t)
{
  ATerm p_56 (ATerm t)
  {
    ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL;
    k_56 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_56;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_56 = ATgetFirst((ATermList) t);
            m_56 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_24 = t;
          int o_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_56;
              {
                ATerm y_4 (ATerm t)
                {
                  t = c_34;
                  return(t);
                }
                t = r_7(w_93, y_4, l_56, m_56, t);
                t = p_56(t);
              }
              ;
              LocalPopChoice(o_24);
            }
          else
            {
              t = n_24;
              {
                ATerm a_23 = NULL,h_23 = NULL,c_8 = NULL;
                t = SSLgetAnnotations(k_56);
                a_23 = t;
                t = m_56;
                t = p_56(t);
                h_23 = t;
                t = (ATerm) ATinsert(CheckATermList(h_23), l_56);
                c_8 = t;
                t = SSLsetAnnotations(c_8, a_23);
              }
            }
        }
      }
    return(t);
  }
  t = d_34;
  t = p_56(t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_24 = ATgetArgument(t, 0);
      if(((ATgetType(p_24) != AT_LIST) || !(ATisEmpty(p_24))))
        _fail(t);
      {
        ATerm q_24 = ATgetArgument(t, 1);
        if(((ATgetType(q_24) != AT_LIST) || !(ATisEmpty(q_24))))
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
  ATerm m_57 = NULL,n_57 = NULL,o_57 = NULL,p_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_24 = ATgetArgument(t, 0);
      if(((ATgetType(r_24) == AT_LIST) && !(ATisEmpty(r_24))))
        {
          m_57 = ATgetFirst((ATermList) r_24);
          n_57 = (ATerm) ATgetNext((ATermList) r_24);
        }
      else
        _fail(t);
      {
        ATerm s_24 = ATgetArgument(t, 1);
        if(((ATgetType(s_24) == AT_LIST) && !(ATisEmpty(s_24))))
          {
            o_57 = ATgetFirst((ATermList) s_24);
            p_57 = (ATerm) ATgetNext((ATermList) s_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_57, o_57), (ATerm) ATmakeAppl(sym__2, n_57, p_57));
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm q_57 = NULL,r_57 = NULL;
  if(match_cons(t, sym__2))
    {
      q_57 = ATgetArgument(t, 0);
      r_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_57), q_57);
  return(t);
}
ATerm u_7 (ATerm h_622, ATerm m_622, ATerm h_61, ATerm t)
{
  ATerm t_56 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL;
  t = SSL_explode_term(m_622);
  if(match_cons(t, sym__2))
    {
      t_56 = ATgetArgument(t, 0);
      j_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(h_622);
  if(match_cons(t, sym__2))
    {
      if((t_56 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      i_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_57, j_57);
  t = genzip_4_0(a_5, b_5, g_5, _id, t);
  k_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_57, h_61);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm i_84 (ATerm), ATerm j_84 (ATerm), ATerm t)
{
  ATerm z_57 (ATerm t)
  {
    ATerm t_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_84(t);
        ;
        LocalPopChoice(v_24);
      }
    else
      {
        t = t_24;
        t = j_84(t);
        t = z_57(t);
      }
    return(t);
  }
  t = z_57(t);
  return(t);
}
ATerm for_3_0 (ATerm l_84 (ATerm), ATerm m_84 (ATerm), ATerm n_84 (ATerm), ATerm t)
{
  t = l_84(t);
  t = while_not_2_0(m_84, n_84, t);
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm g_58 = NULL;
  g_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, g_58);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL,y_8 = NULL;
  k_58 = t;
  if(match_cons(t, sym__2))
    {
      i_58 = ATgetArgument(t, 0);
      j_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_58);
  h_58 = t;
  t = j_58;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_58, j_58);
  y_8 = t;
  t = SSLsetAnnotations(y_8, h_58);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL;
  f_60 = t;
  if(match_cons(t, sym__2))
    {
      g_60 = ATgetArgument(t, 0);
      h_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_60;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_60 = ATgetFirst((ATermList) t);
      j_60 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_24 = t;
        int x_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_60(g_60, h_60, f_60, t);
            ;
            LocalPopChoice(x_24);
          }
        else
          {
            t = w_24;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_60), i_60), j_60);
          }
      }
    }
  else
    {
      t = y_60(g_60, h_60, f_60, t);
    }
  return(t);
}
ATerm y_60 (ATerm l_58, ATerm o_58, ATerm p_58, ATerm t)
{
  ATerm q_58 = NULL,r_59 = NULL,d_9 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL;
  t = SSLgetAnnotations(p_58);
  q_58 = t;
  t = o_58;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_59 = ATgetFirst((ATermList) t);
      x_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_59;
  if(match_cons(t, sym__2))
    {
      v_59 = ATgetArgument(t, 0);
      w_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_59;
        if((v_59 != t))
          {
            _fail(t);
          }
        t = x_59;
        ;
        LocalPopChoice(a_25);
      }
    else
      {
        t = y_24;
        t = o_58;
        t = u_7(v_59, w_59, x_59, t);
      }
    r_59 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_58, r_59);
    d_9 = t;
    t = SSLsetAnnotations(d_9, q_58);
  }
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm x_60 = NULL;
  if(match_cons(t, sym__2))
    {
      x_60 = ATgetArgument(t, 0);
      if((x_60 != ATgetArgument(t, 1)))
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
  ATerm c_25 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(h_5, i_5, k_5, t);
      ;
      LocalPopChoice(d_25);
    }
  else
    {
      t = c_25;
      {
        ATerm n_60 = NULL,o_60 = NULL,r_60 = NULL;
        n_60 = t;
        if(match_cons(t, sym__2))
          {
            o_60 = ATgetArgument(t, 0);
            r_60 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_60;
        t = s_7(l_5, o_60, r_60, t);
      }
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL;
  if(match_cons(t, sym__2))
    {
      x_23 = ATgetArgument(t, 0);
      y_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_7(s_5, x_23, y_23, t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm z_23 = NULL;
  if(match_cons(t, sym__2))
    {
      z_23 = ATgetArgument(t, 0);
      if((z_23 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL;
  if(match_cons(t, sym__2))
    {
      k_24 = ATgetArgument(t, 0);
      l_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_7(y_5, k_24, l_24, t);
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm m_24 = NULL;
  if(match_cons(t, sym__2))
    {
      m_24 = ATgetArgument(t, 0);
      if((m_24 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm i_111 (ATerm), ATerm j_111 (ATerm), ATerm k_111 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm u_61 (ATerm t)
  {
    ATerm e_25 = t;
    int i_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_111(t);
        ;
        LocalPopChoice(i_25);
      }
    else
      {
        t = e_25;
        {
          ATerm j_25 = t;
          int k_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_61 = NULL,c_61 = NULL,s_23 = NULL,t_23 = NULL;
              a_61 = t;
              t = j_111(t);
              c_61 = t;
              t = a_61;
              {
                ATerm m_5 (ATerm t)
                {
                  ATerm i_61 = NULL;
                  t = u_61(t);
                  i_61 = t;
                  t = (ATerm) ATmakeAppl(sym__2, i_61, c_61);
                  t = diff_0_0(t);
                  return(t);
                }
                t = k_111(m_5, u_61, n_5, t);
                t_23 = t;
                t = SSL_explode_term(t_23);
                if(match_cons(t, sym__2))
                  {
                    ATerm l_25 = ATgetArgument(t, 0);
                    s_23 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = s_23;
                t = foldr_3_0(o_5, q_5, _id, t);
              }
              ;
              LocalPopChoice(k_25);
            }
          else
            {
              t = j_25;
              {
                ATerm c_24 = NULL,e_24 = NULL;
                e_24 = t;
                t = SSL_explode_term(e_24);
                if(match_cons(t, sym__2))
                  {
                    ATerm m_25 = ATgetArgument(t, 0);
                    c_24 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_24;
                t = foldr_3_0(w_5, x_5, u_61, t);
              }
            }
        }
      }
    return(t);
  }
  t = u_61(t);
  return(t);
}
ATerm Var_1_0 (ATerm f_70 (ATerm), ATerm t)
{
  ATerm v_61 = NULL,w_61 = NULL,x_61 = NULL,y_61 = NULL,j_9 = NULL;
  y_61 = t;
  if(match_cons(t, sym_Var_1))
    {
      w_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_61);
  v_61 = t;
  t = w_61;
  t = f_70(t);
  x_61 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, x_61);
  j_9 = t;
  t = SSLsetAnnotations(j_9, v_61);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm c_63 = NULL,d_63 = NULL,e_63 = NULL,f_63 = NULL,h_63 = NULL,m_63 = NULL,n_63 = NULL;
  e_63 = t;
  if(match_cons(t, sym__2))
    {
      f_63 = ATgetArgument(t, 0);
      h_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_63;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_63 = ATgetFirst((ATermList) t);
      n_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_63;
  if(match_cons(t, sym__2))
    {
      c_63 = ATgetArgument(t, 0);
      d_63 = ATgetArgument(t, 1);
      {
        ATerm n_25 = t;
        int o_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_63;
            if((f_63 != t))
              {
                _fail(t);
              }
            t = d_63;
            ;
            LocalPopChoice(o_25);
          }
        else
          {
            t = n_25;
            t = (ATerm) ATmakeAppl(sym__2, f_63, n_63);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, f_63, n_63);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm x_7 (ATerm d_110 (ATerm), ATerm e_110 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm o_59, ATerm n_59, ATerm m_59, ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    ATerm a_62 = NULL;
    a_62 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_62, m_59);
    t = d_110(t);
    return(t);
  }
  ATerm a_6 (ATerm t)
  {
    ATerm b_62 = NULL;
    b_62 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_62, n_59);
    t = d_110(t);
    return(t);
  }
  t = o_59;
  t = e_110(z_5, a_6, _id, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm b_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_25 = ATgetArgument(t, 0);
      if(((ATgetType(q_25) != AT_LIST) || !(ATisEmpty(q_25))))
        _fail(t);
      {
        ATerm r_25 = ATgetArgument(t, 1);
        if(((ATgetType(r_25) != AT_LIST) || !(ATisEmpty(r_25))))
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
  ATerm m_62 = NULL,n_62 = NULL,r_62 = NULL,s_62 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_25 = ATgetArgument(t, 0);
      if(((ATgetType(t_25) == AT_LIST) && !(ATisEmpty(t_25))))
        {
          m_62 = ATgetFirst((ATermList) t_25);
          n_62 = (ATerm) ATgetNext((ATermList) t_25);
        }
      else
        _fail(t);
      {
        ATerm u_25 = ATgetArgument(t, 1);
        if(((ATgetType(u_25) == AT_LIST) && !(ATisEmpty(u_25))))
          {
            r_62 = ATgetFirst((ATermList) u_25);
            s_62 = (ATerm) ATgetNext((ATermList) u_25);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_62, r_62), (ATerm) ATmakeAppl(sym__2, n_62, s_62));
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm t_62 = NULL,u_62 = NULL;
  if(match_cons(t, sym__2))
    {
      t_62 = ATgetArgument(t, 0);
      u_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_62), t_62);
  return(t);
}
ATerm y_7 (ATerm x_109 (ATerm), ATerm y_109 (ATerm (ATerm), ATerm), ATerm g_59, ATerm j_59, ATerm t)
{
  ATerm f_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL,l_62 = NULL;
  t = g_59;
  t = x_109(t);
  f_62 = t;
  t = map_1_0(new_0_0, t);
  h_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_62, h_62);
  t = genzip_4_0(b_6, c_6, d_6, _id, t);
  l_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_62, j_59);
  t = conc_0_0(t);
  i_62 = t;
  t = g_59;
  {
    ATerm e_6 (ATerm t)
    {
      t = h_62;
      return(t);
    }
    t = y_109(e_6, t);
    j_62 = t;
    t = (ATerm) ATmakeAppl(sym__3, j_62, j_59, i_62);
  }
  return(t);
}
ATerm env_alltd_1_0 (ATerm h_89 (ATerm), ATerm t)
{
  ATerm c_65 (ATerm t)
  {
    ATerm y_25 = t;
    int z_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_89(t);
        ;
        LocalPopChoice(z_25);
      }
    else
      {
        t = y_25;
        {
          ATerm y_64 = NULL,a_65 = NULL,b_65 = NULL;
          ATerm f_6 (ATerm t)
          {
            ATerm u_24 = NULL;
            u_24 = t;
            t = (ATerm) ATmakeAppl(sym__2, u_24, not_null(b_65));
            t = c_65(t);
            return(t);
          }
          y_64 = t;
          if(match_cons(t, sym__2))
            {
              a_65 = ATgetArgument(t, 0);
              if(((b_65 != NULL) && (b_65 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                b_65 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_65;
          t = SRTS_all(f_6, t);
        }
      }
    return(t);
  }
  t = c_65(t);
  return(t);
}
ATerm g_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_26 = ATgetArgument(t, 0);
      if(((ATgetType(a_26) != AT_LIST) || !(ATisEmpty(a_26))))
        _fail(t);
      {
        ATerm b_26 = ATgetArgument(t, 1);
        if(((ATgetType(b_26) != AT_LIST) || !(ATisEmpty(b_26))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm x_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_26 = ATgetArgument(t, 0);
      if(((ATgetType(c_26) == AT_LIST) && !(ATisEmpty(c_26))))
        {
          x_65 = ATgetFirst((ATermList) c_26);
          y_65 = (ATerm) ATgetNext((ATermList) c_26);
        }
      else
        _fail(t);
      {
        ATerm e_26 = ATgetArgument(t, 1);
        if(((ATgetType(e_26) == AT_LIST) && !(ATisEmpty(e_26))))
          {
            z_65 = ATgetFirst((ATermList) e_26);
            a_66 = (ATerm) ATgetNext((ATermList) e_26);
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
ATerm i_6 (ATerm t)
{
  ATerm b_66 = NULL,e_66 = NULL;
  if(match_cons(t, sym__2))
    {
      b_66 = ATgetArgument(t, 0);
      e_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_66), b_66);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm i_65 = NULL,j_65 = NULL,k_65 = NULL,m_65 = NULL;
  i_65 = t;
  {
    ATerm f_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_26 = ATgetArgument(t, 0);
            ATerm l_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(g_26);
        t = i_65;
      }
    else
      {
        t = f_26;
        {
          ATerm s_65 = NULL;
          if(match_cons(t, sym__3))
            {
              j_65 = ATgetArgument(t, 0);
              k_65 = ATgetArgument(t, 1);
              m_65 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, j_65, k_65);
          t = genzip_4_0(g_6, h_6, i_6, _id, t);
          s_65 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_65, m_65);
        }
      }
  }
  return(t);
}
ATerm substitute_6_0 (ATerm e_109 (ATerm), ATerm f_109 (ATerm (ATerm), ATerm), ATerm g_109 (ATerm), ATerm h_109 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm i_109 (ATerm (ATerm), ATerm), ATerm j_109 (ATerm), ATerm t)
{
  ATerm j_66 = NULL,m_66 = NULL;
  ATerm j_67 (ATerm t)
  {
    ATerm j_6 (ATerm t)
    {
      ATerm k_67 (ATerm n_66, ATerm t)
      {
        ATerm o_66 = NULL,z_24 = NULL;
        t = SSL_explode_term(n_66);
        if(match_cons(t, sym__2))
          {
            ATerm m_26 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) m_26) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm r_26 = ATgetArgument(t, 1);
              if(((ATgetType(r_26) == AT_LIST) && !(ATisEmpty(r_26))))
                {
                  o_66 = ATgetFirst((ATermList) r_26);
                  {
                    ATerm s_26 = (ATerm) ATgetNext((ATermList) r_26);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = o_66;
        t = e_109(t);
        z_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_24, not_null(m_66));
        t = lookup_0_0(t);
        t = j_109(t);
        return(t);
      }
      ATerm l_67 (ATerm s_66, ATerm t_66, ATerm v_66, ATerm t)
      {
        ATerm w_66 = NULL,x_66 = NULL,y_66 = NULL;
        t = v_66;
        t = y_7(g_109, i_109, s_66, t_66, t);
        if(match_cons(t, sym__3))
          {
            w_66 = ATgetArgument(t, 0);
            x_66 = ATgetArgument(t, 1);
            y_66 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = x_7(j_67, h_109, w_66, x_66, y_66, t);
        return(t);
      }
      ATerm b_67 = NULL,c_67 = NULL,d_67 = NULL;
      b_67 = t;
      if(match_cons(t, sym__2))
        {
          c_67 = ATgetArgument(t, 0);
          d_67 = ATgetArgument(t, 1);
          {
            ATerm t_26 = t;
            int u_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_6 (ATerm t)
                {
                  ATerm i_67 = NULL;
                  i_67 = t;
                  t = (ATerm) ATmakeAppl(sym__2, i_67, d_67);
                  t = lookup_0_0(t);
                  return(t);
                }
                t = c_67;
                t = f_109(k_6, t);
                ;
                LocalPopChoice(u_26);
              }
            else
              {
                t = t_26;
                {
                  ATerm v_26 = t;
                  int w_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = k_67(b_67, t);
                      ;
                      LocalPopChoice(w_26);
                    }
                  else
                    {
                      t = v_26;
                      t = l_67(c_67, d_67, b_67, t);
                    }
                }
              }
          }
        }
      else
        {
          t = k_67(b_67, t);
        }
      return(t);
    }
    t = env_alltd_1_0(j_6, t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((m_66 != NULL) && (m_66 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_66 = ATgetArgument(t, 0);
      j_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_66, (ATerm) ATempty);
  t = j_67(t);
  return(t);
}
ATerm genzip_4_0 (ATerm l_92 (ATerm), ATerm m_92 (ATerm), ATerm n_92 (ATerm), ATerm o_92 (ATerm), ATerm t)
{
  ATerm s_67 (ATerm t)
  {
    ATerm z_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_92(t);
        ;
        LocalPopChoice(a_27);
      }
    else
      {
        t = z_26;
        {
          ATerm m_67 = NULL,n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL,n_9 = NULL;
          t = m_92(t);
          r_67 = t;
          if(match_cons(t, sym__2))
            {
              n_67 = ATgetArgument(t, 0);
              o_67 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(r_67);
          m_67 = t;
          t = n_67;
          t = o_92(t);
          p_67 = t;
          t = o_67;
          t = s_67(t);
          q_67 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_67, q_67);
          n_9 = t;
          t = SSLsetAnnotations(n_9, m_67);
          t = n_92(t);
        }
      }
    return(t);
  }
  t = s_67(t);
  return(t);
}
ATerm m_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_27 = ATgetArgument(t, 0);
      if(((ATgetType(d_27) != AT_LIST) || !(ATisEmpty(d_27))))
        _fail(t);
      {
        ATerm e_27 = ATgetArgument(t, 1);
        if(((ATgetType(e_27) != AT_LIST) || !(ATisEmpty(e_27))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm k_68 = NULL,l_68 = NULL,m_68 = NULL,o_68 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_27 = ATgetArgument(t, 0);
      if(((ATgetType(f_27) == AT_LIST) && !(ATisEmpty(f_27))))
        {
          k_68 = ATgetFirst((ATermList) f_27);
          l_68 = (ATerm) ATgetNext((ATermList) f_27);
        }
      else
        _fail(t);
      {
        ATerm g_27 = ATgetArgument(t, 1);
        if(((ATgetType(g_27) == AT_LIST) && !(ATisEmpty(g_27))))
          {
            m_68 = ATgetFirst((ATermList) g_27);
            o_68 = (ATerm) ATgetNext((ATermList) g_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_68, m_68), (ATerm) ATmakeAppl(sym__2, l_68, o_68));
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm p_68 = NULL,q_68 = NULL;
  if(match_cons(t, sym__2))
    {
      p_68 = ATgetArgument(t, 0);
      q_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_68), p_68);
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm t_68 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_68;
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm h_27 = t;
  int i_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(i_27);
    }
  else
    {
      t = h_27;
      {
        ATerm w_68 = NULL,a_69 = NULL,b_69 = NULL,c_69 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            w_68 = ATgetArgument(t, 0);
            t = w_68;
            t = free_vars_3_0(r_6, s_6, tboundin_3_0, t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                w_68 = ATgetArgument(t, 0);
                a_69 = ATgetArgument(t, 1);
                b_69 = ATgetArgument(t, 2);
                c_69 = ATgetArgument(t, 3);
                t = b_69;
                t = map_1_0(w_6, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    w_68 = ATgetArgument(t, 0);
                    a_69 = ATgetArgument(t, 1);
                    b_69 = ATgetArgument(t, 2);
                    c_69 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = b_69;
                t = map_1_0(c_7, t);
              }
          }
      }
    }
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm k_69 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_69);
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm j_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(k_27);
    }
  else
    {
      t = j_27;
      {
        ATerm l_27 = t;
        int m_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            ;
            LocalPopChoice(m_27);
          }
        else
          {
            t = l_27;
            {
              ATerm m_69 = NULL,o_69 = NULL,p_69 = NULL,q_69 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  m_69 = ATgetArgument(t, 0);
                  o_69 = ATgetArgument(t, 1);
                  p_69 = ATgetArgument(t, 2);
                  q_69 = ATgetArgument(t, 3);
                  t = p_69;
                  t = map_1_0(t_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      m_69 = ATgetArgument(t, 0);
                      o_69 = ATgetArgument(t, 1);
                      p_69 = ATgetArgument(t, 2);
                      q_69 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_69;
                  t = map_1_0(v_6, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm a_70 = NULL;
  ATerm n_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_70 = ATgetArgument(t, 0);
          {
            ATerm q_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_27);
      t = a_70;
    }
  else
    {
      t = n_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_70 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_70;
    }
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm l_70 = NULL;
  ATerm r_27 = t;
  int s_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_70 = ATgetArgument(t, 0);
          {
            ATerm t_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_27);
      t = l_70;
    }
  else
    {
      t = r_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_70 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_70;
    }
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm u_70 = NULL;
  ATerm u_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_70 = ATgetArgument(t, 0);
          {
            ATerm w_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_27);
      t = u_70;
    }
  else
    {
      t = u_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_70 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_70;
    }
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm k_71 = NULL;
  ATerm x_27 = t;
  int z_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_71 = ATgetArgument(t, 0);
          {
            ATerm a_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_27);
      t = k_71;
    }
  else
    {
      t = x_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_71 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_71;
    }
  return(t);
}
ATerm f_8 (ATerm s_82 (ATerm), ATerm x_19, ATerm z_19, ATerm t)
{
  ATerm c_68 = NULL,d_68 = NULL;
  t = s_82(t);
  {
    ATerm l_6 (ATerm t)
    {
      ATerm f_68 = NULL,i_68 = NULL,j_68 = NULL;
      f_68 = t;
      if(match_cons(t, sym_Overlay_3))
        {
          if((x_19 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          i_68 = ATgetArgument(t, 1);
          j_68 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, i_68, z_19);
      t = genzip_4_0(m_6, n_6, o_6, _id, t);
      if(((c_68 != NULL) && (c_68 != t)))
        _fail(t);
      else
        c_68 = t;
      t = j_68;
      if(((d_68 != NULL) && (d_68 != t)))
        _fail(t);
      else
        d_68 = t;
      t = f_68;
      return(t);
    }
    t = fetch_1_0(l_6, t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_68), not_null(d_68));
    t = substitute_6_0(p_6, Var_1_0, q_6, tboundin_3_0, tpaste_1_0, _id, t);
  }
  return(t);
}
ATerm Trm_to_Cong_0_0 (ATerm t)
{
  ATerm a_72 = NULL,f_72 = NULL;
  ATerm c_28 = t;
  int d_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_BuildDefault_1))
        {
          ATerm e_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(d_28);
      t = term_f_14;
    }
  else
    {
      t = c_28;
      if(match_cons(t, sym_Real_1))
        {
          f_72 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, f_72));
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              f_72 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, f_72));
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  f_72 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, f_72));
                }
              else
                {
                  if(match_cons(t, sym_Anno_2))
                    {
                      f_72 = ATgetArgument(t, 0);
                      a_72 = ATgetArgument(t, 1);
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_f_28, (ATerm)ATinsert(ATinsert(ATempty, a_72), f_72), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(t, sym_Op_2))
                        {
                          f_72 = ATgetArgument(t, 0);
                          a_72 = ATgetArgument(t, 1);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_72), a_72, (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_Var_1))
                            {
                              f_72 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_72), (ATerm)ATempty, (ATerm) ATempty);
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
  ATerm c_73 = NULL,d_73 = NULL,e_73 = NULL;
  e_73 = t;
  if(match_cons(t, sym_Op_2))
    {
      c_73 = ATgetArgument(t, 0);
      d_73 = ATgetArgument(t, 1);
      {
        ATerm g_28 = t;
        int h_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_25 = NULL,s_25 = NULL,q_9 = NULL;
            t = SSLgetAnnotations(e_73);
            p_25 = t;
            t = d_73;
            t = map_1_0(trm_to_cong_0_0, t);
            s_25 = t;
            t = (ATerm) ATmakeAppl(sym_Op_2, c_73, s_25);
            q_9 = t;
            t = SSLsetAnnotations(q_9, p_25);
            ;
            LocalPopChoice(h_28);
          }
        else
          {
            t = g_28;
            t = e_73;
          }
      }
    }
  else
    {
      t = e_73;
    }
  t = Trm_to_Cong_0_0(t);
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm m_73 = NULL;
  m_73 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, m_73, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_14), term_a_14));
  return(t);
}
ATerm l_7 (ATerm f_20, ATerm i_20, ATerm h_20, ATerm t)
{
  ATerm j_73 = NULL,k_73 = NULL;
  t = i_20;
  t = map_1_0(e_7, t);
  j_73 = t;
  t = h_20;
  t = trm_to_cong_0_0(t);
  k_73 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, f_20, j_73, k_73);
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm y_73 = NULL,z_73 = NULL,a_74 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      y_73 = ATgetArgument(t, 0);
      z_73 = ATgetArgument(t, 1);
      a_74 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = l_7(y_73, z_73, a_74, t);
  return(t);
}
ATerm g_8 (ATerm w_18, ATerm y_18, ATerm x_18, ATerm t)
{
  ATerm p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL;
  t = y_18;
  {
    ATerm i_28 = t;
    int j_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_7 (ATerm t)
        {
          ATerm n_7 (ATerm t)
          {
            ATerm u_73 = NULL,v_73 = NULL;
            ATerm o_7 (ATerm t)
            {
              t = y_18;
              return(t);
            }
            if(match_cons(t, sym_Op_2))
              {
                u_73 = ATgetArgument(t, 0);
                v_73 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = f_8(o_7, u_73, v_73, t);
            return(t);
          }
          t = repeat_1_0(n_7, t);
          return(t);
        }
        ATerm k_28 = t;
        if((PushChoice() == 0))
          {
            t = y_18;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = k_28;
          }
        t = y_18;
        t = topdown_1_0(g_7, t);
        ;
        LocalPopChoice(j_28);
      }
    else
      {
        t = i_28;
      }
    p_73 = t;
    t = y_18;
    t = map_1_0(p_7, t);
    r_73 = t;
    t = x_18;
    {
      ATerm l_28 = t;
      int n_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_7 (ATerm t)
          {
            ATerm p_28 = t;
            int q_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_26 = NULL,k_26 = NULL;
                ATerm v_7 (ATerm t)
                {
                  t = p_73;
                  return(t);
                }
                if(match_cons(t, sym_Op_2))
                  {
                    j_26 = ATgetArgument(t, 0);
                    k_26 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = f_8(v_7, j_26, k_26, t);
                ;
                LocalPopChoice(q_28);
              }
            else
              {
                t = p_28;
              }
            return(t);
          }
          ATerm r_28 = t;
          if((PushChoice() == 0))
            {
              t = p_73;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = r_28;
            }
          t = x_18;
          t = topdown_1_0(t_7, t);
          ;
          LocalPopChoice(n_28);
        }
      else
        {
          t = l_28;
        }
      s_73 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_73, s_73);
      t = conc_0_0(t);
      q_73 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, q_73)), (ATerm) ATmakeAppl(sym_Signature_1, w_18)));
    }
  }
  return(t);
}
ATerm h_8 (ATerm g_47, ATerm h_47, ATerm t)
{
  ATerm f_74 = NULL;
  t = SSL_fputc(g_47, h_47);
  f_74 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_74);
  return(t);
}
ATerm i_8 (ATerm u_50, ATerm v_50, ATerm t)
{
  ATerm i_74 = NULL;
  t = SSL_write_term_to_stream_text(u_50, v_50);
  i_74 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_74);
  return(t);
}
ATerm k_8 (ATerm u_102 (ATerm), ATerm r_466, ATerm y_50, ATerm t)
{
  ATerm o_74 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_466, term_t_28);
  t = open_stream_0_0(t);
  o_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_74, y_50);
  t = u_102(t);
  t = fclose_0_0(t);
  t = y_50;
  return(t);
}
ATerm j_8 (ATerm q_50, ATerm r_50, ATerm t)
{
  ATerm s_74 = NULL;
  t = SSL_write_term_to_stream_baf(q_50, r_50);
  s_74 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_74);
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm v_74 = NULL,w_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_28 = ATgetArgument(t, 0);
      if(match_cons(u_28, sym_Stream_1))
        {
          v_74 = ATgetArgument(u_28, 0);
        }
      else
        _fail(t);
      w_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_8(v_74, w_74, t);
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm x_74 = NULL,y_74 = NULL,z_74 = NULL,a_75 = NULL,b_75 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_28 = ATgetArgument(t, 0);
      if(match_cons(v_28, sym_Stream_1))
        {
          a_75 = ATgetArgument(v_28, 0);
        }
      else
        _fail(t);
      b_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_8(a_75, b_75, t);
  x_74 = t;
  t = term_w_28;
  y_74 = t;
  t = x_74;
  if(match_cons(t, sym_Stream_1))
    {
      z_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_w_28, x_74);
  t = h_8(y_74, z_74, t);
  return(t);
}
ATerm output_1_0 (ATerm d_107 (ATerm), ATerm t)
{
  ATerm t_74 = NULL,u_74 = NULL;
  t = d_107(t);
  u_74 = t;
  {
    ATerm x_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_28;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(y_28);
      }
    else
      {
        t = x_28;
        t = term_a_29;
      }
    t_74 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_74, u_74);
    {
      ATerm b_29 = t;
      int c_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_d_29;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, t_74, u_74);
          LocalPopChoice(c_29);
          if(match_cons(t, sym__2))
            {
              ATerm f_29 = ATgetArgument(t, 0);
              ATerm g_29 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_8(z_7, t_74, u_74, t);
        }
      else
        {
          t = b_29;
          if(match_cons(t, sym__2))
            {
              ATerm h_29 = ATgetArgument(t, 0);
              ATerm i_29 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_8(b_8, t_74, u_74, t);
        }
    }
  }
  return(t);
}
ATerm p_75 (ATerm j_75, ATerm t)
{
  t = SSL_fclose(j_75);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_75 = NULL,n_75 = NULL;
  n_75 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_75 = ATgetArgument(t, 0);
      {
        ATerm j_29 = t;
        int k_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_75);
            ;
            LocalPopChoice(k_29);
          }
        else
          {
            t = j_29;
            t = p_75(n_75, t);
          }
      }
    }
  else
    {
      t = p_75(n_75, t);
    }
  return(t);
}
ATerm l_8 (ATerm w_50, ATerm t)
{
  t = SSL_read_term_from_stream(w_50);
  return(t);
}
ATerm m_8 (ATerm i_47, ATerm j_47, ATerm t)
{
  ATerm q_75 = NULL;
  t = SSL_fopen(i_47, j_47);
  q_75 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_75);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_75 = NULL;
  t = SSL_stdin_stream();
  r_75 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_75);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_75 = NULL;
  t = SSL_stdout_stream();
  s_75 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_75);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_75 = NULL;
  t = SSL_stderr_stream();
  t_75 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_75);
  return(t);
}
ATerm a_77 (ATerm z_75, ATerm t)
{
  ATerm a_76 = NULL;
  t = SSL_explode_term(z_75);
  if(match_cons(t, sym__2))
    {
      ATerm l_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_29 = ATgetArgument(t, 1);
        if(((ATgetType(o_29) == AT_LIST) && !(ATisEmpty(o_29))))
          {
            a_76 = ATgetFirst((ATermList) o_29);
            {
              ATerm p_29 = (ATerm) ATgetNext((ATermList) o_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_76;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_76;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_76;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_76;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm b_77 (ATerm d_76, ATerm e_76, ATerm f_76, ATerm t)
{
  ATerm g_76 = NULL,h_76 = NULL,i_76 = NULL,l_76 = NULL,s_9 = NULL;
  t = SSLgetAnnotations(f_76);
  i_76 = t;
  t = d_76;
  if(match_cons(t, sym_Path_1))
    {
      l_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_76, e_76);
  s_9 = t;
  t = SSLsetAnnotations(s_9, i_76);
  if(match_cons(t, sym__2))
    {
      g_76 = ATgetArgument(t, 0);
      h_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_8(g_76, h_76, t);
  return(t);
}
ATerm c_77 (ATerm n_76, ATerm o_76, ATerm p_76, ATerm t)
{
  ATerm q_76 = NULL,r_76 = NULL,s_76 = NULL,v_76 = NULL,u_9 = NULL;
  t = SSLgetAnnotations(p_76);
  s_76 = t;
  t = SSL_is_string(n_76);
  v_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_76, o_76);
  u_9 = t;
  t = SSLsetAnnotations(u_9, s_76);
  if(match_cons(t, sym__2))
    {
      q_76 = ATgetArgument(t, 0);
      r_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_8(q_76, r_76, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm x_76 = NULL,y_76 = NULL,z_76 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_29 = ATgetArgument(t, 0);
      ATerm s_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  x_76 = t;
  if(match_cons(t, sym__2))
    {
      y_76 = ATgetArgument(t, 0);
      z_76 = ATgetArgument(t, 1);
      {
        ATerm v_29 = t;
        int w_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_77(x_76, t);
            ;
            LocalPopChoice(w_29);
          }
        else
          {
            t = v_29;
            {
              ATerm x_29 = t;
              int y_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_77(y_76, z_76, x_76, t);
                  ;
                  LocalPopChoice(y_29);
                }
              else
                {
                  t = x_29;
                  t = c_77(y_76, z_76, x_76, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_77(x_76, t);
    }
  return(t);
}
ATerm d_8 (ATerm t)
{
  t = term_a_30;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_77 = NULL,e_77 = NULL,f_77 = NULL;
  ATerm c_30 = t;
  int f_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_77 = NULL;
      g_77 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_77, term_g_30);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(f_30);
    }
  else
    {
      t = c_30;
      t = debug_1_0(d_8, t);
      _fail(t);
    }
  e_77 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_8(f_77, t);
  d_77 = t;
  t = e_77;
  t = fclose_0_0(t);
  t = d_77;
  return(t);
}
ATerm input_1_0 (ATerm e_107 (ATerm), ATerm t)
{
  ATerm h_30 = t;
  int i_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_30;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_30);
    }
  else
    {
      t = h_30;
      t = term_k_30;
    }
  t = ReadFromFile_0_0(t);
  t = e_107(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_77 = NULL,j_77 = NULL,k_77 = NULL,l_77 = NULL,m_77 = NULL;
  i_77 = t;
  t = term_m_18;
  t = whoami_0_0(t);
  j_77 = t;
  t = term_l_30;
  l_77 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_30), j_77), term_m_30);
  m_77 = t;
  t = SSL_printnl(l_77, m_77);
  t = term_t_18;
  k_77 = t;
  t = SSL_exit(k_77);
  t = i_77;
  return(t);
}
ATerm w_8 (ATerm t)
{
  ATerm o_77 = NULL;
  o_77 = t;
  if(match_string(t, "-k"))
    {
      t = o_77;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_77;
    }
  return(t);
}
ATerm x_8 (ATerm t)
{
  ATerm p_77 = NULL,q_77 = NULL,r_77 = NULL;
  p_77 = t;
  t = SSL_string_to_int(p_77);
  q_77 = t;
  t = term_o_30;
  r_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_30, q_77);
  t = u_8(r_77, q_77, t);
  t = p_77;
  return(t);
}
ATerm z_8 (ATerm t)
{
  t = term_p_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_8, x_8, z_8, t);
  return(t);
}
ATerm a_9 (ATerm t)
{
  ATerm t_77 = NULL;
  t_77 = t;
  if(match_string(t, "-S"))
    {
      t = t_77;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_77;
    }
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm u_77 = NULL,v_77 = NULL;
  t = term_q_30;
  u_77 = t;
  t = term_s_18;
  v_77 = t;
  t = term_r_30;
  t = u_8(u_77, v_77, t);
  t = term_s_30;
  return(t);
}
ATerm c_9 (ATerm t)
{
  t = term_u_30;
  return(t);
}
ATerm e_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm w_77 = NULL,x_77 = NULL,y_77 = NULL;
  w_77 = t;
  t = SSL_string_to_int(w_77);
  x_77 = t;
  t = term_q_30;
  y_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_30, x_77);
  t = u_8(y_77, x_77, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_77);
  return(t);
}
ATerm g_9 (ATerm t)
{
  t = term_v_30;
  return(t);
}
ATerm i_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm z_77 = NULL,a_78 = NULL;
  t = term_w_30;
  z_77 = t;
  t = term_m_18;
  a_78 = t;
  t = term_x_30;
  t = u_8(z_77, a_78, t);
  t = term_y_30;
  return(t);
}
ATerm o_9 (ATerm t)
{
  t = term_a_31;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_31 = t;
  int c_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_9, b_9, c_9, t);
      ;
      LocalPopChoice(c_31);
    }
  else
    {
      t = b_31;
      {
        ATerm d_31 = t;
        int f_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_9, f_9, g_9, t);
            ;
            LocalPopChoice(f_31);
          }
        else
          {
            t = d_31;
            t = Option_3_0(i_9, k_9, o_9, t);
          }
      }
    }
  return(t);
}
ATerm u_8 (ATerm x_51, ATerm y_51, ATerm t)
{
  ATerm b_78 = NULL;
  t = term_g_31;
  b_78 = t;
  t = SSL_table_put(b_78, x_51, y_51);
  t = (ATerm) ATmakeAppl(sym__3, term_g_31, x_51, y_51);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm e_78 = NULL,f_78 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_78 = NULL,h_78 = NULL,i_78 = NULL;
      t = term_m_18;
      t = i_0(t);
      g_78 = t;
      t = term_h_31;
      h_78 = t;
      t = term_i_31;
      i_78 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_31, term_i_31, g_78);
      t = s_8(h_78, i_78, g_78, t);
      _fail(t);
    }
  else
    {
      ATerm l_78 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_78 = ATgetFirst((ATermList) t);
          f_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_78;
      t = d_0(t);
      t = term_m_18;
      t = g_0(t);
      l_78 = t;
      t = (ATerm) ATinsert(CheckATermList(f_78), l_78);
    }
  return(t);
}
ATerm r_9 (ATerm t)
{
  ATerm n_78 = NULL;
  n_78 = t;
  if(match_string(t, "-o"))
    {
      t = n_78;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_78;
    }
  return(t);
}
ATerm v_9 (ATerm t)
{
  ATerm o_78 = NULL,p_78 = NULL;
  o_78 = t;
  t = term_z_28;
  p_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_28, o_78);
  t = u_8(p_78, o_78, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_78);
  return(t);
}
ATerm x_9 (ATerm t)
{
  t = term_j_31;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_9, v_9, x_9, t);
  return(t);
}
ATerm s_8 (ATerm v_56, ATerm w_56, ATerm u_56, ATerm t)
{
  ATerm r_78 = NULL,s_78 = NULL,t_78 = NULL;
  r_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_56, w_56);
  {
    ATerm n_31 = t;
    int o_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_31 = ATgetArgument(t, 0);
            ATerm t_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_56, w_56);
        t = r_8(v_56, w_56, t);
        ;
        LocalPopChoice(o_31);
      }
    else
      {
        t = n_31;
        t = (ATerm) ATempty;
      }
    s_78 = t;
    t = (ATerm) ATinsert(CheckATermList(s_78), u_56);
    t_78 = t;
    t = SSL_table_put(v_56, w_56, t_78);
    t = r_78;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm a_79 = NULL,b_79 = NULL,c_79 = NULL,d_79 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_79 = NULL,f_79 = NULL,g_79 = NULL;
      t = term_m_18;
      t = p_0(t);
      e_79 = t;
      t = term_h_31;
      f_79 = t;
      t = term_i_31;
      g_79 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_31, term_i_31, e_79);
      t = s_8(f_79, g_79, e_79, t);
      _fail(t);
    }
  else
    {
      ATerm k_79 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_79 = ATgetFirst((ATermList) t);
          b_79 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_79;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_79 = ATgetFirst((ATermList) t);
          d_79 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_79;
      t = m_0(t);
      t = c_79;
      t = n_0(t);
      k_79 = t;
      t = (ATerm) ATinsert(CheckATermList(d_79), k_79);
    }
  return(t);
}
ATerm b_10 (ATerm t)
{
  ATerm m_79 = NULL;
  m_79 = t;
  if(match_string(t, "-i"))
    {
      t = m_79;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_79;
    }
  return(t);
}
ATerm o_10 (ATerm t)
{
  ATerm n_79 = NULL,o_79 = NULL;
  n_79 = t;
  t = term_j_30;
  o_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_30, n_79);
  t = u_8(o_79, n_79, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, n_79);
  return(t);
}
ATerm p_10 (ATerm t)
{
  t = term_u_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_10, o_10, p_10, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_79 = NULL,q_79 = NULL,r_79 = NULL,s_79 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_18;
  t = whoami_0_0(t);
  p_79 = t;
  t = term_l_30;
  r_79 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_31), p_79);
  s_79 = t;
  t = SSL_printnl(r_79, s_79);
  t = term_t_18;
  q_79 = t;
  t = SSL_exit(q_79);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_x_31;
  t = get_config_0_0(t);
  return(t);
}
ATerm n_8 (ATerm g_44, ATerm h_44, ATerm t)
{
  ATerm y_31 = t;
  int b_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_44, h_44);
      ;
      LocalPopChoice(b_32);
    }
  else
    {
      t = y_31;
      t = SSL_addr(g_44, h_44);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm a_96 (ATerm), ATerm b_96 (ATerm), ATerm t)
{
  ATerm u_79 = NULL,v_79 = NULL,w_79 = NULL;
  u_79 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_79;
      t = a_96(t);
    }
  else
    {
      ATerm z_79 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_79 = ATgetFirst((ATermList) t);
          w_79 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_79;
      t = foldr_2_0(a_96, b_96, t);
      z_79 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_79, z_79);
      t = b_96(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm r_10 (ATerm t)
{
  t = term_s_18;
  return(t);
}
ATerm s_10 (ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL;
  if(match_cons(t, sym__2))
    {
      b_27 = ATgetArgument(t, 0);
      c_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_8(b_27, c_27, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_80 = NULL,x_26 = NULL,y_26 = NULL;
  t = times_0_0(t);
  y_26 = t;
  t = SSL_explode_term(y_26);
  if(match_cons(t, sym__2))
    {
      ATerm c_32 = ATgetArgument(t, 0);
      x_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_26;
  t = foldr_2_0(r_10, s_10, t);
  c_80 = t;
  t = SSL_TicksToSeconds(c_80);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_80 = NULL,o_80 = NULL,p_80 = NULL;
  n_80 = t;
  if(match_cons(t, sym__2))
    {
      o_80 = ATgetArgument(t, 0);
      p_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_32 = t;
    int e_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_80;
        if((o_80 != t))
          {
            _fail(t);
          }
        t = n_80;
        ;
        LocalPopChoice(e_32);
      }
    else
      {
        t = d_32;
        t = (ATerm) ATmakeAppl(sym__2, o_80, p_80);
        {
          ATerm f_32 = t;
          int g_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_80, p_80);
              ;
              LocalPopChoice(g_32);
            }
          else
            {
              t = f_32;
              t = SSL_gtr(o_80, p_80);
            }
          t = (ATerm) ATmakeAppl(sym__2, o_80, p_80);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_104 (ATerm), ATerm t)
{
  ATerm t_80 = NULL;
  t_80 = t;
  {
    ATerm h_32 = t;
    int i_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_80 = NULL;
        t = term_q_30;
        t = get_config_0_0(t);
        v_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_80, term_t_18);
        t = geq_0_0(t);
        t = t_80;
        t = e_104(t);
        ;
        LocalPopChoice(i_32);
      }
    else
      {
        t = h_32;
        t = t_80;
      }
  }
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm x_80 = NULL,y_80 = NULL,a_81 = NULL,b_81 = NULL;
  t = run_time_0_0(t);
  x_80 = t;
  t = term_m_18;
  t = whoami_0_0(t);
  y_80 = t;
  t = term_l_30;
  a_81 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_32), x_80), term_j_32), y_80);
  b_81 = t;
  t = SSL_printnl(a_81, b_81);
  t = (ATerm) ATmakeAppl(sym__2, term_l_30, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_32), x_80), term_j_32), y_80));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_10, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm c_81 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_18;
  c_81 = t;
  t = SSL_exit(c_81);
  return(t);
}
ATerm v_10 (ATerm t)
{
  ATerm k_81 = NULL,l_81 = NULL;
  l_81 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = l_81;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          k_81 = ATgetArgument(t, 0);
          {
            ATerm o_27 = NULL,y_9 = NULL;
            t = SSLgetAnnotations(l_81);
            o_27 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, k_81);
            y_9 = t;
            t = SSLsetAnnotations(y_9, o_27);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = l_81;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm u_106 (ATerm), ATerm t)
{
  ATerm l_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_32;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_32);
    }
  else
    {
      t = l_32;
      t = fetch_1_0(v_10, t);
    }
  t = u_106(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm o_81 = NULL,p_81 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_81 = ATgetFirst((ATermList) t);
      p_81 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_81 = NULL,u_81 = NULL;
        ATerm w_10 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(t_81)), not_null(u_81));
          return(t);
        }
        t = p_81;
        t = l_0(t);
        if(((t_81 != NULL) && (t_81 != t)))
          _fail(t);
        else
          t_81 = t;
        t = o_81;
        t = k_0(t);
        if(((u_81 != NULL) && (u_81 != t)))
          _fail(t);
        else
          u_81 = t;
        t = p_81;
        t = reverse_acc_2_0(k_0, w_10, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_18;
      t = l_0(t);
    }
  return(t);
}
ATerm x_10 (ATerm t)
{
  ATerm y_81 = NULL,z_81 = NULL,a_82 = NULL,c_10 = NULL;
  a_82 = t;
  if(match_cons(t, sym_Program_1))
    {
      z_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_82);
  y_81 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, z_81);
  c_10 = t;
  t = SSLsetAnnotations(c_10, y_81);
  return(t);
}
ATerm a_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_11 (ATerm t)
{
  ATerm c_82 = NULL;
  c_82 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_82), term_o_32);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_81 = NULL,x_81 = NULL;
  ATerm p_32 = t;
  int q_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_31;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_32);
    }
  else
    {
      t = p_32;
      t = fetch_1_0(x_10, t);
    }
  t = term_s_32;
  t = echo_0_0(t);
  t = term_h_31;
  w_81 = t;
  t = term_i_31;
  x_81 = t;
  t = term_u_32;
  t = r_8(w_81, x_81, t);
  t = reverse_acc_2_0(_id, a_11, t);
  t = map_1_0(b_11, t);
  return(t);
}
ATerm fetch_1_0 (ATerm s_90 (ATerm), ATerm t)
{
  ATerm d_83 (ATerm t)
  {
    ATerm a_83 = NULL,b_83 = NULL,c_83 = NULL;
    a_83 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_83 = ATgetFirst((ATermList) t);
        c_83 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm v_32 = t;
      int w_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_27 = NULL,b_28 = NULL,t_10 = NULL;
          t = SSLgetAnnotations(a_83);
          y_27 = t;
          t = b_83;
          t = s_90(t);
          b_28 = t;
          t = (ATerm) ATinsert(CheckATermList(c_83), b_28);
          t_10 = t;
          t = SSLsetAnnotations(t_10, y_27);
          ;
          LocalPopChoice(w_32);
        }
      else
        {
          t = v_32;
          {
            ATerm m_28 = NULL,s_28 = NULL,t_12 = NULL;
            t = SSLgetAnnotations(a_83);
            m_28 = t;
            t = c_83;
            t = d_83(t);
            s_28 = t;
            t = (ATerm) ATinsert(CheckATermList(s_28), b_83);
            t_12 = t;
            t = SSLsetAnnotations(t_12, m_28);
          }
        }
    }
    return(t);
  }
  t = d_83(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_83 = NULL,i_83 = NULL,j_83 = NULL;
  h_83 = t;
  {
    ATerm x_32 = t;
    int y_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_83;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_32 = ATgetFirst((ATermList) t);
                ATerm b_33 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_83;
          }
        ;
        LocalPopChoice(y_32);
      }
    else
      {
        t = x_32;
        t = (ATerm) ATinsert(ATempty, h_83);
      }
    i_83 = t;
    t = term_a_29;
    j_83 = t;
    t = SSL_printnl(j_83, i_83);
    t = h_83;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_x_31;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm q_8 (ATerm w_41, ATerm x_41, ATerm t)
{
  t = SSL_strcat(w_41, x_41);
  return(t);
}
ATerm debug_1_0 (ATerm s_102 (ATerm), ATerm t)
{
  ATerm p_83 = NULL,q_83 = NULL,r_83 = NULL,s_83 = NULL;
  p_83 = t;
  t = s_102(t);
  q_83 = t;
  t = term_l_30;
  r_83 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_83), q_83);
  s_83 = t;
  t = SSL_printnl(r_83, s_83);
  t = p_83;
  return(t);
}
ATerm map_1_0 (ATerm i_90 (ATerm), ATerm t)
{
  ATerm p_84 (ATerm t)
  {
    ATerm g_84 = NULL,h_84 = NULL,o_84 = NULL;
    g_84 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_84;
      }
    else
      {
        ATerm q_29 = NULL,t_29 = NULL,u_29 = NULL,w_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_84 = ATgetFirst((ATermList) t);
            o_84 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_84);
        q_29 = t;
        t = h_84;
        t = i_90(t);
        t_29 = t;
        t = o_84;
        t = p_84(t);
        u_29 = t;
        t = (ATerm) ATinsert(CheckATermList(u_29), t_29);
        w_12 = t;
        t = SSLsetAnnotations(w_12, q_29);
      }
    return(t);
  }
  t = p_84(t);
  return(t);
}
ATerm c_11 (ATerm t)
{
  ATerm d_33 = t;
  int e_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(e_33);
    }
  else
    {
      t = d_33;
    }
  return(t);
}
ATerm e_11 (ATerm t)
{
  t = term_f_33;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm i_33 = t;
  int j_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_84 = NULL;
      y_84 = t;
      t = SSL_is_string(y_84);
      ;
      LocalPopChoice(j_33);
    }
  else
    {
      t = i_33;
      {
        ATerm k_33 = t;
        int l_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(c_11, t);
            ;
            LocalPopChoice(l_33);
          }
        else
          {
            t = k_33;
            {
              ATerm e_85 = NULL,f_85 = NULL,g_85 = NULL;
              e_85 = t;
              if(match_cons(t, sym_Path_1))
                {
                  f_85 = ATgetArgument(t, 0);
                  t = f_85;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      f_85 = ATgetArgument(t, 0);
                      t = f_85;
                      {
                        ATerm m_33 = t;
                        int n_33 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(n_33);
                          }
                        else
                          {
                            t = m_33;
                            t = debug_1_0(e_11, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm k_85 = NULL,l_85 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          f_85 = ATgetArgument(t, 0);
                          g_85 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = f_85;
                      t = eval_config_0_0(t);
                      k_85 = t;
                      t = g_85;
                      t = eval_config_0_0(t);
                      l_85 = t;
                      t = (ATerm) ATmakeAppl(sym__2, k_85, l_85);
                      t = q_8(k_85, l_85, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm r_8 (ATerm m_58, ATerm n_58, ATerm t)
{
  t = SSL_table_get(m_58, n_58);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm p_85 = NULL,q_85 = NULL;
  p_85 = t;
  t = term_g_31;
  q_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_31, p_85);
  t = r_8(q_85, p_85, t);
  {
    ATerm o_33 = t;
    int p_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_85 = NULL,s_85 = NULL;
        t = eval_config_0_0(t);
        r_85 = t;
        t = term_g_31;
        s_85 = t;
        t = SSL_table_put(s_85, p_85, r_85);
        t = r_85;
        ;
        LocalPopChoice(p_33);
      }
    else
      {
        t = o_33;
      }
  }
  return(t);
}
ATerm f_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_11 (ATerm t)
{
  ATerm x_85 = NULL,y_85 = NULL;
  t = term_q_33;
  x_85 = t;
  t = term_m_18;
  y_85 = t;
  t = term_r_33;
  t = u_8(x_85, y_85, t);
  return(t);
}
ATerm j_11 (ATerm t)
{
  t = term_s_33;
  return(t);
}
ATerm l_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_11 (ATerm t)
{
  ATerm z_85 = NULL,a_86 = NULL,b_86 = NULL,c_86 = NULL;
  t = term_q_33;
  b_86 = t;
  t = term_m_18;
  c_86 = t;
  t = term_r_33;
  t = u_8(b_86, c_86, t);
  t = term_t_33;
  z_85 = t;
  t = term_m_18;
  a_86 = t;
  t = term_u_33;
  t = u_8(z_85, a_86, t);
  t = term_v_33;
  return(t);
}
ATerm q_11 (ATerm t)
{
  t = term_w_33;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_33 = t;
  int y_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_11, g_11, j_11, t);
      ;
      LocalPopChoice(y_33);
    }
  else
    {
      t = x_33;
      t = Option_3_0(l_11, o_11, q_11, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm y_68 (ATerm), ATerm z_68 (ATerm), ATerm t)
{
  ATerm d_86 = NULL,e_86 = NULL,f_86 = NULL,g_86 = NULL,h_86 = NULL,i_86 = NULL,y_12 = NULL;
  i_86 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_86 = ATgetFirst((ATermList) t);
      f_86 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_86);
  d_86 = t;
  t = e_86;
  t = y_68(t);
  g_86 = t;
  t = f_86;
  t = z_68(t);
  h_86 = t;
  t = (ATerm) ATinsert(CheckATermList(h_86), g_86);
  y_12 = t;
  t = SSLsetAnnotations(y_12, d_86);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_108 (ATerm), ATerm t)
{
  ATerm n_86 = NULL,o_86 = NULL,p_86 = NULL,q_86 = NULL,s_86 = NULL,t_86 = NULL,f_13 = NULL;
  n_86 = t;
  {
    ATerm z_33 = t;
    int a_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_34;
        t = x_108(t);
        ;
        LocalPopChoice(a_34);
      }
    else
      {
        t = z_33;
      }
    t = n_86;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_86 = ATgetFirst((ATermList) t);
        q_86 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(n_86);
    o_86 = t;
    t = term_x_31;
    t_86 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_x_31, p_86);
    t = u_8(t_86, p_86, t);
    t = q_86;
    {
      ATerm d_87 (ATerm t)
      {
        ATerm g_34 = t;
        int h_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_34 = t;
            int l_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_86 = NULL;
                w_86 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = w_86;
                ;
                LocalPopChoice(l_34);
              }
            else
              {
                t = k_34;
                t = x_108(t);
                t = Cons_2_0(_id, d_87, t);
              }
            ;
            LocalPopChoice(h_34);
          }
        else
          {
            t = g_34;
            {
              ATerm z_86 = NULL,a_87 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_86 = ATgetFirst((ATermList) t);
                  a_87 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(a_87), (ATerm) ATmakeAppl(sym_Undefined_1, z_86));
            }
          }
        return(t);
      }
      t = d_87(t);
      s_86 = t;
      t = (ATerm) ATinsert(CheckATermList(s_86), (ATerm) ATmakeAppl(sym_Program_1, p_86));
      f_13 = t;
      t = SSLsetAnnotations(f_13, o_86);
    }
  }
  return(t);
}
ATerm s_11 (ATerm t)
{
  ATerm p_87 = NULL;
  p_87 = t;
  if(match_string(t, "--help"))
    {
      t = p_87;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_87;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_87;
        }
    }
  return(t);
}
ATerm t_11 (ATerm t)
{
  ATerm q_87 = NULL,r_87 = NULL;
  t = term_n_32;
  q_87 = t;
  t = term_m_18;
  r_87 = t;
  t = term_m_34;
  t = u_8(q_87, r_87, t);
  t = term_n_34;
  return(t);
}
ATerm u_11 (ATerm t)
{
  t = term_o_34;
  return(t);
}
ATerm v_11 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm w_108 (ATerm), ATerm t)
{
  ATerm i_87 = NULL,j_87 = NULL,k_87 = NULL,l_87 = NULL,m_87 = NULL,n_87 = NULL,o_87 = NULL;
  k_87 = t;
  t = term_h_31;
  m_87 = t;
  t = term_i_31;
  n_87 = t;
  t = (ATerm) ATempty;
  o_87 = t;
  t = SSL_table_put(m_87, n_87, o_87);
  t = k_87;
  {
    ATerm r_11 (ATerm t)
    {
      ATerm p_34 = t;
      int q_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_108(t);
          ;
          LocalPopChoice(q_34);
        }
      else
        {
          t = p_34;
          {
            ATerm r_34 = t;
            int s_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_11, t_11, u_11, t);
                ;
                LocalPopChoice(s_34);
              }
            else
              {
                t = r_34;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_11, t);
    {
      ATerm t_34 = t;
      int u_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_87 = NULL;
          y_87 = t;
          {
            ATerm v_34 = t;
            int w_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_30 = NULL;
                t = y_87;
                {
                  ATerm x_34 = t;
                  int y_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_n_32;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(y_34);
                    }
                  else
                    {
                      t = x_34;
                      t = fetch_1_0(v_11, t);
                    }
                  t = y_87;
                  t = default_system_usage_0_0(t);
                  t = term_s_18;
                  z_30 = t;
                  t = SSL_exit(z_30);
                }
                ;
                LocalPopChoice(w_34);
              }
            else
              {
                t = v_34;
                {
                  ATerm m_31 = NULL;
                  t = term_q_33;
                  t = get_config_0_0(t);
                  t = y_87;
                  t = default_system_about_0_0(t);
                  t = term_s_18;
                  m_31 = t;
                  t = SSL_exit(m_31);
                }
              }
          }
          ;
          LocalPopChoice(u_34);
        }
      else
        {
          t = t_34;
          {
            ATerm z_34 = t;
            int a_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_87 = NULL,a_88 = NULL,b_88 = NULL;
                ATerm w_11 (ATerm t)
                {
                  ATerm c_88 = NULL,d_88 = NULL,e_88 = NULL,u_23 = NULL;
                  e_88 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      d_88 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(e_88);
                  c_88 = t;
                  t = d_88;
                  if(((i_87 != NULL) && (i_87 != t)))
                    _fail(t);
                  else
                    i_87 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, d_88);
                  u_23 = t;
                  t = SSLsetAnnotations(u_23, c_88);
                  return(t);
                }
                t = fetch_1_0(w_11, t);
                t = term_l_30;
                a_88 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_87)), term_b_35);
                b_88 = t;
                t = SSL_printnl(a_88, b_88);
                t = (ATerm) ATmakeAppl(sym__2, term_l_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_87)), term_b_35));
                t = default_system_usage_0_0(t);
                t = term_t_18;
                z_87 = t;
                t = SSL_exit(z_87);
                ;
                LocalPopChoice(a_35);
              }
            else
              {
                t = z_34;
              }
          }
        }
      j_87 = t;
      t = term_h_31;
      l_87 = t;
      t = SSL_table_destroy(l_87);
      t = j_87;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_106 (ATerm), ATerm x_106 (ATerm), ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm t)
{
  ATerm j_88 = NULL,k_88 = NULL,l_88 = NULL,m_88 = NULL;
  t = parse_options_1_0(w_106, t);
  j_88 = t;
  t = term_c_35;
  m_88 = t;
  t = SSL_table_create(m_88);
  t = term_c_35;
  k_88 = t;
  t = term_d_35;
  l_88 = t;
  t = SSL_table_put(k_88, l_88, j_88);
  t = j_88;
  t = y_106(t);
  {
    ATerm e_35 = t;
    int f_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_106, t);
        ;
        LocalPopChoice(f_35);
      }
    else
      {
        t = e_35;
        {
          ATerm g_35 = t;
          int h_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_106(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(h_35);
            }
          else
            {
              t = g_35;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm x_11 (ATerm t)
{
  ATerm i_35 = t;
  int j_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(j_35);
    }
  else
    {
      t = i_35;
      {
        ATerm k_35 = t;
        int l_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(l_35);
          }
        else
          {
            t = k_35;
            {
              ATerm m_35 = t;
              int n_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(z_11, a_12, j_12, t);
                  ;
                  LocalPopChoice(n_35);
                }
              else
                {
                  t = m_35;
                  {
                    ATerm o_35 = t;
                    int p_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(p_35);
                      }
                    else
                      {
                        t = o_35;
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
ATerm y_11 (ATerm t)
{
  t = input_1_0(l_12, t);
  return(t);
}
ATerm z_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_12 (ATerm t)
{
  ATerm s_88 = NULL,t_88 = NULL;
  t = term_d_29;
  s_88 = t;
  t = term_m_18;
  t_88 = t;
  t = term_q_35;
  t = u_8(s_88, t_88, t);
  t = term_r_35;
  return(t);
}
ATerm j_12 (ATerm t)
{
  t = term_w_35;
  return(t);
}
ATerm l_12 (ATerm t)
{
  t = output_1_0(m_12, t);
  return(t);
}
ATerm m_12 (ATerm t)
{
  ATerm v_88 = NULL,w_88 = NULL,x_88 = NULL,y_88 = NULL,z_88 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm x_35 = ATgetArgument(t, 0);
      if(((ATgetType(x_35) == AT_LIST) && !(ATisEmpty(x_35))))
        {
          ATerm z_35 = ATgetFirst((ATermList) x_35);
          if(match_cons(z_35, sym_Signature_1))
            {
              x_88 = ATgetArgument(z_35, 0);
            }
          else
            _fail(t);
          {
            ATerm a_36 = (ATerm) ATgetNext((ATermList) x_35);
            if(((ATgetType(a_36) == AT_LIST) && !(ATisEmpty(a_36))))
              {
                ATerm b_36 = ATgetFirst((ATermList) a_36);
                if(match_cons(b_36, sym_Overlays_1))
                  {
                    y_88 = ATgetArgument(b_36, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm c_36 = (ATerm) ATgetNext((ATermList) a_36);
                  if(((ATgetType(c_36) == AT_LIST) && !(ATisEmpty(c_36))))
                    {
                      ATerm d_36 = ATgetFirst((ATermList) c_36);
                      if(match_cons(d_36, sym_Strategies_1))
                        {
                          z_88 = ATgetArgument(d_36, 0);
                        }
                      else
                        _fail(t);
                      {
                        ATerm e_36 = (ATerm) ATgetNext((ATermList) c_36);
                        if(((ATgetType(e_36) != AT_LIST) || !(ATisEmpty(e_36))))
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
  t = g_8(x_88, y_88, z_88, t);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm f_36 = ATgetArgument(t, 0);
      if(((ATgetType(f_36) == AT_LIST) && !(ATisEmpty(f_36))))
        {
          ATerm g_36 = ATgetFirst((ATermList) f_36);
          if(match_cons(g_36, sym_Signature_1))
            {
              v_88 = ATgetArgument(g_36, 0);
            }
          else
            _fail(t);
          {
            ATerm h_36 = (ATerm) ATgetNext((ATermList) f_36);
            if(((ATgetType(h_36) == AT_LIST) && !(ATisEmpty(h_36))))
              {
                ATerm i_36 = ATgetFirst((ATermList) h_36);
                if(match_cons(i_36, sym_Strategies_1))
                  {
                    w_88 = ATgetArgument(i_36, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm j_36 = (ATerm) ATgetNext((ATermList) h_36);
                  if(((ATgetType(j_36) != AT_LIST) || !(ATisEmpty(j_36))))
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
  t = k_7(v_88, w_88, t);
  t = topdown_1_0(o_12, t);
  return(t);
}
ATerm o_12 (ATerm t)
{
  ATerm k_36 = t;
  int l_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_36 = t;
      int n_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ListVarScope_0_0(t);
          ;
          LocalPopChoice(n_36);
        }
      else
        {
          t = m_36;
          t = desugarRule_0_0(t);
        }
      ;
      LocalPopChoice(l_36);
    }
  else
    {
      t = k_36;
    }
  t = repeat_1_0(p_12, t);
  return(t);
}
ATerm p_12 (ATerm t)
{
  ATerm o_36 = t;
  int p_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_36 = t;
      int r_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = HL_0_0(t);
          ;
          LocalPopChoice(r_36);
        }
      else
        {
          t = q_36;
          {
            ATerm c_89 = NULL,d_89 = NULL;
            c_89 = t;
            if(match_cons(t, sym_Match_1))
              {
                d_89 = ATgetArgument(t, 0);
                t = c_89;
                t = y_6(d_89, t);
              }
            else
              {
                if(match_cons(t, sym_Build_1))
                  {
                    d_89 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = c_89;
                t = x_6(d_89, t);
              }
          }
        }
      ;
      LocalPopChoice(p_36);
    }
  else
    {
      t = o_36;
      {
        ATerm j_89 = NULL,k_89 = NULL;
        if(match_cons(t, sym_Var_1))
          {
            j_89 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = j_89;
        if(match_cons(t, sym_ListVar_1))
          {
            k_89 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, k_89);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(x_11, default_usage_0_0, _id, y_11, t);
  return(t);
}
