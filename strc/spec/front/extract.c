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
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_OpDecl_2;
Symbol sym_Sort_2;
Symbol sym_Constructors_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
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
Symbol sym_RDefT_4;
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
Symbol sym_Rec_2;
Symbol sym_Where_1;
Symbol sym_Prim_2;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Mod_2;
Symbol sym_ExplodeCong_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
Symbol sym_ExtSDefInl_4;
Symbol sym_ExtSDef_3;
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
Symbol sym_Anno_2;
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
Symbol sym_Runtime_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Cong_2;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
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
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
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
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
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
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_ExtSDef_3 = ATmakeSymbol("ExtSDef", 3, ATfalse);
  ATprotectSymbol(sym_ExtSDef_3);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
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
  init_constant_terms();
}
ATerm term_b_43;
ATerm term_o_42;
ATerm term_n_42;
ATerm term_m_42;
ATerm term_l_42;
ATerm term_g_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_q_41;
ATerm term_p_41;
ATerm term_o_41;
ATerm term_i_41;
ATerm term_d_41;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_y_40;
ATerm term_x_40;
ATerm term_w_40;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_x_39;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_u_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_d_39;
ATerm term_z_38;
ATerm term_k_38;
ATerm term_j_38;
ATerm term_i_38;
ATerm term_y_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_e_37;
ATerm term_y_36;
ATerm term_v_36;
ATerm term_t_36;
ATerm term_k_36;
ATerm term_z_35;
ATerm term_t_35;
ATerm term_q_35;
ATerm term_e_35;
ATerm term_b_35;
ATerm term_x_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_z_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_e_27;
ATerm term_c_27;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_u_20;
ATerm term_b_20;
ATerm term_r_19;
ATerm term_b_19;
ATerm term_q_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_y_17;
ATerm term_x_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_n_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_g_15;
ATerm term_f_15;
void init_constant_terms (void)
{
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorNeeded", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("e_1", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Defined_1, term_x_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("c_1", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_16);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym_Sort_2, term_p_26, (ATerm) ATempty);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym_ConstType_1, term_q_26);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("overloading external definition: ", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_y_17);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym__2, term_t_34, term_u_34);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(sym__2, term_t_36, term_y_17);
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_17);
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(sym__2, term_y_37, term_f_15);
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(sym__2, term_z_38, term_d_39);
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(sym__2, term_w_40, term_f_15);
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(sym__2, term_a_41, term_f_15);
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(sym__2, term_l_40, term_f_15);
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(sym__2, term_l_42, term_f_15);
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm ConstructorNeeded_0_0 (ATerm);
ATerm filter_1_0 (ATerm k_105 (ATerm), ATerm);
ATerm h_0 (ATerm);
ATerm a_1 (ATerm);
ATerm DeclareConstructorNeeded_0_0 (ATerm);
ATerm b_1 (ATerm);
ATerm l_8 (ATerm f_72, ATerm e_72, ATerm);
ATerm n_8 (ATerm d_48, ATerm e_48, ATerm f_48, ATerm);
ATerm d_1 (ATerm);
ATerm DefinitionExists_0_0 (ATerm);
ATerm sboundin_3_0 (ATerm i_92 (ATerm), ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm);
ATerm f_1 (ATerm);
ATerm u_8 (ATerm y_22, ATerm x_22, ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm l_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm free_vars2_4_0 (ATerm r_107 (ATerm), ATerm s_107 (ATerm), ATerm t_107 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm u_107 (ATerm), ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm p_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm svars_arity_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm pat_td_1_0 (ATerm q_122 (ATerm), ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm y_3 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm a_9 (ATerm x_70, ATerm y_70, ATerm z_70, ATerm);
ATerm e_39 (ATerm o_38, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm k_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm h_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm repeat_1_0 (ATerm v_109 (ATerm), ATerm);
ATerm o_5 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm p_5 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm h_94 (ATerm), ATerm);
ATerm e_9 (ATerm k_66, ATerm l_66, ATerm m_66, ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm d_93 (ATerm), ATerm);
ATerm t_5 (ATerm);
ATerm w_5 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm tuple_unzip_1_0 (ATerm f_97 (ATerm), ATerm);
ATerm MkDistApplication_0_0 (ATerm);
ATerm f_9 (ATerm n_34, ATerm p_34, ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm copy_1_0 (ATerm k_104 (ATerm), ATerm);
ATerm g_9 (ATerm g_47, ATerm h_47, ATerm);
ATerm last_0_0 (ATerm);
ATerm r_59 (ATerm k_56, ATerm l_56, ATerm m_56, ATerm n_56, ATerm);
ATerm s_59 (ATerm g_58, ATerm h_58, ATerm i_58, ATerm j_58, ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm j_6 (ATerm);
ATerm l_6 (ATerm);
ATerm DefineCongruence_0_0 (ATerm);
ATerm o_6 (ATerm);
ATerm q_6 (ATerm);
ATerm choices_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm alltd_1_0 (ATerm v_94 (ATerm), ATerm);
ATerm r_6 (ATerm);
ATerm t_6 (ATerm);
ATerm v_6 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm m_92 (ATerm), ATerm n_92 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm c_7 (ATerm);
ATerm e_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm n_7 (ATerm);
ATerm JoinDefs2_0_0 (ATerm);
ATerm giving_up_0_0 (ATerm);
ATerm p_7 (ATerm);
ATerm JoinDefsExt_0_0 (ATerm);
ATerm r_61 (ATerm z_59, ATerm a_60, ATerm b_60, ATerm c_60, ATerm);
ATerm get_definition_0_0 (ATerm);
ATerm at_end_1_0 (ATerm u_99 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm x_63 (ATerm l_63, ATerm);
ATerm conc_0_0 (ATerm);
ATerm m_9 (ATerm b_101 (ATerm), ATerm k_30, ATerm j_30, ATerm);
ATerm genzip_4_0 (ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm);
ATerm v_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm r_9 (ATerm n_669, ATerm s_669, ATerm v_64, ATerm);
ATerm a_8 (ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm r_72 (ATerm g_67, ATerm h_67, ATerm i_67, ATerm);
ATerm f_8 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm t_9 (ATerm m_122 (ATerm), ATerm n_122 (ATerm), ATerm o_122 (ATerm), ATerm s_65, ATerm p_65, ATerm x_65, ATerm t_65, ATerm q_65, ATerm r_65, ATerm);
ATerm GnNextChangeGraph_3_0 (ATerm m_122 (ATerm), ATerm n_122 (ATerm), ATerm o_122 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm k_110 (ATerm), ATerm l_110 (ATerm), ATerm);
ATerm for_3_0 (ATerm n_110 (ATerm), ATerm o_110 (ATerm), ATerm p_110 (ATerm), ATerm);
ATerm m_8 (ATerm);
ATerm o_8 (ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm s_8 (ATerm);
ATerm t_8 (ATerm);
ATerm v_8 (ATerm);
ATerm u_30 (ATerm r_29, ATerm s_29, ATerm);
ATerm extract_needed_defs_0_0 (ATerm);
ATerm w_8 (ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm b_9 (ATerm);
ATerm d_9 (ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm o_9 (ATerm);
ATerm p_9 (ATerm);
ATerm RegisterExtSDefInl_0_0 (ATerm);
ATerm q_9 (ATerm);
ATerm u_9 (ATerm);
ATerm v_9 (ATerm);
ATerm z_9 (ATerm);
ATerm b_10 (ATerm);
ATerm l_10 (ATerm);
ATerm o_10 (ATerm);
ATerm q_10 (ATerm);
ATerm t_10 (ATerm);
ATerm RegisterExtSDef_0_0 (ATerm);
ATerm w_9 (ATerm g_105 (ATerm), ATerm g_36, ATerm e_36, ATerm);
ATerm x_9 (ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm q_30, ATerm p_30, ATerm);
ATerm y_9 (ATerm g_101 (ATerm), ATerm m_30, ATerm l_30, ATerm);
ATerm Arities_0_0 (ATerm);
ATerm a_10 (ATerm z_36, ATerm a_37, ATerm);
ATerm p_81 (ATerm d_81, ATerm);
ATerm Definitions_0_0 (ATerm);
ATerm foldr_3_0 (ATerm w_103 (ATerm), ATerm x_103 (ATerm), ATerm y_103 (ATerm), ATerm);
ATerm z_10 (ATerm);
ATerm b_11 (ATerm);
ATerm c_11 (ATerm);
ATerm d_11 (ATerm);
ATerm e_11 (ATerm);
ATerm f_11 (ATerm);
ATerm g_11 (ATerm);
ATerm h_11 (ATerm);
ATerm j_11 (ATerm);
ATerm RegisterSDefT_0_0 (ATerm);
ATerm k_11 (ATerm);
ATerm needed_defs_0_0 (ATerm);
ATerm Cons_2_0 (ATerm f_77 (ATerm), ATerm g_77 (ATerm), ATerm);
ATerm d_10 (ATerm d_54, ATerm e_54, ATerm);
ATerm e_10 (ATerm r_57, ATerm s_57, ATerm);
ATerm g_10 (ATerm d_115 (ATerm), ATerm p_542, ATerm v_57, ATerm);
ATerm f_10 (ATerm n_57, ATerm o_57, ATerm);
ATerm m_11 (ATerm);
ATerm o_11 (ATerm);
ATerm q_11 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm f_118 (ATerm), ATerm);
ATerm l_85 (ATerm f_85, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm h_10 (ATerm t_57, ATerm);
ATerm i_10 (ATerm f_54, ATerm g_54, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm w_86 (ATerm v_85, ATerm);
ATerm x_86 (ATerm z_85, ATerm a_86, ATerm b_86, ATerm);
ATerm y_86 (ATerm j_86, ATerm k_86, ATerm l_86, ATerm);
ATerm j_10 (ATerm);
ATerm s_11 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm o_99 (ATerm), ATerm);
ATerm c_10 (ATerm y_44, ATerm z_44, ATerm);
ATerm debug_1_0 (ATerm b_115 (ATerm), ATerm);
ATerm y_11 (ATerm);
ATerm g_12 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm o_116 (ATerm), ATerm);
ATerm h_12 (ATerm);
ATerm i_12 (ATerm);
ATerm k_12 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm l_12 (ATerm);
ATerm m_12 (ATerm);
ATerm n_12 (ATerm);
ATerm o_12 (ATerm);
ATerm p_12 (ATerm);
ATerm q_12 (ATerm);
ATerm r_12 (ATerm);
ATerm s_12 (ATerm);
ATerm x_12 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm p_10 (ATerm u_58, ATerm v_58, ATerm);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm y_12 (ATerm);
ATerm z_12 (ATerm);
ATerm a_13 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm n_10 (ATerm o_36, ATerm p_36, ATerm n_36, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm c_13 (ATerm);
ATerm d_13 (ATerm);
ATerm g_13 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm k_10 (ATerm f_34, ATerm h_34, ATerm);
ATerm foldr_2_0 (ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm h_13 (ATerm);
ATerm i_13 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm n_116 (ATerm), ATerm);
ATerm j_13 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm l_13 (ATerm);
ATerm need_help_1_0 (ATerm d_119 (ATerm), ATerm);
ATerm map_1_0 (ATerm e_99 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm m_10 (ATerm f_38, ATerm g_38, ATerm);
ATerm o_13 (ATerm);
ATerm p_13 (ATerm);
ATerm q_13 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm r_13 (ATerm);
ATerm s_13 (ATerm);
ATerm t_13 (ATerm);
ATerm u_13 (ATerm);
ATerm x_13 (ATerm);
ATerm l_14 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm g_121 (ATerm), ATerm);
ATerm n_14 (ATerm);
ATerm o_14 (ATerm);
ATerm p_14 (ATerm);
ATerm q_14 (ATerm);
ATerm parse_options_1_0 (ATerm f_121 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm f_119 (ATerm), ATerm g_119 (ATerm), ATerm h_119 (ATerm), ATerm i_119 (ATerm), ATerm);
ATerm v_14 (ATerm);
ATerm x_14 (ATerm);
ATerm y_14 (ATerm);
ATerm z_14 (ATerm);
ATerm a_15 (ATerm);
ATerm iowrap_3_0 (ATerm o_118 (ATerm), ATerm p_118 (ATerm), ATerm q_118 (ATerm), ATerm);
ATerm c_15 (ATerm);
ATerm d_15 (ATerm);
ATerm e_15 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,p_0 = NULL,t_0 = NULL,x_0 = NULL;
  a_0 = t;
  t = term_f_15;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_g_15;
  t_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_15), b_0), term_i_15);
  x_0 = t;
  t = SSL_printnl(t_0, x_0);
  t = term_k_15;
  p_0 = t;
  t = SSL_exit(p_0);
  t = a_0;
  return(t);
}
ATerm ConstructorNeeded_0_0 (ATerm t)
{
  ATerm v_1 = NULL,w_1 = NULL,x_1 = NULL;
  v_1 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      w_1 = ATgetArgument(t, 0);
      x_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_15 = t;
    int m_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_1 = NULL,b_2 = NULL;
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, w_1, (ATerm) ATempty);
        z_1 = t;
        t = term_n_15;
        b_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_15, (ATerm) ATmakeAppl(sym_OpDecl_2, w_1, (ATerm) ATempty));
        t = a_10(b_2, z_1, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm p_15 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_15) != ATmakeSymbol("e_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, w_1, x_1);
        ;
        LocalPopChoice(m_15);
      }
    else
      {
        t = l_15;
        {
          ATerm z_3 = NULL,a_4 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, w_1, (ATerm) ATempty);
          z_3 = t;
          t = term_n_15;
          a_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_n_15, (ATerm) ATmakeAppl(sym_OpDecl_2, w_1, (ATerm) ATempty));
          t = a_10(a_4, z_3, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm q_15 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) q_15) != ATmakeSymbol("c_1", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, w_1, x_1);
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm k_105 (ATerm), ATerm t)
{
  ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL;
  m_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_2;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_2 = ATgetFirst((ATermList) t);
          o_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm r_15 = t;
        int t_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_4 = NULL,z_4 = NULL,a_5 = NULL,f_0 = NULL;
            t = SSLgetAnnotations(m_2);
            f_4 = t;
            t = n_2;
            t = k_105(t);
            z_4 = t;
            t = o_2;
            t = filter_1_0(k_105, t);
            a_5 = t;
            t = (ATerm) ATinsert(CheckATermList(a_5), z_4);
            f_0 = t;
            t = SSLsetAnnotations(f_0, f_4);
            ;
            LocalPopChoice(t_15);
          }
        else
          {
            t = r_15;
            t = o_2;
            t = filter_1_0(k_105, t);
          }
      }
    }
  return(t);
}
ATerm h_0 (ATerm t)
{
  t = term_n_15;
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = term_n_15;
  return(t);
}
ATerm DeclareConstructorNeeded_0_0 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL;
  u_2 = t;
  {
    ATerm u_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Cong_2))
          {
            v_2 = ATgetArgument(t, 0);
            {
              ATerm w_15 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(v_15);
        {
          ATerm z_2 = NULL,a_3 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, v_2, (ATerm) ATempty);
          z_2 = t;
          t = term_y_15;
          a_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, v_2, (ATerm) ATempty), term_y_15);
          t = w_9(h_0, z_2, a_3, t);
          t = u_2;
        }
      }
    else
      {
        t = u_15;
        {
          ATerm d_3 = NULL,e_3 = NULL;
          if(match_cons(t, sym_Op_2))
            {
              v_2 = ATgetArgument(t, 0);
              {
                ATerm z_15 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, v_2, (ATerm) ATempty);
          d_3 = t;
          t = term_c_16;
          e_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, v_2, (ATerm) ATempty), term_c_16);
          t = w_9(a_1, d_3, e_3, t);
          t = u_2;
        }
      }
  }
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm d_16 = t;
  int e_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareConstructorNeeded_0_0(t);
      ;
      LocalPopChoice(e_16);
    }
  else
    {
      t = d_16;
    }
  return(t);
}
ATerm l_8 (ATerm f_72, ATerm e_72, ATerm t)
{
  ATerm g_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,s_3 = NULL,t_3 = NULL,z_0 = NULL,v_0 = NULL,r_0 = NULL;
  t = e_72;
  t = topdown_1_0(b_1, t);
  t = f_72;
  if(match_cons(t, sym_Signature_1))
    {
      i_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_72);
  g_3 = t;
  t = i_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_3 = ATgetFirst((ATermList) t);
      m_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_3);
  k_3 = t;
  t = l_3;
  if(match_cons(t, sym_Constructors_1))
    {
      q_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_3);
  p_3 = t;
  t = q_3;
  t = filter_1_0(ConstructorNeeded_0_0, t);
  s_3 = t;
  t = (ATerm) ATmakeAppl(sym_Constructors_1, s_3);
  r_0 = t;
  t = SSLsetAnnotations(r_0, p_3);
  t_3 = t;
  t = m_3;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_3), t_3);
  v_0 = t;
  t = SSLsetAnnotations(v_0, k_3);
  o_3 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, o_3);
  z_0 = t;
  t = SSLsetAnnotations(z_0, g_3);
  j_3 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, e_72)), j_3));
  return(t);
}
ATerm n_8 (ATerm d_48, ATerm e_48, ATerm f_48, ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL;
  t = term_g_15;
  w_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_16), f_48), term_h_16), e_48), term_g_16), d_48), term_f_16);
  x_3 = t;
  t = SSL_printnl(w_3, x_3);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_16), f_48), term_h_16), e_48), term_g_16), d_48), term_f_16);
  return(t);
}
ATerm d_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_16 = ATgetArgument(t, 0);
      if(((ATgetType(j_16) != AT_INT) || (ATgetInt((ATermInt) j_16) != 0)))
        _fail(t);
      {
        ATerm l_16 = ATgetArgument(t, 1);
        if(((ATgetType(l_16) != AT_INT) || (ATgetInt((ATermInt) l_16) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL;
  r_4 = t;
  if(match_cons(t, sym__2))
    {
      s_4 = ATgetArgument(t, 0);
      t_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_4;
  if(match_cons(t, sym__2))
    {
      u_4 = ATgetArgument(t, 0);
      v_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_4;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = v_4;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm n_16 = t;
    int o_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_5 = NULL,n_5 = NULL;
        t = s_4;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm p_16 = ATgetFirst((ATermList) t);
            ATerm q_16 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(q_16) == AT_LIST) && !(ATisEmpty(q_16))))
              {
                ATerm r_16 = ATgetFirst((ATermList) q_16);
                ATerm v_16 = (ATerm) ATgetNext((ATermList) q_16);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm w_16 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(d_1, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = w_16;
            }
          t = term_g_15;
          m_5 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, s_4), term_x_16);
          n_5 = t;
          t = SSL_printnl(m_5, n_5);
          t = (ATerm) ATinsert(ATinsert(ATempty, s_4), term_x_16);
          t = giving_up_0_0(t);
        }
        ;
        LocalPopChoice(o_16);
      }
    else
      {
        t = n_16;
        {
          ATerm u_5 = NULL,v_5 = NULL;
          t = s_4;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm y_16 = ATgetFirst((ATermList) t);
              if(match_cons(y_16, sym__2))
                {
                  u_5 = ATgetArgument(y_16, 0);
                  v_5 = ATgetArgument(y_16, 1);
                }
              else
                _fail(t);
              {
                ATerm z_16 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(z_16) != AT_LIST) || !(ATisEmpty(z_16))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, s_4, (ATerm) ATmakeAppl(sym__2, u_5, v_5));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, s_4, (ATerm) ATmakeAppl(sym__2, u_5, v_5));
        }
      }
  }
  return(t);
}
ATerm sboundin_3_0 (ATerm i_92 (ATerm), ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL,r_8 = NULL,c_9 = NULL,s_9 = NULL;
  r_8 = t;
  if(match_cons(t, sym_Let_2))
    {
      c_9 = ATgetArgument(t, 0);
      s_9 = ATgetArgument(t, 1);
      {
        ATerm e_6 = NULL,k_6 = NULL,n_6 = NULL,k_1 = NULL;
        t = SSLgetAnnotations(r_8);
        e_6 = t;
        t = c_9;
        t = i_92(t);
        k_6 = t;
        t = s_9;
        t = i_92(t);
        n_6 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, k_6, n_6);
        k_1 = t;
        t = SSLsetAnnotations(k_1, e_6);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          c_9 = ATgetArgument(t, 0);
          s_9 = ATgetArgument(t, 1);
          g_8 = ATgetArgument(t, 2);
          {
            ATerm w_7 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,m_1 = NULL;
            t = SSLgetAnnotations(r_8);
            w_7 = t;
            t = c_9;
            t = k_92(t);
            i_8 = t;
            t = s_9;
            t = k_92(t);
            j_8 = t;
            t = g_8;
            t = i_92(t);
            k_8 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, i_8, j_8, k_8);
            m_1 = t;
            t = SSLsetAnnotations(m_1, w_7);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              c_9 = ATgetArgument(t, 0);
              s_9 = ATgetArgument(t, 1);
              g_8 = ATgetArgument(t, 2);
              h_8 = ATgetArgument(t, 3);
              {
                ATerm z_8 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,n_9 = NULL,n_1 = NULL;
                t = SSLgetAnnotations(r_8);
                z_8 = t;
                t = c_9;
                t = k_92(t);
                j_9 = t;
                t = s_9;
                t = k_92(t);
                k_9 = t;
                t = g_8;
                t = k_92(t);
                l_9 = t;
                t = h_8;
                t = i_92(t);
                n_9 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, j_9, k_9, l_9, n_9);
                n_1 = t;
                t = SSLsetAnnotations(n_1, z_8);
              }
            }
          else
            {
              ATerm s_10 = NULL,w_10 = NULL,y_10 = NULL,o_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  c_9 = ATgetArgument(t, 0);
                  s_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(r_8);
              s_10 = t;
              t = c_9;
              t = k_92(t);
              w_10 = t;
              t = s_9;
              t = i_92(t);
              y_10 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, w_10, y_10);
              o_1 = t;
              t = SSLsetAnnotations(o_1, s_10);
            }
        }
    }
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm a_11 = NULL;
  ATerm a_17 = t;
  int b_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          a_11 = ATgetArgument(t, 0);
          {
            ATerm c_17 = ATgetArgument(t, 1);
          }
          {
            ATerm d_17 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_17);
      t = a_11;
    }
  else
    {
      t = a_17;
      if(match_cons(t, sym_SDefT_4))
        {
          a_11 = ATgetArgument(t, 0);
          {
            ATerm f_17 = ATgetArgument(t, 1);
          }
          {
            ATerm g_17 = ATgetArgument(t, 2);
          }
          {
            ATerm h_17 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = a_11;
    }
  return(t);
}
ATerm u_8 (ATerm y_22, ATerm x_22, ATerm t)
{
  t = y_22;
  t = map_1_0(f_1, t);
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL;
  if(match_cons(t, sym__2))
    {
      z_11 = ATgetArgument(t, 0);
      a_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9(l_1, z_11, a_12, t);
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm c_12 = NULL;
  if(match_cons(t, sym__2))
    {
      c_12 = ATgetArgument(t, 0);
      if((c_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL;
  if(match_cons(t, sym__2))
    {
      t_12 = ATgetArgument(t, 0);
      u_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9(r_1, t_12, u_12, t);
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm v_12 = NULL;
  if(match_cons(t, sym__2))
    {
      v_12 = ATgetArgument(t, 0);
      if((v_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm e_13 = NULL;
  if(match_cons(t, sym__2))
    {
      e_13 = ATgetArgument(t, 0);
      if((e_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm r_107 (ATerm), ATerm s_107 (ATerm), ATerm t_107 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm u_107 (ATerm), ATerm t)
{
  ATerm f_13 (ATerm t)
  {
    ATerm b_12 = NULL,d_12 = NULL,e_12 = NULL;
    e_12 = t;
    {
      ATerm j_17 = t;
      int k_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_107(t);
          ;
          LocalPopChoice(k_17);
        }
      else
        {
          t = j_17;
          t = (ATerm) ATempty;
        }
      b_12 = t;
      t = e_12;
      {
        ATerm l_17 = t;
        int n_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_12 = NULL,p_11 = NULL,v_11 = NULL;
            t = s_107(t);
            f_12 = t;
            t = e_12;
            {
              ATerm g_1 (ATerm t)
              {
                ATerm i_11 = NULL;
                t = f_13(t);
                i_11 = t;
                t = (ATerm) ATmakeAppl(sym__2, i_11, f_12);
                t = m_9(u_107, i_11, f_12, t);
                return(t);
              }
              t = t_107(g_1, f_13, h_1, t);
              v_11 = t;
              t = SSL_explode_term(v_11);
              if(match_cons(t, sym__2))
                {
                  ATerm o_17 = ATgetArgument(t, 0);
                  p_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = p_11;
              t = foldr_3_0(i_1, j_1, _id, t);
            }
            ;
            LocalPopChoice(n_17);
          }
        else
          {
            t = l_17;
            {
              ATerm j_12 = NULL;
              t = SSL_explode_term(e_12);
              if(match_cons(t, sym__2))
                {
                  ATerm p_17 = ATgetArgument(t, 0);
                  j_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = j_12;
              t = foldr_3_0(p_1, q_1, f_13, t);
            }
          }
        d_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_12, d_12);
        t = y_9(s_1, b_12, d_12, t);
      }
    }
    return(t);
  }
  t = f_13(t);
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm v_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm r_17 = ATgetArgument(t, 0);
      if(match_cons(r_17, sym_SVar_1))
        {
          v_13 = ATgetArgument(r_17, 0);
        }
      else
        _fail(t);
      y_13 = ATgetArgument(t, 1);
      z_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = y_13;
  t = foldr_3_0(h_2, i_2, j_2, t);
  a_14 = t;
  t = z_13;
  t = foldr_3_0(k_2, l_2, p_2, t);
  b_14 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, v_13, (ATerm) ATmakeAppl(sym__2, a_14, b_14)));
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL;
  g_14 = t;
  if(match_cons(t, sym_Let_2))
    {
      h_14 = ATgetArgument(t, 0);
      i_14 = ATgetArgument(t, 1);
      t = g_14;
      t = u_8(h_14, i_14, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          h_14 = ATgetArgument(t, 0);
          i_14 = ATgetArgument(t, 1);
          j_14 = ATgetArgument(t, 2);
          t = i_14;
          t = map_1_0(r_2, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              h_14 = ATgetArgument(t, 0);
              i_14 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, h_14);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  h_14 = ATgetArgument(t, 0);
                  i_14 = ATgetArgument(t, 1);
                  j_14 = ATgetArgument(t, 2);
                  k_14 = ATgetArgument(t, 3);
                  t = i_14;
                  t = map_1_0(s_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      h_14 = ATgetArgument(t, 0);
                      i_14 = ATgetArgument(t, 1);
                      j_14 = ATgetArgument(t, 2);
                      k_14 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_14;
                  t = map_1_0(t_2, t);
                }
            }
        }
    }
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm m_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_17 = ATgetArgument(t, 0);
      if(match_cons(v_17, sym__2))
        {
          m_16 = ATgetArgument(v_17, 0);
          {
            ATerm x_17 = ATgetArgument(v_17, 1);
          }
        }
      else
        _fail(t);
      if((m_16 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_y_17;
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL;
  if(match_cons(t, sym__2))
    {
      c_14 = ATgetArgument(t, 0);
      d_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_10(c_14, d_14, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_k_15;
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_y_17;
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL;
  if(match_cons(t, sym__2))
    {
      e_14 = ATgetArgument(t, 0);
      f_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_10(e_14, f_14, t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = term_k_15;
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm u_14 = NULL;
  ATerm a_18 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_14 = ATgetArgument(t, 0);
          {
            ATerm c_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_18);
      t = u_14;
    }
  else
    {
      t = a_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_14;
    }
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm o_15 = NULL;
  ATerm d_18 = t;
  int e_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_15 = ATgetArgument(t, 0);
          {
            ATerm h_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_18);
      t = o_15;
    }
  else
    {
      t = d_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_15;
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm a_16 = NULL;
  ATerm i_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_16 = ATgetArgument(t, 0);
          {
            ATerm k_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_18);
      t = a_16;
    }
  else
    {
      t = i_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_16;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(t_1, u_1, sboundin_3_0, g_2, t);
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm c_24 = NULL,f_24 = NULL,g_24 = NULL;
  f_24 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      g_24 = ATgetArgument(t, 0);
      c_24 = ATgetArgument(t, 1);
      {
        ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL,x_24 = NULL;
        t = f_24;
        t = new_0_0(t);
        s_24 = t;
        t = new_0_0(t);
        t_24 = t;
        t = new_0_0(t);
        u_24 = t;
        t = new_0_0(t);
        x_24 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_24), u_24), t_24), s_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, s_24), (ATerm) ATmakeAppl(sym_Var_1, u_24))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, g_24, (ATerm)ATmakeAppl(sym_Var_1, s_24), (ATerm) ATmakeAppl(sym_Var_1, t_24)), (ATerm) ATmakeAppl(sym_BAM_3, c_24, (ATerm)ATmakeAppl(sym_Var_1, u_24), (ATerm) ATmakeAppl(sym_Var_1, x_24)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_l_18, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, x_24)), (ATerm) ATmakeAppl(sym_Var_1, t_24))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          g_24 = ATgetArgument(t, 0);
          {
            ATerm z_24 = NULL,a_25 = NULL,f_25 = NULL,h_25 = NULL;
            t = f_24;
            t = new_0_0(t);
            f_25 = t;
            t = g_24;
            {
              ATerm w_2 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((z_24 != NULL) && (z_24 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      z_24 = ATgetArgument(t, 0);
                    if(((a_25 != NULL) && (a_25 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      a_25 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, f_25);
                return(t);
              }
              t = oncetd_1_0(w_2, t);
              h_25 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_25), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_l_18, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_25)), not_null(z_24))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, f_25)), (ATerm) ATmakeAppl(sym_Build_1, h_25))));
            }
          }
        }
      else
        {
          ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL,r_25 = NULL,t_25 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              g_24 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_24;
          t = new_0_0(t);
          n_25 = t;
          t = new_0_0(t);
          r_25 = t;
          t = g_24;
          {
            ATerm x_2 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((l_25 != NULL) && (l_25 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    l_25 = ATgetArgument(t, 0);
                  if(((m_25 != NULL) && (m_25 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    m_25 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, n_25);
              return(t);
            }
            t = oncetd_1_0(x_2, t);
            t_25 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_25), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, t_25), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_25), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_25)), (ATerm) ATmakeAppl(sym_PrimT_3, term_m_18, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, r_25))))), (ATerm)ATmakeAppl(sym_Var_1, n_25), (ATerm) ATmakeAppl(sym_Op_2, term_n_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_25)), not_null(l_25)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL;
  x_25 = t;
  if(match_cons(t, sym_Match_1))
    {
      y_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL,l_26 = NULL;
        t = x_25;
        t = new_0_0(t);
        i_26 = t;
        t = y_25;
        {
          ATerm y_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((g_26 != NULL) && (g_26 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_26 = ATgetArgument(t, 0);
                if(((h_26 != NULL) && (h_26 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  h_26 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, i_26), g_26);
            return(t);
          }
          t = pat_td_1_0(y_2, t);
          l_26 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, l_26), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_q_18, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, i_26))), (ATerm) ATmakeAppl(sym_Match_1, not_null(h_26))))));
        }
        ;
        LocalPopChoice(p_18);
      }
    else
      {
        t = o_18;
        {
          ATerm r_18 = t;
          int s_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_26 = NULL,o_26 = NULL,t_26 = NULL;
              t = x_25;
              t = new_0_0(t);
              o_26 = t;
              t = y_25;
              {
                ATerm b_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((n_26 != NULL) && (n_26 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        n_26 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, o_26);
                  return(t);
                }
                t = pat_td_1_0(b_3, t);
                t_26 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, t_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, o_26)), not_null(n_26))));
              }
              ;
              LocalPopChoice(s_18);
            }
          else
            {
              t = r_18;
              {
                ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL;
                t = x_25;
                t = new_0_0(t);
                x_26 = t;
                t = y_25;
                {
                  ATerm c_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((w_26 != NULL) && (w_26 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          w_26 = ATgetArgument(t, 0);
                        if(((v_26 != NULL) && (v_26 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          v_26 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, x_26);
                    return(t);
                  }
                  t = pat_td_1_0(c_3, t);
                  y_26 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, y_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, x_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(v_26)), not_null(w_26)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm q_122 (ATerm), ATerm t)
{
  ATerm t_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_122(t);
      ;
      LocalPopChoice(u_18);
    }
  else
    {
      t = t_18;
      {
        ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL;
        b_32 = t;
        if(match_cons(t, sym_Op_2))
          {
            c_32 = ATgetArgument(t, 0);
            d_32 = ATgetArgument(t, 1);
            {
              ATerm k_13 = NULL,n_13 = NULL,y_1 = NULL;
              t = SSLgetAnnotations(b_32);
              k_13 = t;
              t = d_32;
              {
                ATerm f_3 (ATerm t)
                {
                  t = pat_td_1_0(q_122, t);
                  return(t);
                }
                t = fetch_1_0(f_3, t);
                n_13 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, c_32, n_13);
                y_1 = t;
                t = SSLsetAnnotations(y_1, k_13);
              }
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                c_32 = ATgetArgument(t, 0);
                d_32 = ATgetArgument(t, 1);
                {
                  ATerm v_18 = t;
                  int w_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_13 = NULL,s_14 = NULL,a_2 = NULL;
                      t = SSLgetAnnotations(b_32);
                      w_13 = t;
                      t = d_32;
                      t = pat_td_1_0(q_122, t);
                      s_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, c_32, s_14);
                      a_2 = t;
                      t = SSLsetAnnotations(a_2, w_13);
                      ;
                      LocalPopChoice(w_18);
                    }
                  else
                    {
                      t = v_18;
                      {
                        ATerm h_15 = NULL,s_15 = NULL,c_2 = NULL;
                        t = SSLgetAnnotations(b_32);
                        h_15 = t;
                        t = c_32;
                        t = pat_td_1_0(q_122, t);
                        s_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, s_15, d_32);
                        c_2 = t;
                        t = SSLsetAnnotations(c_2, h_15);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    c_32 = ATgetArgument(t, 0);
                    d_32 = ATgetArgument(t, 1);
                    a_32 = ATgetArgument(t, 2);
                    {
                      ATerm k_16 = NULL,t_16 = NULL,d_2 = NULL;
                      t = SSLgetAnnotations(b_32);
                      k_16 = t;
                      t = a_32;
                      {
                        ATerm h_3 (ATerm t)
                        {
                          t = pat_td_1_0(q_122, t);
                          return(t);
                        }
                        t = fetch_1_0(h_3, t);
                        t_16 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, c_32, d_32, t_16);
                        d_2 = t;
                        t = SSLsetAnnotations(d_2, k_16);
                      }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        c_32 = ATgetArgument(t, 0);
                        d_32 = ATgetArgument(t, 1);
                        a_32 = ATgetArgument(t, 2);
                        {
                          ATerm e_17 = NULL,i_17 = NULL,e_2 = NULL;
                          t = SSLgetAnnotations(b_32);
                          e_17 = t;
                          t = a_32;
                          {
                            ATerm n_3 (ATerm t)
                            {
                              t = pat_td_1_0(q_122, t);
                              return(t);
                            }
                            t = fetch_1_0(n_3, t);
                            i_17 = t;
                            t = (ATerm) ATmakeAppl(sym_CallT_3, c_32, d_32, i_17);
                            e_2 = t;
                            t = SSLsetAnnotations(e_2, e_17);
                          }
                        }
                      }
                    else
                      {
                        ATerm w_17 = NULL,z_17 = NULL,f_2 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            c_32 = ATgetArgument(t, 0);
                            d_32 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(b_32);
                        w_17 = t;
                        t = d_32;
                        t = pat_td_1_0(q_122, t);
                        z_17 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, c_32, z_17);
                        f_2 = t;
                        t = SSLsetAnnotations(f_2, w_17);
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
  ATerm y_32 = NULL,z_32 = NULL;
  y_32 = t;
  if(match_cons(t, sym_Build_1))
    {
      z_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_33 = NULL,b_33 = NULL,d_33 = NULL,e_33 = NULL;
        t = y_32;
        t = new_0_0(t);
        d_33 = t;
        t = z_32;
        {
          ATerm r_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((a_33 != NULL) && (a_33 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_33 = ATgetArgument(t, 0);
                if(((b_33 != NULL) && (b_33 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  b_33 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, d_33);
            return(t);
          }
          t = pat_td_1_0(r_3, t);
          e_33 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_33), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_b_19, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_33)), not_null(a_33))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_33)))), (ATerm) ATmakeAppl(sym_Build_1, e_33)));
        }
        ;
        LocalPopChoice(a_19);
      }
    else
      {
        t = z_18;
        {
          ATerm p_19 = t;
          int q_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_33 = NULL,l_33 = NULL,m_33 = NULL;
              t = y_32;
              t = new_0_0(t);
              l_33 = t;
              t = z_32;
              {
                ATerm u_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((h_33 != NULL) && (h_33 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        h_33 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, l_33);
                  return(t);
                }
                t = pat_td_1_0(u_3, t);
                m_33 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_33), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_33), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, l_33)))), (ATerm) ATmakeAppl(sym_Build_1, m_33)));
              }
              ;
              LocalPopChoice(q_19);
            }
          else
            {
              t = p_19;
              {
                ATerm n_33 = NULL,s_33 = NULL,u_33 = NULL,v_33 = NULL;
                t = y_32;
                t = new_0_0(t);
                u_33 = t;
                t = z_32;
                {
                  ATerm v_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((n_33 != NULL) && (n_33 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          n_33 = ATgetArgument(t, 0);
                        if(((s_33 != NULL) && (s_33 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          s_33 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, u_33);
                    return(t);
                  }
                  t = pat_td_1_0(v_3, t);
                  v_33 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_33), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(n_33), not_null(s_33), (ATerm) ATmakeAppl(sym_Var_1, u_33))), (ATerm) ATmakeAppl(sym_Build_1, v_33)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL,g_34 = NULL,i_34 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      g_34 = ATgetArgument(t, 0);
      i_34 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, g_34, i_34);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          g_34 = ATgetArgument(t, 0);
          t = g_34;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              b_34 = ATgetFirst((ATermList) t);
              c_34 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, b_34, (ATerm) ATmakeAppl(sym_LChoices_1, c_34));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_r_19;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              g_34 = ATgetArgument(t, 0);
              t = g_34;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_34 = ATgetFirst((ATermList) t);
                  c_34 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, b_34, (ATerm) ATmakeAppl(sym_Choices_1, c_34));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_r_19;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  g_34 = ATgetArgument(t, 0);
                  t = g_34;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      b_34 = ATgetFirst((ATermList) t);
                      c_34 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_34, (ATerm) ATmakeAppl(sym_Seqs_1, c_34));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_b_20;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      g_34 = ATgetArgument(t, 0);
                      i_34 = ATgetArgument(t, 1);
                      d_34 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, i_34, (ATerm) ATmakeAppl(sym_Op_2, term_n_18, (ATerm) ATinsert(ATinsert(ATempty, d_34), g_34)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          g_34 = ATgetArgument(t, 0);
                          i_34 = ATgetArgument(t, 1);
                          d_34 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, d_34)), g_34), (ATerm) ATmakeAppl(sym_Build_1, i_34)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              g_34 = ATgetArgument(t, 0);
                              i_34 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, g_34, (ATerm) ATmakeAppl(sym_Match_1, i_34));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  g_34 = ATgetArgument(t, 0);
                                  i_34 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, g_34), i_34);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      g_34 = ATgetArgument(t, 0);
                                      i_34 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, i_34), g_34);
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
ATerm y_3 (ATerm t)
{
  ATerm r_20 = t;
  if((PushChoice() == 0))
    {
      ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL,q_2 = NULL;
      p_37 = t;
      if(match_cons(t, sym_Var_1))
        {
          o_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_37);
      n_37 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, o_37);
      q_2 = t;
      t = SSLsetAnnotations(q_2, n_37);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_20;
    }
  return(t);
}
ATerm c_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_20;
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm q_37 = NULL,r_37 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_37 = ATgetFirst((ATermList) t);
      r_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_37, r_37);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_20 = ATgetArgument(t, 0);
      if(match_cons(v_20, sym__2))
        {
          u_37 = ATgetArgument(v_20, 0);
          v_37 = ATgetArgument(v_20, 1);
        }
      else
        _fail(t);
      {
        ATerm y_20 = ATgetArgument(t, 1);
        if(match_cons(y_20, sym__2))
          {
            w_37 = ATgetArgument(y_20, 0);
            x_37 = ATgetArgument(y_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_37), u_37), (ATerm) ATinsert(CheckATermList(x_37), v_37));
  return(t);
}
ATerm g_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_20;
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm a_38 = NULL,b_38 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_38 = ATgetFirst((ATermList) t);
      b_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_38, b_38);
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL,h_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_21 = ATgetArgument(t, 0);
      if(match_cons(a_21, sym__2))
        {
          c_38 = ATgetArgument(a_21, 0);
          d_38 = ATgetArgument(a_21, 1);
        }
      else
        _fail(t);
      {
        ATerm b_21 = ATgetArgument(t, 1);
        if(match_cons(b_21, sym__2))
          {
            e_38 = ATgetArgument(b_21, 0);
            h_38 = ATgetArgument(b_21, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_38), c_38), (ATerm) ATinsert(CheckATermList(h_38), d_38));
  return(t);
}
ATerm a_9 (ATerm x_70, ATerm y_70, ATerm z_70, ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,f_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,b_4 = NULL;
  t = z_70;
  t = fetch_1_0(y_3, t);
  t = z_70;
  t = genzip_4_0(c_4, d_4, e_4, LiftPrimArg_0_0, t);
  m_37 = t;
  if(match_cons(t, sym__2))
    {
      d_37 = ATgetArgument(t, 0);
      f_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_37);
  c_37 = t;
  t = d_37;
  t = concat_0_0(t);
  k_37 = t;
  t = f_37;
  t = genzip_4_0(g_4, h_4, i_4, _id, t);
  l_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_37, l_37);
  b_4 = t;
  t = SSLsetAnnotations(b_4, c_37);
  if(match_cons(t, sym__2))
    {
      w_36 = ATgetArgument(t, 0);
      {
        ATerm e_21 = ATgetArgument(t, 1);
        if(match_cons(e_21, sym__2))
          {
            x_36 = ATgetArgument(e_21, 0);
            b_37 = ATgetArgument(e_21, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, w_36, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_36), (ATerm) ATmakeAppl(sym_CallT_3, x_70, y_70, b_37)));
  return(t);
}
ATerm e_39 (ATerm o_38, ATerm t)
{
  ATerm w_38 = NULL;
  t = o_38;
  {
    ATerm f_21 = t;
    if((PushChoice() == 0))
      {
        ATerm x_38 = NULL,y_38 = NULL,a_39 = NULL,j_4 = NULL;
        a_39 = t;
        if(match_cons(t, sym_Var_1))
          {
            y_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_39);
        x_38 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, y_38);
        j_4 = t;
        t = SSLsetAnnotations(j_4, x_38);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_21;
      }
    t = new_0_0(t);
    w_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, w_38), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, o_38), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, w_38)))), (ATerm) ATmakeAppl(sym_Var_1, w_38)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm b_39 = NULL,c_39 = NULL;
  b_39 = t;
  if(match_cons(t, sym_Var_1))
    {
      c_39 = ATgetArgument(t, 0);
      {
        ATerm h_21 = t;
        int i_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_39(b_39, t);
            ;
            LocalPopChoice(i_21);
          }
        else
          {
            t = h_21;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_b_20, (ATerm) ATmakeAppl(sym_Var_1, c_39)));
          }
      }
    }
  else
    {
      t = e_39(b_39, t);
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm j_21 = t;
  if((PushChoice() == 0))
    {
      ATerm o_19 = NULL,v_19 = NULL,w_19 = NULL,l_4 = NULL;
      w_19 = t;
      if(match_cons(t, sym_Var_1))
        {
          v_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_19);
      o_19 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, v_19);
      l_4 = t;
      t = SSLsetAnnotations(l_4, o_19);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_21;
    }
  return(t);
}
ATerm p_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_20;
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm c_20 = NULL,f_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_20 = ATgetFirst((ATermList) t);
      f_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_20, f_20);
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_21 = ATgetArgument(t, 0);
      if(match_cons(l_21, sym__2))
        {
          g_20 = ATgetArgument(l_21, 0);
          h_20 = ATgetArgument(l_21, 1);
        }
      else
        _fail(t);
      {
        ATerm i_22 = ATgetArgument(t, 1);
        if(match_cons(i_22, sym__2))
          {
            i_20 = ATgetArgument(i_22, 0);
            j_20 = ATgetArgument(i_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_20), g_20), (ATerm) ATinsert(CheckATermList(j_20), h_20));
  return(t);
}
ATerm x_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_20;
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm k_20 = NULL,l_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_20 = ATgetFirst((ATermList) t);
      l_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_20, l_20);
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm m_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_22 = ATgetArgument(t, 0);
      if(match_cons(z_22, sym__2))
        {
          m_20 = ATgetArgument(z_22, 0);
          o_20 = ATgetArgument(z_22, 1);
        }
      else
        _fail(t);
      {
        ATerm g_23 = ATgetArgument(t, 1);
        if(match_cons(g_23, sym__2))
          {
            p_20 = ATgetArgument(g_23, 0);
            q_20 = ATgetArgument(g_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_20), m_20), (ATerm) ATinsert(CheckATermList(q_20), o_20));
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm h_23 = t;
  if((PushChoice() == 0))
    {
      ATerm l_22 = NULL,m_22 = NULL,p_22 = NULL,n_4 = NULL;
      p_22 = t;
      if(match_cons(t, sym_Var_1))
        {
          m_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_22);
      l_22 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, m_22);
      n_4 = t;
      t = SSLsetAnnotations(n_4, l_22);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_23;
    }
  return(t);
}
ATerm d_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_20;
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm q_22 = NULL,r_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_22 = ATgetFirst((ATermList) t);
      r_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_22, r_22);
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm s_22 = NULL,w_22 = NULL,d_23 = NULL,e_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_23 = ATgetArgument(t, 0);
      if(match_cons(j_23, sym__2))
        {
          s_22 = ATgetArgument(j_23, 0);
          w_22 = ATgetArgument(j_23, 1);
        }
      else
        _fail(t);
      {
        ATerm l_23 = ATgetArgument(t, 1);
        if(match_cons(l_23, sym__2))
          {
            d_23 = ATgetArgument(l_23, 0);
            e_23 = ATgetArgument(l_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_23), s_22), (ATerm) ATinsert(CheckATermList(e_23), w_22));
  return(t);
}
ATerm h_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_20;
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm f_23 = NULL,i_23 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_23 = ATgetFirst((ATermList) t);
      i_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_23, i_23);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,s_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_23 = ATgetArgument(t, 0);
      if(match_cons(t_23, sym__2))
        {
          o_23 = ATgetArgument(t_23, 0);
          p_23 = ATgetArgument(t_23, 1);
        }
      else
        _fail(t);
      {
        ATerm u_23 = ATgetArgument(t, 1);
        if(match_cons(u_23, sym__2))
          {
            q_23 = ATgetArgument(u_23, 0);
            s_23 = ATgetArgument(u_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_23), o_23), (ATerm) ATinsert(CheckATermList(s_23), p_23));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm u_43 = NULL,x_43 = NULL,z_43 = NULL,a_44 = NULL;
  x_43 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      z_43 = ATgetArgument(t, 0);
      a_44 = ATgetArgument(t, 1);
      u_43 = ATgetArgument(t, 2);
      {
        ATerm x_18 = NULL,y_18 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,m_4 = NULL;
        t = u_43;
        t = fetch_1_0(k_4, t);
        t = u_43;
        t = genzip_4_0(p_4, q_4, w_4, LiftPrimArg_0_0, t);
        n_19 = t;
        if(match_cons(t, sym__2))
          {
            f_19 = ATgetArgument(t, 0);
            g_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_19);
        e_19 = t;
        t = f_19;
        t = concat_0_0(t);
        l_19 = t;
        t = g_19;
        t = genzip_4_0(x_4, y_4, b_5, _id, t);
        m_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_19, m_19);
        m_4 = t;
        t = SSLsetAnnotations(m_4, e_19);
        if(match_cons(t, sym__2))
          {
            x_18 = ATgetArgument(t, 0);
            {
              ATerm y_23 = ATgetArgument(t, 1);
              if(match_cons(y_23, sym__2))
                {
                  y_18 = ATgetArgument(y_23, 0);
                  d_19 = ATgetArgument(y_23, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, x_18, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, y_18), (ATerm) ATmakeAppl(sym_PrimT_3, z_43, a_44, d_19)));
      }
    }
  else
    {
      ATerm k_21 = NULL,t_21 = NULL,u_21 = NULL,z_21 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL,k_22 = NULL,o_4 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          z_43 = ATgetArgument(t, 0);
          a_44 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_44;
      t = fetch_1_0(c_5, t);
      t = a_44;
      t = genzip_4_0(d_5, e_5, f_5, LiftPrimArg_0_0, t);
      k_22 = t;
      if(match_cons(t, sym__2))
        {
          c_22 = ATgetArgument(t, 0);
          d_22 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_22);
      z_21 = t;
      t = c_22;
      t = concat_0_0(t);
      e_22 = t;
      t = d_22;
      t = genzip_4_0(h_5, k_5, l_5, _id, t);
      f_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_22, f_22);
      o_4 = t;
      t = SSLsetAnnotations(o_4, z_21);
      if(match_cons(t, sym__2))
        {
          k_21 = ATgetArgument(t, 0);
          {
            ATerm z_23 = ATgetArgument(t, 1);
            if(match_cons(z_23, sym__2))
              {
                t_21 = ATgetArgument(z_23, 0);
                u_21 = ATgetArgument(z_23, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, k_21, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, t_21), (ATerm) ATmakeAppl(sym_PrimT_3, z_43, (ATerm)ATempty, u_21)));
    }
  return(t);
}
ATerm repeat_1_0 (ATerm v_109 (ATerm), ATerm t)
{
  ATerm g_44 (ATerm t)
  {
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_109(t);
        t = g_44(t);
        ;
        LocalPopChoice(b_24);
      }
    else
      {
        t = a_24;
      }
    return(t);
  }
  t = g_44(t);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL;
  v_44 = t;
  if(match_cons(t, sym_Con_3))
    {
      s_44 = ATgetArgument(t, 0);
      t_44 = ATgetArgument(t, 1);
      u_44 = ATgetArgument(t, 2);
      {
        ATerm m_24 = NULL,g_5 = NULL;
        t = SSLgetAnnotations(v_44);
        m_24 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, s_44, t_44, u_44);
        g_5 = t;
        t = SSLsetAnnotations(g_5, m_24);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = v_44;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm d_24 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(o_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_24;
    }
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL;
  t_45 = t;
  if(match_cons(t, sym_Con_3))
    {
      u_45 = ATgetArgument(t, 0);
      v_45 = ATgetArgument(t, 1);
      s_45 = ATgetArgument(t, 2);
      {
        ATerm j_25 = NULL,i_5 = NULL;
        t = SSLgetAnnotations(t_45);
        j_25 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, u_45, v_45, s_45);
        i_5 = t;
        t = SSLsetAnnotations(i_5, j_25);
      }
    }
  else
    {
      ATerm c_26 = NULL,j_5 = NULL;
      if(match_cons(t, sym_App_2))
        {
          u_45 = ATgetArgument(t, 0);
          v_45 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_45);
      c_26 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, u_45, v_45);
      j_5 = t;
      t = SSLsetAnnotations(j_5, c_26);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm e_24 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(p_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_24;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      q_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_47;
  if(match_cons(t, sym_StratRule_3))
    {
      r_47 = ATgetArgument(t, 0);
      s_47 = ATgetArgument(t, 1);
      t_47 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_47), (ATerm) ATmakeAppl(sym_Where_1, t_47)), r_47));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          r_47 = ATgetArgument(t, 0);
          s_47 = ATgetArgument(t, 1);
          t_47 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = r_47;
      t = pureterm_0_0(t);
      t = s_47;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, s_47)), (ATerm) ATmakeAppl(sym_Where_1, t_47)), (ATerm) ATmakeAppl(sym_Match_1, r_47)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm h_94 (ATerm), ATerm t)
{
  ATerm a_48 (ATerm t)
  {
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_94(t);
        ;
        LocalPopChoice(i_24);
      }
    else
      {
        t = h_24;
        t = SRTS_one(a_48, t);
      }
    return(t);
  }
  t = a_48(t);
  return(t);
}
ATerm e_9 (ATerm k_66, ATerm l_66, ATerm m_66, ATerm t)
{
  ATerm b_48 = NULL,c_48 = NULL,g_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL;
  t = new_0_0(t);
  i_48 = t;
  t = k_66;
  {
    ATerm q_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm j_24 = ATgetArgument(t, 0);
          if(match_cons(j_24, sym_Var_1))
            {
              if(((h_48 != NULL) && (h_48 != ATgetArgument(j_24, 0))))
                _fail(ATgetArgument(j_24, 0));
              else
                h_48 = ATgetArgument(j_24, 0);
            }
          else
            _fail(t);
          if(((c_48 != NULL) && (c_48 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            c_48 = ATgetArgument(t, 1);
          {
            ATerm k_24 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, h_48);
      return(t);
    }
    t = oncetd_1_0(q_5, t);
    j_48 = t;
    t = l_66;
    {
      ATerm r_5 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm l_24 = ATgetArgument(t, 0);
            if(match_cons(l_24, sym_Var_1))
              {
                if(((h_48 != NULL) && (h_48 != ATgetArgument(l_24, 0))))
                  _fail(ATgetArgument(l_24, 0));
                else
                  h_48 = ATgetArgument(l_24, 0);
              }
            else
              _fail(t);
            if(((g_48 != NULL) && (g_48 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              g_48 = ATgetArgument(t, 1);
            {
              ATerm n_24 = ATgetArgument(t, 2);
              if(match_cons(n_24, sym_CallT_3))
                {
                  if(((b_48 != NULL) && (b_48 != ATgetArgument(n_24, 0))))
                    _fail(ATgetArgument(n_24, 0));
                  else
                    b_48 = ATgetArgument(n_24, 0);
                  {
                    ATerm o_24 = ATgetArgument(n_24, 1);
                    if(((ATgetType(o_24) != AT_LIST) || !(ATisEmpty(o_24))))
                      _fail(t);
                  }
                  {
                    ATerm p_24 = ATgetArgument(n_24, 2);
                    if(((ATgetType(p_24) != AT_LIST) || !(ATisEmpty(p_24))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, i_48);
        return(t);
      }
      t = oncetd_1_0(r_5, t);
      k_48 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_48), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, j_48, k_48, (ATerm) ATmakeAppl(sym_Seq_2, m_66, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(b_48), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(c_48), not_null(g_48), term_b_20))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(h_48)), (ATerm) ATmakeAppl(sym_Var_1, i_48))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm q_24 = t;
  int r_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_24 = t;
      int w_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_49 = NULL,u_49 = NULL,y_49 = NULL,b_50 = NULL,h_50 = NULL,k_50 = NULL;
          b_50 = t;
          if(match_cons(t, sym_SRule_1))
            {
              h_50 = ATgetArgument(t, 0);
              t = h_50;
              if(match_cons(t, sym_Rule_3))
                {
                  t_49 = ATgetArgument(t, 0);
                  u_49 = ATgetArgument(t, 1);
                  y_49 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = b_50;
              t = e_9(t_49, u_49, y_49, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm a_27 = NULL,d_27 = NULL,x_5 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  h_50 = ATgetArgument(t, 0);
                  k_50 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(b_50);
              a_27 = t;
              t = k_50;
              t = desugarRule_0_0(t);
              d_27 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, h_50, d_27);
              x_5 = t;
              t = SSLsetAnnotations(x_5, a_27);
            }
          ;
          LocalPopChoice(w_24);
        }
      else
        {
          t = v_24;
          t = RtoS_0_0(t);
        }
      ;
      LocalPopChoice(r_24);
    }
  else
    {
      t = q_24;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm d_93 (ATerm), ATerm t)
{
  ATerm s_5 (ATerm t)
  {
    t = topdown_1_0(d_93, t);
    return(t);
  }
  t = d_93(t);
  t = SRTS_all(s_5, t);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm y_24 = t;
  int b_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(b_25);
    }
  else
    {
      t = y_24;
    }
  t = repeat_1_0(w_5, t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm c_25 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
      LocalPopChoice(d_25);
    }
  else
    {
      t = c_25;
      {
        ATerm e_25 = t;
        int g_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_51 = NULL,z_51 = NULL,a_52 = NULL,f_52 = NULL;
            w_51 = t;
            if(match_cons(t, sym_CallT_3))
              {
                z_51 = ATgetArgument(t, 0);
                a_52 = ATgetArgument(t, 1);
                f_52 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = w_51;
            t = a_9(z_51, a_52, f_52, t);
            ;
            LocalPopChoice(g_25);
          }
        else
          {
            t = e_25;
            {
              ATerm i_25 = t;
              int k_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(k_25);
                }
              else
                {
                  t = i_25;
                  {
                    ATerm o_25 = t;
                    int p_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(p_25);
                      }
                    else
                      {
                        t = o_25;
                        {
                          ATerm q_25 = t;
                          int s_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm u_25 = t;
                              int v_25 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      k_52 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = k_52;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      l_52 = ATgetArgument(t, 0);
                                      t = l_52;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          l_52 = ATgetArgument(t, 0);
                                          m_52 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, l_52, m_52);
                                    }
                                  ;
                                  LocalPopChoice(v_25);
                                }
                              else
                                {
                                  t = u_25;
                                  t = Mapp2_0_0(t);
                                }
                              ;
                              LocalPopChoice(s_25);
                            }
                          else
                            {
                              t = q_25;
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
  t = topdown_1_0(t_5, t);
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm f_53 = NULL,h_53 = NULL;
  h_53 = t;
  t = SSL_explode_term(h_53);
  if(match_cons(t, sym__2))
    {
      ATerm w_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_25 = ATgetArgument(t, 1);
        if(((ATgetType(z_25) == AT_LIST) && !(ATisEmpty(z_25))))
          {
            f_53 = ATgetFirst((ATermList) z_25);
            {
              ATerm a_26 = (ATerm) ATgetNext((ATermList) z_25);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_53;
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm i_27 = NULL,k_27 = NULL,l_27 = NULL;
  l_27 = t;
  t = SSL_explode_term(l_27);
  if(match_cons(t, sym__2))
    {
      ATerm b_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_26 = ATgetArgument(t, 1);
        if(((ATgetType(d_26) == AT_LIST) && !(ATisEmpty(d_26))))
          {
            ATerm e_26 = ATgetFirst((ATermList) d_26);
            i_27 = (ATerm) ATgetNext((ATermList) d_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_n_18;
  k_27 = t;
  t = SSL_mkterm(k_27, i_27);
  return(t);
}
ATerm a_6 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm f_97 (ATerm), ATerm t)
{
  ATerm z_52 = NULL,a_53 = NULL;
  ATerm i_53 (ATerm t)
  {
    ATerm f_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_53 = NULL,c_53 = NULL,d_53 = NULL;
        b_53 = t;
        t = map_1_0(y_5, t);
        t = f_97(t);
        c_53 = t;
        t = b_53;
        t = map_1_0(z_5, t);
        t = i_53(t);
        d_53 = t;
        t = (ATerm) ATinsert(CheckATermList(d_53), c_53);
        ;
        LocalPopChoice(j_26);
      }
    else
      {
        t = f_26;
        t = map_1_0(a_6, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = i_53(t);
  a_53 = t;
  t = term_n_18;
  z_52 = t;
  t = SSL_mkterm(z_52, a_53);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm m_53 = NULL;
  m_53 = t;
  {
    ATerm k_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_53 = NULL,p_53 = NULL,q_53 = NULL;
        t = m_53;
        t = new_0_0(t);
        o_53 = t;
        t = new_0_0(t);
        p_53 = t;
        t = new_0_0(t);
        q_53 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_53), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_n_18, (ATerm) ATinsert(ATinsert(ATempty, m_53), (ATerm) ATmakeAppl(sym_Var_1, p_53))), (ATerm) ATmakeAppl(sym_Var_1, q_53)), (ATerm)ATmakeAppl(sym_VarDec_2, o_53, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_26), term_r_26)), p_53, (ATerm)ATmakeAppl(sym_Var_1, p_53), q_53, (ATerm) ATmakeAppl(sym_Var_1, q_53));
        ;
        LocalPopChoice(m_26);
      }
    else
      {
        t = k_26;
        {
          ATerm s_53 = NULL,y_53 = NULL,z_53 = NULL;
          t = m_53;
          t = new_0_0(t);
          s_53 = t;
          t = new_0_0(t);
          y_53 = t;
          t = new_0_0(t);
          z_53 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, s_53), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_n_18, (ATerm) ATinsert(ATinsert(ATempty, m_53), (ATerm) ATmakeAppl(sym_Var_1, y_53))), (ATerm) ATmakeAppl(sym_Var_1, z_53)), (ATerm)ATmakeAppl(sym_VarDec_2, s_53, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_26), term_r_26)), y_53, (ATerm)ATmakeAppl(sym_Var_1, y_53), z_53, (ATerm) ATmakeAppl(sym_Var_1, z_53));
        }
      }
  }
  return(t);
}
ATerm f_9 (ATerm n_34, ATerm p_34, ATerm t)
{
  ATerm s_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(n_34, p_34);
      ;
      LocalPopChoice(u_26);
    }
  else
    {
      t = s_26;
      t = SSL_subtr(n_34, p_34);
    }
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm a_54 = NULL,b_54 = NULL;
  if(match_cons(t, sym__2))
    {
      a_54 = ATgetArgument(t, 0);
      b_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, a_54, b_54, (ATerm) ATempty);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm c_54 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm z_26 = ATgetArgument(t, 0);
      if(((ATgetType(z_26) != AT_INT) || (ATgetInt((ATermInt) z_26) != 0)))
        _fail(t);
      {
        ATerm b_27 = ATgetArgument(t, 1);
      }
      c_54 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = c_54;
  return(t);
}
ATerm copy_1_0 (ATerm k_104 (ATerm), ATerm t)
{
  ATerm d_6 (ATerm t)
  {
    ATerm j_54 = NULL,k_54 = NULL,l_54 = NULL,m_54 = NULL,n_54 = NULL,o_54 = NULL;
    if(match_cons(t, sym__3))
      {
        j_54 = ATgetArgument(t, 0);
        k_54 = ATgetArgument(t, 1);
        l_54 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, j_54, term_k_15);
    t = geq_0_0(t);
    t = term_k_15;
    o_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_54, term_k_15);
    t = f_9(j_54, o_54, t);
    m_54 = t;
    t = k_54;
    t = k_104(t);
    n_54 = t;
    t = (ATerm) ATmakeAppl(sym__3, m_54, k_54, (ATerm) ATinsert(CheckATermList(l_54), n_54));
    return(t);
  }
  t = for_3_0(b_6, c_6, d_6, t);
  return(t);
}
ATerm g_9 (ATerm g_47, ATerm h_47, ATerm t)
{
  ATerm r_54 = NULL,s_54 = NULL,t_54 = NULL;
  t = new_0_0(t);
  r_54 = t;
  t = new_0_0(t);
  s_54 = t;
  t = new_0_0(t);
  t_54 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_54), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_n_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_47)), (ATerm) ATmakeAppl(sym_Var_1, s_54))), (ATerm) ATmakeAppl(sym_Op_2, term_n_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, h_47)), (ATerm) ATmakeAppl(sym_Var_1, t_54)))), (ATerm)ATmakeAppl(sym_VarDec_2, r_54, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_26), term_r_26)), s_54, (ATerm)ATmakeAppl(sym_Var_1, s_54), t_54, (ATerm) ATmakeAppl(sym_Var_1, t_54));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm g_55 = NULL,i_55 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_55 = ATgetFirst((ATermList) t);
      i_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_55;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_55;
    }
  else
    {
      t = i_55;
      t = last_0_0(t);
    }
  return(t);
}
ATerm r_59 (ATerm k_56, ATerm l_56, ATerm m_56, ATerm n_56, ATerm t)
{
  ATerm r_56 = NULL,s_56 = NULL,t_56 = NULL,v_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,g_57 = NULL,k_57 = NULL,l_57 = NULL;
  t = term_k_15;
  l_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_56, term_k_15);
  t = k_10(l_56, l_57, t);
  k_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_57, term_f_15);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_56 = ATgetFirst((ATermList) t);
      t_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_56;
  t = last_0_0(t);
  r_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_56), s_56), t_56);
  t = genzip_4_0(f_6, g_6, j_6, l_6, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      v_56 = ATgetArgument(t, 0);
      w_56 = ATgetArgument(t, 1);
      x_56 = ATgetArgument(t, 2);
      y_56 = ATgetArgument(t, 3);
      z_56 = ATgetArgument(t, 4);
      a_57 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_56), x_56), t_56);
  t = concat_0_0(t);
  g_57 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, k_56, term_c_27), w_56, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(g_57), s_56), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_n_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, s_56)), (ATerm) ATmakeAppl(sym_Op_2, k_56, y_56))), (ATerm)ATmakeAppl(sym_Op_2, term_n_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, r_56)), (ATerm) ATmakeAppl(sym_Op_2, k_56, a_57))), (ATerm) ATmakeAppl(sym_Seqs_1, v_56)))));
  return(t);
}
ATerm s_59 (ATerm g_58, ATerm h_58, ATerm i_58, ATerm j_58, ATerm t)
{
  ATerm o_58 = NULL,p_58 = NULL,r_58 = NULL,s_58 = NULL,w_58 = NULL,x_58 = NULL,z_58 = NULL,a_59 = NULL;
  t = j_58;
  t = new_0_0(t);
  o_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_58, (ATerm) ATmakeAppl(sym_Var_1, o_58));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      p_58 = ATgetArgument(t, 0);
      r_58 = ATgetArgument(t, 1);
      s_58 = ATgetArgument(t, 2);
      w_58 = ATgetArgument(t, 3);
      x_58 = ATgetArgument(t, 4);
      z_58 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_58, x_58);
  t = conc_0_0(t);
  a_59 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, g_58, term_e_27), r_58, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(a_59), o_58), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_n_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, o_58)), (ATerm) ATmakeAppl(sym_Op_2, g_58, w_58))), (ATerm)ATmakeAppl(sym_Op_2, g_58, z_58), (ATerm) ATmakeAppl(sym_Seqs_1, p_58)))));
  return(t);
}
ATerm f_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_27 = ATgetArgument(t, 0);
      ATerm g_27 = ATgetArgument(t, 1);
      if(((ATgetType(g_27) != AT_LIST) || !(ATisEmpty(g_27))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm m_57 = NULL,p_57 = NULL,w_57 = NULL,x_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_27 = ATgetArgument(t, 0);
      if(((ATgetType(h_27) == AT_LIST) && !(ATisEmpty(h_27))))
        {
          m_57 = ATgetFirst((ATermList) h_27);
          p_57 = (ATerm) ATgetNext((ATermList) h_27);
        }
      else
        _fail(t);
      {
        ATerm j_27 = ATgetArgument(t, 1);
        if(((ATgetType(j_27) == AT_LIST) && !(ATisEmpty(j_27))))
          {
            w_57 = ATgetFirst((ATermList) j_27);
            x_57 = (ATerm) ATgetNext((ATermList) j_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_57, w_57), (ATerm) ATmakeAppl(sym__2, p_57, x_57));
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm y_57 = NULL,b_58 = NULL;
  if(match_cons(t, sym__2))
    {
      y_57 = ATgetArgument(t, 0);
      b_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_58), y_57);
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm c_58 = NULL,d_58 = NULL;
  if(match_cons(t, sym__2))
    {
      c_58 = ATgetArgument(t, 0);
      d_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_9(c_58, d_58, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm c_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL,o_59 = NULL;
  c_59 = t;
  if(match_cons(t, sym__3))
    {
      k_59 = ATgetArgument(t, 0);
      l_59 = ATgetArgument(t, 1);
      m_59 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = l_59;
  if(match_string(t, "T"))
    {
      t = m_59;
      if(match_cons(t, sym__2))
        {
          n_59 = ATgetArgument(t, 0);
          o_59 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = n_59;
      if(match_int(t, 0))
        {
          ATerm m_27 = t;
          int n_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_59(k_59, n_59, o_59, c_59, t);
              ;
              LocalPopChoice(n_27);
            }
          else
            {
              t = m_27;
              {
                ATerm q_59 = NULL;
                t = c_59;
                t = new_0_0(t);
                q_59 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, k_59, term_c_27), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_59), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_n_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, q_59)), (ATerm) ATmakeAppl(sym_Op_2, k_59, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_n_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, q_59)), (ATerm) ATmakeAppl(sym_Op_2, k_59, (ATerm) ATempty))), term_b_20))));
              }
            }
        }
      else
        {
          t = r_59(k_59, n_59, o_59, c_59, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = m_59;
      if(match_cons(t, sym__2))
        {
          n_59 = ATgetArgument(t, 0);
          o_59 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_59(k_59, n_59, o_59, c_59, t);
    }
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = term_r_19;
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm s_16 = NULL,u_16 = NULL,w_12 = NULL;
  s_16 = t;
  t = SSL_explode_term(s_16);
  if(match_cons(t, sym__2))
    {
      ATerm o_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_27 = ATgetArgument(t, 1);
        if(((ATgetType(p_27) == AT_LIST) && !(ATisEmpty(p_27))))
          {
            u_16 = ATgetFirst((ATermList) p_27);
            {
              ATerm q_27 = (ATerm) ATgetNext((ATermList) p_27);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(s_16);
  if(match_cons(t, sym__2))
    {
      ATerm s_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_27 = ATgetArgument(t, 1);
        if(((ATgetType(t_27) == AT_LIST) && !(ATisEmpty(t_27))))
          {
            ATerm u_27 = ATgetFirst((ATermList) t_27);
            ATerm v_27 = (ATerm) ATgetNext((ATermList) t_27);
            if(((ATgetType(v_27) == AT_LIST) && !(ATisEmpty(v_27))))
              {
                w_12 = ATgetFirst((ATermList) v_27);
                {
                  ATerm w_27 = (ATerm) ATgetNext((ATermList) v_27);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, u_16, w_12);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(o_6, q_6, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm m_17 = NULL,q_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,f_18 = NULL,g_18 = NULL;
  s_17 = t;
  if(match_cons(t, sym__2))
    {
      t_17 = ATgetArgument(t, 0);
      u_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_17;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_18 = ATgetFirst((ATermList) t);
      g_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = f_18;
  if(match_cons(t, sym__2))
    {
      m_17 = ATgetArgument(t, 0);
      q_17 = ATgetArgument(t, 1);
      {
        ATerm x_27 = t;
        int y_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_17;
            if((t_17 != t))
              {
                _fail(t);
              }
            t = q_17;
            ;
            LocalPopChoice(y_27);
          }
        else
          {
            t = x_27;
            t = (ATerm) ATmakeAppl(sym__2, t_17, g_18);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, t_17, g_18);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm v_94 (ATerm), ATerm t)
{
  ATerm c_19 (ATerm t)
  {
    ATerm a_28 = t;
    int b_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_94(t);
        ;
        LocalPopChoice(b_28);
      }
    else
      {
        t = a_28;
        t = SRTS_all(c_19, t);
      }
    return(t);
  }
  t = c_19(t);
  return(t);
}
ATerm r_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_28 = ATgetArgument(t, 0);
      if(((ATgetType(c_28) != AT_LIST) || !(ATisEmpty(c_28))))
        _fail(t);
      {
        ATerm d_28 = ATgetArgument(t, 1);
        if(((ATgetType(d_28) != AT_LIST) || !(ATisEmpty(d_28))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm t_19 = NULL,u_19 = NULL,x_19 = NULL,y_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_28 = ATgetArgument(t, 0);
      if(((ATgetType(e_28) == AT_LIST) && !(ATisEmpty(e_28))))
        {
          t_19 = ATgetFirst((ATermList) e_28);
          u_19 = (ATerm) ATgetNext((ATermList) e_28);
        }
      else
        _fail(t);
      {
        ATerm f_28 = ATgetArgument(t, 1);
        if(((ATgetType(f_28) == AT_LIST) && !(ATisEmpty(f_28))))
          {
            x_19 = ATgetFirst((ATermList) f_28);
            y_19 = (ATerm) ATgetNext((ATermList) f_28);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_19, x_19), (ATerm) ATmakeAppl(sym__2, u_19, y_19));
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL;
  if(match_cons(t, sym__2))
    {
      z_19 = ATgetArgument(t, 0);
      a_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_20), z_19);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL;
  h_19 = t;
  {
    ATerm g_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_28 = ATgetArgument(t, 0);
            ATerm j_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(h_28);
        t = h_19;
      }
    else
      {
        t = g_28;
        {
          ATerm s_19 = NULL;
          if(match_cons(t, sym__3))
            {
              i_19 = ATgetArgument(t, 0);
              j_19 = ATgetArgument(t, 1);
              k_19 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, i_19, j_19);
          t = genzip_4_0(r_6, t_6, v_6, _id, t);
          s_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_19, k_19);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm m_92 (ATerm), ATerm n_92 (ATerm), ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL;
  ATerm x_6 (ATerm t)
  {
    ATerm b_13 = NULL;
    t = m_92(t);
    b_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_13, not_null(e_20));
    t = lookup_0_0(t);
    t = n_92(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((e_20 != NULL) && (e_20 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_20 = ATgetArgument(t, 0);
      d_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_20;
  t = alltd_1_0(x_6, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,h_6 = NULL;
  q_21 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      n_21 = ATgetArgument(t, 0);
      o_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_21);
  m_21 = t;
  t = n_21;
  t = new_0_0(t);
  p_21 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, p_21, o_21);
  h_6 = t;
  t = SSLsetAnnotations(h_6, m_21);
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,i_6 = NULL;
  x_21 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      s_21 = ATgetArgument(t, 0);
      v_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_21);
  r_21 = t;
  t = s_21;
  t = new_0_0(t);
  w_21 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, w_21, v_21);
  i_6 = t;
  t = SSLsetAnnotations(i_6, r_21);
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm y_21 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      y_21 = ATgetArgument(t, 0);
      {
        ATerm k_28 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_21), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm a_22 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      a_22 = ATgetArgument(t, 0);
      {
        ATerm l_28 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, a_22);
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm t_22 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      t_22 = ATgetArgument(t, 0);
      {
        ATerm m_28 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = t_22;
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm u_22 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      u_22 = ATgetArgument(t, 0);
      {
        ATerm n_28 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = u_22;
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm v_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      a_23 = ATgetArgument(t, 0);
      c_23 = ATgetArgument(t, 1);
      v_22 = ATgetArgument(t, 2);
      t = a_23;
      if(match_cons(t, sym_SVar_1))
        {
          b_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_23;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_22;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_23;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          a_23 = ATgetArgument(t, 0);
          c_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_23;
      if(match_cons(t, sym_SVar_1))
        {
          b_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_23;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_23;
    }
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm k_23 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_23;
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm n_20 = NULL,s_20 = NULL,t_20 = NULL,w_20 = NULL,x_20 = NULL,z_20 = NULL,c_21 = NULL,d_21 = NULL,g_21 = NULL;
  z_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_28 = ATgetFirst((ATermList) t);
      if(match_cons(o_28, sym_SDefT_4))
        {
          n_20 = ATgetArgument(o_28, 0);
          s_20 = ATgetArgument(o_28, 1);
          t_20 = ATgetArgument(o_28, 2);
          {
            ATerm q_28 = ATgetArgument(o_28, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm p_28 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_20;
  t = map_1_0(z_6, t);
  w_20 = t;
  t = t_20;
  t = map_1_0(a_7, t);
  x_20 = t;
  t = w_20;
  t = map_1_0(c_7, t);
  d_21 = t;
  t = x_20;
  t = map_1_0(e_7, t);
  c_21 = t;
  t = z_20;
  {
    ATerm f_7 (ATerm t)
    {
      ATerm b_22 = NULL,g_22 = NULL,h_22 = NULL,j_22 = NULL,n_22 = NULL,o_22 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm r_28 = ATgetArgument(t, 0);
          b_22 = ATgetArgument(t, 1);
          g_22 = ATgetArgument(t, 2);
          h_22 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = g_22;
      t = map_1_0(g_7, t);
      j_22 = t;
      t = b_22;
      t = map_1_0(h_7, t);
      o_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, o_22, d_21, h_22);
      t = substitute_2_0(i_7, _id, t);
      n_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, j_22, c_21, n_22);
      t = substitute_2_0(n_7, _id, t);
      return(t);
    }
    t = map_1_0(f_7, t);
    t = choices_0_0(t);
    g_21 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, n_20, w_20, x_20, g_21);
  }
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,r_23 = NULL;
  t = term_g_15;
  n_23 = t;
  t = (ATerm) ATinsert(ATempty, term_t_28);
  r_23 = t;
  t = SSL_printnl(n_23, r_23);
  t = term_k_15;
  m_23 = t;
  t = SSL_exit(m_23);
  t = (ATerm) ATinsert(ATempty, term_t_28);
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_u_28;
  return(t);
}
ATerm JoinDefsExt_0_0 (ATerm t)
{
  ATerm v_23 = NULL;
  ATerm o_7 (ATerm t)
  {
    ATerm w_23 = NULL,x_23 = NULL;
    w_23 = t;
    {
      ATerm v_28 = t;
      int w_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_ExtSDef_3))
            {
              x_23 = ATgetArgument(t, 0);
              {
                ATerm x_28 = ATgetArgument(t, 1);
              }
              {
                ATerm z_28 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          LocalPopChoice(w_28);
          t = x_23;
          if(((v_23 != NULL) && (v_23 != t)))
            _fail(t);
          else
            v_23 = t;
          t = w_23;
        }
      else
        {
          t = v_28;
          if(match_cons(t, sym_ExtSDefInl_4))
            {
              x_23 = ATgetArgument(t, 0);
              {
                ATerm a_29 = ATgetArgument(t, 1);
              }
              {
                ATerm b_29 = ATgetArgument(t, 2);
              }
              {
                ATerm c_29 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = x_23;
          if(((v_23 != NULL) && (v_23 != t)))
            _fail(t);
          else
            v_23 = t;
          t = w_23;
        }
    }
    return(t);
  }
  t = fetch_1_0(o_7, t);
  t = not_null(v_23);
  t = debug_1_0(p_7, t);
  t = giving_up_0_0(t);
  return(t);
}
ATerm r_61 (ATerm z_59, ATerm a_60, ATerm b_60, ATerm c_60, ATerm t)
{
  ATerm g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,m_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_59, a_60);
  t = Definitions_0_0(t);
  g_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_60, b_60);
  j_60 = t;
  if(match_cons(t, sym__2))
    {
      ATerm d_29 = ATgetArgument(t, 0);
      ATerm e_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_60);
  h_60 = t;
  t = g_60;
  {
    ATerm f_29 = t;
    int g_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_60 = NULL,q_60 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_60 = ATgetFirst((ATermList) t);
            q_60 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_60;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_60;
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
              t = JoinDefsExt_0_0(t);
              ;
              LocalPopChoice(i_29);
            }
          else
            {
              t = h_29;
              t = JoinDefs2_0_0(t);
            }
        }
      }
    i_60 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_60, b_60);
    m_6 = t;
    t = SSLsetAnnotations(m_6, h_60);
  }
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm s_60 = NULL,t_60 = NULL,u_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL;
  u_60 = t;
  if(match_cons(t, sym__2))
    {
      z_60 = ATgetArgument(t, 0);
      c_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_60;
  if(match_cons(t, sym__2))
    {
      a_61 = ATgetArgument(t, 0);
      b_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_61;
  if(match_cons(t, sym_Mod_2))
    {
      s_60 = ATgetArgument(t, 0);
      t_60 = ATgetArgument(t, 1);
      {
        ATerm j_29 = t;
        int l_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_61 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, s_60, t_60, b_61);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            q_61 = t;
            t = (ATerm) ATmakeAppl(sym__2, q_61, c_61);
            ;
            LocalPopChoice(l_29);
          }
        else
          {
            t = j_29;
            t = r_61(a_61, b_61, c_61, u_60, t);
          }
      }
    }
  else
    {
      t = r_61(a_61, b_61, c_61, u_60, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm u_99 (ATerm), ATerm t)
{
  ATerm g_63 (ATerm t)
  {
    ATerm s_62 = NULL,v_62 = NULL,x_62 = NULL;
    x_62 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_62 = ATgetFirst((ATermList) t);
        v_62 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_27 = NULL,z_27 = NULL,p_6 = NULL;
          t = SSLgetAnnotations(x_62);
          r_27 = t;
          t = v_62;
          t = g_63(t);
          z_27 = t;
          t = (ATerm) ATinsert(CheckATermList(z_27), s_62);
          p_6 = t;
          t = SSLsetAnnotations(p_6, r_27);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_62;
        t = u_99(t);
      }
    return(t);
  }
  t = g_63(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm t_61 = NULL,w_61 = NULL,x_61 = NULL;
  t_61 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_61;
    }
  else
    {
      ATerm q_7 (ATerm t)
      {
        t = not_null(x_61);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_61 = ATgetFirst((ATermList) t);
          if(((x_61 != NULL) && (x_61 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_61;
      t = at_end_1_0(q_7, t);
    }
  return(t);
}
ATerm x_63 (ATerm l_63, ATerm t)
{
  ATerm n_63 = NULL;
  t = SSL_explode_term(l_63);
  if(match_cons(t, sym__2))
    {
      ATerm m_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      n_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_63;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm q_63 = NULL,s_63 = NULL,u_63 = NULL;
  u_63 = t;
  if(match_cons(t, sym__2))
    {
      q_63 = ATgetArgument(t, 0);
      s_63 = ATgetArgument(t, 1);
      {
        ATerm n_29 = t;
        int o_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_7 (ATerm t)
            {
              t = s_63;
              return(t);
            }
            t = q_63;
            t = at_end_1_0(r_7, t);
            ;
            LocalPopChoice(o_29);
          }
        else
          {
            t = n_29;
            t = x_63(u_63, t);
          }
      }
    }
  else
    {
      t = x_63(u_63, t);
    }
  return(t);
}
ATerm m_9 (ATerm b_101 (ATerm), ATerm k_30, ATerm j_30, ATerm t)
{
  ATerm a_65 (ATerm t)
  {
    ATerm o_64 = NULL,q_64 = NULL,r_64 = NULL;
    o_64 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_64;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_64 = ATgetFirst((ATermList) t);
            r_64 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm p_29 = t;
          int q_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_64;
              {
                ATerm t_7 (ATerm t)
                {
                  t = j_30;
                  return(t);
                }
                t = x_9(b_101, t_7, q_64, r_64, t);
                t = a_65(t);
              }
              ;
              LocalPopChoice(q_29);
            }
          else
            {
              t = p_29;
              {
                ATerm s_28 = NULL,y_28 = NULL,s_6 = NULL;
                t = SSLgetAnnotations(o_64);
                s_28 = t;
                t = r_64;
                t = a_65(t);
                y_28 = t;
                t = (ATerm) ATinsert(CheckATermList(y_28), q_64);
                s_6 = t;
                t = SSLsetAnnotations(s_6, s_28);
              }
            }
        }
      }
    return(t);
  }
  t = k_30;
  t = a_65(t);
  return(t);
}
ATerm genzip_4_0 (ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t)
{
  ATerm i_65 (ATerm t)
  {
    ATerm t_29 = t;
    int u_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_97(t);
        ;
        LocalPopChoice(u_29);
      }
    else
      {
        t = t_29;
        {
          ATerm c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL,u_6 = NULL;
          t = q_97(t);
          h_65 = t;
          if(match_cons(t, sym__2))
            {
              d_65 = ATgetArgument(t, 0);
              e_65 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_65);
          c_65 = t;
          t = d_65;
          t = s_97(t);
          f_65 = t;
          t = e_65;
          t = i_65(t);
          g_65 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_65, g_65);
          u_6 = t;
          t = SSLsetAnnotations(u_6, c_65);
          t = r_97(t);
        }
      }
    return(t);
  }
  t = i_65(t);
  return(t);
}
ATerm v_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_29 = ATgetArgument(t, 0);
      if(((ATgetType(w_29) != AT_LIST) || !(ATisEmpty(w_29))))
        _fail(t);
      {
        ATerm z_29 = ATgetArgument(t, 1);
        if(((ATgetType(z_29) != AT_LIST) || !(ATisEmpty(z_29))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm c_66 = NULL,d_66 = NULL,e_66 = NULL,f_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_30 = ATgetArgument(t, 0);
      if(((ATgetType(a_30) == AT_LIST) && !(ATisEmpty(a_30))))
        {
          c_66 = ATgetFirst((ATermList) a_30);
          d_66 = (ATerm) ATgetNext((ATermList) a_30);
        }
      else
        _fail(t);
      {
        ATerm c_30 = ATgetArgument(t, 1);
        if(((ATgetType(c_30) == AT_LIST) && !(ATisEmpty(c_30))))
          {
            e_66 = ATgetFirst((ATermList) c_30);
            f_66 = (ATerm) ATgetNext((ATermList) c_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_66, e_66), (ATerm) ATmakeAppl(sym__2, d_66, f_66));
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm g_66 = NULL,h_66 = NULL;
  if(match_cons(t, sym__2))
    {
      g_66 = ATgetArgument(t, 0);
      h_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_66), g_66);
  return(t);
}
ATerm r_9 (ATerm n_669, ATerm s_669, ATerm v_64, ATerm t)
{
  ATerm m_65 = NULL,n_65 = NULL,z_65 = NULL,a_66 = NULL;
  t = SSL_explode_term(s_669);
  if(match_cons(t, sym__2))
    {
      m_65 = ATgetArgument(t, 0);
      z_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(n_669);
  if(match_cons(t, sym__2))
    {
      if((m_65 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      n_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_65, z_65);
  t = genzip_4_0(v_7, x_7, y_7, _id, t);
  a_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_66, v_64);
  t = conc_0_0(t);
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm b_67 = NULL;
  b_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, b_67);
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm c_67 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL,w_6 = NULL;
  f_67 = t;
  if(match_cons(t, sym__2))
    {
      d_67 = ATgetArgument(t, 0);
      e_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_67);
  c_67 = t;
  t = e_67;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_67, e_67);
  w_6 = t;
  t = SSLsetAnnotations(w_6, c_67);
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm y_68 = NULL,e_69 = NULL,o_69 = NULL,p_69 = NULL,q_69 = NULL;
  y_68 = t;
  if(match_cons(t, sym__2))
    {
      e_69 = ATgetArgument(t, 0);
      o_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_69;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_69 = ATgetFirst((ATermList) t);
      q_69 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_30 = t;
        int e_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_72(e_69, o_69, y_68, t);
            ;
            LocalPopChoice(e_30);
          }
        else
          {
            t = d_30;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_69), p_69), q_69);
          }
      }
    }
  else
    {
      t = r_72(e_69, o_69, y_68, t);
    }
  return(t);
}
ATerm r_72 (ATerm g_67, ATerm h_67, ATerm i_67, ATerm t)
{
  ATerm j_67 = NULL,l_68 = NULL,y_6 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL;
  t = SSLgetAnnotations(i_67);
  j_67 = t;
  t = h_67;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_68 = ATgetFirst((ATermList) t);
      r_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_68;
  if(match_cons(t, sym__2))
    {
      p_68 = ATgetArgument(t, 0);
      q_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_30 = t;
    int n_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_68;
        if((p_68 != t))
          {
            _fail(t);
          }
        t = r_68;
        ;
        LocalPopChoice(n_30);
      }
    else
      {
        t = f_30;
        t = h_67;
        t = r_9(p_68, q_68, r_68, t);
      }
    l_68 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_67, l_68);
    y_6 = t;
    t = SSLsetAnnotations(y_6, j_67);
  }
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm q_72 = NULL;
  if(match_cons(t, sym__2))
    {
      q_72 = ATgetArgument(t, 0);
      if((q_72 != ATgetArgument(t, 1)))
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
  ATerm o_30 = t;
  int r_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(a_8, c_8, d_8, t);
      ;
      LocalPopChoice(r_30);
    }
  else
    {
      t = o_30;
      {
        ATerm c_72 = NULL,g_72 = NULL,i_72 = NULL;
        c_72 = t;
        if(match_cons(t, sym__2))
          {
            g_72 = ATgetArgument(t, 0);
            i_72 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_72;
        t = m_9(f_8, g_72, i_72, t);
      }
    }
  return(t);
}
ATerm t_9 (ATerm m_122 (ATerm), ATerm n_122 (ATerm), ATerm o_122 (ATerm), ATerm s_65, ATerm p_65, ATerm x_65, ATerm t_65, ATerm q_65, ATerm r_65, ATerm t)
{
  ATerm s_72 = NULL,t_72 = NULL,u_72 = NULL,w_72 = NULL,x_72 = NULL,a_73 = NULL,b_73 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_65, t_65);
  t = m_122(t);
  if(match_cons(t, sym__2))
    {
      t_72 = ATgetArgument(t, 0);
      s_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_72;
  t = n_122(t);
  u_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_72, x_65);
  t = diff_0_0(t);
  w_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_72, p_65);
  t = conc_0_0(t);
  x_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_72, x_65);
  t = conc_0_0(t);
  a_73 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_65, t_72, q_65);
  t = o_122(t);
  b_73 = t;
  t = (ATerm) ATmakeAppl(sym__5, x_72, a_73, s_72, b_73, r_65);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm m_122 (ATerm), ATerm n_122 (ATerm), ATerm o_122 (ATerm), ATerm t)
{
  ATerm d_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL,i_73 = NULL,j_73 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm s_30 = ATgetArgument(t, 0);
      if(((ATgetType(s_30) == AT_LIST) && !(ATisEmpty(s_30))))
        {
          d_73 = ATgetFirst((ATermList) s_30);
          e_73 = (ATerm) ATgetNext((ATermList) s_30);
        }
      else
        _fail(t);
      f_73 = ATgetArgument(t, 1);
      g_73 = ATgetArgument(t, 2);
      i_73 = ATgetArgument(t, 3);
      j_73 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = t_9(m_122, n_122, o_122, d_73, e_73, f_73, g_73, i_73, j_73, t);
  return(t);
}
ATerm while_not_2_0 (ATerm k_110 (ATerm), ATerm l_110 (ATerm), ATerm t)
{
  ATerm k_73 (ATerm t)
  {
    ATerm t_30 = t;
    int v_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_110(t);
        ;
        LocalPopChoice(v_30);
      }
    else
      {
        t = t_30;
        t = l_110(t);
        t = k_73(t);
      }
    return(t);
  }
  t = k_73(t);
  return(t);
}
ATerm for_3_0 (ATerm n_110 (ATerm), ATerm o_110 (ATerm), ATerm p_110 (ATerm), ATerm t)
{
  t = n_110(t);
  t = while_not_2_0(o_110, p_110, t);
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm y_73 = NULL,z_73 = NULL,a_74 = NULL;
  if(match_cons(t, sym__3))
    {
      y_73 = ATgetArgument(t, 0);
      z_73 = ATgetArgument(t, 1);
      a_74 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, y_73, y_73, z_73, a_74, (ATerm) ATempty);
  return(t);
}
ATerm o_8 (ATerm t)
{
  ATerm i_74 = NULL,l_74 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm w_30 = ATgetArgument(t, 0);
      if(((ATgetType(w_30) != AT_LIST) || !(ATisEmpty(w_30))))
        _fail(t);
      {
        ATerm x_30 = ATgetArgument(t, 1);
      }
      {
        ATerm y_30 = ATgetArgument(t, 2);
      }
      i_74 = ATgetArgument(t, 3);
      l_74 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_74, l_74);
  return(t);
}
ATerm p_8 (ATerm t)
{
  ATerm z_30 = t;
  int a_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, q_8, s_8, t);
      ;
      LocalPopChoice(a_31);
    }
  else
    {
      t = z_30;
      {
        ATerm v_74 = NULL,w_74 = NULL,a_75 = NULL,e_75 = NULL,f_75 = NULL,g_75 = NULL,h_75 = NULL;
        if(match_cons(t, sym__5))
          {
            v_74 = ATgetArgument(t, 0);
            e_75 = ATgetArgument(t, 1);
            f_75 = ATgetArgument(t, 2);
            g_75 = ATgetArgument(t, 3);
            h_75 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = v_74;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_74 = ATgetFirst((ATermList) t);
            a_75 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, a_75, e_75, f_75, g_75, (ATerm) ATinsert(CheckATermList(h_75), w_74));
      }
    }
  return(t);
}
ATerm q_8 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(t_8, t);
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm q_74 = NULL,r_74 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm b_31 = ATgetArgument(t, 0);
      q_74 = ATgetArgument(t, 1);
      r_74 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_74), q_74);
  return(t);
}
ATerm t_8 (ATerm t)
{
  ATerm c_31 = t;
  int d_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      ;
      LocalPopChoice(d_31);
    }
  else
    {
      t = c_31;
    }
  return(t);
}
ATerm v_8 (ATerm t)
{
  ATerm y_29 = NULL,b_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL;
  g_30 = t;
  if(match_cons(t, sym__2))
    {
      h_30 = ATgetArgument(t, 0);
      i_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_30;
  if(match_cons(t, sym_Mod_2))
    {
      y_29 = ATgetArgument(t, 0);
      b_30 = ATgetArgument(t, 1);
      {
        ATerm e_31 = t;
        int f_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_30;
            t = n_8(y_29, b_30, i_30, t);
            ;
            LocalPopChoice(f_31);
          }
        else
          {
            t = e_31;
            t = u_30(h_30, i_30, t);
          }
      }
    }
  else
    {
      t = u_30(h_30, i_30, t);
    }
  return(t);
}
ATerm u_30 (ATerm r_29, ATerm s_29, ATerm t)
{
  ATerm v_29 = NULL,x_29 = NULL;
  t = term_g_15;
  v_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_16), s_29), term_h_16), r_29), term_f_16);
  x_29 = t;
  t = SSL_printnl(v_29, x_29);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_16), s_29), term_h_16), r_29), term_f_16);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm t_76 = NULL,u_76 = NULL,v_76 = NULL,w_76 = NULL,x_76 = NULL;
  t = for_3_0(m_8, o_8, p_8, t);
  t_76 = t;
  if(match_cons(t, sym__2))
    {
      u_76 = ATgetArgument(t, 0);
      v_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_76;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_76;
    }
  else
    {
      ATerm k_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_76 = ATgetFirst((ATermList) t);
          x_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(x_76), w_76);
      t = map_1_0(v_8, t);
      t = term_k_15;
      k_29 = t;
      t = SSL_exit(k_29);
    }
  return(t);
}
ATerm w_8 (ATerm t)
{
  t = term_y_17;
  return(t);
}
ATerm x_8 (ATerm t)
{
  ATerm t_77 = NULL,u_77 = NULL;
  if(match_cons(t, sym__2))
    {
      t_77 = ATgetArgument(t, 0);
      u_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_10(t_77, u_77, t);
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = term_k_15;
  return(t);
}
ATerm b_9 (ATerm t)
{
  t = term_y_17;
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm v_77 = NULL,w_77 = NULL;
  if(match_cons(t, sym__2))
    {
      v_77 = ATgetArgument(t, 0);
      w_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_10(v_77, w_77, t);
  return(t);
}
ATerm h_9 (ATerm t)
{
  t = term_k_15;
  return(t);
}
ATerm i_9 (ATerm t)
{
  ATerm x_77 = NULL;
  if(match_cons(t, sym__2))
    {
      x_77 = ATgetArgument(t, 0);
      if((x_77 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm o_9 (ATerm t)
{
  t = term_g_31;
  return(t);
}
ATerm p_9 (ATerm t)
{
  t = term_h_31;
  return(t);
}
ATerm RegisterExtSDefInl_0_0 (ATerm t)
{
  ATerm b_77 = NULL,c_77 = NULL,d_77 = NULL,e_77 = NULL,h_77 = NULL,i_77 = NULL,j_77 = NULL,k_77 = NULL,l_77 = NULL,o_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL;
  d_77 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      i_77 = ATgetArgument(t, 0);
      b_77 = ATgetArgument(t, 1);
      c_77 = ATgetArgument(t, 2);
      {
        ATerm i_31 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  k_77 = t;
  t = b_77;
  t = foldr_3_0(w_8, x_8, y_8, t);
  e_77 = t;
  t = c_77;
  t = foldr_3_0(b_9, d_9, h_9, t);
  h_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_77, (ATerm) ATmakeAppl(sym__2, e_77, h_77));
  {
    ATerm j_31 = t;
    int k_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        ;
        LocalPopChoice(k_31);
      }
    else
      {
        t = j_31;
        t = (ATerm) ATempty;
      }
    o_77 = t;
    t = i_77;
    {
      ATerm l_31 = t;
      int n_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Arities_0_0(t);
          ;
          LocalPopChoice(n_31);
        }
      else
        {
          t = l_31;
          t = (ATerm) ATempty;
        }
      l_77 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_77, h_77));
      s_77 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_77, h_77)), l_77);
      t = y_9(i_9, s_77, l_77, t);
      j_77 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_77, (ATerm) ATmakeAppl(sym__2, e_77, h_77));
      q_77 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_31, (ATerm) ATinsert(CheckATermList(o_77), d_77));
      r_77 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_77, (ATerm) ATmakeAppl(sym__2, e_77, h_77)), (ATerm) ATmakeAppl(sym_Defined_2, term_o_31, (ATerm) ATinsert(CheckATermList(o_77), d_77)));
      t = w_9(o_9, q_77, r_77, t);
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_31, j_77);
      p_77 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_77, (ATerm) ATmakeAppl(sym_Defined_2, term_p_31, j_77));
      t = w_9(p_9, i_77, p_77, t);
      t = k_77;
    }
  }
  return(t);
}
ATerm q_9 (ATerm t)
{
  t = term_y_17;
  return(t);
}
ATerm u_9 (ATerm t)
{
  ATerm m_78 = NULL,n_78 = NULL;
  if(match_cons(t, sym__2))
    {
      m_78 = ATgetArgument(t, 0);
      n_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_10(m_78, n_78, t);
  return(t);
}
ATerm v_9 (ATerm t)
{
  t = term_k_15;
  return(t);
}
ATerm z_9 (ATerm t)
{
  t = term_y_17;
  return(t);
}
ATerm b_10 (ATerm t)
{
  ATerm o_78 = NULL,p_78 = NULL;
  if(match_cons(t, sym__2))
    {
      o_78 = ATgetArgument(t, 0);
      p_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_10(o_78, p_78, t);
  return(t);
}
ATerm l_10 (ATerm t)
{
  t = term_k_15;
  return(t);
}
ATerm o_10 (ATerm t)
{
  ATerm q_78 = NULL;
  if(match_cons(t, sym__2))
    {
      q_78 = ATgetArgument(t, 0);
      if((q_78 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm q_10 (ATerm t)
{
  t = term_g_31;
  return(t);
}
ATerm t_10 (ATerm t)
{
  t = term_h_31;
  return(t);
}
ATerm RegisterExtSDef_0_0 (ATerm t)
{
  ATerm y_77 = NULL,z_77 = NULL,a_78 = NULL,b_78 = NULL,c_78 = NULL,d_78 = NULL,e_78 = NULL,f_78 = NULL,g_78 = NULL,h_78 = NULL,i_78 = NULL,j_78 = NULL,k_78 = NULL,l_78 = NULL;
  a_78 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      d_78 = ATgetArgument(t, 0);
      y_77 = ATgetArgument(t, 1);
      z_77 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  f_78 = t;
  t = y_77;
  t = foldr_3_0(q_9, u_9, v_9, t);
  b_78 = t;
  t = z_77;
  t = foldr_3_0(z_9, b_10, l_10, t);
  c_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_78, (ATerm) ATmakeAppl(sym__2, b_78, c_78));
  {
    ATerm r_31 = t;
    int s_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        ;
        LocalPopChoice(s_31);
      }
    else
      {
        t = r_31;
        t = (ATerm) ATempty;
      }
    h_78 = t;
    t = d_78;
    {
      ATerm t_31 = t;
      int u_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Arities_0_0(t);
          ;
          LocalPopChoice(u_31);
        }
      else
        {
          t = t_31;
          t = (ATerm) ATempty;
        }
      g_78 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, b_78, c_78));
      l_78 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, b_78, c_78)), g_78);
      t = y_9(o_10, l_78, g_78, t);
      e_78 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_78, (ATerm) ATmakeAppl(sym__2, b_78, c_78));
      j_78 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_v_31, (ATerm) ATinsert(CheckATermList(h_78), a_78));
      k_78 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_78, (ATerm) ATmakeAppl(sym__2, b_78, c_78)), (ATerm) ATmakeAppl(sym_Defined_2, term_v_31, (ATerm) ATinsert(CheckATermList(h_78), a_78)));
      t = w_9(q_10, j_78, k_78, t);
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_31, e_78);
      i_78 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_78, (ATerm) ATmakeAppl(sym_Defined_2, term_w_31, e_78));
      t = w_9(t_10, d_78, i_78, t);
      t = f_78;
    }
  }
  return(t);
}
ATerm w_9 (ATerm g_105 (ATerm), ATerm g_36, ATerm e_36, ATerm t)
{
  ATerm r_78 = NULL,s_78 = NULL,t_78 = NULL,u_78 = NULL,v_78 = NULL,w_78 = NULL;
  u_78 = t;
  t = g_105(t);
  r_78 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_78, g_36, e_36);
  t = n_10(r_78, g_36, e_36, t);
  {
    ATerm x_31 = t;
    int y_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_78 = NULL;
        t = term_z_31;
        x_78 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_78, term_z_31);
        t = m_10(r_78, x_78, t);
        ;
        LocalPopChoice(y_31);
      }
    else
      {
        t = x_31;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_78 = ATgetFirst((ATermList) t);
        t_78 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_z_31;
    v_78 = t;
    t = (ATerm) ATinsert(CheckATermList(t_78), (ATerm) ATinsert(CheckATermList(s_78), g_36));
    w_78 = t;
    t = SSL_table_put(r_78, v_78, w_78);
    t = u_78;
  }
  return(t);
}
ATerm x_9 (ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm q_30, ATerm p_30, ATerm t)
{
  t = k_101(t);
  {
    ATerm u_10 (ATerm t)
    {
      ATerm y_78 = NULL;
      y_78 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_30, y_78);
      t = j_101(t);
      return(t);
    }
    t = fetch_1_0(u_10, t);
    t = p_30;
  }
  return(t);
}
ATerm y_9 (ATerm g_101 (ATerm), ATerm m_30, ATerm l_30, ATerm t)
{
  ATerm o_79 (ATerm t)
  {
    ATerm j_79 = NULL,k_79 = NULL,l_79 = NULL;
    j_79 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_30;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_79 = ATgetFirst((ATermList) t);
            l_79 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm e_32 = t;
          int f_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_79;
              {
                ATerm v_10 (ATerm t)
                {
                  t = l_30;
                  return(t);
                }
                t = x_9(g_101, v_10, k_79, l_79, t);
                t = o_79(t);
              }
              ;
              LocalPopChoice(f_32);
            }
          else
            {
              t = e_32;
              {
                ATerm m_31 = NULL,q_31 = NULL,b_7 = NULL;
                t = SSLgetAnnotations(j_79);
                m_31 = t;
                t = l_79;
                t = o_79(t);
                q_31 = t;
                t = (ATerm) ATinsert(CheckATermList(q_31), k_79);
                b_7 = t;
                t = SSLsetAnnotations(b_7, m_31);
              }
            }
        }
      }
    return(t);
  }
  t = m_30;
  t = o_79(t);
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm g_80 = NULL;
  g_80 = t;
  {
    ATerm g_32 = t;
    int h_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_32 = NULL,i_33 = NULL;
        t = term_h_31;
        i_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_h_31, g_80);
        t = a_10(i_33, g_80, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm i_32 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_32) != ATmakeSymbol("y_0", 0, ATtrue)))
              _fail(t);
            x_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_32;
        ;
        LocalPopChoice(h_32);
      }
    else
      {
        t = g_32;
        {
          ATerm j_32 = t;
          int k_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_33 = NULL,x_33 = NULL;
              t = term_h_31;
              x_33 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_h_31, g_80);
              t = a_10(x_33, g_80, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm l_32 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) l_32) != ATmakeSymbol("u_0", 0, ATtrue)))
                    _fail(t);
                  q_33 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = q_33;
              ;
              LocalPopChoice(k_32);
            }
          else
            {
              t = j_32;
              {
                ATerm m_32 = t;
                int n_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_34 = NULL,s_34 = NULL;
                    t = term_h_31;
                    s_34 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_h_31, g_80);
                    t = a_10(s_34, g_80, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm o_32 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) o_32) != ATmakeSymbol("q_0", 0, ATtrue)))
                          _fail(t);
                        o_34 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = o_34;
                    ;
                    LocalPopChoice(n_32);
                  }
                else
                  {
                    t = m_32;
                    {
                      ATerm w_34 = NULL,z_34 = NULL;
                      t = term_h_31;
                      z_34 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_h_31, g_80);
                      t = a_10(z_34, g_80, t);
                      if(match_cons(t, sym_Defined_2))
                        {
                          ATerm p_32 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) p_32) != ATmakeSymbol("m_0", 0, ATtrue)))
                            _fail(t);
                          w_34 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = w_34;
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm a_10 (ATerm z_36, ATerm a_37, ATerm t)
{
  ATerm l_80 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_36, a_37);
  t = m_10(z_36, a_37, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_80 = ATgetFirst((ATermList) t);
      {
        ATerm q_32 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = l_80;
  return(t);
}
ATerm p_81 (ATerm d_81, ATerm t)
{
  ATerm f_81 = NULL,g_81 = NULL,y_35 = NULL;
  t = term_g_31;
  y_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_31, d_81);
  t = a_10(y_35, d_81, t);
  if(match_cons(t, sym_Defined_3))
    {
      ATerm r_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_32) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
      f_81 = ATgetArgument(t, 1);
      g_81 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_81), f_81);
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm j_81 = NULL,l_81 = NULL;
  j_81 = t;
  if(match_cons(t, sym__2))
    {
      ATerm s_32 = ATgetArgument(t, 0);
      l_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_81;
  {
    ATerm t_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_32 = ATgetArgument(t, 0);
            ATerm w_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(u_32);
        {
          ATerm c_33 = t;
          int f_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_36 = NULL,i_36 = NULL;
              t = term_g_31;
              i_36 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_g_31, j_81);
              t = a_10(i_36, j_81, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm g_33 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) g_33) != ATmakeSymbol("w_0", 0, ATtrue)))
                    _fail(t);
                  d_36 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_36;
              ;
              LocalPopChoice(f_33);
            }
          else
            {
              t = c_33;
              {
                ATerm j_33 = t;
                int k_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_36 = NULL,u_36 = NULL;
                    t = term_g_31;
                    u_36 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_g_31, j_81);
                    t = a_10(u_36, j_81, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm o_33 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) o_33) != ATmakeSymbol("s_0", 0, ATtrue)))
                          _fail(t);
                        q_36 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = q_36;
                    ;
                    LocalPopChoice(k_33);
                  }
                else
                  {
                    t = j_33;
                    {
                      ATerm p_33 = t;
                      int r_33 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm g_37 = NULL,j_37 = NULL;
                          t = term_g_31;
                          j_37 = t;
                          t = (ATerm) ATmakeAppl(sym__2, term_g_31, j_81);
                          t = a_10(j_37, j_81, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm t_33 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) t_33) != ATmakeSymbol("o_0", 0, ATtrue)))
                                _fail(t);
                              g_37 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = g_37;
                          ;
                          LocalPopChoice(r_33);
                        }
                      else
                        {
                          t = p_33;
                          t = p_81(j_81, t);
                        }
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = t_32;
        t = p_81(j_81, t);
      }
  }
  return(t);
}
ATerm foldr_3_0 (ATerm w_103 (ATerm), ATerm x_103 (ATerm), ATerm y_103 (ATerm), ATerm t)
{
  ATerm r_81 = NULL,s_81 = NULL,t_81 = NULL;
  r_81 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_81;
      t = w_103(t);
    }
  else
    {
      ATerm w_81 = NULL,x_81 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_81 = ATgetFirst((ATermList) t);
          t_81 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_81;
      t = y_103(t);
      w_81 = t;
      t = t_81;
      t = foldr_3_0(w_103, x_103, y_103, t);
      x_81 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_81, x_81);
      t = x_103(t);
    }
  return(t);
}
ATerm z_10 (ATerm t)
{
  t = term_y_17;
  return(t);
}
ATerm b_11 (ATerm t)
{
  ATerm m_82 = NULL,n_82 = NULL;
  if(match_cons(t, sym__2))
    {
      m_82 = ATgetArgument(t, 0);
      n_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_10(m_82, n_82, t);
  return(t);
}
ATerm c_11 (ATerm t)
{
  t = term_k_15;
  return(t);
}
ATerm d_11 (ATerm t)
{
  t = term_y_17;
  return(t);
}
ATerm e_11 (ATerm t)
{
  ATerm o_82 = NULL,p_82 = NULL;
  if(match_cons(t, sym__2))
    {
      o_82 = ATgetArgument(t, 0);
      p_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_10(o_82, p_82, t);
  return(t);
}
ATerm f_11 (ATerm t)
{
  t = term_k_15;
  return(t);
}
ATerm g_11 (ATerm t)
{
  ATerm q_82 = NULL;
  if(match_cons(t, sym__2))
    {
      q_82 = ATgetArgument(t, 0);
      if((q_82 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm h_11 (ATerm t)
{
  t = term_g_31;
  return(t);
}
ATerm j_11 (ATerm t)
{
  t = term_h_31;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm y_81 = NULL,z_81 = NULL,a_82 = NULL,b_82 = NULL,c_82 = NULL,d_82 = NULL,e_82 = NULL,f_82 = NULL,g_82 = NULL,h_82 = NULL,i_82 = NULL,j_82 = NULL,k_82 = NULL,l_82 = NULL;
  a_82 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      d_82 = ATgetArgument(t, 0);
      y_81 = ATgetArgument(t, 1);
      z_81 = ATgetArgument(t, 2);
      {
        ATerm w_33 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  f_82 = t;
  t = y_81;
  t = foldr_3_0(z_10, b_11, c_11, t);
  b_82 = t;
  t = z_81;
  t = foldr_3_0(d_11, e_11, f_11, t);
  c_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_82, (ATerm) ATmakeAppl(sym__2, b_82, c_82));
  {
    ATerm y_33 = t;
    int z_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        ;
        LocalPopChoice(z_33);
      }
    else
      {
        t = y_33;
        t = (ATerm) ATempty;
      }
    h_82 = t;
    t = d_82;
    {
      ATerm a_34 = t;
      int e_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Arities_0_0(t);
          ;
          LocalPopChoice(e_34);
        }
      else
        {
          t = a_34;
          t = (ATerm) ATempty;
        }
      g_82 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, b_82, c_82));
      l_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, b_82, c_82)), g_82);
      t = y_9(g_11, l_82, g_82, t);
      e_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_82, (ATerm) ATmakeAppl(sym__2, b_82, c_82));
      j_82 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_j_34, (ATerm) ATinsert(CheckATermList(h_82), a_82));
      k_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_82, (ATerm) ATmakeAppl(sym__2, b_82, c_82)), (ATerm) ATmakeAppl(sym_Defined_2, term_j_34, (ATerm) ATinsert(CheckATermList(h_82), a_82)));
      t = w_9(h_11, j_82, k_82, t);
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_k_34, e_82);
      i_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_82, (ATerm) ATmakeAppl(sym_Defined_2, term_k_34, e_82));
      t = w_9(j_11, d_82, i_82, t);
      t = f_82;
    }
  }
  return(t);
}
ATerm k_11 (ATerm t)
{
  ATerm l_34 = t;
  int m_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RegisterSDefT_0_0(t);
      ;
      LocalPopChoice(m_34);
    }
  else
    {
      t = l_34;
      {
        ATerm q_34 = t;
        int r_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RegisterExtSDef_0_0(t);
            ;
            LocalPopChoice(r_34);
          }
        else
          {
            t = q_34;
            t = RegisterExtSDefInl_0_0(t);
          }
      }
    }
  return(t);
}
ATerm needed_defs_0_0 (ATerm t)
{
  ATerm r_82 = NULL;
  t = map_1_0(k_11, t);
  r_82 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_v_34), r_82, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm f_77 (ATerm), ATerm g_77 (ATerm), ATerm t)
{
  ATerm s_82 = NULL,t_82 = NULL,u_82 = NULL,v_82 = NULL,w_82 = NULL,x_82 = NULL,d_7 = NULL;
  x_82 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_82 = ATgetFirst((ATermList) t);
      u_82 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_82);
  s_82 = t;
  t = t_82;
  t = f_77(t);
  v_82 = t;
  t = u_82;
  t = g_77(t);
  w_82 = t;
  t = (ATerm) ATinsert(CheckATermList(w_82), v_82);
  d_7 = t;
  t = SSLsetAnnotations(d_7, s_82);
  return(t);
}
ATerm d_10 (ATerm d_54, ATerm e_54, ATerm t)
{
  ATerm y_82 = NULL;
  t = SSL_fputc(d_54, e_54);
  y_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_82);
  return(t);
}
ATerm e_10 (ATerm r_57, ATerm s_57, ATerm t)
{
  ATerm z_82 = NULL;
  t = SSL_write_term_to_stream_text(r_57, s_57);
  z_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_82);
  return(t);
}
ATerm g_10 (ATerm d_115 (ATerm), ATerm p_542, ATerm v_57, ATerm t)
{
  ATerm a_83 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_542, term_x_34);
  t = j_10(t);
  a_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_83, v_57);
  t = d_115(t);
  t = fclose_0_0(t);
  t = v_57;
  return(t);
}
ATerm f_10 (ATerm n_57, ATerm o_57, ATerm t)
{
  ATerm b_83 = NULL;
  t = SSL_write_term_to_stream_baf(n_57, o_57);
  b_83 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_83);
  return(t);
}
ATerm m_11 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm o_11 (ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_34 = ATgetArgument(t, 0);
      if(match_cons(y_34, sym_Stream_1))
        {
          q_38 = ATgetArgument(y_34, 0);
        }
      else
        _fail(t);
      r_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_10(q_38, r_38, t);
  return(t);
}
ATerm q_11 (ATerm t)
{
  ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL,q_39 = NULL,r_39 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_35 = ATgetArgument(t, 0);
      if(match_cons(a_35, sym_Stream_1))
        {
          q_39 = ATgetArgument(a_35, 0);
        }
      else
        _fail(t);
      r_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_10(q_39, r_39, t);
  l_39 = t;
  t = term_b_35;
  m_39 = t;
  t = l_39;
  if(match_cons(t, sym_Stream_1))
    {
      n_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_b_35, l_39);
  t = d_10(m_39, n_39, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm f_83 = NULL,g_83 = NULL,h_83 = NULL,i_83 = NULL,j_83 = NULL,l_83 = NULL,m_83 = NULL,n_83 = NULL,o_83 = NULL,p_83 = NULL,p_84 = NULL,q_84 = NULL,k_7 = NULL,j_7 = NULL;
  g_83 = t;
  if(match_cons(t, sym__2))
    {
      n_83 = ATgetArgument(t, 0);
      o_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_83);
  m_83 = t;
  t = n_83;
  {
    ATerm c_35 = t;
    int d_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_11 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((f_83 != NULL) && (f_83 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                f_83 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(l_11, t);
        ;
        LocalPopChoice(d_35);
      }
    else
      {
        t = c_35;
        t = term_e_35;
        f_83 = t;
      }
    p_83 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_83, o_83);
    j_7 = t;
    t = SSLsetAnnotations(j_7, m_83);
    t = g_83;
    if(match_cons(t, sym__2))
      {
        i_83 = ATgetArgument(t, 0);
        j_83 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_83);
    h_83 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_83, (ATerm) ATmakeAppl(sym__2, not_null(f_83), j_83));
    k_7 = t;
    t = SSLsetAnnotations(k_7, h_83);
    l_83 = t;
    if(match_cons(t, sym__2))
      {
        p_84 = ATgetArgument(t, 0);
        q_84 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm f_35 = t;
      int g_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_37 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,p_38 = NULL,l_7 = NULL;
          t = SSLgetAnnotations(l_83);
          z_37 = t;
          t = p_84;
          t = fetch_1_0(m_11, t);
          l_38 = t;
          t = q_84;
          if(match_cons(t, sym__2))
            {
              n_38 = ATgetArgument(t, 0);
              p_38 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_10(o_11, n_38, p_38, t);
          m_38 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_38, m_38);
          l_7 = t;
          t = SSLsetAnnotations(l_7, z_37);
          ;
          LocalPopChoice(g_35);
        }
      else
        {
          t = f_35;
          {
            ATerm f_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,m_7 = NULL;
            t = SSLgetAnnotations(l_83);
            f_39 = t;
            t = q_84;
            if(match_cons(t, sym__2))
              {
                j_39 = ATgetArgument(t, 0);
                k_39 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = g_10(q_11, j_39, k_39, t);
            i_39 = t;
            t = (ATerm) ATmakeAppl(sym__2, p_84, i_39);
            m_7 = t;
            t = SSLsetAnnotations(m_7, f_39);
          }
        }
    }
  }
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm f_118 (ATerm), ATerm t)
{
  ATerm t_84 = NULL,u_84 = NULL,v_84 = NULL,w_84 = NULL,x_84 = NULL;
  x_84 = t;
  t = dtime_0_0(t);
  t = x_84;
  t = f_118(t);
  w_84 = t;
  t = dtime_0_0(t);
  t_84 = t;
  t = w_84;
  if(match_cons(t, sym__2))
    {
      u_84 = ATgetArgument(t, 0);
      v_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_84), (ATerm) ATmakeAppl(sym_Runtime_1, t_84)), v_84);
  return(t);
}
ATerm l_85 (ATerm f_85, ATerm t)
{
  t = SSL_fclose(f_85);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm i_85 = NULL,j_85 = NULL;
  j_85 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_85 = ATgetArgument(t, 0);
      {
        ATerm h_35 = t;
        int i_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(i_85);
            ;
            LocalPopChoice(i_35);
          }
        else
          {
            t = h_35;
            t = l_85(j_85, t);
          }
      }
    }
  else
    {
      t = l_85(j_85, t);
    }
  return(t);
}
ATerm h_10 (ATerm t_57, ATerm t)
{
  t = SSL_read_term_from_stream(t_57);
  return(t);
}
ATerm i_10 (ATerm f_54, ATerm g_54, ATerm t)
{
  ATerm m_85 = NULL;
  t = SSL_fopen(f_54, g_54);
  m_85 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_85);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_85 = NULL;
  t = SSL_stdin_stream();
  n_85 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_85);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm o_85 = NULL;
  t = SSL_stdout_stream();
  o_85 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_85);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_85 = NULL;
  t = SSL_stderr_stream();
  p_85 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_85);
  return(t);
}
ATerm w_86 (ATerm v_85, ATerm t)
{
  ATerm w_85 = NULL;
  t = SSL_explode_term(v_85);
  if(match_cons(t, sym__2))
    {
      ATerm j_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_35) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_35 = ATgetArgument(t, 1);
        if(((ATgetType(k_35) == AT_LIST) && !(ATisEmpty(k_35))))
          {
            w_85 = ATgetFirst((ATermList) k_35);
            {
              ATerm l_35 = (ATerm) ATgetNext((ATermList) k_35);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = w_85;
  if(match_cons(t, sym_stderr_0))
    {
      t = w_85;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = w_85;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = w_85;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm x_86 (ATerm z_85, ATerm a_86, ATerm b_86, ATerm t)
{
  ATerm c_86 = NULL,d_86 = NULL,e_86 = NULL,h_86 = NULL,s_7 = NULL;
  t = SSLgetAnnotations(b_86);
  e_86 = t;
  t = z_85;
  if(match_cons(t, sym_Path_1))
    {
      h_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_86, a_86);
  s_7 = t;
  t = SSLsetAnnotations(s_7, e_86);
  if(match_cons(t, sym__2))
    {
      c_86 = ATgetArgument(t, 0);
      d_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_10(c_86, d_86, t);
  return(t);
}
ATerm y_86 (ATerm j_86, ATerm k_86, ATerm l_86, ATerm t)
{
  ATerm m_86 = NULL,n_86 = NULL,o_86 = NULL,r_86 = NULL,u_7 = NULL;
  t = SSLgetAnnotations(l_86);
  o_86 = t;
  t = SSL_is_string(j_86);
  r_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_86, k_86);
  u_7 = t;
  t = SSLsetAnnotations(u_7, o_86);
  if(match_cons(t, sym__2))
    {
      m_86 = ATgetArgument(t, 0);
      n_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_10(m_86, n_86, t);
  return(t);
}
ATerm j_10 (ATerm t)
{
  ATerm t_86 = NULL,u_86 = NULL,v_86 = NULL;
  t_86 = t;
  if(match_cons(t, sym__2))
    {
      u_86 = ATgetArgument(t, 0);
      v_86 = ATgetArgument(t, 1);
      {
        ATerm m_35 = t;
        int n_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_86(t_86, t);
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
                  t = x_86(u_86, v_86, t_86, t);
                  ;
                  LocalPopChoice(p_35);
                }
              else
                {
                  t = o_35;
                  t = y_86(u_86, v_86, t_86, t);
                }
            }
          }
      }
    }
  else
    {
      t = w_86(t_86, t);
    }
  return(t);
}
ATerm s_11 (ATerm t)
{
  t = term_q_35;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm z_86 = NULL,a_87 = NULL,b_87 = NULL;
  ATerm r_35 = t;
  int s_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_87 = NULL;
      c_87 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_87, term_t_35);
      t = j_10(t);
      ;
      LocalPopChoice(s_35);
    }
  else
    {
      t = r_35;
      t = debug_1_0(s_11, t);
      _fail(t);
    }
  a_87 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_10(b_87, t);
  z_86 = t;
  t = a_87;
  t = fclose_0_0(t);
  t = z_86;
  return(t);
}
ATerm fetch_1_0 (ATerm o_99 (ATerm), ATerm t)
{
  ATerm a_88 (ATerm t)
  {
    ATerm x_87 = NULL,y_87 = NULL,z_87 = NULL;
    x_87 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_87 = ATgetFirst((ATermList) t);
        z_87 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_35 = t;
      int v_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_40 = NULL,z_40 = NULL,z_7 = NULL;
          t = SSLgetAnnotations(x_87);
          p_40 = t;
          t = y_87;
          t = o_99(t);
          z_40 = t;
          t = (ATerm) ATinsert(CheckATermList(z_87), z_40);
          z_7 = t;
          t = SSLsetAnnotations(z_7, p_40);
          ;
          LocalPopChoice(v_35);
        }
      else
        {
          t = u_35;
          {
            ATerm m_41 = NULL,r_41 = NULL,b_8 = NULL;
            t = SSLgetAnnotations(x_87);
            m_41 = t;
            t = z_87;
            t = a_88(t);
            r_41 = t;
            t = (ATerm) ATinsert(CheckATermList(r_41), y_87);
            b_8 = t;
            t = SSLsetAnnotations(b_8, m_41);
          }
        }
    }
    return(t);
  }
  t = a_88(t);
  return(t);
}
ATerm c_10 (ATerm y_44, ATerm z_44, ATerm t)
{
  t = SSL_strcat(y_44, z_44);
  return(t);
}
ATerm debug_1_0 (ATerm b_115 (ATerm), ATerm t)
{
  ATerm d_88 = NULL,e_88 = NULL,f_88 = NULL,g_88 = NULL;
  d_88 = t;
  t = b_115(t);
  e_88 = t;
  t = term_g_15;
  f_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_88), e_88);
  g_88 = t;
  t = SSL_printnl(f_88, g_88);
  t = d_88;
  return(t);
}
ATerm y_11 (ATerm t)
{
  ATerm w_35 = t;
  int x_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(x_35);
    }
  else
    {
      t = w_35;
    }
  return(t);
}
ATerm g_12 (ATerm t)
{
  t = term_z_35;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm a_36 = t;
  int b_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_88 = NULL;
      n_88 = t;
      t = SSL_is_string(n_88);
      ;
      LocalPopChoice(b_36);
    }
  else
    {
      t = a_36;
      {
        ATerm c_36 = t;
        int f_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(y_11, t);
            ;
            LocalPopChoice(f_36);
          }
        else
          {
            t = c_36;
            {
              ATerm t_88 = NULL,u_88 = NULL,v_88 = NULL;
              t_88 = t;
              if(match_cons(t, sym_Path_1))
                {
                  u_88 = ATgetArgument(t, 0);
                  t = u_88;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      u_88 = ATgetArgument(t, 0);
                      t = u_88;
                      {
                        ATerm h_36 = t;
                        int j_36 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(j_36);
                          }
                        else
                          {
                            t = h_36;
                            t = debug_1_0(g_12, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm z_88 = NULL,a_89 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          u_88 = ATgetArgument(t, 0);
                          v_88 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = u_88;
                      t = eval_config_0_0(t);
                      z_88 = t;
                      t = v_88;
                      t = eval_config_0_0(t);
                      a_89 = t;
                      t = (ATerm) ATmakeAppl(sym__2, z_88, a_89);
                      t = c_10(z_88, a_89, t);
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
  ATerm e_89 = NULL,f_89 = NULL;
  e_89 = t;
  t = term_k_36;
  f_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_36, e_89);
  t = m_10(f_89, e_89, t);
  {
    ATerm l_36 = t;
    int m_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_89 = NULL,h_89 = NULL;
        t = eval_config_0_0(t);
        g_89 = t;
        t = term_k_36;
        h_89 = t;
        t = SSL_table_put(h_89, e_89, g_89);
        t = g_89;
        ;
        LocalPopChoice(m_36);
      }
    else
      {
        t = l_36;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm o_116 (ATerm), ATerm t)
{
  ATerm l_89 = NULL;
  l_89 = t;
  {
    ATerm r_36 = t;
    int s_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_89 = NULL;
        t = term_t_36;
        t = get_config_0_0(t);
        n_89 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_89, term_v_36);
        t = geq_0_0(t);
        t = l_89;
        t = o_116(t);
        ;
        LocalPopChoice(s_36);
      }
    else
      {
        t = r_36;
        t = l_89;
      }
  }
  return(t);
}
ATerm h_12 (ATerm t)
{
  ATerm q_89 = NULL;
  q_89 = t;
  if(match_string(t, "-k"))
    {
      t = q_89;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = q_89;
    }
  return(t);
}
ATerm i_12 (ATerm t)
{
  ATerm r_89 = NULL,s_89 = NULL,t_89 = NULL;
  r_89 = t;
  t = SSL_string_to_int(r_89);
  s_89 = t;
  t = term_y_36;
  t_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_36, s_89);
  t = p_10(t_89, s_89, t);
  t = r_89;
  return(t);
}
ATerm k_12 (ATerm t)
{
  t = term_e_37;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_12, i_12, k_12, t);
  return(t);
}
ATerm l_12 (ATerm t)
{
  ATerm v_89 = NULL;
  v_89 = t;
  if(match_string(t, "-S"))
    {
      t = v_89;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = v_89;
    }
  return(t);
}
ATerm m_12 (ATerm t)
{
  ATerm w_89 = NULL,x_89 = NULL;
  t = term_t_36;
  w_89 = t;
  t = term_y_17;
  x_89 = t;
  t = term_h_37;
  t = p_10(w_89, x_89, t);
  t = term_i_37;
  return(t);
}
ATerm n_12 (ATerm t)
{
  t = term_s_37;
  return(t);
}
ATerm o_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_12 (ATerm t)
{
  ATerm y_89 = NULL,z_89 = NULL,a_90 = NULL;
  y_89 = t;
  t = SSL_string_to_int(y_89);
  z_89 = t;
  t = term_t_36;
  a_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_36, z_89);
  t = p_10(a_90, z_89, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_89);
  return(t);
}
ATerm q_12 (ATerm t)
{
  t = term_t_37;
  return(t);
}
ATerm r_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_12 (ATerm t)
{
  ATerm b_90 = NULL,c_90 = NULL;
  t = term_y_37;
  b_90 = t;
  t = term_f_15;
  c_90 = t;
  t = term_i_38;
  t = p_10(b_90, c_90, t);
  t = term_j_38;
  return(t);
}
ATerm x_12 (ATerm t)
{
  t = term_k_38;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_38 = t;
  int t_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_12, m_12, n_12, t);
      ;
      LocalPopChoice(t_38);
    }
  else
    {
      t = s_38;
      {
        ATerm u_38 = t;
        int v_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_12, p_12, q_12, t);
            ;
            LocalPopChoice(v_38);
          }
        else
          {
            t = u_38;
            t = Option_3_0(r_12, s_12, x_12, t);
          }
      }
    }
  return(t);
}
ATerm p_10 (ATerm u_58, ATerm v_58, ATerm t)
{
  ATerm d_90 = NULL;
  t = term_k_36;
  d_90 = t;
  t = SSL_table_put(d_90, u_58, v_58);
  t = (ATerm) ATmakeAppl(sym__3, term_k_36, u_58, v_58);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm g_90 = NULL,h_90 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_90 = NULL,j_90 = NULL,k_90 = NULL;
      t = term_f_15;
      t = e_0(t);
      i_90 = t;
      t = term_z_38;
      j_90 = t;
      t = term_d_39;
      k_90 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_38, term_d_39, i_90);
      t = n_10(j_90, k_90, i_90, t);
      _fail(t);
    }
  else
    {
      ATerm n_90 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_90 = ATgetFirst((ATermList) t);
          h_90 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_90;
      t = c_0(t);
      t = term_f_15;
      t = d_0(t);
      n_90 = t;
      t = (ATerm) ATinsert(CheckATermList(h_90), n_90);
    }
  return(t);
}
ATerm y_12 (ATerm t)
{
  ATerm p_90 = NULL;
  p_90 = t;
  if(match_string(t, "-o"))
    {
      t = p_90;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_90;
    }
  return(t);
}
ATerm z_12 (ATerm t)
{
  ATerm q_90 = NULL,r_90 = NULL;
  q_90 = t;
  t = term_g_39;
  r_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_39, q_90);
  t = p_10(r_90, q_90, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_90);
  return(t);
}
ATerm a_13 (ATerm t)
{
  t = term_h_39;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_12, z_12, a_13, t);
  return(t);
}
ATerm n_10 (ATerm o_36, ATerm p_36, ATerm n_36, ATerm t)
{
  ATerm t_90 = NULL,u_90 = NULL,v_90 = NULL;
  t_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_36, p_36);
  {
    ATerm o_39 = t;
    int p_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_39 = ATgetArgument(t, 0);
            ATerm t_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_36, p_36);
        t = m_10(o_36, p_36, t);
        ;
        LocalPopChoice(p_39);
      }
    else
      {
        t = o_39;
        t = (ATerm) ATempty;
      }
    u_90 = t;
    t = (ATerm) ATinsert(CheckATermList(u_90), n_36);
    v_90 = t;
    t = SSL_table_put(o_36, p_36, v_90);
    t = t_90;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm c_91 = NULL,d_91 = NULL,e_91 = NULL,f_91 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_91 = NULL,h_91 = NULL,i_91 = NULL;
      t = term_f_15;
      t = n_0(t);
      g_91 = t;
      t = term_z_38;
      h_91 = t;
      t = term_d_39;
      i_91 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_38, term_d_39, g_91);
      t = n_10(h_91, i_91, g_91, t);
      _fail(t);
    }
  else
    {
      ATerm m_91 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_91 = ATgetFirst((ATermList) t);
          d_91 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_91;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_91 = ATgetFirst((ATermList) t);
          f_91 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_91;
      t = k_0(t);
      t = e_91;
      t = l_0(t);
      m_91 = t;
      t = (ATerm) ATinsert(CheckATermList(f_91), m_91);
    }
  return(t);
}
ATerm c_13 (ATerm t)
{
  ATerm o_91 = NULL;
  o_91 = t;
  if(match_string(t, "-i"))
    {
      t = o_91;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_91;
    }
  return(t);
}
ATerm d_13 (ATerm t)
{
  ATerm p_91 = NULL,q_91 = NULL;
  p_91 = t;
  t = term_u_39;
  q_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_39, p_91);
  t = p_10(q_91, p_91, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_91);
  return(t);
}
ATerm g_13 (ATerm t)
{
  t = term_v_39;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_13, d_13, g_13, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_91 = NULL,s_91 = NULL,t_91 = NULL,u_91 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_15;
  t = whoami_0_0(t);
  r_91 = t;
  t = term_g_15;
  t_91 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_w_39), r_91);
  u_91 = t;
  t = SSL_printnl(t_91, u_91);
  t = term_k_15;
  s_91 = t;
  t = SSL_exit(s_91);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_x_39;
  t = get_config_0_0(t);
  return(t);
}
ATerm k_10 (ATerm f_34, ATerm h_34, ATerm t)
{
  ATerm y_39 = t;
  int z_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_34, h_34);
      ;
      LocalPopChoice(z_39);
    }
  else
    {
      t = y_39;
      t = SSL_addr(f_34, h_34);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm t)
{
  ATerm w_91 = NULL,x_91 = NULL,y_91 = NULL;
  w_91 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_91;
      t = u_103(t);
    }
  else
    {
      ATerm b_92 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_91 = ATgetFirst((ATermList) t);
          y_91 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_91;
      t = foldr_2_0(u_103, v_103, t);
      b_92 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_91, b_92);
      t = v_103(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm h_13 (ATerm t)
{
  t = term_y_17;
  return(t);
}
ATerm i_13 (ATerm t)
{
  ATerm l_43 = NULL,m_43 = NULL;
  if(match_cons(t, sym__2))
    {
      l_43 = ATgetArgument(t, 0);
      m_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_10(l_43, m_43, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_92 = NULL,d_43 = NULL,e_43 = NULL;
  t = times_0_0(t);
  e_43 = t;
  t = SSL_explode_term(e_43);
  if(match_cons(t, sym__2))
    {
      ATerm a_40 = ATgetArgument(t, 0);
      d_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_43;
  t = foldr_2_0(h_13, i_13, t);
  e_92 = t;
  t = SSL_TicksToSeconds(e_92);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_92 = NULL,v_92 = NULL,w_92 = NULL;
  u_92 = t;
  if(match_cons(t, sym__2))
    {
      v_92 = ATgetArgument(t, 0);
      w_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_40 = t;
    int c_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_92;
        if((v_92 != t))
          {
            _fail(t);
          }
        t = u_92;
        ;
        LocalPopChoice(c_40);
      }
    else
      {
        t = b_40;
        t = (ATerm) ATmakeAppl(sym__2, v_92, w_92);
        {
          ATerm d_40 = t;
          int e_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_92, w_92);
              ;
              LocalPopChoice(e_40);
            }
          else
            {
              t = d_40;
              t = SSL_gtr(v_92, w_92);
            }
          t = (ATerm) ATmakeAppl(sym__2, v_92, w_92);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_116 (ATerm), ATerm t)
{
  ATerm a_93 = NULL;
  a_93 = t;
  {
    ATerm f_40 = t;
    int g_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_93 = NULL;
        t = term_t_36;
        t = get_config_0_0(t);
        f_93 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_93, term_k_15);
        t = geq_0_0(t);
        t = a_93;
        t = n_116(t);
        ;
        LocalPopChoice(g_40);
      }
    else
      {
        t = f_40;
        t = a_93;
      }
  }
  return(t);
}
ATerm j_13 (ATerm t)
{
  ATerm h_93 = NULL,i_93 = NULL,k_93 = NULL,l_93 = NULL;
  t = run_time_0_0(t);
  h_93 = t;
  t = term_f_15;
  t = whoami_0_0(t);
  i_93 = t;
  t = term_g_15;
  k_93 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_40), h_93), term_h_40), i_93);
  l_93 = t;
  t = SSL_printnl(k_93, l_93);
  t = (ATerm) ATmakeAppl(sym__2, term_g_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_40), h_93), term_h_40), i_93));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(j_13, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm m_93 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_17;
  m_93 = t;
  t = SSL_exit(m_93);
  return(t);
}
ATerm l_13 (ATerm t)
{
  ATerm u_93 = NULL,v_93 = NULL;
  v_93 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = v_93;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          u_93 = ATgetArgument(t, 0);
          {
            ATerm y_45 = NULL,e_8 = NULL;
            t = SSLgetAnnotations(v_93);
            y_45 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, u_93);
            e_8 = t;
            t = SSLsetAnnotations(e_8, y_45);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = v_93;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_119 (ATerm), ATerm t)
{
  ATerm j_40 = t;
  int k_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_40;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_40);
    }
  else
    {
      t = j_40;
      t = fetch_1_0(l_13, t);
    }
  t = d_119(t);
  return(t);
}
ATerm map_1_0 (ATerm e_99 (ATerm), ATerm t)
{
  ATerm n_94 (ATerm t)
  {
    ATerm k_94 = NULL,l_94 = NULL,m_94 = NULL;
    k_94 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_94;
      }
    else
      {
        ATerm g_46 = NULL,j_46 = NULL,k_46 = NULL,r_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_94 = ATgetFirst((ATermList) t);
            m_94 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_94);
        g_46 = t;
        t = l_94;
        t = e_99(t);
        j_46 = t;
        t = m_94;
        t = n_94(t);
        k_46 = t;
        t = (ATerm) ATinsert(CheckATermList(k_46), j_46);
        r_10 = t;
        t = SSLsetAnnotations(r_10, g_46);
      }
    return(t);
  }
  t = n_94(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm q_94 = NULL,r_94 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_94 = ATgetFirst((ATermList) t);
      r_94 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_94 = NULL,y_94 = NULL;
        ATerm m_13 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(x_94)), not_null(y_94));
          return(t);
        }
        t = r_94;
        t = i_0(t);
        if(((x_94 != NULL) && (x_94 != t)))
          _fail(t);
        else
          x_94 = t;
        t = q_94;
        t = g_0(t);
        if(((y_94 != NULL) && (y_94 != t)))
          _fail(t);
        else
          y_94 = t;
        t = r_94;
        t = reverse_acc_2_0(g_0, m_13, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_15;
      t = i_0(t);
    }
  return(t);
}
ATerm m_10 (ATerm f_38, ATerm g_38, ATerm t)
{
  t = SSL_table_get(f_38, g_38);
  return(t);
}
ATerm o_13 (ATerm t)
{
  ATerm c_95 = NULL,d_95 = NULL,e_95 = NULL,x_10 = NULL;
  e_95 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_95);
  c_95 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, d_95);
  x_10 = t;
  t = SSLsetAnnotations(x_10, c_95);
  return(t);
}
ATerm p_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_13 (ATerm t)
{
  ATerm g_95 = NULL;
  g_95 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_95), term_m_40);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_95 = NULL,b_95 = NULL;
  ATerm n_40 = t;
  int o_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_39;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_40);
    }
  else
    {
      t = n_40;
      t = fetch_1_0(o_13, t);
    }
  t = term_q_40;
  t = echo_0_0(t);
  t = term_z_38;
  a_95 = t;
  t = term_d_39;
  b_95 = t;
  t = term_r_40;
  t = m_10(a_95, b_95, t);
  t = reverse_acc_2_0(_id, p_13, t);
  t = map_1_0(q_13, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_95 = NULL,j_95 = NULL,k_95 = NULL;
  i_95 = t;
  {
    ATerm s_40 = t;
    int t_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_95;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_40 = ATgetFirst((ATermList) t);
                ATerm v_40 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_95;
          }
        ;
        LocalPopChoice(t_40);
      }
    else
      {
        t = s_40;
        t = (ATerm) ATinsert(ATempty, i_95);
      }
    j_95 = t;
    t = term_e_35;
    k_95 = t;
    t = SSL_printnl(k_95, j_95);
    t = i_95;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_x_39;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm r_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_13 (ATerm t)
{
  ATerm o_95 = NULL,p_95 = NULL;
  t = term_w_40;
  o_95 = t;
  t = term_f_15;
  p_95 = t;
  t = term_x_40;
  t = p_10(o_95, p_95, t);
  return(t);
}
ATerm t_13 (ATerm t)
{
  t = term_y_40;
  return(t);
}
ATerm u_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_13 (ATerm t)
{
  ATerm q_95 = NULL,r_95 = NULL,s_95 = NULL,t_95 = NULL;
  t = term_w_40;
  s_95 = t;
  t = term_f_15;
  t_95 = t;
  t = term_x_40;
  t = p_10(s_95, t_95, t);
  t = term_a_41;
  q_95 = t;
  t = term_f_15;
  r_95 = t;
  t = term_b_41;
  t = p_10(q_95, r_95, t);
  t = term_c_41;
  return(t);
}
ATerm l_14 (ATerm t)
{
  t = term_d_41;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_41 = t;
  int f_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_13, s_13, t_13, t);
      ;
      LocalPopChoice(f_41);
    }
  else
    {
      t = e_41;
      t = Option_3_0(u_13, x_13, l_14, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_121 (ATerm), ATerm t)
{
  ATerm y_95 = NULL,z_95 = NULL,a_96 = NULL,b_96 = NULL,d_96 = NULL,e_96 = NULL,n_11 = NULL;
  y_95 = t;
  {
    ATerm g_41 = t;
    int h_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_41;
        t = g_121(t);
        ;
        LocalPopChoice(h_41);
      }
    else
      {
        t = g_41;
      }
    t = y_95;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_96 = ATgetFirst((ATermList) t);
        b_96 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(y_95);
    z_95 = t;
    t = term_x_39;
    e_96 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_x_39, a_96);
    t = p_10(e_96, a_96, t);
    t = b_96;
    {
      ATerm o_96 (ATerm t)
      {
        ATerm j_41 = t;
        int k_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_41 = t;
            int n_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_96 = NULL;
                h_96 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = h_96;
                ;
                LocalPopChoice(n_41);
              }
            else
              {
                t = l_41;
                t = g_121(t);
                t = Cons_2_0(_id, o_96, t);
              }
            ;
            LocalPopChoice(k_41);
          }
        else
          {
            t = j_41;
            {
              ATerm k_96 = NULL,l_96 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  k_96 = ATgetFirst((ATermList) t);
                  l_96 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(l_96), (ATerm) ATmakeAppl(sym_Undefined_1, k_96));
            }
          }
        return(t);
      }
      t = o_96(t);
      d_96 = t;
      t = (ATerm) ATinsert(CheckATermList(d_96), (ATerm) ATmakeAppl(sym_Program_1, a_96));
      n_11 = t;
      t = SSLsetAnnotations(n_11, z_95);
    }
  }
  return(t);
}
ATerm n_14 (ATerm t)
{
  ATerm c_97 = NULL;
  c_97 = t;
  if(match_string(t, "--help"))
    {
      t = c_97;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_97;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_97;
        }
    }
  return(t);
}
ATerm o_14 (ATerm t)
{
  ATerm d_97 = NULL,e_97 = NULL;
  t = term_l_40;
  d_97 = t;
  t = term_f_15;
  e_97 = t;
  t = term_o_41;
  t = p_10(d_97, e_97, t);
  t = term_p_41;
  return(t);
}
ATerm p_14 (ATerm t)
{
  t = term_q_41;
  return(t);
}
ATerm q_14 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm f_121 (ATerm), ATerm t)
{
  ATerm v_96 = NULL,w_96 = NULL,x_96 = NULL,y_96 = NULL,z_96 = NULL,a_97 = NULL,b_97 = NULL;
  x_96 = t;
  t = term_z_38;
  z_96 = t;
  t = term_d_39;
  a_97 = t;
  t = (ATerm) ATempty;
  b_97 = t;
  t = SSL_table_put(z_96, a_97, b_97);
  t = x_96;
  {
    ATerm m_14 (ATerm t)
    {
      ATerm s_41 = t;
      int t_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_121(t);
          ;
          LocalPopChoice(t_41);
        }
      else
        {
          t = s_41;
          {
            ATerm u_41 = t;
            int v_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_14, o_14, p_14, t);
                ;
                LocalPopChoice(v_41);
              }
            else
              {
                t = u_41;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_14, t);
    {
      ATerm w_41 = t;
      int x_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_97 = NULL;
          n_97 = t;
          {
            ATerm y_41 = t;
            int z_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_46 = NULL;
                t = n_97;
                {
                  ATerm a_42 = t;
                  int b_42 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_l_40;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(b_42);
                    }
                  else
                    {
                      t = a_42;
                      t = fetch_1_0(q_14, t);
                    }
                  t = n_97;
                  t = default_system_usage_0_0(t);
                  t = term_y_17;
                  r_46 = t;
                  t = SSL_exit(r_46);
                }
                ;
                LocalPopChoice(z_41);
              }
            else
              {
                t = y_41;
                {
                  ATerm v_46 = NULL;
                  t = term_w_40;
                  t = get_config_0_0(t);
                  t = n_97;
                  t = default_system_about_0_0(t);
                  t = term_y_17;
                  v_46 = t;
                  t = SSL_exit(v_46);
                }
              }
          }
          ;
          LocalPopChoice(x_41);
        }
      else
        {
          t = w_41;
          {
            ATerm c_42 = t;
            int d_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_97 = NULL,u_97 = NULL,v_97 = NULL;
                ATerm r_14 (ATerm t)
                {
                  ATerm w_97 = NULL,x_97 = NULL,y_97 = NULL,r_11 = NULL;
                  y_97 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      x_97 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(y_97);
                  w_97 = t;
                  t = x_97;
                  if(((v_96 != NULL) && (v_96 != t)))
                    _fail(t);
                  else
                    v_96 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, x_97);
                  r_11 = t;
                  t = SSLsetAnnotations(r_11, w_97);
                  return(t);
                }
                t = fetch_1_0(r_14, t);
                t = term_g_15;
                u_97 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_96)), term_e_42);
                v_97 = t;
                t = SSL_printnl(u_97, v_97);
                t = (ATerm) ATmakeAppl(sym__2, term_g_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_96)), term_e_42));
                t = default_system_usage_0_0(t);
                t = term_k_15;
                o_97 = t;
                t = SSL_exit(o_97);
                ;
                LocalPopChoice(d_42);
              }
            else
              {
                t = c_42;
              }
          }
        }
      w_96 = t;
      t = term_z_38;
      y_96 = t;
      t = SSL_table_destroy(y_96);
      t = w_96;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_119 (ATerm), ATerm g_119 (ATerm), ATerm h_119 (ATerm), ATerm i_119 (ATerm), ATerm t)
{
  ATerm d_98 = NULL,e_98 = NULL,f_98 = NULL,g_98 = NULL;
  t = parse_options_1_0(f_119, t);
  d_98 = t;
  t = term_f_42;
  g_98 = t;
  t = SSL_table_create(g_98);
  t = term_f_42;
  e_98 = t;
  t = term_g_42;
  f_98 = t;
  t = SSL_table_put(e_98, f_98, d_98);
  t = d_98;
  t = h_119(t);
  {
    ATerm h_42 = t;
    int i_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_119, t);
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
              t = i_119(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(k_42);
            }
          else
            {
              t = j_42;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm v_14 (ATerm t)
{
  t = if_verbose2_1_0(a_15, t);
  return(t);
}
ATerm x_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_14 (ATerm t)
{
  ATerm h_98 = NULL,i_98 = NULL;
  t = term_l_42;
  h_98 = t;
  t = term_f_15;
  i_98 = t;
  t = term_m_42;
  t = p_10(h_98, i_98, t);
  t = term_n_42;
  return(t);
}
ATerm z_14 (ATerm t)
{
  t = term_o_42;
  return(t);
}
ATerm a_15 (ATerm t)
{
  ATerm j_98 = NULL,k_98 = NULL,l_98 = NULL,m_98 = NULL;
  j_98 = t;
  t = term_x_39;
  t = get_config_0_0(t);
  k_98 = t;
  t = term_g_15;
  l_98 = t;
  t = (ATerm) ATinsert(ATempty, k_98);
  m_98 = t;
  t = SSL_printnl(l_98, m_98);
  t = j_98;
  return(t);
}
ATerm iowrap_3_0 (ATerm o_118 (ATerm), ATerm p_118 (ATerm), ATerm q_118 (ATerm), ATerm t)
{
  ATerm t_14 (ATerm t)
  {
    ATerm p_42 = t;
    int q_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_118(t);
        ;
        LocalPopChoice(q_42);
      }
    else
      {
        t = p_42;
        {
          ATerm r_42 = t;
          int s_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(s_42);
            }
          else
            {
              t = r_42;
              {
                ATerm t_42 = t;
                int u_42 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(u_42);
                  }
                else
                  {
                    t = t_42;
                    {
                      ATerm v_42 = t;
                      int w_42 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(x_14, y_14, z_14, t);
                          ;
                          LocalPopChoice(w_42);
                        }
                      else
                        {
                          t = v_42;
                          {
                            ATerm x_42 = t;
                            int y_42 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(y_42);
                              }
                            else
                              {
                                t = x_42;
                                t = keep_option_0_0(t);
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
  ATerm w_14 (ATerm t)
  {
    ATerm n_98 = NULL,o_98 = NULL,p_98 = NULL;
    o_98 = t;
    {
      ATerm z_42 = t;
      int a_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_15 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((n_98 != NULL) && (n_98 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  n_98 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(b_15, t);
          ;
          LocalPopChoice(a_43);
        }
      else
        {
          t = z_42;
          t = term_b_43;
          n_98 = t;
        }
      t = not_null(n_98);
      t = ReadFromFile_0_0(t);
      p_98 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_98, p_98);
      t = apply_strategy_1_0(o_118, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(t_14, q_118, v_14, w_14, t);
  return(t);
}
ATerm c_15 (ATerm t)
{
  ATerm q_98 = NULL,r_98 = NULL,s_98 = NULL,t_98 = NULL,u_98 = NULL,v_98 = NULL,w_98 = NULL,x_98 = NULL,y_98 = NULL,z_98 = NULL,a_99 = NULL,b_99 = NULL,d_99 = NULL,g_99 = NULL,x_11 = NULL,w_11 = NULL,u_11 = NULL;
  g_99 = t;
  if(match_cons(t, sym__2))
    {
      r_98 = ATgetArgument(t, 0);
      s_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_99);
  q_98 = t;
  t = s_98;
  if(match_cons(t, sym_Specification_1))
    {
      x_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_98);
  w_98 = t;
  t = x_98;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_98 = ATgetFirst((ATermList) t);
      a_99 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_98);
  y_98 = t;
  t = a_99;
  t = Cons_2_0(d_15, e_15, t);
  b_99 = t;
  t = (ATerm) ATinsert(CheckATermList(b_99), z_98);
  u_11 = t;
  t = SSLsetAnnotations(u_11, y_98);
  d_99 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, d_99);
  w_11 = t;
  t = SSLsetAnnotations(w_11, w_98);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm c_43 = ATgetArgument(t, 0);
      if(((ATgetType(c_43) == AT_LIST) && !(ATisEmpty(c_43))))
        {
          u_98 = ATgetFirst((ATermList) c_43);
          {
            ATerm f_43 = (ATerm) ATgetNext((ATermList) c_43);
            if(((ATgetType(f_43) == AT_LIST) && !(ATisEmpty(f_43))))
              {
                ATerm g_43 = ATgetFirst((ATermList) f_43);
                if(match_cons(g_43, sym_Strategies_1))
                  {
                    v_98 = ATgetArgument(g_43, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm h_43 = (ATerm) ATgetNext((ATermList) f_43);
                  if(((ATgetType(h_43) != AT_LIST) || !(ATisEmpty(h_43))))
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
  t = l_8(u_98, v_98, t);
  t_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_98, t_98);
  x_11 = t;
  t = SSLsetAnnotations(x_11, q_98);
  return(t);
}
ATerm d_15 (ATerm t)
{
  ATerm h_99 = NULL,i_99 = NULL,j_99 = NULL,k_99 = NULL,t_11 = NULL;
  k_99 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      i_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_99);
  h_99 = t;
  t = i_99;
  t = needed_defs_0_0(t);
  j_99 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, j_99);
  t_11 = t;
  t = SSLsetAnnotations(t_11, h_99);
  return(t);
}
ATerm e_15 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(c_15, _fail, default_usage_0_0, t);
  return(t);
}
