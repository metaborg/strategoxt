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
ATerm term_v_35;
ATerm term_u_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_h_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_w_33;
ATerm term_s_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_v_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_a_31;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_t_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_v_29;
ATerm term_s_29;
ATerm term_c_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_t_28;
ATerm term_q_28;
ATerm term_x_27;
ATerm term_r_20;
ATerm term_o_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_r_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_h_18;
ATerm term_c_18;
ATerm term_v_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_m_17;
ATerm term_k_17;
ATerm term_i_17;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
void init_constant_terms (void)
{
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Sort_2, term_z_14, (ATerm) ATempty);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_ConstType_1, term_a_15);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CongDefined", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Defined_1, term_c_18);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_18);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("s1", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("s2", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Var_1, term_r_19);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("y", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Var_1, term_u_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Anno_2, term_t_19, term_v_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("x'", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Var_1, term_y_19);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("y'", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Var_1, term_d_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Anno_2, term_z_19, term_e_20);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_19);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Call_2, term_j_20, (ATerm) ATempty);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_BAM_3, term_k_20, term_t_19, term_z_19);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_19);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_Call_2, term_m_20, (ATerm) ATempty);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_BAM_3, term_o_20, term_v_19, term_e_20);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_19);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym__2, term_f_30, term_s_17);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_17);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym__2, term_k_30, term_m_17);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym__2, term_v_30, term_w_30);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(sym__2, term_k_33, term_m_17);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym__2, term_s_33, term_m_17);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym__2, term_v_31, term_m_17);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(sym__2, term_c_29, term_m_17);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm t_6 (ATerm k_24, ATerm);
ATerm u_6 (ATerm h_24, ATerm);
ATerm HL_0_0 (ATerm);
ATerm q_0 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm r_0 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm s_85 (ATerm), ATerm);
ATerm x_6 (ATerm z_21, ATerm b_22, ATerm c_22, ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm ListVarScope_0_0 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm DesugarListMatching_0_0 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm DeclareVariables_0_0 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm RDtoSD_0_0 (ATerm);
ATerm z_6 (ATerm y_100 (ATerm), ATerm j_45, ATerm h_45, ATerm);
ATerm b_7 (ATerm v_56, ATerm w_56, ATerm);
ATerm w_27 (ATerm s_26, ATerm);
ATerm y_27 (ATerm i_27, ATerm);
ATerm CongDefined_0_0 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm h_2 (ATerm);
ATerm k_2 (ATerm);
ATerm MkCongDef_0_0 (ATerm);
ATerm filter_1_0 (ATerm b_97 (ATerm), ATerm);
ATerm g_7 (ATerm p_56, ATerm q_56, ATerm);
ATerm end_scope_1_0 (ATerm v_100 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm u_100 (ATerm), ATerm);
ATerm scope_2_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm);
ATerm o_2 (ATerm);
ATerm r_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm h_7 (ATerm c_19, ATerm d_19, ATerm);
ATerm at_end_1_0 (ATerm v_90 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm l_37 (ATerm y_36, ATerm);
ATerm conc_0_0 (ATerm);
ATerm b_3 (ATerm);
ATerm d_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm m_3 (ATerm);
ATerm tpaste_1_0 (ATerm g_112 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm h_112 (ATerm), ATerm i_112 (ATerm), ATerm j_112 (ATerm), ATerm);
ATerm q_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm n_7 (ATerm y_93 (ATerm), ATerm r_33, ATerm q_33, ATerm);
ATerm foldr_3_0 (ATerm z_95 (ATerm), ATerm a_96 (ATerm), ATerm b_96 (ATerm), ATerm);
ATerm o_7 (ATerm b_94 (ATerm), ATerm c_94 (ATerm), ATerm v_33, ATerm u_33, ATerm);
ATerm p_7 (ATerm t_93 (ATerm), ATerm p_33, ATerm o_33, ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm p_4 (ATerm);
ATerm r_7 (ATerm v_621, ATerm a_622, ATerm w_60, ATerm);
ATerm while_not_2_0 (ATerm f_84 (ATerm), ATerm g_84 (ATerm), ATerm);
ATerm for_3_0 (ATerm i_84 (ATerm), ATerm j_84 (ATerm), ATerm k_84 (ATerm), ATerm);
ATerm q_4 (ATerm);
ATerm u_4 (ATerm);
ATerm w_4 (ATerm);
ATerm k_55 (ATerm r_53, ATerm s_53, ATerm t_53, ATerm);
ATerm x_4 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm i_5 (ATerm);
ATerm free_vars_3_0 (ATerm f_111 (ATerm), ATerm g_111 (ATerm), ATerm h_111 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm Var_1_0 (ATerm u_69 (ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm u_7 (ATerm a_110 (ATerm), ATerm b_110 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm d_59, ATerm c_59, ATerm b_59, ATerm);
ATerm new_0_0 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm v_7 (ATerm u_109 (ATerm), ATerm v_109 (ATerm (ATerm), ATerm), ATerm v_58, ATerm y_58, ATerm);
ATerm env_alltd_1_0 (ATerm e_89 (ATerm), ATerm);
ATerm a_6 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_6_0 (ATerm b_109 (ATerm), ATerm c_109 (ATerm (ATerm), ATerm), ATerm d_109 (ATerm), ATerm e_109 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm f_109 (ATerm (ATerm), ATerm), ATerm g_109 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm i_92 (ATerm), ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm);
ATerm y_6 (ATerm);
ATerm a_7 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm n_8 (ATerm);
ATerm o_8 (ATerm);
ATerm d_8 (ATerm p_82 (ATerm), ATerm f_20, ATerm h_20, ATerm);
ATerm topdown_1_0 (ATerm o_84 (ATerm), ATerm);
ATerm Trm_to_Cong_0_0 (ATerm);
ATerm trm_to_cong_0_0 (ATerm);
ATerm y_8 (ATerm);
ATerm i_7 (ATerm n_20, ATerm q_20, ATerm p_20, ATerm);
ATerm repeat_1_0 (ATerm q_83 (ATerm), ATerm);
ATerm e_9 (ATerm);
ATerm e_8 (ATerm e_19, ATerm g_19, ATerm f_19, ATerm);
ATerm f_8 (ATerm v_46, ATerm w_46, ATerm);
ATerm g_8 (ATerm j_50, ATerm k_50, ATerm);
ATerm i_8 (ATerm r_102 (ATerm), ATerm f_466, ATerm n_50, ATerm);
ATerm h_8 (ATerm f_50, ATerm g_50, ATerm);
ATerm i_9 (ATerm);
ATerm l_9 (ATerm);
ATerm output_1_0 (ATerm a_107 (ATerm), ATerm);
ATerm w_71 (ATerm q_71, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm j_8 (ATerm l_50, ATerm);
ATerm k_8 (ATerm x_46, ATerm y_46, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm o_73 (ATerm g_72, ATerm);
ATerm p_73 (ATerm m_72, ATerm s_72, ATerm t_72, ATerm);
ATerm q_73 (ATerm b_73, ATerm c_73, ATerm d_73, ATerm);
ATerm l_8 (ATerm);
ATerm m_9 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm b_107 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm n_9 (ATerm);
ATerm o_9 (ATerm);
ATerm p_9 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm q_9 (ATerm);
ATerm r_9 (ATerm);
ATerm s_9 (ATerm);
ATerm u_9 (ATerm);
ATerm v_9 (ATerm);
ATerm w_9 (ATerm);
ATerm z_9 (ATerm);
ATerm b_10 (ATerm);
ATerm d_10 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm t_8 (ATerm m_51, ATerm n_51, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm e_10 (ATerm);
ATerm f_10 (ATerm);
ATerm g_10 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm r_8 (ATerm k_56, ATerm l_56, ATerm j_56, ATerm);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm);
ATerm h_10 (ATerm);
ATerm i_10 (ATerm);
ATerm j_10 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm m_8 (ATerm v_43, ATerm w_43, ATerm);
ATerm foldr_2_0 (ATerm x_95 (ATerm), ATerm y_95 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm k_10 (ATerm);
ATerm l_10 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm b_104 (ATerm), ATerm);
ATerm m_10 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm n_10 (ATerm);
ATerm need_help_1_0 (ATerm r_106 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm q_10 (ATerm);
ATerm u_10 (ATerm);
ATerm w_10 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm p_90 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm p_8 (ATerm k_41, ATerm l_41, ATerm);
ATerm debug_1_0 (ATerm p_102 (ATerm), ATerm);
ATerm map_1_0 (ATerm f_90 (ATerm), ATerm);
ATerm x_10 (ATerm);
ATerm y_10 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm q_8 (ATerm b_58, ATerm c_58, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm z_10 (ATerm);
ATerm a_11 (ATerm);
ATerm b_11 (ATerm);
ATerm c_11 (ATerm);
ATerm d_11 (ATerm);
ATerm e_11 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm n_68 (ATerm), ATerm o_68 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm u_108 (ATerm), ATerm);
ATerm g_11 (ATerm);
ATerm i_11 (ATerm);
ATerm j_11 (ATerm);
ATerm k_11 (ATerm);
ATerm parse_options_1_0 (ATerm t_108 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm);
ATerm n_11 (ATerm);
ATerm o_11 (ATerm);
ATerm p_11 (ATerm);
ATerm q_11 (ATerm);
ATerm t_11 (ATerm);
ATerm w_11 (ATerm);
ATerm x_11 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm t_6 (ATerm k_24, ATerm t)
{
  ATerm a_0 = NULL,c_0 = NULL;
  t = k_24;
  {
    ATerm h_0 (ATerm t)
    {
      if(match_cons(t, sym_Op_2))
        {
          ATerm e_7 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) e_7) != ATmakeSymbol("Cons", 0, ATtrue)))
            _fail(t);
          {
            ATerm y_11 = ATgetArgument(t, 1);
            if(((ATgetType(y_11) == AT_LIST) && !(ATisEmpty(y_11))))
              {
                ATerm b_12 = ATgetFirst((ATermList) y_11);
                if(match_cons(b_12, sym_Var_1))
                  {
                    ATerm j_12 = ATgetArgument(b_12, 0);
                    if(match_cons(j_12, sym_ListVar_1))
                      {
                        if(((a_0 != NULL) && (a_0 != ATgetArgument(j_12, 0))))
                          _fail(ATgetArgument(j_12, 0));
                        else
                          a_0 = ATgetArgument(j_12, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm c_12 = (ATerm) ATgetNext((ATermList) y_11);
                  if(((ATgetType(c_12) == AT_LIST) && !(ATisEmpty(c_12))))
                    {
                      ATerm l_12 = ATgetFirst((ATermList) c_12);
                      if(match_cons(l_12, sym_Op_2))
                        {
                          ATerm p_12 = ATgetArgument(l_12, 0);
                          if((ATgetSymbol((ATermAppl) p_12) != ATmakeSymbol("Nil", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm q_12 = ATgetArgument(l_12, 1);
                            if(((ATgetType(q_12) != AT_LIST) || !(ATisEmpty(q_12))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      {
                        ATerm o_12 = (ATerm) ATgetNext((ATermList) c_12);
                        if(((ATgetType(o_12) != AT_LIST) || !(ATisEmpty(o_12))))
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
    c_0 = t;
    t = (ATerm) ATmakeAppl(sym_Build_1, c_0);
  }
  return(t);
}
ATerm u_6 (ATerm h_24, ATerm t)
{
  ATerm e_0 = NULL,j_0 = NULL;
  t = h_24;
  {
    ATerm o_0 (ATerm t)
    {
      if(match_cons(t, sym_Op_2))
        {
          ATerm r_12 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) r_12) != ATmakeSymbol("Cons", 0, ATtrue)))
            _fail(t);
          {
            ATerm s_12 = ATgetArgument(t, 1);
            if(((ATgetType(s_12) == AT_LIST) && !(ATisEmpty(s_12))))
              {
                ATerm t_12 = ATgetFirst((ATermList) s_12);
                if(match_cons(t_12, sym_Var_1))
                  {
                    ATerm v_12 = ATgetArgument(t_12, 0);
                    if(match_cons(v_12, sym_ListVar_1))
                      {
                        if(((e_0 != NULL) && (e_0 != ATgetArgument(v_12, 0))))
                          _fail(ATgetArgument(v_12, 0));
                        else
                          e_0 = ATgetArgument(v_12, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm u_12 = (ATerm) ATgetNext((ATermList) s_12);
                  if(((ATgetType(u_12) == AT_LIST) && !(ATisEmpty(u_12))))
                    {
                      ATerm x_12 = ATgetFirst((ATermList) u_12);
                      if(match_cons(x_12, sym_Op_2))
                        {
                          ATerm c_13 = ATgetArgument(x_12, 0);
                          if((ATgetSymbol((ATermAppl) c_13) != ATmakeSymbol("Nil", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm d_13 = ATgetArgument(x_12, 1);
                            if(((ATgetType(d_13) != AT_LIST) || !(ATisEmpty(d_13))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      {
                        ATerm b_13 = (ATerm) ATgetNext((ATermList) u_12);
                        if(((ATgetType(b_13) != AT_LIST) || !(ATisEmpty(b_13))))
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
      t = (ATerm) ATmakeAppl(sym_Var_1, e_0);
      return(t);
    }
    t = oncetd_1_0(o_0, t);
    j_0 = t;
    t = (ATerm) ATmakeAppl(sym_Match_1, j_0);
  }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm t_0 = NULL,u_0 = NULL,v_0 = NULL,y_0 = NULL,z_0 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      y_0 = ATgetArgument(t, 0);
      z_0 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, y_0, z_0);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          y_0 = ATgetArgument(t, 0);
          t = y_0;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_0 = ATgetFirst((ATermList) t);
              u_0 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, t_0, (ATerm) ATmakeAppl(sym_LChoices_1, u_0));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_e_13;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              y_0 = ATgetArgument(t, 0);
              t = y_0;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  t_0 = ATgetFirst((ATermList) t);
                  u_0 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, t_0, (ATerm) ATmakeAppl(sym_Choices_1, u_0));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_e_13;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  y_0 = ATgetArgument(t, 0);
                  t = y_0;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      t_0 = ATgetFirst((ATermList) t);
                      u_0 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_0, (ATerm) ATmakeAppl(sym_Seqs_1, u_0));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_f_13;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      y_0 = ATgetArgument(t, 0);
                      z_0 = ATgetArgument(t, 1);
                      v_0 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, z_0, (ATerm) ATmakeAppl(sym_Op_2, term_g_13, (ATerm) ATinsert(ATinsert(ATempty, v_0), y_0)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          y_0 = ATgetArgument(t, 0);
                          z_0 = ATgetArgument(t, 1);
                          v_0 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, v_0)), y_0), (ATerm) ATmakeAppl(sym_Build_1, z_0)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              y_0 = ATgetArgument(t, 0);
                              z_0 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_0, (ATerm) ATmakeAppl(sym_Match_1, z_0));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  y_0 = ATgetArgument(t, 0);
                                  z_0 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, y_0), z_0);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      y_0 = ATgetArgument(t, 0);
                                      z_0 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_0), y_0);
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
ATerm q_0 (ATerm t)
{
  ATerm q_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL;
  u_2 = t;
  if(match_cons(t, sym_Con_3))
    {
      q_2 = ATgetArgument(t, 0);
      s_2 = ATgetArgument(t, 1);
      t_2 = ATgetArgument(t, 2);
      {
        ATerm s_0 = NULL,g_2 = NULL;
        t = SSLgetAnnotations(u_2);
        s_0 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, q_2, s_2, t_2);
        g_2 = t;
        t = SSLsetAnnotations(g_2, s_0);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = u_2;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm h_13 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(q_0, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_13;
    }
  return(t);
}
ATerm r_0 (ATerm t)
{
  ATerm d_4 = NULL,g_4 = NULL,i_4 = NULL,j_4 = NULL;
  g_4 = t;
  if(match_cons(t, sym_Con_3))
    {
      i_4 = ATgetArgument(t, 0);
      j_4 = ATgetArgument(t, 1);
      d_4 = ATgetArgument(t, 2);
      {
        ATerm f_2 = NULL,i_2 = NULL;
        t = SSLgetAnnotations(g_4);
        f_2 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, i_4, j_4, d_4);
        i_2 = t;
        t = SSLsetAnnotations(i_2, f_2);
      }
    }
  else
    {
      ATerm r_3 = NULL,j_2 = NULL;
      if(match_cons(t, sym_App_2))
        {
          i_4 = ATgetArgument(t, 0);
          j_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_4);
      r_3 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, i_4, j_4);
      j_2 = t;
      t = SSLsetAnnotations(j_2, r_3);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm j_13 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(r_0, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_13;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL,v_4 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      r_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_4;
  if(match_cons(t, sym_StratRule_3))
    {
      s_4 = ATgetArgument(t, 0);
      t_4 = ATgetArgument(t, 1);
      v_4 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, t_4), (ATerm) ATmakeAppl(sym_Where_1, v_4)), s_4));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          s_4 = ATgetArgument(t, 0);
          t_4 = ATgetArgument(t, 1);
          v_4 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = s_4;
      t = pureterm_0_0(t);
      t = t_4;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, t_4)), (ATerm) ATmakeAppl(sym_Where_1, v_4)), (ATerm) ATmakeAppl(sym_Match_1, s_4)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm s_85 (ATerm), ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    ATerm l_13 = t;
    int o_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_85(t);
        ;
        LocalPopChoice(o_13);
      }
    else
      {
        t = l_13;
        t = SRTS_one(h_5, t);
      }
    return(t);
  }
  t = h_5(t);
  return(t);
}
ATerm x_6 (ATerm z_21, ATerm b_22, ATerm c_22, ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,p_5 = NULL,q_5 = NULL;
  t = new_0_0(t);
  n_5 = t;
  t = z_21;
  {
    ATerm w_0 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm p_13 = ATgetArgument(t, 0);
          if(match_cons(p_13, sym_Var_1))
            {
              if(((m_5 != NULL) && (m_5 != ATgetArgument(p_13, 0))))
                _fail(ATgetArgument(p_13, 0));
              else
                m_5 = ATgetArgument(p_13, 0);
            }
          else
            _fail(t);
          if(((k_5 != NULL) && (k_5 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            k_5 = ATgetArgument(t, 1);
          {
            ATerm r_13 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, m_5);
      return(t);
    }
    t = oncetd_1_0(w_0, t);
    p_5 = t;
    t = b_22;
    {
      ATerm x_0 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm s_13 = ATgetArgument(t, 0);
            if(match_cons(s_13, sym_Var_1))
              {
                if(((m_5 != NULL) && (m_5 != ATgetArgument(s_13, 0))))
                  _fail(ATgetArgument(s_13, 0));
                else
                  m_5 = ATgetArgument(s_13, 0);
              }
            else
              _fail(t);
            if(((l_5 != NULL) && (l_5 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              l_5 = ATgetArgument(t, 1);
            {
              ATerm t_13 = ATgetArgument(t, 2);
              if(match_cons(t_13, sym_CallT_3))
                {
                  if(((j_5 != NULL) && (j_5 != ATgetArgument(t_13, 0))))
                    _fail(ATgetArgument(t_13, 0));
                  else
                    j_5 = ATgetArgument(t_13, 0);
                  {
                    ATerm u_13 = ATgetArgument(t_13, 1);
                    if(((ATgetType(u_13) != AT_LIST) || !(ATisEmpty(u_13))))
                      _fail(t);
                  }
                  {
                    ATerm v_13 = ATgetArgument(t_13, 2);
                    if(((ATgetType(v_13) != AT_LIST) || !(ATisEmpty(v_13))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, n_5);
        return(t);
      }
      t = oncetd_1_0(x_0, t);
      q_5 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_5), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, p_5, q_5, (ATerm) ATmakeAppl(sym_Seq_2, c_22, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(j_5), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(k_5), not_null(l_5), term_f_13))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(m_5)), (ATerm) ATmakeAppl(sym_Var_1, n_5))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm w_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_14 = t;
      int j_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_6 = NULL,i_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL,s_6 = NULL;
          l_6 = t;
          if(match_cons(t, sym_SRule_1))
            {
              m_6 = ATgetArgument(t, 0);
              t = m_6;
              if(match_cons(t, sym_Rule_3))
                {
                  h_6 = ATgetArgument(t, 0);
                  i_6 = ATgetArgument(t, 1);
                  k_6 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = l_6;
              t = x_6(h_6, i_6, k_6, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm h_4 = NULL,o_4 = NULL,m_2 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  m_6 = ATgetArgument(t, 0);
                  s_6 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(l_6);
              h_4 = t;
              t = s_6;
              t = desugarRule_0_0(t);
              o_4 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, m_6, o_4);
              m_2 = t;
              t = SSLsetAnnotations(m_2, h_4);
            }
          ;
          LocalPopChoice(j_14);
        }
      else
        {
          t = f_14;
          t = RtoS_0_0(t);
        }
      ;
      LocalPopChoice(z_13);
    }
  else
    {
      t = w_13;
    }
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm y_9 = NULL,c_10 = NULL;
  c_10 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      y_9 = ATgetArgument(t, 0);
      t = y_9;
    }
  else
    {
      t = c_10;
    }
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm t_10 = NULL,v_10 = NULL;
  v_10 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      t_10 = ATgetArgument(t, 0);
      t = t_10;
    }
  else
    {
      t = v_10;
    }
  return(t);
}
ATerm ListVarScope_0_0 (ATerm t)
{
  ATerm s_8 = NULL,x_8 = NULL,b_9 = NULL,c_9 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      b_9 = ATgetArgument(t, 0);
      c_9 = ATgetArgument(t, 1);
      s_8 = ATgetArgument(t, 2);
      x_8 = ATgetArgument(t, 3);
      {
        ATerm x_9 = NULL;
        t = s_8;
        t = map_1_0(a_1, t);
        x_9 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, b_9, c_9, x_9, x_8);
      }
    }
  else
    {
      ATerm s_10 = NULL;
      if(match_cons(t, sym_Scope_2))
        {
          b_9 = ATgetArgument(t, 0);
          c_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_9;
      t = map_1_0(b_1, t);
      s_10 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, s_10, c_9);
    }
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm k_14 = t;
  int l_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_14 = t;
      int n_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ListVarScope_0_0(t);
          ;
          LocalPopChoice(n_14);
        }
      else
        {
          t = m_14;
          t = desugarRule_0_0(t);
        }
      ;
      LocalPopChoice(l_14);
    }
  else
    {
      t = k_14;
    }
  t = repeat_1_0(d_1, t);
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm o_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_14 = t;
      int s_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_11 = NULL;
          if(match_cons(t, sym_DefaultVarDec_1))
            {
              l_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          {
            ATerm w_14 = t;
            int y_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym_VarDec_2, l_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_15), term_b_15));
                ;
                LocalPopChoice(y_14);
              }
            else
              {
                t = w_14;
                t = (ATerm) ATmakeAppl(sym_VarDec_2, l_11, term_b_15);
              }
          }
          ;
          LocalPopChoice(s_14);
        }
      else
        {
          t = r_14;
          {
            ATerm c_15 = t;
            int d_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = HL_0_0(t);
                ;
                LocalPopChoice(d_15);
              }
            else
              {
                t = c_15;
                {
                  ATerm u_11 = NULL,v_11 = NULL;
                  u_11 = t;
                  if(match_cons(t, sym_Match_1))
                    {
                      v_11 = ATgetArgument(t, 0);
                      t = u_11;
                      t = u_6(v_11, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Build_1))
                        {
                          v_11 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = u_11;
                      t = t_6(v_11, t);
                    }
                }
              }
          }
        }
      ;
      LocalPopChoice(p_14);
    }
  else
    {
      t = o_14;
      {
        ATerm z_11 = NULL,a_12 = NULL;
        if(match_cons(t, sym_Var_1))
          {
            z_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = z_11;
        if(match_cons(t, sym_ListVar_1))
          {
            a_12 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, a_12);
      }
    }
  return(t);
}
ATerm DesugarListMatching_0_0 (ATerm t)
{
  t = topdown_1_0(c_1, t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm q_13 = NULL;
  ATerm e_15 = t;
  int g_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_13 = ATgetArgument(t, 0);
          {
            ATerm h_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_15);
      t = q_13;
    }
  else
    {
      t = e_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_13;
    }
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm y_13 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_13);
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm l_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(n_15);
    }
  else
    {
      t = l_15;
      {
        ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            b_14 = ATgetArgument(t, 0);
            t = b_14;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                b_14 = ATgetArgument(t, 0);
                c_14 = ATgetArgument(t, 1);
                d_14 = ATgetArgument(t, 2);
                e_14 = ATgetArgument(t, 3);
                t = d_14;
                t = map_1_0(h_1, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    b_14 = ATgetArgument(t, 0);
                    c_14 = ATgetArgument(t, 1);
                    d_14 = ATgetArgument(t, 2);
                    e_14 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = d_14;
                t = map_1_0(i_1, t);
              }
          }
      }
    }
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm q_14 = NULL;
  ATerm o_15 = t;
  int p_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_14 = ATgetArgument(t, 0);
          {
            ATerm q_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_15);
      t = q_14;
    }
  else
    {
      t = o_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_14;
    }
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm f_15 = NULL;
  ATerm r_15 = t;
  int s_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_15 = ATgetArgument(t, 0);
          {
            ATerm t_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_15);
      t = f_15;
    }
  else
    {
      t = r_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_15;
    }
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm i_15 = NULL,m_15 = NULL;
  m_15 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      i_15 = ATgetArgument(t, 0);
      t = i_15;
    }
  else
    {
      t = m_15;
    }
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm z_15 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_15);
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm u_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(v_15);
    }
  else
    {
      t = u_15;
      {
        ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            b_16 = ATgetArgument(t, 0);
            t = b_16;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                b_16 = ATgetArgument(t, 0);
                c_16 = ATgetArgument(t, 1);
                d_16 = ATgetArgument(t, 2);
                e_16 = ATgetArgument(t, 3);
                t = d_16;
                t = map_1_0(m_1, t);
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
                t = map_1_0(n_1, t);
              }
          }
      }
    }
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm s_16 = NULL;
  ATerm w_15 = t;
  int x_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_16 = ATgetArgument(t, 0);
          {
            ATerm a_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_15);
      t = s_16;
    }
  else
    {
      t = w_15;
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
ATerm n_1 (ATerm t)
{
  ATerm e_17 = NULL;
  ATerm f_16 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_17 = ATgetArgument(t, 0);
          {
            ATerm h_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_16);
      t = e_17;
    }
  else
    {
      t = f_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_17;
    }
  return(t);
}
ATerm DeclareVariables_0_0 (ATerm t)
{
  ATerm w_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      y_12 = ATgetArgument(t, 0);
      z_12 = ATgetArgument(t, 1);
      a_13 = ATgetArgument(t, 2);
      w_12 = ATgetArgument(t, 3);
      {
        ATerm k_13 = NULL,m_13 = NULL,n_13 = NULL;
        t = a_13;
        t = map_1_0(e_1, t);
        k_13 = t;
        t = w_12;
        t = free_vars_3_0(f_1, g_1, tboundin_3_0, t);
        t = map_1_0(j_1, t);
        m_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_13, k_13);
        t = diff_0_0(t);
        n_13 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, y_12, z_12, a_13, (ATerm) ATmakeAppl(sym_Scope_2, n_13, w_12));
      }
    }
  else
    {
      ATerm y_15 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          y_12 = ATgetArgument(t, 0);
          z_12 = ATgetArgument(t, 1);
          a_13 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = a_13;
      t = free_vars_3_0(k_1, l_1, tboundin_3_0, t);
      y_15 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, y_12, z_12, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, y_15, a_13));
    }
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm c_21 = NULL;
  ATerm i_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_21 = ATgetArgument(t, 0);
          {
            ATerm k_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_16);
      t = c_21;
    }
  else
    {
      t = i_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_21;
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm g_21 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_21);
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm l_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(n_16);
    }
  else
    {
      t = l_16;
      {
        ATerm s_21 = NULL,u_21 = NULL,x_21 = NULL,y_21 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            s_21 = ATgetArgument(t, 0);
            t = s_21;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                s_21 = ATgetArgument(t, 0);
                u_21 = ATgetArgument(t, 1);
                x_21 = ATgetArgument(t, 2);
                y_21 = ATgetArgument(t, 3);
                t = x_21;
                t = map_1_0(r_1, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    s_21 = ATgetArgument(t, 0);
                    u_21 = ATgetArgument(t, 1);
                    x_21 = ATgetArgument(t, 2);
                    y_21 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = x_21;
                t = map_1_0(s_1, t);
              }
          }
      }
    }
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm u_22 = NULL;
  ATerm o_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_22 = ATgetArgument(t, 0);
          {
            ATerm q_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_16);
      t = u_22;
    }
  else
    {
      t = o_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_22;
    }
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm n_23 = NULL;
  ATerm r_16 = t;
  int t_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_23 = ATgetArgument(t, 0);
          {
            ATerm u_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_16);
      t = n_23;
    }
  else
    {
      t = r_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_23;
    }
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm w_23 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_23);
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm v_16 = t;
  int w_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(w_16);
    }
  else
    {
      t = v_16;
      {
        ATerm g_24 = NULL,o_24 = NULL,r_24 = NULL,s_24 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            g_24 = ATgetArgument(t, 0);
            t = g_24;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                g_24 = ATgetArgument(t, 0);
                o_24 = ATgetArgument(t, 1);
                r_24 = ATgetArgument(t, 2);
                s_24 = ATgetArgument(t, 3);
                t = r_24;
                t = map_1_0(v_1, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    g_24 = ATgetArgument(t, 0);
                    o_24 = ATgetArgument(t, 1);
                    r_24 = ATgetArgument(t, 2);
                    s_24 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = r_24;
                t = map_1_0(w_1, t);
              }
          }
      }
    }
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm b_25 = NULL;
  ATerm x_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_25 = ATgetArgument(t, 0);
          {
            ATerm z_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_16);
      t = b_25;
    }
  else
    {
      t = x_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_25;
    }
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm r_25 = NULL;
  ATerm a_17 = t;
  int b_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_25 = ATgetArgument(t, 0);
          {
            ATerm c_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_17);
      t = r_25;
    }
  else
    {
      t = a_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_25;
    }
  return(t);
}
ATerm RDtoSD_0_0 (ATerm t)
{
  ATerm u_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      w_17 = ATgetArgument(t, 0);
      x_17 = ATgetArgument(t, 1);
      y_17 = ATgetArgument(t, 2);
      u_17 = ATgetArgument(t, 3);
      {
        ATerm x_19 = NULL,b_20 = NULL,c_20 = NULL;
        t = y_17;
        t = map_1_0(o_1, t);
        x_19 = t;
        t = u_17;
        t = free_vars_3_0(p_1, q_1, tboundin_3_0, t);
        c_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_20, x_19);
        t = diff_0_0(t);
        b_20 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, w_17, x_17, y_17, (ATerm) ATmakeAppl(sym_Scope_2, b_20, (ATerm) ATmakeAppl(sym_SRule_1, u_17)));
      }
    }
  else
    {
      ATerm v_23 = NULL;
      if(match_cons(t, sym_RDef_3))
        {
          w_17 = ATgetArgument(t, 0);
          x_17 = ATgetArgument(t, 1);
          y_17 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = y_17;
      t = free_vars_3_0(t_1, u_1, tboundin_3_0, t);
      v_23 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, w_17, x_17, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, v_23, (ATerm) ATmakeAppl(sym_SRule_1, y_17)));
    }
  return(t);
}
ATerm z_6 (ATerm y_100 (ATerm), ATerm j_45, ATerm h_45, ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL;
  d_26 = t;
  t = y_100(t);
  z_25 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_25, j_45, h_45);
  t = r_8(z_25, j_45, h_45, t);
  {
    ATerm g_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_26 = NULL;
        t = term_i_17;
        g_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_25, term_i_17);
        t = q_8(z_25, g_26, t);
        ;
        LocalPopChoice(h_17);
      }
    else
      {
        t = g_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_26 = ATgetFirst((ATermList) t);
        c_26 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_i_17;
    e_26 = t;
    t = (ATerm) ATinsert(CheckATermList(c_26), (ATerm) ATinsert(CheckATermList(a_26), j_45));
    f_26 = t;
    t = SSL_table_put(z_25, e_26, f_26);
    t = d_26;
  }
  return(t);
}
ATerm b_7 (ATerm v_56, ATerm w_56, ATerm t)
{
  ATerm l_26 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_56, w_56);
  t = q_8(v_56, w_56, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_26 = ATgetFirst((ATermList) t);
      {
        ATerm j_17 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = l_26;
  return(t);
}
ATerm w_27 (ATerm s_26, ATerm t)
{
  ATerm f_5 = NULL;
  t = term_k_17;
  f_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_17, s_26);
  t = b_7(f_5, s_26, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm l_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_17) != ATmakeSymbol("f_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_m_17;
  return(t);
}
ATerm y_27 (ATerm i_27, ATerm t)
{
  ATerm o_5 = NULL;
  t = term_k_17;
  o_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_17, i_27);
  t = b_7(o_5, i_27, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm n_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_17) != ATmakeSymbol("b_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_m_17;
  return(t);
}
ATerm CongDefined_0_0 (ATerm t)
{
  ATerm s_27 = NULL,u_27 = NULL;
  s_27 = t;
  if(match_cons(t, sym__2))
    {
      ATerm o_17 = ATgetArgument(t, 0);
      u_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_27;
  if(match_int(t, 0))
    {
      ATerm p_17 = t;
      int q_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_27(s_27, t);
          ;
          LocalPopChoice(q_17);
        }
      else
        {
          t = p_17;
          t = y_27(s_27, t);
        }
    }
  else
    {
      t = w_27(s_27, t);
    }
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_s_17;
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm w_6 = NULL,f_7 = NULL;
  if(match_cons(t, sym__2))
    {
      w_6 = ATgetArgument(t, 0);
      f_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_8(w_6, f_7, t);
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_t_17;
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_k_17;
  return(t);
}
ATerm b_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_v_17;
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm j_7 = NULL,k_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_7 = ATgetFirst((ATermList) t);
      k_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_7, k_7);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm m_7 = NULL,q_7 = NULL,s_7 = NULL,t_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_17 = ATgetArgument(t, 0);
      if(match_cons(z_17, sym__2))
        {
          m_7 = ATgetArgument(z_17, 0);
          q_7 = ATgetArgument(z_17, 1);
        }
      else
        _fail(t);
      {
        ATerm a_18 = ATgetArgument(t, 1);
        if(match_cons(a_18, sym__2))
          {
            s_7 = ATgetArgument(a_18, 0);
            t_7 = ATgetArgument(a_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_7), m_7), (ATerm) ATinsert(CheckATermList(t_7), q_7));
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm w_7 = NULL;
  t = new_0_0(t);
  w_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, w_7, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_15), term_b_15)), w_7);
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm x_7 = NULL;
  x_7 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, x_7), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_k_17;
  return(t);
}
ATerm MkCongDef_0_0 (ATerm t)
{
  ATerm q_30 = NULL,u_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL;
  u_30 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      x_30 = ATgetArgument(t, 0);
      y_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_30;
  if(match_cons(t, sym_FunType_2))
    {
      z_30 = ATgetArgument(t, 0);
      q_30 = ATgetArgument(t, 1);
      {
        ATerm f_6 = NULL,n_6 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL;
        t = z_30;
        t = foldr_3_0(x_1, y_1, z_1, t);
        f_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_30, f_6);
        {
          ATerm b_18 = t;
          if((PushChoice() == 0))
            {
              t = CongDefined_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = b_18;
            }
          t = (ATerm) ATmakeAppl(sym__2, x_30, f_6);
          q_6 = t;
          t = term_h_18;
          r_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_30, f_6), term_h_18);
          t = z_6(a_2, q_6, r_6, t);
          t = z_30;
          t = genzip_4_0(b_2, c_2, d_2, e_2, t);
          if(match_cons(t, sym__2))
            {
              n_6 = ATgetArgument(t, 0);
              o_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_6;
          t = map_1_0(h_2, t);
          p_6 = t;
          t = (ATerm) ATmakeAppl(sym_SDefT_4, x_30, n_6, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, x_30, p_6));
        }
      }
    }
  else
    {
      ATerm u_8 = NULL,v_8 = NULL;
      if(match_cons(t, sym_ConstType_1))
        {
          ATerm i_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, x_30, term_s_17);
      {
        ATerm j_18 = t;
        if((PushChoice() == 0))
          {
            t = CongDefined_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = j_18;
          }
        t = (ATerm) ATmakeAppl(sym__2, x_30, term_s_17);
        u_8 = t;
        t = term_l_18;
        v_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_30, term_s_17), term_l_18);
        t = z_6(k_2, u_8, v_8, t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, x_30, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, x_30, (ATerm) ATempty));
      }
    }
  return(t);
}
ATerm filter_1_0 (ATerm b_97 (ATerm), ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL;
  x_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_31;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_31 = ATgetFirst((ATermList) t);
          z_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm m_18 = t;
        int n_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_9 = NULL,j_9 = NULL,k_9 = NULL,p_2 = NULL;
            t = SSLgetAnnotations(x_31);
            f_9 = t;
            t = y_31;
            t = b_97(t);
            j_9 = t;
            t = z_31;
            t = filter_1_0(b_97, t);
            k_9 = t;
            t = (ATerm) ATinsert(CheckATermList(k_9), j_9);
            p_2 = t;
            t = SSLsetAnnotations(p_2, f_9);
            ;
            LocalPopChoice(n_18);
          }
        else
          {
            t = m_18;
            t = z_31;
            t = filter_1_0(b_97, t);
          }
      }
    }
  return(t);
}
ATerm g_7 (ATerm p_56, ATerm q_56, ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL;
  g_32 = t;
  {
    ATerm o_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, p_56, q_56);
        t = q_8(p_56, q_56, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_18 = ATgetFirst((ATermList) t);
            f_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(p_18);
        t = SSL_table_put(p_56, q_56, f_32);
        t = (ATerm) ATmakeAppl(sym__3, p_56, q_56, f_32);
      }
    else
      {
        t = o_18;
        t = SSL_table_remove(p_56, q_56);
        t = (ATerm) ATmakeAppl(sym__2, p_56, q_56);
      }
    t = g_32;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm v_100 (ATerm), ATerm t)
{
  ATerm m_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL;
  p_32 = t;
  t = v_100(t);
  o_32 = t;
  {
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_32 = NULL;
        t = term_i_17;
        r_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_32, term_i_17);
        t = q_8(o_32, r_32, t);
        ;
        LocalPopChoice(s_18);
      }
    else
      {
        t = r_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_32 = ATgetFirst((ATermList) t);
        m_32 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_i_17;
    q_32 = t;
    t = SSL_table_put(o_32, q_32, m_32);
    t = n_32;
    {
      ATerm l_2 (ATerm t)
      {
        ATerm s_32 = NULL;
        s_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_32, s_32);
        t = g_7(o_32, s_32, t);
        return(t);
      }
      t = map_1_0(l_2, t);
      t = p_32;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm t)
{
  ATerm t_18 = t;
  int v_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_83(t);
      t = k_83(t);
      ;
      LocalPopChoice(v_18);
    }
  else
    {
      t = t_18;
      t = k_83(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm u_100 (ATerm), ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL;
  x_32 = t;
  t = u_100(t);
  w_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_32, term_i_17);
  {
    ATerm w_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_33 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm y_18 = ATgetArgument(t, 0);
            ATerm i_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_i_17;
        e_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_32, term_i_17);
        t = q_8(w_32, e_33, t);
        ;
        LocalPopChoice(x_18);
      }
    else
      {
        t = w_18;
        t = (ATerm) ATempty;
      }
    y_32 = t;
    t = term_i_17;
    z_32 = t;
    t = (ATerm) ATinsert(CheckATermList(y_32), (ATerm) ATempty);
    a_33 = t;
    t = SSL_table_put(w_32, z_32, a_33);
    t = x_32;
  }
  return(t);
}
ATerm scope_2_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    t = end_scope_1_0(w_100, t);
    return(t);
  }
  t = begin_scope_1_0(w_100, t);
  t = restore_always_2_0(x_100, n_2, t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_k_17;
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = filter_1_0(v_2, t);
  t = concat_0_0(t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm y_33 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      y_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_33;
  t = filter_1_0(MkCongDef_0_0, t);
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm j_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_19 = t;
      int m_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = RDtoSD_0_0(t);
          ;
          LocalPopChoice(m_19);
        }
      else
        {
          t = l_19;
          t = DeclareVariables_0_0(t);
        }
      ;
      LocalPopChoice(k_19);
    }
  else
    {
      t = j_19;
    }
  t = topdown_1_0(x_2, t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL,k_34 = NULL;
  k_34 = t;
  if(match_cons(t, sym_Call_2))
    {
      e_34 = ATgetArgument(t, 0);
      f_34 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_CallT_3, e_34, f_34, (ATerm) ATempty);
    }
  else
    {
      t = k_34;
    }
  return(t);
}
ATerm h_7 (ATerm c_19, ATerm d_19, ATerm t)
{
  ATerm n_33 = NULL,t_33 = NULL,x_33 = NULL;
  t = c_19;
  t = scope_2_0(o_2, r_2, t);
  t_33 = t;
  t = (ATerm) ATinsert(CheckATermList(d_19), (ATerm) ATmakeAppl(sym_RDefT_4, term_n_19, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_VarDec_2, term_p_19, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_15), term_b_15))), (ATerm) ATmakeAppl(sym_VarDec_2, term_o_19, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_15), term_b_15))), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, term_w_19, term_i_20, (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATempty, term_r_20), term_l_20)))));
  t = map_1_0(w_2, t);
  x_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_33, x_33);
  t = conc_0_0(t);
  n_33 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, n_33)), (ATerm) ATmakeAppl(sym_Signature_1, c_19)));
  return(t);
}
ATerm at_end_1_0 (ATerm v_90 (ATerm), ATerm t)
{
  ATerm s_36 (ATerm t)
  {
    ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL;
    r_36 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_36 = ATgetFirst((ATermList) t);
        q_36 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_9 = NULL,a_10 = NULL,a_3 = NULL;
          t = SSLgetAnnotations(r_36);
          t_9 = t;
          t = q_36;
          t = s_36(t);
          a_10 = t;
          t = (ATerm) ATinsert(CheckATermList(a_10), p_36);
          a_3 = t;
          t = SSLsetAnnotations(a_3, t_9);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_36;
        t = v_90(t);
      }
    return(t);
  }
  t = s_36(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,k_35 = NULL;
  a_35 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_35;
    }
  else
    {
      ATerm y_2 (ATerm t)
      {
        t = not_null(k_35);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_35 = ATgetFirst((ATermList) t);
          if(((k_35 != NULL) && (k_35 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            k_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_35;
      t = at_end_1_0(y_2, t);
    }
  return(t);
}
ATerm l_37 (ATerm y_36, ATerm t)
{
  ATerm z_36 = NULL;
  t = SSL_explode_term(y_36);
  if(match_cons(t, sym__2))
    {
      ATerm t_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      z_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_36;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm b_37 = NULL,e_37 = NULL,g_37 = NULL;
  g_37 = t;
  if(match_cons(t, sym__2))
    {
      b_37 = ATgetArgument(t, 0);
      e_37 = ATgetArgument(t, 1);
      {
        ATerm u_20 = t;
        int v_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_2 (ATerm t)
            {
              t = e_37;
              return(t);
            }
            t = b_37;
            t = at_end_1_0(z_2, t);
            ;
            LocalPopChoice(v_20);
          }
        else
          {
            t = u_20;
            t = l_37(g_37, t);
          }
      }
    }
  else
    {
      t = l_37(g_37, t);
    }
  return(t);
}
ATerm b_3 (ATerm t)
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
ATerm d_3 (ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_20 = ATgetArgument(t, 0);
      if(((ATgetType(z_20) == AT_LIST) && !(ATisEmpty(z_20))))
        {
          d_12 = ATgetFirst((ATermList) z_20);
          e_12 = (ATerm) ATgetNext((ATermList) z_20);
        }
      else
        _fail(t);
      {
        ATerm a_21 = ATgetArgument(t, 1);
        if(((ATgetType(a_21) == AT_LIST) && !(ATisEmpty(a_21))))
          {
            f_12 = ATgetFirst((ATermList) a_21);
            g_12 = (ATerm) ATgetNext((ATermList) a_21);
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
ATerm g_3 (ATerm t)
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
ATerm h_3 (ATerm t)
{
  ATerm k_12 = NULL,m_12 = NULL,n_12 = NULL;
  if(match_cons(t, sym__2))
    {
      k_12 = ATgetArgument(t, 0);
      n_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_12;
  {
    ATerm b_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm e_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(d_21);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, n_12);
      }
    else
      {
        t = b_21;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm h_21 = ATgetArgument(t, 0);
            m_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, n_12, m_12);
      }
  }
  return(t);
}
ATerm i_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_21 = ATgetArgument(t, 0);
      if(((ATgetType(j_21) != AT_LIST) || !(ATisEmpty(j_21))))
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
ATerm j_3 (ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL,t_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_21 = ATgetArgument(t, 0);
      if(((ATgetType(t_21) == AT_LIST) && !(ATisEmpty(t_21))))
        {
          g_14 = ATgetFirst((ATermList) t_21);
          h_14 = (ATerm) ATgetNext((ATermList) t_21);
        }
      else
        _fail(t);
      {
        ATerm v_21 = ATgetArgument(t, 1);
        if(((ATgetType(v_21) == AT_LIST) && !(ATisEmpty(v_21))))
          {
            i_14 = ATgetFirst((ATermList) v_21);
            t_14 = (ATerm) ATgetNext((ATermList) v_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_14, i_14), (ATerm) ATmakeAppl(sym__2, h_14, t_14));
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL;
  if(match_cons(t, sym__2))
    {
      u_14 = ATgetArgument(t, 0);
      v_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_14), u_14);
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm x_14 = NULL,j_15 = NULL,k_15 = NULL;
  if(match_cons(t, sym__2))
    {
      x_14 = ATgetArgument(t, 0);
      k_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_14;
  {
    ATerm a_22 = t;
    int g_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm h_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_22);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, k_15);
      }
    else
      {
        t = a_22;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm i_22 = ATgetArgument(t, 0);
            j_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, k_15, j_15);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm g_112 (ATerm), ATerm t)
{
  ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL;
  f_42 = t;
  if(match_cons(t, sym_Scope_2))
    {
      g_42 = ATgetArgument(t, 0);
      h_42 = ATgetArgument(t, 1);
      {
        ATerm o_10 = NULL,r_10 = NULL,c_3 = NULL;
        t = SSLgetAnnotations(f_42);
        o_10 = t;
        t = g_42;
        t = g_112(t);
        r_10 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, r_10, h_42);
        c_3 = t;
        t = SSLsetAnnotations(c_3, o_10);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          g_42 = ATgetArgument(t, 0);
          h_42 = ATgetArgument(t, 1);
          i_42 = ATgetArgument(t, 2);
          j_42 = ATgetArgument(t, 3);
          {
            ATerm h_11 = NULL,r_11 = NULL,s_11 = NULL,e_3 = NULL;
            t = SSLgetAnnotations(f_42);
            h_11 = t;
            t = i_42;
            t = g_112(t);
            s_11 = t;
            t = (ATerm) ATmakeAppl(sym__2, i_42, s_11);
            t = genzip_4_0(b_3, d_3, g_3, h_3, t);
            r_11 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, g_42, h_42, r_11, j_42);
            e_3 = t;
            t = SSLsetAnnotations(e_3, h_11);
          }
        }
      else
        {
          ATerm i_13 = NULL,x_13 = NULL,a_14 = NULL,f_3 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              g_42 = ATgetArgument(t, 0);
              h_42 = ATgetArgument(t, 1);
              i_42 = ATgetArgument(t, 2);
              j_42 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(f_42);
          i_13 = t;
          t = i_42;
          t = g_112(t);
          a_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_42, a_14);
          t = genzip_4_0(i_3, j_3, k_3, m_3, t);
          x_13 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, g_42, h_42, x_13, j_42);
          f_3 = t;
          t = SSLsetAnnotations(f_3, i_13);
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm h_112 (ATerm), ATerm i_112 (ATerm), ATerm j_112 (ATerm), ATerm t)
{
  ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,m_45 = NULL;
  a_45 = t;
  if(match_cons(t, sym_Scope_2))
    {
      m_45 = ATgetArgument(t, 0);
      x_44 = ATgetArgument(t, 1);
      {
        ATerm m_16 = NULL,d_17 = NULL,f_17 = NULL,l_3 = NULL;
        t = SSLgetAnnotations(a_45);
        m_16 = t;
        t = m_45;
        t = j_112(t);
        d_17 = t;
        t = x_44;
        t = h_112(t);
        f_17 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, d_17, f_17);
        l_3 = t;
        t = SSLsetAnnotations(l_3, m_16);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          m_45 = ATgetArgument(t, 0);
          x_44 = ATgetArgument(t, 1);
          y_44 = ATgetArgument(t, 2);
          z_44 = ATgetArgument(t, 3);
          {
            ATerm r_17 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,n_3 = NULL;
            t = SSLgetAnnotations(a_45);
            r_17 = t;
            t = m_45;
            t = j_112(t);
            d_18 = t;
            t = x_44;
            t = j_112(t);
            e_18 = t;
            t = y_44;
            t = j_112(t);
            f_18 = t;
            t = z_44;
            t = h_112(t);
            g_18 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, d_18, e_18, f_18, g_18);
            n_3 = t;
            t = SSLsetAnnotations(n_3, r_17);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              m_45 = ATgetArgument(t, 0);
              x_44 = ATgetArgument(t, 1);
              y_44 = ATgetArgument(t, 2);
              z_44 = ATgetArgument(t, 3);
              {
                ATerm u_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL,h_19 = NULL,o_3 = NULL;
                t = SSLgetAnnotations(a_45);
                u_18 = t;
                t = m_45;
                t = j_112(t);
                z_18 = t;
                t = x_44;
                t = j_112(t);
                a_19 = t;
                t = y_44;
                t = j_112(t);
                b_19 = t;
                t = z_44;
                t = h_112(t);
                h_19 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, z_18, a_19, b_19, h_19);
                o_3 = t;
                t = SSLsetAnnotations(o_3, u_18);
              }
            }
          else
            {
              ATerm q_19 = NULL,s_19 = NULL,p_3 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  m_45 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(a_45);
              q_19 = t;
              t = m_45;
              t = h_112(t);
              s_19 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, s_19);
              p_3 = t;
              t = SSLsetAnnotations(p_3, q_19);
            }
        }
    }
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm b_46 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_46);
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm j_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(k_22);
    }
  else
    {
      t = j_22;
      {
        ATerm l_22 = t;
        int m_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            ;
            LocalPopChoice(m_22);
          }
        else
          {
            t = l_22;
            {
              ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  d_46 = ATgetArgument(t, 0);
                  e_46 = ATgetArgument(t, 1);
                  f_46 = ATgetArgument(t, 2);
                  g_46 = ATgetArgument(t, 3);
                  t = f_46;
                  t = map_1_0(t_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      d_46 = ATgetArgument(t, 0);
                      e_46 = ATgetArgument(t, 1);
                      f_46 = ATgetArgument(t, 2);
                      g_46 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_46;
                  t = map_1_0(u_3, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm r_46 = NULL;
  ATerm n_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_46 = ATgetArgument(t, 0);
          {
            ATerm p_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_22);
      t = r_46;
    }
  else
    {
      t = n_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_46;
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm h_47 = NULL;
  ATerm q_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_47 = ATgetArgument(t, 0);
          {
            ATerm t_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_22);
      t = h_47;
    }
  else
    {
      t = q_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_47;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm a_46 = NULL;
  if(match_cons(t, sym_DynamicRules_1))
    {
      a_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_46;
  t = free_vars_3_0(q_3, s_3, tboundin_3_0, t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm r_47 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_47);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm v_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(w_22);
    }
  else
    {
      t = v_22;
      {
        ATerm w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            w_47 = ATgetArgument(t, 0);
            t = w_47;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                w_47 = ATgetArgument(t, 0);
                x_47 = ATgetArgument(t, 1);
                y_47 = ATgetArgument(t, 2);
                z_47 = ATgetArgument(t, 3);
                t = y_47;
                t = map_1_0(x_3, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    w_47 = ATgetArgument(t, 0);
                    x_47 = ATgetArgument(t, 1);
                    y_47 = ATgetArgument(t, 2);
                    z_47 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = y_47;
                t = map_1_0(y_3, t);
              }
          }
      }
    }
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm h_48 = NULL;
  ATerm y_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_48 = ATgetArgument(t, 0);
          {
            ATerm a_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_22);
      t = h_48;
    }
  else
    {
      t = y_22;
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
ATerm y_3 (ATerm t)
{
  ATerm q_48 = NULL;
  ATerm b_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_48 = ATgetArgument(t, 0);
          {
            ATerm e_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_23);
      t = q_48;
    }
  else
    {
      t = b_23;
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
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(v_3, w_3, tboundin_3_0, t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm f_49 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_49);
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm f_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(h_23);
    }
  else
    {
      t = f_23;
      {
        ATerm h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            h_49 = ATgetArgument(t, 0);
            t = h_49;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                h_49 = ATgetArgument(t, 0);
                i_49 = ATgetArgument(t, 1);
                j_49 = ATgetArgument(t, 2);
                k_49 = ATgetArgument(t, 3);
                t = j_49;
                t = map_1_0(b_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    h_49 = ATgetArgument(t, 0);
                    i_49 = ATgetArgument(t, 1);
                    j_49 = ATgetArgument(t, 2);
                    k_49 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = j_49;
                t = map_1_0(c_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm s_49 = NULL;
  ATerm i_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_49 = ATgetArgument(t, 0);
          {
            ATerm k_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_23);
      t = s_49;
    }
  else
    {
      t = i_23;
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
ATerm c_4 (ATerm t)
{
  ATerm b_50 = NULL;
  ATerm l_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_50 = ATgetArgument(t, 0);
          {
            ATerm o_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_23);
      t = b_50;
    }
  else
    {
      t = l_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_50;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm y_48 = NULL,c_49 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      c_49 = ATgetArgument(t, 0);
      t = c_49;
      if(match_cons(t, sym_Rule_3))
        {
          y_48 = ATgetArgument(t, 0);
          {
            ATerm p_23 = ATgetArgument(t, 1);
          }
          {
            ATerm q_23 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = y_48;
      t = free_vars_3_0(z_3, a_4, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          c_49 = ATgetArgument(t, 0);
          {
            ATerm r_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = c_49;
    }
  return(t);
}
ATerm n_7 (ATerm y_93 (ATerm), ATerm r_33, ATerm q_33, ATerm t)
{
  ATerm b_51 (ATerm t)
  {
    ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL;
    w_50 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_33;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_50 = ATgetFirst((ATermList) t);
            y_50 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_23 = t;
          int t_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_50;
              {
                ATerm e_4 (ATerm t)
                {
                  t = q_33;
                  return(t);
                }
                t = o_7(y_93, e_4, x_50, y_50, t);
                t = b_51(t);
              }
              ;
              LocalPopChoice(t_23);
            }
          else
            {
              t = s_23;
              {
                ATerm a_20 = NULL,g_20 = NULL,l_4 = NULL;
                t = SSLgetAnnotations(w_50);
                a_20 = t;
                t = y_50;
                t = b_51(t);
                g_20 = t;
                t = (ATerm) ATinsert(CheckATermList(g_20), x_50);
                l_4 = t;
                t = SSLsetAnnotations(l_4, a_20);
              }
            }
        }
      }
    return(t);
  }
  t = r_33;
  t = b_51(t);
  return(t);
}
ATerm foldr_3_0 (ATerm z_95 (ATerm), ATerm a_96 (ATerm), ATerm b_96 (ATerm), ATerm t)
{
  ATerm e_51 = NULL,f_51 = NULL,g_51 = NULL;
  e_51 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_51;
      t = z_95(t);
    }
  else
    {
      ATerm j_51 = NULL,k_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_51 = ATgetFirst((ATermList) t);
          g_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_51;
      t = b_96(t);
      j_51 = t;
      t = g_51;
      t = foldr_3_0(z_95, a_96, b_96, t);
      k_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_51, k_51);
      t = a_96(t);
    }
  return(t);
}
ATerm o_7 (ATerm b_94 (ATerm), ATerm c_94 (ATerm), ATerm v_33, ATerm u_33, ATerm t)
{
  t = c_94(t);
  {
    ATerm f_4 (ATerm t)
    {
      ATerm p_51 = NULL;
      p_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_33, p_51);
      t = b_94(t);
      return(t);
    }
    t = fetch_1_0(f_4, t);
    t = u_33;
  }
  return(t);
}
ATerm p_7 (ATerm t_93 (ATerm), ATerm p_33, ATerm o_33, ATerm t)
{
  ATerm k_52 (ATerm t)
  {
    ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL;
    f_52 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_52;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_52 = ATgetFirst((ATermList) t);
            h_52 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm u_23 = t;
          int x_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_52;
              {
                ATerm k_4 (ATerm t)
                {
                  t = o_33;
                  return(t);
                }
                t = o_7(t_93, k_4, g_52, h_52, t);
                t = k_52(t);
              }
              ;
              LocalPopChoice(x_23);
            }
          else
            {
              t = u_23;
              {
                ATerm s_20 = NULL,w_20 = NULL,g_5 = NULL;
                t = SSLgetAnnotations(f_52);
                s_20 = t;
                t = h_52;
                t = k_52(t);
                w_20 = t;
                t = (ATerm) ATinsert(CheckATermList(w_20), g_52);
                g_5 = t;
                t = SSLsetAnnotations(g_5, s_20);
              }
            }
        }
      }
    return(t);
  }
  t = p_33;
  t = k_52(t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_23 = ATgetArgument(t, 0);
      if(((ATgetType(z_23) != AT_LIST) || !(ATisEmpty(z_23))))
        _fail(t);
      {
        ATerm a_24 = ATgetArgument(t, 1);
        if(((ATgetType(a_24) != AT_LIST) || !(ATisEmpty(a_24))))
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
  ATerm s_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_24 = ATgetArgument(t, 0);
      if(((ATgetType(b_24) == AT_LIST) && !(ATisEmpty(b_24))))
        {
          s_52 = ATgetFirst((ATermList) b_24);
          t_52 = (ATerm) ATgetNext((ATermList) b_24);
        }
      else
        _fail(t);
      {
        ATerm c_24 = ATgetArgument(t, 1);
        if(((ATgetType(c_24) == AT_LIST) && !(ATisEmpty(c_24))))
          {
            u_52 = ATgetFirst((ATermList) c_24);
            v_52 = (ATerm) ATgetNext((ATermList) c_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_52, u_52), (ATerm) ATmakeAppl(sym__2, t_52, v_52));
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm w_52 = NULL,x_52 = NULL;
  if(match_cons(t, sym__2))
    {
      w_52 = ATgetArgument(t, 0);
      x_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_52), w_52);
  return(t);
}
ATerm r_7 (ATerm v_621, ATerm a_622, ATerm w_60, ATerm t)
{
  ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL;
  t = SSL_explode_term(a_622);
  if(match_cons(t, sym__2))
    {
      n_52 = ATgetArgument(t, 0);
      p_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(v_621);
  if(match_cons(t, sym__2))
    {
      if((n_52 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      o_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_52, p_52);
  t = genzip_4_0(m_4, n_4, p_4, _id, t);
  q_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_52, w_60);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm f_84 (ATerm), ATerm g_84 (ATerm), ATerm t)
{
  ATerm d_53 (ATerm t)
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_84(t);
        ;
        LocalPopChoice(e_24);
      }
    else
      {
        t = d_24;
        t = g_84(t);
        t = d_53(t);
      }
    return(t);
  }
  t = d_53(t);
  return(t);
}
ATerm for_3_0 (ATerm i_84 (ATerm), ATerm j_84 (ATerm), ATerm k_84 (ATerm), ATerm t)
{
  t = i_84(t);
  t = while_not_2_0(j_84, k_84, t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm k_53 = NULL;
  k_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, k_53);
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm l_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL,x_5 = NULL;
  q_53 = t;
  if(match_cons(t, sym__2))
    {
      o_53 = ATgetArgument(t, 0);
      p_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_53);
  l_53 = t;
  t = p_53;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_53, p_53);
  x_5 = t;
  t = SSLsetAnnotations(x_5, l_53);
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL;
  q_54 = t;
  if(match_cons(t, sym__2))
    {
      r_54 = ATgetArgument(t, 0);
      s_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_54;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_54 = ATgetFirst((ATermList) t);
      u_54 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_24 = t;
        int l_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_55(r_54, s_54, q_54, t);
            ;
            LocalPopChoice(l_24);
          }
        else
          {
            t = f_24;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_54), t_54), u_54);
          }
      }
    }
  else
    {
      t = k_55(r_54, s_54, q_54, t);
    }
  return(t);
}
ATerm k_55 (ATerm r_53, ATerm s_53, ATerm t_53, ATerm t)
{
  ATerm u_53 = NULL,y_53 = NULL,y_5 = NULL,c_54 = NULL,d_54 = NULL,e_54 = NULL,f_54 = NULL;
  t = SSLgetAnnotations(t_53);
  u_53 = t;
  t = s_53;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_54 = ATgetFirst((ATermList) t);
      f_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_54;
  if(match_cons(t, sym__2))
    {
      d_54 = ATgetArgument(t, 0);
      e_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_54;
        if((d_54 != t))
          {
            _fail(t);
          }
        t = f_54;
        ;
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
        t = s_53;
        t = r_7(d_54, e_54, f_54, t);
      }
    y_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_53, y_53);
    y_5 = t;
    t = SSLsetAnnotations(y_5, u_53);
  }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm j_55 = NULL;
  if(match_cons(t, sym__2))
    {
      j_55 = ATgetArgument(t, 0);
      if((j_55 != ATgetArgument(t, 1)))
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
  ATerm p_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(q_4, u_4, w_4, t);
      ;
      LocalPopChoice(q_24);
    }
  else
    {
      t = p_24;
      {
        ATerm e_55 = NULL,f_55 = NULL,g_55 = NULL;
        e_55 = t;
        if(match_cons(t, sym__2))
          {
            f_55 = ATgetArgument(t, 0);
            g_55 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_55;
        t = p_7(x_4, f_55, g_55, t);
      }
    }
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL;
  if(match_cons(t, sym__2))
    {
      m_21 = ATgetArgument(t, 0);
      n_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(c_5, m_21, n_21, t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm o_21 = NULL;
  if(match_cons(t, sym__2))
    {
      o_21 = ATgetArgument(t, 0);
      if((o_21 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL;
  if(match_cons(t, sym__2))
    {
      d_22 = ATgetArgument(t, 0);
      e_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(i_5, d_22, e_22, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm f_22 = NULL;
  if(match_cons(t, sym__2))
    {
      f_22 = ATgetArgument(t, 0);
      if((f_22 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm f_111 (ATerm), ATerm g_111 (ATerm), ATerm h_111 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm n_56 (ATerm t)
  {
    ATerm t_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_111(t);
        ;
        LocalPopChoice(u_24);
      }
    else
      {
        t = t_24;
        {
          ATerm v_24 = t;
          int w_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_55 = NULL,y_55 = NULL,f_21 = NULL,i_21 = NULL;
              m_55 = t;
              t = g_111(t);
              y_55 = t;
              t = m_55;
              {
                ATerm y_4 (ATerm t)
                {
                  ATerm a_56 = NULL;
                  t = n_56(t);
                  a_56 = t;
                  t = (ATerm) ATmakeAppl(sym__2, a_56, y_55);
                  t = diff_0_0(t);
                  return(t);
                }
                t = h_111(y_4, n_56, z_4, t);
                i_21 = t;
                t = SSL_explode_term(i_21);
                if(match_cons(t, sym__2))
                  {
                    ATerm x_24 = ATgetArgument(t, 0);
                    f_21 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = f_21;
                t = foldr_3_0(a_5, b_5, _id, t);
              }
              ;
              LocalPopChoice(w_24);
            }
          else
            {
              t = v_24;
              {
                ATerm q_21 = NULL,r_21 = NULL;
                r_21 = t;
                t = SSL_explode_term(r_21);
                if(match_cons(t, sym__2))
                  {
                    ATerm y_24 = ATgetArgument(t, 0);
                    q_21 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = q_21;
                t = foldr_3_0(d_5, e_5, n_56, t);
              }
            }
        }
      }
    return(t);
  }
  t = n_56(t);
  return(t);
}
ATerm Var_1_0 (ATerm u_69 (ATerm), ATerm t)
{
  ATerm r_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL,b_6 = NULL;
  c_57 = t;
  if(match_cons(t, sym_Var_1))
    {
      a_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_57);
  r_56 = t;
  t = a_57;
  t = u_69(t);
  b_57 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, b_57);
  b_6 = t;
  t = SSLsetAnnotations(b_6, r_56);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm h_58 = NULL,p_58 = NULL,q_58 = NULL,a_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL;
  q_58 = t;
  if(match_cons(t, sym__2))
    {
      a_59 = ATgetArgument(t, 0);
      g_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_59;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_59 = ATgetFirst((ATermList) t);
      i_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_59;
  if(match_cons(t, sym__2))
    {
      h_58 = ATgetArgument(t, 0);
      p_58 = ATgetArgument(t, 1);
      {
        ATerm z_24 = t;
        int a_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_58;
            if((a_59 != t))
              {
                _fail(t);
              }
            t = p_58;
            ;
            LocalPopChoice(a_25);
          }
        else
          {
            t = z_24;
            t = (ATerm) ATmakeAppl(sym__2, a_59, i_59);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, a_59, i_59);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm u_7 (ATerm a_110 (ATerm), ATerm b_110 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm d_59, ATerm c_59, ATerm b_59, ATerm t)
{
  ATerm r_5 (ATerm t)
  {
    ATerm e_57 = NULL;
    e_57 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_57, b_59);
    t = a_110(t);
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    ATerm f_57 = NULL;
    f_57 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_57, c_59);
    t = a_110(t);
    return(t);
  }
  t = d_59;
  t = b_110(r_5, s_5, _id, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm t_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_25 = ATgetArgument(t, 0);
      if(((ATgetType(c_25) != AT_LIST) || !(ATisEmpty(c_25))))
        _fail(t);
      {
        ATerm d_25 = ATgetArgument(t, 1);
        if(((ATgetType(d_25) != AT_LIST) || !(ATisEmpty(d_25))))
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
  ATerm q_57 = NULL,r_57 = NULL,s_57 = NULL,t_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_25 = ATgetArgument(t, 0);
      if(((ATgetType(g_25) == AT_LIST) && !(ATisEmpty(g_25))))
        {
          q_57 = ATgetFirst((ATermList) g_25);
          r_57 = (ATerm) ATgetNext((ATermList) g_25);
        }
      else
        _fail(t);
      {
        ATerm h_25 = ATgetArgument(t, 1);
        if(((ATgetType(h_25) == AT_LIST) && !(ATisEmpty(h_25))))
          {
            s_57 = ATgetFirst((ATermList) h_25);
            t_57 = (ATerm) ATgetNext((ATermList) h_25);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_57, s_57), (ATerm) ATmakeAppl(sym__2, r_57, t_57));
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm u_57 = NULL,v_57 = NULL;
  if(match_cons(t, sym__2))
    {
      u_57 = ATgetArgument(t, 0);
      v_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_57), u_57);
  return(t);
}
ATerm v_7 (ATerm u_109 (ATerm), ATerm v_109 (ATerm (ATerm), ATerm), ATerm v_58, ATerm y_58, ATerm t)
{
  ATerm i_57 = NULL,j_57 = NULL,m_57 = NULL,n_57 = NULL,p_57 = NULL;
  t = v_58;
  t = u_109(t);
  i_57 = t;
  t = map_1_0(new_0_0, t);
  j_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_57, j_57);
  t = genzip_4_0(t_5, u_5, v_5, _id, t);
  p_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_57, y_58);
  t = conc_0_0(t);
  m_57 = t;
  t = v_58;
  {
    ATerm w_5 (ATerm t)
    {
      t = j_57;
      return(t);
    }
    t = v_109(w_5, t);
    n_57 = t;
    t = (ATerm) ATmakeAppl(sym__3, n_57, y_58, m_57);
  }
  return(t);
}
ATerm env_alltd_1_0 (ATerm e_89 (ATerm), ATerm t)
{
  ATerm i_60 (ATerm t)
  {
    ATerm i_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_89(t);
        ;
        LocalPopChoice(j_25);
      }
    else
      {
        t = i_25;
        {
          ATerm d_60 = NULL,e_60 = NULL,h_60 = NULL;
          ATerm z_5 (ATerm t)
          {
            ATerm r_22 = NULL;
            r_22 = t;
            t = (ATerm) ATmakeAppl(sym__2, r_22, not_null(h_60));
            t = i_60(t);
            return(t);
          }
          d_60 = t;
          if(match_cons(t, sym__2))
            {
              e_60 = ATgetArgument(t, 0);
              if(((h_60 != NULL) && (h_60 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                h_60 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_60;
          t = SRTS_all(z_5, t);
        }
      }
    return(t);
  }
  t = i_60(t);
  return(t);
}
ATerm a_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_25 = ATgetArgument(t, 0);
      if(((ATgetType(n_25) != AT_LIST) || !(ATisEmpty(n_25))))
        _fail(t);
      {
        ATerm p_25 = ATgetArgument(t, 1);
        if(((ATgetType(p_25) != AT_LIST) || !(ATisEmpty(p_25))))
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
  ATerm g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_25 = ATgetArgument(t, 0);
      if(((ATgetType(q_25) == AT_LIST) && !(ATisEmpty(q_25))))
        {
          g_61 = ATgetFirst((ATermList) q_25);
          h_61 = (ATerm) ATgetNext((ATermList) q_25);
        }
      else
        _fail(t);
      {
        ATerm s_25 = ATgetArgument(t, 1);
        if(((ATgetType(s_25) == AT_LIST) && !(ATisEmpty(s_25))))
          {
            i_61 = ATgetFirst((ATermList) s_25);
            j_61 = (ATerm) ATgetNext((ATermList) s_25);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_61, i_61), (ATerm) ATmakeAppl(sym__2, h_61, j_61));
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm l_61 = NULL,m_61 = NULL;
  if(match_cons(t, sym__2))
    {
      l_61 = ATgetArgument(t, 0);
      m_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_61), l_61);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL;
  m_60 = t;
  {
    ATerm t_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_25 = ATgetArgument(t, 0);
            ATerm w_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(u_25);
        t = m_60;
      }
    else
      {
        t = t_25;
        {
          ATerm f_61 = NULL;
          if(match_cons(t, sym__3))
            {
              n_60 = ATgetArgument(t, 0);
              o_60 = ATgetArgument(t, 1);
              p_60 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, n_60, o_60);
          t = genzip_4_0(a_6, c_6, d_6, _id, t);
          f_61 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_61, p_60);
        }
      }
  }
  return(t);
}
ATerm substitute_6_0 (ATerm b_109 (ATerm), ATerm c_109 (ATerm (ATerm), ATerm), ATerm d_109 (ATerm), ATerm e_109 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm f_109 (ATerm (ATerm), ATerm), ATerm g_109 (ATerm), ATerm t)
{
  ATerm u_61 = NULL,x_61 = NULL;
  ATerm a_63 (ATerm t)
  {
    ATerm g_6 (ATerm t)
    {
      ATerm b_63 (ATerm y_61, ATerm t)
      {
        ATerm z_61 = NULL,x_22 = NULL;
        t = SSL_explode_term(y_61);
        if(match_cons(t, sym__2))
          {
            ATerm x_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) x_25) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm y_25 = ATgetArgument(t, 1);
              if(((ATgetType(y_25) == AT_LIST) && !(ATisEmpty(y_25))))
                {
                  z_61 = ATgetFirst((ATermList) y_25);
                  {
                    ATerm b_26 = (ATerm) ATgetNext((ATermList) y_25);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = z_61;
        t = b_109(t);
        x_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_22, not_null(x_61));
        t = lookup_0_0(t);
        t = g_109(t);
        return(t);
      }
      ATerm c_63 (ATerm g_62, ATerm i_62, ATerm j_62, ATerm t)
      {
        ATerm k_62 = NULL,l_62 = NULL,n_62 = NULL;
        t = j_62;
        t = v_7(d_109, f_109, g_62, i_62, t);
        if(match_cons(t, sym__3))
          {
            k_62 = ATgetArgument(t, 0);
            l_62 = ATgetArgument(t, 1);
            n_62 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = u_7(a_63, e_109, k_62, l_62, n_62, t);
        return(t);
      }
      ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL;
      r_62 = t;
      if(match_cons(t, sym__2))
        {
          s_62 = ATgetArgument(t, 0);
          t_62 = ATgetArgument(t, 1);
          {
            ATerm h_26 = t;
            int i_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_6 (ATerm t)
                {
                  ATerm z_62 = NULL;
                  z_62 = t;
                  t = (ATerm) ATmakeAppl(sym__2, z_62, t_62);
                  t = lookup_0_0(t);
                  return(t);
                }
                t = s_62;
                t = c_109(j_6, t);
                ;
                LocalPopChoice(i_26);
              }
            else
              {
                t = h_26;
                {
                  ATerm j_26 = t;
                  int k_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = b_63(r_62, t);
                      ;
                      LocalPopChoice(k_26);
                    }
                  else
                    {
                      t = j_26;
                      t = c_63(s_62, t_62, r_62, t);
                    }
                }
              }
          }
        }
      else
        {
          t = b_63(r_62, t);
        }
      return(t);
    }
    t = env_alltd_1_0(g_6, t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((x_61 != NULL) && (x_61 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_61 = ATgetArgument(t, 0);
      u_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_61, (ATerm) ATempty);
  t = a_63(t);
  return(t);
}
ATerm genzip_4_0 (ATerm i_92 (ATerm), ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm t)
{
  ATerm n_63 (ATerm t)
  {
    ATerm m_26 = t;
    int n_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_92(t);
        ;
        LocalPopChoice(n_26);
      }
    else
      {
        t = m_26;
        {
          ATerm e_63 = NULL,f_63 = NULL,i_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL,e_6 = NULL;
          t = j_92(t);
          m_63 = t;
          if(match_cons(t, sym__2))
            {
              f_63 = ATgetArgument(t, 0);
              i_63 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_63);
          e_63 = t;
          t = f_63;
          t = l_92(t);
          k_63 = t;
          t = i_63;
          t = n_63(t);
          l_63 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_63, l_63);
          e_6 = t;
          t = SSLsetAnnotations(e_6, e_63);
          t = k_92(t);
        }
      }
    return(t);
  }
  t = n_63(t);
  return(t);
}
ATerm y_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_26 = ATgetArgument(t, 0);
      if(((ATgetType(p_26) != AT_LIST) || !(ATisEmpty(p_26))))
        _fail(t);
      {
        ATerm q_26 = ATgetArgument(t, 1);
        if(((ATgetType(q_26) != AT_LIST) || !(ATisEmpty(q_26))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm l_64 = NULL,m_64 = NULL,n_64 = NULL,q_64 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_26 = ATgetArgument(t, 0);
      if(((ATgetType(r_26) == AT_LIST) && !(ATisEmpty(r_26))))
        {
          l_64 = ATgetFirst((ATermList) r_26);
          m_64 = (ATerm) ATgetNext((ATermList) r_26);
        }
      else
        _fail(t);
      {
        ATerm t_26 = ATgetArgument(t, 1);
        if(((ATgetType(t_26) == AT_LIST) && !(ATisEmpty(t_26))))
          {
            n_64 = ATgetFirst((ATermList) t_26);
            q_64 = (ATerm) ATgetNext((ATermList) t_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_64, n_64), (ATerm) ATmakeAppl(sym__2, m_64, q_64));
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm r_64 = NULL,s_64 = NULL;
  if(match_cons(t, sym__2))
    {
      r_64 = ATgetArgument(t, 0);
      s_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_64), r_64);
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm u_64 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_64;
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm u_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(v_26);
    }
  else
    {
      t = u_26;
      {
        ATerm y_64 = NULL,z_64 = NULL,a_65 = NULL,d_65 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            y_64 = ATgetArgument(t, 0);
            t = y_64;
            t = free_vars_3_0(z_7, a_8, tboundin_3_0, t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                y_64 = ATgetArgument(t, 0);
                z_64 = ATgetArgument(t, 1);
                a_65 = ATgetArgument(t, 2);
                d_65 = ATgetArgument(t, 3);
                t = a_65;
                t = map_1_0(n_8, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    y_64 = ATgetArgument(t, 0);
                    z_64 = ATgetArgument(t, 1);
                    a_65 = ATgetArgument(t, 2);
                    d_65 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = a_65;
                t = map_1_0(o_8, t);
              }
          }
      }
    }
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm f_65 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_65);
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm w_26 = t;
  int x_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(x_26);
    }
  else
    {
      t = w_26;
      {
        ATerm z_26 = t;
        int a_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            ;
            LocalPopChoice(a_27);
          }
        else
          {
            t = z_26;
            {
              ATerm i_65 = NULL,j_65 = NULL,k_65 = NULL,l_65 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  i_65 = ATgetArgument(t, 0);
                  j_65 = ATgetArgument(t, 1);
                  k_65 = ATgetArgument(t, 2);
                  l_65 = ATgetArgument(t, 3);
                  t = k_65;
                  t = map_1_0(b_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      i_65 = ATgetArgument(t, 0);
                      j_65 = ATgetArgument(t, 1);
                      k_65 = ATgetArgument(t, 2);
                      l_65 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_65;
                  t = map_1_0(c_8, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm u_65 = NULL;
  ATerm c_27 = t;
  int d_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_65 = ATgetArgument(t, 0);
          {
            ATerm e_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_27);
      t = u_65;
    }
  else
    {
      t = c_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_65 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_65;
    }
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm d_66 = NULL;
  ATerm f_27 = t;
  int g_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_66 = ATgetArgument(t, 0);
          {
            ATerm h_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_27);
      t = d_66;
    }
  else
    {
      t = f_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_66;
    }
  return(t);
}
ATerm n_8 (ATerm t)
{
  ATerm n_66 = NULL;
  ATerm j_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_66 = ATgetArgument(t, 0);
          {
            ATerm m_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_27);
      t = n_66;
    }
  else
    {
      t = j_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_66;
    }
  return(t);
}
ATerm o_8 (ATerm t)
{
  ATerm y_66 = NULL;
  ATerm n_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_66 = ATgetArgument(t, 0);
          {
            ATerm q_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_27);
      t = y_66;
    }
  else
    {
      t = n_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_66;
    }
  return(t);
}
ATerm d_8 (ATerm p_82 (ATerm), ATerm f_20, ATerm h_20, ATerm t)
{
  ATerm z_63 = NULL,c_64 = NULL;
  t = p_82(t);
  {
    ATerm v_6 (ATerm t)
    {
      ATerm e_64 = NULL,j_64 = NULL,k_64 = NULL;
      e_64 = t;
      if(match_cons(t, sym_Overlay_3))
        {
          if((f_20 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          j_64 = ATgetArgument(t, 1);
          k_64 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, j_64, h_20);
      t = genzip_4_0(y_6, a_7, c_7, _id, t);
      if(((z_63 != NULL) && (z_63 != t)))
        _fail(t);
      else
        z_63 = t;
      t = k_64;
      if(((c_64 != NULL) && (c_64 != t)))
        _fail(t);
      else
        c_64 = t;
      t = e_64;
      return(t);
    }
    t = fetch_1_0(v_6, t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_63), not_null(c_64));
    t = substitute_6_0(d_7, Var_1_0, y_7, tboundin_3_0, tpaste_1_0, _id, t);
  }
  return(t);
}
ATerm topdown_1_0 (ATerm o_84 (ATerm), ATerm t)
{
  ATerm w_8 (ATerm t)
  {
    t = topdown_1_0(o_84, t);
    return(t);
  }
  t = o_84(t);
  t = SRTS_all(w_8, t);
  return(t);
}
ATerm Trm_to_Cong_0_0 (ATerm t)
{
  ATerm k_67 = NULL,m_67 = NULL;
  ATerm r_27 = t;
  int t_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_BuildDefault_1))
        {
          ATerm v_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(t_27);
      t = term_f_13;
    }
  else
    {
      t = r_27;
      if(match_cons(t, sym_Real_1))
        {
          m_67 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, m_67));
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              m_67 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, m_67));
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  m_67 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, m_67));
                }
              else
                {
                  if(match_cons(t, sym_Anno_2))
                    {
                      m_67 = ATgetArgument(t, 0);
                      k_67 = ATgetArgument(t, 1);
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_x_27, (ATerm)ATinsert(ATinsert(ATempty, k_67), m_67), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(t, sym_Op_2))
                        {
                          m_67 = ATgetArgument(t, 0);
                          k_67 = ATgetArgument(t, 1);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_67), k_67, (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_Var_1))
                            {
                              m_67 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_67), (ATerm)ATempty, (ATerm) ATempty);
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
  ATerm t_68 = NULL,u_68 = NULL,v_68 = NULL;
  v_68 = t;
  if(match_cons(t, sym_Op_2))
    {
      t_68 = ATgetArgument(t, 0);
      u_68 = ATgetArgument(t, 1);
      {
        ATerm z_27 = t;
        int a_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_23 = NULL,y_23 = NULL,l_7 = NULL;
            t = SSLgetAnnotations(v_68);
            g_23 = t;
            t = u_68;
            t = map_1_0(trm_to_cong_0_0, t);
            y_23 = t;
            t = (ATerm) ATmakeAppl(sym_Op_2, t_68, y_23);
            l_7 = t;
            t = SSLsetAnnotations(l_7, g_23);
            ;
            LocalPopChoice(a_28);
          }
        else
          {
            t = z_27;
            t = v_68;
          }
      }
    }
  else
    {
      t = v_68;
    }
  t = Trm_to_Cong_0_0(t);
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm h_69 = NULL;
  h_69 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, h_69, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_15), term_b_15));
  return(t);
}
ATerm i_7 (ATerm n_20, ATerm q_20, ATerm p_20, ATerm t)
{
  ATerm a_69 = NULL,b_69 = NULL;
  t = q_20;
  t = map_1_0(y_8, t);
  a_69 = t;
  t = p_20;
  t = trm_to_cong_0_0(t);
  b_69 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, n_20, a_69, b_69);
  return(t);
}
ATerm repeat_1_0 (ATerm q_83 (ATerm), ATerm t)
{
  ATerm o_69 (ATerm t)
  {
    ATerm c_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_83(t);
        t = o_69(t);
        ;
        LocalPopChoice(d_28);
      }
    else
      {
        t = c_28;
      }
    return(t);
  }
  t = o_69(t);
  return(t);
}
ATerm e_9 (ATerm t)
{
  ATerm j_70 = NULL,k_70 = NULL,o_70 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      j_70 = ATgetArgument(t, 0);
      k_70 = ATgetArgument(t, 1);
      o_70 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = i_7(j_70, k_70, o_70, t);
  return(t);
}
ATerm e_8 (ATerm e_19, ATerm g_19, ATerm f_19, ATerm t)
{
  ATerm y_69 = NULL,z_69 = NULL,a_70 = NULL,b_70 = NULL;
  t = g_19;
  {
    ATerm g_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_8 (ATerm t)
        {
          ATerm a_9 (ATerm t)
          {
            ATerm d_70 = NULL,g_70 = NULL;
            ATerm d_9 (ATerm t)
            {
              t = g_19;
              return(t);
            }
            if(match_cons(t, sym_Op_2))
              {
                d_70 = ATgetArgument(t, 0);
                g_70 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = d_8(d_9, d_70, g_70, t);
            return(t);
          }
          t = repeat_1_0(a_9, t);
          return(t);
        }
        ATerm j_28 = t;
        if((PushChoice() == 0))
          {
            t = g_19;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = j_28;
          }
        t = g_19;
        t = topdown_1_0(z_8, t);
        ;
        LocalPopChoice(h_28);
      }
    else
      {
        t = g_28;
      }
    y_69 = t;
    t = g_19;
    t = map_1_0(e_9, t);
    a_70 = t;
    t = f_19;
    {
      ATerm k_28 = t;
      int l_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_9 (ATerm t)
          {
            ATerm m_28 = t;
            int n_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_24 = NULL,j_24 = NULL;
                ATerm h_9 (ATerm t)
                {
                  t = y_69;
                  return(t);
                }
                if(match_cons(t, sym_Op_2))
                  {
                    i_24 = ATgetArgument(t, 0);
                    j_24 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = d_8(h_9, i_24, j_24, t);
                ;
                LocalPopChoice(n_28);
              }
            else
              {
                t = m_28;
              }
            return(t);
          }
          ATerm p_28 = t;
          if((PushChoice() == 0))
            {
              t = y_69;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = p_28;
            }
          t = f_19;
          t = topdown_1_0(g_9, t);
          ;
          LocalPopChoice(l_28);
        }
      else
        {
          t = k_28;
        }
      b_70 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_70, b_70);
      t = conc_0_0(t);
      z_69 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, z_69)), (ATerm) ATmakeAppl(sym_Signature_1, e_19)));
    }
  }
  return(t);
}
ATerm f_8 (ATerm v_46, ATerm w_46, ATerm t)
{
  ATerm w_70 = NULL;
  t = SSL_fputc(v_46, w_46);
  w_70 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_70);
  return(t);
}
ATerm g_8 (ATerm j_50, ATerm k_50, ATerm t)
{
  ATerm x_70 = NULL;
  t = SSL_write_term_to_stream_text(j_50, k_50);
  x_70 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_70);
  return(t);
}
ATerm i_8 (ATerm r_102 (ATerm), ATerm f_466, ATerm n_50, ATerm t)
{
  ATerm y_70 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_466, term_q_28);
  t = l_8(t);
  y_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_70, n_50);
  t = r_102(t);
  t = fclose_0_0(t);
  t = n_50;
  return(t);
}
ATerm h_8 (ATerm f_50, ATerm g_50, ATerm t)
{
  ATerm z_70 = NULL;
  t = SSL_write_term_to_stream_baf(f_50, g_50);
  z_70 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_70);
  return(t);
}
ATerm i_9 (ATerm t)
{
  ATerm c_71 = NULL,d_71 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_28 = ATgetArgument(t, 0);
      if(match_cons(r_28, sym_Stream_1))
        {
          c_71 = ATgetArgument(r_28, 0);
        }
      else
        _fail(t);
      d_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_8(c_71, d_71, t);
  return(t);
}
ATerm l_9 (ATerm t)
{
  ATerm e_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_28 = ATgetArgument(t, 0);
      if(match_cons(s_28, sym_Stream_1))
        {
          h_71 = ATgetArgument(s_28, 0);
        }
      else
        _fail(t);
      i_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_8(h_71, i_71, t);
  e_71 = t;
  t = term_t_28;
  f_71 = t;
  t = e_71;
  if(match_cons(t, sym_Stream_1))
    {
      g_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_t_28, e_71);
  t = f_8(f_71, g_71, t);
  return(t);
}
ATerm output_1_0 (ATerm a_107 (ATerm), ATerm t)
{
  ATerm a_71 = NULL,b_71 = NULL;
  t = a_107(t);
  b_71 = t;
  {
    ATerm v_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_28;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(x_28);
      }
    else
      {
        t = v_28;
        t = term_z_28;
      }
    a_71 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_71, b_71);
    {
      ATerm a_29 = t;
      int b_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_c_29;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, a_71, b_71);
          LocalPopChoice(b_29);
          if(match_cons(t, sym__2))
            {
              ATerm d_29 = ATgetArgument(t, 0);
              ATerm e_29 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_8(i_9, a_71, b_71, t);
        }
      else
        {
          t = a_29;
          if(match_cons(t, sym__2))
            {
              ATerm f_29 = ATgetArgument(t, 0);
              ATerm g_29 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_8(l_9, a_71, b_71, t);
        }
    }
  }
  return(t);
}
ATerm w_71 (ATerm q_71, ATerm t)
{
  t = SSL_fclose(q_71);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_71 = NULL,u_71 = NULL;
  u_71 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_71 = ATgetArgument(t, 0);
      {
        ATerm i_29 = t;
        int j_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_71);
            ;
            LocalPopChoice(j_29);
          }
        else
          {
            t = i_29;
            t = w_71(u_71, t);
          }
      }
    }
  else
    {
      t = w_71(u_71, t);
    }
  return(t);
}
ATerm j_8 (ATerm l_50, ATerm t)
{
  t = SSL_read_term_from_stream(l_50);
  return(t);
}
ATerm k_8 (ATerm x_46, ATerm y_46, ATerm t)
{
  ATerm x_71 = NULL;
  t = SSL_fopen(x_46, y_46);
  x_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_71);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_71 = NULL;
  t = SSL_stdin_stream();
  y_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_71);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_71 = NULL;
  t = SSL_stdout_stream();
  z_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_71);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_72 = NULL;
  t = SSL_stderr_stream();
  a_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_72);
  return(t);
}
ATerm o_73 (ATerm g_72, ATerm t)
{
  ATerm h_72 = NULL;
  t = SSL_explode_term(g_72);
  if(match_cons(t, sym__2))
    {
      ATerm k_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_29 = ATgetArgument(t, 1);
        if(((ATgetType(l_29) == AT_LIST) && !(ATisEmpty(l_29))))
          {
            h_72 = ATgetFirst((ATermList) l_29);
            {
              ATerm m_29 = (ATerm) ATgetNext((ATermList) l_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_72;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_72;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_72;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_72;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm p_73 (ATerm m_72, ATerm s_72, ATerm t_72, ATerm t)
{
  ATerm u_72 = NULL,v_72 = NULL,w_72 = NULL,z_72 = NULL,k_21 = NULL;
  t = SSLgetAnnotations(t_72);
  w_72 = t;
  t = m_72;
  if(match_cons(t, sym_Path_1))
    {
      z_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_72, s_72);
  k_21 = t;
  t = SSLsetAnnotations(k_21, w_72);
  if(match_cons(t, sym__2))
    {
      u_72 = ATgetArgument(t, 0);
      v_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_8(u_72, v_72, t);
  return(t);
}
ATerm q_73 (ATerm b_73, ATerm c_73, ATerm d_73, ATerm t)
{
  ATerm e_73 = NULL,f_73 = NULL,g_73 = NULL,j_73 = NULL,l_21 = NULL;
  t = SSLgetAnnotations(d_73);
  g_73 = t;
  t = SSL_is_string(b_73);
  j_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_73, c_73);
  l_21 = t;
  t = SSLsetAnnotations(l_21, g_73);
  if(match_cons(t, sym__2))
    {
      e_73 = ATgetArgument(t, 0);
      f_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_8(e_73, f_73, t);
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm l_73 = NULL,m_73 = NULL,n_73 = NULL;
  l_73 = t;
  if(match_cons(t, sym__2))
    {
      m_73 = ATgetArgument(t, 0);
      n_73 = ATgetArgument(t, 1);
      {
        ATerm n_29 = t;
        int o_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_73(l_73, t);
            ;
            LocalPopChoice(o_29);
          }
        else
          {
            t = n_29;
            {
              ATerm q_29 = t;
              int r_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_73(m_73, n_73, l_73, t);
                  ;
                  LocalPopChoice(r_29);
                }
              else
                {
                  t = q_29;
                  t = q_73(m_73, n_73, l_73, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_73(l_73, t);
    }
  return(t);
}
ATerm m_9 (ATerm t)
{
  t = term_s_29;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_73 = NULL,s_73 = NULL,t_73 = NULL;
  ATerm t_29 = t;
  int u_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_73 = NULL;
      u_73 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_73, term_v_29);
      t = l_8(t);
      ;
      LocalPopChoice(u_29);
    }
  else
    {
      t = t_29;
      t = debug_1_0(m_9, t);
      _fail(t);
    }
  s_73 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_8(t_73, t);
  r_73 = t;
  t = s_73;
  t = fclose_0_0(t);
  t = r_73;
  return(t);
}
ATerm input_1_0 (ATerm b_107 (ATerm), ATerm t)
{
  ATerm w_29 = t;
  int x_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_29;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_29);
    }
  else
    {
      t = w_29;
      t = term_z_29;
    }
  t = ReadFromFile_0_0(t);
  t = b_107(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm w_73 = NULL,x_73 = NULL,y_73 = NULL,z_73 = NULL,a_74 = NULL;
  w_73 = t;
  t = term_m_17;
  t = whoami_0_0(t);
  x_73 = t;
  t = term_a_30;
  z_73 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_30), x_73), term_b_30);
  a_74 = t;
  t = SSL_printnl(z_73, a_74);
  t = term_t_17;
  y_73 = t;
  t = SSL_exit(y_73);
  t = w_73;
  return(t);
}
ATerm n_9 (ATerm t)
{
  ATerm c_74 = NULL;
  c_74 = t;
  if(match_string(t, "-k"))
    {
      t = c_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_74;
    }
  return(t);
}
ATerm o_9 (ATerm t)
{
  ATerm d_74 = NULL,e_74 = NULL,f_74 = NULL;
  d_74 = t;
  t = SSL_string_to_int(d_74);
  e_74 = t;
  t = term_d_30;
  f_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_30, e_74);
  t = t_8(f_74, e_74, t);
  t = d_74;
  return(t);
}
ATerm p_9 (ATerm t)
{
  t = term_e_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_9, o_9, p_9, t);
  return(t);
}
ATerm q_9 (ATerm t)
{
  ATerm h_74 = NULL;
  h_74 = t;
  if(match_string(t, "-S"))
    {
      t = h_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = h_74;
    }
  return(t);
}
ATerm r_9 (ATerm t)
{
  ATerm i_74 = NULL,j_74 = NULL;
  t = term_f_30;
  i_74 = t;
  t = term_s_17;
  j_74 = t;
  t = term_g_30;
  t = t_8(i_74, j_74, t);
  t = term_h_30;
  return(t);
}
ATerm s_9 (ATerm t)
{
  t = term_i_30;
  return(t);
}
ATerm u_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_9 (ATerm t)
{
  ATerm k_74 = NULL,l_74 = NULL,m_74 = NULL;
  k_74 = t;
  t = SSL_string_to_int(k_74);
  l_74 = t;
  t = term_f_30;
  m_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_30, l_74);
  t = t_8(m_74, l_74, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, k_74);
  return(t);
}
ATerm w_9 (ATerm t)
{
  t = term_j_30;
  return(t);
}
ATerm z_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_10 (ATerm t)
{
  ATerm n_74 = NULL,o_74 = NULL;
  t = term_k_30;
  n_74 = t;
  t = term_m_17;
  o_74 = t;
  t = term_l_30;
  t = t_8(n_74, o_74, t);
  t = term_m_30;
  return(t);
}
ATerm d_10 (ATerm t)
{
  t = term_n_30;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_30 = t;
  int p_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_9, r_9, s_9, t);
      ;
      LocalPopChoice(p_30);
    }
  else
    {
      t = o_30;
      {
        ATerm r_30 = t;
        int s_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(u_9, v_9, w_9, t);
            ;
            LocalPopChoice(s_30);
          }
        else
          {
            t = r_30;
            t = Option_3_0(z_9, b_10, d_10, t);
          }
      }
    }
  return(t);
}
ATerm t_8 (ATerm m_51, ATerm n_51, ATerm t)
{
  ATerm p_74 = NULL;
  t = term_t_30;
  p_74 = t;
  t = SSL_table_put(p_74, m_51, n_51);
  t = (ATerm) ATmakeAppl(sym__3, term_t_30, m_51, n_51);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm s_74 = NULL,t_74 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_74 = NULL,v_74 = NULL,w_74 = NULL;
      t = term_m_17;
      t = i_0(t);
      u_74 = t;
      t = term_v_30;
      v_74 = t;
      t = term_w_30;
      w_74 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_30, term_w_30, u_74);
      t = r_8(v_74, w_74, u_74, t);
      _fail(t);
    }
  else
    {
      ATerm z_74 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_74 = ATgetFirst((ATermList) t);
          t_74 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_74;
      t = d_0(t);
      t = term_m_17;
      t = g_0(t);
      z_74 = t;
      t = (ATerm) ATinsert(CheckATermList(t_74), z_74);
    }
  return(t);
}
ATerm e_10 (ATerm t)
{
  ATerm b_75 = NULL;
  b_75 = t;
  if(match_string(t, "-o"))
    {
      t = b_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = b_75;
    }
  return(t);
}
ATerm f_10 (ATerm t)
{
  ATerm c_75 = NULL,d_75 = NULL;
  c_75 = t;
  t = term_y_28;
  d_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_28, c_75);
  t = t_8(d_75, c_75, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, c_75);
  return(t);
}
ATerm g_10 (ATerm t)
{
  t = term_a_31;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_10, f_10, g_10, t);
  return(t);
}
ATerm r_8 (ATerm k_56, ATerm l_56, ATerm j_56, ATerm t)
{
  ATerm f_75 = NULL,g_75 = NULL,h_75 = NULL;
  f_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_56, l_56);
  {
    ATerm b_31 = t;
    int c_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_31 = ATgetArgument(t, 0);
            ATerm e_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_56, l_56);
        t = q_8(k_56, l_56, t);
        ;
        LocalPopChoice(c_31);
      }
    else
      {
        t = b_31;
        t = (ATerm) ATempty;
      }
    g_75 = t;
    t = (ATerm) ATinsert(CheckATermList(g_75), j_56);
    h_75 = t;
    t = SSL_table_put(k_56, l_56, h_75);
    t = f_75;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm o_75 = NULL,p_75 = NULL,q_75 = NULL,r_75 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_75 = NULL,t_75 = NULL,u_75 = NULL;
      t = term_m_17;
      t = p_0(t);
      s_75 = t;
      t = term_v_30;
      t_75 = t;
      t = term_w_30;
      u_75 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_30, term_w_30, s_75);
      t = r_8(t_75, u_75, s_75, t);
      _fail(t);
    }
  else
    {
      ATerm y_75 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_75 = ATgetFirst((ATermList) t);
          p_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_75;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_75 = ATgetFirst((ATermList) t);
          r_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_75;
      t = m_0(t);
      t = q_75;
      t = n_0(t);
      y_75 = t;
      t = (ATerm) ATinsert(CheckATermList(r_75), y_75);
    }
  return(t);
}
ATerm h_10 (ATerm t)
{
  ATerm a_76 = NULL;
  a_76 = t;
  if(match_string(t, "-i"))
    {
      t = a_76;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = a_76;
    }
  return(t);
}
ATerm i_10 (ATerm t)
{
  ATerm b_76 = NULL,c_76 = NULL;
  b_76 = t;
  t = term_y_29;
  c_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_29, b_76);
  t = t_8(c_76, b_76, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_76);
  return(t);
}
ATerm j_10 (ATerm t)
{
  t = term_f_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_10, i_10, j_10, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_76 = NULL,e_76 = NULL,f_76 = NULL,g_76 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_17;
  t = whoami_0_0(t);
  d_76 = t;
  t = term_a_30;
  f_76 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_31), d_76);
  g_76 = t;
  t = SSL_printnl(f_76, g_76);
  t = term_t_17;
  e_76 = t;
  t = SSL_exit(e_76);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_h_31;
  t = get_config_0_0(t);
  return(t);
}
ATerm m_8 (ATerm v_43, ATerm w_43, ATerm t)
{
  ATerm i_31 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_43, w_43);
      ;
      LocalPopChoice(j_31);
    }
  else
    {
      t = i_31;
      t = SSL_addr(v_43, w_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm x_95 (ATerm), ATerm y_95 (ATerm), ATerm t)
{
  ATerm i_76 = NULL,j_76 = NULL,k_76 = NULL;
  i_76 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_76;
      t = x_95(t);
    }
  else
    {
      ATerm n_76 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_76 = ATgetFirst((ATermList) t);
          k_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_76;
      t = foldr_2_0(x_95, y_95, t);
      n_76 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_76, n_76);
      t = y_95(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm k_10 (ATerm t)
{
  t = term_s_17;
  return(t);
}
ATerm l_10 (ATerm t)
{
  ATerm m_25 = NULL,o_25 = NULL;
  if(match_cons(t, sym__2))
    {
      m_25 = ATgetArgument(t, 0);
      o_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_8(m_25, o_25, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_76 = NULL,e_25 = NULL,f_25 = NULL;
  t = times_0_0(t);
  f_25 = t;
  t = SSL_explode_term(f_25);
  if(match_cons(t, sym__2))
    {
      ATerm k_31 = ATgetArgument(t, 0);
      e_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_25;
  t = foldr_2_0(k_10, l_10, t);
  q_76 = t;
  t = SSL_TicksToSeconds(q_76);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_77 = NULL,c_77 = NULL,d_77 = NULL;
  b_77 = t;
  if(match_cons(t, sym__2))
    {
      c_77 = ATgetArgument(t, 0);
      d_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_77;
        if((c_77 != t))
          {
            _fail(t);
          }
        t = b_77;
        ;
        LocalPopChoice(m_31);
      }
    else
      {
        t = l_31;
        t = (ATerm) ATmakeAppl(sym__2, c_77, d_77);
        {
          ATerm n_31 = t;
          int o_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_77, d_77);
              ;
              LocalPopChoice(o_31);
            }
          else
            {
              t = n_31;
              t = SSL_gtr(c_77, d_77);
            }
          t = (ATerm) ATmakeAppl(sym__2, c_77, d_77);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_104 (ATerm), ATerm t)
{
  ATerm h_77 = NULL;
  h_77 = t;
  {
    ATerm p_31 = t;
    int q_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_77 = NULL;
        t = term_f_30;
        t = get_config_0_0(t);
        j_77 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_77, term_t_17);
        t = geq_0_0(t);
        t = h_77;
        t = b_104(t);
        ;
        LocalPopChoice(q_31);
      }
    else
      {
        t = p_31;
        t = h_77;
      }
  }
  return(t);
}
ATerm m_10 (ATerm t)
{
  ATerm l_77 = NULL,m_77 = NULL,o_77 = NULL,p_77 = NULL;
  t = run_time_0_0(t);
  l_77 = t;
  t = term_m_17;
  t = whoami_0_0(t);
  m_77 = t;
  t = term_a_30;
  o_77 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_31), l_77), term_r_31), m_77);
  p_77 = t;
  t = SSL_printnl(o_77, p_77);
  t = (ATerm) ATmakeAppl(sym__2, term_a_30, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_31), l_77), term_r_31), m_77));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_10, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm q_77 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_17;
  q_77 = t;
  t = SSL_exit(q_77);
  return(t);
}
ATerm n_10 (ATerm t)
{
  ATerm y_77 = NULL,z_77 = NULL;
  z_77 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = z_77;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          y_77 = ATgetArgument(t, 0);
          {
            ATerm o_26 = NULL,w_21 = NULL;
            t = SSLgetAnnotations(z_77);
            o_26 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, y_77);
            w_21 = t;
            t = SSLsetAnnotations(w_21, o_26);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = z_77;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm r_106 (ATerm), ATerm t)
{
  ATerm t_31 = t;
  int u_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_31;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_31);
    }
  else
    {
      t = t_31;
      t = fetch_1_0(n_10, t);
    }
  t = r_106(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm c_78 = NULL,d_78 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_78 = ATgetFirst((ATermList) t);
      d_78 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_78 = NULL,i_78 = NULL;
        ATerm p_10 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(h_78)), not_null(i_78));
          return(t);
        }
        t = d_78;
        t = l_0(t);
        if(((h_78 != NULL) && (h_78 != t)))
          _fail(t);
        else
          h_78 = t;
        t = c_78;
        t = k_0(t);
        if(((i_78 != NULL) && (i_78 != t)))
          _fail(t);
        else
          i_78 = t;
        t = d_78;
        t = reverse_acc_2_0(k_0, p_10, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_17;
      t = l_0(t);
    }
  return(t);
}
ATerm q_10 (ATerm t)
{
  ATerm m_78 = NULL,n_78 = NULL,o_78 = NULL,c_23 = NULL;
  o_78 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_78);
  m_78 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, n_78);
  c_23 = t;
  t = SSLsetAnnotations(c_23, m_78);
  return(t);
}
ATerm u_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_10 (ATerm t)
{
  ATerm q_78 = NULL;
  q_78 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_78), term_w_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_78 = NULL,l_78 = NULL;
  ATerm a_32 = t;
  int b_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_31;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_32);
    }
  else
    {
      t = a_32;
      t = fetch_1_0(q_10, t);
    }
  t = term_c_32;
  t = echo_0_0(t);
  t = term_v_30;
  k_78 = t;
  t = term_w_30;
  l_78 = t;
  t = term_d_32;
  t = q_8(k_78, l_78, t);
  t = reverse_acc_2_0(_id, u_10, t);
  t = map_1_0(w_10, t);
  return(t);
}
ATerm fetch_1_0 (ATerm p_90 (ATerm), ATerm t)
{
  ATerm n_79 (ATerm t)
  {
    ATerm k_79 = NULL,l_79 = NULL,m_79 = NULL;
    k_79 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_79 = ATgetFirst((ATermList) t);
        m_79 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm e_32 = t;
      int h_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_26 = NULL,b_27 = NULL,k_25 = NULL;
          t = SSLgetAnnotations(k_79);
          y_26 = t;
          t = l_79;
          t = p_90(t);
          b_27 = t;
          t = (ATerm) ATinsert(CheckATermList(m_79), b_27);
          k_25 = t;
          t = SSLsetAnnotations(k_25, y_26);
          ;
          LocalPopChoice(h_32);
        }
      else
        {
          t = e_32;
          {
            ATerm l_27 = NULL,o_27 = NULL,l_25 = NULL;
            t = SSLgetAnnotations(k_79);
            l_27 = t;
            t = m_79;
            t = n_79(t);
            o_27 = t;
            t = (ATerm) ATinsert(CheckATermList(o_27), l_79);
            l_25 = t;
            t = SSLsetAnnotations(l_25, l_27);
          }
        }
    }
    return(t);
  }
  t = n_79(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_79 = NULL,s_79 = NULL,t_79 = NULL;
  r_79 = t;
  {
    ATerm i_32 = t;
    int j_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_79;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_32 = ATgetFirst((ATermList) t);
                ATerm l_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_79;
          }
        ;
        LocalPopChoice(j_32);
      }
    else
      {
        t = i_32;
        t = (ATerm) ATinsert(ATempty, r_79);
      }
    s_79 = t;
    t = term_z_28;
    t_79 = t;
    t = SSL_printnl(t_79, s_79);
    t = r_79;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_h_31;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm p_8 (ATerm k_41, ATerm l_41, ATerm t)
{
  t = SSL_strcat(k_41, l_41);
  return(t);
}
ATerm debug_1_0 (ATerm p_102 (ATerm), ATerm t)
{
  ATerm x_79 = NULL,y_79 = NULL,z_79 = NULL,a_80 = NULL;
  x_79 = t;
  t = p_102(t);
  y_79 = t;
  t = term_a_30;
  z_79 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_79), y_79);
  a_80 = t;
  t = SSL_printnl(z_79, a_80);
  t = x_79;
  return(t);
}
ATerm map_1_0 (ATerm f_90 (ATerm), ATerm t)
{
  ATerm p_80 (ATerm t)
  {
    ATerm m_80 = NULL,n_80 = NULL,o_80 = NULL;
    m_80 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_80;
      }
    else
      {
        ATerm b_28 = NULL,e_28 = NULL,f_28 = NULL,i_28 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_80 = ATgetFirst((ATermList) t);
            o_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_80);
        b_28 = t;
        t = n_80;
        t = f_90(t);
        e_28 = t;
        t = o_80;
        t = p_80(t);
        f_28 = t;
        t = (ATerm) ATinsert(CheckATermList(f_28), e_28);
        i_28 = t;
        t = SSLsetAnnotations(i_28, b_28);
      }
    return(t);
  }
  t = p_80(t);
  return(t);
}
ATerm x_10 (ATerm t)
{
  ATerm t_32 = t;
  int u_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(u_32);
    }
  else
    {
      t = t_32;
    }
  return(t);
}
ATerm y_10 (ATerm t)
{
  t = term_v_32;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm b_33 = t;
  int c_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_80 = NULL;
      x_80 = t;
      t = SSL_is_string(x_80);
      ;
      LocalPopChoice(c_33);
    }
  else
    {
      t = b_33;
      {
        ATerm d_33 = t;
        int f_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(x_10, t);
            ;
            LocalPopChoice(f_33);
          }
        else
          {
            t = d_33;
            {
              ATerm d_81 = NULL,e_81 = NULL,f_81 = NULL;
              d_81 = t;
              if(match_cons(t, sym_Path_1))
                {
                  e_81 = ATgetArgument(t, 0);
                  t = e_81;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      e_81 = ATgetArgument(t, 0);
                      t = e_81;
                      {
                        ATerm g_33 = t;
                        int h_33 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(h_33);
                          }
                        else
                          {
                            t = g_33;
                            t = debug_1_0(y_10, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm j_81 = NULL,k_81 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          e_81 = ATgetArgument(t, 0);
                          f_81 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = e_81;
                      t = eval_config_0_0(t);
                      j_81 = t;
                      t = f_81;
                      t = eval_config_0_0(t);
                      k_81 = t;
                      t = (ATerm) ATmakeAppl(sym__2, j_81, k_81);
                      t = p_8(j_81, k_81, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm q_8 (ATerm b_58, ATerm c_58, ATerm t)
{
  t = SSL_table_get(b_58, c_58);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm o_81 = NULL,p_81 = NULL;
  o_81 = t;
  t = term_t_30;
  p_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_30, o_81);
  t = q_8(p_81, o_81, t);
  {
    ATerm i_33 = t;
    int j_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_81 = NULL,r_81 = NULL;
        t = eval_config_0_0(t);
        q_81 = t;
        t = term_t_30;
        r_81 = t;
        t = SSL_table_put(r_81, o_81, q_81);
        t = q_81;
        ;
        LocalPopChoice(j_33);
      }
    else
      {
        t = i_33;
      }
  }
  return(t);
}
ATerm z_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_11 (ATerm t)
{
  ATerm u_81 = NULL,v_81 = NULL;
  t = term_k_33;
  u_81 = t;
  t = term_m_17;
  v_81 = t;
  t = term_l_33;
  t = t_8(u_81, v_81, t);
  return(t);
}
ATerm b_11 (ATerm t)
{
  t = term_m_33;
  return(t);
}
ATerm c_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_11 (ATerm t)
{
  ATerm w_81 = NULL,x_81 = NULL,y_81 = NULL,z_81 = NULL;
  t = term_k_33;
  y_81 = t;
  t = term_m_17;
  z_81 = t;
  t = term_l_33;
  t = t_8(y_81, z_81, t);
  t = term_s_33;
  w_81 = t;
  t = term_m_17;
  x_81 = t;
  t = term_w_33;
  t = t_8(w_81, x_81, t);
  t = term_z_33;
  return(t);
}
ATerm e_11 (ATerm t)
{
  t = term_a_34;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_34 = t;
  int c_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_10, a_11, b_11, t);
      ;
      LocalPopChoice(c_34);
    }
  else
    {
      t = b_34;
      t = Option_3_0(c_11, d_11, e_11, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_68 (ATerm), ATerm o_68 (ATerm), ATerm t)
{
  ATerm a_82 = NULL,b_82 = NULL,c_82 = NULL,d_82 = NULL,e_82 = NULL,f_82 = NULL,o_28 = NULL;
  f_82 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_82 = ATgetFirst((ATermList) t);
      c_82 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_82);
  a_82 = t;
  t = b_82;
  t = n_68(t);
  d_82 = t;
  t = c_82;
  t = o_68(t);
  e_82 = t;
  t = (ATerm) ATinsert(CheckATermList(e_82), d_82);
  o_28 = t;
  t = SSLsetAnnotations(o_28, a_82);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_108 (ATerm), ATerm t)
{
  ATerm k_82 = NULL,l_82 = NULL,m_82 = NULL,n_82 = NULL,s_82 = NULL,t_82 = NULL,u_28 = NULL;
  k_82 = t;
  {
    ATerm d_34 = t;
    int g_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_34;
        t = u_108(t);
        ;
        LocalPopChoice(g_34);
      }
    else
      {
        t = d_34;
      }
    t = k_82;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_82 = ATgetFirst((ATermList) t);
        n_82 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(k_82);
    l_82 = t;
    t = term_h_31;
    t_82 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_h_31, m_82);
    t = t_8(t_82, m_82, t);
    t = n_82;
    {
      ATerm e_83 (ATerm t)
      {
        ATerm i_34 = t;
        int j_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_34 = t;
            int m_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_82 = NULL;
                x_82 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = x_82;
                ;
                LocalPopChoice(m_34);
              }
            else
              {
                t = l_34;
                t = u_108(t);
                t = Cons_2_0(_id, e_83, t);
              }
            ;
            LocalPopChoice(j_34);
          }
        else
          {
            t = i_34;
            {
              ATerm a_83 = NULL,b_83 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_83 = ATgetFirst((ATermList) t);
                  b_83 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(b_83), (ATerm) ATmakeAppl(sym_Undefined_1, a_83));
            }
          }
        return(t);
      }
      t = e_83(t);
      s_82 = t;
      t = (ATerm) ATinsert(CheckATermList(s_82), (ATerm) ATmakeAppl(sym_Program_1, m_82));
      u_28 = t;
      t = SSLsetAnnotations(u_28, l_82);
    }
  }
  return(t);
}
ATerm g_11 (ATerm t)
{
  ATerm u_83 = NULL;
  u_83 = t;
  if(match_string(t, "--help"))
    {
      t = u_83;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_83;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_83;
        }
    }
  return(t);
}
ATerm i_11 (ATerm t)
{
  ATerm v_83 = NULL,w_83 = NULL;
  t = term_v_31;
  v_83 = t;
  t = term_m_17;
  w_83 = t;
  t = term_n_34;
  t = t_8(v_83, w_83, t);
  t = term_o_34;
  return(t);
}
ATerm j_11 (ATerm t)
{
  t = term_p_34;
  return(t);
}
ATerm k_11 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm t_108 (ATerm), ATerm t)
{
  ATerm l_83 = NULL,m_83 = NULL,n_83 = NULL,o_83 = NULL,p_83 = NULL,s_83 = NULL,t_83 = NULL;
  n_83 = t;
  t = term_v_30;
  p_83 = t;
  t = term_w_30;
  s_83 = t;
  t = (ATerm) ATempty;
  t_83 = t;
  t = SSL_table_put(p_83, s_83, t_83);
  t = n_83;
  {
    ATerm f_11 (ATerm t)
    {
      ATerm q_34 = t;
      int r_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_108(t);
          ;
          LocalPopChoice(r_34);
        }
      else
        {
          t = q_34;
          {
            ATerm s_34 = t;
            int t_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(g_11, i_11, j_11, t);
                ;
                LocalPopChoice(t_34);
              }
            else
              {
                t = s_34;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(f_11, t);
    {
      ATerm u_34 = t;
      int v_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_84 = NULL;
          d_84 = t;
          {
            ATerm w_34 = t;
            int x_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_29 = NULL;
                t = d_84;
                {
                  ATerm y_34 = t;
                  int z_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_v_31;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(z_34);
                    }
                  else
                    {
                      t = y_34;
                      t = fetch_1_0(k_11, t);
                    }
                  t = d_84;
                  t = default_system_usage_0_0(t);
                  t = term_s_17;
                  h_29 = t;
                  t = SSL_exit(h_29);
                }
                ;
                LocalPopChoice(x_34);
              }
            else
              {
                t = w_34;
                {
                  ATerm p_29 = NULL;
                  t = term_k_33;
                  t = get_config_0_0(t);
                  t = d_84;
                  t = default_system_about_0_0(t);
                  t = term_s_17;
                  p_29 = t;
                  t = SSL_exit(p_29);
                }
              }
          }
          ;
          LocalPopChoice(v_34);
        }
      else
        {
          t = u_34;
          {
            ATerm c_35 = t;
            int d_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_84 = NULL,l_84 = NULL,m_84 = NULL;
                ATerm m_11 (ATerm t)
                {
                  ATerm n_84 = NULL,p_84 = NULL,q_84 = NULL,w_28 = NULL;
                  q_84 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      p_84 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(q_84);
                  n_84 = t;
                  t = p_84;
                  if(((l_83 != NULL) && (l_83 != t)))
                    _fail(t);
                  else
                    l_83 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, p_84);
                  w_28 = t;
                  t = SSLsetAnnotations(w_28, n_84);
                  return(t);
                }
                t = fetch_1_0(m_11, t);
                t = term_a_30;
                l_84 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_83)), term_e_35);
                m_84 = t;
                t = SSL_printnl(l_84, m_84);
                t = (ATerm) ATmakeAppl(sym__2, term_a_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_83)), term_e_35));
                t = default_system_usage_0_0(t);
                t = term_t_17;
                e_84 = t;
                t = SSL_exit(e_84);
                ;
                LocalPopChoice(d_35);
              }
            else
              {
                t = c_35;
              }
          }
        }
      m_83 = t;
      t = term_v_30;
      o_83 = t;
      t = SSL_table_destroy(o_83);
      t = m_83;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm t)
{
  ATerm v_84 = NULL,w_84 = NULL,x_84 = NULL,y_84 = NULL;
  t = parse_options_1_0(t_106, t);
  v_84 = t;
  t = term_f_35;
  y_84 = t;
  t = SSL_table_create(y_84);
  t = term_f_35;
  w_84 = t;
  t = term_g_35;
  x_84 = t;
  t = SSL_table_put(w_84, x_84, v_84);
  t = v_84;
  t = v_106(t);
  {
    ATerm h_35 = t;
    int i_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_106, t);
        ;
        LocalPopChoice(i_35);
      }
    else
      {
        t = h_35;
        {
          ATerm j_35 = t;
          int l_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_106(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(l_35);
            }
          else
            {
              t = j_35;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm n_11 (ATerm t)
{
  ATerm m_35 = t;
  int n_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = output_option_0_0(t);
            ;
            LocalPopChoice(p_35);
          }
        else
          {
            t = o_35;
            {
              ATerm q_35 = t;
              int r_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(p_11, q_11, t_11, t);
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
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(t_35);
                      }
                    else
                      {
                        t = s_35;
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
ATerm o_11 (ATerm t)
{
  t = input_1_0(w_11, t);
  return(t);
}
ATerm p_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_11 (ATerm t)
{
  ATerm a_85 = NULL,b_85 = NULL;
  t = term_c_29;
  a_85 = t;
  t = term_m_17;
  b_85 = t;
  t = term_u_35;
  t = t_8(a_85, b_85, t);
  t = term_v_35;
  return(t);
}
ATerm t_11 (ATerm t)
{
  t = term_w_35;
  return(t);
}
ATerm w_11 (ATerm t)
{
  t = output_1_0(x_11, t);
  return(t);
}
ATerm x_11 (ATerm t)
{
  ATerm d_85 = NULL,e_85 = NULL,f_85 = NULL,g_85 = NULL,h_85 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm x_35 = ATgetArgument(t, 0);
      if(((ATgetType(x_35) == AT_LIST) && !(ATisEmpty(x_35))))
        {
          ATerm y_35 = ATgetFirst((ATermList) x_35);
          if(match_cons(y_35, sym_Signature_1))
            {
              f_85 = ATgetArgument(y_35, 0);
            }
          else
            _fail(t);
          {
            ATerm z_35 = (ATerm) ATgetNext((ATermList) x_35);
            if(((ATgetType(z_35) == AT_LIST) && !(ATisEmpty(z_35))))
              {
                ATerm a_36 = ATgetFirst((ATermList) z_35);
                if(match_cons(a_36, sym_Overlays_1))
                  {
                    g_85 = ATgetArgument(a_36, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm b_36 = (ATerm) ATgetNext((ATermList) z_35);
                  if(((ATgetType(b_36) == AT_LIST) && !(ATisEmpty(b_36))))
                    {
                      ATerm c_36 = ATgetFirst((ATermList) b_36);
                      if(match_cons(c_36, sym_Strategies_1))
                        {
                          h_85 = ATgetArgument(c_36, 0);
                        }
                      else
                        _fail(t);
                      {
                        ATerm d_36 = (ATerm) ATgetNext((ATermList) b_36);
                        if(((ATgetType(d_36) != AT_LIST) || !(ATisEmpty(d_36))))
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
  t = e_8(f_85, g_85, h_85, t);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm e_36 = ATgetArgument(t, 0);
      if(((ATgetType(e_36) == AT_LIST) && !(ATisEmpty(e_36))))
        {
          ATerm f_36 = ATgetFirst((ATermList) e_36);
          if(match_cons(f_36, sym_Signature_1))
            {
              d_85 = ATgetArgument(f_36, 0);
            }
          else
            _fail(t);
          {
            ATerm g_36 = (ATerm) ATgetNext((ATermList) e_36);
            if(((ATgetType(g_36) == AT_LIST) && !(ATisEmpty(g_36))))
              {
                ATerm h_36 = ATgetFirst((ATermList) g_36);
                if(match_cons(h_36, sym_Strategies_1))
                  {
                    e_85 = ATgetArgument(h_36, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm i_36 = (ATerm) ATgetNext((ATermList) g_36);
                  if(((ATgetType(i_36) != AT_LIST) || !(ATisEmpty(i_36))))
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
  t = h_7(d_85, e_85, t);
  t = DesugarListMatching_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(n_11, default_usage_0_0, _id, o_11, t);
  return(t);
}
