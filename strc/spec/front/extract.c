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
ATerm term_p_44;
ATerm term_a_44;
ATerm term_z_43;
ATerm term_y_43;
ATerm term_x_43;
ATerm term_r_43;
ATerm term_q_43;
ATerm term_p_43;
ATerm term_c_43;
ATerm term_b_43;
ATerm term_a_43;
ATerm term_s_42;
ATerm term_j_42;
ATerm term_i_42;
ATerm term_h_42;
ATerm term_g_42;
ATerm term_e_42;
ATerm term_c_42;
ATerm term_b_42;
ATerm term_w_41;
ATerm term_v_41;
ATerm term_s_41;
ATerm term_q_41;
ATerm term_n_41;
ATerm term_l_41;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_z_40;
ATerm term_w_40;
ATerm term_e_40;
ATerm term_c_40;
ATerm term_y_39;
ATerm term_w_39;
ATerm term_j_39;
ATerm term_h_39;
ATerm term_d_39;
ATerm term_b_39;
ATerm term_w_38;
ATerm term_p_38;
ATerm term_k_38;
ATerm term_j_38;
ATerm term_d_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_y_37;
ATerm term_q_37;
ATerm term_g_37;
ATerm term_b_37;
ATerm term_y_36;
ATerm term_m_36;
ATerm term_j_36;
ATerm term_d_36;
ATerm term_a_36;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_o_35;
ATerm term_m_35;
ATerm term_x_33;
ATerm term_u_33;
ATerm term_p_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_a_28;
ATerm term_x_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_w_26;
ATerm term_m_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_y_19;
ATerm term_l_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_v_18;
ATerm term_b_18;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_g_17;
ATerm term_e_17;
ATerm term_s_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorNeeded", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_e_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("e_1", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_17);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_Sort_2, term_w_26, (ATerm) ATempty);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_ConstType_1, term_a_27);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("redefining external definition: ", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(sym__2, term_v_18, term_v_18);
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(sym__2, term_w_35, term_x_35);
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(sym__2, term_y_37, term_v_18);
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_18);
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(sym__2, term_b_39, term_j_16);
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(sym__2, term_w_39, term_y_39);
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(sym__2, term_b_42, term_j_16);
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(sym__2, term_g_42, term_j_16);
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(sym__2, term_q_41, term_j_16);
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(sym__2, term_x_43, term_j_16);
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm ConstructorNeeded_0_0 (ATerm t);
ATerm filter_1_0 (ATerm h_116 (ATerm), ATerm t);
static ATerm h_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm DeclareConstructorNeeded_0_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm q_8 (ATerm n_75, ATerm m_75, ATerm t);
static ATerm s_8 (ATerm i_58, ATerm j_58, ATerm k_58, ATerm t);
static ATerm z_0 (ATerm t);
ATerm DefinitionExists_0_0 (ATerm t);
ATerm sboundin_3_0 (ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm r_97 (ATerm), ATerm t);
static ATerm b_1 (ATerm t);
static ATerm z_8 (ATerm v_25, ATerm u_25, ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
ATerm free_vars2_4_0 (ATerm o_118 (ATerm), ATerm p_118 (ATerm), ATerm q_118 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm r_118 (ATerm), ATerm t);
static ATerm r_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm svars_arity_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm a_130 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm f_9 (ATerm f_74, ATerm g_74, ATerm h_74, ATerm t);
static ATerm k_40 (ATerm t_39, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm f_104 (ATerm), ATerm g_104 (ATerm), ATerm t);
static ATerm k_5 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm o_99 (ATerm), ATerm t);
static ATerm j_9 (ATerm s_69, ATerm t_69, ATerm u_69, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm k_98 (ATerm), ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm tuple_unzip_1_0 (ATerm m_102 (ATerm), ATerm t);
ATerm MkDistApplication_0_0 (ATerm t);
static ATerm k_9 (ATerm x_40, ATerm y_40, ATerm t);
static ATerm b_6 (ATerm t);
static ATerm d_6 (ATerm t);
ATerm copy_1_0 (ATerm t_115 (ATerm), ATerm t);
static ATerm l_9 (ATerm l_57, ATerm m_57, ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm r_60 (ATerm h_55, ATerm i_55, ATerm j_55, ATerm k_55, ATerm t);
static ATerm u_60 (ATerm d_58, ATerm e_58, ATerm f_58, ATerm g_58, ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm DefineCongruence_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm z_110 (ATerm), ATerm t);
ATerm giving_up_0_0 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
ATerm JoinDefsExt_0_0 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm s_7 (ATerm t);
ATerm choices_0_0 (ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm c_100 (ATerm), ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm x_7 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
ATerm JoinDefs2_0_0 (ATerm t);
static ATerm i_63 (ATerm m_61, ATerm n_61, ATerm q_61, ATerm t_61, ATerm t);
ATerm get_definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm d_111 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm j_65 (ATerm x_64, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm r_9 (ATerm k_112 (ATerm), ATerm y_45, ATerm x_45, ATerm t);
ATerm genzip_4_0 (ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm w_9 (ATerm l_694, ATerm q_694, ATerm z_67, ATerm t);
static ATerm e_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm k_70 (ATerm f_68, ATerm g_68, ATerm h_68, ATerm t);
static ATerm i_9 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm y_9 (ATerm w_129 (ATerm), ATerm x_129 (ATerm), ATerm y_129 (ATerm), ATerm a_69, ATerm x_68, ATerm f_69, ATerm b_69, ATerm y_68, ATerm z_68, ATerm t);
ATerm GnNextChangeGraph_3_0 (ATerm w_129 (ATerm), ATerm x_129 (ATerm), ATerm y_129 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm t);
ATerm for_3_0 (ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm t);
static ATerm q_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm z_32 (ATerm s_31, ATerm t_31, ATerm t);
ATerm extract_needed_defs_0_0 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm c_11 (ATerm t);
ATerm RegisterExtSDefInl_0_0 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
ATerm RegisterExtSDef_0_0 (ATerm t);
static ATerm b_10 (ATerm d_110 (ATerm), ATerm f_42, ATerm d_42, ATerm t);
static ATerm c_10 (ATerm s_112 (ATerm), ATerm t_112 (ATerm), ATerm e_46, ATerm d_46, ATerm t);
static ATerm d_10 (ATerm p_112 (ATerm), ATerm a_46, ATerm z_45, ATerm t);
ATerm Arities_0_0 (ATerm t);
static ATerm f_10 (ATerm y_42, ATerm z_42, ATerm t);
ATerm Definitions_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm f_115 (ATerm), ATerm g_115 (ATerm), ATerm h_115 (ATerm), ATerm t);
static ATerm b_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
ATerm RegisterSDefT_0_0 (ATerm t);
static ATerm o_12 (ATerm t);
ATerm needed_defs_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm p_83 (ATerm), ATerm q_83 (ATerm), ATerm t);
static ATerm i_10 (ATerm j_33, ATerm k_33, ATerm t);
static ATerm j_10 (ATerm e_32, ATerm f_32, ATerm t);
static ATerm l_10 (ATerm u_105 (ATerm), ATerm h_239, ATerm i_32, ATerm t);
static ATerm k_10 (ATerm a_32, ATerm b_32, ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm u_12 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm o_124 (ATerm), ATerm t);
static ATerm g_86 (ATerm a_86, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm m_10 (ATerm g_32, ATerm t);
static ATerm n_10 (ATerm l_33, ATerm m_33, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm r_87 (ATerm q_86, ATerm t);
static ATerm s_87 (ATerm u_86, ATerm v_86, ATerm w_86, ATerm t);
static ATerm t_87 (ATerm e_87, ATerm f_87, ATerm g_87, ATerm t);
static ATerm o_10 (ATerm t);
static ATerm y_12 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm x_110 (ATerm), ATerm t);
static ATerm h_10 (ATerm d_55, ATerm e_55, ATerm t);
ATerm debug_1_0 (ATerm s_105 (ATerm), ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm l_107 (ATerm), ATerm t);
static ATerm b_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm x_13 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm c_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm u_10 (ATerm l_37, ATerm n_37, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm m_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm o_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm s_10 (ATerm n_42, ATerm o_42, ATerm m_42, ATerm t);
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm s_14 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm p_10 (ATerm r_40, ATerm s_40, ATerm t);
ATerm foldr_2_0 (ATerm d_115 (ATerm), ATerm e_115 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm u_14 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm k_107 (ATerm), ATerm t);
static ATerm v_14 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm x_14 (ATerm t);
ATerm need_help_1_0 (ATerm m_125 (ATerm), ATerm t);
ATerm map_1_0 (ATerm n_110 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm r_10 (ATerm e_44, ATerm f_44, ATerm t);
static ATerm z_14 (ATerm t);
static ATerm a_15 (ATerm t);
static ATerm b_15 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm d_15 (ATerm t);
static ATerm f_15 (ATerm t);
static ATerm g_15 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm j_15 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm p_127 (ATerm), ATerm t);
static ATerm l_15 (ATerm t);
static ATerm m_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm p_15 (ATerm t);
ATerm parse_options_1_0 (ATerm o_127 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm o_125 (ATerm), ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm t);
static ATerm s_15 (ATerm t);
static ATerm u_15 (ATerm t);
static ATerm v_15 (ATerm t);
static ATerm w_15 (ATerm t);
static ATerm x_15 (ATerm t);
ATerm iowrap_3_0 (ATerm x_124 (ATerm), ATerm y_124 (ATerm), ATerm z_124 (ATerm), ATerm t);
static ATerm b_16 (ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL,j_0 = NULL;
  a_0 = t;
  t = term_j_16;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_k_16;
  e_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_16), b_0), term_l_16);
  j_0 = t;
  t = SSL_printnl(e_0, j_0);
  t = term_n_16;
  c_0 = t;
  t = SSL_exit(c_0);
  t = a_0;
  return(t);
}
ATerm ConstructorNeeded_0_0 (ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL,u_1 = NULL;
  s_1 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      t_1 = ATgetArgument(t, 0);
      u_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_16 = t;
    int q_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_1 = NULL,z_1 = NULL;
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, t_1, (ATerm) ATempty);
        y_1 = t;
        t = term_s_16;
        z_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_16, (ATerm) ATmakeAppl(sym_OpDecl_2, t_1, (ATerm) ATempty));
        t = f_10(z_1, y_1, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm t_16 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) t_16) != ATmakeSymbol("g_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, t_1, u_1);
        LocalPopChoice(q_16);
      }
    else
      {
        t = p_16;
        {
          ATerm x_3 = NULL,y_3 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, t_1, (ATerm) ATempty);
          x_3 = t;
          t = term_s_16;
          y_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_s_16, (ATerm) ATmakeAppl(sym_OpDecl_2, t_1, (ATerm) ATempty));
          t = f_10(y_3, x_3, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm v_16 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) v_16) != ATmakeSymbol("e_1", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, t_1, u_1);
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm h_116 (ATerm), ATerm t)
{
  ATerm l_2 = NULL,m_2 = NULL,n_2 = NULL;
  l_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_2;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_2 = ATgetFirst((ATermList) t);
          n_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm w_16 = t;
        int y_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_4 = NULL,x_4 = NULL,y_4 = NULL,f_0 = NULL;
            t = SSLgetAnnotations(l_2);
            d_4 = t;
            t = m_2;
            t = h_116(t);
            x_4 = t;
            t = n_2;
            t = filter_1_0(h_116, t);
            y_4 = t;
            t = (ATerm) ATinsert(CheckATermList(y_4), x_4);
            f_0 = t;
            t = SSLsetAnnotations(f_0, d_4);
            LocalPopChoice(y_16);
          }
        else
          {
            t = w_16;
            t = n_2;
            t = filter_1_0(h_116, t);
          }
      }
    }
  return(t);
}
static ATerm h_0 (ATerm t)
{
  t = term_s_16;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_s_16;
  return(t);
}
ATerm DeclareConstructorNeeded_0_0 (ATerm t)
{
  ATerm r_2 = NULL,t_2 = NULL;
  r_2 = t;
  {
    ATerm a_17 = t;
    int b_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Cong_2))
          {
            t_2 = ATgetArgument(t, 0);
            {
              ATerm d_17 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(b_17);
        {
          ATerm y_2 = NULL,z_2 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, t_2, (ATerm) ATempty);
          y_2 = t;
          t = term_g_17;
          z_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, t_2, (ATerm) ATempty), term_g_17);
          t = b_10(h_0, y_2, z_2, t);
          t = r_2;
        }
      }
    else
      {
        t = a_17;
        {
          ATerm c_3 = NULL,d_3 = NULL;
          if(match_cons(t, sym_Op_2))
            {
              t_2 = ATgetArgument(t, 0);
              {
                ATerm h_17 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, t_2, (ATerm) ATempty);
          c_3 = t;
          t = term_j_17;
          d_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, t_2, (ATerm) ATempty), term_j_17);
          t = b_10(v_0, c_3, d_3, t);
          t = r_2;
        }
      }
  }
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm k_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareConstructorNeeded_0_0(t);
      LocalPopChoice(l_17);
    }
  else
    {
      t = k_17;
    }
  return(t);
}
static ATerm q_8 (ATerm n_75, ATerm m_75, ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL,h_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,o_0 = NULL,m_0 = NULL,l_0 = NULL;
  t = m_75;
  t = topdown_1_0(x_0, t);
  t = n_75;
  if(match_cons(t, sym_Signature_1))
    {
      g_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_75);
  f_3 = t;
  t = g_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_3 = ATgetFirst((ATermList) t);
      l_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_3);
  j_3 = t;
  t = k_3;
  if(match_cons(t, sym_Constructors_1))
    {
      p_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_3);
  n_3 = t;
  t = p_3;
  t = filter_1_0(ConstructorNeeded_0_0, t);
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym_Constructors_1, q_3);
  l_0 = t;
  t = SSLsetAnnotations(l_0, n_3);
  r_3 = t;
  t = l_3;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_3), r_3);
  m_0 = t;
  t = SSLsetAnnotations(m_0, j_3);
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, m_3);
  o_0 = t;
  t = SSLsetAnnotations(o_0, f_3);
  h_3 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, m_75)), h_3));
  return(t);
}
static ATerm s_8 (ATerm i_58, ATerm j_58, ATerm k_58, ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL;
  t = term_k_16;
  v_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_17), k_58), term_o_17), j_58), term_n_17), i_58), term_m_17);
  w_3 = t;
  t = SSL_printnl(v_3, w_3);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_17), k_58), term_o_17), j_58), term_n_17), i_58), term_m_17);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_17 = ATgetArgument(t, 0);
      if(((ATgetType(q_17) != AT_INT) || (ATgetInt((ATermInt) q_17) != 0)))
        _fail(t);
      {
        ATerm r_17 = ATgetArgument(t, 1);
        if(((ATgetType(r_17) != AT_INT) || (ATgetInt((ATermInt) r_17) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL;
  q_4 = t;
  if(match_cons(t, sym__2))
    {
      r_4 = ATgetArgument(t, 0);
      s_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_4;
  if(match_cons(t, sym__2))
    {
      t_4 = ATgetArgument(t, 0);
      u_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_4;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = u_4;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm t_17 = t;
    int u_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_5 = NULL,r_5 = NULL;
        t = r_4;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm v_17 = ATgetFirst((ATermList) t);
            ATerm w_17 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(w_17) == AT_LIST) && !(ATisEmpty(w_17))))
              {
                ATerm x_17 = ATgetFirst((ATermList) w_17);
                ATerm y_17 = (ATerm) ATgetNext((ATermList) w_17);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm z_17 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(z_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = z_17;
            }
        }
        t = term_k_16;
        q_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, r_4), term_b_18);
        r_5 = t;
        t = SSL_printnl(q_5, r_5);
        t = (ATerm) ATinsert(ATinsert(ATempty, r_4), term_b_18);
        t = giving_up_0_0(t);
        LocalPopChoice(u_17);
      }
    else
      {
        t = t_17;
        {
          ATerm y_5 = NULL,z_5 = NULL;
          t = r_4;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm c_18 = ATgetFirst((ATermList) t);
              if(match_cons(c_18, sym__2))
                {
                  y_5 = ATgetArgument(c_18, 0);
                  z_5 = ATgetArgument(c_18, 1);
                }
              else
                _fail(t);
              {
                ATerm d_18 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(d_18) != AT_LIST) || !(ATisEmpty(d_18))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, r_4, (ATerm) ATmakeAppl(sym__2, y_5, z_5));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, r_4, (ATerm) ATmakeAppl(sym__2, y_5, z_5));
        }
      }
  }
  return(t);
}
ATerm sboundin_3_0 (ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm r_97 (ATerm), ATerm t)
{
  ATerm d_8 = NULL,e_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL;
  g_8 = t;
  if(match_cons(t, sym_Let_2))
    {
      h_8 = ATgetArgument(t, 0);
      i_8 = ATgetArgument(t, 1);
      {
        ATerm h_6 = NULL,l_6 = NULL,p_6 = NULL,i_1 = NULL;
        t = SSLgetAnnotations(g_8);
        h_6 = t;
        t = h_8;
        t = p_97(t);
        l_6 = t;
        t = i_8;
        t = p_97(t);
        p_6 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, l_6, p_6);
        i_1 = t;
        t = SSLsetAnnotations(i_1, h_6);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          h_8 = ATgetArgument(t, 0);
          i_8 = ATgetArgument(t, 1);
          d_8 = ATgetArgument(t, 2);
          {
            ATerm y_7 = NULL,k_8 = NULL,n_8 = NULL,o_8 = NULL,j_1 = NULL;
            t = SSLgetAnnotations(g_8);
            y_7 = t;
            t = h_8;
            t = r_97(t);
            k_8 = t;
            t = i_8;
            t = r_97(t);
            n_8 = t;
            t = d_8;
            t = p_97(t);
            o_8 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, k_8, n_8, o_8);
            j_1 = t;
            t = SSLsetAnnotations(j_1, y_7);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              h_8 = ATgetArgument(t, 0);
              i_8 = ATgetArgument(t, 1);
              d_8 = ATgetArgument(t, 2);
              e_8 = ATgetArgument(t, 3);
              {
                ATerm d_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,k_1 = NULL;
                t = SSLgetAnnotations(g_8);
                d_9 = t;
                t = h_8;
                t = r_97(t);
                m_9 = t;
                t = i_8;
                t = r_97(t);
                n_9 = t;
                t = d_8;
                t = r_97(t);
                o_9 = t;
                t = e_8;
                t = p_97(t);
                p_9 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, m_9, n_9, o_9, p_9);
                k_1 = t;
                t = SSLsetAnnotations(k_1, d_9);
              }
            }
          else
            {
              ATerm q_10 = NULL,y_10 = NULL,a_11 = NULL,l_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  h_8 = ATgetArgument(t, 0);
                  i_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(g_8);
              q_10 = t;
              t = h_8;
              t = r_97(t);
              y_10 = t;
              t = i_8;
              t = p_97(t);
              a_11 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, y_10, a_11);
              l_1 = t;
              t = SSLsetAnnotations(l_1, q_10);
            }
        }
    }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm v_10 = NULL;
  ATerm e_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          v_10 = ATgetArgument(t, 0);
          {
            ATerm g_18 = ATgetArgument(t, 1);
          }
          {
            ATerm h_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_18);
      t = v_10;
    }
  else
    {
      t = e_18;
      if(match_cons(t, sym_SDefT_4))
        {
          v_10 = ATgetArgument(t, 0);
          {
            ATerm i_18 = ATgetArgument(t, 1);
          }
          {
            ATerm j_18 = ATgetArgument(t, 2);
          }
          {
            ATerm k_18 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = v_10;
    }
  return(t);
}
static ATerm z_8 (ATerm v_25, ATerm u_25, ATerm t)
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
  ATerm c_12 = NULL,e_12 = NULL;
  if(match_cons(t, sym__2))
    {
      c_12 = ATgetArgument(t, 0);
      e_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_10(m_1, c_12, e_12, t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm f_12 = NULL;
  if(match_cons(t, sym__2))
    {
      f_12 = ATgetArgument(t, 0);
      if((f_12 != ATgetArgument(t, 1)))
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
  ATerm v_12 = NULL,w_12 = NULL;
  if(match_cons(t, sym__2))
    {
      v_12 = ATgetArgument(t, 0);
      w_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_10(p_1, v_12, w_12, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm x_12 = NULL;
  if(match_cons(t, sym__2))
    {
      x_12 = ATgetArgument(t, 0);
      if((x_12 != ATgetArgument(t, 1)))
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
  ATerm q_12 = NULL;
  if(match_cons(t, sym__2))
    {
      q_12 = ATgetArgument(t, 0);
      if((q_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm o_118 (ATerm), ATerm p_118 (ATerm), ATerm q_118 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm r_118 (ATerm), ATerm t)
{
  static ATerm r_12 (ATerm t)
  {
    ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL;
    x_11 = t;
    {
      ATerm l_18 = t;
      int m_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_118(t);
          LocalPopChoice(m_18);
        }
      else
        {
          t = l_18;
          t = (ATerm) ATempty;
        }
    }
    v_11 = t;
    t = x_11;
    {
      ATerm n_18 = t;
      int o_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_11 = NULL,s_11 = NULL,t_11 = NULL;
          t = p_118(t);
          y_11 = t;
          t = x_11;
          {
            static ATerm c_1 (ATerm t)
            {
              ATerm l_11 = NULL;
              t = r_12(t);
              l_11 = t;
              t = (ATerm) ATmakeAppl(sym__2, l_11, y_11);
              t = r_9(r_118, l_11, y_11, t);
              return(t);
            }
            t = q_118(c_1, r_12, d_1, t);
          }
          t_11 = t;
          t = SSL_explode_term(t_11);
          if(match_cons(t, sym__2))
            {
              ATerm q_18 = ATgetArgument(t, 0);
              s_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_11;
          t = foldr_3_0(f_1, h_1, _id, t);
          LocalPopChoice(o_18);
        }
      else
        {
          t = n_18;
          {
            ATerm n_12 = NULL;
            t = SSL_explode_term(x_11);
            if(match_cons(t, sym__2))
              {
                ATerm r_18 = ATgetArgument(t, 0);
                n_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = n_12;
            t = foldr_3_0(n_1, o_1, r_12, t);
          }
        }
    }
    w_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_11, w_11);
    t = d_10(q_1, v_11, w_11, t);
    return(t);
  }
  t = r_12(t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL,n_13 = NULL,s_13 = NULL,t_13 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm s_18 = ATgetArgument(t, 0);
      if(match_cons(s_18, sym_SVar_1))
        {
          j_13 = ATgetArgument(s_18, 0);
        }
      else
        _fail(t);
      k_13 = ATgetArgument(t, 1);
      n_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = k_13;
  t = foldr_3_0(f_2, g_2, h_2, t);
  s_13 = t;
  t = n_13;
  t = foldr_3_0(i_2, j_2, k_2, t);
  t_13 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_13, (ATerm) ATmakeAppl(sym__2, s_13, t_13)));
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL;
  f_14 = t;
  if(match_cons(t, sym_Let_2))
    {
      g_14 = ATgetArgument(t, 0);
      h_14 = ATgetArgument(t, 1);
      t = f_14;
      t = z_8(g_14, h_14, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          g_14 = ATgetArgument(t, 0);
          h_14 = ATgetArgument(t, 1);
          i_14 = ATgetArgument(t, 2);
          t = h_14;
          t = map_1_0(o_2, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              g_14 = ATgetArgument(t, 0);
              h_14 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, g_14);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  g_14 = ATgetArgument(t, 0);
                  h_14 = ATgetArgument(t, 1);
                  i_14 = ATgetArgument(t, 2);
                  j_14 = ATgetArgument(t, 3);
                  t = h_14;
                  t = map_1_0(q_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      g_14 = ATgetArgument(t, 0);
                      h_14 = ATgetArgument(t, 1);
                      i_14 = ATgetArgument(t, 2);
                      j_14 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_14;
                  t = map_1_0(s_2, t);
                }
            }
        }
    }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm c_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_18 = ATgetArgument(t, 0);
      if(match_cons(t_18, sym__2))
        {
          c_16 = ATgetArgument(t_18, 0);
          {
            ATerm u_18 = ATgetArgument(t_18, 1);
          }
        }
      else
        _fail(t);
      if((c_16 != ATgetArgument(t, 1)))
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
  t = term_v_18;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm w_13 = NULL,a_14 = NULL;
  if(match_cons(t, sym__2))
    {
      w_13 = ATgetArgument(t, 0);
      a_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(w_13, a_14, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_n_16;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_v_18;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL;
  if(match_cons(t, sym__2))
    {
      d_14 = ATgetArgument(t, 0);
      e_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(d_14, e_14, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_n_16;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm r_14 = NULL;
  ATerm w_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_14 = ATgetArgument(t, 0);
          {
            ATerm y_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_18);
      t = r_14;
    }
  else
    {
      t = w_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_14;
    }
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm h_15 = NULL;
  ATerm z_18 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_15 = ATgetArgument(t, 0);
          {
            ATerm c_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_19);
      t = h_15;
    }
  else
    {
      t = z_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_15;
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm y_15 = NULL;
  ATerm d_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_15 = ATgetArgument(t, 0);
          {
            ATerm f_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_19);
      t = y_15;
    }
  else
    {
      t = d_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_15;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(r_1, x_1, sboundin_3_0, b_2, t);
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm g_26 = NULL,k_26 = NULL,p_26 = NULL;
  k_26 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      p_26 = ATgetArgument(t, 0);
      g_26 = ATgetArgument(t, 1);
      {
        ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL,x_26 = NULL;
        t = k_26;
        t = new_0_0(t);
        s_26 = t;
        t = new_0_0(t);
        t_26 = t;
        t = new_0_0(t);
        u_26 = t;
        t = new_0_0(t);
        x_26 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_26), u_26), t_26), s_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, s_26), (ATerm) ATmakeAppl(sym_Var_1, u_26))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, p_26, (ATerm)ATmakeAppl(sym_Var_1, s_26), (ATerm) ATmakeAppl(sym_Var_1, t_26)), (ATerm) ATmakeAppl(sym_BAM_3, g_26, (ATerm)ATmakeAppl(sym_Var_1, u_26), (ATerm) ATmakeAppl(sym_Var_1, x_26)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_g_19, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, x_26)), (ATerm) ATmakeAppl(sym_Var_1, t_26))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          p_26 = ATgetArgument(t, 0);
          {
            ATerm y_26 = NULL,z_26 = NULL,d_27 = NULL,i_27 = NULL;
            t = k_26;
            t = new_0_0(t);
            d_27 = t;
            t = p_26;
            {
              static ATerm u_2 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((y_26 != NULL) && (y_26 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      y_26 = ATgetArgument(t, 0);
                    if(((z_26 != NULL) && (z_26 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      z_26 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, d_27);
                return(t);
              }
              t = oncetd_1_0(u_2, t);
            }
            i_27 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_g_19, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_26)), not_null(y_26))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_27)), (ATerm) ATmakeAppl(sym_Build_1, i_27))));
          }
        }
      else
        {
          ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              p_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_26;
          t = new_0_0(t);
          q_27 = t;
          t = new_0_0(t);
          r_27 = t;
          t = p_26;
          {
            static ATerm v_2 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((o_27 != NULL) && (o_27 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    o_27 = ATgetArgument(t, 0);
                  if(((p_27 != NULL) && (p_27 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    p_27 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, q_27);
              return(t);
            }
            t = oncetd_1_0(v_2, t);
          }
          s_27 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, s_27), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_27)), (ATerm) ATmakeAppl(sym_PrimT_3, term_h_19, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, r_27))))), (ATerm)ATmakeAppl(sym_Var_1, q_27), (ATerm) ATmakeAppl(sym_Op_2, term_i_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_27)), not_null(o_27)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL;
  y_27 = t;
  if(match_cons(t, sym_Match_1))
    {
      z_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm j_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL,f_28 = NULL;
        t = y_27;
        t = new_0_0(t);
        d_28 = t;
        t = z_27;
        {
          static ATerm w_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((b_28 != NULL) && (b_28 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  b_28 = ATgetArgument(t, 0);
                if(((c_28 != NULL) && (c_28 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  c_28 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, d_28), b_28);
            return(t);
          }
          t = pat_td_1_0(w_2, t);
        }
        f_28 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, f_28), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_l_19, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, d_28))), (ATerm) ATmakeAppl(sym_Match_1, not_null(c_28))))));
        LocalPopChoice(k_19);
      }
    else
      {
        t = j_19;
        {
          ATerm n_19 = t;
          int o_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_28 = NULL,j_28 = NULL,m_28 = NULL;
              t = y_27;
              t = new_0_0(t);
              j_28 = t;
              t = z_27;
              {
                static ATerm x_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((i_28 != NULL) && (i_28 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        i_28 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, j_28);
                  return(t);
                }
                t = pat_td_1_0(x_2, t);
              }
              m_28 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, m_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, j_28)), not_null(i_28))));
              LocalPopChoice(o_19);
            }
          else
            {
              t = n_19;
              {
                ATerm p_28 = NULL,r_28 = NULL,v_28 = NULL,y_28 = NULL;
                t = y_27;
                t = new_0_0(t);
                v_28 = t;
                t = z_27;
                {
                  static ATerm a_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((r_28 != NULL) && (r_28 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          r_28 = ATgetArgument(t, 0);
                        if(((p_28 != NULL) && (p_28 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          p_28 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, v_28);
                    return(t);
                  }
                  t = pat_td_1_0(a_3, t);
                }
                y_28 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, y_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, v_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(p_28)), not_null(r_28)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm a_130 (ATerm), ATerm t)
{
  ATerm p_19 = t;
  int q_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_130(t);
      LocalPopChoice(q_19);
    }
  else
    {
      t = p_19;
      {
        ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL;
        r_33 = t;
        if(match_cons(t, sym_Op_2))
          {
            s_33 = ATgetArgument(t, 0);
            t_33 = ATgetArgument(t, 1);
            {
              ATerm n_15 = NULL,z_15 = NULL,v_1 = NULL;
              t = SSLgetAnnotations(r_33);
              n_15 = t;
              t = t_33;
              {
                static ATerm b_3 (ATerm t)
                {
                  t = pat_td_1_0(a_130, t);
                  return(t);
                }
                t = fetch_1_0(b_3, t);
              }
              z_15 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, s_33, z_15);
              v_1 = t;
              t = SSLsetAnnotations(v_1, n_15);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                s_33 = ATgetArgument(t, 0);
                t_33 = ATgetArgument(t, 1);
                {
                  ATerm r_19 = t;
                  int s_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_16 = NULL,r_16 = NULL,w_1 = NULL;
                      t = SSLgetAnnotations(r_33);
                      o_16 = t;
                      t = t_33;
                      t = pat_td_1_0(a_130, t);
                      r_16 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, s_33, r_16);
                      w_1 = t;
                      t = SSLsetAnnotations(w_1, o_16);
                      LocalPopChoice(s_19);
                    }
                  else
                    {
                      t = r_19;
                      {
                        ATerm c_17 = NULL,f_17 = NULL,a_2 = NULL;
                        t = SSLgetAnnotations(r_33);
                        c_17 = t;
                        t = s_33;
                        t = pat_td_1_0(a_130, t);
                        f_17 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, f_17, t_33);
                        a_2 = t;
                        t = SSLsetAnnotations(a_2, c_17);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    s_33 = ATgetArgument(t, 0);
                    t_33 = ATgetArgument(t, 1);
                    q_33 = ATgetArgument(t, 2);
                    {
                      ATerm s_17 = NULL,a_18 = NULL,c_2 = NULL;
                      t = SSLgetAnnotations(r_33);
                      s_17 = t;
                      t = q_33;
                      {
                        static ATerm e_3 (ATerm t)
                        {
                          t = pat_td_1_0(a_130, t);
                          return(t);
                        }
                        t = fetch_1_0(e_3, t);
                      }
                      a_18 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, s_33, t_33, a_18);
                      c_2 = t;
                      t = SSLsetAnnotations(c_2, s_17);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        s_33 = ATgetArgument(t, 0);
                        t_33 = ATgetArgument(t, 1);
                        q_33 = ATgetArgument(t, 2);
                        {
                          ATerm p_18 = NULL,a_19 = NULL,d_2 = NULL;
                          t = SSLgetAnnotations(r_33);
                          p_18 = t;
                          t = q_33;
                          {
                            static ATerm i_3 (ATerm t)
                            {
                              t = pat_td_1_0(a_130, t);
                              return(t);
                            }
                            t = fetch_1_0(i_3, t);
                          }
                          a_19 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, s_33, t_33, a_19);
                          d_2 = t;
                          t = SSLsetAnnotations(d_2, p_18);
                        }
                      }
                    else
                      {
                        ATerm t_19 = NULL,z_19 = NULL,e_2 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            s_33 = ATgetArgument(t, 0);
                            t_33 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(r_33);
                        t_19 = t;
                        t = t_33;
                        t = pat_td_1_0(a_130, t);
                        z_19 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, s_33, z_19);
                        e_2 = t;
                        t = SSLsetAnnotations(e_2, t_19);
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
  ATerm i_34 = NULL,j_34 = NULL;
  i_34 = t;
  if(match_cons(t, sym_Build_1))
    {
      j_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm u_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_34 = NULL,l_34 = NULL,t_34 = NULL,u_34 = NULL;
        t = i_34;
        t = new_0_0(t);
        t_34 = t;
        t = j_34;
        {
          static ATerm o_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((k_34 != NULL) && (k_34 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_34 = ATgetArgument(t, 0);
                if(((l_34 != NULL) && (l_34 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  l_34 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, t_34);
            return(t);
          }
          t = pat_td_1_0(o_3, t);
        }
        u_34 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_34), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_y_19, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_34)), not_null(k_34))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, t_34)))), (ATerm) ATmakeAppl(sym_Build_1, u_34)));
        LocalPopChoice(x_19);
      }
    else
      {
        t = u_19;
        {
          ATerm a_20 = t;
          int b_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_34 = NULL,b_35 = NULL,c_35 = NULL;
              t = i_34;
              t = new_0_0(t);
              b_35 = t;
              t = j_34;
              {
                static ATerm s_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((x_34 != NULL) && (x_34 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        x_34 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, b_35);
                  return(t);
                }
                t = pat_td_1_0(s_3, t);
              }
              c_35 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_35), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_34), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_35)))), (ATerm) ATmakeAppl(sym_Build_1, c_35)));
              LocalPopChoice(b_20);
            }
          else
            {
              t = a_20;
              {
                ATerm f_35 = NULL,g_35 = NULL,n_35 = NULL,p_35 = NULL;
                t = i_34;
                t = new_0_0(t);
                n_35 = t;
                t = j_34;
                {
                  static ATerm t_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((f_35 != NULL) && (f_35 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          f_35 = ATgetArgument(t, 0);
                        if(((g_35 != NULL) && (g_35 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          g_35 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, n_35);
                    return(t);
                  }
                  t = pat_td_1_0(t_3, t);
                }
                p_35 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_35), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(f_35), not_null(g_35), (ATerm) ATmakeAppl(sym_Var_1, n_35))), (ATerm) ATmakeAppl(sym_Build_1, p_35)));
              }
            }
        }
      }
  }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm y_35 = NULL,b_36 = NULL,c_36 = NULL,f_36 = NULL,g_36 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      f_36 = ATgetArgument(t, 0);
      g_36 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, f_36, g_36);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          f_36 = ATgetArgument(t, 0);
          t = f_36;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              y_35 = ATgetFirst((ATermList) t);
              b_36 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, y_35, (ATerm) ATmakeAppl(sym_LChoices_1, b_36));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_j_20;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              f_36 = ATgetArgument(t, 0);
              t = f_36;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_35 = ATgetFirst((ATermList) t);
                  b_36 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, y_35, (ATerm) ATmakeAppl(sym_Choices_1, b_36));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_j_20;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  f_36 = ATgetArgument(t, 0);
                  t = f_36;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      y_35 = ATgetFirst((ATermList) t);
                      b_36 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_35, (ATerm) ATmakeAppl(sym_Seqs_1, b_36));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_k_20;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      f_36 = ATgetArgument(t, 0);
                      g_36 = ATgetArgument(t, 1);
                      c_36 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, g_36, (ATerm) ATmakeAppl(sym_Op_2, term_i_19, (ATerm) ATinsert(ATinsert(ATempty, c_36), f_36)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          f_36 = ATgetArgument(t, 0);
                          g_36 = ATgetArgument(t, 1);
                          c_36 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, c_36)), f_36), (ATerm) ATmakeAppl(sym_Build_1, g_36)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              f_36 = ATgetArgument(t, 0);
                              g_36 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_36, (ATerm) ATmakeAppl(sym_Match_1, g_36));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  f_36 = ATgetArgument(t, 0);
                                  g_36 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, f_36), g_36);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      f_36 = ATgetArgument(t, 0);
                                      g_36 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, g_36), f_36);
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
static ATerm u_3 (ATerm t)
{
  ATerm l_20 = t;
  if((PushChoice() == 0))
    {
      ATerm o_38 = NULL,q_38 = NULL,r_38 = NULL,p_2 = NULL;
      r_38 = t;
      if(match_cons(t, sym_Var_1))
        {
          q_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_38);
      o_38 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, q_38);
      p_2 = t;
      t = SSLsetAnnotations(p_2, o_38);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_20;
    }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_20;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_38 = ATgetFirst((ATermList) t);
      t_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_38, t_38);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL,x_38 = NULL,y_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_20 = ATgetArgument(t, 0);
      if(match_cons(n_20, sym__2))
        {
          u_38 = ATgetArgument(n_20, 0);
          v_38 = ATgetArgument(n_20, 1);
        }
      else
        _fail(t);
      {
        ATerm o_20 = ATgetArgument(t, 1);
        if(match_cons(o_20, sym__2))
          {
            x_38 = ATgetArgument(o_20, 0);
            y_38 = ATgetArgument(o_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_38), u_38), (ATerm) ATinsert(CheckATermList(y_38), v_38));
  return(t);
}
static ATerm e_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_20;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm z_38 = NULL,c_39 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_38 = ATgetFirst((ATermList) t);
      c_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_38, c_39);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL,p_39 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_20 = ATgetArgument(t, 0);
      if(match_cons(p_20, sym__2))
        {
          e_39 = ATgetArgument(p_20, 0);
          f_39 = ATgetArgument(p_20, 1);
        }
      else
        _fail(t);
      {
        ATerm q_20 = ATgetArgument(t, 1);
        if(match_cons(q_20, sym__2))
          {
            g_39 = ATgetArgument(q_20, 0);
            p_39 = ATgetArgument(q_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_39), e_39), (ATerm) ATinsert(CheckATermList(p_39), f_39));
  return(t);
}
static ATerm f_9 (ATerm f_74, ATerm g_74, ATerm h_74, ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,m_38 = NULL,n_38 = NULL,z_3 = NULL;
  t = h_74;
  t = fetch_1_0(u_3, t);
  t = h_74;
  t = genzip_4_0(a_4, b_4, c_4, LiftPrimArg_0_0, t);
  n_38 = t;
  if(match_cons(t, sym__2))
    {
      g_38 = ATgetArgument(t, 0);
      h_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_38);
  f_38 = t;
  t = g_38;
  t = concat_0_0(t);
  i_38 = t;
  t = h_38;
  t = genzip_4_0(e_4, f_4, g_4, _id, t);
  m_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_38, m_38);
  z_3 = t;
  t = SSLsetAnnotations(z_3, f_38);
  if(match_cons(t, sym__2))
    {
      w_37 = ATgetArgument(t, 0);
      {
        ATerm r_20 = ATgetArgument(t, 1);
        if(match_cons(r_20, sym__2))
          {
            x_37 = ATgetArgument(r_20, 0);
            e_38 = ATgetArgument(r_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, w_37, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_37), (ATerm) ATmakeAppl(sym_CallT_3, f_74, g_74, e_38)));
  return(t);
}
static ATerm k_40 (ATerm t_39, ATerm t)
{
  ATerm x_39 = NULL;
  t = t_39;
  {
    ATerm s_20 = t;
    if((PushChoice() == 0))
      {
        ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL,i_4 = NULL;
        b_40 = t;
        if(match_cons(t, sym_Var_1))
          {
            a_40 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_40);
        z_39 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, a_40);
        i_4 = t;
        t = SSLsetAnnotations(i_4, z_39);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_20;
      }
  }
  t = new_0_0(t);
  x_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, x_39), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_39), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, x_39)))), (ATerm) ATmakeAppl(sym_Var_1, x_39)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL;
  h_40 = t;
  if(match_cons(t, sym_Var_1))
    {
      i_40 = ATgetArgument(t, 0);
      {
        ATerm t_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_40(h_40, t);
            LocalPopChoice(u_20);
          }
        else
          {
            t = t_20;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_k_20, (ATerm) ATmakeAppl(sym_Var_1, i_40)));
          }
      }
    }
  else
    {
      t = k_40(h_40, t);
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm v_20 = t;
  if((PushChoice() == 0))
    {
      ATerm s_21 = NULL,w_21 = NULL,e_22 = NULL,k_4 = NULL;
      e_22 = t;
      if(match_cons(t, sym_Var_1))
        {
          w_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_22);
      s_21 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, w_21);
      k_4 = t;
      t = SSLsetAnnotations(k_4, s_21);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_20;
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_20;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_22 = ATgetFirst((ATermList) t);
      g_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_22, g_22);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm h_22 = NULL,l_22 = NULL,n_22 = NULL,o_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_20 = ATgetArgument(t, 0);
      if(match_cons(w_20, sym__2))
        {
          h_22 = ATgetArgument(w_20, 0);
          l_22 = ATgetArgument(w_20, 1);
        }
      else
        _fail(t);
      {
        ATerm x_20 = ATgetArgument(t, 1);
        if(match_cons(x_20, sym__2))
          {
            n_22 = ATgetArgument(x_20, 0);
            o_22 = ATgetArgument(x_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_22), h_22), (ATerm) ATinsert(CheckATermList(o_22), l_22));
  return(t);
}
static ATerm v_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_20;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_22 = ATgetFirst((ATermList) t);
      q_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_22, q_22);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_20 = ATgetArgument(t, 0);
      if(match_cons(y_20, sym__2))
        {
          r_22 = ATgetArgument(y_20, 0);
          s_22 = ATgetArgument(y_20, 1);
        }
      else
        _fail(t);
      {
        ATerm z_20 = ATgetArgument(t, 1);
        if(match_cons(z_20, sym__2))
          {
            t_22 = ATgetArgument(z_20, 0);
            u_22 = ATgetArgument(z_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_22), r_22), (ATerm) ATinsert(CheckATermList(u_22), s_22));
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm a_21 = t;
  if((PushChoice() == 0))
    {
      ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL,m_4 = NULL;
      m_24 = t;
      if(match_cons(t, sym_Var_1))
        {
          l_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_24);
      k_24 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, l_24);
      m_4 = t;
      t = SSLsetAnnotations(m_4, k_24);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_21;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_20;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_24 = ATgetFirst((ATermList) t);
      p_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_24, p_24);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL,y_24 = NULL,z_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_21 = ATgetArgument(t, 0);
      if(match_cons(c_21, sym__2))
        {
          v_24 = ATgetArgument(c_21, 0);
          w_24 = ATgetArgument(c_21, 1);
        }
      else
        _fail(t);
      {
        ATerm d_21 = ATgetArgument(t, 1);
        if(match_cons(d_21, sym__2))
          {
            y_24 = ATgetArgument(d_21, 0);
            z_24 = ATgetArgument(d_21, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_24), v_24), (ATerm) ATinsert(CheckATermList(z_24), w_24));
  return(t);
}
static ATerm h_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_20;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_25 = ATgetFirst((ATermList) t);
      b_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_25, b_25);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm c_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_21 = ATgetArgument(t, 0);
      if(match_cons(e_21, sym__2))
        {
          c_25 = ATgetArgument(e_21, 0);
          g_25 = ATgetArgument(e_21, 1);
        }
      else
        _fail(t);
      {
        ATerm f_21 = ATgetArgument(t, 1);
        if(match_cons(f_21, sym__2))
          {
            h_25 = ATgetArgument(f_21, 0);
            i_25 = ATgetArgument(f_21, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_25), c_25), (ATerm) ATinsert(CheckATermList(i_25), g_25));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm i_45 = NULL,j_45 = NULL,k_45 = NULL,n_45 = NULL;
  j_45 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      k_45 = ATgetArgument(t, 0);
      n_45 = ATgetArgument(t, 1);
      i_45 = ATgetArgument(t, 2);
      {
        ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,l_4 = NULL;
        t = i_45;
        t = fetch_1_0(h_4, t);
        t = i_45;
        t = genzip_4_0(j_4, o_4, p_4, LiftPrimArg_0_0, t);
        r_21 = t;
        if(match_cons(t, sym__2))
          {
            n_21 = ATgetArgument(t, 0);
            o_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_21);
        m_21 = t;
        t = n_21;
        t = concat_0_0(t);
        p_21 = t;
        t = o_21;
        t = genzip_4_0(v_4, w_4, z_4, _id, t);
        q_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_21, q_21);
        l_4 = t;
        t = SSLsetAnnotations(l_4, m_21);
        if(match_cons(t, sym__2))
          {
            j_21 = ATgetArgument(t, 0);
            {
              ATerm u_21 = ATgetArgument(t, 1);
              if(match_cons(u_21, sym__2))
                {
                  k_21 = ATgetArgument(u_21, 0);
                  l_21 = ATgetArgument(u_21, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, j_21, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, k_21), (ATerm) ATmakeAppl(sym_PrimT_3, k_45, n_45, l_21)));
      }
    }
  else
    {
      ATerm n_23 = NULL,o_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,n_4 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          k_45 = ATgetArgument(t, 0);
          n_45 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = n_45;
      t = fetch_1_0(a_5, t);
      t = n_45;
      t = genzip_4_0(b_5, d_5, f_5, LiftPrimArg_0_0, t);
      c_24 = t;
      if(match_cons(t, sym__2))
        {
          w_23 = ATgetArgument(t, 0);
          z_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_24);
      v_23 = t;
      t = w_23;
      t = concat_0_0(t);
      a_24 = t;
      t = z_23;
      t = genzip_4_0(h_5, i_5, j_5, _id, t);
      b_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_24, b_24);
      n_4 = t;
      t = SSLsetAnnotations(n_4, v_23);
      if(match_cons(t, sym__2))
        {
          n_23 = ATgetArgument(t, 0);
          {
            ATerm v_21 = ATgetArgument(t, 1);
            if(match_cons(v_21, sym__2))
              {
                o_23 = ATgetArgument(v_21, 0);
                u_23 = ATgetArgument(v_21, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, n_23, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, o_23), (ATerm) ATmakeAppl(sym_PrimT_3, k_45, (ATerm)ATempty, u_23)));
    }
  return(t);
}
ATerm repeat_2_0 (ATerm f_104 (ATerm), ATerm g_104 (ATerm), ATerm t)
{
  static ATerm q_45 (ATerm t)
  {
    ATerm x_21 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_104(t);
        t = q_45(t);
        LocalPopChoice(j_22);
      }
    else
      {
        t = x_21;
        t = g_104(t);
      }
    return(t);
  }
  t = q_45(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL;
  o_46 = t;
  if(match_cons(t, sym_Con_3))
    {
      l_46 = ATgetArgument(t, 0);
      m_46 = ATgetArgument(t, 1);
      n_46 = ATgetArgument(t, 2);
      {
        ATerm c_26 = NULL,c_5 = NULL;
        t = SSLgetAnnotations(o_46);
        c_26 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, l_46, m_46, n_46);
        c_5 = t;
        t = SSLsetAnnotations(c_5, c_26);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = o_46;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm v_22 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(k_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_22;
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL,a_48 = NULL,f_48 = NULL;
  t_47 = t;
  if(match_cons(t, sym_Con_3))
    {
      a_48 = ATgetArgument(t, 0);
      f_48 = ATgetArgument(t, 1);
      s_47 = ATgetArgument(t, 2);
      {
        ATerm c_27 = NULL,e_5 = NULL;
        t = SSLgetAnnotations(t_47);
        c_27 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, a_48, f_48, s_47);
        e_5 = t;
        t = SSLsetAnnotations(e_5, c_27);
      }
    }
  else
    {
      ATerm w_27 = NULL,g_5 = NULL;
      if(match_cons(t, sym_App_2))
        {
          a_48 = ATgetArgument(t, 0);
          f_48 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_47);
      w_27 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, a_48, f_48);
      g_5 = t;
      t = SSLsetAnnotations(g_5, w_27);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm w_22 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(m_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_22;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL,n_48 = NULL,u_48 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      l_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_48;
  if(match_cons(t, sym_StratRule_3))
    {
      m_48 = ATgetArgument(t, 0);
      n_48 = ATgetArgument(t, 1);
      u_48 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_48), (ATerm) ATmakeAppl(sym_Where_1, u_48)), m_48));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          m_48 = ATgetArgument(t, 0);
          n_48 = ATgetArgument(t, 1);
          u_48 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = m_48;
      t = pureterm_0_0(t);
      t = n_48;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, n_48)), (ATerm) ATmakeAppl(sym_Where_1, u_48)), (ATerm) ATmakeAppl(sym_Match_1, m_48)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm o_99 (ATerm), ATerm t)
{
  static ATerm b_49 (ATerm t)
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_99(t);
        LocalPopChoice(y_22);
      }
    else
      {
        t = x_22;
        t = SRTS_one(b_49, t);
      }
    return(t);
  }
  t = b_49(t);
  return(t);
}
static ATerm j_9 (ATerm s_69, ATerm t_69, ATerm u_69, ATerm t)
{
  ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL,h_49 = NULL,i_49 = NULL,m_49 = NULL;
  t = new_0_0(t);
  h_49 = t;
  t = s_69;
  {
    static ATerm p_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm z_22 = ATgetArgument(t, 0);
          if(match_cons(z_22, sym_Var_1))
            {
              if(((f_49 != NULL) && (f_49 != ATgetArgument(z_22, 0))))
                _fail(ATgetArgument(z_22, 0));
              else
                f_49 = ATgetArgument(z_22, 0);
            }
          else
            _fail(t);
          if(((d_49 != NULL) && (d_49 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            d_49 = ATgetArgument(t, 1);
          {
            ATerm a_23 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, f_49);
      return(t);
    }
    t = oncetd_1_0(p_5, t);
  }
  i_49 = t;
  t = t_69;
  {
    static ATerm s_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm b_23 = ATgetArgument(t, 0);
          if(match_cons(b_23, sym_Var_1))
            {
              if(((f_49 != NULL) && (f_49 != ATgetArgument(b_23, 0))))
                _fail(ATgetArgument(b_23, 0));
              else
                f_49 = ATgetArgument(b_23, 0);
            }
          else
            _fail(t);
          if(((e_49 != NULL) && (e_49 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            e_49 = ATgetArgument(t, 1);
          {
            ATerm c_23 = ATgetArgument(t, 2);
            if(match_cons(c_23, sym_CallT_3))
              {
                if(((c_49 != NULL) && (c_49 != ATgetArgument(c_23, 0))))
                  _fail(ATgetArgument(c_23, 0));
                else
                  c_49 = ATgetArgument(c_23, 0);
                {
                  ATerm d_23 = ATgetArgument(c_23, 1);
                  if(((ATgetType(d_23) != AT_LIST) || !(ATisEmpty(d_23))))
                    _fail(t);
                }
                {
                  ATerm e_23 = ATgetArgument(c_23, 2);
                  if(((ATgetType(e_23) != AT_LIST) || !(ATisEmpty(e_23))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, h_49);
      return(t);
    }
    t = oncetd_1_0(s_5, t);
  }
  m_49 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_49), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, i_49, m_49, (ATerm) ATmakeAppl(sym_Seq_2, u_69, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(c_49), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(d_49), not_null(e_49), term_k_20))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(f_49)), (ATerm) ATmakeAppl(sym_Var_1, h_49))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm p_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_24 = t;
      int k_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL,l_50 = NULL;
          h_50 = t;
          if(match_cons(t, sym_SRule_1))
            {
              i_50 = ATgetArgument(t, 0);
              t = i_50;
              if(match_cons(t, sym_Rule_3))
                {
                  e_50 = ATgetArgument(t, 0);
                  f_50 = ATgetArgument(t, 1);
                  g_50 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = h_50;
              t = j_9(e_50, f_50, g_50, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm u_28 = NULL,z_28 = NULL,l_5 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  i_50 = ATgetArgument(t, 0);
                  l_50 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(h_50);
              u_28 = t;
              t = l_50;
              t = desugarRule_0_0(t);
              z_28 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, i_50, z_28);
              l_5 = t;
              t = SSLsetAnnotations(l_5, u_28);
            }
          LocalPopChoice(k_25);
        }
      else
        {
          t = t_24;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(r_23);
    }
  else
    {
      t = p_23;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm k_98 (ATerm), ATerm t)
{
  static ATerm t_5 (ATerm t)
  {
    t = topdown_1_0(k_98, t);
    return(t);
  }
  t = k_98(t);
  t = SRTS_all(t_5, t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm l_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(m_25);
    }
  else
    {
      t = l_25;
    }
  t = repeat_2_0(v_5, _id, t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm p_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(q_25);
    }
  else
    {
      t = p_25;
      {
        ATerm s_25 = t;
        int t_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL,x_51 = NULL;
            t_51 = t;
            if(match_cons(t, sym_CallT_3))
              {
                u_51 = ATgetArgument(t, 0);
                v_51 = ATgetArgument(t, 1);
                x_51 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = t_51;
            t = f_9(u_51, v_51, x_51, t);
            LocalPopChoice(t_25);
          }
        else
          {
            t = s_25;
            {
              ATerm w_25 = t;
              int x_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(x_25);
                }
              else
                {
                  t = w_25;
                  {
                    ATerm y_25 = t;
                    int z_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(z_25);
                      }
                    else
                      {
                        t = y_25;
                        {
                          ATerm a_26 = t;
                          int d_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm e_26 = t;
                              int f_26 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      g_52 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = g_52;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      h_52 = ATgetArgument(t, 0);
                                      t = h_52;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          h_52 = ATgetArgument(t, 0);
                                          i_52 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, h_52, i_52);
                                    }
                                  LocalPopChoice(f_26);
                                }
                              else
                                {
                                  t = e_26;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(d_26);
                            }
                          else
                            {
                              t = a_26;
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
  t = topdown_1_0(u_5, t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm f_53 = NULL,g_53 = NULL;
  g_53 = t;
  t = SSL_explode_term(g_53);
  if(match_cons(t, sym__2))
    {
      ATerm h_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_26 = ATgetArgument(t, 1);
        if(((ATgetType(i_26) == AT_LIST) && !(ATisEmpty(i_26))))
          {
            f_53 = ATgetFirst((ATermList) i_26);
            {
              ATerm j_26 = (ATerm) ATgetNext((ATermList) i_26);
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
static ATerm x_5 (ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL;
  g_29 = t;
  t = SSL_explode_term(g_29);
  if(match_cons(t, sym__2))
    {
      ATerm l_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_26 = ATgetArgument(t, 1);
        if(((ATgetType(m_26) == AT_LIST) && !(ATisEmpty(m_26))))
          {
            ATerm n_26 = ATgetFirst((ATermList) m_26);
            e_29 = (ATerm) ATgetNext((ATermList) m_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_i_19;
  f_29 = t;
  t = SSL_mkterm(f_29, e_29);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm m_102 (ATerm), ATerm t)
{
  ATerm r_52 = NULL,s_52 = NULL;
  static ATerm i_53 (ATerm t)
  {
    ATerm o_26 = t;
    int q_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL;
        t_52 = t;
        t = map_1_0(w_5, t);
        t = m_102(t);
        u_52 = t;
        t = t_52;
        t = map_1_0(x_5, t);
        t = i_53(t);
        v_52 = t;
        t = (ATerm) ATinsert(CheckATermList(v_52), u_52);
        LocalPopChoice(q_26);
      }
    else
      {
        t = o_26;
        t = map_1_0(a_6, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = i_53(t);
  s_52 = t;
  t = term_i_19;
  r_52 = t;
  t = SSL_mkterm(r_52, s_52);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm j_53 = NULL;
  j_53 = t;
  {
    ATerm r_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL;
        t = j_53;
        t = new_0_0(t);
        n_53 = t;
        t = new_0_0(t);
        o_53 = t;
        t = new_0_0(t);
        p_53 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_53), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_i_19, (ATerm) ATinsert(ATinsert(ATempty, j_53), (ATerm) ATmakeAppl(sym_Var_1, o_53))), (ATerm) ATmakeAppl(sym_Var_1, p_53)), (ATerm)ATmakeAppl(sym_VarDec_2, n_53, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_27), term_b_27)), o_53, (ATerm)ATmakeAppl(sym_Var_1, o_53), p_53, (ATerm) ATmakeAppl(sym_Var_1, p_53));
        LocalPopChoice(v_26);
      }
    else
      {
        t = r_26;
        {
          ATerm s_53 = NULL,t_53 = NULL,u_53 = NULL;
          t = j_53;
          t = new_0_0(t);
          s_53 = t;
          t = new_0_0(t);
          t_53 = t;
          t = new_0_0(t);
          u_53 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, s_53), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_i_19, (ATerm) ATinsert(ATinsert(ATempty, j_53), (ATerm) ATmakeAppl(sym_Var_1, t_53))), (ATerm) ATmakeAppl(sym_Var_1, u_53)), (ATerm)ATmakeAppl(sym_VarDec_2, s_53, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_27), term_b_27)), t_53, (ATerm)ATmakeAppl(sym_Var_1, t_53), u_53, (ATerm) ATmakeAppl(sym_Var_1, u_53));
        }
      }
  }
  return(t);
}
static ATerm k_9 (ATerm x_40, ATerm y_40, ATerm t)
{
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(x_40, y_40);
      LocalPopChoice(f_27);
    }
  else
    {
      t = e_27;
      t = SSL_subtr(x_40, y_40);
    }
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL;
  if(match_cons(t, sym__2))
    {
      v_53 = ATgetArgument(t, 0);
      w_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, v_53, w_53, (ATerm) ATempty);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm x_53 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm g_27 = ATgetArgument(t, 0);
      if(((ATgetType(g_27) != AT_INT) || (ATgetInt((ATermInt) g_27) != 0)))
        _fail(t);
      {
        ATerm h_27 = ATgetArgument(t, 1);
      }
      x_53 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = x_53;
  return(t);
}
ATerm copy_1_0 (ATerm t_115 (ATerm), ATerm t)
{
  static ATerm e_6 (ATerm t)
  {
    ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL,d_54 = NULL,e_54 = NULL,g_54 = NULL;
    if(match_cons(t, sym__3))
      {
        z_53 = ATgetArgument(t, 0);
        a_54 = ATgetArgument(t, 1);
        b_54 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, z_53, term_n_16);
    t = geq_0_0(t);
    t = term_n_16;
    g_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_53, term_n_16);
    t = k_9(z_53, g_54, t);
    d_54 = t;
    t = a_54;
    t = t_115(t);
    e_54 = t;
    t = (ATerm) ATmakeAppl(sym__3, d_54, a_54, (ATerm) ATinsert(CheckATermList(b_54), e_54));
    return(t);
  }
  t = for_3_0(b_6, d_6, e_6, t);
  return(t);
}
static ATerm l_9 (ATerm l_57, ATerm m_57, ATerm t)
{
  ATerm h_54 = NULL,j_54 = NULL,k_54 = NULL;
  t = new_0_0(t);
  h_54 = t;
  t = new_0_0(t);
  j_54 = t;
  t = new_0_0(t);
  k_54 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_54), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_i_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_57)), (ATerm) ATmakeAppl(sym_Var_1, j_54))), (ATerm) ATmakeAppl(sym_Op_2, term_i_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, m_57)), (ATerm) ATmakeAppl(sym_Var_1, k_54)))), (ATerm)ATmakeAppl(sym_VarDec_2, h_54, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_27), term_b_27)), j_54, (ATerm)ATmakeAppl(sym_Var_1, j_54), k_54, (ATerm) ATmakeAppl(sym_Var_1, k_54));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm q_54 = NULL,r_54 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_54 = ATgetFirst((ATermList) t);
      r_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_54;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_54;
    }
  else
    {
      t = r_54;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm r_60 (ATerm h_55, ATerm i_55, ATerm j_55, ATerm k_55, ATerm t)
{
  ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL,c_56 = NULL,w_56 = NULL;
  t = term_n_16;
  w_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_55, term_n_16);
  t = p_10(i_55, w_56, t);
  c_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_56, term_j_16);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_55 = ATgetFirst((ATermList) t);
      q_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_55;
  t = last_0_0(t);
  o_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_55), p_55), q_55);
  t = genzip_4_0(f_6, g_6, i_6, j_6, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      r_55 = ATgetArgument(t, 0);
      s_55 = ATgetArgument(t, 1);
      t_55 = ATgetArgument(t, 2);
      u_55 = ATgetArgument(t, 3);
      z_55 = ATgetArgument(t, 4);
      a_56 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_55), t_55), q_55);
  t = concat_0_0(t);
  b_56 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, h_55, term_j_27), s_55, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(b_56), p_55), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_i_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, p_55)), (ATerm) ATmakeAppl(sym_Op_2, h_55, u_55))), (ATerm)ATmakeAppl(sym_Op_2, term_i_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, o_55)), (ATerm) ATmakeAppl(sym_Op_2, h_55, a_56))), (ATerm) ATmakeAppl(sym_Seqs_1, r_55)))));
  return(t);
}
static ATerm u_60 (ATerm d_58, ATerm e_58, ATerm f_58, ATerm g_58, ATerm t)
{
  ATerm o_58 = NULL,p_58 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL,i_59 = NULL,k_59 = NULL,q_59 = NULL;
  t = g_58;
  t = new_0_0(t);
  o_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_58, (ATerm) ATmakeAppl(sym_Var_1, o_58));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      p_58 = ATgetArgument(t, 0);
      v_58 = ATgetArgument(t, 1);
      w_58 = ATgetArgument(t, 2);
      x_58 = ATgetArgument(t, 3);
      i_59 = ATgetArgument(t, 4);
      k_59 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_58, i_59);
  t = conc_0_0(t);
  q_59 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, d_58, term_k_27), v_58, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(q_59), o_58), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_i_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, o_58)), (ATerm) ATmakeAppl(sym_Op_2, d_58, x_58))), (ATerm)ATmakeAppl(sym_Op_2, d_58, k_59), (ATerm) ATmakeAppl(sym_Seqs_1, p_58)))));
  return(t);
}
static ATerm f_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_27 = ATgetArgument(t, 0);
      ATerm m_27 = ATgetArgument(t, 1);
      if(((ATgetType(m_27) != AT_LIST) || !(ATisEmpty(m_27))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_27 = ATgetArgument(t, 0);
      if(((ATgetType(n_27) == AT_LIST) && !(ATisEmpty(n_27))))
        {
          u_57 = ATgetFirst((ATermList) n_27);
          v_57 = (ATerm) ATgetNext((ATermList) n_27);
        }
      else
        _fail(t);
      {
        ATerm t_27 = ATgetArgument(t, 1);
        if(((ATgetType(t_27) == AT_LIST) && !(ATisEmpty(t_27))))
          {
            w_57 = ATgetFirst((ATermList) t_27);
            x_57 = (ATerm) ATgetNext((ATermList) t_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_57, w_57), (ATerm) ATmakeAppl(sym__2, v_57, x_57));
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm y_57 = NULL,z_57 = NULL;
  if(match_cons(t, sym__2))
    {
      y_57 = ATgetArgument(t, 0);
      z_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_57), y_57);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL;
  if(match_cons(t, sym__2))
    {
      a_58 = ATgetArgument(t, 0);
      b_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_9(a_58, b_58, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm s_59 = NULL,t_59 = NULL,v_59 = NULL,b_60 = NULL,e_60 = NULL,f_60 = NULL;
  s_59 = t;
  if(match_cons(t, sym__3))
    {
      t_59 = ATgetArgument(t, 0);
      v_59 = ATgetArgument(t, 1);
      b_60 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_59;
  if(match_string(t, "T"))
    {
      t = b_60;
      if(match_cons(t, sym__2))
        {
          e_60 = ATgetArgument(t, 0);
          f_60 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = e_60;
      if(match_int(t, 0))
        {
          ATerm u_27 = t;
          int v_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_60(t_59, e_60, f_60, s_59, t);
              LocalPopChoice(v_27);
            }
          else
            {
              t = u_27;
              {
                ATerm j_60 = NULL;
                t = s_59;
                t = new_0_0(t);
                j_60 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, t_59, term_j_27), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_60), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_i_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, j_60)), (ATerm) ATmakeAppl(sym_Op_2, t_59, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_i_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, j_60)), (ATerm) ATmakeAppl(sym_Op_2, t_59, (ATerm) ATempty))), term_k_20))));
              }
            }
        }
      else
        {
          t = r_60(t_59, e_60, f_60, s_59, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = b_60;
      if(match_cons(t, sym__2))
        {
          e_60 = ATgetArgument(t, 0);
          f_60 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_60(t_59, e_60, f_60, s_59, t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm z_110 (ATerm), ATerm t)
{
  ATerm d_16 = NULL;
  static ATerm k_6 (ATerm t)
  {
    t = z_110(t);
    if(((d_16 != NULL) && (d_16 != t)))
      _fail(t);
    else
      d_16 = t;
    return(t);
  }
  t = fetch_1_0(k_6, t);
  t = not_null(d_16);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL,i_16 = NULL;
  t = term_k_16;
  f_16 = t;
  t = (ATerm) ATinsert(ATempty, term_x_27);
  i_16 = t;
  t = SSL_printnl(f_16, i_16);
  t = term_n_16;
  e_16 = t;
  t = SSL_exit(e_16);
  t = (ATerm) ATinsert(ATempty, term_x_27);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_a_28;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL;
  ATerm e_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          ATerm h_28 = ATgetArgument(t, 0);
          c_13 = ATgetArgument(t, 1);
          d_13 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(g_28);
      t = d_13;
      t = foldr_3_0(w_6, x_6, y_6, t);
      t = c_13;
      t = foldr_3_0(a_7, c_7, d_7, t);
    }
  else
    {
      t = e_28;
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          ATerm k_28 = ATgetArgument(t, 0);
          c_13 = ATgetArgument(t, 1);
          d_13 = ATgetArgument(t, 2);
          {
            ATerm l_28 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = d_13;
      t = foldr_3_0(i_7, j_7, k_7, t);
      t = c_13;
      t = foldr_3_0(l_7, m_7, n_7, t);
    }
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_v_18;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL;
  if(match_cons(t, sym__2))
    {
      h_13 = ATgetArgument(t, 0);
      i_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(h_13, i_13, t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = term_n_16;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = term_v_18;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm l_13 = NULL,m_13 = NULL;
  if(match_cons(t, sym__2))
    {
      l_13 = ATgetArgument(t, 0);
      m_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(l_13, m_13, t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = term_n_16;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_v_18;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm q_13 = NULL,r_13 = NULL;
  if(match_cons(t, sym__2))
    {
      q_13 = ATgetArgument(t, 0);
      r_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(q_13, r_13, t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_n_16;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_v_18;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL;
  if(match_cons(t, sym__2))
    {
      u_13 = ATgetArgument(t, 0);
      v_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(u_13, v_13, t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_n_16;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      ATerm n_28 = ATgetArgument(t, 0);
      ATerm o_28 = ATgetArgument(t, 1);
      ATerm q_28 = ATgetArgument(t, 2);
      ATerm s_28 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  return(t);
}
ATerm JoinDefsExt_0_0 (ATerm t)
{
  ATerm t_28 = t;
  int w_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_16 = NULL;
      static ATerm n_6 (ATerm t)
      {
        ATerm x_16 = NULL,z_16 = NULL;
        x_16 = t;
        {
          ATerm x_28 = t;
          int a_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDef_3))
                {
                  z_16 = ATgetArgument(t, 0);
                  {
                    ATerm b_29 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm c_29 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(a_29);
              t = z_16;
              if(((u_16 != NULL) && (u_16 != t)))
                _fail(t);
              else
                u_16 = t;
              t = x_16;
            }
          else
            {
              t = x_28;
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  z_16 = ATgetArgument(t, 0);
                  {
                    ATerm d_29 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm h_29 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm i_29 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              t = z_16;
              if(((u_16 != NULL) && (u_16 != t)))
                _fail(t);
              else
                u_16 = t;
              t = x_16;
            }
        }
        return(t);
      }
      t = fetch_1_0(n_6, t);
      {
        static ATerm q_6 (ATerm t)
        {
          if(match_cons(t, sym_SDefT_4))
            {
              if(((u_16 != NULL) && (u_16 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                u_16 = ATgetArgument(t, 0);
              {
                ATerm j_29 = ATgetArgument(t, 1);
              }
              {
                ATerm l_29 = ATgetArgument(t, 2);
              }
              {
                ATerm m_29 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(q_6, t);
      }
      t = not_null(u_16);
      t = debug_1_0(s_6, t);
      t = giving_up_0_0(t);
      LocalPopChoice(w_28);
    }
  else
    {
      t = t_28;
      {
        ATerm m_19 = NULL;
        m_19 = t;
        t = map_1_0(t_6, t);
        t = m_19;
        {
          ATerm n_29 = t;
          int p_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = fetch_elem_1_0(o_7, t);
              LocalPopChoice(p_29);
            }
          else
            {
              t = n_29;
              {
                ATerm y_13 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    y_13 = ATgetFirst((ATermList) t);
                    {
                      ATerm q_29 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = y_13;
              }
            }
        }
      }
    }
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_j_20;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL,w_14 = NULL;
  v_19 = t;
  t = SSL_explode_term(v_19);
  if(match_cons(t, sym__2))
    {
      ATerm r_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_29 = ATgetArgument(t, 1);
        if(((ATgetType(s_29) == AT_LIST) && !(ATisEmpty(s_29))))
          {
            w_19 = ATgetFirst((ATermList) s_29);
            {
              ATerm t_29 = (ATerm) ATgetNext((ATermList) s_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(v_19);
  if(match_cons(t, sym__2))
    {
      ATerm u_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_29 = ATgetArgument(t, 1);
        if(((ATgetType(v_29) == AT_LIST) && !(ATisEmpty(v_29))))
          {
            ATerm w_29 = ATgetFirst((ATermList) v_29);
            ATerm x_29 = (ATerm) ATgetNext((ATermList) v_29);
            if(((ATgetType(x_29) == AT_LIST) && !(ATisEmpty(x_29))))
              {
                w_14 = ATgetFirst((ATermList) x_29);
                {
                  ATerm y_29 = (ATerm) ATgetNext((ATermList) x_29);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, w_19, w_14);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(p_7, s_7, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL;
  e_20 = t;
  if(match_cons(t, sym__2))
    {
      f_20 = ATgetArgument(t, 0);
      g_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_20;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_20 = ATgetFirst((ATermList) t);
      i_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_20;
  if(match_cons(t, sym__2))
    {
      c_20 = ATgetArgument(t, 0);
      d_20 = ATgetArgument(t, 1);
      {
        ATerm z_29 = t;
        int a_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_20;
            if((f_20 != t))
              {
                _fail(t);
              }
            t = d_20;
            LocalPopChoice(a_30);
          }
        else
          {
            t = z_29;
            t = (ATerm) ATmakeAppl(sym__2, f_20, i_20);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, f_20, i_20);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm c_100 (ATerm), ATerm t)
{
  static ATerm b_21 (ATerm t)
  {
    ATerm c_30 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_100(t);
        LocalPopChoice(d_30);
      }
    else
      {
        t = c_30;
        t = SRTS_all(b_21, t);
      }
    return(t);
  }
  t = b_21(t);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_30 = ATgetArgument(t, 0);
      if(((ATgetType(e_30) != AT_LIST) || !(ATisEmpty(e_30))))
        _fail(t);
      {
        ATerm f_30 = ATgetArgument(t, 1);
        if(((ATgetType(f_30) != AT_LIST) || !(ATisEmpty(f_30))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_30 = ATgetArgument(t, 0);
      if(((ATgetType(g_30) == AT_LIST) && !(ATisEmpty(g_30))))
        {
          z_21 = ATgetFirst((ATermList) g_30);
          a_22 = (ATerm) ATgetNext((ATermList) g_30);
        }
      else
        _fail(t);
      {
        ATerm h_30 = ATgetArgument(t, 1);
        if(((ATgetType(h_30) == AT_LIST) && !(ATisEmpty(h_30))))
          {
            b_22 = ATgetFirst((ATermList) h_30);
            c_22 = (ATerm) ATgetNext((ATermList) h_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_21, b_22), (ATerm) ATmakeAppl(sym__2, a_22, c_22));
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm d_22 = NULL,i_22 = NULL;
  if(match_cons(t, sym__2))
    {
      d_22 = ATgetArgument(t, 0);
      i_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_22), d_22);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL,t_21 = NULL;
  g_21 = t;
  {
    ATerm i_30 = t;
    int j_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_30 = ATgetArgument(t, 0);
            ATerm l_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(j_30);
        t = g_21;
      }
    else
      {
        t = i_30;
        {
          ATerm y_21 = NULL;
          if(match_cons(t, sym__3))
            {
              h_21 = ATgetArgument(t, 0);
              i_21 = ATgetArgument(t, 1);
              t_21 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, h_21, i_21);
          t = genzip_4_0(t_7, u_7, x_7, _id, t);
          y_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_21, t_21);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm t)
{
  ATerm k_22 = NULL,m_22 = NULL;
  static ATerm z_7 (ATerm t)
  {
    ATerm e_15 = NULL;
    t = t_97(t);
    e_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_15, not_null(m_22));
    t = lookup_0_0(t);
    t = u_97(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((m_22 != NULL) && (m_22 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_22 = ATgetArgument(t, 0);
      k_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_22;
  t = alltd_1_0(z_7, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL,x_23 = NULL,y_23 = NULL,d_24 = NULL,n_5 = NULL;
  d_24 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      t_23 = ATgetArgument(t, 0);
      x_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_24);
  s_23 = t;
  t = t_23;
  t = new_0_0(t);
  y_23 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, y_23, x_23);
  n_5 = t;
  t = SSLsetAnnotations(n_5, s_23);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,o_5 = NULL;
  i_24 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      f_24 = ATgetArgument(t, 0);
      g_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_24);
  e_24 = t;
  t = f_24;
  t = new_0_0(t);
  h_24 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, h_24, g_24);
  o_5 = t;
  t = SSLsetAnnotations(o_5, e_24);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm j_24 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      j_24 = ATgetArgument(t, 0);
      {
        ATerm m_30 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_24), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm n_24 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      n_24 = ATgetArgument(t, 0);
      {
        ATerm o_30 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, n_24);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm e_25 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      e_25 = ATgetArgument(t, 0);
      {
        ATerm p_30 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = e_25;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm f_25 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      f_25 = ATgetArgument(t, 0);
      {
        ATerm q_30 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = f_25;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm j_25 = NULL,n_25 = NULL,o_25 = NULL,r_25 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      n_25 = ATgetArgument(t, 0);
      r_25 = ATgetArgument(t, 1);
      j_25 = ATgetArgument(t, 2);
      t = n_25;
      if(match_cons(t, sym_SVar_1))
        {
          o_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_25;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_25;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_25;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          n_25 = ATgetArgument(t, 0);
          r_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = n_25;
      if(match_cons(t, sym_SVar_1))
        {
          o_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_25;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_25;
    }
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm b_26 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_26;
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,q_23 = NULL;
  k_23 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_30 = ATgetFirst((ATermList) t);
      if(match_cons(r_30, sym_SDefT_4))
        {
          f_23 = ATgetArgument(r_30, 0);
          g_23 = ATgetArgument(r_30, 1);
          h_23 = ATgetArgument(r_30, 2);
          {
            ATerm t_30 = ATgetArgument(r_30, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm s_30 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = g_23;
  t = map_1_0(b_8, t);
  i_23 = t;
  t = h_23;
  t = map_1_0(c_8, t);
  j_23 = t;
  t = i_23;
  t = map_1_0(f_8, t);
  m_23 = t;
  t = j_23;
  t = map_1_0(j_8, t);
  l_23 = t;
  t = k_23;
  {
    static ATerm m_8 (ATerm t)
    {
      ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL,u_24 = NULL,x_24 = NULL,d_25 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm u_30 = ATgetArgument(t, 0);
          q_24 = ATgetArgument(t, 1);
          r_24 = ATgetArgument(t, 2);
          s_24 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = r_24;
      t = map_1_0(p_8, t);
      u_24 = t;
      t = q_24;
      t = map_1_0(r_8, t);
      d_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, d_25, m_23, s_24);
      t = substitute_2_0(t_8, _id, t);
      x_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, u_24, l_23, x_24);
      t = substitute_2_0(u_8, _id, t);
      return(t);
    }
    t = map_1_0(m_8, t);
  }
  t = choices_0_0(t);
  q_23 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, f_23, i_23, j_23, q_23);
  return(t);
}
static ATerm i_63 (ATerm m_61, ATerm n_61, ATerm q_61, ATerm t_61, ATerm t)
{
  ATerm z_61 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL,c_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_61, n_61);
  t = Definitions_0_0(t);
  z_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_61, q_61);
  e_62 = t;
  if(match_cons(t, sym__2))
    {
      ATerm v_30 = ATgetArgument(t, 0);
      ATerm w_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_62);
  c_62 = t;
  t = z_61;
  {
    ATerm x_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_62 = NULL,k_62 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_62 = ATgetFirst((ATermList) t);
            k_62 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_62;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_62;
        LocalPopChoice(y_30);
      }
    else
      {
        t = x_30;
        {
          ATerm z_30 = t;
          int a_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = JoinDefs2_0_0(t);
              LocalPopChoice(a_31);
            }
          else
            {
              t = z_30;
              t = JoinDefsExt_0_0(t);
            }
        }
      }
  }
  d_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_62, q_61);
  c_6 = t;
  t = SSLsetAnnotations(c_6, c_62);
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm p_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL;
  r_62 = t;
  if(match_cons(t, sym__2))
    {
      s_62 = ATgetArgument(t, 0);
      v_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_62;
  if(match_cons(t, sym__2))
    {
      t_62 = ATgetArgument(t, 0);
      u_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_62;
  if(match_cons(t, sym_Mod_2))
    {
      p_62 = ATgetArgument(t, 0);
      q_62 = ATgetArgument(t, 1);
      {
        ATerm b_31 = t;
        int c_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_63 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, p_62, q_62, u_62);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            h_63 = t;
            t = (ATerm) ATmakeAppl(sym__2, h_63, v_62);
            LocalPopChoice(c_31);
          }
        else
          {
            t = b_31;
            t = i_63(t_62, u_62, v_62, r_62, t);
          }
      }
    }
  else
    {
      t = i_63(t_62, u_62, v_62, r_62, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm d_111 (ATerm), ATerm t)
{
  static ATerm r_64 (ATerm t)
  {
    ATerm o_64 = NULL,p_64 = NULL,q_64 = NULL;
    q_64 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_64 = ATgetFirst((ATermList) t);
        p_64 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm k_29 = NULL,o_29 = NULL,m_6 = NULL;
          t = SSLgetAnnotations(q_64);
          k_29 = t;
          t = p_64;
          t = r_64(t);
          o_29 = t;
          t = (ATerm) ATinsert(CheckATermList(o_29), o_64);
          m_6 = t;
          t = SSLsetAnnotations(m_6, k_29);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_64;
        t = d_111(t);
      }
    return(t);
  }
  t = r_64(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_63 = NULL,m_63 = NULL,o_63 = NULL;
  l_63 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_63;
    }
  else
    {
      static ATerm v_8 (ATerm t)
      {
        t = not_null(o_63);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_63 = ATgetFirst((ATermList) t);
          if(((o_63 != NULL) && (o_63 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            o_63 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_63;
      t = at_end_1_0(v_8, t);
    }
  return(t);
}
static ATerm j_65 (ATerm x_64, ATerm t)
{
  ATerm y_64 = NULL;
  t = SSL_explode_term(x_64);
  if(match_cons(t, sym__2))
    {
      ATerm d_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      y_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_64;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_65 = NULL,d_65 = NULL,e_65 = NULL;
  e_65 = t;
  if(match_cons(t, sym__2))
    {
      c_65 = ATgetArgument(t, 0);
      d_65 = ATgetArgument(t, 1);
      {
        ATerm e_31 = t;
        int f_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_8 (ATerm t)
            {
              t = d_65;
              return(t);
            }
            t = c_65;
            t = at_end_1_0(x_8, t);
            LocalPopChoice(f_31);
          }
        else
          {
            t = e_31;
            t = j_65(e_65, t);
          }
      }
    }
  else
    {
      t = j_65(e_65, t);
    }
  return(t);
}
static ATerm r_9 (ATerm k_112 (ATerm), ATerm y_45, ATerm x_45, ATerm t)
{
  static ATerm c_66 (ATerm t)
  {
    ATerm v_65 = NULL,w_65 = NULL,x_65 = NULL;
    v_65 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_65;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_65 = ATgetFirst((ATermList) t);
            x_65 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_31 = t;
          int i_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_65;
              {
                static ATerm y_8 (ATerm t)
                {
                  t = x_45;
                  return(t);
                }
                t = c_10(k_112, y_8, w_65, x_65, t);
              }
              t = c_66(t);
              LocalPopChoice(i_31);
            }
          else
            {
              t = h_31;
              {
                ATerm b_30 = NULL,n_30 = NULL,o_6 = NULL;
                t = SSLgetAnnotations(v_65);
                b_30 = t;
                t = x_65;
                t = c_66(t);
                n_30 = t;
                t = (ATerm) ATinsert(CheckATermList(n_30), w_65);
                o_6 = t;
                t = SSLsetAnnotations(o_6, b_30);
              }
            }
        }
      }
    return(t);
  }
  t = y_45;
  t = c_66(t);
  return(t);
}
ATerm genzip_4_0 (ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm t)
{
  static ATerm q_66 (ATerm t)
  {
    ATerm j_31 = t;
    int k_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_102(t);
        LocalPopChoice(k_31);
      }
    else
      {
        t = j_31;
        {
          ATerm j_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL,r_6 = NULL;
          t = x_102(t);
          o_66 = t;
          if(match_cons(t, sym__2))
            {
              k_66 = ATgetArgument(t, 0);
              l_66 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_66);
          j_66 = t;
          t = k_66;
          t = z_102(t);
          m_66 = t;
          t = l_66;
          t = q_66(t);
          n_66 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_66, n_66);
          r_6 = t;
          t = SSLsetAnnotations(r_6, j_66);
          t = y_102(t);
        }
      }
    return(t);
  }
  t = q_66(t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_31 = ATgetArgument(t, 0);
      if(((ATgetType(l_31) != AT_LIST) || !(ATisEmpty(l_31))))
        _fail(t);
      {
        ATerm m_31 = ATgetArgument(t, 1);
        if(((ATgetType(m_31) != AT_LIST) || !(ATisEmpty(m_31))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm e_67 = NULL,f_67 = NULL,g_67 = NULL,h_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_31 = ATgetArgument(t, 0);
      if(((ATgetType(n_31) == AT_LIST) && !(ATisEmpty(n_31))))
        {
          e_67 = ATgetFirst((ATermList) n_31);
          f_67 = (ATerm) ATgetNext((ATermList) n_31);
        }
      else
        _fail(t);
      {
        ATerm o_31 = ATgetArgument(t, 1);
        if(((ATgetType(o_31) == AT_LIST) && !(ATisEmpty(o_31))))
          {
            g_67 = ATgetFirst((ATermList) o_31);
            h_67 = (ATerm) ATgetNext((ATermList) o_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_67, g_67), (ATerm) ATmakeAppl(sym__2, f_67, h_67));
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm j_67 = NULL,k_67 = NULL;
  if(match_cons(t, sym__2))
    {
      j_67 = ATgetArgument(t, 0);
      k_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_67), j_67);
  return(t);
}
static ATerm w_9 (ATerm l_694, ATerm q_694, ATerm z_67, ATerm t)
{
  ATerm s_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL;
  t = SSL_explode_term(q_694);
  if(match_cons(t, sym__2))
    {
      s_66 = ATgetArgument(t, 0);
      v_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(l_694);
  if(match_cons(t, sym__2))
    {
      if((s_66 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      u_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_66, v_66);
  t = genzip_4_0(a_9, b_9, c_9, _id, t);
  w_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_66, z_67);
  t = conc_0_0(t);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm u_67 = NULL;
  u_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, u_67);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm v_67 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL,u_6 = NULL;
  e_68 = t;
  if(match_cons(t, sym__2))
    {
      c_68 = ATgetArgument(t, 0);
      d_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_68);
  v_67 = t;
  t = d_68;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_68, d_68);
  u_6 = t;
  t = SSLsetAnnotations(u_6, v_67);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm i_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL,m_69 = NULL;
  i_69 = t;
  if(match_cons(t, sym__2))
    {
      j_69 = ATgetArgument(t, 0);
      k_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_69;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_69 = ATgetFirst((ATermList) t);
      m_69 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_31 = t;
        int q_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_70(j_69, k_69, i_69, t);
            LocalPopChoice(q_31);
          }
        else
          {
            t = p_31;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_69), l_69), m_69);
          }
      }
    }
  else
    {
      t = k_70(j_69, k_69, i_69, t);
    }
  return(t);
}
static ATerm k_70 (ATerm f_68, ATerm g_68, ATerm h_68, ATerm t)
{
  ATerm i_68 = NULL,m_68 = NULL,v_6 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL;
  t = SSLgetAnnotations(h_68);
  i_68 = t;
  t = g_68;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_68 = ATgetFirst((ATermList) t);
      s_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_68;
  if(match_cons(t, sym__2))
    {
      q_68 = ATgetArgument(t, 0);
      r_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_31 = t;
    int u_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_68;
        if((q_68 != t))
          {
            _fail(t);
          }
        t = s_68;
        LocalPopChoice(u_31);
      }
    else
      {
        t = r_31;
        t = g_68;
        t = w_9(q_68, r_68, s_68, t);
      }
  }
  m_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_68, m_68);
  v_6 = t;
  t = SSLsetAnnotations(v_6, i_68);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm j_70 = NULL;
  if(match_cons(t, sym__2))
    {
      j_70 = ATgetArgument(t, 0);
      if((j_70 != ATgetArgument(t, 1)))
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
  ATerm v_31 = t;
  int w_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(e_9, g_9, h_9, t);
      LocalPopChoice(w_31);
    }
  else
    {
      t = v_31;
      {
        ATerm q_69 = NULL,r_69 = NULL,c_70 = NULL;
        q_69 = t;
        if(match_cons(t, sym__2))
          {
            r_69 = ATgetArgument(t, 0);
            c_70 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_69;
        t = r_9(i_9, r_69, c_70, t);
      }
    }
  return(t);
}
static ATerm y_9 (ATerm w_129 (ATerm), ATerm x_129 (ATerm), ATerm y_129 (ATerm), ATerm a_69, ATerm x_68, ATerm f_69, ATerm b_69, ATerm y_68, ATerm z_68, ATerm t)
{
  ATerm l_70 = NULL,p_70 = NULL,s_70 = NULL,s_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_69, b_69);
  t = w_129(t);
  if(match_cons(t, sym__2))
    {
      p_70 = ATgetArgument(t, 0);
      l_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_70;
  t = x_129(t);
  s_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_70, f_69);
  t = diff_0_0(t);
  s_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_71, x_68);
  t = conc_0_0(t);
  v_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_71, f_69);
  t = conc_0_0(t);
  w_71 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_69, p_70, y_68);
  t = y_129(t);
  x_71 = t;
  t = (ATerm) ATmakeAppl(sym__5, v_71, w_71, l_70, x_71, z_68);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm w_129 (ATerm), ATerm x_129 (ATerm), ATerm y_129 (ATerm), ATerm t)
{
  ATerm b_72 = NULL,c_72 = NULL,d_72 = NULL,f_72 = NULL,g_72 = NULL,m_72 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm x_31 = ATgetArgument(t, 0);
      if(((ATgetType(x_31) == AT_LIST) && !(ATisEmpty(x_31))))
        {
          b_72 = ATgetFirst((ATermList) x_31);
          c_72 = (ATerm) ATgetNext((ATermList) x_31);
        }
      else
        _fail(t);
      d_72 = ATgetArgument(t, 1);
      f_72 = ATgetArgument(t, 2);
      g_72 = ATgetArgument(t, 3);
      m_72 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = y_9(w_129, x_129, y_129, b_72, c_72, d_72, f_72, g_72, m_72, t);
  return(t);
}
ATerm while_not_2_0 (ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm t)
{
  static ATerm y_72 (ATerm t)
  {
    ATerm c_32 = t;
    int d_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_104(t);
        LocalPopChoice(d_32);
      }
    else
      {
        t = c_32;
        t = x_104(t);
        t = y_72(t);
      }
    return(t);
  }
  t = y_72(t);
  return(t);
}
ATerm for_3_0 (ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm t)
{
  t = z_104(t);
  t = while_not_2_0(a_105, b_105, t);
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm q_75 = NULL,u_75 = NULL,x_75 = NULL;
  if(match_cons(t, sym__3))
    {
      q_75 = ATgetArgument(t, 0);
      u_75 = ATgetArgument(t, 1);
      x_75 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, q_75, q_75, u_75, x_75, (ATerm) ATempty);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm a_76 = NULL,b_76 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm n_32 = ATgetArgument(t, 0);
      if(((ATgetType(n_32) != AT_LIST) || !(ATisEmpty(n_32))))
        _fail(t);
      {
        ATerm o_32 = ATgetArgument(t, 1);
      }
      {
        ATerm p_32 = ATgetArgument(t, 2);
      }
      a_76 = ATgetArgument(t, 3);
      b_76 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_76, b_76);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm q_32 = t;
  int r_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, u_9, v_9, t);
      LocalPopChoice(r_32);
    }
  else
    {
      t = q_32;
      {
        ATerm h_76 = NULL,i_76 = NULL,j_76 = NULL,m_76 = NULL,n_76 = NULL,q_76 = NULL,r_76 = NULL;
        if(match_cons(t, sym__5))
          {
            h_76 = ATgetArgument(t, 0);
            m_76 = ATgetArgument(t, 1);
            n_76 = ATgetArgument(t, 2);
            q_76 = ATgetArgument(t, 3);
            r_76 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = h_76;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_76 = ATgetFirst((ATermList) t);
            j_76 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, j_76, m_76, n_76, q_76, (ATerm) ATinsert(CheckATermList(r_76), i_76));
      }
    }
  return(t);
}
static ATerm u_9 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(x_9, t);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm e_76 = NULL,f_76 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm s_32 = ATgetArgument(t, 0);
      e_76 = ATgetArgument(t, 1);
      f_76 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_76), e_76);
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm t_32 = t;
  int u_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      LocalPopChoice(u_32);
    }
  else
    {
      t = t_32;
    }
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm h_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL;
  k_32 = t;
  if(match_cons(t, sym__2))
    {
      l_32 = ATgetArgument(t, 0);
      m_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_32;
  if(match_cons(t, sym_Mod_2))
    {
      h_32 = ATgetArgument(t, 0);
      j_32 = ATgetArgument(t, 1);
      {
        ATerm v_32 = t;
        int w_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_32;
            t = s_8(h_32, j_32, m_32, t);
            LocalPopChoice(w_32);
          }
        else
          {
            t = v_32;
            t = z_32(l_32, m_32, t);
          }
      }
    }
  else
    {
      t = z_32(l_32, m_32, t);
    }
  return(t);
}
static ATerm z_32 (ATerm s_31, ATerm t_31, ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL;
  t = term_k_16;
  y_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_17), t_31), term_o_17), s_31), term_m_17);
  z_31 = t;
  t = SSL_printnl(y_31, z_31);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_17), t_31), term_o_17), s_31), term_m_17);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm z_77 = NULL,a_78 = NULL,b_78 = NULL,c_78 = NULL,d_78 = NULL;
  t = for_3_0(q_9, s_9, t_9, t);
  z_77 = t;
  if(match_cons(t, sym__2))
    {
      a_78 = ATgetArgument(t, 0);
      b_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_78;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_78;
    }
  else
    {
      ATerm g_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_78 = ATgetFirst((ATermList) t);
          d_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(d_78), c_78);
      t = map_1_0(z_9, t);
      t = term_n_16;
      g_31 = t;
      t = SSL_exit(g_31);
    }
  return(t);
}
static ATerm a_10 (ATerm t)
{
  t = term_v_18;
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm x_78 = NULL,y_78 = NULL;
  if(match_cons(t, sym__2))
    {
      x_78 = ATgetArgument(t, 0);
      y_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(x_78, y_78, t);
  return(t);
}
static ATerm g_10 (ATerm t)
{
  t = term_n_16;
  return(t);
}
static ATerm t_10 (ATerm t)
{
  t = term_v_18;
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm z_78 = NULL,a_79 = NULL;
  if(match_cons(t, sym__2))
    {
      z_78 = ATgetArgument(t, 0);
      a_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(z_78, a_79, t);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  t = term_n_16;
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm b_79 = NULL;
  if(match_cons(t, sym__2))
    {
      b_79 = ATgetArgument(t, 0);
      if((b_79 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm b_11 (ATerm t)
{
  t = term_x_32;
  return(t);
}
static ATerm c_11 (ATerm t)
{
  t = term_y_32;
  return(t);
}
ATerm RegisterExtSDefInl_0_0 (ATerm t)
{
  ATerm h_78 = NULL,i_78 = NULL,l_78 = NULL,m_78 = NULL,n_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL,s_78 = NULL,t_78 = NULL,u_78 = NULL,v_78 = NULL,w_78 = NULL;
  l_78 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      o_78 = ATgetArgument(t, 0);
      h_78 = ATgetArgument(t, 1);
      i_78 = ATgetArgument(t, 2);
      {
        ATerm a_33 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  q_78 = t;
  t = h_78;
  t = foldr_3_0(a_10, e_10, g_10, t);
  m_78 = t;
  t = i_78;
  t = foldr_3_0(t_10, w_10, x_10, t);
  n_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_78, (ATerm) ATmakeAppl(sym__2, m_78, n_78));
  {
    ATerm b_33 = t;
    int c_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(c_33);
      }
    else
      {
        t = b_33;
        t = (ATerm) ATempty;
      }
  }
  s_78 = t;
  t = o_78;
  {
    ATerm d_33 = t;
    int e_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(e_33);
      }
    else
      {
        t = d_33;
        t = (ATerm) ATempty;
      }
  }
  r_78 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, m_78, n_78));
  w_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, m_78, n_78)), r_78);
  t = d_10(z_10, w_78, r_78, t);
  p_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_78, (ATerm) ATmakeAppl(sym__2, m_78, n_78));
  u_78 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_33, (ATerm) ATinsert(CheckATermList(s_78), l_78));
  v_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_78, (ATerm) ATmakeAppl(sym__2, m_78, n_78)), (ATerm) ATmakeAppl(sym_Defined_2, term_f_33, (ATerm) ATinsert(CheckATermList(s_78), l_78)));
  t = b_10(b_11, u_78, v_78, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_33, p_78);
  t_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_78, (ATerm) ATmakeAppl(sym_Defined_2, term_g_33, p_78));
  t = b_10(c_11, o_78, t_78, t);
  t = q_78;
  return(t);
}
static ATerm d_11 (ATerm t)
{
  t = term_v_18;
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm q_79 = NULL,r_79 = NULL;
  if(match_cons(t, sym__2))
    {
      q_79 = ATgetArgument(t, 0);
      r_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(q_79, r_79, t);
  return(t);
}
static ATerm f_11 (ATerm t)
{
  t = term_n_16;
  return(t);
}
static ATerm h_11 (ATerm t)
{
  t = term_v_18;
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm s_79 = NULL,t_79 = NULL;
  if(match_cons(t, sym__2))
    {
      s_79 = ATgetArgument(t, 0);
      t_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(s_79, t_79, t);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  t = term_n_16;
  return(t);
}
static ATerm k_11 (ATerm t)
{
  ATerm u_79 = NULL;
  if(match_cons(t, sym__2))
    {
      u_79 = ATgetArgument(t, 0);
      if((u_79 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm n_11 (ATerm t)
{
  t = term_x_32;
  return(t);
}
static ATerm o_11 (ATerm t)
{
  t = term_y_32;
  return(t);
}
ATerm RegisterExtSDef_0_0 (ATerm t)
{
  ATerm c_79 = NULL,d_79 = NULL,e_79 = NULL,f_79 = NULL,g_79 = NULL,h_79 = NULL,i_79 = NULL,j_79 = NULL,k_79 = NULL,l_79 = NULL,m_79 = NULL,n_79 = NULL,o_79 = NULL,p_79 = NULL;
  e_79 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      h_79 = ATgetArgument(t, 0);
      c_79 = ATgetArgument(t, 1);
      d_79 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  j_79 = t;
  t = c_79;
  t = foldr_3_0(d_11, e_11, f_11, t);
  f_79 = t;
  t = d_79;
  t = foldr_3_0(h_11, i_11, j_11, t);
  g_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_79, (ATerm) ATmakeAppl(sym__2, f_79, g_79));
  {
    ATerm h_33 = t;
    int i_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(i_33);
      }
    else
      {
        t = h_33;
        t = (ATerm) ATempty;
      }
  }
  l_79 = t;
  t = h_79;
  {
    ATerm n_33 = t;
    int o_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(o_33);
      }
    else
      {
        t = n_33;
        t = (ATerm) ATempty;
      }
  }
  k_79 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, f_79, g_79));
  p_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, f_79, g_79)), k_79);
  t = d_10(k_11, p_79, k_79, t);
  i_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_79, (ATerm) ATmakeAppl(sym__2, f_79, g_79));
  n_79 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_33, (ATerm) ATinsert(CheckATermList(l_79), e_79));
  o_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_79, (ATerm) ATmakeAppl(sym__2, f_79, g_79)), (ATerm) ATmakeAppl(sym_Defined_2, term_p_33, (ATerm) ATinsert(CheckATermList(l_79), e_79)));
  t = b_10(n_11, n_79, o_79, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_u_33, i_79);
  m_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_79, (ATerm) ATmakeAppl(sym_Defined_2, term_u_33, i_79));
  t = b_10(o_11, h_79, m_79, t);
  t = j_79;
  return(t);
}
static ATerm b_10 (ATerm d_110 (ATerm), ATerm f_42, ATerm d_42, ATerm t)
{
  ATerm v_79 = NULL,w_79 = NULL,x_79 = NULL,y_79 = NULL,z_79 = NULL,a_80 = NULL;
  y_79 = t;
  t = d_110(t);
  v_79 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_79, f_42, d_42);
  t = s_10(v_79, f_42, d_42, t);
  {
    ATerm v_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_80 = NULL;
        t = term_x_33;
        b_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_79, term_x_33);
        t = r_10(v_79, b_80, t);
        LocalPopChoice(w_33);
      }
    else
      {
        t = v_33;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_79 = ATgetFirst((ATermList) t);
      x_79 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_x_33;
  z_79 = t;
  t = (ATerm) ATinsert(CheckATermList(x_79), (ATerm) ATinsert(CheckATermList(w_79), f_42));
  a_80 = t;
  t = SSL_table_put(v_79, z_79, a_80);
  t = y_79;
  return(t);
}
static ATerm c_10 (ATerm s_112 (ATerm), ATerm t_112 (ATerm), ATerm e_46, ATerm d_46, ATerm t)
{
  t = t_112(t);
  {
    static ATerm p_11 (ATerm t)
    {
      ATerm c_80 = NULL;
      c_80 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_46, c_80);
      t = s_112(t);
      return(t);
    }
    t = fetch_1_0(p_11, t);
  }
  t = d_46;
  return(t);
}
static ATerm d_10 (ATerm p_112 (ATerm), ATerm a_46, ATerm z_45, ATerm t)
{
  static ATerm s_80 (ATerm t)
  {
    ATerm n_80 = NULL,o_80 = NULL,p_80 = NULL;
    n_80 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_45;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_80 = ATgetFirst((ATermList) t);
            p_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm z_33 = t;
          int a_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_80;
              {
                static ATerm z_11 (ATerm t)
                {
                  t = z_45;
                  return(t);
                }
                t = c_10(p_112, z_11, o_80, p_80, t);
              }
              t = s_80(t);
              LocalPopChoice(a_34);
            }
          else
            {
              t = z_33;
              {
                ATerm y_33 = NULL,e_34 = NULL,z_6 = NULL;
                t = SSLgetAnnotations(n_80);
                y_33 = t;
                t = p_80;
                t = s_80(t);
                e_34 = t;
                t = (ATerm) ATinsert(CheckATermList(e_34), o_80);
                z_6 = t;
                t = SSLsetAnnotations(z_6, y_33);
              }
            }
        }
      }
    return(t);
  }
  t = a_46;
  t = s_80(t);
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm g_81 = NULL;
  g_81 = t;
  {
    ATerm b_34 = t;
    int c_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_35 = NULL,l_35 = NULL;
        t = term_y_32;
        l_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_y_32, g_81);
        t = f_10(l_35, g_81, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm d_34 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_34) != ATmakeSymbol("a_1", 0, ATtrue)))
              _fail(t);
            h_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_35;
        LocalPopChoice(c_34);
      }
    else
      {
        t = b_34;
        {
          ATerm f_34 = t;
          int g_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_35 = NULL,u_35 = NULL;
              t = term_y_32;
              u_35 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_y_32, g_81);
              t = f_10(u_35, g_81, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm h_34 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) h_34) != ATmakeSymbol("w_0", 0, ATtrue)))
                    _fail(t);
                  r_35 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_35;
              LocalPopChoice(g_34);
            }
          else
            {
              t = f_34;
              {
                ATerm z_35 = NULL,h_36 = NULL;
                t = term_y_32;
                h_36 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_y_32, g_81);
                t = f_10(h_36, g_81, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm m_34 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) m_34) != ATmakeSymbol("s_0", 0, ATtrue)))
                      _fail(t);
                    z_35 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = z_35;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm f_10 (ATerm y_42, ATerm z_42, ATerm t)
{
  ATerm k_81 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_42, z_42);
  t = r_10(y_42, z_42, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_81 = ATgetFirst((ATermList) t);
      {
        ATerm n_34 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = k_81;
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm b_82 = NULL,d_82 = NULL;
  b_82 = t;
  if(match_cons(t, sym__2))
    {
      ATerm o_34 = ATgetArgument(t, 0);
      d_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_82;
  if(match_cons(t, sym__2))
    {
      ATerm p_34 = ATgetArgument(t, 0);
      ATerm q_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_37 = NULL,s_37 = NULL;
        t = term_x_32;
        s_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_32, b_82);
        t = f_10(s_37, b_82, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm v_34 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_34) != ATmakeSymbol("y_0", 0, ATtrue)))
              _fail(t);
            i_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_37;
        LocalPopChoice(s_34);
      }
    else
      {
        t = r_34;
        {
          ATerm w_34 = t;
          int y_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_37 = NULL,c_38 = NULL;
              t = term_x_32;
              c_38 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_x_32, b_82);
              t = f_10(c_38, b_82, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm z_34 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) z_34) != ATmakeSymbol("u_0", 0, ATtrue)))
                    _fail(t);
                  z_37 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = z_37;
              LocalPopChoice(y_34);
            }
          else
            {
              t = w_34;
              {
                ATerm l_38 = NULL,a_39 = NULL;
                t = term_x_32;
                a_39 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_x_32, b_82);
                t = f_10(a_39, b_82, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm a_35 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) a_35) != ATmakeSymbol("q_0", 0, ATtrue)))
                      _fail(t);
                    l_38 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = l_38;
              }
            }
        }
      }
  }
  return(t);
}
ATerm foldr_3_0 (ATerm f_115 (ATerm), ATerm g_115 (ATerm), ATerm h_115 (ATerm), ATerm t)
{
  ATerm k_82 = NULL,l_82 = NULL,m_82 = NULL;
  k_82 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_82;
      t = f_115(t);
    }
  else
    {
      ATerm p_82 = NULL,q_82 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_82 = ATgetFirst((ATermList) t);
          m_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_82;
      t = h_115(t);
      p_82 = t;
      t = m_82;
      t = foldr_3_0(f_115, g_115, h_115, t);
      q_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_82, q_82);
      t = g_115(t);
    }
  return(t);
}
static ATerm b_12 (ATerm t)
{
  t = term_v_18;
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm f_83 = NULL,g_83 = NULL;
  if(match_cons(t, sym__2))
    {
      f_83 = ATgetArgument(t, 0);
      g_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(f_83, g_83, t);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_n_16;
  return(t);
}
static ATerm h_12 (ATerm t)
{
  t = term_v_18;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm h_83 = NULL,i_83 = NULL;
  if(match_cons(t, sym__2))
    {
      h_83 = ATgetArgument(t, 0);
      i_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(h_83, i_83, t);
  return(t);
}
static ATerm j_12 (ATerm t)
{
  t = term_n_16;
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm j_83 = NULL;
  if(match_cons(t, sym__2))
    {
      j_83 = ATgetArgument(t, 0);
      if((j_83 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm l_12 (ATerm t)
{
  t = term_x_32;
  return(t);
}
static ATerm m_12 (ATerm t)
{
  t = term_y_32;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm r_82 = NULL,s_82 = NULL,t_82 = NULL,u_82 = NULL,v_82 = NULL,w_82 = NULL,x_82 = NULL,y_82 = NULL,z_82 = NULL,a_83 = NULL,b_83 = NULL,c_83 = NULL,d_83 = NULL,e_83 = NULL;
  t_82 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      w_82 = ATgetArgument(t, 0);
      r_82 = ATgetArgument(t, 1);
      s_82 = ATgetArgument(t, 2);
      {
        ATerm d_35 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  y_82 = t;
  t = r_82;
  t = foldr_3_0(b_12, d_12, g_12, t);
  u_82 = t;
  t = s_82;
  t = foldr_3_0(h_12, i_12, j_12, t);
  v_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_82, (ATerm) ATmakeAppl(sym__2, u_82, v_82));
  {
    ATerm e_35 = t;
    int i_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(i_35);
      }
    else
      {
        t = e_35;
        t = (ATerm) ATempty;
      }
  }
  a_83 = t;
  t = w_82;
  {
    ATerm j_35 = t;
    int k_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(k_35);
      }
    else
      {
        t = j_35;
        t = (ATerm) ATempty;
      }
  }
  z_82 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, u_82, v_82));
  e_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, u_82, v_82)), z_82);
  t = d_10(k_12, e_83, z_82, t);
  x_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_82, (ATerm) ATmakeAppl(sym__2, u_82, v_82));
  c_83 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_m_35, (ATerm) ATinsert(CheckATermList(a_83), t_82));
  d_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_82, (ATerm) ATmakeAppl(sym__2, u_82, v_82)), (ATerm) ATmakeAppl(sym_Defined_2, term_m_35, (ATerm) ATinsert(CheckATermList(a_83), t_82)));
  t = b_10(l_12, c_83, d_83, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_35, x_82);
  b_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_82, (ATerm) ATmakeAppl(sym_Defined_2, term_o_35, x_82));
  t = b_10(m_12, w_82, b_83, t);
  t = y_82;
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm q_35 = t;
  int s_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RegisterSDefT_0_0(t);
      LocalPopChoice(s_35);
    }
  else
    {
      t = q_35;
      {
        ATerm t_35 = t;
        int v_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RegisterExtSDef_0_0(t);
            LocalPopChoice(v_35);
          }
        else
          {
            t = t_35;
            t = RegisterExtSDefInl_0_0(t);
          }
      }
    }
  return(t);
}
ATerm needed_defs_0_0 (ATerm t)
{
  ATerm k_83 = NULL;
  t = map_1_0(o_12, t);
  k_83 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_a_36), k_83, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm p_83 (ATerm), ATerm q_83 (ATerm), ATerm t)
{
  ATerm l_83 = NULL,m_83 = NULL,n_83 = NULL,o_83 = NULL,r_83 = NULL,s_83 = NULL,b_7 = NULL;
  s_83 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_83 = ATgetFirst((ATermList) t);
      n_83 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_83);
  l_83 = t;
  t = m_83;
  t = p_83(t);
  o_83 = t;
  t = n_83;
  t = q_83(t);
  r_83 = t;
  t = (ATerm) ATinsert(CheckATermList(r_83), o_83);
  b_7 = t;
  t = SSLsetAnnotations(b_7, l_83);
  return(t);
}
static ATerm i_10 (ATerm j_33, ATerm k_33, ATerm t)
{
  ATerm t_83 = NULL;
  t = SSL_fputc(j_33, k_33);
  t_83 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_83);
  return(t);
}
static ATerm j_10 (ATerm e_32, ATerm f_32, ATerm t)
{
  ATerm u_83 = NULL;
  t = SSL_write_term_to_stream_text(e_32, f_32);
  u_83 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_83);
  return(t);
}
static ATerm l_10 (ATerm u_105 (ATerm), ATerm h_239, ATerm i_32, ATerm t)
{
  ATerm v_83 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_239, term_d_36);
  t = o_10(t);
  v_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_83, i_32);
  t = u_105(t);
  t = fclose_0_0(t);
  t = i_32;
  return(t);
}
static ATerm k_10 (ATerm a_32, ATerm b_32, ATerm t)
{
  ATerm w_83 = NULL;
  t = SSL_write_term_to_stream_baf(a_32, b_32);
  w_83 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_83);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_36 = ATgetArgument(t, 0);
      if(match_cons(e_36, sym_Stream_1))
        {
          r_39 = ATgetArgument(e_36, 0);
        }
      else
        _fail(t);
      s_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_10(r_39, s_39, t);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,t_40 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_36 = ATgetArgument(t, 0);
      if(match_cons(i_36, sym_Stream_1))
        {
          q_40 = ATgetArgument(i_36, 0);
        }
      else
        _fail(t);
      t_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_10(q_40, t_40, t);
  n_40 = t;
  t = term_j_36;
  o_40 = t;
  t = n_40;
  if(match_cons(t, sym_Stream_1))
    {
      p_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_j_36, n_40);
  t = i_10(o_40, p_40, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm a_84 = NULL,b_84 = NULL,c_84 = NULL,d_84 = NULL,e_84 = NULL,g_84 = NULL,h_84 = NULL,i_84 = NULL,j_84 = NULL,k_84 = NULL,k_85 = NULL,l_85 = NULL,f_7 = NULL,e_7 = NULL;
  b_84 = t;
  if(match_cons(t, sym__2))
    {
      i_84 = ATgetArgument(t, 0);
      j_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_84);
  h_84 = t;
  t = i_84;
  {
    ATerm k_36 = t;
    int l_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm p_12 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((a_84 != NULL) && (a_84 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                a_84 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(p_12, t);
        LocalPopChoice(l_36);
      }
    else
      {
        t = k_36;
        t = term_m_36;
        a_84 = t;
      }
  }
  k_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_84, j_84);
  e_7 = t;
  t = SSLsetAnnotations(e_7, h_84);
  t = b_84;
  if(match_cons(t, sym__2))
    {
      d_84 = ATgetArgument(t, 0);
      e_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_84);
  c_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_84, (ATerm) ATmakeAppl(sym__2, not_null(a_84), e_84));
  f_7 = t;
  t = SSLsetAnnotations(f_7, c_84);
  g_84 = t;
  if(match_cons(t, sym__2))
    {
      k_85 = ATgetArgument(t, 0);
      l_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_36 = t;
    int o_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,g_7 = NULL;
        t = SSLgetAnnotations(g_84);
        i_39 = t;
        t = k_85;
        t = fetch_1_0(s_12, t);
        l_39 = t;
        t = l_85;
        if(match_cons(t, sym__2))
          {
            n_39 = ATgetArgument(t, 0);
            o_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_10(t_12, n_39, o_39, t);
        m_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_39, m_39);
        g_7 = t;
        t = SSLsetAnnotations(g_7, i_39);
        LocalPopChoice(o_36);
      }
    else
      {
        t = n_36;
        {
          ATerm d_40 = NULL,g_40 = NULL,l_40 = NULL,m_40 = NULL,h_7 = NULL;
          t = SSLgetAnnotations(g_84);
          d_40 = t;
          t = l_85;
          if(match_cons(t, sym__2))
            {
              l_40 = ATgetArgument(t, 0);
              m_40 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_10(u_12, l_40, m_40, t);
          g_40 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_85, g_40);
          h_7 = t;
          t = SSLsetAnnotations(h_7, d_40);
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
ATerm apply_strategy_1_0 (ATerm o_124 (ATerm), ATerm t)
{
  ATerm o_85 = NULL,p_85 = NULL,q_85 = NULL,r_85 = NULL,s_85 = NULL;
  s_85 = t;
  t = dtime_0_0(t);
  t = s_85;
  t = o_124(t);
  r_85 = t;
  t = dtime_0_0(t);
  o_85 = t;
  t = r_85;
  if(match_cons(t, sym__2))
    {
      p_85 = ATgetArgument(t, 0);
      q_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_85), (ATerm) ATmakeAppl(sym_Runtime_1, o_85)), q_85);
  return(t);
}
static ATerm g_86 (ATerm a_86, ATerm t)
{
  t = SSL_fclose(a_86);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_86 = NULL,e_86 = NULL;
  e_86 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_86 = ATgetArgument(t, 0);
      {
        ATerm p_36 = t;
        int q_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_86);
            LocalPopChoice(q_36);
          }
        else
          {
            t = p_36;
            t = g_86(e_86, t);
          }
      }
    }
  else
    {
      t = g_86(e_86, t);
    }
  return(t);
}
static ATerm m_10 (ATerm g_32, ATerm t)
{
  t = SSL_read_term_from_stream(g_32);
  return(t);
}
static ATerm n_10 (ATerm l_33, ATerm m_33, ATerm t)
{
  ATerm h_86 = NULL;
  t = SSL_fopen(l_33, m_33);
  h_86 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_86);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_86 = NULL;
  t = SSL_stdin_stream();
  i_86 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_86);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_86 = NULL;
  t = SSL_stdout_stream();
  j_86 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_86);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_86 = NULL;
  t = SSL_stderr_stream();
  k_86 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_86);
  return(t);
}
static ATerm r_87 (ATerm q_86, ATerm t)
{
  ATerm r_86 = NULL;
  t = SSL_explode_term(q_86);
  if(match_cons(t, sym__2))
    {
      ATerm r_36 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_36) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_36 = ATgetArgument(t, 1);
        if(((ATgetType(s_36) == AT_LIST) && !(ATisEmpty(s_36))))
          {
            r_86 = ATgetFirst((ATermList) s_36);
            {
              ATerm t_36 = (ATerm) ATgetNext((ATermList) s_36);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_86;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_86;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_86;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_86;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm s_87 (ATerm u_86, ATerm v_86, ATerm w_86, ATerm t)
{
  ATerm x_86 = NULL,y_86 = NULL,z_86 = NULL,c_87 = NULL,q_7 = NULL;
  t = SSLgetAnnotations(w_86);
  z_86 = t;
  t = u_86;
  if(match_cons(t, sym_Path_1))
    {
      c_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_87, v_86);
  q_7 = t;
  t = SSLsetAnnotations(q_7, z_86);
  if(match_cons(t, sym__2))
    {
      x_86 = ATgetArgument(t, 0);
      y_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(x_86, y_86, t);
  return(t);
}
static ATerm t_87 (ATerm e_87, ATerm f_87, ATerm g_87, ATerm t)
{
  ATerm h_87 = NULL,i_87 = NULL,j_87 = NULL,m_87 = NULL,r_7 = NULL;
  t = SSLgetAnnotations(g_87);
  j_87 = t;
  t = SSL_is_string(e_87);
  m_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_87, f_87);
  r_7 = t;
  t = SSLsetAnnotations(r_7, j_87);
  if(match_cons(t, sym__2))
    {
      h_87 = ATgetArgument(t, 0);
      i_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(h_87, i_87, t);
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm o_87 = NULL,p_87 = NULL,q_87 = NULL;
  o_87 = t;
  if(match_cons(t, sym__2))
    {
      p_87 = ATgetArgument(t, 0);
      q_87 = ATgetArgument(t, 1);
      {
        ATerm u_36 = t;
        int v_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_87(o_87, t);
            LocalPopChoice(v_36);
          }
        else
          {
            t = u_36;
            {
              ATerm w_36 = t;
              int x_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_87(p_87, q_87, o_87, t);
                  LocalPopChoice(x_36);
                }
              else
                {
                  t = w_36;
                  t = t_87(p_87, q_87, o_87, t);
                }
            }
          }
      }
    }
  else
    {
      t = r_87(o_87, t);
    }
  return(t);
}
static ATerm y_12 (ATerm t)
{
  t = term_y_36;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_87 = NULL,v_87 = NULL,w_87 = NULL;
  ATerm z_36 = t;
  int a_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_87 = NULL;
      x_87 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_87, term_b_37);
      t = o_10(t);
      LocalPopChoice(a_37);
    }
  else
    {
      t = z_36;
      t = debug_1_0(y_12, t);
      _fail(t);
    }
  v_87 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_10(w_87, t);
  u_87 = t;
  t = v_87;
  t = fclose_0_0(t);
  t = u_87;
  return(t);
}
ATerm fetch_1_0 (ATerm x_110 (ATerm), ATerm t)
{
  static ATerm v_88 (ATerm t)
  {
    ATerm s_88 = NULL,t_88 = NULL,u_88 = NULL;
    s_88 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_88 = ATgetFirst((ATermList) t);
        u_88 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm c_37 = t;
      int d_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_41 = NULL,r_41 = NULL,v_7 = NULL;
          t = SSLgetAnnotations(s_88);
          m_41 = t;
          t = t_88;
          t = x_110(t);
          r_41 = t;
          t = (ATerm) ATinsert(CheckATermList(u_88), r_41);
          v_7 = t;
          t = SSLsetAnnotations(v_7, m_41);
          LocalPopChoice(d_37);
        }
      else
        {
          t = c_37;
          {
            ATerm l_42 = NULL,u_42 = NULL,w_7 = NULL;
            t = SSLgetAnnotations(s_88);
            l_42 = t;
            t = u_88;
            t = v_88(t);
            u_42 = t;
            t = (ATerm) ATinsert(CheckATermList(u_42), t_88);
            w_7 = t;
            t = SSLsetAnnotations(w_7, l_42);
          }
        }
    }
    return(t);
  }
  t = v_88(t);
  return(t);
}
static ATerm h_10 (ATerm d_55, ATerm e_55, ATerm t)
{
  t = SSL_strcat(d_55, e_55);
  return(t);
}
ATerm debug_1_0 (ATerm s_105 (ATerm), ATerm t)
{
  ATerm y_88 = NULL,z_88 = NULL,a_89 = NULL,b_89 = NULL;
  y_88 = t;
  t = s_105(t);
  z_88 = t;
  t = term_k_16;
  a_89 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_88), z_88);
  b_89 = t;
  t = SSL_printnl(a_89, b_89);
  t = y_88;
  return(t);
}
static ATerm z_12 (ATerm t)
{
  ATerm e_37 = t;
  int f_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(f_37);
    }
  else
    {
      t = e_37;
    }
  return(t);
}
static ATerm a_13 (ATerm t)
{
  t = term_g_37;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm h_37 = t;
  int j_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_89 = NULL;
      i_89 = t;
      t = SSL_is_string(i_89);
      LocalPopChoice(j_37);
    }
  else
    {
      t = h_37;
      {
        ATerm k_37 = t;
        int m_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(z_12, t);
            LocalPopChoice(m_37);
          }
        else
          {
            t = k_37;
            {
              ATerm o_89 = NULL,p_89 = NULL,q_89 = NULL;
              o_89 = t;
              if(match_cons(t, sym_Path_1))
                {
                  p_89 = ATgetArgument(t, 0);
                  t = p_89;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      p_89 = ATgetArgument(t, 0);
                      t = p_89;
                      {
                        ATerm o_37 = t;
                        int p_37 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(p_37);
                          }
                        else
                          {
                            t = o_37;
                            t = debug_1_0(a_13, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm u_89 = NULL,v_89 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          p_89 = ATgetArgument(t, 0);
                          q_89 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_89;
                      t = eval_config_0_0(t);
                      u_89 = t;
                      t = q_89;
                      t = eval_config_0_0(t);
                      v_89 = t;
                      t = (ATerm) ATmakeAppl(sym__2, u_89, v_89);
                      t = h_10(u_89, v_89, t);
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
  ATerm z_89 = NULL,a_90 = NULL;
  z_89 = t;
  t = term_q_37;
  a_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_37, z_89);
  t = r_10(a_90, z_89, t);
  {
    ATerm r_37 = t;
    int t_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_90 = NULL,c_90 = NULL;
        t = eval_config_0_0(t);
        b_90 = t;
        t = term_q_37;
        c_90 = t;
        t = SSL_table_put(c_90, z_89, b_90);
        t = b_90;
        LocalPopChoice(t_37);
      }
    else
      {
        t = r_37;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm l_107 (ATerm), ATerm t)
{
  ATerm g_90 = NULL;
  g_90 = t;
  {
    ATerm u_37 = t;
    int v_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_90 = NULL;
        t = term_y_37;
        t = get_config_0_0(t);
        i_90 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_90, term_a_38);
        t = geq_0_0(t);
        t = g_90;
        t = l_107(t);
        LocalPopChoice(v_37);
      }
    else
      {
        t = u_37;
        t = g_90;
      }
  }
  return(t);
}
static ATerm b_13 (ATerm t)
{
  ATerm l_90 = NULL;
  l_90 = t;
  if(match_string(t, "-k"))
    {
      t = l_90;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = l_90;
    }
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm m_90 = NULL,n_90 = NULL,o_90 = NULL;
  m_90 = t;
  t = SSL_string_to_int(m_90);
  n_90 = t;
  t = term_b_38;
  o_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_38, n_90);
  t = u_10(o_90, n_90, t);
  t = m_90;
  return(t);
}
static ATerm f_13 (ATerm t)
{
  t = term_d_38;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_13, e_13, f_13, t);
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm q_90 = NULL;
  q_90 = t;
  if(match_string(t, "-S"))
    {
      t = q_90;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = q_90;
    }
  return(t);
}
static ATerm o_13 (ATerm t)
{
  ATerm r_90 = NULL,s_90 = NULL;
  t = term_y_37;
  r_90 = t;
  t = term_v_18;
  s_90 = t;
  t = term_j_38;
  t = u_10(r_90, s_90, t);
  t = term_k_38;
  return(t);
}
static ATerm p_13 (ATerm t)
{
  t = term_p_38;
  return(t);
}
static ATerm x_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm t_90 = NULL,u_90 = NULL,v_90 = NULL;
  t_90 = t;
  t = SSL_string_to_int(t_90);
  u_90 = t;
  t = term_y_37;
  v_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_37, u_90);
  t = u_10(v_90, u_90, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_90);
  return(t);
}
static ATerm b_14 (ATerm t)
{
  t = term_w_38;
  return(t);
}
static ATerm c_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm w_90 = NULL,x_90 = NULL;
  t = term_b_39;
  w_90 = t;
  t = term_j_16;
  x_90 = t;
  t = term_d_39;
  t = u_10(w_90, x_90, t);
  t = term_h_39;
  return(t);
}
static ATerm l_14 (ATerm t)
{
  t = term_j_39;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_39 = t;
  int q_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_13, o_13, p_13, t);
      LocalPopChoice(q_39);
    }
  else
    {
      t = k_39;
      {
        ATerm u_39 = t;
        int v_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(x_13, z_13, b_14, t);
            LocalPopChoice(v_39);
          }
        else
          {
            t = u_39;
            t = Option_3_0(c_14, k_14, l_14, t);
          }
      }
    }
  return(t);
}
static ATerm u_10 (ATerm l_37, ATerm n_37, ATerm t)
{
  ATerm y_90 = NULL;
  t = term_q_37;
  y_90 = t;
  t = SSL_table_put(y_90, l_37, n_37);
  t = (ATerm) ATmakeAppl(sym__3, term_q_37, l_37, n_37);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm b_91 = NULL,c_91 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_91 = NULL,e_91 = NULL,f_91 = NULL;
      t = term_j_16;
      t = i_0(t);
      d_91 = t;
      t = term_w_39;
      e_91 = t;
      t = term_y_39;
      f_91 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_39, term_y_39, d_91);
      t = s_10(e_91, f_91, d_91, t);
      _fail(t);
    }
  else
    {
      ATerm i_91 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_91 = ATgetFirst((ATermList) t);
          c_91 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_91;
      t = d_0(t);
      t = term_j_16;
      t = g_0(t);
      i_91 = t;
      t = (ATerm) ATinsert(CheckATermList(c_91), i_91);
    }
  return(t);
}
static ATerm m_14 (ATerm t)
{
  ATerm k_91 = NULL;
  k_91 = t;
  if(match_string(t, "-o"))
    {
      t = k_91;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = k_91;
    }
  return(t);
}
static ATerm n_14 (ATerm t)
{
  ATerm l_91 = NULL,m_91 = NULL;
  l_91 = t;
  t = term_c_40;
  m_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_40, l_91);
  t = u_10(m_91, l_91, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, l_91);
  return(t);
}
static ATerm o_14 (ATerm t)
{
  t = term_e_40;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_14, n_14, o_14, t);
  return(t);
}
static ATerm s_10 (ATerm n_42, ATerm o_42, ATerm m_42, ATerm t)
{
  ATerm o_91 = NULL,p_91 = NULL,q_91 = NULL;
  o_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_42, o_42);
  {
    ATerm f_40 = t;
    int j_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_40 = ATgetArgument(t, 0);
            ATerm v_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_42, o_42);
        t = r_10(n_42, o_42, t);
        LocalPopChoice(j_40);
      }
    else
      {
        t = f_40;
        t = (ATerm) ATempty;
      }
  }
  p_91 = t;
  t = (ATerm) ATinsert(CheckATermList(p_91), m_42);
  q_91 = t;
  t = SSL_table_put(n_42, o_42, q_91);
  t = o_91;
  return(t);
}
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm x_91 = NULL,y_91 = NULL,z_91 = NULL,a_92 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_92 = NULL,c_92 = NULL,d_92 = NULL;
      t = term_j_16;
      t = t_0(t);
      b_92 = t;
      t = term_w_39;
      c_92 = t;
      t = term_y_39;
      d_92 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_39, term_y_39, b_92);
      t = s_10(c_92, d_92, b_92, t);
      _fail(t);
    }
  else
    {
      ATerm h_92 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_91 = ATgetFirst((ATermList) t);
          y_91 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_91;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_91 = ATgetFirst((ATermList) t);
          a_92 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_91;
      t = p_0(t);
      t = z_91;
      t = r_0(t);
      h_92 = t;
      t = (ATerm) ATinsert(CheckATermList(a_92), h_92);
    }
  return(t);
}
static ATerm p_14 (ATerm t)
{
  ATerm j_92 = NULL;
  j_92 = t;
  if(match_string(t, "-i"))
    {
      t = j_92;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_92;
    }
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm k_92 = NULL,l_92 = NULL;
  k_92 = t;
  t = term_w_40;
  l_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_40, k_92);
  t = u_10(l_92, k_92, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_92);
  return(t);
}
static ATerm s_14 (ATerm t)
{
  t = term_z_40;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_14, q_14, s_14, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_92 = NULL,n_92 = NULL,o_92 = NULL,p_92 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_16;
  t = whoami_0_0(t);
  m_92 = t;
  t = term_k_16;
  o_92 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_41), m_92);
  p_92 = t;
  t = SSL_printnl(o_92, p_92);
  t = term_n_16;
  n_92 = t;
  t = SSL_exit(n_92);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_b_41;
  t = get_config_0_0(t);
  return(t);
}
static ATerm p_10 (ATerm r_40, ATerm s_40, ATerm t)
{
  ATerm c_41 = t;
  int d_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(r_40, s_40);
      LocalPopChoice(d_41);
    }
  else
    {
      t = c_41;
      t = SSL_addr(r_40, s_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm d_115 (ATerm), ATerm e_115 (ATerm), ATerm t)
{
  ATerm r_92 = NULL,s_92 = NULL,t_92 = NULL;
  r_92 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_92;
      t = d_115(t);
    }
  else
    {
      ATerm w_92 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_92 = ATgetFirst((ATermList) t);
          t_92 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_92;
      t = foldr_2_0(d_115, e_115, t);
      w_92 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_92, w_92);
      t = e_115(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm t_14 (ATerm t)
{
  t = term_v_18;
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm v_44 = NULL,w_44 = NULL;
  if(match_cons(t, sym__2))
    {
      v_44 = ATgetArgument(t, 0);
      w_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10(v_44, w_44, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_92 = NULL,u_43 = NULL,s_44 = NULL;
  t = times_0_0(t);
  s_44 = t;
  t = SSL_explode_term(s_44);
  if(match_cons(t, sym__2))
    {
      ATerm e_41 = ATgetArgument(t, 0);
      u_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_43;
  t = foldr_2_0(t_14, u_14, t);
  z_92 = t;
  t = SSL_TicksToSeconds(z_92);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_93 = NULL,l_93 = NULL,m_93 = NULL;
  k_93 = t;
  if(match_cons(t, sym__2))
    {
      l_93 = ATgetArgument(t, 0);
      m_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_41 = t;
    int g_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_93;
        if((l_93 != t))
          {
            _fail(t);
          }
        t = k_93;
        LocalPopChoice(g_41);
      }
    else
      {
        t = f_41;
        t = (ATerm) ATmakeAppl(sym__2, l_93, m_93);
        {
          ATerm h_41 = t;
          int i_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_93, m_93);
              LocalPopChoice(i_41);
            }
          else
            {
              t = h_41;
              t = SSL_gtr(l_93, m_93);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, l_93, m_93);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_107 (ATerm), ATerm t)
{
  ATerm q_93 = NULL;
  q_93 = t;
  {
    ATerm j_41 = t;
    int k_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_93 = NULL;
        t = term_y_37;
        t = get_config_0_0(t);
        s_93 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_93, term_n_16);
        t = geq_0_0(t);
        t = q_93;
        t = k_107(t);
        LocalPopChoice(k_41);
      }
    else
      {
        t = j_41;
        t = q_93;
      }
  }
  return(t);
}
static ATerm v_14 (ATerm t)
{
  ATerm u_93 = NULL,v_93 = NULL,x_93 = NULL,y_93 = NULL;
  t = run_time_0_0(t);
  u_93 = t;
  t = term_j_16;
  t = whoami_0_0(t);
  v_93 = t;
  t = term_k_16;
  x_93 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_41), u_93), term_l_41), v_93);
  y_93 = t;
  t = SSL_printnl(x_93, y_93);
  t = (ATerm) ATmakeAppl(sym__2, term_k_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_41), u_93), term_l_41), v_93));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_14, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_93 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_18;
  z_93 = t;
  t = SSL_exit(z_93);
  return(t);
}
static ATerm x_14 (ATerm t)
{
  ATerm h_94 = NULL,i_94 = NULL;
  i_94 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = i_94;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          h_94 = ATgetArgument(t, 0);
          {
            ATerm f_47 = NULL,a_8 = NULL;
            t = SSLgetAnnotations(i_94);
            f_47 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, h_94);
            a_8 = t;
            t = SSLsetAnnotations(a_8, f_47);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = i_94;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_125 (ATerm), ATerm t)
{
  ATerm o_41 = t;
  int p_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_41;
      t = get_config_0_0(t);
      LocalPopChoice(p_41);
    }
  else
    {
      t = o_41;
      t = fetch_1_0(x_14, t);
    }
  t = m_125(t);
  return(t);
}
ATerm map_1_0 (ATerm n_110 (ATerm), ATerm t)
{
  static ATerm y_94 (ATerm t)
  {
    ATerm v_94 = NULL,w_94 = NULL,x_94 = NULL;
    v_94 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_94;
      }
    else
      {
        ATerm n_47 = NULL,w_47 = NULL,x_47 = NULL,l_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_94 = ATgetFirst((ATermList) t);
            x_94 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_94);
        n_47 = t;
        t = w_94;
        t = n_110(t);
        w_47 = t;
        t = x_94;
        t = y_94(t);
        x_47 = t;
        t = (ATerm) ATinsert(CheckATermList(x_47), w_47);
        l_8 = t;
        t = SSLsetAnnotations(l_8, n_47);
      }
    return(t);
  }
  t = y_94(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm b_95 = NULL,c_95 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_95 = ATgetFirst((ATermList) t);
      c_95 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_95 = NULL,h_95 = NULL;
        static ATerm y_14 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_95)), not_null(h_95));
          return(t);
        }
        t = c_95;
        t = n_0(t);
        if(((g_95 != NULL) && (g_95 != t)))
          _fail(t);
        else
          g_95 = t;
        t = b_95;
        t = k_0(t);
        if(((h_95 != NULL) && (h_95 != t)))
          _fail(t);
        else
          h_95 = t;
        t = c_95;
        t = reverse_acc_2_0(k_0, y_14, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_16;
      t = n_0(t);
    }
  return(t);
}
static ATerm r_10 (ATerm e_44, ATerm f_44, ATerm t)
{
  t = SSL_table_get(e_44, f_44);
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm l_95 = NULL,m_95 = NULL,n_95 = NULL,w_8 = NULL;
  n_95 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_95);
  l_95 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, m_95);
  w_8 = t;
  t = SSLsetAnnotations(w_8, l_95);
  return(t);
}
static ATerm a_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm p_95 = NULL;
  p_95 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_95), term_s_41);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_95 = NULL,k_95 = NULL;
  ATerm t_41 = t;
  int u_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_41;
      t = get_config_0_0(t);
      LocalPopChoice(u_41);
    }
  else
    {
      t = t_41;
      t = fetch_1_0(z_14, t);
    }
  t = term_v_41;
  t = echo_0_0(t);
  t = term_w_39;
  j_95 = t;
  t = term_y_39;
  k_95 = t;
  t = term_w_41;
  t = r_10(j_95, k_95, t);
  t = reverse_acc_2_0(_id, a_15, t);
  t = map_1_0(b_15, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_95 = NULL,s_95 = NULL,t_95 = NULL;
  r_95 = t;
  {
    ATerm x_41 = t;
    int y_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_95;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_41 = ATgetFirst((ATermList) t);
                ATerm a_42 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_95;
          }
        LocalPopChoice(y_41);
      }
    else
      {
        t = x_41;
        t = (ATerm) ATinsert(ATempty, r_95);
      }
  }
  s_95 = t;
  t = term_m_36;
  t_95 = t;
  t = SSL_printnl(t_95, s_95);
  t = r_95;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_b_41;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm c_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm x_95 = NULL,y_95 = NULL;
  t = term_b_42;
  x_95 = t;
  t = term_j_16;
  y_95 = t;
  t = term_c_42;
  t = u_10(x_95, y_95, t);
  return(t);
}
static ATerm f_15 (ATerm t)
{
  t = term_e_42;
  return(t);
}
static ATerm g_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_15 (ATerm t)
{
  ATerm z_95 = NULL,a_96 = NULL,b_96 = NULL,c_96 = NULL;
  t = term_b_42;
  b_96 = t;
  t = term_j_16;
  c_96 = t;
  t = term_c_42;
  t = u_10(b_96, c_96, t);
  t = term_g_42;
  z_95 = t;
  t = term_j_16;
  a_96 = t;
  t = term_h_42;
  t = u_10(z_95, a_96, t);
  t = term_i_42;
  return(t);
}
static ATerm j_15 (ATerm t)
{
  t = term_j_42;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_42 = t;
  int p_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_15, d_15, f_15, t);
      LocalPopChoice(p_42);
    }
  else
    {
      t = k_42;
      t = Option_3_0(g_15, i_15, j_15, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_127 (ATerm), ATerm t)
{
  ATerm h_96 = NULL,i_96 = NULL,j_96 = NULL,k_96 = NULL,m_96 = NULL,n_96 = NULL,g_11 = NULL;
  h_96 = t;
  {
    ATerm q_42 = t;
    int r_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_42;
        t = p_127(t);
        LocalPopChoice(r_42);
      }
    else
      {
        t = q_42;
      }
  }
  t = h_96;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_96 = ATgetFirst((ATermList) t);
      k_96 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_96);
  i_96 = t;
  t = term_b_41;
  n_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_41, j_96);
  t = u_10(n_96, j_96, t);
  t = k_96;
  {
    static ATerm x_96 (ATerm t)
    {
      ATerm t_42 = t;
      int v_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_42 = t;
          int x_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_96 = NULL;
              q_96 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = q_96;
              LocalPopChoice(x_42);
            }
          else
            {
              t = w_42;
              t = p_127(t);
              t = Cons_2_0(_id, x_96, t);
            }
          LocalPopChoice(v_42);
        }
      else
        {
          t = t_42;
          {
            ATerm t_96 = NULL,u_96 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                t_96 = ATgetFirst((ATermList) t);
                u_96 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(u_96), (ATerm) ATmakeAppl(sym_Undefined_1, t_96));
          }
        }
      return(t);
    }
    t = x_96(t);
  }
  m_96 = t;
  t = (ATerm) ATinsert(CheckATermList(m_96), (ATerm) ATmakeAppl(sym_Program_1, j_96));
  g_11 = t;
  t = SSLsetAnnotations(g_11, i_96);
  return(t);
}
static ATerm l_15 (ATerm t)
{
  ATerm j_97 = NULL;
  j_97 = t;
  if(match_string(t, "--help"))
    {
      t = j_97;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = j_97;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = j_97;
        }
    }
  return(t);
}
static ATerm m_15 (ATerm t)
{
  ATerm k_97 = NULL,l_97 = NULL;
  t = term_q_41;
  k_97 = t;
  t = term_j_16;
  l_97 = t;
  t = term_a_43;
  t = u_10(k_97, l_97, t);
  t = term_b_43;
  return(t);
}
static ATerm o_15 (ATerm t)
{
  t = term_c_43;
  return(t);
}
static ATerm p_15 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_127 (ATerm), ATerm t)
{
  ATerm c_97 = NULL,d_97 = NULL,e_97 = NULL,f_97 = NULL,g_97 = NULL,h_97 = NULL,i_97 = NULL;
  e_97 = t;
  t = term_w_39;
  g_97 = t;
  t = term_y_39;
  h_97 = t;
  t = (ATerm) ATempty;
  i_97 = t;
  t = SSL_table_put(g_97, h_97, i_97);
  t = e_97;
  {
    static ATerm k_15 (ATerm t)
    {
      ATerm d_43 = t;
      int e_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_127(t);
          LocalPopChoice(e_43);
        }
      else
        {
          t = d_43;
          {
            ATerm f_43 = t;
            int g_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_15, m_15, o_15, t);
                LocalPopChoice(g_43);
              }
            else
              {
                t = f_43;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(k_15, t);
  }
  {
    ATerm h_43 = t;
    int i_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_97 = NULL;
        x_97 = t;
        {
          ATerm j_43 = t;
          int k_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_48 = NULL;
              t = x_97;
              {
                ATerm l_43 = t;
                int m_43 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_q_41;
                    t = get_config_0_0(t);
                    LocalPopChoice(m_43);
                  }
                else
                  {
                    t = l_43;
                    t = fetch_1_0(p_15, t);
                  }
              }
              t = x_97;
              t = default_system_usage_0_0(t);
              t = term_v_18;
              i_48 = t;
              t = SSL_exit(i_48);
              LocalPopChoice(k_43);
            }
          else
            {
              t = j_43;
              {
                ATerm q_48 = NULL;
                t = term_b_42;
                t = get_config_0_0(t);
                t = x_97;
                t = default_system_about_0_0(t);
                t = term_v_18;
                q_48 = t;
                t = SSL_exit(q_48);
              }
            }
        }
        LocalPopChoice(i_43);
      }
    else
      {
        t = h_43;
        {
          ATerm n_43 = t;
          int o_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_97 = NULL,z_97 = NULL,a_98 = NULL;
              static ATerm q_15 (ATerm t)
              {
                ATerm b_98 = NULL,c_98 = NULL,d_98 = NULL,m_11 = NULL;
                d_98 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    c_98 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(d_98);
                b_98 = t;
                t = c_98;
                if(((c_97 != NULL) && (c_97 != t)))
                  _fail(t);
                else
                  c_97 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, c_98);
                m_11 = t;
                t = SSLsetAnnotations(m_11, b_98);
                return(t);
              }
              t = fetch_1_0(q_15, t);
              t = term_k_16;
              z_97 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_97)), term_p_43);
              a_98 = t;
              t = SSL_printnl(z_97, a_98);
              t = (ATerm) ATmakeAppl(sym__2, term_k_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_97)), term_p_43));
              t = default_system_usage_0_0(t);
              t = term_n_16;
              y_97 = t;
              t = SSL_exit(y_97);
              LocalPopChoice(o_43);
            }
          else
            {
              t = n_43;
            }
        }
      }
  }
  d_97 = t;
  t = term_w_39;
  f_97 = t;
  t = SSL_table_destroy(f_97);
  t = d_97;
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_125 (ATerm), ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm t)
{
  ATerm l_98 = NULL,m_98 = NULL,n_98 = NULL,o_98 = NULL;
  t = parse_options_1_0(o_125, t);
  l_98 = t;
  t = term_q_43;
  o_98 = t;
  t = SSL_table_create(o_98);
  t = term_q_43;
  m_98 = t;
  t = term_r_43;
  n_98 = t;
  t = SSL_table_put(m_98, n_98, l_98);
  t = l_98;
  t = q_125(t);
  {
    ATerm s_43 = t;
    int t_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_125, t);
        LocalPopChoice(t_43);
      }
    else
      {
        t = s_43;
        {
          ATerm v_43 = t;
          int w_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_125(t);
              t = report_success_0_0(t);
              LocalPopChoice(w_43);
            }
          else
            {
              t = v_43;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm s_15 (ATerm t)
{
  t = if_verbose2_1_0(x_15, t);
  return(t);
}
static ATerm u_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_15 (ATerm t)
{
  ATerm p_98 = NULL,q_98 = NULL;
  t = term_x_43;
  p_98 = t;
  t = term_j_16;
  q_98 = t;
  t = term_y_43;
  t = u_10(p_98, q_98, t);
  t = term_z_43;
  return(t);
}
static ATerm w_15 (ATerm t)
{
  t = term_a_44;
  return(t);
}
static ATerm x_15 (ATerm t)
{
  ATerm r_98 = NULL,s_98 = NULL,t_98 = NULL,u_98 = NULL;
  r_98 = t;
  t = term_b_41;
  t = get_config_0_0(t);
  s_98 = t;
  t = term_k_16;
  t_98 = t;
  t = (ATerm) ATinsert(ATempty, s_98);
  u_98 = t;
  t = SSL_printnl(t_98, u_98);
  t = r_98;
  return(t);
}
ATerm iowrap_3_0 (ATerm x_124 (ATerm), ATerm y_124 (ATerm), ATerm z_124 (ATerm), ATerm t)
{
  static ATerm r_15 (ATerm t)
  {
    ATerm b_44 = t;
    int c_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_124(t);
        LocalPopChoice(c_44);
      }
    else
      {
        t = b_44;
        {
          ATerm d_44 = t;
          int g_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(g_44);
            }
          else
            {
              t = d_44;
              {
                ATerm h_44 = t;
                int i_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
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
                          t = Option_3_0(u_15, v_15, w_15, t);
                          LocalPopChoice(k_44);
                        }
                      else
                        {
                          t = j_44;
                          {
                            ATerm l_44 = t;
                            int m_44 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(m_44);
                              }
                            else
                              {
                                t = l_44;
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
  static ATerm t_15 (ATerm t)
  {
    ATerm v_98 = NULL,w_98 = NULL,x_98 = NULL;
    w_98 = t;
    {
      ATerm n_44 = t;
      int o_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm a_16 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((v_98 != NULL) && (v_98 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  v_98 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(a_16, t);
          LocalPopChoice(o_44);
        }
      else
        {
          t = n_44;
          t = term_p_44;
          v_98 = t;
        }
    }
    t = not_null(v_98);
    t = ReadFromFile_0_0(t);
    x_98 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_98, x_98);
    t = apply_strategy_1_0(x_124, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(r_15, z_124, s_15, t_15, t);
  return(t);
}
static ATerm b_16 (ATerm t)
{
  ATerm y_98 = NULL,z_98 = NULL,a_99 = NULL,b_99 = NULL,c_99 = NULL,d_99 = NULL,e_99 = NULL,f_99 = NULL,g_99 = NULL,h_99 = NULL,i_99 = NULL,j_99 = NULL,k_99 = NULL,l_99 = NULL,a_12 = NULL,u_11 = NULL,r_11 = NULL;
  l_99 = t;
  if(match_cons(t, sym__2))
    {
      z_98 = ATgetArgument(t, 0);
      a_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_99);
  y_98 = t;
  t = a_99;
  if(match_cons(t, sym_Specification_1))
    {
      f_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_99);
  e_99 = t;
  t = f_99;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_99 = ATgetFirst((ATermList) t);
      i_99 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_99);
  g_99 = t;
  t = i_99;
  t = Cons_2_0(g_16, h_16, t);
  j_99 = t;
  t = (ATerm) ATinsert(CheckATermList(j_99), h_99);
  r_11 = t;
  t = SSLsetAnnotations(r_11, g_99);
  k_99 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, k_99);
  u_11 = t;
  t = SSLsetAnnotations(u_11, e_99);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm q_44 = ATgetArgument(t, 0);
      if(((ATgetType(q_44) == AT_LIST) && !(ATisEmpty(q_44))))
        {
          c_99 = ATgetFirst((ATermList) q_44);
          {
            ATerm r_44 = (ATerm) ATgetNext((ATermList) q_44);
            if(((ATgetType(r_44) == AT_LIST) && !(ATisEmpty(r_44))))
              {
                ATerm t_44 = ATgetFirst((ATermList) r_44);
                if(match_cons(t_44, sym_Strategies_1))
                  {
                    d_99 = ATgetArgument(t_44, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm u_44 = (ATerm) ATgetNext((ATermList) r_44);
                  if(((ATgetType(u_44) != AT_LIST) || !(ATisEmpty(u_44))))
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
  t = q_8(c_99, d_99, t);
  b_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_98, b_99);
  a_12 = t;
  t = SSLsetAnnotations(a_12, y_98);
  return(t);
}
static ATerm g_16 (ATerm t)
{
  ATerm m_99 = NULL,n_99 = NULL,q_99 = NULL,r_99 = NULL,q_11 = NULL;
  r_99 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      n_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_99);
  m_99 = t;
  t = n_99;
  t = needed_defs_0_0(t);
  q_99 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, q_99);
  q_11 = t;
  t = SSLsetAnnotations(q_11, m_99);
  return(t);
}
static ATerm h_16 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(b_16, _fail, default_usage_0_0, t);
  return(t);
}
