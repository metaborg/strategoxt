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
ATerm term_e_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_p_35;
ATerm term_j_35;
ATerm term_f_35;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_j_34;
ATerm term_b_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_k_33;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_n_32;
ATerm term_l_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_v_29;
ATerm term_p_29;
ATerm term_m_29;
ATerm term_j_29;
ATerm term_r_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_k_28;
ATerm term_h_28;
ATerm term_v_27;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_q_18;
ATerm term_m_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_e_18;
ATerm term_z_17;
ATerm term_v_17;
ATerm term_t_17;
ATerm term_j_14;
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
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CongDefined", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Defined_1, term_m_18);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("s1", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("s2", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_Var_1, term_z_19);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("y", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Var_1, term_b_20);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Anno_2, term_a_20, term_c_20);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("x'", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Var_1, term_f_20);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("y'", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Var_1, term_j_20);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Anno_2, term_i_20, term_k_20);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_19);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_Call_2, term_m_20, (ATerm) ATempty);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_BAM_3, term_n_20, term_a_20, term_i_20);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_19);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Call_2, term_p_20, (ATerm) ATempty);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_BAM_3, term_r_20, term_c_20, term_k_20);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_19);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym__2, term_d_30, term_e_18);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_18);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym__2, term_k_30, term_z_17);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym__2, term_y_30, term_z_30);
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym__2, term_u_33, term_z_17);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(sym__2, term_x_33, term_z_17);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym__2, term_l_32, term_z_17);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(sym__2, term_r_28, term_z_17);
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm x_6 (ATerm v_39, ATerm);
ATerm y_6 (ATerm s_39, ATerm);
ATerm map1_1_0 (ATerm m_0 (ATerm), ATerm);
ATerm r_0 (ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm c_1 (ATerm);
ATerm g_1 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm repeat_1_0 (ATerm l_99 (ATerm), ATerm);
ATerm i_1 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm j_1 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm n_101 (ATerm), ATerm);
ATerm b_7 (ATerm q_37, ATerm r_37, ATerm s_37, ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm map_1_0 (ATerm a_106 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm j_100 (ATerm), ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm DeclareVariables_0_0 (ATerm);
ATerm h_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm RDtoSD_0_0 (ATerm);
ATerm e_7 (ATerm s_116 (ATerm), ATerm m_61, ATerm k_61, ATerm);
ATerm g_7 (ATerm y_72, ATerm z_72, ATerm);
ATerm g_27 (ATerm t_26, ATerm);
ATerm l_27 (ATerm z_26, ATerm);
ATerm CongDefined_0_0 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm MkCongDef_0_0 (ATerm);
ATerm filter_1_0 (ATerm v_112 (ATerm), ATerm);
ATerm k_7 (ATerm s_72, ATerm t_72, ATerm);
ATerm end_scope_1_0 (ATerm p_116 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm o_116 (ATerm), ATerm);
ATerm scope_2_0 (ATerm q_116 (ATerm), ATerm r_116 (ATerm), ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm l_7 (ATerm k_35, ATerm l_35, ATerm);
ATerm at_end_1_0 (ATerm q_106 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm b_38 (ATerm a_37, ATerm);
ATerm conc_0_0 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm tpaste_1_0 (ATerm a_128 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm b_128 (ATerm), ATerm c_128 (ATerm), ATerm d_128 (ATerm), ATerm);
ATerm b_4 (ATerm);
ATerm d_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm l_4 (ATerm);
ATerm o_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm r_7 (ATerm t_109 (ATerm), ATerm x_49, ATerm w_49, ATerm);
ATerm foldr_3_0 (ATerm u_111 (ATerm), ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm);
ATerm s_7 (ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm b_50, ATerm a_50, ATerm);
ATerm t_7 (ATerm o_109 (ATerm), ATerm v_49, ATerm u_49, ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm v_7 (ATerm n_655, ATerm s_655, ATerm z_76, ATerm);
ATerm while_not_2_0 (ATerm a_100 (ATerm), ATerm b_100 (ATerm), ATerm);
ATerm for_3_0 (ATerm d_100 (ATerm), ATerm e_100 (ATerm), ATerm f_100 (ATerm), ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm g_5 (ATerm);
ATerm x_56 (ATerm x_54, ATerm y_54, ATerm f_55, ATerm);
ATerm h_5 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm q_5 (ATerm);
ATerm s_5 (ATerm);
ATerm free_vars_3_0 (ATerm z_126 (ATerm), ATerm a_127 (ATerm), ATerm b_127 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm Var_1_0 (ATerm x_85 (ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm y_7 (ATerm u_125 (ATerm), ATerm v_125 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm g_75, ATerm f_75, ATerm e_75, ATerm);
ATerm new_0_0 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm z_7 (ATerm o_125 (ATerm), ATerm p_125 (ATerm (ATerm), ATerm), ATerm y_74, ATerm b_75, ATerm);
ATerm env_alltd_1_0 (ATerm z_104 (ATerm), ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_6_0 (ATerm v_124 (ATerm), ATerm w_124 (ATerm (ATerm), ATerm), ATerm x_124 (ATerm), ATerm y_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm z_124 (ATerm (ATerm), ATerm), ATerm a_125 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm d_108 (ATerm), ATerm e_108 (ATerm), ATerm f_108 (ATerm), ATerm g_108 (ATerm), ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm u_6 (ATerm);
ATerm g_8 (ATerm k_98 (ATerm), ATerm i_36, ATerm j_36, ATerm);
ATerm Trm_to_Cong_0_0 (ATerm);
ATerm trm_to_cong_0_0 (ATerm);
ATerm v_6 (ATerm);
ATerm m_7 (ATerm o_36, ATerm q_36, ATerm p_36, ATerm);
ATerm f_7 (ATerm);
ATerm h_8 (ATerm m_35, ATerm o_35, ATerm n_35, ATerm);
ATerm i_8 (ATerm y_62, ATerm z_62, ATerm);
ATerm j_8 (ATerm m_66, ATerm n_66, ATerm);
ATerm l_8 (ATerm l_118 (ATerm), ATerm x_499, ATerm q_66, ATerm);
ATerm k_8 (ATerm i_66, ATerm j_66, ATerm);
ATerm q_7 (ATerm);
ATerm u_7 (ATerm);
ATerm output_1_0 (ATerm u_122 (ATerm), ATerm);
ATerm i_73 (ATerm c_73, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm m_8 (ATerm o_66, ATerm);
ATerm n_8 (ATerm a_63, ATerm b_63, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm n_75 (ATerm s_73, ATerm);
ATerm o_75 (ATerm w_73, ATerm x_73, ATerm y_73, ATerm);
ATerm p_75 (ATerm i_74, ATerm j_74, ATerm k_74, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm w_7 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm v_122 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm x_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm d_8 (ATerm);
ATerm q_8 (ATerm);
ATerm u_8 (ATerm);
ATerm a_9 (ATerm);
ATerm b_9 (ATerm);
ATerm c_9 (ATerm);
ATerm d_9 (ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm v_8 (ATerm p_67, ATerm q_67, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm i_9 (ATerm);
ATerm l_9 (ATerm);
ATerm m_9 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm t_8 (ATerm n_72, ATerm o_72, ATerm m_72, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm o_9 (ATerm);
ATerm q_9 (ATerm);
ATerm s_9 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm o_8 (ATerm y_59, ATerm z_59, ATerm);
ATerm foldr_2_0 (ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm t_9 (ATerm);
ATerm u_9 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm v_119 (ATerm), ATerm);
ATerm w_9 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm x_9 (ATerm);
ATerm need_help_1_0 (ATerm l_122 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm b_10 (ATerm);
ATerm c_10 (ATerm);
ATerm g_10 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm k_106 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm r_8 (ATerm o_57, ATerm p_57, ATerm);
ATerm debug_1_0 (ATerm j_118 (ATerm), ATerm);
ATerm h_10 (ATerm);
ATerm j_10 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm s_8 (ATerm e_74, ATerm f_74, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm r_10 (ATerm);
ATerm d_11 (ATerm);
ATerm e_11 (ATerm);
ATerm f_11 (ATerm);
ATerm g_11 (ATerm);
ATerm k_11 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm o_124 (ATerm), ATerm);
ATerm m_11 (ATerm);
ATerm n_11 (ATerm);
ATerm q_11 (ATerm);
ATerm s_11 (ATerm);
ATerm parse_options_1_0 (ATerm n_124 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm n_122 (ATerm), ATerm o_122 (ATerm), ATerm p_122 (ATerm), ATerm q_122 (ATerm), ATerm);
ATerm u_11 (ATerm);
ATerm v_11 (ATerm);
ATerm w_11 (ATerm);
ATerm x_11 (ATerm);
ATerm y_11 (ATerm);
ATerm z_11 (ATerm);
ATerm b_12 (ATerm);
ATerm c_12 (ATerm);
ATerm d_12 (ATerm);
ATerm g_12 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm x_6 (ATerm v_39, ATerm t)
{
  ATerm h_0 = NULL,j_0 = NULL;
  t = not_null(v_39);
  {
    ATerm p_0 (ATerm t)
    {
      if(match_cons(t, sym_Op_2))
        {
          ATerm i_12 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) i_12) != ATmakeSymbol("Cons", 0, ATtrue)))
            _fail(t);
          {
            ATerm n_12 = ATgetArgument(t, 1);
            if(((ATgetType(n_12) == AT_LIST) && !(ATisEmpty(n_12))))
              {
                ATerm o_12 = ATgetFirst((ATermList) n_12);
                if(match_cons(o_12, sym_Var_1))
                  {
                    ATerm q_12 = ATgetArgument(o_12, 0);
                    if(match_cons(q_12, sym_ListVar_1))
                      {
                        if(((h_0 != NULL) && (h_0 != ATgetArgument(q_12, 0))))
                          _fail(ATgetArgument(q_12, 0));
                        else
                          h_0 = ATgetArgument(q_12, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm p_12 = (ATerm) ATgetNext((ATermList) n_12);
                  if(((ATgetType(p_12) == AT_LIST) && !(ATisEmpty(p_12))))
                    {
                      ATerm u_12 = ATgetFirst((ATermList) p_12);
                      if(match_cons(u_12, sym_Op_2))
                        {
                          ATerm x_12 = ATgetArgument(u_12, 0);
                          if((ATgetSymbol((ATermAppl) x_12) != ATmakeSymbol("Nil", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm y_12 = ATgetArgument(u_12, 1);
                            if(((ATgetType(y_12) != AT_LIST) || !(ATisEmpty(y_12))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      {
                        ATerm v_12 = (ATerm) ATgetNext((ATermList) p_12);
                        if(((ATgetType(v_12) != AT_LIST) || !(ATisEmpty(v_12))))
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
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_0));
      return(t);
    }
    t = oncetd_1_0(p_0, t);
    if(((j_0 != NULL) && (j_0 != t)))
      _fail(t);
    else
      j_0 = t;
    t = (ATerm) ATmakeAppl(sym_Build_1, not_null(j_0));
  }
  return(t);
}
ATerm y_6 (ATerm s_39, ATerm t)
{
  ATerm n_0 = NULL,o_0 = NULL;
  t = not_null(s_39);
  {
    ATerm q_0 (ATerm t)
    {
      if(match_cons(t, sym_Op_2))
        {
          ATerm b_13 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) b_13) != ATmakeSymbol("Cons", 0, ATtrue)))
            _fail(t);
          {
            ATerm d_13 = ATgetArgument(t, 1);
            if(((ATgetType(d_13) == AT_LIST) && !(ATisEmpty(d_13))))
              {
                ATerm e_13 = ATgetFirst((ATermList) d_13);
                if(match_cons(e_13, sym_Var_1))
                  {
                    ATerm g_13 = ATgetArgument(e_13, 0);
                    if(match_cons(g_13, sym_ListVar_1))
                      {
                        if(((n_0 != NULL) && (n_0 != ATgetArgument(g_13, 0))))
                          _fail(ATgetArgument(g_13, 0));
                        else
                          n_0 = ATgetArgument(g_13, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm f_13 = (ATerm) ATgetNext((ATermList) d_13);
                  if(((ATgetType(f_13) == AT_LIST) && !(ATisEmpty(f_13))))
                    {
                      ATerm h_13 = ATgetFirst((ATermList) f_13);
                      if(match_cons(h_13, sym_Op_2))
                        {
                          ATerm k_13 = ATgetArgument(h_13, 0);
                          if((ATgetSymbol((ATermAppl) k_13) != ATmakeSymbol("Nil", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm r_13 = ATgetArgument(h_13, 1);
                            if(((ATgetType(r_13) != AT_LIST) || !(ATisEmpty(r_13))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      {
                        ATerm i_13 = (ATerm) ATgetNext((ATermList) f_13);
                        if(((ATgetType(i_13) != AT_LIST) || !(ATisEmpty(i_13))))
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
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_0));
      return(t);
    }
    t = oncetd_1_0(q_0, t);
    if(((o_0 != NULL) && (o_0 != t)))
      _fail(t);
    else
      o_0 = t;
    t = (ATerm) ATmakeAppl(sym_Match_1, not_null(o_0));
  }
  return(t);
}
ATerm map1_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm a_2 = NULL,e_2 = NULL,i_2 = NULL;
  a_2 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_2 = ATgetFirst((ATermList) t);
      i_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_0 = NULL,t_0 = NULL,b_1 = NULL,f_1 = NULL,h_1 = NULL,p_1 = NULL,r_1 = NULL,v_0 = NULL,u_0 = NULL;
        t = SSLgetAnnotations(a_2);
        h_1 = t;
        t = e_2;
        t = m_0(t);
        p_1 = t;
        t = (ATerm) ATinsert(CheckATermList(i_2), p_1);
        u_0 = t;
        t = SSLsetAnnotations(u_0, h_1);
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
          ATerm v_13 = t;
          int x_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(m_0, t);
              ;
              LocalPopChoice(x_13);
            }
          else
            {
              t = v_13;
            }
          f_1 = t;
          t = (ATerm) ATinsert(CheckATermList(f_1), t_0);
          v_0 = t;
          t = SSLsetAnnotations(v_0, s_0);
        }
        ;
        LocalPopChoice(t_13);
      }
    else
      {
        t = s_13;
        {
          ATerm m_2 = NULL,p_2 = NULL,w_0 = NULL;
          t = SSLgetAnnotations(a_2);
          m_2 = t;
          t = i_2;
          t = map1_1_0(m_0, t);
          p_2 = t;
          t = (ATerm) ATinsert(CheckATermList(p_2), e_2);
          w_0 = t;
          t = SSLsetAnnotations(w_0, m_2);
        }
      }
  }
  return(t);
}
ATerm r_0 (ATerm t)
{
  ATerm n_4 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      n_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, n_4, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_14), term_a_14));
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL;
  q_4 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      p_4 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, p_4, term_a_14);
    }
  else
    {
      t = q_4;
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
ATerm g_1 (ATerm t)
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
  ATerm x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,d_3 = NULL,e_3 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      d_3 = ATgetArgument(t, 0);
      e_3 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, d_3, e_3);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          d_3 = ATgetArgument(t, 0);
          t = d_3;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_2 = ATgetFirst((ATermList) t);
              y_2 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, x_2, (ATerm) ATmakeAppl(sym_LChoices_1, y_2));
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
              d_3 = ATgetArgument(t, 0);
              t = d_3;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  x_2 = ATgetFirst((ATermList) t);
                  y_2 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, x_2, (ATerm) ATmakeAppl(sym_Choices_1, y_2));
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
                  d_3 = ATgetArgument(t, 0);
                  t = d_3;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      x_2 = ATgetFirst((ATermList) t);
                      y_2 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_2, (ATerm) ATmakeAppl(sym_Seqs_1, y_2));
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
                      d_3 = ATgetArgument(t, 0);
                      e_3 = ATgetArgument(t, 1);
                      a_3 = ATgetArgument(t, 2);
                      z_2 = ATgetArgument(t, 3);
                      {
                        ATerm c_4 = NULL,m_4 = NULL;
                        t = e_3;
                        t = map1_1_0(r_0, t);
                        c_4 = t;
                        t = a_3;
                        t = map1_1_0(x_0, t);
                        m_4 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, d_3, c_4, m_4, z_2);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          d_3 = ATgetArgument(t, 0);
                          e_3 = ATgetArgument(t, 1);
                          a_3 = ATgetArgument(t, 2);
                          z_2 = ATgetArgument(t, 3);
                          {
                            ATerm g_14 = t;
                            int h_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm z_4 = NULL,c_5 = NULL;
                                t = a_3;
                                t = map1_1_0(y_0, t);
                                z_4 = t;
                                t = e_3;
                                t = map_1_0(z_0, t);
                                c_5 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, d_3, c_5, z_4, z_2);
                                ;
                                LocalPopChoice(h_14);
                              }
                            else
                              {
                                t = g_14;
                                {
                                  ATerm p_5 = NULL,r_5 = NULL;
                                  t = e_3;
                                  t = map1_1_0(c_1, t);
                                  p_5 = t;
                                  t = a_3;
                                  t = map_1_0(g_1, t);
                                  r_5 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, d_3, p_5, r_5, z_2);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              d_3 = ATgetArgument(t, 0);
                              e_3 = ATgetArgument(t, 1);
                              a_3 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, e_3, (ATerm) ATmakeAppl(sym_Op_2, term_j_14, (ATerm) ATinsert(ATinsert(ATempty, a_3), d_3)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  d_3 = ATgetArgument(t, 0);
                                  e_3 = ATgetArgument(t, 1);
                                  a_3 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, a_3)), d_3), (ATerm) ATmakeAppl(sym_Build_1, e_3)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      d_3 = ATgetArgument(t, 0);
                                      e_3 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_3, (ATerm) ATmakeAppl(sym_Match_1, e_3));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          d_3 = ATgetArgument(t, 0);
                                          e_3 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, d_3), e_3);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              d_3 = ATgetArgument(t, 0);
                                              e_3 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, e_3), d_3);
                                        }
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
ATerm repeat_1_0 (ATerm l_99 (ATerm), ATerm t)
{
  ATerm a_7 (ATerm t)
  {
    ATerm k_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_99(t);
        t = a_7(t);
        ;
        LocalPopChoice(l_14);
      }
    else
      {
        t = k_14;
      }
    return(t);
  }
  t = a_7(t);
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL,p_8 = NULL,x_8 = NULL;
  x_8 = t;
  if(match_cons(t, sym_Con_3))
    {
      e_8 = ATgetArgument(t, 0);
      f_8 = ATgetArgument(t, 1);
      p_8 = ATgetArgument(t, 2);
      {
        ATerm f_3 = NULL,a_1 = NULL;
        t = SSLgetAnnotations(x_8);
        f_3 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, e_8, f_8, p_8);
        a_1 = t;
        t = SSLsetAnnotations(a_1, f_3);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = x_8;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm m_14 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(i_1, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_14;
    }
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL,m_10 = NULL,q_10 = NULL;
  f_10 = t;
  if(match_cons(t, sym_Con_3))
    {
      m_10 = ATgetArgument(t, 0);
      q_10 = ATgetArgument(t, 1);
      e_10 = ATgetArgument(t, 2);
      {
        ATerm e_4 = NULL,d_1 = NULL;
        t = SSLgetAnnotations(f_10);
        e_4 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, m_10, q_10, e_10);
        d_1 = t;
        t = SSLsetAnnotations(d_1, e_4);
      }
    }
  else
    {
      ATerm i_5 = NULL,e_1 = NULL;
      if(match_cons(t, sym_App_2))
        {
          m_10 = ATgetArgument(t, 0);
          q_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_10);
      i_5 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, m_10, q_10);
      e_1 = t;
      t = SSLsetAnnotations(e_1, i_5);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm n_14 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(j_1, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_14;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL,o_11 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      h_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_11;
  if(match_cons(t, sym_StratRule_3))
    {
      i_11 = ATgetArgument(t, 0);
      j_11 = ATgetArgument(t, 1);
      o_11 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, j_11), (ATerm) ATmakeAppl(sym_Where_1, o_11)), i_11));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          i_11 = ATgetArgument(t, 0);
          j_11 = ATgetArgument(t, 1);
          o_11 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = i_11;
      t = pureterm_0_0(t);
      t = j_11;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, j_11)), (ATerm) ATmakeAppl(sym_Where_1, o_11)), (ATerm) ATmakeAppl(sym_Match_1, i_11)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm n_101 (ATerm), ATerm t)
{
  ATerm h_12 (ATerm t)
  {
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_101(t);
        ;
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
        t = SRTS_one(h_12, t);
      }
    return(t);
  }
  t = h_12(t);
  return(t);
}
ATerm b_7 (ATerm q_37, ATerm r_37, ATerm s_37, ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL;
  t = new_0_0(t);
  if(((r_12 != NULL) && (r_12 != t)))
    _fail(t);
  else
    r_12 = t;
  t = not_null(q_37);
  {
    ATerm l_1 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm q_14 = ATgetArgument(t, 0);
          if(match_cons(q_14, sym_Var_1))
            {
              if(((m_12 != NULL) && (m_12 != ATgetArgument(q_14, 0))))
                _fail(ATgetArgument(q_14, 0));
              else
                m_12 = ATgetArgument(q_14, 0);
            }
          else
            _fail(t);
          if(((k_12 != NULL) && (k_12 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            k_12 = ATgetArgument(t, 1);
          {
            ATerm r_14 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_12));
      return(t);
    }
    t = oncetd_1_0(l_1, t);
    if(((s_12 != NULL) && (s_12 != t)))
      _fail(t);
    else
      s_12 = t;
    t = not_null(r_37);
    {
      ATerm n_1 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm s_14 = ATgetArgument(t, 0);
            if(match_cons(s_14, sym_Var_1))
              {
                if(((m_12 != NULL) && (m_12 != ATgetArgument(s_14, 0))))
                  _fail(ATgetArgument(s_14, 0));
                else
                  m_12 = ATgetArgument(s_14, 0);
              }
            else
              _fail(t);
            if(((l_12 != NULL) && (l_12 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              l_12 = ATgetArgument(t, 1);
            {
              ATerm t_14 = ATgetArgument(t, 2);
              if(match_cons(t_14, sym_CallT_3))
                {
                  if(((j_12 != NULL) && (j_12 != ATgetArgument(t_14, 0))))
                    _fail(ATgetArgument(t_14, 0));
                  else
                    j_12 = ATgetArgument(t_14, 0);
                  {
                    ATerm v_14 = ATgetArgument(t_14, 1);
                    if(((ATgetType(v_14) != AT_LIST) || !(ATisEmpty(v_14))))
                      _fail(t);
                  }
                  {
                    ATerm w_14 = ATgetArgument(t_14, 2);
                    if(((ATgetType(w_14) != AT_LIST) || !(ATisEmpty(w_14))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_12));
        return(t);
      }
      t = oncetd_1_0(n_1, t);
      if(((t_12 != NULL) && (t_12 != t)))
        _fail(t);
      else
        t_12 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(r_12)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(s_12), not_null(t_12), (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_37), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(j_12), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(k_12), not_null(l_12), term_f_14))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(m_12)), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_12)))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm x_14 = t;
  int y_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_14 = t;
      int a_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,u_13 = NULL;
          p_13 = t;
          if(match_cons(t, sym_SRule_1))
            {
              q_13 = ATgetArgument(t, 0);
              t = q_13;
              if(match_cons(t, sym_Rule_3))
                {
                  m_13 = ATgetArgument(t, 0);
                  n_13 = ATgetArgument(t, 1);
                  o_13 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = p_13;
              t = b_7(m_13, n_13, o_13, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm t_6 = NULL,w_6 = NULL,k_1 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  q_13 = ATgetArgument(t, 0);
                  u_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(p_13);
              t_6 = t;
              t = u_13;
              t = desugarRule_0_0(t);
              w_6 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, q_13, w_6);
              k_1 = t;
              t = SSLsetAnnotations(k_1, t_6);
            }
          ;
          LocalPopChoice(a_15);
        }
      else
        {
          t = z_14;
          t = RtoS_0_0(t);
        }
      ;
      LocalPopChoice(y_14);
    }
  else
    {
      t = x_14;
    }
  return(t);
}
ATerm map_1_0 (ATerm a_106 (ATerm), ATerm t)
{
  ATerm e_15 (ATerm t)
  {
    ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL;
    b_15 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_15;
      }
    else
      {
        ATerm c_8 = NULL,w_8 = NULL,z_8 = NULL,m_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_15 = ATgetFirst((ATermList) t);
            d_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_15);
        c_8 = t;
        t = c_15;
        t = a_106(t);
        w_8 = t;
        t = d_15;
        t = e_15(t);
        z_8 = t;
        t = (ATerm) ATinsert(CheckATermList(z_8), w_8);
        m_1 = t;
        t = SSLsetAnnotations(m_1, c_8);
      }
    return(t);
  }
  t = e_15(t);
  return(t);
}
ATerm topdown_1_0 (ATerm j_100 (ATerm), ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    t = topdown_1_0(j_100, t);
    return(t);
  }
  t = j_100(t);
  t = SRTS_all(o_1, t);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm s_16 = NULL;
  ATerm f_15 = t;
  int g_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_16 = ATgetArgument(t, 0);
          {
            ATerm h_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_15);
      t = s_16;
    }
  else
    {
      t = f_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_16;
    }
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm y_16 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_16);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm i_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(k_15);
    }
  else
    {
      t = i_15;
      {
        ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            b_17 = ATgetArgument(t, 0);
            t = b_17;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                b_17 = ATgetArgument(t, 0);
                c_17 = ATgetArgument(t, 1);
                d_17 = ATgetArgument(t, 2);
                e_17 = ATgetArgument(t, 3);
                t = d_17;
                t = map_1_0(w_1, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    b_17 = ATgetArgument(t, 0);
                    c_17 = ATgetArgument(t, 1);
                    d_17 = ATgetArgument(t, 2);
                    e_17 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = d_17;
                t = map_1_0(b_2, t);
              }
          }
      }
    }
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm q_17 = NULL;
  ATerm m_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_17 = ATgetArgument(t, 0);
          {
            ATerm v_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_15);
      t = q_17;
    }
  else
    {
      t = m_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_17;
    }
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm f_18 = NULL;
  ATerm z_15 = t;
  int d_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_18 = ATgetArgument(t, 0);
          {
            ATerm e_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_16);
      t = f_18;
    }
  else
    {
      t = z_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_18;
    }
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm o_18 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_18);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm f_16 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(g_16);
    }
  else
    {
      t = f_16;
      {
        ATerm t_18 = NULL,w_18 = NULL,x_18 = NULL,z_18 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            t_18 = ATgetArgument(t, 0);
            t = t_18;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                t_18 = ATgetArgument(t, 0);
                w_18 = ATgetArgument(t, 1);
                x_18 = ATgetArgument(t, 2);
                z_18 = ATgetArgument(t, 3);
                t = x_18;
                t = map_1_0(f_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    t_18 = ATgetArgument(t, 0);
                    w_18 = ATgetArgument(t, 1);
                    x_18 = ATgetArgument(t, 2);
                    z_18 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = x_18;
                t = map_1_0(g_2, t);
              }
          }
      }
    }
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm l_19 = NULL;
  ATerm h_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_19 = ATgetArgument(t, 0);
          {
            ATerm j_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_16);
      t = l_19;
    }
  else
    {
      t = h_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_19;
    }
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm q_20 = NULL;
  ATerm k_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_20 = ATgetArgument(t, 0);
          {
            ATerm m_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_16);
      t = q_20;
    }
  else
    {
      t = k_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_20;
    }
  return(t);
}
ATerm DeclareVariables_0_0 (ATerm t)
{
  ATerm y_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      a_16 = ATgetArgument(t, 0);
      b_16 = ATgetArgument(t, 1);
      c_16 = ATgetArgument(t, 2);
      y_15 = ATgetArgument(t, 3);
      {
        ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL;
        t = c_16;
        t = map_1_0(s_1, t);
        n_16 = t;
        t = y_15;
        t = free_vars_3_0(t_1, v_1, tboundin_3_0, t);
        p_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_16, n_16);
        t = diff_0_0(t);
        o_16 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, a_16, b_16, c_16, (ATerm) ATmakeAppl(sym_Scope_2, o_16, y_15));
      }
    }
  else
    {
      ATerm n_18 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          a_16 = ATgetArgument(t, 0);
          b_16 = ATgetArgument(t, 1);
          c_16 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = c_16;
      t = free_vars_3_0(c_2, d_2, tboundin_3_0, t);
      n_18 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, a_16, b_16, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, n_18, c_16));
    }
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm i_22 = NULL;
  ATerm q_16 = t;
  int r_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_22 = ATgetArgument(t, 0);
          {
            ATerm t_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_16);
      t = i_22;
    }
  else
    {
      t = q_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_22;
    }
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm l_22 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_22);
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm u_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(v_16);
    }
  else
    {
      t = u_16;
      {
        ATerm o_22 = NULL,r_22 = NULL,t_22 = NULL,y_22 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            o_22 = ATgetArgument(t, 0);
            t = o_22;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                o_22 = ATgetArgument(t, 0);
                r_22 = ATgetArgument(t, 1);
                t_22 = ATgetArgument(t, 2);
                y_22 = ATgetArgument(t, 3);
                t = t_22;
                t = map_1_0(l_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    o_22 = ATgetArgument(t, 0);
                    r_22 = ATgetArgument(t, 1);
                    t_22 = ATgetArgument(t, 2);
                    y_22 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = t_22;
                t = map_1_0(n_2, t);
              }
          }
      }
    }
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm j_23 = NULL;
  ATerm w_16 = t;
  int x_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_23 = ATgetArgument(t, 0);
          {
            ATerm z_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_16);
      t = j_23;
    }
  else
    {
      t = w_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_23;
    }
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm v_23 = NULL;
  ATerm a_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_23 = ATgetArgument(t, 0);
          {
            ATerm g_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_17);
      t = v_23;
    }
  else
    {
      t = a_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_23;
    }
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm k_24 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_24);
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm h_17 = t;
  int j_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(j_17);
    }
  else
    {
      t = h_17;
      {
        ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            m_24 = ATgetArgument(t, 0);
            t = m_24;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                m_24 = ATgetArgument(t, 0);
                n_24 = ATgetArgument(t, 1);
                o_24 = ATgetArgument(t, 2);
                p_24 = ATgetArgument(t, 3);
                t = o_24;
                t = map_1_0(r_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    m_24 = ATgetArgument(t, 0);
                    n_24 = ATgetArgument(t, 1);
                    o_24 = ATgetArgument(t, 2);
                    p_24 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = o_24;
                t = map_1_0(s_2, t);
              }
          }
      }
    }
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm a_25 = NULL;
  ATerm k_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_25 = ATgetArgument(t, 0);
          {
            ATerm m_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_17);
      t = a_25;
    }
  else
    {
      t = k_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_25;
    }
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm u_25 = NULL;
  ATerm n_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_25 = ATgetArgument(t, 0);
          {
            ATerm p_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_17);
      t = u_25;
    }
  else
    {
      t = n_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_25;
    }
  return(t);
}
ATerm RDtoSD_0_0 (ATerm t)
{
  ATerm i_21 = NULL,k_21 = NULL,v_21 = NULL,w_21 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      k_21 = ATgetArgument(t, 0);
      v_21 = ATgetArgument(t, 1);
      w_21 = ATgetArgument(t, 2);
      i_21 = ATgetArgument(t, 3);
      {
        ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL;
        t = w_21;
        t = map_1_0(h_2, t);
        b_22 = t;
        t = i_21;
        t = free_vars_3_0(j_2, k_2, tboundin_3_0, t);
        d_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_22, b_22);
        t = diff_0_0(t);
        c_22 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, k_21, v_21, w_21, (ATerm) ATmakeAppl(sym_Scope_2, c_22, (ATerm) ATmakeAppl(sym_SRule_1, i_21)));
      }
    }
  else
    {
      ATerm e_24 = NULL;
      if(match_cons(t, sym_RDef_3))
        {
          k_21 = ATgetArgument(t, 0);
          v_21 = ATgetArgument(t, 1);
          w_21 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = w_21;
      t = free_vars_3_0(o_2, q_2, tboundin_3_0, t);
      e_24 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, k_21, v_21, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, e_24, (ATerm) ATmakeAppl(sym_SRule_1, w_21)));
    }
  return(t);
}
ATerm e_7 (ATerm s_116 (ATerm), ATerm m_61, ATerm k_61, ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL;
  c_26 = t;
  t = s_116(t);
  x_25 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_25, m_61, k_61);
  t = t_8(x_25, m_61, k_61, t);
  {
    ATerm r_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_26 = NULL;
        t = term_t_17;
        f_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_25, term_t_17);
        t = s_8(x_25, f_26, t);
        ;
        LocalPopChoice(s_17);
      }
    else
      {
        t = r_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_25 = ATgetFirst((ATermList) t);
        z_25 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_t_17;
    d_26 = t;
    t = (ATerm) ATinsert(CheckATermList(z_25), (ATerm) ATinsert(CheckATermList(y_25), m_61));
    e_26 = t;
    t = SSL_table_put(x_25, d_26, e_26);
    t = c_26;
  }
  return(t);
}
ATerm g_7 (ATerm y_72, ATerm z_72, ATerm t)
{
  ATerm g_26 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_72, z_72);
  t = s_8(y_72, z_72, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_26 = ATgetFirst((ATermList) t);
      {
        ATerm u_17 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = g_26;
  return(t);
}
ATerm g_27 (ATerm t_26, ATerm t)
{
  ATerm h_9 = NULL;
  t = term_v_17;
  h_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_17, t_26);
  t = g_7(h_9, t_26, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm w_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_17) != ATmakeSymbol("f_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_z_17;
  return(t);
}
ATerm l_27 (ATerm z_26, ATerm t)
{
  ATerm n_9 = NULL;
  t = term_v_17;
  n_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_17, z_26);
  t = g_7(n_9, z_26, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm a_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_18) != ATmakeSymbol("b_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_z_17;
  return(t);
}
ATerm CongDefined_0_0 (ATerm t)
{
  ATerm d_27 = NULL,f_27 = NULL;
  d_27 = t;
  if(match_cons(t, sym__2))
    {
      ATerm b_18 = ATgetArgument(t, 0);
      f_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_27;
  if(match_int(t, 0))
    {
      ATerm c_18 = t;
      int d_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_27(d_27, t);
          ;
          LocalPopChoice(d_18);
        }
      else
        {
          t = c_18;
          t = l_27(d_27, t);
        }
    }
  else
    {
      t = g_27(d_27, t);
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_e_18;
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm s_10 = NULL,t_10 = NULL;
  if(match_cons(t, sym__2))
    {
      s_10 = ATgetArgument(t, 0);
      t_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_8(s_10, t_10, t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = term_g_18;
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_v_17;
  return(t);
}
ATerm b_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_h_18;
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm u_10 = NULL,v_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_10 = ATgetFirst((ATermList) t);
      v_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_10, v_10);
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL,z_10 = NULL,a_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_18 = ATgetArgument(t, 0);
      if(match_cons(i_18, sym__2))
        {
          w_10 = ATgetArgument(i_18, 0);
          x_10 = ATgetArgument(i_18, 1);
        }
      else
        _fail(t);
      {
        ATerm j_18 = ATgetArgument(t, 1);
        if(match_cons(j_18, sym__2))
          {
            z_10 = ATgetArgument(j_18, 0);
            a_11 = ATgetArgument(j_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_10), w_10), (ATerm) ATinsert(CheckATermList(a_11), x_10));
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm b_11 = NULL;
  t = new_0_0(t);
  b_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, b_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_14), term_a_14)), b_11);
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm c_11 = NULL;
  c_11 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, c_11), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_v_17;
  return(t);
}
ATerm MkCongDef_0_0 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,w_29 = NULL,x_29 = NULL;
  r_29 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      s_29 = ATgetArgument(t, 0);
      w_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_29;
  if(match_cons(t, sym_FunType_2))
    {
      x_29 = ATgetArgument(t, 0);
      q_29 = ATgetArgument(t, 1);
      {
        ATerm i_10 = NULL,k_10 = NULL,l_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL;
        t = x_29;
        t = foldr_3_0(t_2, u_2, v_2, t);
        i_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_29, i_10);
        {
          ATerm l_18 = t;
          if((PushChoice() == 0))
            {
              t = CongDefined_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = l_18;
            }
          t = (ATerm) ATmakeAppl(sym__2, s_29, i_10);
          o_10 = t;
          t = term_q_18;
          p_10 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_29, i_10), term_q_18);
          t = e_7(w_2, o_10, p_10, t);
          t = x_29;
          t = genzip_4_0(b_3, c_3, g_3, h_3, t);
          if(match_cons(t, sym__2))
            {
              k_10 = ATgetArgument(t, 0);
              l_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_10;
          t = map_1_0(i_3, t);
          n_10 = t;
          t = (ATerm) ATmakeAppl(sym_SDefT_4, s_29, k_10, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, s_29, n_10));
        }
      }
    }
  else
    {
      ATerm p_11 = NULL,r_11 = NULL;
      if(match_cons(t, sym_ConstType_1))
        {
          ATerm y_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, s_29, term_e_18);
      {
        ATerm a_19 = t;
        if((PushChoice() == 0))
          {
            t = CongDefined_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = a_19;
          }
        t = (ATerm) ATmakeAppl(sym__2, s_29, term_e_18);
        p_11 = t;
        t = term_c_19;
        r_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_29, term_e_18), term_c_19);
        t = e_7(j_3, p_11, r_11, t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, s_29, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, s_29, (ATerm) ATempty));
      }
    }
  return(t);
}
ATerm filter_1_0 (ATerm v_112 (ATerm), ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL;
  u_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_30;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_30 = ATgetFirst((ATermList) t);
          w_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm e_19 = t;
        int f_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_12 = NULL,e_12 = NULL,f_12 = NULL,q_1 = NULL;
            t = SSLgetAnnotations(u_30);
            a_12 = t;
            t = v_30;
            t = v_112(t);
            e_12 = t;
            t = w_30;
            t = filter_1_0(v_112, t);
            f_12 = t;
            t = (ATerm) ATinsert(CheckATermList(f_12), e_12);
            q_1 = t;
            t = SSLsetAnnotations(q_1, a_12);
            ;
            LocalPopChoice(f_19);
          }
        else
          {
            t = e_19;
            t = w_30;
            t = filter_1_0(v_112, t);
          }
      }
    }
  return(t);
}
ATerm k_7 (ATerm s_72, ATerm t_72, ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL;
  f_31 = t;
  {
    ATerm g_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_72, t_72);
        t = s_8(s_72, t_72, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_19 = ATgetFirst((ATermList) t);
            e_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(i_19);
        t = SSL_table_put(s_72, t_72, e_31);
        t = (ATerm) ATmakeAppl(sym__3, s_72, t_72, e_31);
      }
    else
      {
        t = g_19;
        t = SSL_table_remove(s_72, t_72);
        t = (ATerm) ATmakeAppl(sym__2, s_72, t_72);
      }
    t = f_31;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm p_116 (ATerm), ATerm t)
{
  ATerm g_31 = NULL,n_31 = NULL,p_31 = NULL,t_31 = NULL,y_31 = NULL;
  if(((t_31 != NULL) && (t_31 != t)))
    _fail(t);
  else
    t_31 = t;
  t = p_116(t);
  if(((p_31 != NULL) && (p_31 != t)))
    _fail(t);
  else
    p_31 = t;
  {
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_31 = NULL;
        t = term_t_17;
        z_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_31), term_t_17);
        t = s_8(not_null(p_31), z_31, t);
        ;
        LocalPopChoice(n_19);
      }
    else
      {
        t = m_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((n_31 != NULL) && (n_31 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          n_31 = ATgetFirst((ATermList) t);
        if(((g_31 != NULL) && (g_31 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          g_31 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_t_17;
    if(((y_31 != NULL) && (y_31 != t)))
      _fail(t);
    else
      y_31 = t;
    t = SSL_table_put(not_null(p_31), not_null(y_31), not_null(g_31));
    t = not_null(n_31);
    {
      ATerm k_3 (ATerm t)
      {
        ATerm a_32 = NULL;
        a_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_31), a_32);
        t = k_7(not_null(p_31), a_32, t);
        return(t);
      }
      t = map_1_0(k_3, t);
      t = not_null(t_31);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm t)
{
  ATerm o_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_99(t);
      t = f_99(t);
      ;
      LocalPopChoice(p_19);
    }
  else
    {
      t = o_19;
      t = f_99(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm o_116 (ATerm), ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL,i_32 = NULL;
  d_32 = t;
  t = o_116(t);
  c_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_32, term_t_17);
  {
    ATerm q_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_32 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm s_19 = ATgetArgument(t, 0);
            ATerm t_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_t_17;
        o_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_32, term_t_17);
        t = s_8(c_32, o_32, t);
        ;
        LocalPopChoice(r_19);
      }
    else
      {
        t = q_19;
        t = (ATerm) ATempty;
      }
    e_32 = t;
    t = term_t_17;
    f_32 = t;
    t = (ATerm) ATinsert(CheckATermList(e_32), (ATerm) ATempty);
    i_32 = t;
    t = SSL_table_put(c_32, f_32, i_32);
    t = d_32;
  }
  return(t);
}
ATerm scope_2_0 (ATerm q_116 (ATerm), ATerm r_116 (ATerm), ATerm t)
{
  ATerm l_3 (ATerm t)
  {
    t = end_scope_1_0(q_116, t);
    return(t);
  }
  t = begin_scope_1_0(q_116, t);
  t = restore_always_2_0(r_116, l_3, t);
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_v_17;
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = filter_1_0(o_3, t);
  t = concat_0_0(t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm y_32 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      y_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_32;
  t = filter_1_0(MkCongDef_0_0, t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm u_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RDtoSD_0_0(t);
      ;
      LocalPopChoice(v_19);
    }
  else
    {
      t = u_19;
      t = DeclareVariables_0_0(t);
    }
  t = topdown_1_0(q_3, t);
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm z_32 = NULL,g_33 = NULL,h_33 = NULL;
  h_33 = t;
  if(match_cons(t, sym_Call_2))
    {
      z_32 = ATgetArgument(t, 0);
      g_33 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_CallT_3, z_32, g_33, (ATerm) ATempty);
    }
  else
    {
      t = h_33;
    }
  return(t);
}
ATerm l_7 (ATerm k_35, ATerm l_35, ATerm t)
{
  ATerm r_32 = NULL,w_32 = NULL,x_32 = NULL;
  t = k_35;
  t = scope_2_0(m_3, n_3, t);
  w_32 = t;
  t = (ATerm) ATinsert(CheckATermList(l_35), (ATerm) ATmakeAppl(sym_RDefT_4, term_w_19, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_VarDec_2, term_y_19, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_14), term_a_14))), (ATerm) ATmakeAppl(sym_VarDec_2, term_x_19, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_14), term_a_14))), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, term_e_20, term_l_20, (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATempty, term_s_20), term_o_20)))));
  t = map_1_0(p_3, t);
  x_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_32, x_32);
  t = conc_0_0(t);
  r_32 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, r_32)), (ATerm) ATmakeAppl(sym_Signature_1, k_35)));
  return(t);
}
ATerm at_end_1_0 (ATerm q_106 (ATerm), ATerm t)
{
  ATerm i_35 (ATerm t)
  {
    ATerm z_34 = NULL,g_35 = NULL,h_35 = NULL;
    h_35 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_34 = ATgetFirst((ATermList) t);
        g_35 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm w_12 = NULL,c_13 = NULL,u_1 = NULL;
          t = SSLgetAnnotations(h_35);
          w_12 = t;
          t = g_35;
          t = i_35(t);
          c_13 = t;
          t = (ATerm) ATinsert(CheckATermList(c_13), z_34);
          u_1 = t;
          t = SSLsetAnnotations(u_1, w_12);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_35;
        t = q_106(t);
      }
    return(t);
  }
  t = i_35(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_33 = NULL,f_34 = NULL,g_34 = NULL;
  s_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_33;
    }
  else
    {
      ATerm r_3 (ATerm t)
      {
        t = not_null(g_34);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((f_34 != NULL) && (f_34 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            f_34 = ATgetFirst((ATermList) t);
          if(((g_34 != NULL) && (g_34 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            g_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(f_34);
      t = at_end_1_0(r_3, t);
    }
  return(t);
}
ATerm b_38 (ATerm a_37, ATerm t)
{
  ATerm b_37 = NULL;
  t = SSL_explode_term(a_37);
  if(match_cons(t, sym__2))
    {
      ATerm t_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      b_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_37;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL,o_37 = NULL;
  if(((o_37 != NULL) && (o_37 != t)))
    _fail(t);
  else
    o_37 = t;
  if(match_cons(t, sym__2))
    {
      l_37 = ATgetArgument(t, 0);
      m_37 = ATgetArgument(t, 1);
      {
        ATerm u_20 = t;
        int v_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_3 (ATerm t)
            {
              t = not_null(m_37);
              return(t);
            }
            t = not_null(l_37);
            t = at_end_1_0(s_3, t);
            ;
            LocalPopChoice(v_20);
          }
        else
          {
            t = u_20;
            t = b_38(not_null(o_37), t);
          }
      }
    }
  else
    {
      t = b_38(not_null(o_37), t);
    }
  return(t);
}
ATerm t_3 (ATerm t)
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
ATerm u_3 (ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_20 = ATgetArgument(t, 0);
      if(((ATgetType(z_20) == AT_LIST) && !(ATisEmpty(z_20))))
        {
          n_15 = ATgetFirst((ATermList) z_20);
          o_15 = (ATerm) ATgetNext((ATermList) z_20);
        }
      else
        _fail(t);
      {
        ATerm a_21 = ATgetArgument(t, 1);
        if(((ATgetType(a_21) == AT_LIST) && !(ATisEmpty(a_21))))
          {
            p_15 = ATgetFirst((ATermList) a_21);
            q_15 = (ATerm) ATgetNext((ATermList) a_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_15, p_15), (ATerm) ATmakeAppl(sym__2, o_15, q_15));
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL;
  if(match_cons(t, sym__2))
    {
      r_15 = ATgetArgument(t, 0);
      s_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_15), r_15);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm u_15 = NULL,w_15 = NULL,x_15 = NULL;
  if(match_cons(t, sym__2))
    {
      u_15 = ATgetArgument(t, 0);
      x_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_15;
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm h_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_21);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, x_15);
      }
    else
      {
        t = f_21;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm j_21 = ATgetArgument(t, 0);
            w_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, x_15, w_15);
      }
  }
  return(t);
}
ATerm x_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_21 = ATgetArgument(t, 0);
      if(((ATgetType(l_21) != AT_LIST) || !(ATisEmpty(l_21))))
        _fail(t);
      {
        ATerm m_21 = ATgetArgument(t, 1);
        if(((ATgetType(m_21) != AT_LIST) || !(ATisEmpty(m_21))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm k_18 = NULL,p_18 = NULL,r_18 = NULL,s_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_21 = ATgetArgument(t, 0);
      if(((ATgetType(n_21) == AT_LIST) && !(ATisEmpty(n_21))))
        {
          k_18 = ATgetFirst((ATermList) n_21);
          p_18 = (ATerm) ATgetNext((ATermList) n_21);
        }
      else
        _fail(t);
      {
        ATerm o_21 = ATgetArgument(t, 1);
        if(((ATgetType(o_21) == AT_LIST) && !(ATisEmpty(o_21))))
          {
            r_18 = ATgetFirst((ATermList) o_21);
            s_18 = (ATerm) ATgetNext((ATermList) o_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_18, r_18), (ATerm) ATmakeAppl(sym__2, p_18, s_18));
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL;
  if(match_cons(t, sym__2))
    {
      u_18 = ATgetArgument(t, 0);
      v_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_18), u_18);
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm d_19 = NULL,h_19 = NULL,j_19 = NULL;
  if(match_cons(t, sym__2))
    {
      d_19 = ATgetArgument(t, 0);
      j_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_19;
  {
    ATerm p_21 = t;
    int q_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm r_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(q_21);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, j_19);
      }
    else
      {
        t = p_21;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm s_21 = ATgetArgument(t, 0);
            h_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, j_19, h_19);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm a_128 (ATerm), ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL;
  c_44 = t;
  if(match_cons(t, sym_Scope_2))
    {
      d_44 = ATgetArgument(t, 0);
      e_44 = ATgetArgument(t, 1);
      {
        ATerm w_13 = NULL,d_14 = NULL,x_1 = NULL;
        t = SSLgetAnnotations(c_44);
        w_13 = t;
        t = d_44;
        t = a_128(t);
        d_14 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, d_14, e_44);
        x_1 = t;
        t = SSLsetAnnotations(x_1, w_13);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          d_44 = ATgetArgument(t, 0);
          e_44 = ATgetArgument(t, 1);
          f_44 = ATgetArgument(t, 2);
          g_44 = ATgetArgument(t, 3);
          {
            ATerm u_14 = NULL,j_15 = NULL,l_15 = NULL,y_1 = NULL;
            t = SSLgetAnnotations(c_44);
            u_14 = t;
            t = f_44;
            t = a_128(t);
            l_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, f_44, l_15);
            t = genzip_4_0(t_3, u_3, v_3, w_3, t);
            j_15 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, d_44, e_44, j_15, g_44);
            y_1 = t;
            t = SSLsetAnnotations(y_1, u_14);
          }
        }
      else
        {
          ATerm i_17 = NULL,x_17 = NULL,y_17 = NULL,z_1 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              d_44 = ATgetArgument(t, 0);
              e_44 = ATgetArgument(t, 1);
              f_44 = ATgetArgument(t, 2);
              g_44 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_44);
          i_17 = t;
          t = f_44;
          t = a_128(t);
          y_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_44, y_17);
          t = genzip_4_0(x_3, y_3, z_3, a_4, t);
          x_17 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, d_44, e_44, x_17, g_44);
          z_1 = t;
          t = SSLsetAnnotations(z_1, i_17);
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm b_128 (ATerm), ATerm c_128 (ATerm), ATerm d_128 (ATerm), ATerm t)
{
  ATerm b_47 = NULL,e_47 = NULL,f_47 = NULL,i_47 = NULL,j_47 = NULL;
  i_47 = t;
  if(match_cons(t, sym_Scope_2))
    {
      j_47 = ATgetArgument(t, 0);
      b_47 = ATgetArgument(t, 1);
      {
        ATerm d_20 = NULL,g_20 = NULL,h_20 = NULL,i_7 = NULL;
        t = SSLgetAnnotations(i_47);
        d_20 = t;
        t = j_47;
        t = d_128(t);
        g_20 = t;
        t = b_47;
        t = b_128(t);
        h_20 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, g_20, h_20);
        i_7 = t;
        t = SSLsetAnnotations(i_7, d_20);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          j_47 = ATgetArgument(t, 0);
          b_47 = ATgetArgument(t, 1);
          e_47 = ATgetArgument(t, 2);
          f_47 = ATgetArgument(t, 3);
          {
            ATerm w_20 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL,j_7 = NULL;
            t = SSLgetAnnotations(i_47);
            w_20 = t;
            t = j_47;
            t = d_128(t);
            b_21 = t;
            t = b_47;
            t = d_128(t);
            c_21 = t;
            t = e_47;
            t = d_128(t);
            d_21 = t;
            t = f_47;
            t = b_128(t);
            e_21 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, b_21, c_21, d_21, e_21);
            j_7 = t;
            t = SSLsetAnnotations(j_7, w_20);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              j_47 = ATgetArgument(t, 0);
              b_47 = ATgetArgument(t, 1);
              e_47 = ATgetArgument(t, 2);
              f_47 = ATgetArgument(t, 3);
              {
                ATerm t_21 = NULL,p_22 = NULL,q_22 = NULL,s_22 = NULL,u_22 = NULL,n_7 = NULL;
                t = SSLgetAnnotations(i_47);
                t_21 = t;
                t = j_47;
                t = d_128(t);
                p_22 = t;
                t = b_47;
                t = d_128(t);
                q_22 = t;
                t = e_47;
                t = d_128(t);
                s_22 = t;
                t = f_47;
                t = b_128(t);
                u_22 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, p_22, q_22, s_22, u_22);
                n_7 = t;
                t = SSLsetAnnotations(n_7, t_21);
              }
            }
          else
            {
              ATerm u_23 = NULL,x_23 = NULL,o_7 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  j_47 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(i_47);
              u_23 = t;
              t = j_47;
              t = b_128(t);
              x_23 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, x_23);
              o_7 = t;
              t = SSLsetAnnotations(o_7, u_23);
            }
        }
    }
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm v_47 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_47);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm u_21 = t;
  int x_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(x_21);
    }
  else
    {
      t = u_21;
      {
        ATerm y_21 = t;
        int z_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            ;
            LocalPopChoice(z_21);
          }
        else
          {
            t = y_21;
            {
              ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  x_47 = ATgetArgument(t, 0);
                  y_47 = ATgetArgument(t, 1);
                  z_47 = ATgetArgument(t, 2);
                  a_48 = ATgetArgument(t, 3);
                  t = z_47;
                  t = map_1_0(f_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      x_47 = ATgetArgument(t, 0);
                      y_47 = ATgetArgument(t, 1);
                      z_47 = ATgetArgument(t, 2);
                      a_48 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_47;
                  t = map_1_0(g_4, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm h_48 = NULL;
  ATerm a_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_48 = ATgetArgument(t, 0);
          {
            ATerm f_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_22);
      t = h_48;
    }
  else
    {
      t = a_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_48;
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm q_48 = NULL;
  ATerm g_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_48 = ATgetArgument(t, 0);
          {
            ATerm j_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_22);
      t = q_48;
    }
  else
    {
      t = g_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_48;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm u_47 = NULL;
  if(match_cons(t, sym_DynamicRules_1))
    {
      u_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_47;
  t = free_vars_3_0(b_4, d_4, tboundin_3_0, t);
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm w_48 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_48);
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm k_22 = t;
  int m_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(m_22);
    }
  else
    {
      t = k_22;
      {
        ATerm y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            y_48 = ATgetArgument(t, 0);
            t = y_48;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                y_48 = ATgetArgument(t, 0);
                z_48 = ATgetArgument(t, 1);
                a_49 = ATgetArgument(t, 2);
                b_49 = ATgetArgument(t, 3);
                t = a_49;
                t = map_1_0(j_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    y_48 = ATgetArgument(t, 0);
                    z_48 = ATgetArgument(t, 1);
                    a_49 = ATgetArgument(t, 2);
                    b_49 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = a_49;
                t = map_1_0(k_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm j_49 = NULL;
  ATerm n_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_49 = ATgetArgument(t, 0);
          {
            ATerm w_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_22);
      t = j_49;
    }
  else
    {
      t = n_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_49;
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm s_49 = NULL;
  ATerm x_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_49 = ATgetArgument(t, 0);
          {
            ATerm a_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_22);
      t = s_49;
    }
  else
    {
      t = x_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_49;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(h_4, i_4, tboundin_3_0, t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm o_50 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_50);
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm b_23 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(c_23);
    }
  else
    {
      t = b_23;
      {
        ATerm q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            q_50 = ATgetArgument(t, 0);
            t = q_50;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                q_50 = ATgetArgument(t, 0);
                r_50 = ATgetArgument(t, 1);
                s_50 = ATgetArgument(t, 2);
                t_50 = ATgetArgument(t, 3);
                t = s_50;
                t = map_1_0(r_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    q_50 = ATgetArgument(t, 0);
                    r_50 = ATgetArgument(t, 1);
                    s_50 = ATgetArgument(t, 2);
                    t_50 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = s_50;
                t = map_1_0(s_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm f_51 = NULL;
  ATerm d_23 = t;
  int e_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_51 = ATgetArgument(t, 0);
          {
            ATerm f_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_23);
      t = f_51;
    }
  else
    {
      t = d_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_51;
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm o_51 = NULL;
  ATerm g_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_51 = ATgetArgument(t, 0);
          {
            ATerm i_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_23);
      t = o_51;
    }
  else
    {
      t = g_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_51;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm h_50 = NULL,l_50 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      l_50 = ATgetArgument(t, 0);
      t = l_50;
      if(match_cons(t, sym_Rule_3))
        {
          h_50 = ATgetArgument(t, 0);
          {
            ATerm k_23 = ATgetArgument(t, 1);
          }
          {
            ATerm l_23 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = h_50;
      t = free_vars_3_0(l_4, o_4, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          l_50 = ATgetArgument(t, 0);
          {
            ATerm m_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = l_50;
    }
  return(t);
}
ATerm r_7 (ATerm t_109 (ATerm), ATerm x_49, ATerm w_49, ATerm t)
{
  ATerm h_52 (ATerm t)
  {
    ATerm c_52 = NULL,d_52 = NULL,e_52 = NULL;
    c_52 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(w_49);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_52 = ATgetFirst((ATermList) t);
            e_52 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_23 = t;
          int o_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_52;
              {
                ATerm t_4 (ATerm t)
                {
                  t = not_null(w_49);
                  return(t);
                }
                t = s_7(t_109, t_4, not_null(d_52), not_null(e_52), t);
                t = h_52(t);
              }
              ;
              LocalPopChoice(o_23);
            }
          else
            {
              t = n_23;
              {
                ATerm s_24 = NULL,b_25 = NULL,y_8 = NULL;
                t = SSLgetAnnotations(c_52);
                s_24 = t;
                t = e_52;
                t = h_52(t);
                b_25 = t;
                t = (ATerm) ATinsert(CheckATermList(b_25), d_52);
                y_8 = t;
                t = SSLsetAnnotations(y_8, s_24);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(x_49);
  t = h_52(t);
  return(t);
}
ATerm foldr_3_0 (ATerm u_111 (ATerm), ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm t)
{
  ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL;
  k_52 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_52;
      t = u_111(t);
    }
  else
    {
      ATerm p_52 = NULL,q_52 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_52 = ATgetFirst((ATermList) t);
          m_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_52;
      t = w_111(t);
      p_52 = t;
      t = m_52;
      t = foldr_3_0(u_111, v_111, w_111, t);
      q_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_52, q_52);
      t = v_111(t);
    }
  return(t);
}
ATerm s_7 (ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm b_50, ATerm a_50, ATerm t)
{
  t = x_109(t);
  {
    ATerm u_4 (ATerm t)
    {
      ATerm t_52 = NULL;
      t_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(b_50), t_52);
      t = w_109(t);
      return(t);
    }
    t = fetch_1_0(u_4, t);
    t = not_null(a_50);
  }
  return(t);
}
ATerm t_7 (ATerm o_109 (ATerm), ATerm v_49, ATerm u_49, ATerm t)
{
  ATerm n_53 (ATerm t)
  {
    ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL;
    i_53 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_53;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_53 = ATgetFirst((ATermList) t);
            k_53 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm p_23 = t;
          int q_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_53;
              {
                ATerm v_4 (ATerm t)
                {
                  t = not_null(u_49);
                  return(t);
                }
                t = s_7(o_109, v_4, not_null(j_53), not_null(k_53), t);
                t = n_53(t);
              }
              ;
              LocalPopChoice(q_23);
            }
          else
            {
              t = p_23;
              {
                ATerm p_25 = NULL,a_26 = NULL,e_9 = NULL;
                t = SSLgetAnnotations(i_53);
                p_25 = t;
                t = k_53;
                t = n_53(t);
                a_26 = t;
                t = (ATerm) ATinsert(CheckATermList(a_26), j_53);
                e_9 = t;
                t = SSLsetAnnotations(e_9, p_25);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(v_49);
  t = n_53(t);
  return(t);
}
ATerm w_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_23 = ATgetArgument(t, 0);
      if(((ATgetType(r_23) != AT_LIST) || !(ATisEmpty(r_23))))
        _fail(t);
      {
        ATerm s_23 = ATgetArgument(t, 1);
        if(((ATgetType(s_23) != AT_LIST) || !(ATisEmpty(s_23))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm x_53 = NULL,y_53 = NULL,a_54 = NULL,b_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_23 = ATgetArgument(t, 0);
      if(((ATgetType(t_23) == AT_LIST) && !(ATisEmpty(t_23))))
        {
          x_53 = ATgetFirst((ATermList) t_23);
          y_53 = (ATerm) ATgetNext((ATermList) t_23);
        }
      else
        _fail(t);
      {
        ATerm w_23 = ATgetArgument(t, 1);
        if(((ATgetType(w_23) == AT_LIST) && !(ATisEmpty(w_23))))
          {
            a_54 = ATgetFirst((ATermList) w_23);
            b_54 = (ATerm) ATgetNext((ATermList) w_23);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_53, a_54), (ATerm) ATmakeAppl(sym__2, y_53, b_54));
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm c_54 = NULL,e_54 = NULL;
  if(match_cons(t, sym__2))
    {
      c_54 = ATgetArgument(t, 0);
      e_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_54), c_54);
  return(t);
}
ATerm v_7 (ATerm n_655, ATerm s_655, ATerm z_76, ATerm t)
{
  ATerm s_53 = NULL,t_53 = NULL,u_53 = NULL,v_53 = NULL;
  t = SSL_explode_term(s_655);
  if(match_cons(t, sym__2))
    {
      s_53 = ATgetArgument(t, 0);
      u_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(n_655);
  if(match_cons(t, sym__2))
    {
      if((s_53 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      t_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_53, u_53);
  t = genzip_4_0(w_4, x_4, y_4, _id, t);
  v_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_53, z_76);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm a_100 (ATerm), ATerm b_100 (ATerm), ATerm t)
{
  ATerm g_54 (ATerm t)
  {
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_100(t);
        ;
        LocalPopChoice(z_23);
      }
    else
      {
        t = y_23;
        t = b_100(t);
        t = g_54(t);
      }
    return(t);
  }
  t = g_54(t);
  return(t);
}
ATerm for_3_0 (ATerm d_100 (ATerm), ATerm e_100 (ATerm), ATerm f_100 (ATerm), ATerm t)
{
  t = d_100(t);
  t = while_not_2_0(e_100, f_100, t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm s_54 = NULL;
  s_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, s_54);
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm t_54 = NULL,u_54 = NULL,v_54 = NULL,w_54 = NULL,j_9 = NULL;
  w_54 = t;
  if(match_cons(t, sym__2))
    {
      u_54 = ATgetArgument(t, 0);
      v_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_54);
  t_54 = t;
  t = v_54;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_54, v_54);
  j_9 = t;
  t = SSLsetAnnotations(j_9, t_54);
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm b_56 = NULL,c_56 = NULL,d_56 = NULL,e_56 = NULL,l_56 = NULL;
  b_56 = t;
  if(match_cons(t, sym__2))
    {
      c_56 = ATgetArgument(t, 0);
      d_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_56;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_56 = ATgetFirst((ATermList) t);
      l_56 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_24 = t;
        int b_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_56(c_56, d_56, b_56, t);
            ;
            LocalPopChoice(b_24);
          }
        else
          {
            t = a_24;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_56), e_56), l_56);
          }
      }
    }
  else
    {
      t = x_56(c_56, d_56, b_56, t);
    }
  return(t);
}
ATerm x_56 (ATerm x_54, ATerm y_54, ATerm f_55, ATerm t)
{
  ATerm g_55 = NULL,j_55 = NULL,k_9 = NULL,m_55 = NULL,n_55 = NULL,o_55 = NULL,v_55 = NULL;
  t = SSLgetAnnotations(f_55);
  g_55 = t;
  t = y_54;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_55 = ATgetFirst((ATermList) t);
      v_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_55;
  if(match_cons(t, sym__2))
    {
      n_55 = ATgetArgument(t, 0);
      o_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_55;
        if((n_55 != t))
          {
            _fail(t);
          }
        t = v_55;
        ;
        LocalPopChoice(d_24);
      }
    else
      {
        t = c_24;
        t = y_54;
        t = v_7(n_55, o_55, v_55, t);
      }
    j_55 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_54, j_55);
    k_9 = t;
    t = SSLsetAnnotations(k_9, g_55);
  }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm u_56 = NULL;
  if(match_cons(t, sym__2))
    {
      u_56 = ATgetArgument(t, 0);
      if((u_56 != ATgetArgument(t, 1)))
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
  ATerm f_24 = t;
  int g_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(a_5, b_5, g_5, t);
      ;
      LocalPopChoice(g_24);
    }
  else
    {
      t = f_24;
      {
        ATerm p_56 = NULL,q_56 = NULL,r_56 = NULL;
        p_56 = t;
        if(match_cons(t, sym__2))
          {
            q_56 = ATgetArgument(t, 0);
            r_56 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_56;
        t = t_7(h_5, q_56, r_56, t);
      }
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL;
  if(match_cons(t, sym__2))
    {
      r_26 = ATgetArgument(t, 0);
      s_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_7(n_5, r_26, s_26, t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm u_26 = NULL;
  if(match_cons(t, sym__2))
    {
      u_26 = ATgetArgument(t, 0);
      if((u_26 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL;
  if(match_cons(t, sym__2))
    {
      i_27 = ATgetArgument(t, 0);
      j_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_7(s_5, i_27, j_27, t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm k_27 = NULL;
  if(match_cons(t, sym__2))
    {
      k_27 = ATgetArgument(t, 0);
      if((k_27 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm z_126 (ATerm), ATerm a_127 (ATerm), ATerm b_127 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm s_57 (ATerm t)
  {
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_126(t);
        ;
        LocalPopChoice(i_24);
      }
    else
      {
        t = h_24;
        {
          ATerm j_24 = t;
          int l_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_56 = NULL,a_57 = NULL,m_26 = NULL,n_26 = NULL;
              if(((z_56 != NULL) && (z_56 != t)))
                _fail(t);
              else
                z_56 = t;
              t = a_127(t);
              if(((a_57 != NULL) && (a_57 != t)))
                _fail(t);
              else
                a_57 = t;
              t = not_null(z_56);
              {
                ATerm j_5 (ATerm t)
                {
                  ATerm c_57 = NULL;
                  t = s_57(t);
                  c_57 = t;
                  t = (ATerm) ATmakeAppl(sym__2, c_57, not_null(a_57));
                  t = diff_0_0(t);
                  return(t);
                }
                t = b_127(j_5, s_57, k_5, t);
                if(((n_26 != NULL) && (n_26 != t)))
                  _fail(t);
                else
                  n_26 = t;
                t = SSL_explode_term(not_null(n_26));
                if(match_cons(t, sym__2))
                  {
                    ATerm q_24 = ATgetArgument(t, 0);
                    if(((m_26 != NULL) && (m_26 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      m_26 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = not_null(m_26);
                t = foldr_3_0(l_5, m_5, _id, t);
              }
              ;
              LocalPopChoice(l_24);
            }
          else
            {
              t = j_24;
              {
                ATerm x_26 = NULL,y_26 = NULL;
                y_26 = t;
                t = SSL_explode_term(y_26);
                if(match_cons(t, sym__2))
                  {
                    ATerm r_24 = ATgetArgument(t, 0);
                    x_26 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = x_26;
                t = foldr_3_0(o_5, q_5, s_57, t);
              }
            }
        }
      }
    return(t);
  }
  t = s_57(t);
  return(t);
}
ATerm Var_1_0 (ATerm x_85 (ATerm), ATerm t)
{
  ATerm t_57 = NULL,y_57 = NULL,z_57 = NULL,a_58 = NULL,p_9 = NULL;
  a_58 = t;
  if(match_cons(t, sym_Var_1))
    {
      y_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_58);
  t_57 = t;
  t = y_57;
  t = x_85(t);
  z_57 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, z_57);
  p_9 = t;
  t = SSLsetAnnotations(p_9, t_57);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm i_59 = NULL,j_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL,t_59 = NULL,u_59 = NULL;
  n_59 = t;
  if(match_cons(t, sym__2))
    {
      o_59 = ATgetArgument(t, 0);
      p_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_59;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_59 = ATgetFirst((ATermList) t);
      u_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_59;
  if(match_cons(t, sym__2))
    {
      i_59 = ATgetArgument(t, 0);
      j_59 = ATgetArgument(t, 1);
      {
        ATerm t_24 = t;
        int u_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_59;
            if((o_59 != t))
              {
                _fail(t);
              }
            t = j_59;
            ;
            LocalPopChoice(u_24);
          }
        else
          {
            t = t_24;
            t = (ATerm) ATmakeAppl(sym__2, o_59, u_59);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, o_59, u_59);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm y_7 (ATerm u_125 (ATerm), ATerm v_125 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm g_75, ATerm f_75, ATerm e_75, ATerm t)
{
  ATerm w_5 (ATerm t)
  {
    ATerm c_58 = NULL;
    c_58 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_58, not_null(e_75));
    t = u_125(t);
    return(t);
  }
  ATerm x_5 (ATerm t)
  {
    ATerm d_58 = NULL;
    d_58 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_58, not_null(f_75));
    t = u_125(t);
    return(t);
  }
  t = not_null(g_75);
  t = v_125(w_5, x_5, _id, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm y_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_24 = ATgetArgument(t, 0);
      if(((ATgetType(v_24) != AT_LIST) || !(ATisEmpty(v_24))))
        _fail(t);
      {
        ATerm w_24 = ATgetArgument(t, 1);
        if(((ATgetType(w_24) != AT_LIST) || !(ATisEmpty(w_24))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm m_58 = NULL,n_58 = NULL,o_58 = NULL,p_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_24 = ATgetArgument(t, 0);
      if(((ATgetType(x_24) == AT_LIST) && !(ATisEmpty(x_24))))
        {
          m_58 = ATgetFirst((ATermList) x_24);
          n_58 = (ATerm) ATgetNext((ATermList) x_24);
        }
      else
        _fail(t);
      {
        ATerm y_24 = ATgetArgument(t, 1);
        if(((ATgetType(y_24) == AT_LIST) && !(ATisEmpty(y_24))))
          {
            o_58 = ATgetFirst((ATermList) y_24);
            p_58 = (ATerm) ATgetNext((ATermList) y_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_58, o_58), (ATerm) ATmakeAppl(sym__2, n_58, p_58));
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm s_58 = NULL,t_58 = NULL;
  if(match_cons(t, sym__2))
    {
      s_58 = ATgetArgument(t, 0);
      t_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_58), s_58);
  return(t);
}
ATerm z_7 (ATerm o_125 (ATerm), ATerm p_125 (ATerm (ATerm), ATerm), ATerm y_74, ATerm b_75, ATerm t)
{
  ATerm g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL,l_58 = NULL;
  t = not_null(y_74);
  t = o_125(t);
  if(((g_58 != NULL) && (g_58 != t)))
    _fail(t);
  else
    g_58 = t;
  t = map_1_0(new_0_0, t);
  if(((h_58 != NULL) && (h_58 != t)))
    _fail(t);
  else
    h_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_58), not_null(h_58));
  t = genzip_4_0(y_5, z_5, a_6, _id, t);
  if(((l_58 != NULL) && (l_58 != t)))
    _fail(t);
  else
    l_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(l_58), not_null(b_75));
  t = conc_0_0(t);
  if(((i_58 != NULL) && (i_58 != t)))
    _fail(t);
  else
    i_58 = t;
  t = not_null(y_74);
  {
    ATerm b_6 (ATerm t)
    {
      t = not_null(h_58);
      return(t);
    }
    t = p_125(b_6, t);
    if(((j_58 != NULL) && (j_58 != t)))
      _fail(t);
    else
      j_58 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(j_58), not_null(b_75), not_null(i_58));
  }
  return(t);
}
ATerm env_alltd_1_0 (ATerm z_104 (ATerm), ATerm t)
{
  ATerm r_61 (ATerm t)
  {
    ATerm z_24 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_104(t);
        ;
        LocalPopChoice(c_25);
      }
    else
      {
        t = z_24;
        {
          ATerm c_61 = NULL,d_61 = NULL,q_61 = NULL;
          ATerm c_6 (ATerm t)
          {
            ATerm r_27 = NULL;
            r_27 = t;
            t = (ATerm) ATmakeAppl(sym__2, r_27, not_null(q_61));
            t = r_61(t);
            return(t);
          }
          if(((c_61 != NULL) && (c_61 != t)))
            _fail(t);
          else
            c_61 = t;
          if(match_cons(t, sym__2))
            {
              if(((d_61 != NULL) && (d_61 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                d_61 = ATgetArgument(t, 0);
              if(((q_61 != NULL) && (q_61 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                q_61 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = not_null(d_61);
          t = SRTS_all(c_6, t);
        }
      }
    return(t);
  }
  t = r_61(t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_25 = ATgetArgument(t, 0);
      if(((ATgetType(d_25) != AT_LIST) || !(ATisEmpty(d_25))))
        _fail(t);
      {
        ATerm e_25 = ATgetArgument(t, 1);
        if(((ATgetType(e_25) != AT_LIST) || !(ATisEmpty(e_25))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm m_62 = NULL,n_62 = NULL,o_62 = NULL,r_62 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_25 = ATgetArgument(t, 0);
      if(((ATgetType(f_25) == AT_LIST) && !(ATisEmpty(f_25))))
        {
          m_62 = ATgetFirst((ATermList) f_25);
          n_62 = (ATerm) ATgetNext((ATermList) f_25);
        }
      else
        _fail(t);
      {
        ATerm g_25 = ATgetArgument(t, 1);
        if(((ATgetType(g_25) == AT_LIST) && !(ATisEmpty(g_25))))
          {
            o_62 = ATgetFirst((ATermList) g_25);
            r_62 = (ATerm) ATgetNext((ATermList) g_25);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_62, o_62), (ATerm) ATmakeAppl(sym__2, n_62, r_62));
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm s_62 = NULL,t_62 = NULL;
  if(match_cons(t, sym__2))
    {
      s_62 = ATgetArgument(t, 0);
      t_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_62), s_62);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL;
  c_62 = t;
  {
    ATerm h_25 = t;
    int i_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_25 = ATgetArgument(t, 0);
            ATerm k_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(i_25);
        t = c_62;
      }
    else
      {
        t = h_25;
        {
          ATerm l_62 = NULL;
          if(match_cons(t, sym__3))
            {
              d_62 = ATgetArgument(t, 0);
              e_62 = ATgetArgument(t, 1);
              f_62 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, d_62, e_62);
          t = genzip_4_0(d_6, e_6, f_6, _id, t);
          l_62 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_62, f_62);
        }
      }
  }
  return(t);
}
ATerm substitute_6_0 (ATerm v_124 (ATerm), ATerm w_124 (ATerm (ATerm), ATerm), ATerm x_124 (ATerm), ATerm y_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm z_124 (ATerm (ATerm), ATerm), ATerm a_125 (ATerm), ATerm t)
{
  ATerm h_63 = NULL,i_63 = NULL;
  ATerm c_64 (ATerm t)
  {
    ATerm g_6 (ATerm t)
    {
      ATerm d_64 (ATerm j_63, ATerm t)
      {
        ATerm k_63 = NULL,x_27 = NULL;
        t = SSL_explode_term(j_63);
        if(match_cons(t, sym__2))
          {
            ATerm l_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_25) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm m_25 = ATgetArgument(t, 1);
              if(((ATgetType(m_25) == AT_LIST) && !(ATisEmpty(m_25))))
                {
                  k_63 = ATgetFirst((ATermList) m_25);
                  {
                    ATerm n_25 = (ATerm) ATgetNext((ATermList) m_25);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = k_63;
        t = v_124(t);
        x_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_27, not_null(i_63));
        t = lookup_0_0(t);
        t = a_125(t);
        return(t);
      }
      ATerm e_64 (ATerm m_63, ATerm n_63, ATerm o_63, ATerm t)
      {
        ATerm p_63 = NULL,q_63 = NULL,t_63 = NULL;
        t = o_63;
        t = z_7(x_124, z_124, m_63, n_63, t);
        if(match_cons(t, sym__3))
          {
            p_63 = ATgetArgument(t, 0);
            q_63 = ATgetArgument(t, 1);
            t_63 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = y_7(c_64, y_124, p_63, q_63, t_63, t);
        return(t);
      }
      ATerm w_63 = NULL,x_63 = NULL,y_63 = NULL;
      if(((w_63 != NULL) && (w_63 != t)))
        _fail(t);
      else
        w_63 = t;
      if(match_cons(t, sym__2))
        {
          x_63 = ATgetArgument(t, 0);
          y_63 = ATgetArgument(t, 1);
          {
            ATerm o_25 = t;
            int q_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_6 (ATerm t)
                {
                  ATerm b_64 = NULL;
                  b_64 = t;
                  t = (ATerm) ATmakeAppl(sym__2, b_64, not_null(y_63));
                  t = lookup_0_0(t);
                  return(t);
                }
                t = not_null(x_63);
                t = w_124(h_6, t);
                ;
                LocalPopChoice(q_25);
              }
            else
              {
                t = o_25;
                {
                  ATerm r_25 = t;
                  int s_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = d_64(not_null(w_63), t);
                      ;
                      LocalPopChoice(s_25);
                    }
                  else
                    {
                      t = r_25;
                      t = e_64(not_null(x_63), not_null(y_63), not_null(w_63), t);
                    }
                }
              }
          }
        }
      else
        {
          t = d_64(not_null(w_63), t);
        }
      return(t);
    }
    t = env_alltd_1_0(g_6, t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((i_63 != NULL) && (i_63 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_63 = ATgetArgument(t, 0);
      if(((h_63 != NULL) && (h_63 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(h_63), (ATerm) ATempty);
  t = c_64(t);
  return(t);
}
ATerm genzip_4_0 (ATerm d_108 (ATerm), ATerm e_108 (ATerm), ATerm f_108 (ATerm), ATerm g_108 (ATerm), ATerm t)
{
  ATerm m_64 (ATerm t)
  {
    ATerm t_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_108(t);
        ;
        LocalPopChoice(v_25);
      }
    else
      {
        t = t_25;
        {
          ATerm f_64 = NULL,g_64 = NULL,h_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL,r_9 = NULL;
          t = e_108(t);
          l_64 = t;
          if(match_cons(t, sym__2))
            {
              g_64 = ATgetArgument(t, 0);
              h_64 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_64);
          f_64 = t;
          t = g_64;
          t = g_108(t);
          j_64 = t;
          t = h_64;
          t = m_64(t);
          k_64 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_64, k_64);
          r_9 = t;
          t = SSLsetAnnotations(r_9, f_64);
          t = f_108(t);
        }
      }
    return(t);
  }
  t = m_64(t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_25 = ATgetArgument(t, 0);
      if(((ATgetType(w_25) != AT_LIST) || !(ATisEmpty(w_25))))
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
ATerm k_6 (ATerm t)
{
  ATerm g_65 = NULL,h_65 = NULL,j_65 = NULL,k_65 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_26 = ATgetArgument(t, 0);
      if(((ATgetType(h_26) == AT_LIST) && !(ATisEmpty(h_26))))
        {
          g_65 = ATgetFirst((ATermList) h_26);
          h_65 = (ATerm) ATgetNext((ATermList) h_26);
        }
      else
        _fail(t);
      {
        ATerm i_26 = ATgetArgument(t, 1);
        if(((ATgetType(i_26) == AT_LIST) && !(ATisEmpty(i_26))))
          {
            j_65 = ATgetFirst((ATermList) i_26);
            k_65 = (ATerm) ATgetNext((ATermList) i_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_65, j_65), (ATerm) ATmakeAppl(sym__2, h_65, k_65));
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm l_65 = NULL,s_65 = NULL;
  if(match_cons(t, sym__2))
    {
      l_65 = ATgetArgument(t, 0);
      s_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_65), l_65);
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm u_65 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_65;
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm j_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(k_26);
    }
  else
    {
      t = j_26;
      {
        ATerm x_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            x_65 = ATgetArgument(t, 0);
            t = x_65;
            t = free_vars_3_0(o_6, p_6, tboundin_3_0, t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                x_65 = ATgetArgument(t, 0);
                y_65 = ATgetArgument(t, 1);
                z_65 = ATgetArgument(t, 2);
                a_66 = ATgetArgument(t, 3);
                t = z_65;
                t = map_1_0(s_6, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    x_65 = ATgetArgument(t, 0);
                    y_65 = ATgetArgument(t, 1);
                    z_65 = ATgetArgument(t, 2);
                    a_66 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = z_65;
                t = map_1_0(u_6, t);
              }
          }
      }
    }
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm d_66 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_66);
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm l_26 = t;
  int o_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(o_26);
    }
  else
    {
      t = l_26;
      {
        ATerm p_26 = t;
        int q_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            ;
            LocalPopChoice(q_26);
          }
        else
          {
            t = p_26;
            {
              ATerm h_66 = NULL,k_66 = NULL,l_66 = NULL,r_66 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  h_66 = ATgetArgument(t, 0);
                  k_66 = ATgetArgument(t, 1);
                  l_66 = ATgetArgument(t, 2);
                  r_66 = ATgetArgument(t, 3);
                  t = l_66;
                  t = map_1_0(q_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      h_66 = ATgetArgument(t, 0);
                      k_66 = ATgetArgument(t, 1);
                      l_66 = ATgetArgument(t, 2);
                      r_66 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_66;
                  t = map_1_0(r_6, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm z_66 = NULL;
  ATerm v_26 = t;
  int w_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_66 = ATgetArgument(t, 0);
          {
            ATerm a_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_26);
      t = z_66;
    }
  else
    {
      t = v_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_66;
    }
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm k_67 = NULL;
  ATerm b_27 = t;
  int c_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_67 = ATgetArgument(t, 0);
          {
            ATerm e_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_27);
      t = k_67;
    }
  else
    {
      t = b_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_67 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_67;
    }
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm l_68 = NULL;
  ATerm h_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_68 = ATgetArgument(t, 0);
          {
            ATerm n_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_27);
      t = l_68;
    }
  else
    {
      t = h_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_68;
    }
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm c_69 = NULL;
  ATerm o_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_69 = ATgetArgument(t, 0);
          {
            ATerm q_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_27);
      t = c_69;
    }
  else
    {
      t = o_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_69 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_69;
    }
  return(t);
}
ATerm g_8 (ATerm k_98 (ATerm), ATerm i_36, ATerm j_36, ATerm t)
{
  ATerm x_64 = NULL,z_64 = NULL;
  t = k_98(t);
  {
    ATerm i_6 (ATerm t)
    {
      ATerm b_65 = NULL,d_65 = NULL,e_65 = NULL;
      b_65 = t;
      if(match_cons(t, sym_Overlay_3))
        {
          if(((i_36 != NULL) && (i_36 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            i_36 = ATgetArgument(t, 0);
          d_65 = ATgetArgument(t, 1);
          e_65 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, d_65, not_null(j_36));
      t = genzip_4_0(j_6, k_6, l_6, _id, t);
      if(((x_64 != NULL) && (x_64 != t)))
        _fail(t);
      else
        x_64 = t;
      t = e_65;
      if(((z_64 != NULL) && (z_64 != t)))
        _fail(t);
      else
        z_64 = t;
      t = b_65;
      return(t);
    }
    t = fetch_1_0(i_6, t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_64), not_null(z_64));
    t = substitute_6_0(m_6, Var_1_0, n_6, tboundin_3_0, tpaste_1_0, _id, t);
  }
  return(t);
}
ATerm Trm_to_Cong_0_0 (ATerm t)
{
  ATerm h_69 = NULL,j_69 = NULL;
  ATerm s_27 = t;
  int t_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_BuildDefault_1))
        {
          ATerm u_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(t_27);
      t = term_f_14;
    }
  else
    {
      t = s_27;
      if(match_cons(t, sym_Real_1))
        {
          j_69 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, j_69));
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              j_69 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, j_69));
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  j_69 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, j_69));
                }
              else
                {
                  if(match_cons(t, sym_Anno_2))
                    {
                      j_69 = ATgetArgument(t, 0);
                      h_69 = ATgetArgument(t, 1);
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_v_27, (ATerm)ATinsert(ATinsert(ATempty, h_69), j_69), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(t, sym_Op_2))
                        {
                          j_69 = ATgetArgument(t, 0);
                          h_69 = ATgetArgument(t, 1);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_69), h_69, (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_Var_1))
                            {
                              j_69 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_69), (ATerm)ATempty, (ATerm) ATempty);
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
  ATerm d_70 = NULL,e_70 = NULL,f_70 = NULL;
  f_70 = t;
  if(match_cons(t, sym_Op_2))
    {
      d_70 = ATgetArgument(t, 0);
      e_70 = ATgetArgument(t, 1);
      {
        ATerm w_27 = t;
        int y_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_28 = NULL,x_28 = NULL,v_9 = NULL;
            t = SSLgetAnnotations(f_70);
            u_28 = t;
            t = e_70;
            t = map_1_0(trm_to_cong_0_0, t);
            x_28 = t;
            t = (ATerm) ATmakeAppl(sym_Op_2, d_70, x_28);
            v_9 = t;
            t = SSLsetAnnotations(v_9, u_28);
            ;
            LocalPopChoice(y_27);
          }
        else
          {
            t = w_27;
            t = f_70;
          }
      }
    }
  else
    {
      t = f_70;
    }
  t = Trm_to_Cong_0_0(t);
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm n_70 = NULL;
  n_70 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, n_70, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_14), term_a_14));
  return(t);
}
ATerm m_7 (ATerm o_36, ATerm q_36, ATerm p_36, ATerm t)
{
  ATerm k_70 = NULL,l_70 = NULL;
  t = q_36;
  t = map_1_0(v_6, t);
  k_70 = t;
  t = p_36;
  t = trm_to_cong_0_0(t);
  l_70 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, o_36, k_70, l_70);
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm z_70 = NULL,a_71 = NULL,b_71 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      z_70 = ATgetArgument(t, 0);
      a_71 = ATgetArgument(t, 1);
      b_71 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_7(z_70, a_71, b_71, t);
  return(t);
}
ATerm h_8 (ATerm m_35, ATerm o_35, ATerm n_35, ATerm t)
{
  ATerm q_70 = NULL,r_70 = NULL,s_70 = NULL,t_70 = NULL;
  t = not_null(o_35);
  {
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_6 (ATerm t)
        {
          ATerm c_7 (ATerm t)
          {
            ATerm v_70 = NULL,w_70 = NULL;
            ATerm d_7 (ATerm t)
            {
              t = not_null(o_35);
              return(t);
            }
            if(match_cons(t, sym_Op_2))
              {
                if(((v_70 != NULL) && (v_70 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  v_70 = ATgetArgument(t, 0);
                if(((w_70 != NULL) && (w_70 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  w_70 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = g_8(d_7, not_null(v_70), not_null(w_70), t);
            return(t);
          }
          t = repeat_1_0(c_7, t);
          return(t);
        }
        ATerm b_28 = t;
        if((PushChoice() == 0))
          {
            t = not_null(o_35);
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = b_28;
          }
        t = not_null(o_35);
        t = topdown_1_0(z_6, t);
        ;
        LocalPopChoice(a_28);
      }
    else
      {
        t = z_27;
      }
    if(((q_70 != NULL) && (q_70 != t)))
      _fail(t);
    else
      q_70 = t;
    t = not_null(o_35);
    t = map_1_0(f_7, t);
    if(((s_70 != NULL) && (s_70 != t)))
      _fail(t);
    else
      s_70 = t;
    t = not_null(n_35);
    {
      ATerm c_28 = t;
      int d_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_7 (ATerm t)
          {
            ATerm e_28 = t;
            int f_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_29 = NULL,u_29 = NULL;
                ATerm p_7 (ATerm t)
                {
                  t = not_null(q_70);
                  return(t);
                }
                if(match_cons(t, sym_Op_2))
                  {
                    if(((t_29 != NULL) && (t_29 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      t_29 = ATgetArgument(t, 0);
                    if(((u_29 != NULL) && (u_29 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      u_29 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = g_8(p_7, not_null(t_29), not_null(u_29), t);
                ;
                LocalPopChoice(f_28);
              }
            else
              {
                t = e_28;
              }
            return(t);
          }
          ATerm g_28 = t;
          if((PushChoice() == 0))
            {
              t = not_null(q_70);
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = g_28;
            }
          t = not_null(n_35);
          t = topdown_1_0(h_7, t);
          ;
          LocalPopChoice(d_28);
        }
      else
        {
          t = c_28;
        }
      if(((t_70 != NULL) && (t_70 != t)))
        _fail(t);
      else
        t_70 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_70), not_null(t_70));
      t = conc_0_0(t);
      if(((r_70 != NULL) && (r_70 != t)))
        _fail(t);
      else
        r_70 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(r_70))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(m_35))));
    }
  }
  return(t);
}
ATerm i_8 (ATerm y_62, ATerm z_62, ATerm t)
{
  ATerm q_71 = NULL;
  t = SSL_fputc(y_62, z_62);
  q_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_71);
  return(t);
}
ATerm j_8 (ATerm m_66, ATerm n_66, ATerm t)
{
  ATerm s_71 = NULL;
  t = SSL_write_term_to_stream_text(m_66, n_66);
  s_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_71);
  return(t);
}
ATerm l_8 (ATerm l_118 (ATerm), ATerm x_499, ATerm q_66, ATerm t)
{
  ATerm t_71 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_499, term_h_28);
  t = open_stream_0_0(t);
  t_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_71, q_66);
  t = l_118(t);
  t = fclose_0_0(t);
  t = q_66;
  return(t);
}
ATerm k_8 (ATerm i_66, ATerm j_66, ATerm t)
{
  ATerm c_72 = NULL;
  t = SSL_write_term_to_stream_baf(i_66, j_66);
  c_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_72);
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm f_72 = NULL,g_72 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_28 = ATgetArgument(t, 0);
      if(match_cons(i_28, sym_Stream_1))
        {
          f_72 = ATgetArgument(i_28, 0);
        }
      else
        _fail(t);
      g_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_8(f_72, g_72, t);
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm h_72 = NULL,i_72 = NULL,j_72 = NULL,l_72 = NULL,p_72 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_28 = ATgetArgument(t, 0);
      if(match_cons(j_28, sym_Stream_1))
        {
          l_72 = ATgetArgument(j_28, 0);
        }
      else
        _fail(t);
      p_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_8(l_72, p_72, t);
  h_72 = t;
  t = term_k_28;
  i_72 = t;
  t = h_72;
  if(match_cons(t, sym_Stream_1))
    {
      j_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_k_28, h_72);
  t = i_8(i_72, j_72, t);
  return(t);
}
ATerm output_1_0 (ATerm u_122 (ATerm), ATerm t)
{
  ATerm d_72 = NULL,e_72 = NULL;
  t = u_122(t);
  e_72 = t;
  {
    ATerm l_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_28;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(m_28);
      }
    else
      {
        t = l_28;
        t = term_o_28;
      }
    d_72 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_72, e_72);
    {
      ATerm p_28 = t;
      int q_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_r_28;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, d_72, e_72);
          LocalPopChoice(q_28);
          if(match_cons(t, sym__2))
            {
              ATerm s_28 = ATgetArgument(t, 0);
              ATerm t_28 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_8(q_7, d_72, e_72, t);
        }
      else
        {
          t = p_28;
          if(match_cons(t, sym__2))
            {
              ATerm v_28 = ATgetArgument(t, 0);
              ATerm w_28 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_8(u_7, d_72, e_72, t);
        }
    }
  }
  return(t);
}
ATerm i_73 (ATerm c_73, ATerm t)
{
  t = SSL_fclose(c_73);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_73 = NULL,g_73 = NULL;
  g_73 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_73 = ATgetArgument(t, 0);
      {
        ATerm y_28 = t;
        int z_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_73);
            ;
            LocalPopChoice(z_28);
          }
        else
          {
            t = y_28;
            t = i_73(g_73, t);
          }
      }
    }
  else
    {
      t = i_73(g_73, t);
    }
  return(t);
}
ATerm m_8 (ATerm o_66, ATerm t)
{
  t = SSL_read_term_from_stream(o_66);
  return(t);
}
ATerm n_8 (ATerm a_63, ATerm b_63, ATerm t)
{
  ATerm j_73 = NULL;
  t = SSL_fopen(a_63, b_63);
  j_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_73);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_73 = NULL;
  t = SSL_stdin_stream();
  k_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_73);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_73 = NULL;
  t = SSL_stdout_stream();
  l_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_73);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_73 = NULL;
  t = SSL_stderr_stream();
  m_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_73);
  return(t);
}
ATerm n_75 (ATerm s_73, ATerm t)
{
  ATerm t_73 = NULL;
  t = SSL_explode_term(s_73);
  if(match_cons(t, sym__2))
    {
      ATerm a_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_29 = ATgetArgument(t, 1);
        if(((ATgetType(b_29) == AT_LIST) && !(ATisEmpty(b_29))))
          {
            t_73 = ATgetFirst((ATermList) b_29);
            {
              ATerm c_29 = (ATerm) ATgetNext((ATermList) b_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_73;
  if(match_cons(t, sym_stderr_0))
    {
      t = t_73;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = t_73;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_73;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm o_75 (ATerm w_73, ATerm x_73, ATerm y_73, ATerm t)
{
  ATerm z_73 = NULL,a_74 = NULL,b_74 = NULL,g_74 = NULL,y_9 = NULL;
  t = SSLgetAnnotations(y_73);
  b_74 = t;
  t = w_73;
  if(match_cons(t, sym_Path_1))
    {
      g_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_74, x_73);
  y_9 = t;
  t = SSLsetAnnotations(y_9, b_74);
  if(match_cons(t, sym__2))
    {
      z_73 = ATgetArgument(t, 0);
      a_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_8(z_73, a_74, t);
  return(t);
}
ATerm p_75 (ATerm i_74, ATerm j_74, ATerm k_74, ATerm t)
{
  ATerm l_74 = NULL,m_74 = NULL,s_74 = NULL,d_75 = NULL,z_9 = NULL;
  t = SSLgetAnnotations(k_74);
  s_74 = t;
  t = SSL_is_string(i_74);
  d_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_75, j_74);
  z_9 = t;
  t = SSLsetAnnotations(z_9, s_74);
  if(match_cons(t, sym__2))
    {
      l_74 = ATgetArgument(t, 0);
      m_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_8(l_74, m_74, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm k_75 = NULL,l_75 = NULL,m_75 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_29 = ATgetArgument(t, 0);
      ATerm e_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  k_75 = t;
  if(match_cons(t, sym__2))
    {
      l_75 = ATgetArgument(t, 0);
      m_75 = ATgetArgument(t, 1);
      {
        ATerm f_29 = t;
        int g_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_75(k_75, t);
            ;
            LocalPopChoice(g_29);
          }
        else
          {
            t = f_29;
            {
              ATerm h_29 = t;
              int i_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_75(l_75, m_75, k_75, t);
                  ;
                  LocalPopChoice(i_29);
                }
              else
                {
                  t = h_29;
                  t = p_75(l_75, m_75, k_75, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_75(k_75, t);
    }
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = term_j_29;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_75 = NULL,r_75 = NULL,s_75 = NULL;
  ATerm k_29 = t;
  int l_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_75 = NULL;
      t_75 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_75, term_m_29);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(l_29);
    }
  else
    {
      t = k_29;
      t = debug_1_0(w_7, t);
      _fail(t);
    }
  r_75 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_8(s_75, t);
  q_75 = t;
  t = r_75;
  t = fclose_0_0(t);
  t = q_75;
  return(t);
}
ATerm input_1_0 (ATerm v_122 (ATerm), ATerm t)
{
  ATerm n_29 = t;
  int o_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_29;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_29);
    }
  else
    {
      t = n_29;
      t = term_v_29;
    }
  t = ReadFromFile_0_0(t);
  t = v_122(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm v_75 = NULL,w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL;
  v_75 = t;
  t = term_z_17;
  t = whoami_0_0(t);
  w_75 = t;
  t = term_y_29;
  y_75 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_30), w_75), term_z_29);
  z_75 = t;
  t = SSL_printnl(y_75, z_75);
  t = term_g_18;
  x_75 = t;
  t = SSL_exit(x_75);
  t = v_75;
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm b_76 = NULL;
  b_76 = t;
  if(match_string(t, "-k"))
    {
      t = b_76;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = b_76;
    }
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm c_76 = NULL,d_76 = NULL,e_76 = NULL;
  c_76 = t;
  t = SSL_string_to_int(c_76);
  d_76 = t;
  t = term_b_30;
  e_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_30, d_76);
  t = v_8(e_76, d_76, t);
  t = c_76;
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_c_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_7, a_8, b_8, t);
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm g_76 = NULL;
  g_76 = t;
  if(match_string(t, "-S"))
    {
      t = g_76;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = g_76;
    }
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm h_76 = NULL,i_76 = NULL;
  t = term_d_30;
  h_76 = t;
  t = term_e_18;
  i_76 = t;
  t = term_e_30;
  t = v_8(h_76, i_76, t);
  t = term_h_30;
  return(t);
}
ATerm u_8 (ATerm t)
{
  t = term_i_30;
  return(t);
}
ATerm a_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm j_76 = NULL,k_76 = NULL,l_76 = NULL;
  j_76 = t;
  t = SSL_string_to_int(j_76);
  k_76 = t;
  t = term_d_30;
  l_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_30, k_76);
  t = v_8(l_76, k_76, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, j_76);
  return(t);
}
ATerm c_9 (ATerm t)
{
  t = term_j_30;
  return(t);
}
ATerm d_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm m_76 = NULL,n_76 = NULL;
  t = term_k_30;
  m_76 = t;
  t = term_z_17;
  n_76 = t;
  t = term_l_30;
  t = v_8(m_76, n_76, t);
  t = term_m_30;
  return(t);
}
ATerm g_9 (ATerm t)
{
  t = term_n_30;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_30 = t;
  int q_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_8, q_8, u_8, t);
      ;
      LocalPopChoice(q_30);
    }
  else
    {
      t = o_30;
      {
        ATerm s_30 = t;
        int t_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(a_9, b_9, c_9, t);
            ;
            LocalPopChoice(t_30);
          }
        else
          {
            t = s_30;
            t = Option_3_0(d_9, f_9, g_9, t);
          }
      }
    }
  return(t);
}
ATerm v_8 (ATerm p_67, ATerm q_67, ATerm t)
{
  ATerm o_76 = NULL;
  t = term_x_30;
  o_76 = t;
  t = SSL_table_put(o_76, p_67, q_67);
  t = (ATerm) ATmakeAppl(sym__3, term_x_30, p_67, q_67);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm r_76 = NULL,s_76 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_76 = NULL,v_76 = NULL,a_77 = NULL;
      t = term_z_17;
      t = d_0(t);
      u_76 = t;
      t = term_y_30;
      v_76 = t;
      t = term_z_30;
      a_77 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_30, term_z_30, u_76);
      t = t_8(v_76, a_77, u_76, t);
      _fail(t);
    }
  else
    {
      ATerm e_77 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_76 = ATgetFirst((ATermList) t);
          s_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_76;
      t = a_0(t);
      t = term_z_17;
      t = c_0(t);
      e_77 = t;
      t = (ATerm) ATinsert(CheckATermList(s_76), e_77);
    }
  return(t);
}
ATerm i_9 (ATerm t)
{
  ATerm g_77 = NULL;
  g_77 = t;
  if(match_string(t, "-o"))
    {
      t = g_77;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_77;
    }
  return(t);
}
ATerm l_9 (ATerm t)
{
  ATerm h_77 = NULL,i_77 = NULL;
  h_77 = t;
  t = term_n_28;
  i_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_28, h_77);
  t = v_8(i_77, h_77, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_77);
  return(t);
}
ATerm m_9 (ATerm t)
{
  t = term_a_31;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_9, l_9, m_9, t);
  return(t);
}
ATerm t_8 (ATerm n_72, ATerm o_72, ATerm m_72, ATerm t)
{
  ATerm k_77 = NULL,l_77 = NULL,m_77 = NULL;
  k_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_72, o_72);
  {
    ATerm b_31 = t;
    int c_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_31 = ATgetArgument(t, 0);
            ATerm h_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_72, o_72);
        t = s_8(n_72, o_72, t);
        ;
        LocalPopChoice(c_31);
      }
    else
      {
        t = b_31;
        t = (ATerm) ATempty;
      }
    l_77 = t;
    t = (ATerm) ATinsert(CheckATermList(l_77), m_72);
    m_77 = t;
    t = SSL_table_put(n_72, o_72, m_77);
    t = k_77;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm t_77 = NULL,u_77 = NULL,w_77 = NULL,x_77 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_77 = NULL,a_78 = NULL,b_78 = NULL;
      t = term_z_17;
      t = l_0(t);
      z_77 = t;
      t = term_y_30;
      a_78 = t;
      t = term_z_30;
      b_78 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_30, term_z_30, z_77);
      t = t_8(a_78, b_78, z_77, t);
      _fail(t);
    }
  else
    {
      ATerm f_78 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_77 = ATgetFirst((ATermList) t);
          u_77 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_77;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_77 = ATgetFirst((ATermList) t);
          x_77 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_77;
      t = i_0(t);
      t = w_77;
      t = k_0(t);
      f_78 = t;
      t = (ATerm) ATinsert(CheckATermList(x_77), f_78);
    }
  return(t);
}
ATerm o_9 (ATerm t)
{
  ATerm i_78 = NULL;
  i_78 = t;
  if(match_string(t, "-i"))
    {
      t = i_78;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_78;
    }
  return(t);
}
ATerm q_9 (ATerm t)
{
  ATerm j_78 = NULL,k_78 = NULL;
  j_78 = t;
  t = term_p_29;
  k_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_29, j_78);
  t = v_8(k_78, j_78, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_78);
  return(t);
}
ATerm s_9 (ATerm t)
{
  t = term_i_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_9, q_9, s_9, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_78 = NULL,m_78 = NULL,n_78 = NULL,o_78 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_17;
  t = whoami_0_0(t);
  l_78 = t;
  t = term_y_29;
  n_78 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_31), l_78);
  o_78 = t;
  t = SSL_printnl(n_78, o_78);
  t = term_g_18;
  m_78 = t;
  t = SSL_exit(m_78);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_k_31;
  t = get_config_0_0(t);
  return(t);
}
ATerm o_8 (ATerm y_59, ATerm z_59, ATerm t)
{
  ATerm l_31 = t;
  int m_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_59, z_59);
      ;
      LocalPopChoice(m_31);
    }
  else
    {
      t = l_31;
      t = SSL_addr(y_59, z_59);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm t)
{
  ATerm q_78 = NULL,r_78 = NULL,s_78 = NULL;
  q_78 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_78;
      t = s_111(t);
    }
  else
    {
      ATerm v_78 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_78 = ATgetFirst((ATermList) t);
          s_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_78;
      t = foldr_2_0(s_111, t_111, t);
      v_78 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_78, v_78);
      t = t_111(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm t_9 (ATerm t)
{
  t = term_e_18;
  return(t);
}
ATerm u_9 (ATerm t)
{
  ATerm p_30 = NULL,r_30 = NULL;
  if(match_cons(t, sym__2))
    {
      p_30 = ATgetArgument(t, 0);
      r_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_8(p_30, r_30, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_78 = NULL,f_30 = NULL,g_30 = NULL;
  t = times_0_0(t);
  g_30 = t;
  t = SSL_explode_term(g_30);
  if(match_cons(t, sym__2))
    {
      ATerm q_31 = ATgetArgument(t, 0);
      f_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_30;
  t = foldr_2_0(t_9, u_9, t);
  y_78 = t;
  t = SSL_TicksToSeconds(y_78);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_79 = NULL,k_79 = NULL,l_79 = NULL;
  j_79 = t;
  if(match_cons(t, sym__2))
    {
      k_79 = ATgetArgument(t, 0);
      l_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_31 = t;
    int s_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_79;
        if((k_79 != t))
          {
            _fail(t);
          }
        t = j_79;
        ;
        LocalPopChoice(s_31);
      }
    else
      {
        t = r_31;
        t = (ATerm) ATmakeAppl(sym__2, k_79, l_79);
        {
          ATerm u_31 = t;
          int v_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_79, l_79);
              ;
              LocalPopChoice(v_31);
            }
          else
            {
              t = u_31;
              t = SSL_gtr(k_79, l_79);
            }
          t = (ATerm) ATmakeAppl(sym__2, k_79, l_79);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_119 (ATerm), ATerm t)
{
  ATerm p_79 = NULL;
  p_79 = t;
  {
    ATerm w_31 = t;
    int x_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_79 = NULL;
        t = term_d_30;
        t = get_config_0_0(t);
        r_79 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_79, term_g_18);
        t = geq_0_0(t);
        t = p_79;
        t = v_119(t);
        ;
        LocalPopChoice(x_31);
      }
    else
      {
        t = w_31;
        t = p_79;
      }
  }
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm t_79 = NULL,u_79 = NULL,w_79 = NULL,x_79 = NULL;
  t = run_time_0_0(t);
  t_79 = t;
  t = term_z_17;
  t = whoami_0_0(t);
  u_79 = t;
  t = term_y_29;
  w_79 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_32), t_79), term_g_32), u_79);
  x_79 = t;
  t = SSL_printnl(w_79, x_79);
  t = (ATerm) ATmakeAppl(sym__2, term_y_29, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_32), t_79), term_g_32), u_79));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm y_79 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_18;
  y_79 = t;
  t = SSL_exit(y_79);
  return(t);
}
ATerm x_9 (ATerm t)
{
  ATerm g_80 = NULL,h_80 = NULL;
  h_80 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = h_80;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          g_80 = ATgetArgument(t, 0);
          {
            ATerm o_31 = NULL,d_10 = NULL;
            t = SSLgetAnnotations(h_80);
            o_31 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, g_80);
            d_10 = t;
            t = SSLsetAnnotations(d_10, o_31);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = h_80;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm l_122 (ATerm), ATerm t)
{
  ATerm j_32 = t;
  int k_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_32;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_32);
    }
  else
    {
      t = j_32;
      t = fetch_1_0(x_9, t);
    }
  t = l_122(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm k_80 = NULL,l_80 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_80 = ATgetFirst((ATermList) t);
      l_80 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_80 = NULL,q_80 = NULL;
        ATerm a_10 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(p_80)), not_null(q_80));
          return(t);
        }
        t = not_null(l_80);
        t = g_0(t);
        if(((p_80 != NULL) && (p_80 != t)))
          _fail(t);
        else
          p_80 = t;
        t = not_null(k_80);
        t = e_0(t);
        if(((q_80 != NULL) && (q_80 != t)))
          _fail(t);
        else
          q_80 = t;
        t = not_null(l_80);
        t = reverse_acc_2_0(e_0, a_10, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_17;
      t = g_0(t);
    }
  return(t);
}
ATerm b_10 (ATerm t)
{
  ATerm u_80 = NULL,v_80 = NULL,w_80 = NULL,y_10 = NULL;
  w_80 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_80);
  u_80 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_80);
  y_10 = t;
  t = SSLsetAnnotations(y_10, u_80);
  return(t);
}
ATerm c_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_10 (ATerm t)
{
  ATerm y_80 = NULL;
  y_80 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_80), term_n_32);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_80 = NULL,t_80 = NULL;
  ATerm p_32 = t;
  int q_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_31;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_32);
    }
  else
    {
      t = p_32;
      t = fetch_1_0(b_10, t);
    }
  t = term_s_32;
  t = echo_0_0(t);
  t = term_y_30;
  s_80 = t;
  t = term_z_30;
  t_80 = t;
  t = term_t_32;
  t = s_8(s_80, t_80, t);
  t = reverse_acc_2_0(_id, c_10, t);
  t = map_1_0(g_10, t);
  return(t);
}
ATerm fetch_1_0 (ATerm k_106 (ATerm), ATerm t)
{
  ATerm v_81 (ATerm t)
  {
    ATerm s_81 = NULL,t_81 = NULL,u_81 = NULL;
    s_81 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_81 = ATgetFirst((ATermList) t);
        u_81 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_32 = t;
      int v_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_32 = NULL,m_32 = NULL,z_12 = NULL;
          t = SSLgetAnnotations(s_81);
          b_32 = t;
          t = t_81;
          t = k_106(t);
          m_32 = t;
          t = (ATerm) ATinsert(CheckATermList(u_81), m_32);
          z_12 = t;
          t = SSLsetAnnotations(z_12, b_32);
          ;
          LocalPopChoice(v_32);
        }
      else
        {
          t = u_32;
          {
            ATerm b_33 = NULL,e_33 = NULL,a_13 = NULL;
            t = SSLgetAnnotations(s_81);
            b_33 = t;
            t = u_81;
            t = v_81(t);
            e_33 = t;
            t = (ATerm) ATinsert(CheckATermList(e_33), t_81);
            a_13 = t;
            t = SSLsetAnnotations(a_13, b_33);
          }
        }
    }
    return(t);
  }
  t = v_81(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_81 = NULL,a_82 = NULL,b_82 = NULL;
  z_81 = t;
  {
    ATerm a_33 = t;
    int c_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_81;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_33 = ATgetFirst((ATermList) t);
                ATerm f_33 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_81;
          }
        ;
        LocalPopChoice(c_33);
      }
    else
      {
        t = a_33;
        t = (ATerm) ATinsert(ATempty, z_81);
      }
    a_82 = t;
    t = term_o_28;
    b_82 = t;
    t = SSL_printnl(b_82, a_82);
    t = z_81;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_k_31;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm r_8 (ATerm o_57, ATerm p_57, ATerm t)
{
  t = SSL_strcat(o_57, p_57);
  return(t);
}
ATerm debug_1_0 (ATerm j_118 (ATerm), ATerm t)
{
  ATerm f_82 = NULL,g_82 = NULL,h_82 = NULL,i_82 = NULL;
  f_82 = t;
  t = j_118(t);
  g_82 = t;
  t = term_y_29;
  h_82 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_82), g_82);
  i_82 = t;
  t = SSL_printnl(h_82, i_82);
  t = f_82;
  return(t);
}
ATerm h_10 (ATerm t)
{
  ATerm i_33 = t;
  int j_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(j_33);
    }
  else
    {
      t = i_33;
    }
  return(t);
}
ATerm j_10 (ATerm t)
{
  t = term_k_33;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm l_33 = t;
  int m_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_82 = NULL;
      p_82 = t;
      t = SSL_is_string(p_82);
      ;
      LocalPopChoice(m_33);
    }
  else
    {
      t = l_33;
      {
        ATerm n_33 = t;
        int o_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(h_10, t);
            ;
            LocalPopChoice(o_33);
          }
        else
          {
            t = n_33;
            {
              ATerm v_82 = NULL,w_82 = NULL,x_82 = NULL;
              v_82 = t;
              if(match_cons(t, sym_Path_1))
                {
                  w_82 = ATgetArgument(t, 0);
                  t = w_82;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      w_82 = ATgetArgument(t, 0);
                      t = w_82;
                      {
                        ATerm p_33 = t;
                        int q_33 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(q_33);
                          }
                        else
                          {
                            t = p_33;
                            t = debug_1_0(j_10, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm b_83 = NULL,c_83 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          w_82 = ATgetArgument(t, 0);
                          x_82 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = w_82;
                      t = eval_config_0_0(t);
                      b_83 = t;
                      t = x_82;
                      t = eval_config_0_0(t);
                      c_83 = t;
                      t = (ATerm) ATmakeAppl(sym__2, b_83, c_83);
                      t = r_8(b_83, c_83, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm s_8 (ATerm e_74, ATerm f_74, ATerm t)
{
  t = SSL_table_get(e_74, f_74);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm g_83 = NULL,h_83 = NULL;
  g_83 = t;
  t = term_x_30;
  h_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_30, g_83);
  t = s_8(h_83, g_83, t);
  {
    ATerm r_33 = t;
    int t_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_83 = NULL,j_83 = NULL;
        t = eval_config_0_0(t);
        i_83 = t;
        t = term_x_30;
        j_83 = t;
        t = SSL_table_put(j_83, g_83, i_83);
        t = i_83;
        ;
        LocalPopChoice(t_33);
      }
    else
      {
        t = r_33;
      }
  }
  return(t);
}
ATerm r_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_11 (ATerm t)
{
  ATerm m_83 = NULL,n_83 = NULL;
  t = term_u_33;
  m_83 = t;
  t = term_z_17;
  n_83 = t;
  t = term_v_33;
  t = v_8(m_83, n_83, t);
  return(t);
}
ATerm e_11 (ATerm t)
{
  t = term_w_33;
  return(t);
}
ATerm f_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_11 (ATerm t)
{
  ATerm o_83 = NULL,p_83 = NULL,q_83 = NULL,r_83 = NULL;
  t = term_u_33;
  q_83 = t;
  t = term_z_17;
  r_83 = t;
  t = term_v_33;
  t = v_8(q_83, r_83, t);
  t = term_x_33;
  o_83 = t;
  t = term_z_17;
  p_83 = t;
  t = term_y_33;
  t = v_8(o_83, p_83, t);
  t = term_z_33;
  return(t);
}
ATerm k_11 (ATerm t)
{
  t = term_b_34;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_34 = t;
  int d_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_10, d_11, e_11, t);
      ;
      LocalPopChoice(d_34);
    }
  else
    {
      t = c_34;
      t = Option_3_0(f_11, g_11, k_11, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm t)
{
  ATerm s_83 = NULL,t_83 = NULL,u_83 = NULL,v_83 = NULL,w_83 = NULL,x_83 = NULL,j_13 = NULL;
  x_83 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_83 = ATgetFirst((ATermList) t);
      u_83 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_83);
  s_83 = t;
  t = t_83;
  t = q_84(t);
  v_83 = t;
  t = u_83;
  t = r_84(t);
  w_83 = t;
  t = (ATerm) ATinsert(CheckATermList(w_83), v_83);
  j_13 = t;
  t = SSLsetAnnotations(j_13, s_83);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_124 (ATerm), ATerm t)
{
  ATerm c_84 = NULL,d_84 = NULL,e_84 = NULL,f_84 = NULL,h_84 = NULL,i_84 = NULL,l_13 = NULL;
  if(((c_84 != NULL) && (c_84 != t)))
    _fail(t);
  else
    c_84 = t;
  {
    ATerm h_34 = t;
    int i_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_34;
        t = o_124(t);
        ;
        LocalPopChoice(i_34);
      }
    else
      {
        t = h_34;
      }
    t = not_null(c_84);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((e_84 != NULL) && (e_84 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          e_84 = ATgetFirst((ATermList) t);
        if(((f_84 != NULL) && (f_84 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          f_84 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(c_84));
    if(((d_84 != NULL) && (d_84 != t)))
      _fail(t);
    else
      d_84 = t;
    t = term_k_31;
    if(((i_84 != NULL) && (i_84 != t)))
      _fail(t);
    else
      i_84 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_k_31, not_null(e_84));
    t = v_8(not_null(i_84), not_null(e_84), t);
    t = not_null(f_84);
    {
      ATerm u_84 (ATerm t)
      {
        ATerm k_34 = t;
        int l_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_34 = t;
            int n_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_84 = NULL;
                l_84 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = l_84;
                ;
                LocalPopChoice(n_34);
              }
            else
              {
                t = m_34;
                t = o_124(t);
                t = Cons_2_0(_id, u_84, t);
              }
            ;
            LocalPopChoice(l_34);
          }
        else
          {
            t = k_34;
            {
              ATerm o_84 = NULL,p_84 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_84 = ATgetFirst((ATermList) t);
                  p_84 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(p_84), (ATerm) ATmakeAppl(sym_Undefined_1, o_84));
            }
          }
        return(t);
      }
      t = u_84(t);
      if(((h_84 != NULL) && (h_84 != t)))
        _fail(t);
      else
        h_84 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(h_84)), (ATerm) ATmakeAppl(sym_Program_1, not_null(e_84)));
      if(((l_13 != NULL) && (l_13 != t)))
        _fail(t);
      else
        l_13 = t;
      t = SSLsetAnnotations(not_null(l_13), not_null(d_84));
    }
  }
  return(t);
}
ATerm m_11 (ATerm t)
{
  ATerm g_85 = NULL;
  g_85 = t;
  if(match_string(t, "--help"))
    {
      t = g_85;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_85;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_85;
        }
    }
  return(t);
}
ATerm n_11 (ATerm t)
{
  ATerm h_85 = NULL,i_85 = NULL;
  t = term_l_32;
  h_85 = t;
  t = term_z_17;
  i_85 = t;
  t = term_p_34;
  t = v_8(h_85, i_85, t);
  t = term_q_34;
  return(t);
}
ATerm q_11 (ATerm t)
{
  t = term_r_34;
  return(t);
}
ATerm s_11 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_124 (ATerm), ATerm t)
{
  ATerm z_84 = NULL,a_85 = NULL,b_85 = NULL,c_85 = NULL,d_85 = NULL,e_85 = NULL,f_85 = NULL;
  if(((b_85 != NULL) && (b_85 != t)))
    _fail(t);
  else
    b_85 = t;
  t = term_y_30;
  if(((d_85 != NULL) && (d_85 != t)))
    _fail(t);
  else
    d_85 = t;
  t = term_z_30;
  if(((e_85 != NULL) && (e_85 != t)))
    _fail(t);
  else
    e_85 = t;
  t = (ATerm) ATempty;
  if(((f_85 != NULL) && (f_85 != t)))
    _fail(t);
  else
    f_85 = t;
  t = SSL_table_put(not_null(d_85), not_null(e_85), not_null(f_85));
  t = not_null(b_85);
  {
    ATerm l_11 (ATerm t)
    {
      ATerm s_34 = t;
      int t_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_124(t);
          ;
          LocalPopChoice(t_34);
        }
      else
        {
          t = s_34;
          {
            ATerm u_34 = t;
            int v_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_11, n_11, q_11, t);
                ;
                LocalPopChoice(v_34);
              }
            else
              {
                t = u_34;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_11, t);
    {
      ATerm w_34 = t;
      int x_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_85 = NULL;
          p_85 = t;
          {
            ATerm y_34 = t;
            int a_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_34 = NULL;
                t = p_85;
                {
                  ATerm b_35 = t;
                  int c_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_l_32;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(c_35);
                    }
                  else
                    {
                      t = b_35;
                      t = fetch_1_0(s_11, t);
                    }
                  t = p_85;
                  t = default_system_usage_0_0(t);
                  t = term_e_18;
                  a_34 = t;
                  t = SSL_exit(a_34);
                }
                ;
                LocalPopChoice(a_35);
              }
            else
              {
                t = y_34;
                {
                  ATerm e_34 = NULL;
                  t = term_u_33;
                  t = get_config_0_0(t);
                  t = p_85;
                  t = default_system_about_0_0(t);
                  t = term_e_18;
                  e_34 = t;
                  t = SSL_exit(e_34);
                }
              }
          }
          ;
          LocalPopChoice(x_34);
        }
      else
        {
          t = w_34;
          {
            ATerm d_35 = t;
            int e_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_85 = NULL,r_85 = NULL,s_85 = NULL;
                ATerm t_11 (ATerm t)
                {
                  ATerm t_85 = NULL,u_85 = NULL,v_85 = NULL,i_14 = NULL;
                  v_85 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      u_85 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(v_85);
                  t_85 = t;
                  t = u_85;
                  if(((z_84 != NULL) && (z_84 != t)))
                    _fail(t);
                  else
                    z_84 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, u_85);
                  i_14 = t;
                  t = SSLsetAnnotations(i_14, t_85);
                  return(t);
                }
                t = fetch_1_0(t_11, t);
                t = term_y_29;
                if(((r_85 != NULL) && (r_85 != t)))
                  _fail(t);
                else
                  r_85 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_84)), term_f_35);
                if(((s_85 != NULL) && (s_85 != t)))
                  _fail(t);
                else
                  s_85 = t;
                t = SSL_printnl(not_null(r_85), not_null(s_85));
                t = (ATerm) ATmakeAppl(sym__2, term_y_29, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_84)), term_f_35));
                t = default_system_usage_0_0(t);
                t = term_g_18;
                if(((q_85 != NULL) && (q_85 != t)))
                  _fail(t);
                else
                  q_85 = t;
                t = SSL_exit(not_null(q_85));
                ;
                LocalPopChoice(e_35);
              }
            else
              {
                t = d_35;
              }
          }
        }
      if(((a_85 != NULL) && (a_85 != t)))
        _fail(t);
      else
        a_85 = t;
      t = term_y_30;
      if(((c_85 != NULL) && (c_85 != t)))
        _fail(t);
      else
        c_85 = t;
      t = SSL_table_destroy(not_null(c_85));
      t = not_null(a_85);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_122 (ATerm), ATerm o_122 (ATerm), ATerm p_122 (ATerm), ATerm q_122 (ATerm), ATerm t)
{
  ATerm b_86 = NULL,c_86 = NULL,d_86 = NULL,e_86 = NULL;
  t = parse_options_1_0(n_122, t);
  b_86 = t;
  t = term_j_35;
  e_86 = t;
  t = SSL_table_create(e_86);
  t = term_j_35;
  c_86 = t;
  t = term_p_35;
  d_86 = t;
  t = SSL_table_put(c_86, d_86, b_86);
  t = b_86;
  t = p_122(t);
  {
    ATerm q_35 = t;
    int r_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_122, t);
        ;
        LocalPopChoice(r_35);
      }
    else
      {
        t = q_35;
        {
          ATerm s_35 = t;
          int t_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_122(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(t_35);
            }
          else
            {
              t = s_35;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm u_11 (ATerm t)
{
  ATerm u_35 = t;
  int v_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(v_35);
    }
  else
    {
      t = u_35;
      {
        ATerm w_35 = t;
        int x_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(x_35);
          }
        else
          {
            t = w_35;
            {
              ATerm y_35 = t;
              int z_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(w_11, x_11, y_11, t);
                  ;
                  LocalPopChoice(z_35);
                }
              else
                {
                  t = y_35;
                  {
                    ATerm a_36 = t;
                    int b_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(b_36);
                      }
                    else
                      {
                        t = a_36;
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
ATerm v_11 (ATerm t)
{
  t = input_1_0(z_11, t);
  return(t);
}
ATerm w_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_11 (ATerm t)
{
  ATerm l_86 = NULL,m_86 = NULL;
  t = term_r_28;
  l_86 = t;
  t = term_z_17;
  m_86 = t;
  t = term_c_36;
  t = v_8(l_86, m_86, t);
  t = term_d_36;
  return(t);
}
ATerm y_11 (ATerm t)
{
  t = term_e_36;
  return(t);
}
ATerm z_11 (ATerm t)
{
  t = output_1_0(b_12, t);
  return(t);
}
ATerm b_12 (ATerm t)
{
  ATerm o_86 = NULL,p_86 = NULL,q_86 = NULL,r_86 = NULL,s_86 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm f_36 = ATgetArgument(t, 0);
      if(((ATgetType(f_36) == AT_LIST) && !(ATisEmpty(f_36))))
        {
          ATerm g_36 = ATgetFirst((ATermList) f_36);
          if(match_cons(g_36, sym_Signature_1))
            {
              q_86 = ATgetArgument(g_36, 0);
            }
          else
            _fail(t);
          {
            ATerm h_36 = (ATerm) ATgetNext((ATermList) f_36);
            if(((ATgetType(h_36) == AT_LIST) && !(ATisEmpty(h_36))))
              {
                ATerm k_36 = ATgetFirst((ATermList) h_36);
                if(match_cons(k_36, sym_Overlays_1))
                  {
                    r_86 = ATgetArgument(k_36, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm l_36 = (ATerm) ATgetNext((ATermList) h_36);
                  if(((ATgetType(l_36) == AT_LIST) && !(ATisEmpty(l_36))))
                    {
                      ATerm m_36 = ATgetFirst((ATermList) l_36);
                      if(match_cons(m_36, sym_Strategies_1))
                        {
                          s_86 = ATgetArgument(m_36, 0);
                        }
                      else
                        _fail(t);
                      {
                        ATerm n_36 = (ATerm) ATgetNext((ATermList) l_36);
                        if(((ATgetType(n_36) != AT_LIST) || !(ATisEmpty(n_36))))
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
  t = h_8(q_86, r_86, s_86, t);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm r_36 = ATgetArgument(t, 0);
      if(((ATgetType(r_36) == AT_LIST) && !(ATisEmpty(r_36))))
        {
          ATerm s_36 = ATgetFirst((ATermList) r_36);
          if(match_cons(s_36, sym_Signature_1))
            {
              o_86 = ATgetArgument(s_36, 0);
            }
          else
            _fail(t);
          {
            ATerm t_36 = (ATerm) ATgetNext((ATermList) r_36);
            if(((ATgetType(t_36) == AT_LIST) && !(ATisEmpty(t_36))))
              {
                ATerm u_36 = ATgetFirst((ATermList) t_36);
                if(match_cons(u_36, sym_Strategies_1))
                  {
                    p_86 = ATgetArgument(u_36, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm v_36 = (ATerm) ATgetNext((ATermList) t_36);
                  if(((ATgetType(v_36) != AT_LIST) || !(ATisEmpty(v_36))))
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
  t = l_7(o_86, p_86, t);
  t = topdown_1_0(c_12, t);
  return(t);
}
ATerm c_12 (ATerm t)
{
  ATerm w_36 = t;
  int x_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_36 = t;
      int z_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_86 = NULL,v_86 = NULL,y_86 = NULL;
          if(match_cons(t, sym_Scope_2))
            {
              u_86 = ATgetArgument(t, 0);
              v_86 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_86;
          t = map_1_0(d_12, t);
          y_86 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, y_86, v_86);
          ;
          LocalPopChoice(z_36);
        }
      else
        {
          t = y_36;
          t = desugarRule_0_0(t);
        }
      ;
      LocalPopChoice(x_36);
    }
  else
    {
      t = w_36;
    }
  t = repeat_1_0(g_12, t);
  return(t);
}
ATerm d_12 (ATerm t)
{
  ATerm c_37 = t;
  int d_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_34 = NULL;
      if(match_cons(t, sym_ListVar_1))
        {
          o_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_34;
      ;
      LocalPopChoice(d_37);
    }
  else
    {
      t = c_37;
    }
  return(t);
}
ATerm g_12 (ATerm t)
{
  ATerm e_37 = t;
  int f_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_37 = t;
      int h_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = HL_0_0(t);
          ;
          LocalPopChoice(h_37);
        }
      else
        {
          t = g_37;
          {
            ATerm c_87 = NULL,d_87 = NULL;
            c_87 = t;
            if(match_cons(t, sym_Match_1))
              {
                d_87 = ATgetArgument(t, 0);
                t = c_87;
                t = y_6(d_87, t);
              }
            else
              {
                if(match_cons(t, sym_Build_1))
                  {
                    d_87 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = c_87;
                t = x_6(d_87, t);
              }
          }
        }
      ;
      LocalPopChoice(f_37);
    }
  else
    {
      t = e_37;
      {
        ATerm h_87 = NULL,i_87 = NULL;
        if(match_cons(t, sym_Var_1))
          {
            h_87 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_87;
        if(match_cons(t, sym_ListVar_1))
          {
            i_87 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, i_87);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(u_11, default_usage_0_0, _id, v_11, t);
  return(t);
}
