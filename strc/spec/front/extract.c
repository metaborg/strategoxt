#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
static void init_module_constructors (void)
{
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
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
}
ATerm term_u_42;
ATerm term_y_41;
ATerm term_x_41;
ATerm term_w_41;
ATerm term_v_41;
ATerm term_q_41;
ATerm term_p_41;
ATerm term_o_41;
ATerm term_a_41;
ATerm term_z_40;
ATerm term_y_40;
ATerm term_r_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_e_40;
ATerm term_c_40;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_s_39;
ATerm term_r_39;
ATerm term_o_39;
ATerm term_n_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_d_38;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_n_37;
ATerm term_l_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_t_36;
ATerm term_o_36;
ATerm term_c_36;
ATerm term_m_35;
ATerm term_h_35;
ATerm term_e_35;
ATerm term_s_34;
ATerm term_o_34;
ATerm term_l_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_b_34;
ATerm term_y_33;
ATerm term_v_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_c_27;
ATerm term_a_27;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_o_26;
ATerm term_q_20;
ATerm term_a_20;
ATerm term_p_19;
ATerm term_z_18;
ATerm term_o_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_u_17;
ATerm term_t_16;
ATerm term_h_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_l_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorNeeded", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Defined_1, term_v_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("e_1", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Defined_1, term_y_15);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_Sort_2, term_o_26, (ATerm) ATempty);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_ConstType_1, term_t_26);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("overloading external definition: ", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(sym__2, term_u_17, term_u_17);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(sym__2, term_h_34, term_i_34);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(sym__2, term_o_36, term_u_17);
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_17);
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(sym__2, term_n_37, term_e_15);
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_l_38);
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(sym__2, term_c_40, term_e_15);
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(sym__2, term_g_40, term_e_15);
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(sym__2, term_r_39, term_e_15);
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(sym__2, term_v_41, term_e_15);
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm ConstructorNeeded_0_0 (ATerm t);
ATerm filter_1_0 (ATerm y_115 (ATerm), ATerm t);
static ATerm h_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm DeclareConstructorNeeded_0_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm h_8 (ATerm e_75, ATerm d_75, ATerm t);
static ATerm j_8 (ATerm d_58, ATerm e_58, ATerm f_58, ATerm t);
static ATerm z_0 (ATerm t);
ATerm DefinitionExists_0_0 (ATerm t);
ATerm sboundin_3_0 (ATerm g_97 (ATerm), ATerm h_97 (ATerm), ATerm i_97 (ATerm), ATerm t);
static ATerm b_1 (ATerm t);
static ATerm q_8 (ATerm v_25, ATerm u_25, ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
ATerm free_vars2_4_0 (ATerm f_118 (ATerm), ATerm g_118 (ATerm), ATerm h_118 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm i_118 (ATerm), ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm svars_arity_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm r_129 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm w_8 (ATerm w_73, ATerm x_73, ATerm y_73, ATerm t);
static ATerm e_38 (ATerm o_37, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm w_103 (ATerm), ATerm x_103 (ATerm), ATerm t);
static ATerm k_5 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm f_99 (ATerm), ATerm t);
static ATerm a_9 (ATerm j_69, ATerm k_69, ATerm l_69, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm b_98 (ATerm), ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm tuple_unzip_1_0 (ATerm d_102 (ATerm), ATerm t);
ATerm MkDistApplication_0_0 (ATerm t);
static ATerm b_9 (ATerm u_40, ATerm v_40, ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
ATerm copy_1_0 (ATerm k_115 (ATerm), ATerm t);
static ATerm c_9 (ATerm g_57, ATerm h_57, ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm v_57 (ATerm p_53, ATerm q_53, ATerm r_53, ATerm u_53, ATerm t);
static ATerm w_57 (ATerm t_54, ATerm u_54, ATerm v_54, ATerm w_54, ATerm t);
static ATerm c_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm DefineCongruence_0_0 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
ATerm choices_0_0 (ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm t_99 (ATerm), ATerm t);
static ATerm p_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm k_97 (ATerm), ATerm l_97 (ATerm), ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm l_7 (ATerm t);
ATerm JoinDefs2_0_0 (ATerm t);
ATerm giving_up_0_0 (ATerm t);
static ATerm n_7 (ATerm t);
ATerm JoinDefsExt_0_0 (ATerm t);
static ATerm k_61 (ATerm g_58, ATerm h_58, ATerm k_58, ATerm l_58, ATerm t);
ATerm get_definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm u_110 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm p_63 (ATerm x_62, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm i_9 (ATerm b_112 (ATerm), ATerm v_45, ATerm u_45, ATerm t);
ATerm genzip_4_0 (ATerm n_102 (ATerm), ATerm o_102 (ATerm), ATerm p_102 (ATerm), ATerm q_102 (ATerm), ATerm t);
static ATerm t_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm n_9 (ATerm w_689, ATerm b_690, ATerm q_67, ATerm t);
static ATerm x_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_68 (ATerm i_66, ATerm j_66, ATerm l_66, ATerm t);
static ATerm c_8 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm p_9 (ATerm n_129 (ATerm), ATerm o_129 (ATerm), ATerm p_129 (ATerm), ATerm r_68, ATerm o_68, ATerm w_68, ATerm s_68, ATerm p_68, ATerm q_68, ATerm t);
ATerm GnNextChangeGraph_3_0 (ATerm n_129 (ATerm), ATerm o_129 (ATerm), ATerm p_129 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm n_104 (ATerm), ATerm o_104 (ATerm), ATerm t);
ATerm for_3_0 (ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm s_104 (ATerm), ATerm t);
static ATerm i_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm b_31 (ATerm a_30, ATerm b_30, ATerm t);
ATerm extract_needed_defs_0_0 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
ATerm RegisterExtSDefInl_0_0 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm q_10 (ATerm t);
ATerm RegisterExtSDef_0_0 (ATerm t);
static ATerm s_9 (ATerm u_109 (ATerm), ATerm c_42, ATerm a_42, ATerm t);
static ATerm t_9 (ATerm j_112 (ATerm), ATerm k_112 (ATerm), ATerm b_46, ATerm a_46, ATerm t);
static ATerm u_9 (ATerm g_112 (ATerm), ATerm x_45, ATerm w_45, ATerm t);
ATerm Arities_0_0 (ATerm t);
static ATerm w_9 (ATerm v_42, ATerm w_42, ATerm t);
ATerm Definitions_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm w_114 (ATerm), ATerm x_114 (ATerm), ATerm y_114 (ATerm), ATerm t);
static ATerm x_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
ATerm RegisterSDefT_0_0 (ATerm t);
static ATerm i_11 (ATerm t);
ATerm needed_defs_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm t);
static ATerm z_9 (ATerm i_33, ATerm j_33, ATerm t);
static ATerm a_10 (ATerm d_32, ATerm e_32, ATerm t);
static ATerm c_10 (ATerm l_105 (ATerm), ATerm d_238, ATerm h_32, ATerm t);
static ATerm b_10 (ATerm z_31, ATerm a_32, ATerm t);
static ATerm m_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm f_124 (ATerm), ATerm t);
static ATerm s_84 (ATerm m_84, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm d_10 (ATerm f_32, ATerm t);
static ATerm e_10 (ATerm k_33, ATerm l_33, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm d_86 (ATerm c_85, ATerm t);
static ATerm e_86 (ATerm g_85, ATerm h_85, ATerm i_85, ATerm t);
static ATerm f_86 (ATerm q_85, ATerm r_85, ATerm s_85, ATerm t);
static ATerm f_10 (ATerm t);
static ATerm q_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm o_110 (ATerm), ATerm t);
static ATerm y_9 (ATerm y_54, ATerm z_54, ATerm t);
ATerm debug_1_0 (ATerm j_105 (ATerm), ATerm t);
static ATerm x_11 (ATerm t);
static ATerm e_12 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm c_107 (ATerm), ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm v_12 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm l_10 (ATerm j_37, ATerm k_37, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm w_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm z_12 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm j_10 (ATerm k_42, ATerm l_42, ATerm j_42, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm a_13 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm g_10 (ATerm o_40, ATerm p_40, ATerm t);
ATerm foldr_2_0 (ATerm u_114 (ATerm), ATerm v_114 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm f_13 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm b_107 (ATerm), ATerm t);
static ATerm g_13 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_13 (ATerm t);
ATerm need_help_1_0 (ATerm d_125 (ATerm), ATerm t);
ATerm map_1_0 (ATerm e_110 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm i_10 (ATerm b_44, ATerm c_44, ATerm t);
static ATerm m_13 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm o_13 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm s_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm j_14 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm g_127 (ATerm), ATerm t);
static ATerm l_14 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm p_14 (ATerm t);
ATerm parse_options_1_0 (ATerm f_127 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm f_125 (ATerm), ATerm g_125 (ATerm), ATerm h_125 (ATerm), ATerm i_125 (ATerm), ATerm t);
static ATerm t_14 (ATerm t);
static ATerm v_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm x_14 (ATerm t);
static ATerm y_14 (ATerm t);
ATerm iowrap_3_0 (ATerm o_124 (ATerm), ATerm p_124 (ATerm), ATerm q_124 (ATerm), ATerm t);
static ATerm a_15 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm c_15 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,j_0 = NULL,o_0 = NULL,r_0 = NULL;
  a_0 = t;
  t = term_e_15;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_f_15;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_15), b_0), term_g_15);
  r_0 = t;
  t = SSL_printnl(o_0, r_0);
  t = term_i_15;
  j_0 = t;
  t = SSL_exit(j_0);
  t = a_0;
  return(t);
}
ATerm ConstructorNeeded_0_0 (ATerm t)
{
  ATerm t_1 = NULL,u_1 = NULL,v_1 = NULL;
  t_1 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      u_1 = ATgetArgument(t, 0);
      v_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_15 = t;
    int k_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_1 = NULL,z_1 = NULL;
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, u_1, (ATerm) ATempty);
        x_1 = t;
        t = term_l_15;
        z_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATmakeAppl(sym_OpDecl_2, u_1, (ATerm) ATempty));
        t = w_9(z_1, x_1, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm n_15 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) n_15) != ATmakeSymbol("g_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, u_1, v_1);
        LocalPopChoice(k_15);
      }
    else
      {
        t = j_15;
        {
          ATerm x_3 = NULL,y_3 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, u_1, (ATerm) ATempty);
          x_3 = t;
          t = term_l_15;
          y_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATmakeAppl(sym_OpDecl_2, u_1, (ATerm) ATempty));
          t = w_9(y_3, x_3, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm p_15 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) p_15) != ATmakeSymbol("e_1", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, u_1, v_1);
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm y_115 (ATerm), ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL,m_2 = NULL;
  k_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_2;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_2 = ATgetFirst((ATermList) t);
          m_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm q_15 = t;
        int r_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_4 = NULL,x_4 = NULL,y_4 = NULL,f_0 = NULL;
            t = SSLgetAnnotations(k_2);
            d_4 = t;
            t = l_2;
            t = y_115(t);
            x_4 = t;
            t = m_2;
            t = filter_1_0(y_115, t);
            y_4 = t;
            t = (ATerm) ATinsert(CheckATermList(y_4), x_4);
            f_0 = t;
            t = SSLsetAnnotations(f_0, d_4);
            LocalPopChoice(r_15);
          }
        else
          {
            t = q_15;
            t = m_2;
            t = filter_1_0(y_115, t);
          }
      }
    }
  return(t);
}
static ATerm h_0 (ATerm t)
{
  t = term_l_15;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_l_15;
  return(t);
}
ATerm DeclareConstructorNeeded_0_0 (ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL;
  s_2 = t;
  {
    ATerm s_15 = t;
    int t_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Cong_2))
          {
            t_2 = ATgetArgument(t, 0);
            {
              ATerm u_15 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(t_15);
        {
          ATerm x_2 = NULL,y_2 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, t_2, (ATerm) ATempty);
          x_2 = t;
          t = term_w_15;
          y_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, t_2, (ATerm) ATempty), term_w_15);
          t = s_9(h_0, x_2, y_2, t);
          t = s_2;
        }
      }
    else
      {
        t = s_15;
        {
          ATerm b_3 = NULL,c_3 = NULL;
          if(match_cons(t, sym_Op_2))
            {
              t_2 = ATgetArgument(t, 0);
              {
                ATerm x_15 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, t_2, (ATerm) ATempty);
          b_3 = t;
          t = term_z_15;
          c_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, t_2, (ATerm) ATempty), term_z_15);
          t = s_9(v_0, b_3, c_3, t);
          t = s_2;
        }
      }
  }
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm a_16 = t;
  int c_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareConstructorNeeded_0_0(t);
      LocalPopChoice(c_16);
    }
  else
    {
      t = a_16;
    }
  return(t);
}
static ATerm h_8 (ATerm e_75, ATerm d_75, ATerm t)
{
  ATerm e_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,q_3 = NULL,r_3 = NULL,t_0 = NULL,p_0 = NULL,m_0 = NULL;
  t = d_75;
  t = topdown_1_0(x_0, t);
  t = e_75;
  if(match_cons(t, sym_Signature_1))
    {
      g_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_75);
  e_3 = t;
  t = g_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_3 = ATgetFirst((ATermList) t);
      k_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_3);
  i_3 = t;
  t = j_3;
  if(match_cons(t, sym_Constructors_1))
    {
      o_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_3);
  n_3 = t;
  t = o_3;
  t = filter_1_0(ConstructorNeeded_0_0, t);
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym_Constructors_1, q_3);
  m_0 = t;
  t = SSLsetAnnotations(m_0, n_3);
  r_3 = t;
  t = k_3;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_3), r_3);
  p_0 = t;
  t = SSLsetAnnotations(p_0, i_3);
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, m_3);
  t_0 = t;
  t = SSLsetAnnotations(t_0, e_3);
  h_3 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, d_75)), h_3));
  return(t);
}
static ATerm j_8 (ATerm d_58, ATerm e_58, ATerm f_58, ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL;
  t = term_f_15;
  u_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_16), f_58), term_f_16), e_58), term_e_16), d_58), term_d_16);
  v_3 = t;
  t = SSL_printnl(u_3, v_3);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_16), f_58), term_f_16), e_58), term_e_16), d_58), term_d_16);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_16 = ATgetArgument(t, 0);
      if(((ATgetType(i_16) != AT_INT) || (ATgetInt((ATermInt) i_16) != 0)))
        _fail(t);
      {
        ATerm j_16 = ATgetArgument(t, 1);
        if(((ATgetType(j_16) != AT_INT) || (ATgetInt((ATermInt) j_16) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL;
  p_4 = t;
  if(match_cons(t, sym__2))
    {
      q_4 = ATgetArgument(t, 0);
      r_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_4;
  if(match_cons(t, sym__2))
    {
      s_4 = ATgetArgument(t, 0);
      t_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_4;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = t_4;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm l_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_5 = NULL,j_5 = NULL;
        t = q_4;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm n_16 = ATgetFirst((ATermList) t);
            ATerm o_16 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(o_16) == AT_LIST) && !(ATisEmpty(o_16))))
              {
                ATerm q_16 = ATgetFirst((ATermList) o_16);
                ATerm r_16 = (ATerm) ATgetNext((ATermList) o_16);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm s_16 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(z_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = s_16;
            }
        }
        t = term_f_15;
        i_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, q_4), term_t_16);
        j_5 = t;
        t = SSL_printnl(i_5, j_5);
        t = (ATerm) ATinsert(ATinsert(ATempty, q_4), term_t_16);
        t = giving_up_0_0(t);
        LocalPopChoice(m_16);
      }
    else
      {
        t = l_16;
        {
          ATerm q_5 = NULL,r_5 = NULL;
          t = q_4;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm u_16 = ATgetFirst((ATermList) t);
              if(match_cons(u_16, sym__2))
                {
                  q_5 = ATgetArgument(u_16, 0);
                  r_5 = ATgetArgument(u_16, 1);
                }
              else
                _fail(t);
              {
                ATerm v_16 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(v_16) != AT_LIST) || !(ATisEmpty(v_16))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, q_4, (ATerm) ATmakeAppl(sym__2, q_5, r_5));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, q_4, (ATerm) ATmakeAppl(sym__2, q_5, r_5));
        }
      }
  }
  return(t);
}
ATerm sboundin_3_0 (ATerm g_97 (ATerm), ATerm h_97 (ATerm), ATerm i_97 (ATerm), ATerm t)
{
  ATerm n_8 = NULL,y_8 = NULL,o_9 = NULL,m_10 = NULL,n_10 = NULL;
  o_9 = t;
  if(match_cons(t, sym_Let_2))
    {
      m_10 = ATgetArgument(t, 0);
      n_10 = ATgetArgument(t, 1);
      {
        ATerm a_6 = NULL,g_6 = NULL,j_6 = NULL,i_1 = NULL;
        t = SSLgetAnnotations(o_9);
        a_6 = t;
        t = m_10;
        t = g_97(t);
        g_6 = t;
        t = n_10;
        t = g_97(t);
        j_6 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, g_6, j_6);
        i_1 = t;
        t = SSLsetAnnotations(i_1, a_6);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          m_10 = ATgetArgument(t, 0);
          n_10 = ATgetArgument(t, 1);
          n_8 = ATgetArgument(t, 2);
          {
            ATerm s_7 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL,k_1 = NULL;
            t = SSLgetAnnotations(o_9);
            s_7 = t;
            t = m_10;
            t = i_97(t);
            e_8 = t;
            t = n_10;
            t = i_97(t);
            f_8 = t;
            t = n_8;
            t = g_97(t);
            g_8 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, e_8, f_8, g_8);
            k_1 = t;
            t = SSLsetAnnotations(k_1, s_7);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              m_10 = ATgetArgument(t, 0);
              n_10 = ATgetArgument(t, 1);
              n_8 = ATgetArgument(t, 2);
              y_8 = ATgetArgument(t, 3);
              {
                ATerm v_8 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,j_9 = NULL,l_1 = NULL;
                t = SSLgetAnnotations(o_9);
                v_8 = t;
                t = m_10;
                t = i_97(t);
                f_9 = t;
                t = n_10;
                t = i_97(t);
                g_9 = t;
                t = n_8;
                t = i_97(t);
                h_9 = t;
                t = y_8;
                t = g_97(t);
                j_9 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, f_9, g_9, h_9, j_9);
                l_1 = t;
                t = SSLsetAnnotations(l_1, v_8);
              }
            }
          else
            {
              ATerm o_10 = NULL,s_10 = NULL,w_10 = NULL,m_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  m_10 = ATgetArgument(t, 0);
                  n_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(o_9);
              o_10 = t;
              t = m_10;
              t = i_97(t);
              s_10 = t;
              t = n_10;
              t = g_97(t);
              w_10 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, s_10, w_10);
              m_1 = t;
              t = SSLsetAnnotations(m_1, o_10);
            }
        }
    }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm y_10 = NULL;
  ATerm w_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          y_10 = ATgetArgument(t, 0);
          {
            ATerm z_16 = ATgetArgument(t, 1);
          }
          {
            ATerm a_17 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_16);
      t = y_10;
    }
  else
    {
      t = w_16;
      if(match_cons(t, sym_SDefT_4))
        {
          y_10 = ATgetArgument(t, 0);
          {
            ATerm d_17 = ATgetArgument(t, 1);
          }
          {
            ATerm e_17 = ATgetArgument(t, 2);
          }
          {
            ATerm f_17 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = y_10;
    }
  return(t);
}
static ATerm q_8 (ATerm v_25, ATerm u_25, ATerm t)
{
  t = v_25;
  t = map_1_0(b_1, t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm w_11 = NULL,y_11 = NULL;
  if(match_cons(t, sym__2))
    {
      w_11 = ATgetArgument(t, 0);
      y_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_9(j_1, w_11, y_11, t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm z_11 = NULL;
  if(match_cons(t, sym__2))
    {
      z_11 = ATgetArgument(t, 0);
      if((z_11 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm p_12 = NULL,q_12 = NULL;
  if(match_cons(t, sym__2))
    {
      p_12 = ATgetArgument(t, 0);
      q_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_9(p_1, p_12, q_12, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm r_12 = NULL;
  if(match_cons(t, sym__2))
    {
      r_12 = ATgetArgument(t, 0);
      if((r_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm q_1 (ATerm t)
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
ATerm free_vars2_4_0 (ATerm f_118 (ATerm), ATerm g_118 (ATerm), ATerm h_118 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm i_118 (ATerm), ATerm t)
{
  static ATerm j_13 (ATerm t)
  {
    ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL;
    c_12 = t;
    {
      ATerm h_17 = t;
      int i_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_118(t);
          LocalPopChoice(i_17);
        }
      else
        {
          t = h_17;
          t = (ATerm) ATempty;
        }
    }
    a_12 = t;
    t = c_12;
    {
      ATerm j_17 = t;
      int k_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_12 = NULL,l_11 = NULL,r_11 = NULL;
          t = g_118(t);
          d_12 = t;
          t = c_12;
          {
            static ATerm c_1 (ATerm t)
            {
              ATerm e_11 = NULL;
              t = j_13(t);
              e_11 = t;
              t = (ATerm) ATmakeAppl(sym__2, e_11, d_12);
              t = i_9(i_118, e_11, d_12, t);
              return(t);
            }
            t = h_118(c_1, j_13, d_1, t);
          }
          r_11 = t;
          t = SSL_explode_term(r_11);
          if(match_cons(t, sym__2))
            {
              ATerm l_17 = ATgetArgument(t, 0);
              l_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_11;
          t = foldr_3_0(f_1, h_1, _id, t);
          LocalPopChoice(k_17);
        }
      else
        {
          t = j_17;
          {
            ATerm f_12 = NULL;
            t = SSL_explode_term(c_12);
            if(match_cons(t, sym__2))
              {
                ATerm m_17 = ATgetArgument(t, 0);
                f_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = f_12;
            t = foldr_3_0(n_1, o_1, j_13, t);
          }
        }
    }
    b_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_12, b_12);
    t = u_9(q_1, a_12, b_12, t);
    return(t);
  }
  t = j_13(t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm n_17 = ATgetArgument(t, 0);
      if(match_cons(n_17, sym_SVar_1))
        {
          v_13 = ATgetArgument(n_17, 0);
        }
      else
        _fail(t);
      w_13 = ATgetArgument(t, 1);
      x_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = w_13;
  t = foldr_3_0(f_2, g_2, h_2, t);
  y_13 = t;
  t = x_13;
  t = foldr_3_0(i_2, j_2, n_2, t);
  z_13 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, v_13, (ATerm) ATmakeAppl(sym__2, y_13, z_13)));
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL;
  e_14 = t;
  if(match_cons(t, sym_Let_2))
    {
      f_14 = ATgetArgument(t, 0);
      g_14 = ATgetArgument(t, 1);
      t = e_14;
      t = q_8(f_14, g_14, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          f_14 = ATgetArgument(t, 0);
          g_14 = ATgetArgument(t, 1);
          h_14 = ATgetArgument(t, 2);
          t = g_14;
          t = map_1_0(p_2, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              f_14 = ATgetArgument(t, 0);
              g_14 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, f_14);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  f_14 = ATgetArgument(t, 0);
                  g_14 = ATgetArgument(t, 1);
                  h_14 = ATgetArgument(t, 2);
                  i_14 = ATgetArgument(t, 3);
                  t = g_14;
                  t = map_1_0(q_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_14 = ATgetArgument(t, 0);
                      g_14 = ATgetArgument(t, 1);
                      h_14 = ATgetArgument(t, 2);
                      i_14 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_14;
                  t = map_1_0(r_2, t);
                }
            }
        }
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm k_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_17 = ATgetArgument(t, 0);
      if(match_cons(r_17, sym__2))
        {
          k_16 = ATgetArgument(r_17, 0);
          {
            ATerm t_17 = ATgetArgument(r_17, 1);
          }
        }
      else
        _fail(t);
      if((k_16 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_u_17;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL;
  if(match_cons(t, sym__2))
    {
      a_14 = ATgetArgument(t, 0);
      b_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10(a_14, b_14, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_i_15;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_u_17;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL;
  if(match_cons(t, sym__2))
    {
      c_14 = ATgetArgument(t, 0);
      d_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10(c_14, d_14, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_i_15;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm s_14 = NULL;
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_14 = ATgetArgument(t, 0);
          {
            ATerm y_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_17);
      t = s_14;
    }
  else
    {
      t = w_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_14;
    }
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm m_15 = NULL;
  ATerm z_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_15 = ATgetArgument(t, 0);
          {
            ATerm f_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_18);
      t = m_15;
    }
  else
    {
      t = z_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_15;
    }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm b_16 = NULL;
  ATerm g_18 = t;
  int h_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_16 = ATgetArgument(t, 0);
          {
            ATerm i_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_18);
      t = b_16;
    }
  else
    {
      t = g_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_16;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(r_1, s_1, sboundin_3_0, e_2, t);
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL;
  y_23 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      z_23 = ATgetArgument(t, 0);
      x_23 = ATgetArgument(t, 1);
      {
        ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL,l_24 = NULL;
        t = y_23;
        t = new_0_0(t);
        f_24 = t;
        t = new_0_0(t);
        g_24 = t;
        t = new_0_0(t);
        h_24 = t;
        t = new_0_0(t);
        l_24 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_24), h_24), g_24), f_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, f_24), (ATerm) ATmakeAppl(sym_Var_1, h_24))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, z_23, (ATerm)ATmakeAppl(sym_Var_1, f_24), (ATerm) ATmakeAppl(sym_Var_1, g_24)), (ATerm) ATmakeAppl(sym_BAM_3, x_23, (ATerm)ATmakeAppl(sym_Var_1, h_24), (ATerm) ATmakeAppl(sym_Var_1, l_24)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_j_18, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_24)), (ATerm) ATmakeAppl(sym_Var_1, g_24))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          z_23 = ATgetArgument(t, 0);
          {
            ATerm o_24 = NULL,p_24 = NULL,t_24 = NULL,u_24 = NULL;
            t = y_23;
            t = new_0_0(t);
            t_24 = t;
            t = z_23;
            {
              static ATerm u_2 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((o_24 != NULL) && (o_24 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      o_24 = ATgetArgument(t, 0);
                    if(((p_24 != NULL) && (p_24 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      p_24 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, t_24);
                return(t);
              }
              t = oncetd_1_0(u_2, t);
            }
            u_24 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_j_18, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_24)), not_null(o_24))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, t_24)), (ATerm) ATmakeAppl(sym_Build_1, u_24))));
          }
        }
      else
        {
          ATerm w_24 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              z_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_23;
          t = new_0_0(t);
          g_25 = t;
          t = new_0_0(t);
          h_25 = t;
          t = z_23;
          {
            static ATerm v_2 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((w_24 != NULL) && (w_24 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    w_24 = ATgetArgument(t, 0);
                  if(((f_25 != NULL) && (f_25 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    f_25 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, g_25);
              return(t);
            }
            t = oncetd_1_0(v_2, t);
          }
          i_25 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_25), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, i_25), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_25), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_25)), (ATerm) ATmakeAppl(sym_PrimT_3, term_k_18, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, h_25))))), (ATerm)ATmakeAppl(sym_Var_1, g_25), (ATerm) ATmakeAppl(sym_Op_2, term_l_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_25)), not_null(w_24)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL;
  k_25 = t;
  if(match_cons(t, sym_Match_1))
    {
      l_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_18 = t;
    int n_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_25 = NULL,t_25 = NULL,w_25 = NULL,z_25 = NULL;
        t = k_25;
        t = new_0_0(t);
        w_25 = t;
        t = l_25;
        {
          static ATerm w_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((s_25 != NULL) && (s_25 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_25 = ATgetArgument(t, 0);
                if(((t_25 != NULL) && (t_25 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  t_25 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, w_25), s_25);
            return(t);
          }
          t = pat_td_1_0(w_2, t);
        }
        z_25 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_25), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_25), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_o_18, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, w_25))), (ATerm) ATmakeAppl(sym_Match_1, not_null(t_25))))));
        LocalPopChoice(n_18);
      }
    else
      {
        t = m_18;
        {
          ATerm p_18 = t;
          int q_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_26 = NULL,c_26 = NULL,g_26 = NULL;
              t = k_25;
              t = new_0_0(t);
              c_26 = t;
              t = l_25;
              {
                static ATerm z_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((b_26 != NULL) && (b_26 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        b_26 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, c_26);
                  return(t);
                }
                t = pat_td_1_0(z_2, t);
              }
              g_26 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, g_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, c_26)), not_null(b_26))));
              LocalPopChoice(q_18);
            }
          else
            {
              t = p_18;
              {
                ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL;
                t = k_25;
                t = new_0_0(t);
                r_26 = t;
                t = l_25;
                {
                  static ATerm a_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((q_26 != NULL) && (q_26 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          q_26 = ATgetArgument(t, 0);
                        if(((p_26 != NULL) && (p_26 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          p_26 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, r_26);
                    return(t);
                  }
                  t = pat_td_1_0(a_3, t);
                }
                s_26 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, s_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, r_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(p_26)), not_null(q_26)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm r_129 (ATerm), ATerm t)
{
  ATerm r_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_129(t);
      LocalPopChoice(s_18);
    }
  else
    {
      t = r_18;
      {
        ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL;
        d_31 = t;
        if(match_cons(t, sym_Op_2))
          {
            e_31 = ATgetArgument(t, 0);
            f_31 = ATgetArgument(t, 1);
            {
              ATerm h_13 = NULL,l_13 = NULL,w_1 = NULL;
              t = SSLgetAnnotations(d_31);
              h_13 = t;
              t = f_31;
              {
                static ATerm d_3 (ATerm t)
                {
                  t = pat_td_1_0(r_129, t);
                  return(t);
                }
                t = fetch_1_0(d_3, t);
              }
              l_13 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, e_31, l_13);
              w_1 = t;
              t = SSLsetAnnotations(w_1, h_13);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                e_31 = ATgetArgument(t, 0);
                f_31 = ATgetArgument(t, 1);
                {
                  ATerm v_18 = t;
                  int w_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_13 = NULL,o_14 = NULL,y_1 = NULL;
                      t = SSLgetAnnotations(d_31);
                      t_13 = t;
                      t = f_31;
                      t = pat_td_1_0(r_129, t);
                      o_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, e_31, o_14);
                      y_1 = t;
                      t = SSLsetAnnotations(y_1, t_13);
                      LocalPopChoice(w_18);
                    }
                  else
                    {
                      t = v_18;
                      {
                        ATerm d_15 = NULL,o_15 = NULL,a_2 = NULL;
                        t = SSLgetAnnotations(d_31);
                        d_15 = t;
                        t = e_31;
                        t = pat_td_1_0(r_129, t);
                        o_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, o_15, f_31);
                        a_2 = t;
                        t = SSLsetAnnotations(a_2, d_15);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    e_31 = ATgetArgument(t, 0);
                    f_31 = ATgetArgument(t, 1);
                    c_31 = ATgetArgument(t, 2);
                    {
                      ATerm g_16 = NULL,p_16 = NULL,b_2 = NULL;
                      t = SSLgetAnnotations(d_31);
                      g_16 = t;
                      t = c_31;
                      {
                        static ATerm f_3 (ATerm t)
                        {
                          t = pat_td_1_0(r_129, t);
                          return(t);
                        }
                        t = fetch_1_0(f_3, t);
                      }
                      p_16 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, e_31, f_31, p_16);
                      b_2 = t;
                      t = SSLsetAnnotations(b_2, g_16);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        e_31 = ATgetArgument(t, 0);
                        f_31 = ATgetArgument(t, 1);
                        c_31 = ATgetArgument(t, 2);
                        {
                          ATerm b_17 = NULL,g_17 = NULL,c_2 = NULL;
                          t = SSLgetAnnotations(d_31);
                          b_17 = t;
                          t = c_31;
                          {
                            static ATerm l_3 (ATerm t)
                            {
                              t = pat_td_1_0(r_129, t);
                              return(t);
                            }
                            t = fetch_1_0(l_3, t);
                          }
                          g_17 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, e_31, f_31, g_17);
                          c_2 = t;
                          t = SSLsetAnnotations(c_2, b_17);
                        }
                      }
                    else
                      {
                        ATerm s_17 = NULL,v_17 = NULL,d_2 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            e_31 = ATgetArgument(t, 0);
                            f_31 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(d_31);
                        s_17 = t;
                        t = f_31;
                        t = pat_td_1_0(r_129, t);
                        v_17 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, e_31, v_17);
                        d_2 = t;
                        t = SSLsetAnnotations(d_2, s_17);
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
  ATerm r_31 = NULL,y_31 = NULL;
  r_31 = t;
  if(match_cons(t, sym_Build_1))
    {
      y_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_32 = NULL,c_32 = NULL,j_32 = NULL,o_32 = NULL;
        t = r_31;
        t = new_0_0(t);
        j_32 = t;
        t = y_31;
        {
          static ATerm p_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((b_32 != NULL) && (b_32 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  b_32 = ATgetArgument(t, 0);
                if(((c_32 != NULL) && (c_32 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  c_32 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, j_32);
            return(t);
          }
          t = pat_td_1_0(p_3, t);
        }
        o_32 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_32), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_z_18, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_32)), not_null(b_32))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_32)))), (ATerm) ATmakeAppl(sym_Build_1, o_32)));
        LocalPopChoice(y_18);
      }
    else
      {
        t = x_18;
        {
          ATerm n_19 = t;
          int o_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_32 = NULL,r_32 = NULL,s_32 = NULL;
              t = r_31;
              t = new_0_0(t);
              r_32 = t;
              t = y_31;
              {
                static ATerm s_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((p_32 != NULL) && (p_32 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        p_32 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, r_32);
                  return(t);
                }
                t = pat_td_1_0(s_3, t);
              }
              s_32 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_32), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_32), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_32)))), (ATerm) ATmakeAppl(sym_Build_1, s_32)));
              LocalPopChoice(o_19);
            }
          else
            {
              t = n_19;
              {
                ATerm t_32 = NULL,u_32 = NULL,w_32 = NULL,a_33 = NULL;
                t = r_31;
                t = new_0_0(t);
                w_32 = t;
                t = y_31;
                {
                  static ATerm t_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((t_32 != NULL) && (t_32 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          t_32 = ATgetArgument(t, 0);
                        if(((u_32 != NULL) && (u_32 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          u_32 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, w_32);
                    return(t);
                  }
                  t = pat_td_1_0(t_3, t);
                }
                a_33 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_32), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(t_32), not_null(u_32), (ATerm) ATmakeAppl(sym_Var_1, w_32))), (ATerm) ATmakeAppl(sym_Build_1, a_33)));
              }
            }
        }
      }
  }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL,z_33 = NULL,a_34 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      z_33 = ATgetArgument(t, 0);
      a_34 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, z_33, a_34);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          z_33 = ATgetArgument(t, 0);
          t = z_33;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              p_33 = ATgetFirst((ATermList) t);
              q_33 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, p_33, (ATerm) ATmakeAppl(sym_LChoices_1, q_33));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_p_19;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              z_33 = ATgetArgument(t, 0);
              t = z_33;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_33 = ATgetFirst((ATermList) t);
                  q_33 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, p_33, (ATerm) ATmakeAppl(sym_Choices_1, q_33));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_p_19;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  z_33 = ATgetArgument(t, 0);
                  t = z_33;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      p_33 = ATgetFirst((ATermList) t);
                      q_33 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_33, (ATerm) ATmakeAppl(sym_Seqs_1, q_33));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_a_20;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      z_33 = ATgetArgument(t, 0);
                      a_34 = ATgetArgument(t, 1);
                      r_33 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, a_34, (ATerm) ATmakeAppl(sym_Op_2, term_l_18, (ATerm) ATinsert(ATinsert(ATempty, r_33), z_33)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          z_33 = ATgetArgument(t, 0);
                          a_34 = ATgetArgument(t, 1);
                          r_33 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, r_33)), z_33), (ATerm) ATmakeAppl(sym_Build_1, a_34)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              z_33 = ATgetArgument(t, 0);
                              a_34 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, z_33, (ATerm) ATmakeAppl(sym_Match_1, a_34));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  z_33 = ATgetArgument(t, 0);
                                  a_34 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_33), a_34);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      z_33 = ATgetArgument(t, 0);
                                      a_34 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, a_34), z_33);
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
static ATerm w_3 (ATerm t)
{
  ATerm o_20 = t;
  if((PushChoice() == 0))
    {
      ATerm f_36 = NULL,g_36 = NULL,m_36 = NULL,o_2 = NULL;
      m_36 = t;
      if(match_cons(t, sym_Var_1))
        {
          g_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_36);
      f_36 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, g_36);
      o_2 = t;
      t = SSLsetAnnotations(o_2, f_36);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_20;
    }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_20;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_36 = ATgetFirst((ATermList) t);
      q_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_36, q_36);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL,x_36 = NULL,y_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_20 = ATgetArgument(t, 0);
      if(match_cons(r_20, sym__2))
        {
          r_36 = ATgetArgument(r_20, 0);
          s_36 = ATgetArgument(r_20, 1);
        }
      else
        _fail(t);
      {
        ATerm u_20 = ATgetArgument(t, 1);
        if(match_cons(u_20, sym__2))
          {
            x_36 = ATgetArgument(u_20, 0);
            y_36 = ATgetArgument(u_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_36), r_36), (ATerm) ATinsert(CheckATermList(y_36), s_36));
  return(t);
}
static ATerm e_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_20;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm z_36 = NULL,a_37 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_36 = ATgetFirst((ATermList) t);
      a_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_36, a_37);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm b_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_20 = ATgetArgument(t, 0);
      if(match_cons(w_20, sym__2))
        {
          b_37 = ATgetArgument(w_20, 0);
          d_37 = ATgetArgument(w_20, 1);
        }
      else
        _fail(t);
      {
        ATerm x_20 = ATgetArgument(t, 1);
        if(match_cons(x_20, sym__2))
          {
            e_37 = ATgetArgument(x_20, 0);
            f_37 = ATgetArgument(x_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_37), b_37), (ATerm) ATinsert(CheckATermList(f_37), d_37));
  return(t);
}
static ATerm w_8 (ATerm w_73, ATerm x_73, ATerm y_73, ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,d_36 = NULL,e_36 = NULL,z_3 = NULL;
  t = y_73;
  t = fetch_1_0(w_3, t);
  t = y_73;
  t = genzip_4_0(a_4, b_4, c_4, LiftPrimArg_0_0, t);
  e_36 = t;
  if(match_cons(t, sym__2))
    {
      y_35 = ATgetArgument(t, 0);
      z_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_36);
  x_35 = t;
  t = y_35;
  t = concat_0_0(t);
  a_36 = t;
  t = z_35;
  t = genzip_4_0(e_4, f_4, g_4, _id, t);
  d_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_36, d_36);
  z_3 = t;
  t = SSLsetAnnotations(z_3, x_35);
  if(match_cons(t, sym__2))
    {
      u_35 = ATgetArgument(t, 0);
      {
        ATerm a_21 = ATgetArgument(t, 1);
        if(match_cons(a_21, sym__2))
          {
            v_35 = ATgetArgument(a_21, 0);
            w_35 = ATgetArgument(a_21, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, u_35, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, v_35), (ATerm) ATmakeAppl(sym_CallT_3, w_73, x_73, w_35)));
  return(t);
}
static ATerm e_38 (ATerm o_37, ATerm t)
{
  ATerm r_37 = NULL;
  t = o_37;
  {
    ATerm d_21 = t;
    if((PushChoice() == 0))
      {
        ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL,h_4 = NULL;
        u_37 = t;
        if(match_cons(t, sym_Var_1))
          {
            t_37 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_37);
        s_37 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, t_37);
        h_4 = t;
        t = SSLsetAnnotations(h_4, s_37);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_21;
      }
  }
  t = new_0_0(t);
  r_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, r_37), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, o_37), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_37)))), (ATerm) ATmakeAppl(sym_Var_1, r_37)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm w_37 = NULL,a_38 = NULL;
  w_37 = t;
  if(match_cons(t, sym_Var_1))
    {
      a_38 = ATgetArgument(t, 0);
      {
        ATerm e_21 = t;
        int f_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_38(w_37, t);
            LocalPopChoice(f_21);
          }
        else
          {
            t = e_21;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_a_20, (ATerm) ATmakeAppl(sym_Var_1, a_38)));
          }
      }
    }
  else
    {
      t = e_38(w_37, t);
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm h_21 = t;
  if((PushChoice() == 0))
    {
      ATerm k_19 = NULL,r_19 = NULL,s_19 = NULL,j_4 = NULL;
      s_19 = t;
      if(match_cons(t, sym_Var_1))
        {
          r_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_19);
      k_19 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, r_19);
      j_4 = t;
      t = SSLsetAnnotations(j_4, k_19);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_21;
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_20;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm y_19 = NULL,d_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_19 = ATgetFirst((ATermList) t);
      d_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_19, d_20);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_21 = ATgetArgument(t, 0);
      if(match_cons(j_21, sym__2))
        {
          e_20 = ATgetArgument(j_21, 0);
          f_20 = ATgetArgument(j_21, 1);
        }
      else
        _fail(t);
      {
        ATerm f_22 = ATgetArgument(t, 1);
        if(match_cons(f_22, sym__2))
          {
            g_20 = ATgetArgument(f_22, 0);
            h_20 = ATgetArgument(f_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_20), e_20), (ATerm) ATinsert(CheckATermList(h_20), f_20));
  return(t);
}
static ATerm v_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_20;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_20 = ATgetFirst((ATermList) t);
      j_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_20, j_20);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_22 = ATgetArgument(t, 0);
      if(match_cons(r_22, sym__2))
        {
          k_20 = ATgetArgument(r_22, 0);
          l_20 = ATgetArgument(r_22, 1);
        }
      else
        _fail(t);
      {
        ATerm z_22 = ATgetArgument(t, 1);
        if(match_cons(z_22, sym__2))
          {
            m_20 = ATgetArgument(z_22, 0);
            n_20 = ATgetArgument(z_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_20), k_20), (ATerm) ATinsert(CheckATermList(n_20), l_20));
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm a_23 = t;
  if((PushChoice() == 0))
    {
      ATerm j_22 = NULL,k_22 = NULL,o_22 = NULL,l_4 = NULL;
      o_22 = t;
      if(match_cons(t, sym_Var_1))
        {
          k_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_22);
      j_22 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, k_22);
      l_4 = t;
      t = SSLsetAnnotations(l_4, j_22);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_23;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_20;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm t_22 = NULL,u_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_22 = ATgetFirst((ATermList) t);
      u_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_22, u_22);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm v_22 = NULL,y_22 = NULL,f_23 = NULL,g_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_23 = ATgetArgument(t, 0);
      if(match_cons(b_23, sym__2))
        {
          v_22 = ATgetArgument(b_23, 0);
          y_22 = ATgetArgument(b_23, 1);
        }
      else
        _fail(t);
      {
        ATerm d_23 = ATgetArgument(t, 1);
        if(match_cons(d_23, sym__2))
          {
            f_23 = ATgetArgument(d_23, 0);
            g_23 = ATgetArgument(d_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_23), v_22), (ATerm) ATinsert(CheckATermList(g_23), y_22));
  return(t);
}
static ATerm f_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_20;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_23 = ATgetFirst((ATermList) t);
      k_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_23, k_23);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL,u_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_23 = ATgetArgument(t, 0);
      if(match_cons(o_23, sym__2))
        {
          q_23 = ATgetArgument(o_23, 0);
          r_23 = ATgetArgument(o_23, 1);
        }
      else
        _fail(t);
      {
        ATerm p_23 = ATgetArgument(t, 1);
        if(match_cons(p_23, sym__2))
          {
            s_23 = ATgetArgument(p_23, 0);
            u_23 = ATgetArgument(p_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_23), q_23), (ATerm) ATinsert(CheckATermList(u_23), r_23));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL;
  o_43 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      p_43 = ATgetArgument(t, 0);
      q_43 = ATgetArgument(t, 1);
      n_43 = ATgetArgument(t, 2);
      {
        ATerm t_18 = NULL,u_18 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,k_4 = NULL;
        t = n_43;
        t = fetch_1_0(i_4, t);
        t = n_43;
        t = genzip_4_0(n_4, o_4, u_4, LiftPrimArg_0_0, t);
        j_19 = t;
        if(match_cons(t, sym__2))
          {
            d_19 = ATgetArgument(t, 0);
            e_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_19);
        c_19 = t;
        t = d_19;
        t = concat_0_0(t);
        h_19 = t;
        t = e_19;
        t = genzip_4_0(v_4, w_4, z_4, _id, t);
        i_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_19, i_19);
        k_4 = t;
        t = SSLsetAnnotations(k_4, c_19);
        if(match_cons(t, sym__2))
          {
            t_18 = ATgetArgument(t, 0);
            {
              ATerm t_23 = ATgetArgument(t, 1);
              if(match_cons(t_23, sym__2))
                {
                  u_18 = ATgetArgument(t_23, 0);
                  b_19 = ATgetArgument(t_23, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, t_18, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, u_18), (ATerm) ATmakeAppl(sym_PrimT_3, p_43, q_43, b_19)));
      }
    }
  else
    {
      ATerm g_21 = NULL,p_21 = NULL,q_21 = NULL,v_21 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL,h_22 = NULL,i_22 = NULL,m_4 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          p_43 = ATgetArgument(t, 0);
          q_43 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = q_43;
      t = fetch_1_0(a_5, t);
      t = q_43;
      t = genzip_4_0(b_5, c_5, d_5, LiftPrimArg_0_0, t);
      i_22 = t;
      if(match_cons(t, sym__2))
        {
          c_22 = ATgetArgument(t, 0);
          d_22 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_22);
      v_21 = t;
      t = c_22;
      t = concat_0_0(t);
      e_22 = t;
      t = d_22;
      t = genzip_4_0(f_5, g_5, h_5, _id, t);
      h_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_22, h_22);
      m_4 = t;
      t = SSLsetAnnotations(m_4, v_21);
      if(match_cons(t, sym__2))
        {
          g_21 = ATgetArgument(t, 0);
          {
            ATerm v_23 = ATgetArgument(t, 1);
            if(match_cons(v_23, sym__2))
              {
                p_21 = ATgetArgument(v_23, 0);
                q_21 = ATgetArgument(v_23, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, g_21, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_21), (ATerm) ATmakeAppl(sym_PrimT_3, p_43, (ATerm)ATempty, q_21)));
    }
  return(t);
}
ATerm repeat_2_0 (ATerm w_103 (ATerm), ATerm x_103 (ATerm), ATerm t)
{
  static ATerm t_43 (ATerm t)
  {
    ATerm w_23 = t;
    int a_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_103(t);
        t = t_43(t);
        LocalPopChoice(a_24);
      }
    else
      {
        t = w_23;
        t = x_103(t);
      }
    return(t);
  }
  t = t_43(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL;
  k_44 = t;
  if(match_cons(t, sym_Con_3))
    {
      h_44 = ATgetArgument(t, 0);
      i_44 = ATgetArgument(t, 1);
      j_44 = ATgetArgument(t, 2);
      {
        ATerm m_24 = NULL,e_5 = NULL;
        t = SSLgetAnnotations(k_44);
        m_24 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, h_44, i_44, j_44);
        e_5 = t;
        t = SSLsetAnnotations(e_5, m_24);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = k_44;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm b_24 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(k_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_24;
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL;
  n_45 = t;
  if(match_cons(t, sym_Con_3))
    {
      o_45 = ATgetArgument(t, 0);
      p_45 = ATgetArgument(t, 1);
      m_45 = ATgetArgument(t, 2);
      {
        ATerm n_25 = NULL,n_5 = NULL;
        t = SSLgetAnnotations(n_45);
        n_25 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, o_45, p_45, m_45);
        n_5 = t;
        t = SSLsetAnnotations(n_5, n_25);
      }
    }
  else
    {
      ATerm j_26 = NULL,s_5 = NULL;
      if(match_cons(t, sym_App_2))
        {
          o_45 = ATgetArgument(t, 0);
          p_45 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_45);
      j_26 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, o_45, p_45);
      s_5 = t;
      t = SSLsetAnnotations(s_5, j_26);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm c_24 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(l_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_24;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm z_45 = NULL,d_46 = NULL,l_46 = NULL,m_46 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      z_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_45;
  if(match_cons(t, sym_StratRule_3))
    {
      d_46 = ATgetArgument(t, 0);
      l_46 = ATgetArgument(t, 1);
      m_46 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, l_46), (ATerm) ATmakeAppl(sym_Where_1, m_46)), d_46));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          d_46 = ATgetArgument(t, 0);
          l_46 = ATgetArgument(t, 1);
          m_46 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = d_46;
      t = pureterm_0_0(t);
      t = l_46;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, l_46)), (ATerm) ATmakeAppl(sym_Where_1, m_46)), (ATerm) ATmakeAppl(sym_Match_1, d_46)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm f_99 (ATerm), ATerm t)
{
  static ATerm x_46 (ATerm t)
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_99(t);
        LocalPopChoice(e_24);
      }
    else
      {
        t = d_24;
        t = SRTS_one(x_46, t);
      }
    return(t);
  }
  t = x_46(t);
  return(t);
}
static ATerm a_9 (ATerm j_69, ATerm k_69, ATerm l_69, ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL;
  t = new_0_0(t);
  c_47 = t;
  t = j_69;
  {
    static ATerm m_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm i_24 = ATgetArgument(t, 0);
          if(match_cons(i_24, sym_Var_1))
            {
              if(((b_47 != NULL) && (b_47 != ATgetArgument(i_24, 0))))
                _fail(ATgetArgument(i_24, 0));
              else
                b_47 = ATgetArgument(i_24, 0);
            }
          else
            _fail(t);
          if(((z_46 != NULL) && (z_46 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            z_46 = ATgetArgument(t, 1);
          {
            ATerm j_24 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, b_47);
      return(t);
    }
    t = oncetd_1_0(m_5, t);
  }
  d_47 = t;
  t = k_69;
  {
    static ATerm o_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm k_24 = ATgetArgument(t, 0);
          if(match_cons(k_24, sym_Var_1))
            {
              if(((b_47 != NULL) && (b_47 != ATgetArgument(k_24, 0))))
                _fail(ATgetArgument(k_24, 0));
              else
                b_47 = ATgetArgument(k_24, 0);
            }
          else
            _fail(t);
          if(((a_47 != NULL) && (a_47 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            a_47 = ATgetArgument(t, 1);
          {
            ATerm n_24 = ATgetArgument(t, 2);
            if(match_cons(n_24, sym_CallT_3))
              {
                if(((y_46 != NULL) && (y_46 != ATgetArgument(n_24, 0))))
                  _fail(ATgetArgument(n_24, 0));
                else
                  y_46 = ATgetArgument(n_24, 0);
                {
                  ATerm q_24 = ATgetArgument(n_24, 1);
                  if(((ATgetType(q_24) != AT_LIST) || !(ATisEmpty(q_24))))
                    _fail(t);
                }
                {
                  ATerm r_24 = ATgetArgument(n_24, 2);
                  if(((ATgetType(r_24) != AT_LIST) || !(ATisEmpty(r_24))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, c_47);
      return(t);
    }
    t = oncetd_1_0(o_5, t);
  }
  e_47 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_47), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, d_47, e_47, (ATerm) ATmakeAppl(sym_Seq_2, l_69, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(y_46), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(z_46), not_null(a_47), term_a_20))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(b_47)), (ATerm) ATmakeAppl(sym_Var_1, c_47))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm s_24 = t;
  int v_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_24 = t;
      int y_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL,m_48 = NULL,n_48 = NULL;
          k_48 = t;
          if(match_cons(t, sym_SRule_1))
            {
              m_48 = ATgetArgument(t, 0);
              t = m_48;
              if(match_cons(t, sym_Rule_3))
                {
                  h_48 = ATgetArgument(t, 0);
                  i_48 = ATgetArgument(t, 1);
                  j_48 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = k_48;
              t = a_9(h_48, i_48, j_48, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm y_26 = NULL,b_27 = NULL,d_6 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  m_48 = ATgetArgument(t, 0);
                  n_48 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(k_48);
              y_26 = t;
              t = n_48;
              t = desugarRule_0_0(t);
              b_27 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, m_48, b_27);
              d_6 = t;
              t = SSLsetAnnotations(d_6, y_26);
            }
          LocalPopChoice(y_24);
        }
      else
        {
          t = x_24;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(v_24);
    }
  else
    {
      t = s_24;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm b_98 (ATerm), ATerm t)
{
  static ATerm p_5 (ATerm t)
  {
    t = topdown_1_0(b_98, t);
    return(t);
  }
  t = b_98(t);
  t = SRTS_all(p_5, t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm z_24 = t;
  int a_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(a_25);
    }
  else
    {
      t = z_24;
    }
  t = repeat_2_0(u_5, _id, t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm b_25 = t;
  int c_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(c_25);
    }
  else
    {
      t = b_25;
      {
        ATerm d_25 = t;
        int e_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL;
            k_49 = t;
            if(match_cons(t, sym_CallT_3))
              {
                l_49 = ATgetArgument(t, 0);
                m_49 = ATgetArgument(t, 1);
                n_49 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = k_49;
            t = w_8(l_49, m_49, n_49, t);
            LocalPopChoice(e_25);
          }
        else
          {
            t = d_25;
            {
              ATerm j_25 = t;
              int m_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(m_25);
                }
              else
                {
                  t = j_25;
                  {
                    ATerm o_25 = t;
                    int p_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(p_25);
                      }
                    else
                      {
                        t = o_25;
                        {
                          ATerm q_25 = t;
                          int r_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm x_25 = t;
                              int y_25 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm a_50 = NULL,e_50 = NULL,f_50 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      a_50 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = a_50;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      e_50 = ATgetArgument(t, 0);
                                      t = e_50;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          e_50 = ATgetArgument(t, 0);
                                          f_50 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, e_50, f_50);
                                    }
                                  LocalPopChoice(y_25);
                                }
                              else
                                {
                                  t = x_25;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(r_25);
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
static ATerm v_5 (ATerm t)
{
  ATerm i_51 = NULL,j_51 = NULL;
  j_51 = t;
  t = SSL_explode_term(j_51);
  if(match_cons(t, sym__2))
    {
      ATerm a_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_26 = ATgetArgument(t, 1);
        if(((ATgetType(d_26) == AT_LIST) && !(ATisEmpty(d_26))))
          {
            i_51 = ATgetFirst((ATermList) d_26);
            {
              ATerm e_26 = (ATerm) ATgetNext((ATermList) d_26);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_51;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
  m_27 = t;
  t = SSL_explode_term(m_27);
  if(match_cons(t, sym__2))
    {
      ATerm f_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_26 = ATgetArgument(t, 1);
        if(((ATgetType(h_26) == AT_LIST) && !(ATisEmpty(h_26))))
          {
            ATerm i_26 = ATgetFirst((ATermList) h_26);
            k_27 = (ATerm) ATgetNext((ATermList) h_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_l_18;
  l_27 = t;
  t = SSL_mkterm(l_27, k_27);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm d_102 (ATerm), ATerm t)
{
  ATerm x_50 = NULL,y_50 = NULL;
  static ATerm k_51 (ATerm t)
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_50 = NULL,a_51 = NULL,c_51 = NULL;
        z_50 = t;
        t = map_1_0(v_5, t);
        t = d_102(t);
        a_51 = t;
        t = z_50;
        t = map_1_0(w_5, t);
        t = k_51(t);
        c_51 = t;
        t = (ATerm) ATinsert(CheckATermList(c_51), a_51);
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        t = map_1_0(x_5, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = k_51(t);
  y_50 = t;
  t = term_l_18;
  x_50 = t;
  t = SSL_mkterm(x_50, y_50);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm l_51 = NULL;
  l_51 = t;
  {
    ATerm m_26 = t;
    int n_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_51 = NULL,o_51 = NULL,p_51 = NULL;
        t = l_51;
        t = new_0_0(t);
        n_51 = t;
        t = new_0_0(t);
        o_51 = t;
        t = new_0_0(t);
        p_51 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_51), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_l_18, (ATerm) ATinsert(ATinsert(ATempty, l_51), (ATerm) ATmakeAppl(sym_Var_1, o_51))), (ATerm) ATmakeAppl(sym_Var_1, p_51)), (ATerm)ATmakeAppl(sym_VarDec_2, n_51, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_26), term_u_26)), o_51, (ATerm)ATmakeAppl(sym_Var_1, o_51), p_51, (ATerm) ATmakeAppl(sym_Var_1, p_51));
        LocalPopChoice(n_26);
      }
    else
      {
        t = m_26;
        {
          ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL;
          t = l_51;
          t = new_0_0(t);
          r_51 = t;
          t = new_0_0(t);
          s_51 = t;
          t = new_0_0(t);
          t_51 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_51), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_l_18, (ATerm) ATinsert(ATinsert(ATempty, l_51), (ATerm) ATmakeAppl(sym_Var_1, s_51))), (ATerm) ATmakeAppl(sym_Var_1, t_51)), (ATerm)ATmakeAppl(sym_VarDec_2, r_51, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_26), term_u_26)), s_51, (ATerm)ATmakeAppl(sym_Var_1, s_51), t_51, (ATerm) ATmakeAppl(sym_Var_1, t_51));
        }
      }
  }
  return(t);
}
static ATerm b_9 (ATerm u_40, ATerm v_40, ATerm t)
{
  ATerm v_26 = t;
  int w_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(u_40, v_40);
      LocalPopChoice(w_26);
    }
  else
    {
      t = v_26;
      t = SSL_subtr(u_40, v_40);
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm v_51 = NULL,w_51 = NULL;
  if(match_cons(t, sym__2))
    {
      v_51 = ATgetArgument(t, 0);
      w_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, v_51, w_51, (ATerm) ATempty);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm x_51 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm x_26 = ATgetArgument(t, 0);
      if(((ATgetType(x_26) != AT_INT) || (ATgetInt((ATermInt) x_26) != 0)))
        _fail(t);
      {
        ATerm z_26 = ATgetArgument(t, 1);
      }
      x_51 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = x_51;
  return(t);
}
ATerm copy_1_0 (ATerm k_115 (ATerm), ATerm t)
{
  static ATerm b_6 (ATerm t)
  {
    ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL,g_52 = NULL,k_52 = NULL,l_52 = NULL;
    if(match_cons(t, sym__3))
      {
        y_51 = ATgetArgument(t, 0);
        z_51 = ATgetArgument(t, 1);
        a_52 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, y_51, term_i_15);
    t = geq_0_0(t);
    t = term_i_15;
    l_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_51, term_i_15);
    t = b_9(y_51, l_52, t);
    g_52 = t;
    t = z_51;
    t = k_115(t);
    k_52 = t;
    t = (ATerm) ATmakeAppl(sym__3, g_52, z_51, (ATerm) ATinsert(CheckATermList(a_52), k_52));
    return(t);
  }
  t = for_3_0(y_5, z_5, b_6, t);
  return(t);
}
static ATerm c_9 (ATerm g_57, ATerm h_57, ATerm t)
{
  ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL;
  t = new_0_0(t);
  n_52 = t;
  t = new_0_0(t);
  o_52 = t;
  t = new_0_0(t);
  p_52 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_52), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_l_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_57)), (ATerm) ATmakeAppl(sym_Var_1, o_52))), (ATerm) ATmakeAppl(sym_Op_2, term_l_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, h_57)), (ATerm) ATmakeAppl(sym_Var_1, p_52)))), (ATerm)ATmakeAppl(sym_VarDec_2, n_52, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_26), term_u_26)), o_52, (ATerm)ATmakeAppl(sym_Var_1, o_52), p_52, (ATerm) ATmakeAppl(sym_Var_1, p_52));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm w_52 = NULL,x_52 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_52 = ATgetFirst((ATermList) t);
      x_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_52;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_52;
    }
  else
    {
      t = x_52;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm v_57 (ATerm p_53, ATerm q_53, ATerm r_53, ATerm u_53, ATerm t)
{
  ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL,e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL;
  t = term_i_15;
  j_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_53, term_i_15);
  t = g_10(q_53, j_54, t);
  i_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_54, term_e_15);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_53 = ATgetFirst((ATermList) t);
      a_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_54;
  t = last_0_0(t);
  y_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_54), z_53), a_54);
  t = genzip_4_0(c_6, e_6, i_6, k_6, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      b_54 = ATgetArgument(t, 0);
      c_54 = ATgetArgument(t, 1);
      d_54 = ATgetArgument(t, 2);
      e_54 = ATgetArgument(t, 3);
      f_54 = ATgetArgument(t, 4);
      g_54 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, f_54), d_54), a_54);
  t = concat_0_0(t);
  h_54 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, p_53, term_a_27), c_54, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(h_54), z_53), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_l_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, z_53)), (ATerm) ATmakeAppl(sym_Op_2, p_53, e_54))), (ATerm)ATmakeAppl(sym_Op_2, term_l_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_53)), (ATerm) ATmakeAppl(sym_Op_2, p_53, g_54))), (ATerm) ATmakeAppl(sym_Seqs_1, b_54)))));
  return(t);
}
static ATerm w_57 (ATerm t_54, ATerm u_54, ATerm v_54, ATerm w_54, ATerm t)
{
  ATerm g_55 = NULL,h_55 = NULL,k_55 = NULL,l_55 = NULL,r_55 = NULL,s_55 = NULL,v_55 = NULL,w_55 = NULL;
  t = w_54;
  t = new_0_0(t);
  g_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_54, (ATerm) ATmakeAppl(sym_Var_1, g_55));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      h_55 = ATgetArgument(t, 0);
      k_55 = ATgetArgument(t, 1);
      l_55 = ATgetArgument(t, 2);
      r_55 = ATgetArgument(t, 3);
      s_55 = ATgetArgument(t, 4);
      v_55 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_55, s_55);
  t = conc_0_0(t);
  w_55 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, t_54, term_c_27), k_55, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(w_55), g_55), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_l_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_55)), (ATerm) ATmakeAppl(sym_Op_2, t_54, r_55))), (ATerm)ATmakeAppl(sym_Op_2, t_54, v_55), (ATerm) ATmakeAppl(sym_Seqs_1, h_55)))));
  return(t);
}
static ATerm c_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_27 = ATgetArgument(t, 0);
      ATerm e_27 = ATgetArgument(t, 1);
      if(((ATgetType(e_27) != AT_LIST) || !(ATisEmpty(e_27))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm k_54 = NULL,l_54 = NULL,m_54 = NULL,n_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_27 = ATgetArgument(t, 0);
      if(((ATgetType(f_27) == AT_LIST) && !(ATisEmpty(f_27))))
        {
          k_54 = ATgetFirst((ATermList) f_27);
          l_54 = (ATerm) ATgetNext((ATermList) f_27);
        }
      else
        _fail(t);
      {
        ATerm g_27 = ATgetArgument(t, 1);
        if(((ATgetType(g_27) == AT_LIST) && !(ATisEmpty(g_27))))
          {
            m_54 = ATgetFirst((ATermList) g_27);
            n_54 = (ATerm) ATgetNext((ATermList) g_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_54, m_54), (ATerm) ATmakeAppl(sym__2, l_54, n_54));
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm o_54 = NULL,p_54 = NULL;
  if(match_cons(t, sym__2))
    {
      o_54 = ATgetArgument(t, 0);
      p_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_54), o_54);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm q_54 = NULL,r_54 = NULL;
  if(match_cons(t, sym__2))
    {
      q_54 = ATgetArgument(t, 0);
      r_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_9(q_54, r_54, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm y_55 = NULL,r_56 = NULL,p_57 = NULL,q_57 = NULL,r_57 = NULL,s_57 = NULL;
  y_55 = t;
  if(match_cons(t, sym__3))
    {
      r_56 = ATgetArgument(t, 0);
      p_57 = ATgetArgument(t, 1);
      q_57 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = p_57;
  if(match_string(t, "T"))
    {
      t = q_57;
      if(match_cons(t, sym__2))
        {
          r_57 = ATgetArgument(t, 0);
          s_57 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_57;
      if(match_int(t, 0))
        {
          ATerm h_27 = t;
          int i_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_57(r_56, r_57, s_57, y_55, t);
              LocalPopChoice(i_27);
            }
          else
            {
              t = h_27;
              {
                ATerm u_57 = NULL;
                t = y_55;
                t = new_0_0(t);
                u_57 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, r_56, term_a_27), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_57), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_l_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, u_57)), (ATerm) ATmakeAppl(sym_Op_2, r_56, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_l_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, u_57)), (ATerm) ATmakeAppl(sym_Op_2, r_56, (ATerm) ATempty))), term_a_20))));
              }
            }
        }
      else
        {
          t = v_57(r_56, r_57, s_57, y_55, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = q_57;
      if(match_cons(t, sym__2))
        {
          r_57 = ATgetArgument(t, 0);
          s_57 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_57(r_56, r_57, s_57, y_55, t);
    }
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_p_19;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm x_16 = NULL,c_17 = NULL,s_12 = NULL;
  x_16 = t;
  t = SSL_explode_term(x_16);
  if(match_cons(t, sym__2))
    {
      ATerm j_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_27 = ATgetArgument(t, 1);
        if(((ATgetType(n_27) == AT_LIST) && !(ATisEmpty(n_27))))
          {
            c_17 = ATgetFirst((ATermList) n_27);
            {
              ATerm o_27 = (ATerm) ATgetNext((ATermList) n_27);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(x_16);
  if(match_cons(t, sym__2))
    {
      ATerm p_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_27 = ATgetArgument(t, 1);
        if(((ATgetType(q_27) == AT_LIST) && !(ATisEmpty(q_27))))
          {
            ATerm r_27 = ATgetFirst((ATermList) q_27);
            ATerm s_27 = (ATerm) ATgetNext((ATermList) q_27);
            if(((ATgetType(s_27) == AT_LIST) && !(ATisEmpty(s_27))))
              {
                s_12 = ATgetFirst((ATermList) s_27);
                {
                  ATerm u_27 = (ATerm) ATgetNext((ATermList) s_27);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, c_17, s_12);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(m_6, n_6, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL;
  q_17 = t;
  if(match_cons(t, sym__2))
    {
      b_18 = ATgetArgument(t, 0);
      c_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_18;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_18 = ATgetFirst((ATermList) t);
      e_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = d_18;
  if(match_cons(t, sym__2))
    {
      o_17 = ATgetArgument(t, 0);
      p_17 = ATgetArgument(t, 1);
      {
        ATerm v_27 = t;
        int w_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_17;
            if((b_18 != t))
              {
                _fail(t);
              }
            t = p_17;
            LocalPopChoice(w_27);
          }
        else
          {
            t = v_27;
            t = (ATerm) ATmakeAppl(sym__2, b_18, e_18);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, b_18, e_18);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm t_99 (ATerm), ATerm t)
{
  static ATerm a_19 (ATerm t)
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_99(t);
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
        t = SRTS_all(a_19, t);
      }
    return(t);
  }
  t = a_19(t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_28 = ATgetArgument(t, 0);
      if(((ATgetType(a_28) != AT_LIST) || !(ATisEmpty(a_28))))
        _fail(t);
      {
        ATerm b_28 = ATgetArgument(t, 1);
        if(((ATgetType(b_28) != AT_LIST) || !(ATisEmpty(b_28))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_28 = ATgetArgument(t, 0);
      if(((ATgetType(c_28) == AT_LIST) && !(ATisEmpty(c_28))))
        {
          t_19 = ATgetFirst((ATermList) c_28);
          u_19 = (ATerm) ATgetNext((ATermList) c_28);
        }
      else
        _fail(t);
      {
        ATerm d_28 = ATgetArgument(t, 1);
        if(((ATgetType(d_28) == AT_LIST) && !(ATisEmpty(d_28))))
          {
            v_19 = ATgetFirst((ATermList) d_28);
            w_19 = (ATerm) ATgetNext((ATermList) d_28);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_19, v_19), (ATerm) ATmakeAppl(sym__2, u_19, w_19));
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm x_19 = NULL,z_19 = NULL;
  if(match_cons(t, sym__2))
    {
      x_19 = ATgetArgument(t, 0);
      z_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_19), x_19);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL,l_19 = NULL,m_19 = NULL;
  f_19 = t;
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_28 = ATgetArgument(t, 0);
            ATerm h_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(f_28);
        t = f_19;
      }
    else
      {
        t = e_28;
        {
          ATerm q_19 = NULL;
          if(match_cons(t, sym__3))
            {
              g_19 = ATgetArgument(t, 0);
              l_19 = ATgetArgument(t, 1);
              m_19 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, g_19, l_19);
          t = genzip_4_0(p_6, r_6, t_6, _id, t);
          q_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_19, m_19);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm k_97 (ATerm), ATerm l_97 (ATerm), ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL;
  static ATerm u_6 (ATerm t)
  {
    ATerm x_12 = NULL;
    t = k_97(t);
    x_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_12, not_null(c_20));
    t = lookup_0_0(t);
    t = l_97(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((c_20 != NULL) && (c_20 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_20 = ATgetArgument(t, 0);
      b_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_20;
  t = alltd_1_0(u_6, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,f_6 = NULL;
  o_21 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      l_21 = ATgetArgument(t, 0);
      m_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_21);
  k_21 = t;
  t = l_21;
  t = new_0_0(t);
  n_21 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, n_21, m_21);
  f_6 = t;
  t = SSLsetAnnotations(f_6, k_21);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,w_21 = NULL,h_6 = NULL;
  w_21 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      s_21 = ATgetArgument(t, 0);
      t_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_21);
  r_21 = t;
  t = s_21;
  t = new_0_0(t);
  u_21 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, u_21, t_21);
  h_6 = t;
  t = SSLsetAnnotations(h_6, r_21);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm x_21 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      x_21 = ATgetArgument(t, 0);
      {
        ATerm i_28 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, x_21), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm y_21 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      y_21 = ATgetArgument(t, 0);
      {
        ATerm j_28 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, y_21);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm n_22 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      n_22 = ATgetArgument(t, 0);
      {
        ATerm k_28 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = n_22;
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm p_22 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      p_22 = ATgetArgument(t, 0);
      {
        ATerm l_28 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = p_22;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm q_22 = NULL,s_22 = NULL,w_22 = NULL,x_22 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      s_22 = ATgetArgument(t, 0);
      x_22 = ATgetArgument(t, 1);
      q_22 = ATgetArgument(t, 2);
      t = s_22;
      if(match_cons(t, sym_SVar_1))
        {
          w_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_22;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_22;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_22;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          s_22 = ATgetArgument(t, 0);
          x_22 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_22;
      if(match_cons(t, sym_SVar_1))
        {
          w_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_22;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_22;
    }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm c_23 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_23;
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm p_20 = NULL,s_20 = NULL,t_20 = NULL,v_20 = NULL,y_20 = NULL,z_20 = NULL,b_21 = NULL,c_21 = NULL,i_21 = NULL;
  z_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_28 = ATgetFirst((ATermList) t);
      if(match_cons(m_28, sym_SDefT_4))
        {
          p_20 = ATgetArgument(m_28, 0);
          s_20 = ATgetArgument(m_28, 1);
          t_20 = ATgetArgument(m_28, 2);
          {
            ATerm o_28 = ATgetArgument(m_28, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm n_28 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_20;
  t = map_1_0(x_6, t);
  v_20 = t;
  t = t_20;
  t = map_1_0(y_6, t);
  y_20 = t;
  t = v_20;
  t = map_1_0(a_7, t);
  c_21 = t;
  t = y_20;
  t = map_1_0(b_7, t);
  b_21 = t;
  t = z_20;
  {
    static ATerm c_7 (ATerm t)
    {
      ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL,g_22 = NULL,l_22 = NULL,m_22 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm q_28 = ATgetArgument(t, 0);
          z_21 = ATgetArgument(t, 1);
          a_22 = ATgetArgument(t, 2);
          b_22 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = a_22;
      t = map_1_0(d_7, t);
      g_22 = t;
      t = z_21;
      t = map_1_0(e_7, t);
      m_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, m_22, c_21, b_22);
      t = substitute_2_0(g_7, _id, t);
      l_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, g_22, b_21, l_22);
      t = substitute_2_0(l_7, _id, t);
      return(t);
    }
    t = map_1_0(c_7, t);
  }
  t = choices_0_0(t);
  i_21 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, p_20, v_20, y_20, i_21);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm e_23 = NULL,h_23 = NULL,i_23 = NULL;
  t = term_f_15;
  h_23 = t;
  t = (ATerm) ATinsert(ATempty, term_r_28);
  i_23 = t;
  t = SSL_printnl(h_23, i_23);
  t = term_i_15;
  e_23 = t;
  t = SSL_exit(e_23);
  t = (ATerm) ATinsert(ATempty, term_r_28);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_s_28;
  return(t);
}
ATerm JoinDefsExt_0_0 (ATerm t)
{
  ATerm l_23 = NULL;
  static ATerm m_7 (ATerm t)
  {
    ATerm m_23 = NULL,n_23 = NULL;
    m_23 = t;
    {
      ATerm t_28 = t;
      int v_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_ExtSDef_3))
            {
              n_23 = ATgetArgument(t, 0);
              {
                ATerm w_28 = ATgetArgument(t, 1);
              }
              {
                ATerm x_28 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          LocalPopChoice(v_28);
          t = n_23;
          if(((l_23 != NULL) && (l_23 != t)))
            _fail(t);
          else
            l_23 = t;
          t = m_23;
        }
      else
        {
          t = t_28;
          if(match_cons(t, sym_ExtSDefInl_4))
            {
              n_23 = ATgetArgument(t, 0);
              {
                ATerm y_28 = ATgetArgument(t, 1);
              }
              {
                ATerm z_28 = ATgetArgument(t, 2);
              }
              {
                ATerm a_29 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = n_23;
          if(((l_23 != NULL) && (l_23 != t)))
            _fail(t);
          else
            l_23 = t;
          t = m_23;
        }
    }
    return(t);
  }
  t = fetch_1_0(m_7, t);
  t = not_null(l_23);
  t = debug_1_0(n_7, t);
  t = giving_up_0_0(t);
  return(t);
}
static ATerm k_61 (ATerm g_58, ATerm h_58, ATerm k_58, ATerm l_58, ATerm t)
{
  ATerm t_58 = NULL,e_59 = NULL,g_59 = NULL,m_59 = NULL,l_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_58, h_58);
  t = Definitions_0_0(t);
  t_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_58, k_58);
  m_59 = t;
  if(match_cons(t, sym__2))
    {
      ATerm b_29 = ATgetArgument(t, 0);
      ATerm c_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_59);
  e_59 = t;
  t = t_58;
  {
    ATerm d_29 = t;
    int e_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_59 = NULL,w_59 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_59 = ATgetFirst((ATermList) t);
            w_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_59;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_59;
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
              t = JoinDefsExt_0_0(t);
              LocalPopChoice(g_29);
            }
          else
            {
              t = f_29;
              t = JoinDefs2_0_0(t);
            }
        }
      }
  }
  g_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_59, k_58);
  l_6 = t;
  t = SSLsetAnnotations(l_6, e_59);
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm a_60 = NULL,i_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL,q_60 = NULL,t_60 = NULL;
  l_60 = t;
  if(match_cons(t, sym__2))
    {
      m_60 = ATgetArgument(t, 0);
      t_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_60;
  if(match_cons(t, sym__2))
    {
      n_60 = ATgetArgument(t, 0);
      q_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_60;
  if(match_cons(t, sym_Mod_2))
    {
      a_60 = ATgetArgument(t, 0);
      i_60 = ATgetArgument(t, 1);
      {
        ATerm h_29 = t;
        int j_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_61 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, a_60, i_60, q_60);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            h_61 = t;
            t = (ATerm) ATmakeAppl(sym__2, h_61, t_60);
            LocalPopChoice(j_29);
          }
        else
          {
            t = h_29;
            t = k_61(n_60, q_60, t_60, l_60, t);
          }
      }
    }
  else
    {
      t = k_61(n_60, q_60, t_60, l_60, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm u_110 (ATerm), ATerm t)
{
  static ATerm t_62 (ATerm t)
  {
    ATerm n_62 = NULL,q_62 = NULL,s_62 = NULL;
    s_62 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_62 = ATgetFirst((ATermList) t);
        q_62 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_27 = NULL,x_27 = NULL,o_6 = NULL;
          t = SSLgetAnnotations(s_62);
          t_27 = t;
          t = q_62;
          t = t_62(t);
          x_27 = t;
          t = (ATerm) ATinsert(CheckATermList(x_27), n_62);
          o_6 = t;
          t = SSLsetAnnotations(o_6, t_27);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_62;
        t = u_110(t);
      }
    return(t);
  }
  t = t_62(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm m_61 = NULL,q_61 = NULL,r_61 = NULL;
  m_61 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_61;
    }
  else
    {
      static ATerm o_7 (ATerm t)
      {
        t = not_null(r_61);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_61 = ATgetFirst((ATermList) t);
          if(((r_61 != NULL) && (r_61 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_61;
      t = at_end_1_0(o_7, t);
    }
  return(t);
}
static ATerm p_63 (ATerm x_62, ATerm t)
{
  ATerm a_63 = NULL;
  t = SSL_explode_term(x_62);
  if(match_cons(t, sym__2))
    {
      ATerm k_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      a_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_63;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_63 = NULL,f_63 = NULL,k_63 = NULL;
  k_63 = t;
  if(match_cons(t, sym__2))
    {
      c_63 = ATgetArgument(t, 0);
      f_63 = ATgetArgument(t, 1);
      {
        ATerm l_29 = t;
        int m_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm p_7 (ATerm t)
            {
              t = f_63;
              return(t);
            }
            t = c_63;
            t = at_end_1_0(p_7, t);
            LocalPopChoice(m_29);
          }
        else
          {
            t = l_29;
            t = p_63(k_63, t);
          }
      }
    }
  else
    {
      t = p_63(k_63, t);
    }
  return(t);
}
static ATerm i_9 (ATerm b_112 (ATerm), ATerm v_45, ATerm u_45, ATerm t)
{
  static ATerm m_64 (ATerm t)
  {
    ATerm e_64 = NULL,f_64 = NULL,i_64 = NULL;
    e_64 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_64;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_64 = ATgetFirst((ATermList) t);
            i_64 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_29 = t;
          int o_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_64;
              {
                static ATerm q_7 (ATerm t)
                {
                  t = u_45;
                  return(t);
                }
                t = t_9(b_112, q_7, f_64, i_64, t);
              }
              t = m_64(t);
              LocalPopChoice(o_29);
            }
          else
            {
              t = n_29;
              {
                ATerm p_28 = NULL,u_28 = NULL,q_6 = NULL;
                t = SSLgetAnnotations(e_64);
                p_28 = t;
                t = i_64;
                t = m_64(t);
                u_28 = t;
                t = (ATerm) ATinsert(CheckATermList(u_28), f_64);
                q_6 = t;
                t = SSLsetAnnotations(q_6, p_28);
              }
            }
        }
      }
    return(t);
  }
  t = v_45;
  t = m_64(t);
  return(t);
}
ATerm genzip_4_0 (ATerm n_102 (ATerm), ATerm o_102 (ATerm), ATerm p_102 (ATerm), ATerm q_102 (ATerm), ATerm t)
{
  static ATerm u_64 (ATerm t)
  {
    ATerm p_29 = t;
    int q_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_102(t);
        LocalPopChoice(q_29);
      }
    else
      {
        t = p_29;
        {
          ATerm o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL,s_6 = NULL;
          t = o_102(t);
          t_64 = t;
          if(match_cons(t, sym__2))
            {
              p_64 = ATgetArgument(t, 0);
              q_64 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_64);
          o_64 = t;
          t = p_64;
          t = q_102(t);
          r_64 = t;
          t = q_64;
          t = u_64(t);
          s_64 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_64, s_64);
          s_6 = t;
          t = SSLsetAnnotations(s_6, o_64);
          t = p_102(t);
        }
      }
    return(t);
  }
  t = u_64(t);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_29 = ATgetArgument(t, 0);
      if(((ATgetType(r_29) != AT_LIST) || !(ATisEmpty(r_29))))
        _fail(t);
      {
        ATerm s_29 = ATgetArgument(t, 1);
        if(((ATgetType(s_29) != AT_LIST) || !(ATisEmpty(s_29))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm d_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_29 = ATgetArgument(t, 0);
      if(((ATgetType(t_29) == AT_LIST) && !(ATisEmpty(t_29))))
        {
          d_65 = ATgetFirst((ATermList) t_29);
          e_65 = (ATerm) ATgetNext((ATermList) t_29);
        }
      else
        _fail(t);
      {
        ATerm u_29 = ATgetArgument(t, 1);
        if(((ATgetType(u_29) == AT_LIST) && !(ATisEmpty(u_29))))
          {
            f_65 = ATgetFirst((ATermList) u_29);
            g_65 = (ATerm) ATgetNext((ATermList) u_29);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_65, f_65), (ATerm) ATmakeAppl(sym__2, e_65, g_65));
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm h_65 = NULL,i_65 = NULL;
  if(match_cons(t, sym__2))
    {
      h_65 = ATgetArgument(t, 0);
      i_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_65), h_65);
  return(t);
}
static ATerm n_9 (ATerm w_689, ATerm b_690, ATerm q_67, ATerm t)
{
  ATerm w_64 = NULL,x_64 = NULL,y_64 = NULL,b_65 = NULL;
  t = SSL_explode_term(b_690);
  if(match_cons(t, sym__2))
    {
      w_64 = ATgetArgument(t, 0);
      y_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(w_689);
  if(match_cons(t, sym__2))
    {
      if((w_64 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      x_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_64, y_64);
  t = genzip_4_0(t_7, v_7, w_7, _id, t);
  b_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_65, q_67);
  t = conc_0_0(t);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm c_66 = NULL;
  c_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, c_66);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm d_66 = NULL,e_66 = NULL,g_66 = NULL,h_66 = NULL,v_6 = NULL;
  h_66 = t;
  if(match_cons(t, sym__2))
    {
      e_66 = ATgetArgument(t, 0);
      g_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_66);
  d_66 = t;
  t = g_66;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_66, g_66);
  v_6 = t;
  t = SSLsetAnnotations(v_6, d_66);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm f_67 = NULL,g_67 = NULL,h_67 = NULL,i_67 = NULL,j_67 = NULL;
  f_67 = t;
  if(match_cons(t, sym__2))
    {
      g_67 = ATgetArgument(t, 0);
      h_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_67;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_67 = ATgetFirst((ATermList) t);
      j_67 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_29 = t;
        int w_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_68(g_67, h_67, f_67, t);
            LocalPopChoice(w_29);
          }
        else
          {
            t = v_29;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_67), i_67), j_67);
          }
      }
    }
  else
    {
      t = c_68(g_67, h_67, f_67, t);
    }
  return(t);
}
static ATerm c_68 (ATerm i_66, ATerm j_66, ATerm l_66, ATerm t)
{
  ATerm m_66 = NULL,q_66 = NULL,w_6 = NULL,v_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL;
  t = SSLgetAnnotations(l_66);
  m_66 = t;
  t = j_66;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_66 = ATgetFirst((ATermList) t);
      y_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_66;
  if(match_cons(t, sym__2))
    {
      w_66 = ATgetArgument(t, 0);
      x_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_66;
        if((w_66 != t))
          {
            _fail(t);
          }
        t = y_66;
        LocalPopChoice(y_29);
      }
    else
      {
        t = x_29;
        t = j_66;
        t = n_9(w_66, x_66, y_66, t);
      }
  }
  q_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_66, q_66);
  w_6 = t;
  t = SSLsetAnnotations(w_6, m_66);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm b_68 = NULL;
  if(match_cons(t, sym__2))
    {
      b_68 = ATgetArgument(t, 0);
      if((b_68 != ATgetArgument(t, 1)))
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
  ATerm z_29 = t;
  int c_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(x_7, a_8, b_8, t);
      LocalPopChoice(c_30);
    }
  else
    {
      t = z_29;
      {
        ATerm s_67 = NULL,t_67 = NULL,u_67 = NULL;
        s_67 = t;
        if(match_cons(t, sym__2))
          {
            t_67 = ATgetArgument(t, 0);
            u_67 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_67;
        t = i_9(c_8, t_67, u_67, t);
      }
    }
  return(t);
}
static ATerm p_9 (ATerm n_129 (ATerm), ATerm o_129 (ATerm), ATerm p_129 (ATerm), ATerm r_68, ATerm o_68, ATerm w_68, ATerm s_68, ATerm p_68, ATerm q_68, ATerm t)
{
  ATerm d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,l_68 = NULL,y_68 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_68, s_68);
  t = n_129(t);
  if(match_cons(t, sym__2))
    {
      e_68 = ATgetArgument(t, 0);
      d_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_68;
  t = o_129(t);
  f_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_68, w_68);
  t = diff_0_0(t);
  g_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_68, o_68);
  t = conc_0_0(t);
  h_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_68, w_68);
  t = conc_0_0(t);
  l_68 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_68, e_68, p_68);
  t = p_129(t);
  y_68 = t;
  t = (ATerm) ATmakeAppl(sym__5, h_68, l_68, d_68, y_68, q_68);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm n_129 (ATerm), ATerm o_129 (ATerm), ATerm p_129 (ATerm), ATerm t)
{
  ATerm a_69 = NULL,b_69 = NULL,c_69 = NULL,d_69 = NULL,e_69 = NULL,f_69 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm d_30 = ATgetArgument(t, 0);
      if(((ATgetType(d_30) == AT_LIST) && !(ATisEmpty(d_30))))
        {
          a_69 = ATgetFirst((ATermList) d_30);
          b_69 = (ATerm) ATgetNext((ATermList) d_30);
        }
      else
        _fail(t);
      c_69 = ATgetArgument(t, 1);
      d_69 = ATgetArgument(t, 2);
      e_69 = ATgetArgument(t, 3);
      f_69 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = p_9(n_129, o_129, p_129, a_69, b_69, c_69, d_69, e_69, f_69, t);
  return(t);
}
ATerm while_not_2_0 (ATerm n_104 (ATerm), ATerm o_104 (ATerm), ATerm t)
{
  static ATerm g_69 (ATerm t)
  {
    ATerm e_30 = t;
    int f_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_104(t);
        LocalPopChoice(f_30);
      }
    else
      {
        t = e_30;
        t = o_104(t);
        t = g_69(t);
      }
    return(t);
  }
  t = g_69(t);
  return(t);
}
ATerm for_3_0 (ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm s_104 (ATerm), ATerm t)
{
  t = q_104(t);
  t = while_not_2_0(r_104, s_104, t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm g_70 = NULL,h_70 = NULL,i_71 = NULL;
  if(match_cons(t, sym__3))
    {
      g_70 = ATgetArgument(t, 0);
      h_70 = ATgetArgument(t, 1);
      i_71 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, g_70, g_70, h_70, i_71, (ATerm) ATempty);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm o_71 = NULL,p_71 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm g_30 = ATgetArgument(t, 0);
      if(((ATgetType(g_30) != AT_LIST) || !(ATisEmpty(g_30))))
        _fail(t);
      {
        ATerm h_30 = ATgetArgument(t, 1);
      }
      {
        ATerm i_30 = ATgetArgument(t, 2);
      }
      o_71 = ATgetArgument(t, 3);
      p_71 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_71, p_71);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm m_30 = t;
  int n_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, m_8, o_8, t);
      LocalPopChoice(n_30);
    }
  else
    {
      t = m_30;
      {
        ATerm v_71 = NULL,w_71 = NULL,x_71 = NULL,d_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL;
        if(match_cons(t, sym__5))
          {
            v_71 = ATgetArgument(t, 0);
            d_72 = ATgetArgument(t, 1);
            n_72 = ATgetArgument(t, 2);
            o_72 = ATgetArgument(t, 3);
            p_72 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = v_71;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_71 = ATgetFirst((ATermList) t);
            x_71 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, x_71, d_72, n_72, o_72, (ATerm) ATinsert(CheckATermList(p_72), w_71));
      }
    }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(p_8, t);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm s_71 = NULL,t_71 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm o_30 = ATgetArgument(t, 0);
      s_71 = ATgetArgument(t, 1);
      t_71 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_71), s_71);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm p_30 = t;
  int q_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      LocalPopChoice(q_30);
    }
  else
    {
      t = p_30;
    }
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm l_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL;
  t_30 = t;
  if(match_cons(t, sym__2))
    {
      u_30 = ATgetArgument(t, 0);
      v_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_30;
  if(match_cons(t, sym_Mod_2))
    {
      l_30 = ATgetArgument(t, 0);
      s_30 = ATgetArgument(t, 1);
      {
        ATerm r_30 = t;
        int w_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_30;
            t = j_8(l_30, s_30, v_30, t);
            LocalPopChoice(w_30);
          }
        else
          {
            t = r_30;
            t = b_31(u_30, v_30, t);
          }
      }
    }
  else
    {
      t = b_31(u_30, v_30, t);
    }
  return(t);
}
static ATerm b_31 (ATerm a_30, ATerm b_30, ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL;
  t = term_f_15;
  j_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_16), b_30), term_f_16), a_30), term_d_16);
  k_30 = t;
  t = SSL_printnl(j_30, k_30);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_16), b_30), term_f_16), a_30), term_d_16);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm l_76 = NULL,m_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL;
  t = for_3_0(i_8, k_8, l_8, t);
  l_76 = t;
  if(match_cons(t, sym__2))
    {
      m_76 = ATgetArgument(t, 0);
      n_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_76;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_76;
    }
  else
    {
      ATerm i_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_76 = ATgetFirst((ATermList) t);
          p_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(p_76), o_76);
      t = map_1_0(r_8, t);
      t = term_i_15;
      i_29 = t;
      t = SSL_exit(i_29);
    }
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_u_17;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm j_77 = NULL,k_77 = NULL;
  if(match_cons(t, sym__2))
    {
      j_77 = ATgetArgument(t, 0);
      k_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10(j_77, k_77, t);
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_i_15;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_u_17;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm l_77 = NULL,m_77 = NULL;
  if(match_cons(t, sym__2))
    {
      l_77 = ATgetArgument(t, 0);
      m_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10(l_77, m_77, t);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  t = term_i_15;
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm n_77 = NULL;
  if(match_cons(t, sym__2))
    {
      n_77 = ATgetArgument(t, 0);
      if((n_77 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = term_x_30;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  t = term_y_30;
  return(t);
}
ATerm RegisterExtSDefInl_0_0 (ATerm t)
{
  ATerm t_76 = NULL,u_76 = NULL,v_76 = NULL,w_76 = NULL,x_76 = NULL,y_76 = NULL,z_76 = NULL,a_77 = NULL,d_77 = NULL,e_77 = NULL,f_77 = NULL,g_77 = NULL,h_77 = NULL,i_77 = NULL;
  v_76 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      y_76 = ATgetArgument(t, 0);
      t_76 = ATgetArgument(t, 1);
      u_76 = ATgetArgument(t, 2);
      {
        ATerm z_30 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  a_77 = t;
  t = t_76;
  t = foldr_3_0(s_8, t_8, u_8, t);
  w_76 = t;
  t = u_76;
  t = foldr_3_0(x_8, z_8, d_9, t);
  x_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_76, (ATerm) ATmakeAppl(sym__2, w_76, x_76));
  {
    ATerm a_31 = t;
    int g_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(g_31);
      }
    else
      {
        t = a_31;
        t = (ATerm) ATempty;
      }
  }
  e_77 = t;
  t = y_76;
  {
    ATerm h_31 = t;
    int i_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(i_31);
      }
    else
      {
        t = h_31;
        t = (ATerm) ATempty;
      }
  }
  d_77 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, w_76, x_76));
  i_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, w_76, x_76)), d_77);
  t = u_9(e_9, i_77, d_77, t);
  z_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_76, (ATerm) ATmakeAppl(sym__2, w_76, x_76));
  g_77 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_j_31, (ATerm) ATinsert(CheckATermList(e_77), v_76));
  h_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_76, (ATerm) ATmakeAppl(sym__2, w_76, x_76)), (ATerm) ATmakeAppl(sym_Defined_2, term_j_31, (ATerm) ATinsert(CheckATermList(e_77), v_76)));
  t = s_9(k_9, g_77, h_77, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_k_31, z_76);
  f_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_76, (ATerm) ATmakeAppl(sym_Defined_2, term_k_31, z_76));
  t = s_9(l_9, y_76, f_77, t);
  t = a_77;
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = term_u_17;
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm c_78 = NULL,d_78 = NULL;
  if(match_cons(t, sym__2))
    {
      c_78 = ATgetArgument(t, 0);
      d_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10(c_78, d_78, t);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = term_i_15;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  t = term_u_17;
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm e_78 = NULL,f_78 = NULL;
  if(match_cons(t, sym__2))
    {
      e_78 = ATgetArgument(t, 0);
      f_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10(e_78, f_78, t);
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = term_i_15;
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm g_78 = NULL;
  if(match_cons(t, sym__2))
    {
      g_78 = ATgetArgument(t, 0);
      if((g_78 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  t = term_x_30;
  return(t);
}
static ATerm q_10 (ATerm t)
{
  t = term_y_30;
  return(t);
}
ATerm RegisterExtSDef_0_0 (ATerm t)
{
  ATerm o_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL,u_77 = NULL,v_77 = NULL,w_77 = NULL,x_77 = NULL,y_77 = NULL,z_77 = NULL,a_78 = NULL,b_78 = NULL;
  q_77 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      t_77 = ATgetArgument(t, 0);
      o_77 = ATgetArgument(t, 1);
      p_77 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  v_77 = t;
  t = o_77;
  t = foldr_3_0(m_9, q_9, r_9, t);
  r_77 = t;
  t = p_77;
  t = foldr_3_0(v_9, x_9, h_10, t);
  s_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_77, (ATerm) ATmakeAppl(sym__2, r_77, s_77));
  {
    ATerm l_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(m_31);
      }
    else
      {
        t = l_31;
        t = (ATerm) ATempty;
      }
  }
  x_77 = t;
  t = t_77;
  {
    ATerm n_31 = t;
    int o_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(o_31);
      }
    else
      {
        t = n_31;
        t = (ATerm) ATempty;
      }
  }
  w_77 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, r_77, s_77));
  b_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, r_77, s_77)), w_77);
  t = u_9(k_10, b_78, w_77, t);
  u_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_77, (ATerm) ATmakeAppl(sym__2, r_77, s_77));
  z_77 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_31, (ATerm) ATinsert(CheckATermList(x_77), q_77));
  a_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_77, (ATerm) ATmakeAppl(sym__2, r_77, s_77)), (ATerm) ATmakeAppl(sym_Defined_2, term_p_31, (ATerm) ATinsert(CheckATermList(x_77), q_77)));
  t = s_9(p_10, z_77, a_78, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_31, u_77);
  y_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_77, (ATerm) ATmakeAppl(sym_Defined_2, term_q_31, u_77));
  t = s_9(q_10, t_77, y_77, t);
  t = v_77;
  return(t);
}
static ATerm s_9 (ATerm u_109 (ATerm), ATerm c_42, ATerm a_42, ATerm t)
{
  ATerm h_78 = NULL,i_78 = NULL,j_78 = NULL,k_78 = NULL,l_78 = NULL,m_78 = NULL;
  k_78 = t;
  t = u_109(t);
  h_78 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_78, c_42, a_42);
  t = j_10(h_78, c_42, a_42, t);
  {
    ATerm s_31 = t;
    int t_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_78 = NULL;
        t = term_v_31;
        n_78 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_78, term_v_31);
        t = i_10(h_78, n_78, t);
        LocalPopChoice(t_31);
      }
    else
      {
        t = s_31;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_78 = ATgetFirst((ATermList) t);
      j_78 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_v_31;
  l_78 = t;
  t = (ATerm) ATinsert(CheckATermList(j_78), (ATerm) ATinsert(CheckATermList(i_78), c_42));
  m_78 = t;
  t = SSL_table_put(h_78, l_78, m_78);
  t = k_78;
  return(t);
}
static ATerm t_9 (ATerm j_112 (ATerm), ATerm k_112 (ATerm), ATerm b_46, ATerm a_46, ATerm t)
{
  t = k_112(t);
  {
    static ATerm r_10 (ATerm t)
    {
      ATerm o_78 = NULL;
      o_78 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_46, o_78);
      t = j_112(t);
      return(t);
    }
    t = fetch_1_0(r_10, t);
  }
  t = a_46;
  return(t);
}
static ATerm u_9 (ATerm g_112 (ATerm), ATerm x_45, ATerm w_45, ATerm t)
{
  static ATerm e_79 (ATerm t)
  {
    ATerm z_78 = NULL,a_79 = NULL,b_79 = NULL;
    z_78 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_45;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_79 = ATgetFirst((ATermList) t);
            b_79 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm w_31 = t;
          int g_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_78;
              {
                static ATerm u_10 (ATerm t)
                {
                  t = w_45;
                  return(t);
                }
                t = t_9(g_112, u_10, a_79, b_79, t);
              }
              t = e_79(t);
              LocalPopChoice(g_32);
            }
          else
            {
              t = w_31;
              {
                ATerm u_31 = NULL,x_31 = NULL,z_6 = NULL;
                t = SSLgetAnnotations(z_78);
                u_31 = t;
                t = b_79;
                t = e_79(t);
                x_31 = t;
                t = (ATerm) ATinsert(CheckATermList(x_31), a_79);
                z_6 = t;
                t = SSLsetAnnotations(z_6, u_31);
              }
            }
        }
      }
    return(t);
  }
  t = x_45;
  t = e_79(t);
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm s_79 = NULL;
  s_79 = t;
  {
    ATerm i_32 = t;
    int k_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_33 = NULL,s_33 = NULL;
        t = term_y_30;
        s_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_y_30, s_79);
        t = w_9(s_33, s_79, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm l_32 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_32) != ATmakeSymbol("a_1", 0, ATtrue)))
              _fail(t);
            m_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_33;
        LocalPopChoice(k_32);
      }
    else
      {
        t = i_32;
        {
          ATerm m_32 = t;
          int n_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_33 = NULL,c_34 = NULL;
              t = term_y_30;
              c_34 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_y_30, s_79);
              t = w_9(c_34, s_79, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm q_32 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) q_32) != ATmakeSymbol("w_0", 0, ATtrue)))
                    _fail(t);
                  w_33 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = w_33;
              LocalPopChoice(n_32);
            }
          else
            {
              t = m_32;
              {
                ATerm k_34 = NULL,q_34 = NULL;
                t = term_y_30;
                q_34 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_y_30, s_79);
                t = w_9(q_34, s_79, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm v_32 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) v_32) != ATmakeSymbol("s_0", 0, ATtrue)))
                      _fail(t);
                    k_34 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = k_34;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm w_9 (ATerm v_42, ATerm w_42, ATerm t)
{
  ATerm w_79 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_42, w_42);
  t = i_10(v_42, w_42, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_79 = ATgetFirst((ATermList) t);
      {
        ATerm x_32 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = w_79;
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm n_80 = NULL,p_80 = NULL;
  n_80 = t;
  if(match_cons(t, sym__2))
    {
      ATerm y_32 = ATgetArgument(t, 0);
      p_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_80;
  if(match_cons(t, sym__2))
    {
      ATerm z_32 = ATgetArgument(t, 0);
      ATerm b_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_35 = NULL,t_35 = NULL;
        t = term_x_30;
        t_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_30, n_80);
        t = w_9(t_35, n_80, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm e_33 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_33) != ATmakeSymbol("y_0", 0, ATtrue)))
              _fail(t);
            q_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_35;
        LocalPopChoice(d_33);
      }
    else
      {
        t = c_33;
        {
          ATerm f_33 = t;
          int g_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_36 = NULL,l_36 = NULL;
              t = term_x_30;
              l_36 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_x_30, n_80);
              t = w_9(l_36, n_80, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm h_33 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) h_33) != ATmakeSymbol("u_0", 0, ATtrue)))
                    _fail(t);
                  i_36 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = i_36;
              LocalPopChoice(g_33);
            }
          else
            {
              t = f_33;
              {
                ATerm u_36 = NULL,c_37 = NULL;
                t = term_x_30;
                c_37 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_x_30, n_80);
                t = w_9(c_37, n_80, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm n_33 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) n_33) != ATmakeSymbol("q_0", 0, ATtrue)))
                      _fail(t);
                    u_36 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = u_36;
              }
            }
        }
      }
  }
  return(t);
}
ATerm foldr_3_0 (ATerm w_114 (ATerm), ATerm x_114 (ATerm), ATerm y_114 (ATerm), ATerm t)
{
  ATerm w_80 = NULL,x_80 = NULL,y_80 = NULL;
  w_80 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_80;
      t = w_114(t);
    }
  else
    {
      ATerm b_81 = NULL,c_81 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_80 = ATgetFirst((ATermList) t);
          y_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_80;
      t = y_114(t);
      b_81 = t;
      t = y_80;
      t = foldr_3_0(w_114, x_114, y_114, t);
      c_81 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_81, c_81);
      t = x_114(t);
    }
  return(t);
}
static ATerm x_10 (ATerm t)
{
  t = term_u_17;
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm r_81 = NULL,s_81 = NULL;
  if(match_cons(t, sym__2))
    {
      r_81 = ATgetArgument(t, 0);
      s_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10(r_81, s_81, t);
  return(t);
}
static ATerm a_11 (ATerm t)
{
  t = term_i_15;
  return(t);
}
static ATerm b_11 (ATerm t)
{
  t = term_u_17;
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm t_81 = NULL,u_81 = NULL;
  if(match_cons(t, sym__2))
    {
      t_81 = ATgetArgument(t, 0);
      u_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10(t_81, u_81, t);
  return(t);
}
static ATerm d_11 (ATerm t)
{
  t = term_i_15;
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm v_81 = NULL;
  if(match_cons(t, sym__2))
    {
      v_81 = ATgetArgument(t, 0);
      if((v_81 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm g_11 (ATerm t)
{
  t = term_x_30;
  return(t);
}
static ATerm h_11 (ATerm t)
{
  t = term_y_30;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm d_81 = NULL,e_81 = NULL,f_81 = NULL,g_81 = NULL,h_81 = NULL,i_81 = NULL,j_81 = NULL,k_81 = NULL,l_81 = NULL,m_81 = NULL,n_81 = NULL,o_81 = NULL,p_81 = NULL,q_81 = NULL;
  f_81 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      i_81 = ATgetArgument(t, 0);
      d_81 = ATgetArgument(t, 1);
      e_81 = ATgetArgument(t, 2);
      {
        ATerm o_33 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  k_81 = t;
  t = d_81;
  t = foldr_3_0(x_10, z_10, a_11, t);
  g_81 = t;
  t = e_81;
  t = foldr_3_0(b_11, c_11, d_11, t);
  h_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_81, (ATerm) ATmakeAppl(sym__2, g_81, h_81));
  {
    ATerm t_33 = t;
    int u_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(u_33);
      }
    else
      {
        t = t_33;
        t = (ATerm) ATempty;
      }
  }
  m_81 = t;
  t = i_81;
  {
    ATerm v_33 = t;
    int x_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(x_33);
      }
    else
      {
        t = v_33;
        t = (ATerm) ATempty;
      }
  }
  l_81 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, g_81, h_81));
  q_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, g_81, h_81)), l_81);
  t = u_9(f_11, q_81, l_81, t);
  j_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_81, (ATerm) ATmakeAppl(sym__2, g_81, h_81));
  o_81 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_y_33, (ATerm) ATinsert(CheckATermList(m_81), f_81));
  p_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_81, (ATerm) ATmakeAppl(sym__2, g_81, h_81)), (ATerm) ATmakeAppl(sym_Defined_2, term_y_33, (ATerm) ATinsert(CheckATermList(m_81), f_81)));
  t = s_9(g_11, o_81, p_81, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_b_34, j_81);
  n_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_81, (ATerm) ATmakeAppl(sym_Defined_2, term_b_34, j_81));
  t = s_9(h_11, i_81, n_81, t);
  t = k_81;
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm d_34 = t;
  int e_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RegisterSDefT_0_0(t);
      LocalPopChoice(e_34);
    }
  else
    {
      t = d_34;
      {
        ATerm f_34 = t;
        int g_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RegisterExtSDef_0_0(t);
            LocalPopChoice(g_34);
          }
        else
          {
            t = f_34;
            t = RegisterExtSDefInl_0_0(t);
          }
      }
    }
  return(t);
}
ATerm needed_defs_0_0 (ATerm t)
{
  ATerm w_81 = NULL;
  t = map_1_0(i_11, t);
  w_81 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_j_34), w_81, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm t)
{
  ATerm x_81 = NULL,y_81 = NULL,z_81 = NULL,a_82 = NULL,b_82 = NULL,c_82 = NULL,f_7 = NULL;
  c_82 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_81 = ATgetFirst((ATermList) t);
      z_81 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_82);
  x_81 = t;
  t = y_81;
  t = g_83(t);
  a_82 = t;
  t = z_81;
  t = h_83(t);
  b_82 = t;
  t = (ATerm) ATinsert(CheckATermList(b_82), a_82);
  f_7 = t;
  t = SSLsetAnnotations(f_7, x_81);
  return(t);
}
static ATerm z_9 (ATerm i_33, ATerm j_33, ATerm t)
{
  ATerm d_82 = NULL;
  t = SSL_fputc(i_33, j_33);
  d_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_82);
  return(t);
}
static ATerm a_10 (ATerm d_32, ATerm e_32, ATerm t)
{
  ATerm e_82 = NULL;
  t = SSL_write_term_to_stream_text(d_32, e_32);
  e_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_82);
  return(t);
}
static ATerm c_10 (ATerm l_105 (ATerm), ATerm d_238, ATerm h_32, ATerm t)
{
  ATerm f_82 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_238, term_l_34);
  t = f_10(t);
  f_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_82, h_32);
  t = l_105(t);
  t = fclose_0_0(t);
  t = h_32;
  return(t);
}
static ATerm b_10 (ATerm z_31, ATerm a_32, ATerm t)
{
  ATerm g_82 = NULL;
  t = SSL_write_term_to_stream_baf(z_31, a_32);
  g_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_82);
  return(t);
}
static ATerm m_11 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm n_11 (ATerm t)
{
  ATerm b_38 = NULL,c_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_34 = ATgetArgument(t, 0);
      if(match_cons(m_34, sym_Stream_1))
        {
          b_38 = ATgetArgument(m_34, 0);
        }
      else
        _fail(t);
      c_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_10(b_38, c_38, t);
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_34 = ATgetArgument(t, 0);
      if(match_cons(n_34, sym_Stream_1))
        {
          s_38 = ATgetArgument(n_34, 0);
        }
      else
        _fail(t);
      t_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_10(s_38, t_38, t);
  p_38 = t;
  t = term_o_34;
  q_38 = t;
  t = p_38;
  if(match_cons(t, sym_Stream_1))
    {
      r_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_o_34, p_38);
  t = z_9(q_38, r_38, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm k_82 = NULL,l_82 = NULL,m_82 = NULL,n_82 = NULL,o_82 = NULL,q_82 = NULL,r_82 = NULL,s_82 = NULL,t_82 = NULL,u_82 = NULL,w_83 = NULL,x_83 = NULL,i_7 = NULL,h_7 = NULL;
  l_82 = t;
  if(match_cons(t, sym__2))
    {
      s_82 = ATgetArgument(t, 0);
      t_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_82);
  r_82 = t;
  t = s_82;
  {
    ATerm p_34 = t;
    int r_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm k_11 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((k_82 != NULL) && (k_82 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                k_82 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(k_11, t);
        LocalPopChoice(r_34);
      }
    else
      {
        t = p_34;
        t = term_s_34;
        k_82 = t;
      }
  }
  u_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_82, t_82);
  h_7 = t;
  t = SSLsetAnnotations(h_7, r_82);
  t = l_82;
  if(match_cons(t, sym__2))
    {
      n_82 = ATgetArgument(t, 0);
      o_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_82);
  m_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_82, (ATerm) ATmakeAppl(sym__2, not_null(k_82), o_82));
  i_7 = t;
  t = SSLsetAnnotations(i_7, m_82);
  q_82 = t;
  if(match_cons(t, sym__2))
    {
      w_83 = ATgetArgument(t, 0);
      x_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_34 = t;
    int u_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_37 = NULL,v_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL,j_7 = NULL;
        t = SSLgetAnnotations(q_82);
        m_37 = t;
        t = w_83;
        t = fetch_1_0(m_11, t);
        v_37 = t;
        t = x_83;
        if(match_cons(t, sym__2))
          {
            y_37 = ATgetArgument(t, 0);
            z_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_10(n_11, y_37, z_37, t);
        x_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_37, x_37);
        j_7 = t;
        t = SSLsetAnnotations(j_7, m_37);
        LocalPopChoice(u_34);
      }
    else
      {
        t = t_34;
        {
          ATerm j_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,k_7 = NULL;
          t = SSLgetAnnotations(q_82);
          j_38 = t;
          t = x_83;
          if(match_cons(t, sym__2))
            {
              n_38 = ATgetArgument(t, 0);
              o_38 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_10(o_11, n_38, o_38, t);
          m_38 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_83, m_38);
          k_7 = t;
          t = SSLsetAnnotations(k_7, j_38);
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
ATerm apply_strategy_1_0 (ATerm f_124 (ATerm), ATerm t)
{
  ATerm a_84 = NULL,b_84 = NULL,c_84 = NULL,d_84 = NULL,e_84 = NULL;
  e_84 = t;
  t = dtime_0_0(t);
  t = e_84;
  t = f_124(t);
  d_84 = t;
  t = dtime_0_0(t);
  a_84 = t;
  t = d_84;
  if(match_cons(t, sym__2))
    {
      b_84 = ATgetArgument(t, 0);
      c_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_84), (ATerm) ATmakeAppl(sym_Runtime_1, a_84)), c_84);
  return(t);
}
static ATerm s_84 (ATerm m_84, ATerm t)
{
  t = SSL_fclose(m_84);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_84 = NULL,q_84 = NULL;
  q_84 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_84 = ATgetArgument(t, 0);
      {
        ATerm v_34 = t;
        int w_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_84);
            LocalPopChoice(w_34);
          }
        else
          {
            t = v_34;
            t = s_84(q_84, t);
          }
      }
    }
  else
    {
      t = s_84(q_84, t);
    }
  return(t);
}
static ATerm d_10 (ATerm f_32, ATerm t)
{
  t = SSL_read_term_from_stream(f_32);
  return(t);
}
static ATerm e_10 (ATerm k_33, ATerm l_33, ATerm t)
{
  ATerm t_84 = NULL;
  t = SSL_fopen(k_33, l_33);
  t_84 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_84);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_84 = NULL;
  t = SSL_stdin_stream();
  u_84 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_84);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_84 = NULL;
  t = SSL_stdout_stream();
  v_84 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_84);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_84 = NULL;
  t = SSL_stderr_stream();
  w_84 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_84);
  return(t);
}
static ATerm d_86 (ATerm c_85, ATerm t)
{
  ATerm d_85 = NULL;
  t = SSL_explode_term(c_85);
  if(match_cons(t, sym__2))
    {
      ATerm x_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_34) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_34 = ATgetArgument(t, 1);
        if(((ATgetType(y_34) == AT_LIST) && !(ATisEmpty(y_34))))
          {
            d_85 = ATgetFirst((ATermList) y_34);
            {
              ATerm z_34 = (ATerm) ATgetNext((ATermList) y_34);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_85;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_85;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_85;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_85;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm e_86 (ATerm g_85, ATerm h_85, ATerm i_85, ATerm t)
{
  ATerm j_85 = NULL,k_85 = NULL,l_85 = NULL,o_85 = NULL,r_7 = NULL;
  t = SSLgetAnnotations(i_85);
  l_85 = t;
  t = g_85;
  if(match_cons(t, sym_Path_1))
    {
      o_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_85, h_85);
  r_7 = t;
  t = SSLsetAnnotations(r_7, l_85);
  if(match_cons(t, sym__2))
    {
      j_85 = ATgetArgument(t, 0);
      k_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_10(j_85, k_85, t);
  return(t);
}
static ATerm f_86 (ATerm q_85, ATerm r_85, ATerm s_85, ATerm t)
{
  ATerm t_85 = NULL,u_85 = NULL,v_85 = NULL,y_85 = NULL,u_7 = NULL;
  t = SSLgetAnnotations(s_85);
  v_85 = t;
  t = SSL_is_string(q_85);
  y_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_85, r_85);
  u_7 = t;
  t = SSLsetAnnotations(u_7, v_85);
  if(match_cons(t, sym__2))
    {
      t_85 = ATgetArgument(t, 0);
      u_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_10(t_85, u_85, t);
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm a_86 = NULL,b_86 = NULL,c_86 = NULL;
  a_86 = t;
  if(match_cons(t, sym__2))
    {
      b_86 = ATgetArgument(t, 0);
      c_86 = ATgetArgument(t, 1);
      {
        ATerm a_35 = t;
        int b_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_86(a_86, t);
            LocalPopChoice(b_35);
          }
        else
          {
            t = a_35;
            {
              ATerm c_35 = t;
              int d_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_86(b_86, c_86, a_86, t);
                  LocalPopChoice(d_35);
                }
              else
                {
                  t = c_35;
                  t = f_86(b_86, c_86, a_86, t);
                }
            }
          }
      }
    }
  else
    {
      t = d_86(a_86, t);
    }
  return(t);
}
static ATerm q_11 (ATerm t)
{
  t = term_e_35;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_86 = NULL,h_86 = NULL,i_86 = NULL;
  ATerm f_35 = t;
  int g_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_86 = NULL;
      j_86 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_86, term_h_35);
      t = f_10(t);
      LocalPopChoice(g_35);
    }
  else
    {
      t = f_35;
      t = debug_1_0(q_11, t);
      _fail(t);
    }
  h_86 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_10(i_86, t);
  g_86 = t;
  t = h_86;
  t = fclose_0_0(t);
  t = g_86;
  return(t);
}
ATerm fetch_1_0 (ATerm o_110 (ATerm), ATerm t)
{
  static ATerm h_87 (ATerm t)
  {
    ATerm e_87 = NULL,f_87 = NULL,g_87 = NULL;
    e_87 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_87 = ATgetFirst((ATermList) t);
        g_87 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_35 = t;
      int j_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_39 = NULL,d_40 = NULL,y_7 = NULL;
          t = SSLgetAnnotations(e_87);
          x_39 = t;
          t = f_87;
          t = o_110(t);
          d_40 = t;
          t = (ATerm) ATinsert(CheckATermList(g_87), d_40);
          y_7 = t;
          t = SSLsetAnnotations(y_7, x_39);
          LocalPopChoice(j_35);
        }
      else
        {
          t = i_35;
          {
            ATerm q_40 = NULL,d_41 = NULL,z_7 = NULL;
            t = SSLgetAnnotations(e_87);
            q_40 = t;
            t = g_87;
            t = h_87(t);
            d_41 = t;
            t = (ATerm) ATinsert(CheckATermList(d_41), f_87);
            z_7 = t;
            t = SSLsetAnnotations(z_7, q_40);
          }
        }
    }
    return(t);
  }
  t = h_87(t);
  return(t);
}
static ATerm y_9 (ATerm y_54, ATerm z_54, ATerm t)
{
  t = SSL_strcat(y_54, z_54);
  return(t);
}
ATerm debug_1_0 (ATerm j_105 (ATerm), ATerm t)
{
  ATerm k_87 = NULL,l_87 = NULL,m_87 = NULL,n_87 = NULL;
  k_87 = t;
  t = j_105(t);
  l_87 = t;
  t = term_f_15;
  m_87 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_87), l_87);
  n_87 = t;
  t = SSL_printnl(m_87, n_87);
  t = k_87;
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm k_35 = t;
  int l_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(l_35);
    }
  else
    {
      t = k_35;
    }
  return(t);
}
static ATerm e_12 (ATerm t)
{
  t = term_m_35;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm n_35 = t;
  int o_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_87 = NULL;
      u_87 = t;
      t = SSL_is_string(u_87);
      LocalPopChoice(o_35);
    }
  else
    {
      t = n_35;
      {
        ATerm p_35 = t;
        int r_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(x_11, t);
            LocalPopChoice(r_35);
          }
        else
          {
            t = p_35;
            {
              ATerm a_88 = NULL,b_88 = NULL,c_88 = NULL;
              a_88 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_88 = ATgetArgument(t, 0);
                  t = b_88;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_88 = ATgetArgument(t, 0);
                      t = b_88;
                      {
                        ATerm s_35 = t;
                        int b_36 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(b_36);
                          }
                        else
                          {
                            t = s_35;
                            t = debug_1_0(e_12, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm g_88 = NULL,h_88 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_88 = ATgetArgument(t, 0);
                          c_88 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_88;
                      t = eval_config_0_0(t);
                      g_88 = t;
                      t = c_88;
                      t = eval_config_0_0(t);
                      h_88 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_88, h_88);
                      t = y_9(g_88, h_88, t);
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
  ATerm l_88 = NULL,m_88 = NULL;
  l_88 = t;
  t = term_c_36;
  m_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_36, l_88);
  t = i_10(m_88, l_88, t);
  {
    ATerm h_36 = t;
    int j_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_88 = NULL,o_88 = NULL;
        t = eval_config_0_0(t);
        n_88 = t;
        t = term_c_36;
        o_88 = t;
        t = SSL_table_put(o_88, l_88, n_88);
        t = n_88;
        LocalPopChoice(j_36);
      }
    else
      {
        t = h_36;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm c_107 (ATerm), ATerm t)
{
  ATerm s_88 = NULL;
  s_88 = t;
  {
    ATerm k_36 = t;
    int n_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_88 = NULL;
        t = term_o_36;
        t = get_config_0_0(t);
        u_88 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_88, term_t_36);
        t = geq_0_0(t);
        t = s_88;
        t = c_107(t);
        LocalPopChoice(n_36);
      }
    else
      {
        t = k_36;
        t = s_88;
      }
  }
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm x_88 = NULL;
  x_88 = t;
  if(match_string(t, "-k"))
    {
      t = x_88;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_88;
    }
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm y_88 = NULL,z_88 = NULL,a_89 = NULL;
  y_88 = t;
  t = SSL_string_to_int(y_88);
  z_88 = t;
  t = term_v_36;
  a_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_36, z_88);
  t = l_10(a_89, z_88, t);
  t = y_88;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  t = term_w_36;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_12, h_12, i_12, t);
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm c_89 = NULL;
  c_89 = t;
  if(match_string(t, "-S"))
    {
      t = c_89;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_89;
    }
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm d_89 = NULL,e_89 = NULL;
  t = term_o_36;
  d_89 = t;
  t = term_u_17;
  e_89 = t;
  t = term_g_37;
  t = l_10(d_89, e_89, t);
  t = term_h_37;
  return(t);
}
static ATerm l_12 (ATerm t)
{
  t = term_i_37;
  return(t);
}
static ATerm m_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm f_89 = NULL,g_89 = NULL,h_89 = NULL;
  f_89 = t;
  t = SSL_string_to_int(f_89);
  g_89 = t;
  t = term_o_36;
  h_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_36, g_89);
  t = l_10(h_89, g_89, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_89);
  return(t);
}
static ATerm o_12 (ATerm t)
{
  t = term_l_37;
  return(t);
}
static ATerm t_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  ATerm i_89 = NULL,j_89 = NULL;
  t = term_n_37;
  i_89 = t;
  t = term_e_15;
  j_89 = t;
  t = term_p_37;
  t = l_10(i_89, j_89, t);
  t = term_q_37;
  return(t);
}
static ATerm v_12 (ATerm t)
{
  t = term_d_38;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_38 = t;
  int g_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_12, k_12, l_12, t);
      LocalPopChoice(g_38);
    }
  else
    {
      t = f_38;
      {
        ATerm h_38 = t;
        int i_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(m_12, n_12, o_12, t);
            LocalPopChoice(i_38);
          }
        else
          {
            t = h_38;
            t = Option_3_0(t_12, u_12, v_12, t);
          }
      }
    }
  return(t);
}
static ATerm l_10 (ATerm j_37, ATerm k_37, ATerm t)
{
  ATerm k_89 = NULL;
  t = term_c_36;
  k_89 = t;
  t = SSL_table_put(k_89, j_37, k_37);
  t = (ATerm) ATmakeAppl(sym__3, term_c_36, j_37, k_37);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm n_89 = NULL,o_89 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_89 = NULL,q_89 = NULL,r_89 = NULL;
      t = term_e_15;
      t = e_0(t);
      p_89 = t;
      t = term_k_38;
      q_89 = t;
      t = term_l_38;
      r_89 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_38, term_l_38, p_89);
      t = j_10(q_89, r_89, p_89, t);
      _fail(t);
    }
  else
    {
      ATerm u_89 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_89 = ATgetFirst((ATermList) t);
          o_89 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_89;
      t = c_0(t);
      t = term_e_15;
      t = d_0(t);
      u_89 = t;
      t = (ATerm) ATinsert(CheckATermList(o_89), u_89);
    }
  return(t);
}
static ATerm w_12 (ATerm t)
{
  ATerm w_89 = NULL;
  w_89 = t;
  if(match_string(t, "-o"))
    {
      t = w_89;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = w_89;
    }
  return(t);
}
static ATerm y_12 (ATerm t)
{
  ATerm x_89 = NULL,y_89 = NULL;
  x_89 = t;
  t = term_u_38;
  y_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_38, x_89);
  t = l_10(y_89, x_89, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, x_89);
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = term_v_38;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_12, y_12, z_12, t);
  return(t);
}
static ATerm j_10 (ATerm k_42, ATerm l_42, ATerm j_42, ATerm t)
{
  ATerm a_90 = NULL,b_90 = NULL,c_90 = NULL;
  a_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_42, l_42);
  {
    ATerm w_38 = t;
    int x_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_38 = ATgetArgument(t, 0);
            ATerm z_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_42, l_42);
        t = i_10(k_42, l_42, t);
        LocalPopChoice(x_38);
      }
    else
      {
        t = w_38;
        t = (ATerm) ATempty;
      }
  }
  b_90 = t;
  t = (ATerm) ATinsert(CheckATermList(b_90), j_42);
  c_90 = t;
  t = SSL_table_put(k_42, l_42, c_90);
  t = a_90;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm j_90 = NULL,k_90 = NULL,l_90 = NULL,m_90 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_90 = NULL,o_90 = NULL,p_90 = NULL;
      t = term_e_15;
      t = n_0(t);
      n_90 = t;
      t = term_k_38;
      o_90 = t;
      t = term_l_38;
      p_90 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_38, term_l_38, n_90);
      t = j_10(o_90, p_90, n_90, t);
      _fail(t);
    }
  else
    {
      ATerm t_90 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_90 = ATgetFirst((ATermList) t);
          k_90 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_90;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_90 = ATgetFirst((ATermList) t);
          m_90 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_90;
      t = k_0(t);
      t = l_90;
      t = l_0(t);
      t_90 = t;
      t = (ATerm) ATinsert(CheckATermList(m_90), t_90);
    }
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm v_90 = NULL;
  v_90 = t;
  if(match_string(t, "-i"))
    {
      t = v_90;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = v_90;
    }
  return(t);
}
static ATerm b_13 (ATerm t)
{
  ATerm w_90 = NULL,x_90 = NULL;
  w_90 = t;
  t = term_a_39;
  x_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_39, w_90);
  t = l_10(x_90, w_90, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_90);
  return(t);
}
static ATerm c_13 (ATerm t)
{
  t = term_b_39;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_13, b_13, c_13, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm y_90 = NULL,z_90 = NULL,a_91 = NULL,b_91 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_15;
  t = whoami_0_0(t);
  y_90 = t;
  t = term_f_15;
  a_91 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_39), y_90);
  b_91 = t;
  t = SSL_printnl(a_91, b_91);
  t = term_i_15;
  z_90 = t;
  t = SSL_exit(z_90);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_d_39;
  t = get_config_0_0(t);
  return(t);
}
static ATerm g_10 (ATerm o_40, ATerm p_40, ATerm t)
{
  ATerm e_39 = t;
  int f_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(o_40, p_40);
      LocalPopChoice(f_39);
    }
  else
    {
      t = e_39;
      t = SSL_addr(o_40, p_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm u_114 (ATerm), ATerm v_114 (ATerm), ATerm t)
{
  ATerm d_91 = NULL,e_91 = NULL,f_91 = NULL;
  d_91 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_91;
      t = u_114(t);
    }
  else
    {
      ATerm i_91 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_91 = ATgetFirst((ATermList) t);
          f_91 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_91;
      t = foldr_2_0(u_114, v_114, t);
      i_91 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_91, i_91);
      t = v_114(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm d_13 (ATerm t)
{
  t = term_u_17;
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm i_42 = NULL,m_42 = NULL;
  if(match_cons(t, sym__2))
    {
      i_42 = ATgetArgument(t, 0);
      m_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10(i_42, m_42, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_91 = NULL,e_42 = NULL,f_42 = NULL;
  t = times_0_0(t);
  f_42 = t;
  t = SSL_explode_term(f_42);
  if(match_cons(t, sym__2))
    {
      ATerm g_39 = ATgetArgument(t, 0);
      e_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_42;
  t = foldr_2_0(d_13, f_13, t);
  l_91 = t;
  t = SSL_TicksToSeconds(l_91);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_91 = NULL,x_91 = NULL,y_91 = NULL;
  w_91 = t;
  if(match_cons(t, sym__2))
    {
      x_91 = ATgetArgument(t, 0);
      y_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_39 = t;
    int i_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_91;
        if((x_91 != t))
          {
            _fail(t);
          }
        t = w_91;
        LocalPopChoice(i_39);
      }
    else
      {
        t = h_39;
        t = (ATerm) ATmakeAppl(sym__2, x_91, y_91);
        {
          ATerm j_39 = t;
          int k_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_91, y_91);
              LocalPopChoice(k_39);
            }
          else
            {
              t = j_39;
              t = SSL_gtr(x_91, y_91);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, x_91, y_91);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_107 (ATerm), ATerm t)
{
  ATerm c_92 = NULL;
  c_92 = t;
  {
    ATerm l_39 = t;
    int m_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_92 = NULL;
        t = term_o_36;
        t = get_config_0_0(t);
        e_92 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_92, term_i_15);
        t = geq_0_0(t);
        t = c_92;
        t = b_107(t);
        LocalPopChoice(m_39);
      }
    else
      {
        t = l_39;
        t = c_92;
      }
  }
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm g_92 = NULL,h_92 = NULL,j_92 = NULL,k_92 = NULL;
  t = run_time_0_0(t);
  g_92 = t;
  t = term_e_15;
  t = whoami_0_0(t);
  h_92 = t;
  t = term_f_15;
  j_92 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_39), g_92), term_n_39), h_92);
  k_92 = t;
  t = SSL_printnl(j_92, k_92);
  t = (ATerm) ATmakeAppl(sym__2, term_f_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_39), g_92), term_n_39), h_92));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_13, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm l_92 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_17;
  l_92 = t;
  t = SSL_exit(l_92);
  return(t);
}
static ATerm i_13 (ATerm t)
{
  ATerm t_92 = NULL,u_92 = NULL;
  u_92 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = u_92;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          t_92 = ATgetArgument(t, 0);
          {
            ATerm p_44 = NULL,d_8 = NULL;
            t = SSLgetAnnotations(u_92);
            p_44 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, t_92);
            d_8 = t;
            t = SSLsetAnnotations(d_8, p_44);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = u_92;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_125 (ATerm), ATerm t)
{
  ATerm p_39 = t;
  int q_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_39;
      t = get_config_0_0(t);
      LocalPopChoice(q_39);
    }
  else
    {
      t = p_39;
      t = fetch_1_0(i_13, t);
    }
  t = d_125(t);
  return(t);
}
ATerm map_1_0 (ATerm e_110 (ATerm), ATerm t)
{
  static ATerm k_93 (ATerm t)
  {
    ATerm h_93 = NULL,i_93 = NULL,j_93 = NULL;
    h_93 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_93;
      }
    else
      {
        ATerm t_45 = NULL,f_46 = NULL,g_46 = NULL,t_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_93 = ATgetFirst((ATermList) t);
            j_93 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_93);
        t_45 = t;
        t = i_93;
        t = e_110(t);
        f_46 = t;
        t = j_93;
        t = k_93(t);
        g_46 = t;
        t = (ATerm) ATinsert(CheckATermList(g_46), f_46);
        t_10 = t;
        t = SSLsetAnnotations(t_10, t_45);
      }
    return(t);
  }
  t = k_93(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm n_93 = NULL,o_93 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_93 = ATgetFirst((ATermList) t);
      o_93 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_93 = NULL,t_93 = NULL;
        static ATerm k_13 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_93)), not_null(t_93));
          return(t);
        }
        t = o_93;
        t = i_0(t);
        if(((s_93 != NULL) && (s_93 != t)))
          _fail(t);
        else
          s_93 = t;
        t = n_93;
        t = g_0(t);
        if(((t_93 != NULL) && (t_93 != t)))
          _fail(t);
        else
          t_93 = t;
        t = o_93;
        t = reverse_acc_2_0(g_0, k_13, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_15;
      t = i_0(t);
    }
  return(t);
}
static ATerm i_10 (ATerm b_44, ATerm c_44, ATerm t)
{
  t = SSL_table_get(b_44, c_44);
  return(t);
}
static ATerm m_13 (ATerm t)
{
  ATerm x_93 = NULL,y_93 = NULL,z_93 = NULL,v_10 = NULL;
  z_93 = t;
  if(match_cons(t, sym_Program_1))
    {
      y_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_93);
  x_93 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, y_93);
  v_10 = t;
  t = SSLsetAnnotations(v_10, x_93);
  return(t);
}
static ATerm n_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_13 (ATerm t)
{
  ATerm b_94 = NULL;
  b_94 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_94), term_s_39);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_93 = NULL,w_93 = NULL;
  ATerm t_39 = t;
  int u_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_39;
      t = get_config_0_0(t);
      LocalPopChoice(u_39);
    }
  else
    {
      t = t_39;
      t = fetch_1_0(m_13, t);
    }
  t = term_v_39;
  t = echo_0_0(t);
  t = term_k_38;
  v_93 = t;
  t = term_l_38;
  w_93 = t;
  t = term_w_39;
  t = i_10(v_93, w_93, t);
  t = reverse_acc_2_0(_id, n_13, t);
  t = map_1_0(o_13, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_94 = NULL,e_94 = NULL,f_94 = NULL;
  d_94 = t;
  {
    ATerm y_39 = t;
    int z_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_94;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_40 = ATgetFirst((ATermList) t);
                ATerm b_40 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_94;
          }
        LocalPopChoice(z_39);
      }
    else
      {
        t = y_39;
        t = (ATerm) ATinsert(ATempty, d_94);
      }
  }
  e_94 = t;
  t = term_s_34;
  f_94 = t;
  t = SSL_printnl(f_94, e_94);
  t = d_94;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_d_39;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm p_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  ATerm j_94 = NULL,k_94 = NULL;
  t = term_c_40;
  j_94 = t;
  t = term_e_15;
  k_94 = t;
  t = term_e_40;
  t = l_10(j_94, k_94, t);
  return(t);
}
static ATerm r_13 (ATerm t)
{
  t = term_f_40;
  return(t);
}
static ATerm s_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm l_94 = NULL,m_94 = NULL,n_94 = NULL,o_94 = NULL;
  t = term_c_40;
  n_94 = t;
  t = term_e_15;
  o_94 = t;
  t = term_e_40;
  t = l_10(n_94, o_94, t);
  t = term_g_40;
  l_94 = t;
  t = term_e_15;
  m_94 = t;
  t = term_h_40;
  t = l_10(l_94, m_94, t);
  t = term_i_40;
  return(t);
}
static ATerm j_14 (ATerm t)
{
  t = term_j_40;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_40 = t;
  int l_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_13, q_13, r_13, t);
      LocalPopChoice(l_40);
    }
  else
    {
      t = k_40;
      t = Option_3_0(s_13, u_13, j_14, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_127 (ATerm), ATerm t)
{
  ATerm t_94 = NULL,u_94 = NULL,v_94 = NULL,w_94 = NULL,y_94 = NULL,z_94 = NULL,j_11 = NULL;
  t_94 = t;
  {
    ATerm m_40 = t;
    int n_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_40;
        t = g_127(t);
        LocalPopChoice(n_40);
      }
    else
      {
        t = m_40;
      }
  }
  t = t_94;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_94 = ATgetFirst((ATermList) t);
      w_94 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_94);
  u_94 = t;
  t = term_d_39;
  z_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_39, v_94);
  t = l_10(z_94, v_94, t);
  t = w_94;
  {
    static ATerm j_95 (ATerm t)
    {
      ATerm s_40 = t;
      int t_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_40 = t;
          int x_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_95 = NULL;
              c_95 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = c_95;
              LocalPopChoice(x_40);
            }
          else
            {
              t = w_40;
              t = g_127(t);
              t = Cons_2_0(_id, j_95, t);
            }
          LocalPopChoice(t_40);
        }
      else
        {
          t = s_40;
          {
            ATerm f_95 = NULL,g_95 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_95 = ATgetFirst((ATermList) t);
                g_95 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(g_95), (ATerm) ATmakeAppl(sym_Undefined_1, f_95));
          }
        }
      return(t);
    }
    t = j_95(t);
  }
  y_94 = t;
  t = (ATerm) ATinsert(CheckATermList(y_94), (ATerm) ATmakeAppl(sym_Program_1, v_94));
  j_11 = t;
  t = SSLsetAnnotations(j_11, u_94);
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm v_95 = NULL;
  v_95 = t;
  if(match_string(t, "--help"))
    {
      t = v_95;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_95;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_95;
        }
    }
  return(t);
}
static ATerm m_14 (ATerm t)
{
  ATerm w_95 = NULL,x_95 = NULL;
  t = term_r_39;
  w_95 = t;
  t = term_e_15;
  x_95 = t;
  t = term_y_40;
  t = l_10(w_95, x_95, t);
  t = term_z_40;
  return(t);
}
static ATerm n_14 (ATerm t)
{
  t = term_a_41;
  return(t);
}
static ATerm p_14 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm f_127 (ATerm), ATerm t)
{
  ATerm o_95 = NULL,p_95 = NULL,q_95 = NULL,r_95 = NULL,s_95 = NULL,t_95 = NULL,u_95 = NULL;
  q_95 = t;
  t = term_k_38;
  s_95 = t;
  t = term_l_38;
  t_95 = t;
  t = (ATerm) ATempty;
  u_95 = t;
  t = SSL_table_put(s_95, t_95, u_95);
  t = q_95;
  {
    static ATerm k_14 (ATerm t)
    {
      ATerm b_41 = t;
      int c_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_127(t);
          LocalPopChoice(c_41);
        }
      else
        {
          t = b_41;
          {
            ATerm e_41 = t;
            int f_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_14, m_14, n_14, t);
                LocalPopChoice(f_41);
              }
            else
              {
                t = e_41;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(k_14, t);
  }
  {
    ATerm g_41 = t;
    int h_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_96 = NULL;
        e_96 = t;
        {
          ATerm i_41 = t;
          int j_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_46 = NULL;
              t = e_96;
              {
                ATerm k_41 = t;
                int l_41 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_r_39;
                    t = get_config_0_0(t);
                    LocalPopChoice(l_41);
                  }
                else
                  {
                    t = k_41;
                    t = fetch_1_0(p_14, t);
                  }
              }
              t = e_96;
              t = default_system_usage_0_0(t);
              t = term_u_17;
              t_46 = t;
              t = SSL_exit(t_46);
              LocalPopChoice(j_41);
            }
          else
            {
              t = i_41;
              {
                ATerm h_47 = NULL;
                t = term_c_40;
                t = get_config_0_0(t);
                t = e_96;
                t = default_system_about_0_0(t);
                t = term_u_17;
                h_47 = t;
                t = SSL_exit(h_47);
              }
            }
        }
        LocalPopChoice(h_41);
      }
    else
      {
        t = g_41;
        {
          ATerm m_41 = t;
          int n_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_96 = NULL,g_96 = NULL,h_96 = NULL;
              static ATerm q_14 (ATerm t)
              {
                ATerm i_96 = NULL,j_96 = NULL,k_96 = NULL,p_11 = NULL;
                k_96 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    j_96 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(k_96);
                i_96 = t;
                t = j_96;
                if(((o_95 != NULL) && (o_95 != t)))
                  _fail(t);
                else
                  o_95 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, j_96);
                p_11 = t;
                t = SSLsetAnnotations(p_11, i_96);
                return(t);
              }
              t = fetch_1_0(q_14, t);
              t = term_f_15;
              g_96 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_95)), term_o_41);
              h_96 = t;
              t = SSL_printnl(g_96, h_96);
              t = (ATerm) ATmakeAppl(sym__2, term_f_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_95)), term_o_41));
              t = default_system_usage_0_0(t);
              t = term_i_15;
              f_96 = t;
              t = SSL_exit(f_96);
              LocalPopChoice(n_41);
            }
          else
            {
              t = m_41;
            }
        }
      }
  }
  p_95 = t;
  t = term_k_38;
  r_95 = t;
  t = SSL_table_destroy(r_95);
  t = p_95;
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_125 (ATerm), ATerm g_125 (ATerm), ATerm h_125 (ATerm), ATerm i_125 (ATerm), ATerm t)
{
  ATerm p_96 = NULL,q_96 = NULL,r_96 = NULL,s_96 = NULL;
  t = parse_options_1_0(f_125, t);
  p_96 = t;
  t = term_p_41;
  s_96 = t;
  t = SSL_table_create(s_96);
  t = term_p_41;
  q_96 = t;
  t = term_q_41;
  r_96 = t;
  t = SSL_table_put(q_96, r_96, p_96);
  t = p_96;
  t = h_125(t);
  {
    ATerm r_41 = t;
    int s_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_125, t);
        LocalPopChoice(s_41);
      }
    else
      {
        t = r_41;
        {
          ATerm t_41 = t;
          int u_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_125(t);
              t = report_success_0_0(t);
              LocalPopChoice(u_41);
            }
          else
            {
              t = t_41;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm t_14 (ATerm t)
{
  t = if_verbose2_1_0(y_14, t);
  return(t);
}
static ATerm v_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_14 (ATerm t)
{
  ATerm t_96 = NULL,u_96 = NULL;
  t = term_v_41;
  t_96 = t;
  t = term_e_15;
  u_96 = t;
  t = term_w_41;
  t = l_10(t_96, u_96, t);
  t = term_x_41;
  return(t);
}
static ATerm x_14 (ATerm t)
{
  t = term_y_41;
  return(t);
}
static ATerm y_14 (ATerm t)
{
  ATerm v_96 = NULL,w_96 = NULL,x_96 = NULL,y_96 = NULL;
  v_96 = t;
  t = term_d_39;
  t = get_config_0_0(t);
  w_96 = t;
  t = term_f_15;
  x_96 = t;
  t = (ATerm) ATinsert(ATempty, w_96);
  y_96 = t;
  t = SSL_printnl(x_96, y_96);
  t = v_96;
  return(t);
}
ATerm iowrap_3_0 (ATerm o_124 (ATerm), ATerm p_124 (ATerm), ATerm q_124 (ATerm), ATerm t)
{
  static ATerm r_14 (ATerm t)
  {
    ATerm z_41 = t;
    int b_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_124(t);
        LocalPopChoice(b_42);
      }
    else
      {
        t = z_41;
        {
          ATerm d_42 = t;
          int g_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(g_42);
            }
          else
            {
              t = d_42;
              {
                ATerm h_42 = t;
                int n_42 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(n_42);
                  }
                else
                  {
                    t = h_42;
                    {
                      ATerm o_42 = t;
                      int p_42 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(v_14, w_14, x_14, t);
                          LocalPopChoice(p_42);
                        }
                      else
                        {
                          t = o_42;
                          {
                            ATerm q_42 = t;
                            int r_42 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(r_42);
                              }
                            else
                              {
                                t = q_42;
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
  static ATerm u_14 (ATerm t)
  {
    ATerm z_96 = NULL,a_97 = NULL,b_97 = NULL;
    a_97 = t;
    {
      ATerm s_42 = t;
      int t_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm z_14 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((z_96 != NULL) && (z_96 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  z_96 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(z_14, t);
          LocalPopChoice(t_42);
        }
      else
        {
          t = s_42;
          t = term_u_42;
          z_96 = t;
        }
    }
    t = not_null(z_96);
    t = ReadFromFile_0_0(t);
    b_97 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_97, b_97);
    t = apply_strategy_1_0(o_124, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(r_14, q_124, t_14, u_14, t);
  return(t);
}
static ATerm a_15 (ATerm t)
{
  ATerm c_97 = NULL,d_97 = NULL,e_97 = NULL,f_97 = NULL,j_97 = NULL,m_97 = NULL,n_97 = NULL,o_97 = NULL,p_97 = NULL,q_97 = NULL,r_97 = NULL,s_97 = NULL,t_97 = NULL,u_97 = NULL,v_11 = NULL,u_11 = NULL,t_11 = NULL;
  u_97 = t;
  if(match_cons(t, sym__2))
    {
      d_97 = ATgetArgument(t, 0);
      e_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_97);
  c_97 = t;
  t = e_97;
  if(match_cons(t, sym_Specification_1))
    {
      o_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_97);
  n_97 = t;
  t = o_97;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_97 = ATgetFirst((ATermList) t);
      r_97 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_97);
  p_97 = t;
  t = r_97;
  t = Cons_2_0(b_15, c_15, t);
  s_97 = t;
  t = (ATerm) ATinsert(CheckATermList(s_97), q_97);
  t_11 = t;
  t = SSLsetAnnotations(t_11, p_97);
  t_97 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, t_97);
  u_11 = t;
  t = SSLsetAnnotations(u_11, n_97);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm x_42 = ATgetArgument(t, 0);
      if(((ATgetType(x_42) == AT_LIST) && !(ATisEmpty(x_42))))
        {
          j_97 = ATgetFirst((ATermList) x_42);
          {
            ATerm y_42 = (ATerm) ATgetNext((ATermList) x_42);
            if(((ATgetType(y_42) == AT_LIST) && !(ATisEmpty(y_42))))
              {
                ATerm z_42 = ATgetFirst((ATermList) y_42);
                if(match_cons(z_42, sym_Strategies_1))
                  {
                    m_97 = ATgetArgument(z_42, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm a_43 = (ATerm) ATgetNext((ATermList) y_42);
                  if(((ATgetType(a_43) != AT_LIST) || !(ATisEmpty(a_43))))
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
  t = h_8(j_97, m_97, t);
  f_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_97, f_97);
  v_11 = t;
  t = SSLsetAnnotations(v_11, c_97);
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm v_97 = NULL,w_97 = NULL,x_97 = NULL,y_97 = NULL,s_11 = NULL;
  y_97 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      w_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_97);
  v_97 = t;
  t = w_97;
  t = needed_defs_0_0(t);
  x_97 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, x_97);
  s_11 = t;
  t = SSLsetAnnotations(s_11, v_97);
  return(t);
}
static ATerm c_15 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(a_15, _fail, default_usage_0_0, t);
  return(t);
}
