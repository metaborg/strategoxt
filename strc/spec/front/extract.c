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
ATerm term_q_44;
ATerm term_a_44;
ATerm term_z_43;
ATerm term_y_43;
ATerm term_x_43;
ATerm term_s_43;
ATerm term_r_43;
ATerm term_q_43;
ATerm term_c_43;
ATerm term_b_43;
ATerm term_a_43;
ATerm term_t_42;
ATerm term_o_42;
ATerm term_n_42;
ATerm term_i_42;
ATerm term_h_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_w_41;
ATerm term_v_41;
ATerm term_s_41;
ATerm term_r_41;
ATerm term_n_41;
ATerm term_m_41;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_z_40;
ATerm term_y_40;
ATerm term_z_39;
ATerm term_y_39;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_b_39;
ATerm term_z_38;
ATerm term_v_38;
ATerm term_t_38;
ATerm term_o_38;
ATerm term_h_38;
ATerm term_d_38;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_w_37;
ATerm term_r_37;
ATerm term_h_37;
ATerm term_c_37;
ATerm term_y_36;
ATerm term_m_36;
ATerm term_e_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_x_35;
ATerm term_v_35;
ATerm term_m_35;
ATerm term_i_35;
ATerm term_y_33;
ATerm term_r_33;
ATerm term_p_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_a_27;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_j_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_w_19;
ATerm term_m_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_w_18;
ATerm term_b_18;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_d_17;
ATerm term_b_17;
ATerm term_q_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorNeeded", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("e_1", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_f_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_Sort_2, term_u_26, (ATerm) ATempty);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_ConstType_1, term_v_26);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("redefining external definition: ", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(sym__2, term_w_18, term_w_18);
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(sym__2, term_v_35, term_x_35);
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(sym__2, term_w_37, term_w_18);
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_18);
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(sym__2, term_t_38, term_e_16);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(sym__2, term_v_39, term_w_39);
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(sym__2, term_d_42, term_e_16);
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(sym__2, term_h_42, term_e_16);
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(sym__2, term_r_41, term_e_16);
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(sym__2, term_x_43, term_e_16);
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm ConstructorNeeded_0_0 (ATerm t);
ATerm filter_1_0 (ATerm c_116 (ATerm), ATerm t);
static ATerm h_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm DeclareConstructorNeeded_0_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm i_8 (ATerm i_75, ATerm h_75, ATerm t);
static ATerm k_8 (ATerm d_58, ATerm e_58, ATerm f_58, ATerm t);
static ATerm z_0 (ATerm t);
ATerm DefinitionExists_0_0 (ATerm t);
ATerm sboundin_3_0 (ATerm k_97 (ATerm), ATerm l_97 (ATerm), ATerm m_97 (ATerm), ATerm t);
static ATerm b_1 (ATerm t);
static ATerm r_8 (ATerm v_25, ATerm u_25, ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
ATerm free_vars2_4_0 (ATerm j_118 (ATerm), ATerm k_118 (ATerm), ATerm l_118 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm m_118 (ATerm), ATerm t);
static ATerm r_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm svars_arity_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm v_129 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm x_8 (ATerm a_74, ATerm b_74, ATerm c_74, ATerm t);
static ATerm t_40 (ATerm b_40, ATerm t);
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
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm a_104 (ATerm), ATerm b_104 (ATerm), ATerm t);
static ATerm k_5 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm j_99 (ATerm), ATerm t);
static ATerm b_9 (ATerm n_69, ATerm o_69, ATerm p_69, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm f_98 (ATerm), ATerm t);
static ATerm s_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm tuple_unzip_1_0 (ATerm h_102 (ATerm), ATerm t);
ATerm MkDistApplication_0_0 (ATerm t);
static ATerm c_9 (ATerm u_40, ATerm v_40, ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm copy_1_0 (ATerm o_115 (ATerm), ATerm t);
static ATerm d_9 (ATerm g_57, ATerm h_57, ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm g_61 (ATerm h_55, ATerm i_55, ATerm j_55, ATerm k_55, ATerm t);
static ATerm h_61 (ATerm h_58, ATerm n_58, ATerm o_58, ATerm r_58, ATerm t);
static ATerm c_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm DefineCongruence_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm u_110 (ATerm), ATerm t);
ATerm giving_up_0_0 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
ATerm JoinDefsExt_0_0 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm r_7 (ATerm t);
ATerm choices_0_0 (ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm x_99 (ATerm), ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm w_7 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm p_8 (ATerm t);
ATerm JoinDefs2_0_0 (ATerm t);
static ATerm q_63 (ATerm u_61, ATerm v_61, ATerm w_61, ATerm x_61, ATerm t);
ATerm get_definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm y_110 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm k_65 (ATerm b_65, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm j_9 (ATerm f_112 (ATerm), ATerm v_45, ATerm u_45, ATerm t);
ATerm genzip_4_0 (ATerm r_102 (ATerm), ATerm s_102 (ATerm), ATerm t_102 (ATerm), ATerm u_102 (ATerm), ATerm t);
static ATerm u_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm o_9 (ATerm m_692, ATerm r_692, ATerm u_67, ATerm t);
static ATerm a_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm q_71 (ATerm g_68, ATerm h_68, ATerm i_68, ATerm t);
static ATerm l_9 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm q_9 (ATerm r_129 (ATerm), ATerm s_129 (ATerm), ATerm t_129 (ATerm), ATerm v_68, ATerm s_68, ATerm a_69, ATerm w_68, ATerm t_68, ATerm u_68, ATerm t);
ATerm GnNextChangeGraph_3_0 (ATerm r_129 (ATerm), ATerm s_129 (ATerm), ATerm t_129 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm r_104 (ATerm), ATerm s_104 (ATerm), ATerm t);
ATerm for_3_0 (ATerm u_104 (ATerm), ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm r_32 (ATerm k_31, ATerm l_31, ATerm t);
ATerm extract_needed_defs_0_0 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm c_11 (ATerm t);
ATerm RegisterExtSDefInl_0_0 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm p_11 (ATerm t);
ATerm RegisterExtSDef_0_0 (ATerm t);
static ATerm t_9 (ATerm y_109 (ATerm), ATerm c_42, ATerm a_42, ATerm t);
static ATerm u_9 (ATerm n_112 (ATerm), ATerm o_112 (ATerm), ATerm b_46, ATerm a_46, ATerm t);
static ATerm v_9 (ATerm k_112 (ATerm), ATerm x_45, ATerm w_45, ATerm t);
ATerm Arities_0_0 (ATerm t);
static ATerm x_9 (ATerm v_42, ATerm w_42, ATerm t);
ATerm Definitions_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm a_115 (ATerm), ATerm b_115 (ATerm), ATerm c_115 (ATerm), ATerm t);
static ATerm a_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
ATerm RegisterSDefT_0_0 (ATerm t);
static ATerm p_12 (ATerm t);
ATerm needed_defs_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm t);
static ATerm a_10 (ATerm i_33, ATerm j_33, ATerm t);
static ATerm b_10 (ATerm d_32, ATerm e_32, ATerm t);
static ATerm d_10 (ATerm p_105 (ATerm), ATerm h_238, ATerm h_32, ATerm t);
static ATerm c_10 (ATerm z_31, ATerm a_32, ATerm t);
static ATerm t_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm v_12 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm j_124 (ATerm), ATerm t);
static ATerm g_86 (ATerm a_86, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm e_10 (ATerm f_32, ATerm t);
static ATerm f_10 (ATerm k_33, ATerm l_33, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm r_87 (ATerm q_86, ATerm t);
static ATerm s_87 (ATerm u_86, ATerm v_86, ATerm w_86, ATerm t);
static ATerm t_87 (ATerm e_87, ATerm f_87, ATerm g_87, ATerm t);
static ATerm g_10 (ATerm t);
static ATerm w_12 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm s_110 (ATerm), ATerm t);
static ATerm z_9 (ATerm y_54, ATerm z_54, ATerm t);
ATerm debug_1_0 (ATerm n_105 (ATerm), ATerm t);
static ATerm x_12 (ATerm t);
static ATerm a_13 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm g_107 (ATerm), ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm l_13 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm t_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm m_10 (ATerm j_37, ATerm k_37, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm m_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm p_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm k_10 (ATerm k_42, ATerm l_42, ATerm j_42, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm q_14 (ATerm t);
static ATerm r_14 (ATerm t);
static ATerm s_14 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm h_10 (ATerm o_40, ATerm p_40, ATerm t);
ATerm foldr_2_0 (ATerm y_114 (ATerm), ATerm z_114 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm v_14 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm f_107 (ATerm), ATerm t);
static ATerm x_14 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm y_14 (ATerm t);
ATerm need_help_1_0 (ATerm h_125 (ATerm), ATerm t);
ATerm map_1_0 (ATerm i_110 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm j_10 (ATerm b_44, ATerm c_44, ATerm t);
static ATerm a_15 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm c_15 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm d_15 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm g_15 (ATerm t);
static ATerm h_15 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm j_15 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm k_127 (ATerm), ATerm t);
static ATerm l_15 (ATerm t);
static ATerm m_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm p_15 (ATerm t);
ATerm parse_options_1_0 (ATerm j_127 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm j_125 (ATerm), ATerm k_125 (ATerm), ATerm l_125 (ATerm), ATerm m_125 (ATerm), ATerm t);
static ATerm t_15 (ATerm t);
static ATerm v_15 (ATerm t);
static ATerm w_15 (ATerm t);
static ATerm x_15 (ATerm t);
static ATerm y_15 (ATerm t);
ATerm iowrap_3_0 (ATerm s_124 (ATerm), ATerm t_124 (ATerm), ATerm u_124 (ATerm), ATerm t);
static ATerm a_16 (ATerm t);
static ATerm b_16 (ATerm t);
static ATerm d_16 (ATerm t);
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
  t = term_e_16;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_f_16;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_16), b_0), term_g_16);
  r_0 = t;
  t = SSL_printnl(o_0, r_0);
  t = term_j_16;
  j_0 = t;
  t = SSL_exit(j_0);
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
    ATerm k_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_1 = NULL,y_1 = NULL;
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, t_1, (ATerm) ATempty);
        w_1 = t;
        t = term_q_16;
        y_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_16, (ATerm) ATmakeAppl(sym_OpDecl_2, t_1, (ATerm) ATempty));
        t = x_9(y_1, w_1, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm s_16 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_16) != ATmakeSymbol("g_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, t_1, u_1);
        LocalPopChoice(n_16);
      }
    else
      {
        t = k_16;
        {
          ATerm x_3 = NULL,y_3 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, t_1, (ATerm) ATempty);
          x_3 = t;
          t = term_q_16;
          y_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_q_16, (ATerm) ATmakeAppl(sym_OpDecl_2, t_1, (ATerm) ATempty));
          t = x_9(y_3, x_3, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm t_16 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) t_16) != ATmakeSymbol("e_1", 0, ATtrue)))
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
ATerm filter_1_0 (ATerm c_116 (ATerm), ATerm t)
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
        ATerm u_16 = t;
        int v_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_4 = NULL,x_4 = NULL,y_4 = NULL,f_0 = NULL;
            t = SSLgetAnnotations(l_2);
            d_4 = t;
            t = m_2;
            t = c_116(t);
            x_4 = t;
            t = n_2;
            t = filter_1_0(c_116, t);
            y_4 = t;
            t = (ATerm) ATinsert(CheckATermList(y_4), x_4);
            f_0 = t;
            t = SSLsetAnnotations(f_0, d_4);
            LocalPopChoice(v_16);
          }
        else
          {
            t = u_16;
            t = n_2;
            t = filter_1_0(c_116, t);
          }
      }
    }
  return(t);
}
static ATerm h_0 (ATerm t)
{
  t = term_q_16;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_q_16;
  return(t);
}
ATerm DeclareConstructorNeeded_0_0 (ATerm t)
{
  ATerm t_2 = NULL,u_2 = NULL;
  t_2 = t;
  {
    ATerm w_16 = t;
    int x_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Cong_2))
          {
            u_2 = ATgetArgument(t, 0);
            {
              ATerm a_17 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(x_16);
        {
          ATerm y_2 = NULL,z_2 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, u_2, (ATerm) ATempty);
          y_2 = t;
          t = term_d_17;
          z_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, u_2, (ATerm) ATempty), term_d_17);
          t = t_9(h_0, y_2, z_2, t);
          t = t_2;
        }
      }
    else
      {
        t = w_16;
        {
          ATerm c_3 = NULL,d_3 = NULL;
          if(match_cons(t, sym_Op_2))
            {
              u_2 = ATgetArgument(t, 0);
              {
                ATerm e_17 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, u_2, (ATerm) ATempty);
          c_3 = t;
          t = term_g_17;
          d_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, u_2, (ATerm) ATempty), term_g_17);
          t = t_9(v_0, c_3, d_3, t);
          t = t_2;
        }
      }
  }
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm h_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareConstructorNeeded_0_0(t);
      LocalPopChoice(i_17);
    }
  else
    {
      t = h_17;
    }
  return(t);
}
static ATerm i_8 (ATerm i_75, ATerm h_75, ATerm t)
{
  ATerm f_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,r_3 = NULL,s_3 = NULL,t_0 = NULL,p_0 = NULL,m_0 = NULL;
  t = h_75;
  t = topdown_1_0(x_0, t);
  t = i_75;
  if(match_cons(t, sym_Signature_1))
    {
      h_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_75);
  f_3 = t;
  t = h_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_3 = ATgetFirst((ATermList) t);
      l_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_3);
  j_3 = t;
  t = k_3;
  if(match_cons(t, sym_Constructors_1))
    {
      p_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_3);
  o_3 = t;
  t = p_3;
  t = filter_1_0(ConstructorNeeded_0_0, t);
  r_3 = t;
  t = (ATerm) ATmakeAppl(sym_Constructors_1, r_3);
  m_0 = t;
  t = SSLsetAnnotations(m_0, o_3);
  s_3 = t;
  t = l_3;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_3), s_3);
  p_0 = t;
  t = SSLsetAnnotations(p_0, j_3);
  n_3 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, n_3);
  t_0 = t;
  t = SSLsetAnnotations(t_0, f_3);
  i_3 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, h_75)), i_3));
  return(t);
}
static ATerm k_8 (ATerm d_58, ATerm e_58, ATerm f_58, ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL;
  t = term_f_16;
  v_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_17), f_58), term_m_17), e_58), term_k_17), d_58), term_j_17);
  w_3 = t;
  t = SSL_printnl(v_3, w_3);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_17), f_58), term_m_17), e_58), term_k_17), d_58), term_j_17);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_17 = ATgetArgument(t, 0);
      if(((ATgetType(o_17) != AT_INT) || (ATgetInt((ATermInt) o_17) != 0)))
        _fail(t);
      {
        ATerm t_17 = ATgetArgument(t, 1);
        if(((ATgetType(t_17) != AT_INT) || (ATgetInt((ATermInt) t_17) != 0)))
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
    ATerm u_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_5 = NULL,j_5 = NULL;
        t = r_4;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_17 = ATgetFirst((ATermList) t);
            ATerm x_17 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(x_17) == AT_LIST) && !(ATisEmpty(x_17))))
              {
                ATerm y_17 = ATgetFirst((ATermList) x_17);
                ATerm z_17 = (ATerm) ATgetNext((ATermList) x_17);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm a_18 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(z_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = a_18;
            }
        }
        t = term_f_16;
        i_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, r_4), term_b_18);
        j_5 = t;
        t = SSL_printnl(i_5, j_5);
        t = (ATerm) ATinsert(ATinsert(ATempty, r_4), term_b_18);
        t = giving_up_0_0(t);
        LocalPopChoice(v_17);
      }
    else
      {
        t = u_17;
        {
          ATerm q_5 = NULL,r_5 = NULL;
          t = r_4;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm c_18 = ATgetFirst((ATermList) t);
              if(match_cons(c_18, sym__2))
                {
                  q_5 = ATgetArgument(c_18, 0);
                  r_5 = ATgetArgument(c_18, 1);
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
          t = (ATerm) ATmakeAppl(sym__2, r_4, (ATerm) ATmakeAppl(sym__2, q_5, r_5));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, r_4, (ATerm) ATmakeAppl(sym__2, q_5, r_5));
        }
      }
  }
  return(t);
}
ATerm sboundin_3_0 (ATerm k_97 (ATerm), ATerm l_97 (ATerm), ATerm m_97 (ATerm), ATerm t)
{
  ATerm o_8 = NULL,z_8 = NULL,p_9 = NULL,n_10 = NULL,o_10 = NULL;
  p_9 = t;
  if(match_cons(t, sym_Let_2))
    {
      n_10 = ATgetArgument(t, 0);
      o_10 = ATgetArgument(t, 1);
      {
        ATerm z_5 = NULL,d_6 = NULL,h_6 = NULL,i_1 = NULL;
        t = SSLgetAnnotations(p_9);
        z_5 = t;
        t = n_10;
        t = k_97(t);
        d_6 = t;
        t = o_10;
        t = k_97(t);
        h_6 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, d_6, h_6);
        i_1 = t;
        t = SSLsetAnnotations(i_1, z_5);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          n_10 = ATgetArgument(t, 0);
          o_10 = ATgetArgument(t, 1);
          o_8 = ATgetArgument(t, 2);
          {
            ATerm q_7 = NULL,c_8 = NULL,f_8 = NULL,g_8 = NULL,j_1 = NULL;
            t = SSLgetAnnotations(p_9);
            q_7 = t;
            t = n_10;
            t = m_97(t);
            c_8 = t;
            t = o_10;
            t = m_97(t);
            f_8 = t;
            t = o_8;
            t = k_97(t);
            g_8 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, c_8, f_8, g_8);
            j_1 = t;
            t = SSLsetAnnotations(j_1, q_7);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              n_10 = ATgetArgument(t, 0);
              o_10 = ATgetArgument(t, 1);
              o_8 = ATgetArgument(t, 2);
              z_8 = ATgetArgument(t, 3);
              {
                ATerm v_8 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,k_1 = NULL;
                t = SSLgetAnnotations(p_9);
                v_8 = t;
                t = n_10;
                t = m_97(t);
                f_9 = t;
                t = o_10;
                t = m_97(t);
                g_9 = t;
                t = o_8;
                t = m_97(t);
                h_9 = t;
                t = z_8;
                t = k_97(t);
                i_9 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, f_9, g_9, h_9, i_9);
                k_1 = t;
                t = SSLsetAnnotations(k_1, v_8);
              }
            }
          else
            {
              ATerm l_10 = NULL,s_10 = NULL,t_10 = NULL,m_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  n_10 = ATgetArgument(t, 0);
                  o_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(p_9);
              l_10 = t;
              t = n_10;
              t = m_97(t);
              s_10 = t;
              t = o_10;
              t = k_97(t);
              t_10 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, s_10, t_10);
              m_1 = t;
              t = SSLsetAnnotations(m_1, l_10);
            }
        }
    }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm z_10 = NULL;
  ATerm e_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          z_10 = ATgetArgument(t, 0);
          {
            ATerm g_18 = ATgetArgument(t, 1);
          }
          {
            ATerm i_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_18);
      t = z_10;
    }
  else
    {
      t = e_18;
      if(match_cons(t, sym_SDefT_4))
        {
          z_10 = ATgetArgument(t, 0);
          {
            ATerm j_18 = ATgetArgument(t, 1);
          }
          {
            ATerm k_18 = ATgetArgument(t, 2);
          }
          {
            ATerm l_18 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = z_10;
    }
  return(t);
}
static ATerm r_8 (ATerm v_25, ATerm u_25, ATerm t)
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
  ATerm w_11 = NULL,x_11 = NULL;
  if(match_cons(t, sym__2))
    {
      w_11 = ATgetArgument(t, 0);
      x_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_9(l_1, w_11, x_11, t);
  return(t);
}
static ATerm l_1 (ATerm t)
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
  ATerm o_12 = NULL,q_12 = NULL;
  if(match_cons(t, sym__2))
    {
      o_12 = ATgetArgument(t, 0);
      q_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_9(p_1, o_12, q_12, t);
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
  ATerm f_13 = NULL;
  if(match_cons(t, sym__2))
    {
      f_13 = ATgetArgument(t, 0);
      if((f_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm j_118 (ATerm), ATerm k_118 (ATerm), ATerm l_118 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm m_118 (ATerm), ATerm t)
{
  static ATerm k_13 (ATerm t)
  {
    ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL;
    d_12 = t;
    {
      ATerm m_18 = t;
      int n_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_118(t);
          LocalPopChoice(n_18);
        }
      else
        {
          t = m_18;
          t = (ATerm) ATempty;
        }
    }
    b_12 = t;
    t = d_12;
    {
      ATerm o_18 = t;
      int p_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_12 = NULL,k_11 = NULL,m_11 = NULL;
          t = k_118(t);
          e_12 = t;
          t = d_12;
          {
            static ATerm c_1 (ATerm t)
            {
              ATerm d_11 = NULL;
              t = k_13(t);
              d_11 = t;
              t = (ATerm) ATmakeAppl(sym__2, d_11, e_12);
              t = j_9(m_118, d_11, e_12, t);
              return(t);
            }
            t = l_118(c_1, k_13, d_1, t);
          }
          m_11 = t;
          t = SSL_explode_term(m_11);
          if(match_cons(t, sym__2))
            {
              ATerm q_18 = ATgetArgument(t, 0);
              k_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_11;
          t = foldr_3_0(f_1, h_1, _id, t);
          LocalPopChoice(p_18);
        }
      else
        {
          t = o_18;
          {
            ATerm f_12 = NULL;
            t = SSL_explode_term(d_12);
            if(match_cons(t, sym__2))
              {
                ATerm r_18 = ATgetArgument(t, 0);
                f_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = f_12;
            t = foldr_3_0(n_1, o_1, k_13, t);
          }
        }
    }
    c_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_12, c_12);
    t = v_9(q_1, b_12, c_12, t);
    return(t);
  }
  t = k_13(t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm t_18 = ATgetArgument(t, 0);
      if(match_cons(t_18, sym_SVar_1))
        {
          w_13 = ATgetArgument(t_18, 0);
        }
      else
        _fail(t);
      x_13 = ATgetArgument(t, 1);
      y_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = x_13;
  t = foldr_3_0(f_2, g_2, h_2, t);
  z_13 = t;
  t = y_13;
  t = foldr_3_0(i_2, j_2, k_2, t);
  a_14 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, w_13, (ATerm) ATmakeAppl(sym__2, z_13, a_14)));
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL;
  f_14 = t;
  if(match_cons(t, sym_Let_2))
    {
      g_14 = ATgetArgument(t, 0);
      h_14 = ATgetArgument(t, 1);
      t = f_14;
      t = r_8(g_14, h_14, t);
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
                  t = map_1_0(r_2, t);
                }
            }
        }
    }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm l_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_18 = ATgetArgument(t, 0);
      if(match_cons(u_18, sym__2))
        {
          l_16 = ATgetArgument(u_18, 0);
          {
            ATerm v_18 = ATgetArgument(u_18, 1);
          }
        }
      else
        _fail(t);
      if((l_16 != ATgetArgument(t, 1)))
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
  t = term_w_18;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL;
  if(match_cons(t, sym__2))
    {
      b_14 = ATgetArgument(t, 0);
      c_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_10(b_14, c_14, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_w_18;
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
  t = h_10(d_14, e_14, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm t_14 = NULL;
  ATerm x_18 = t;
  int y_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_14 = ATgetArgument(t, 0);
          {
            ATerm z_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_18);
      t = t_14;
    }
  else
    {
      t = x_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_14;
    }
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm n_15 = NULL;
  ATerm a_19 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_15 = ATgetArgument(t, 0);
          {
            ATerm c_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_19);
      t = n_15;
    }
  else
    {
      t = a_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_15;
    }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm c_16 = NULL;
  ATerm d_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_16 = ATgetArgument(t, 0);
          {
            ATerm f_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_19);
      t = c_16;
    }
  else
    {
      t = d_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_16;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(r_1, v_1, sboundin_3_0, b_2, t);
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm j_26 = NULL,q_26 = NULL,t_26 = NULL;
  q_26 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      t_26 = ATgetArgument(t, 0);
      j_26 = ATgetArgument(t, 1);
      {
        ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL;
        t = q_26;
        t = new_0_0(t);
        w_26 = t;
        t = new_0_0(t);
        x_26 = t;
        t = new_0_0(t);
        y_26 = t;
        t = new_0_0(t);
        z_26 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_26), y_26), x_26), w_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, w_26), (ATerm) ATmakeAppl(sym_Var_1, y_26))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, t_26, (ATerm)ATmakeAppl(sym_Var_1, w_26), (ATerm) ATmakeAppl(sym_Var_1, x_26)), (ATerm) ATmakeAppl(sym_BAM_3, j_26, (ATerm)ATmakeAppl(sym_Var_1, y_26), (ATerm) ATmakeAppl(sym_Var_1, z_26)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_g_19, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, z_26)), (ATerm) ATmakeAppl(sym_Var_1, x_26))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          t_26 = ATgetArgument(t, 0);
          {
            ATerm h_27 = NULL,i_27 = NULL,p_27 = NULL,q_27 = NULL;
            t = q_26;
            t = new_0_0(t);
            p_27 = t;
            t = t_26;
            {
              static ATerm s_2 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((h_27 != NULL) && (h_27 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      h_27 = ATgetArgument(t, 0);
                    if(((i_27 != NULL) && (i_27 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      i_27 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, p_27);
                return(t);
              }
              t = oncetd_1_0(s_2, t);
            }
            q_27 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_g_19, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_27)), not_null(h_27))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, p_27)), (ATerm) ATmakeAppl(sym_Build_1, q_27))));
          }
        }
      else
        {
          ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              t_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_26;
          t = new_0_0(t);
          u_27 = t;
          t = new_0_0(t);
          v_27 = t;
          t = t_26;
          {
            static ATerm v_2 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((s_27 != NULL) && (s_27 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    s_27 = ATgetArgument(t, 0);
                  if(((t_27 != NULL) && (t_27 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    t_27 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, u_27);
              return(t);
            }
            t = oncetd_1_0(v_2, t);
          }
          w_27 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, w_27), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_27)), (ATerm) ATmakeAppl(sym_PrimT_3, term_h_19, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_27))))), (ATerm)ATmakeAppl(sym_Var_1, u_27), (ATerm) ATmakeAppl(sym_Op_2, term_i_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_27)), not_null(s_27)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL;
  b_28 = t;
  if(match_cons(t, sym_Match_1))
    {
      c_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm j_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_28 = NULL,h_28 = NULL,l_28 = NULL,o_28 = NULL;
        t = b_28;
        t = new_0_0(t);
        l_28 = t;
        t = c_28;
        {
          static ATerm w_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((f_28 != NULL) && (f_28 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  f_28 = ATgetArgument(t, 0);
                if(((h_28 != NULL) && (h_28 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  h_28 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, l_28), f_28);
            return(t);
          }
          t = pat_td_1_0(w_2, t);
        }
        o_28 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, o_28), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_m_19, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_28))), (ATerm) ATmakeAppl(sym_Match_1, not_null(h_28))))));
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
              ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL;
              t = b_28;
              t = new_0_0(t);
              s_28 = t;
              t = c_28;
              {
                static ATerm x_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((r_28 != NULL) && (r_28 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        r_28 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, s_28);
                  return(t);
                }
                t = pat_td_1_0(x_2, t);
              }
              t_28 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, t_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, s_28)), not_null(r_28))));
              LocalPopChoice(o_19);
            }
          else
            {
              t = n_19;
              {
                ATerm y_28 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL;
                t = b_28;
                t = new_0_0(t);
                c_29 = t;
                t = c_28;
                {
                  static ATerm a_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((b_29 != NULL) && (b_29 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          b_29 = ATgetArgument(t, 0);
                        if(((y_28 != NULL) && (y_28 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          y_28 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, c_29);
                    return(t);
                  }
                  t = pat_td_1_0(a_3, t);
                }
                d_29 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_29), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, d_29), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, c_29)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(y_28)), not_null(b_29)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm v_129 (ATerm), ATerm t)
{
  ATerm p_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_129(t);
      LocalPopChoice(r_19);
    }
  else
    {
      t = p_19;
      {
        ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL,a_34 = NULL;
        v_33 = t;
        if(match_cons(t, sym_Op_2))
          {
            w_33 = ATgetArgument(t, 0);
            a_34 = ATgetArgument(t, 1);
            {
              ATerm f_15 = NULL,r_15 = NULL,x_1 = NULL;
              t = SSLgetAnnotations(v_33);
              f_15 = t;
              t = a_34;
              {
                static ATerm b_3 (ATerm t)
                {
                  t = pat_td_1_0(v_129, t);
                  return(t);
                }
                t = fetch_1_0(b_3, t);
              }
              r_15 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, w_33, r_15);
              x_1 = t;
              t = SSLsetAnnotations(x_1, f_15);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                w_33 = ATgetArgument(t, 0);
                a_34 = ATgetArgument(t, 1);
                {
                  ATerm s_19 = t;
                  int t_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_16 = NULL,o_16 = NULL,z_1 = NULL;
                      t = SSLgetAnnotations(v_33);
                      h_16 = t;
                      t = a_34;
                      t = pat_td_1_0(v_129, t);
                      o_16 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, w_33, o_16);
                      z_1 = t;
                      t = SSLsetAnnotations(z_1, h_16);
                      LocalPopChoice(t_19);
                    }
                  else
                    {
                      t = s_19;
                      {
                        ATerm z_16 = NULL,c_17 = NULL,a_2 = NULL;
                        t = SSLgetAnnotations(v_33);
                        z_16 = t;
                        t = w_33;
                        t = pat_td_1_0(v_129, t);
                        c_17 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, c_17, a_34);
                        a_2 = t;
                        t = SSLsetAnnotations(a_2, z_16);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    w_33 = ATgetArgument(t, 0);
                    a_34 = ATgetArgument(t, 1);
                    u_33 = ATgetArgument(t, 2);
                    {
                      ATerm l_17 = NULL,s_17 = NULL,c_2 = NULL;
                      t = SSLgetAnnotations(v_33);
                      l_17 = t;
                      t = u_33;
                      {
                        static ATerm e_3 (ATerm t)
                        {
                          t = pat_td_1_0(v_129, t);
                          return(t);
                        }
                        t = fetch_1_0(e_3, t);
                      }
                      s_17 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, w_33, a_34, s_17);
                      c_2 = t;
                      t = SSLsetAnnotations(c_2, l_17);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        w_33 = ATgetArgument(t, 0);
                        a_34 = ATgetArgument(t, 1);
                        u_33 = ATgetArgument(t, 2);
                        {
                          ATerm h_18 = NULL,s_18 = NULL,d_2 = NULL;
                          t = SSLgetAnnotations(v_33);
                          h_18 = t;
                          t = u_33;
                          {
                            static ATerm g_3 (ATerm t)
                            {
                              t = pat_td_1_0(v_129, t);
                              return(t);
                            }
                            t = fetch_1_0(g_3, t);
                          }
                          s_18 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, w_33, a_34, s_18);
                          d_2 = t;
                          t = SSLsetAnnotations(d_2, h_18);
                        }
                      }
                    else
                      {
                        ATerm l_19 = NULL,z_19 = NULL,e_2 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            w_33 = ATgetArgument(t, 0);
                            a_34 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(v_33);
                        l_19 = t;
                        t = a_34;
                        t = pat_td_1_0(v_129, t);
                        z_19 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, w_33, z_19);
                        e_2 = t;
                        t = SSLsetAnnotations(e_2, l_19);
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
  ATerm s_34 = NULL,t_34 = NULL;
  s_34 = t;
  if(match_cons(t, sym_Build_1))
    {
      t_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm u_19 = t;
    int v_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_34 = NULL,x_34 = NULL,a_35 = NULL,f_35 = NULL;
        t = s_34;
        t = new_0_0(t);
        a_35 = t;
        t = t_34;
        {
          static ATerm m_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((u_34 != NULL) && (u_34 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  u_34 = ATgetArgument(t, 0);
                if(((x_34 != NULL) && (x_34 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  x_34 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, a_35);
            return(t);
          }
          t = pat_td_1_0(m_3, t);
        }
        f_35 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_35), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_w_19, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_34)), not_null(u_34))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_35)))), (ATerm) ATmakeAppl(sym_Build_1, f_35)));
        LocalPopChoice(v_19);
      }
    else
      {
        t = u_19;
        {
          ATerm a_20 = t;
          int b_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_35 = NULL,j_35 = NULL,k_35 = NULL;
              t = s_34;
              t = new_0_0(t);
              j_35 = t;
              t = t_34;
              {
                static ATerm q_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((h_35 != NULL) && (h_35 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        h_35 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, j_35);
                  return(t);
                }
                t = pat_td_1_0(q_3, t);
              }
              k_35 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_35), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_35), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_35)))), (ATerm) ATmakeAppl(sym_Build_1, k_35)));
              LocalPopChoice(b_20);
            }
          else
            {
              t = a_20;
              {
                ATerm l_35 = NULL,q_35 = NULL,u_35 = NULL,w_35 = NULL;
                t = s_34;
                t = new_0_0(t);
                u_35 = t;
                t = t_34;
                {
                  static ATerm t_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((l_35 != NULL) && (l_35 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          l_35 = ATgetArgument(t, 0);
                        if(((q_35 != NULL) && (q_35 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          q_35 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, u_35);
                    return(t);
                  }
                  t = pat_td_1_0(t_3, t);
                }
                w_35 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_35), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(l_35), not_null(q_35), (ATerm) ATmakeAppl(sym_Var_1, u_35))), (ATerm) ATmakeAppl(sym_Build_1, w_35)));
              }
            }
        }
      }
  }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL,k_36 = NULL,l_36 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      k_36 = ATgetArgument(t, 0);
      l_36 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, k_36, l_36);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          k_36 = ATgetArgument(t, 0);
          t = k_36;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_36 = ATgetFirst((ATermList) t);
              h_36 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, g_36, (ATerm) ATmakeAppl(sym_LChoices_1, h_36));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_g_20;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              k_36 = ATgetArgument(t, 0);
              t = k_36;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_36 = ATgetFirst((ATermList) t);
                  h_36 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, g_36, (ATerm) ATmakeAppl(sym_Choices_1, h_36));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_g_20;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  k_36 = ATgetArgument(t, 0);
                  t = k_36;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      g_36 = ATgetFirst((ATermList) t);
                      h_36 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_36, (ATerm) ATmakeAppl(sym_Seqs_1, h_36));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_h_20;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      k_36 = ATgetArgument(t, 0);
                      l_36 = ATgetArgument(t, 1);
                      i_36 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, l_36, (ATerm) ATmakeAppl(sym_Op_2, term_i_19, (ATerm) ATinsert(ATinsert(ATempty, i_36), k_36)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          k_36 = ATgetArgument(t, 0);
                          l_36 = ATgetArgument(t, 1);
                          i_36 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, i_36)), k_36), (ATerm) ATmakeAppl(sym_Build_1, l_36)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              k_36 = ATgetArgument(t, 0);
                              l_36 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, k_36, (ATerm) ATmakeAppl(sym_Match_1, l_36));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  k_36 = ATgetArgument(t, 0);
                                  l_36 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_36), l_36);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      k_36 = ATgetArgument(t, 0);
                                      l_36 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, l_36), k_36);
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
  ATerm i_20 = t;
  if((PushChoice() == 0))
    {
      ATerm q_38 = NULL,r_38 = NULL,u_38 = NULL,p_2 = NULL;
      u_38 = t;
      if(match_cons(t, sym_Var_1))
        {
          r_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_38);
      q_38 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, r_38);
      p_2 = t;
      t = SSLsetAnnotations(p_2, q_38);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_20;
    }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_20;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_38 = ATgetFirst((ATermList) t);
      x_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_38, x_38);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm y_38 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_20 = ATgetArgument(t, 0);
      if(match_cons(n_20, sym__2))
        {
          y_38 = ATgetArgument(n_20, 0);
          h_39 = ATgetArgument(n_20, 1);
        }
      else
        _fail(t);
      {
        ATerm o_20 = ATgetArgument(t, 1);
        if(match_cons(o_20, sym__2))
          {
            i_39 = ATgetArgument(o_20, 0);
            j_39 = ATgetArgument(o_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_39), y_38), (ATerm) ATinsert(CheckATermList(j_39), h_39));
  return(t);
}
static ATerm e_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_20;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm k_39 = NULL,l_39 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_39 = ATgetFirst((ATermList) t);
      l_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_39, l_39);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm m_39 = NULL,p_39 = NULL,r_39 = NULL,s_39 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_20 = ATgetArgument(t, 0);
      if(match_cons(p_20, sym__2))
        {
          m_39 = ATgetArgument(p_20, 0);
          p_39 = ATgetArgument(p_20, 1);
        }
      else
        _fail(t);
      {
        ATerm q_20 = ATgetArgument(t, 1);
        if(match_cons(q_20, sym__2))
          {
            r_39 = ATgetArgument(q_20, 0);
            s_39 = ATgetArgument(q_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_39), m_39), (ATerm) ATinsert(CheckATermList(s_39), p_39));
  return(t);
}
static ATerm x_8 (ATerm a_74, ATerm b_74, ATerm c_74, ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,p_38 = NULL,z_3 = NULL;
  t = c_74;
  t = fetch_1_0(u_3, t);
  t = c_74;
  t = genzip_4_0(a_4, b_4, c_4, LiftPrimArg_0_0, t);
  p_38 = t;
  if(match_cons(t, sym__2))
    {
      k_38 = ATgetArgument(t, 0);
      l_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_38);
  j_38 = t;
  t = k_38;
  t = concat_0_0(t);
  m_38 = t;
  t = l_38;
  t = genzip_4_0(e_4, f_4, g_4, _id, t);
  n_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_38, n_38);
  z_3 = t;
  t = SSLsetAnnotations(z_3, j_38);
  if(match_cons(t, sym__2))
    {
      f_38 = ATgetArgument(t, 0);
      {
        ATerm r_20 = ATgetArgument(t, 1);
        if(match_cons(r_20, sym__2))
          {
            g_38 = ATgetArgument(r_20, 0);
            i_38 = ATgetArgument(r_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, f_38, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_38), (ATerm) ATmakeAppl(sym_CallT_3, a_74, b_74, i_38)));
  return(t);
}
static ATerm t_40 (ATerm b_40, ATerm t)
{
  ATerm d_40 = NULL;
  t = b_40;
  {
    ATerm s_20 = t;
    if((PushChoice() == 0))
      {
        ATerm e_40 = NULL,f_40 = NULL,i_40 = NULL,i_4 = NULL;
        i_40 = t;
        if(match_cons(t, sym_Var_1))
          {
            f_40 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_40);
        e_40 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, f_40);
        i_4 = t;
        t = SSLsetAnnotations(i_4, e_40);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_20;
      }
  }
  t = new_0_0(t);
  d_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, d_40), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_40), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_40)))), (ATerm) ATmakeAppl(sym_Var_1, d_40)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL;
  k_40 = t;
  if(match_cons(t, sym_Var_1))
    {
      l_40 = ATgetArgument(t, 0);
      {
        ATerm t_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_40(k_40, t);
            LocalPopChoice(u_20);
          }
        else
          {
            t = t_20;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_h_20, (ATerm) ATmakeAppl(sym_Var_1, l_40)));
          }
      }
    }
  else
    {
      t = t_40(k_40, t);
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm v_20 = t;
  if((PushChoice() == 0))
    {
      ATerm p_21 = NULL,q_21 = NULL,w_21 = NULL,k_4 = NULL;
      w_21 = t;
      if(match_cons(t, sym_Var_1))
        {
          q_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_21);
      p_21 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, q_21);
      k_4 = t;
      t = SSLsetAnnotations(k_4, p_21);
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
  t = term_j_20;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_21 = ATgetFirst((ATermList) t);
      y_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_21, y_21);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm z_21 = NULL,d_22 = NULL,g_22 = NULL,h_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_20 = ATgetArgument(t, 0);
      if(match_cons(w_20, sym__2))
        {
          z_21 = ATgetArgument(w_20, 0);
          d_22 = ATgetArgument(w_20, 1);
        }
      else
        _fail(t);
      {
        ATerm x_20 = ATgetArgument(t, 1);
        if(match_cons(x_20, sym__2))
          {
            g_22 = ATgetArgument(x_20, 0);
            h_22 = ATgetArgument(x_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_22), z_21), (ATerm) ATinsert(CheckATermList(h_22), d_22));
  return(t);
}
static ATerm v_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_20;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm k_22 = NULL,m_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_22 = ATgetFirst((ATermList) t);
      m_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_22, m_22);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm n_22 = NULL,q_22 = NULL,t_22 = NULL,u_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_20 = ATgetArgument(t, 0);
      if(match_cons(y_20, sym__2))
        {
          n_22 = ATgetArgument(y_20, 0);
          q_22 = ATgetArgument(y_20, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_22), n_22), (ATerm) ATinsert(CheckATermList(u_22), q_22));
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm a_21 = t;
  if((PushChoice() == 0))
    {
      ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL,m_4 = NULL;
      e_24 = t;
      if(match_cons(t, sym_Var_1))
        {
          d_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_24);
      c_24 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, d_24);
      m_4 = t;
      t = SSLsetAnnotations(m_4, c_24);
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
  t = term_j_20;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_24 = ATgetFirst((ATermList) t);
      h_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_24, h_24);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL,q_24 = NULL,u_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_21 = ATgetArgument(t, 0);
      if(match_cons(b_21, sym__2))
        {
          n_24 = ATgetArgument(b_21, 0);
          o_24 = ATgetArgument(b_21, 1);
        }
      else
        _fail(t);
      {
        ATerm c_21 = ATgetArgument(t, 1);
        if(match_cons(c_21, sym__2))
          {
            q_24 = ATgetArgument(c_21, 0);
            u_24 = ATgetArgument(c_21, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_24), n_24), (ATerm) ATinsert(CheckATermList(u_24), o_24));
  return(t);
}
static ATerm e_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_20;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_24 = ATgetFirst((ATermList) t);
      w_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_24, w_24);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_21 = ATgetArgument(t, 0);
      if(match_cons(l_21, sym__2))
        {
          y_24 = ATgetArgument(l_21, 0);
          z_24 = ATgetArgument(l_21, 1);
        }
      else
        _fail(t);
      {
        ATerm m_21 = ATgetArgument(t, 1);
        if(match_cons(m_21, sym__2))
          {
            a_25 = ATgetArgument(m_21, 0);
            b_25 = ATgetArgument(m_21, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_25), y_24), (ATerm) ATinsert(CheckATermList(b_25), z_24));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL;
  l_45 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      m_45 = ATgetArgument(t, 0);
      n_45 = ATgetArgument(t, 1);
      k_45 = ATgetArgument(t, 2);
      {
        ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,o_21 = NULL,l_4 = NULL;
        t = k_45;
        t = fetch_1_0(h_4, t);
        t = k_45;
        t = genzip_4_0(j_4, o_4, p_4, LiftPrimArg_0_0, t);
        o_21 = t;
        if(match_cons(t, sym__2))
          {
            h_21 = ATgetArgument(t, 0);
            i_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_21);
        g_21 = t;
        t = h_21;
        t = concat_0_0(t);
        j_21 = t;
        t = i_21;
        t = genzip_4_0(v_4, w_4, z_4, _id, t);
        k_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_21, k_21);
        l_4 = t;
        t = SSLsetAnnotations(l_4, g_21);
        if(match_cons(t, sym__2))
          {
            d_21 = ATgetArgument(t, 0);
            {
              ATerm v_21 = ATgetArgument(t, 1);
              if(match_cons(v_21, sym__2))
                {
                  e_21 = ATgetArgument(v_21, 0);
                  f_21 = ATgetArgument(v_21, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, d_21, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, e_21), (ATerm) ATmakeAppl(sym_PrimT_3, m_45, n_45, f_21)));
      }
    }
  else
    {
      ATerm f_23 = NULL,g_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,n_4 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          m_45 = ATgetArgument(t, 0);
          n_45 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = n_45;
      t = fetch_1_0(a_5, t);
      t = n_45;
      t = genzip_4_0(b_5, c_5, d_5, LiftPrimArg_0_0, t);
      u_23 = t;
      if(match_cons(t, sym__2))
        {
          o_23 = ATgetArgument(t, 0);
          r_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_23);
      n_23 = t;
      t = o_23;
      t = concat_0_0(t);
      s_23 = t;
      t = r_23;
      t = genzip_4_0(e_5, g_5, h_5, _id, t);
      t_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_23, t_23);
      n_4 = t;
      t = SSLsetAnnotations(n_4, n_23);
      if(match_cons(t, sym__2))
        {
          f_23 = ATgetArgument(t, 0);
          {
            ATerm a_22 = ATgetArgument(t, 1);
            if(match_cons(a_22, sym__2))
              {
                g_23 = ATgetArgument(a_22, 0);
                m_23 = ATgetArgument(a_22, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, f_23, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_23), (ATerm) ATmakeAppl(sym_PrimT_3, m_45, (ATerm)ATempty, m_23)));
    }
  return(t);
}
ATerm repeat_2_0 (ATerm a_104 (ATerm), ATerm b_104 (ATerm), ATerm t)
{
  static ATerm q_45 (ATerm t)
  {
    ATerm b_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_104(t);
        t = q_45(t);
        LocalPopChoice(p_22);
      }
    else
      {
        t = b_22;
        t = b_104(t);
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
        ATerm w_25 = NULL,f_5 = NULL;
        t = SSLgetAnnotations(o_46);
        w_25 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, l_46, m_46, n_46);
        f_5 = t;
        t = SSLsetAnnotations(f_5, w_25);
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
static ATerm l_5 (ATerm t)
{
  ATerm c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL;
  d_48 = t;
  if(match_cons(t, sym_Con_3))
    {
      e_48 = ATgetArgument(t, 0);
      f_48 = ATgetArgument(t, 1);
      c_48 = ATgetArgument(t, 2);
      {
        ATerm s_26 = NULL,o_5 = NULL;
        t = SSLgetAnnotations(d_48);
        s_26 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, e_48, f_48, c_48);
        o_5 = t;
        t = SSLsetAnnotations(o_5, s_26);
      }
    }
  else
    {
      ATerm o_27 = NULL,t_5 = NULL;
      if(match_cons(t, sym_App_2))
        {
          e_48 = ATgetArgument(t, 0);
          f_48 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_48);
      o_27 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, e_48, f_48);
      t_5 = t;
      t = SSLsetAnnotations(t_5, o_27);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm w_22 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(l_5, t);
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
  ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      r_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_48;
  if(match_cons(t, sym_StratRule_3))
    {
      s_48 = ATgetArgument(t, 0);
      t_48 = ATgetArgument(t, 1);
      u_48 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, t_48), (ATerm) ATmakeAppl(sym_Where_1, u_48)), s_48));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          s_48 = ATgetArgument(t, 0);
          t_48 = ATgetArgument(t, 1);
          u_48 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = s_48;
      t = pureterm_0_0(t);
      t = t_48;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, t_48)), (ATerm) ATmakeAppl(sym_Where_1, u_48)), (ATerm) ATmakeAppl(sym_Match_1, s_48)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm j_99 (ATerm), ATerm t)
{
  static ATerm f_49 (ATerm t)
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_99(t);
        LocalPopChoice(y_22);
      }
    else
      {
        t = x_22;
        t = SRTS_one(f_49, t);
      }
    return(t);
  }
  t = f_49(t);
  return(t);
}
static ATerm b_9 (ATerm n_69, ATerm o_69, ATerm p_69, ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL,q_49 = NULL,r_49 = NULL;
  t = new_0_0(t);
  k_49 = t;
  t = n_69;
  {
    static ATerm m_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm z_22 = ATgetArgument(t, 0);
          if(match_cons(z_22, sym_Var_1))
            {
              if(((j_49 != NULL) && (j_49 != ATgetArgument(z_22, 0))))
                _fail(ATgetArgument(z_22, 0));
              else
                j_49 = ATgetArgument(z_22, 0);
            }
          else
            _fail(t);
          if(((h_49 != NULL) && (h_49 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            h_49 = ATgetArgument(t, 1);
          {
            ATerm a_23 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, j_49);
      return(t);
    }
    t = oncetd_1_0(m_5, t);
  }
  q_49 = t;
  t = o_69;
  {
    static ATerm n_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm b_23 = ATgetArgument(t, 0);
          if(match_cons(b_23, sym_Var_1))
            {
              if(((j_49 != NULL) && (j_49 != ATgetArgument(b_23, 0))))
                _fail(ATgetArgument(b_23, 0));
              else
                j_49 = ATgetArgument(b_23, 0);
            }
          else
            _fail(t);
          if(((i_49 != NULL) && (i_49 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            i_49 = ATgetArgument(t, 1);
          {
            ATerm c_23 = ATgetArgument(t, 2);
            if(match_cons(c_23, sym_CallT_3))
              {
                if(((g_49 != NULL) && (g_49 != ATgetArgument(c_23, 0))))
                  _fail(ATgetArgument(c_23, 0));
                else
                  g_49 = ATgetArgument(c_23, 0);
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
      t = (ATerm) ATmakeAppl(sym_Var_1, k_49);
      return(t);
    }
    t = oncetd_1_0(n_5, t);
  }
  r_49 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_49), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, q_49, r_49, (ATerm) ATmakeAppl(sym_Seq_2, p_69, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(g_49), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(h_49), not_null(i_49), term_h_20))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_49)), (ATerm) ATmakeAppl(sym_Var_1, k_49))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm w_23 = t;
  int y_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_25 = t;
      int d_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_50 = NULL,n_50 = NULL,o_50 = NULL,s_50 = NULL,t_50 = NULL,v_50 = NULL;
          s_50 = t;
          if(match_cons(t, sym_SRule_1))
            {
              t_50 = ATgetArgument(t, 0);
              t = t_50;
              if(match_cons(t, sym_Rule_3))
                {
                  g_50 = ATgetArgument(t, 0);
                  n_50 = ATgetArgument(t, 1);
                  o_50 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = s_50;
              t = b_9(g_50, n_50, o_50, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm m_28 = NULL,v_28 = NULL,e_6 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  t_50 = ATgetArgument(t, 0);
                  v_50 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(s_50);
              m_28 = t;
              t = v_50;
              t = desugarRule_0_0(t);
              v_28 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, t_50, v_28);
              e_6 = t;
              t = SSLsetAnnotations(e_6, m_28);
            }
          LocalPopChoice(d_25);
        }
      else
        {
          t = c_25;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(y_23);
    }
  else
    {
      t = w_23;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm f_98 (ATerm), ATerm t)
{
  static ATerm p_5 (ATerm t)
  {
    t = topdown_1_0(f_98, t);
    return(t);
  }
  t = f_98(t);
  t = SRTS_all(p_5, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm f_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(h_25);
    }
  else
    {
      t = f_25;
    }
  t = repeat_2_0(u_5, _id, t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm i_25 = t;
  int n_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(n_25);
    }
  else
    {
      t = i_25;
      {
        ATerm o_25 = t;
        int p_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL;
            y_51 = t;
            if(match_cons(t, sym_CallT_3))
              {
                z_51 = ATgetArgument(t, 0);
                a_52 = ATgetArgument(t, 1);
                b_52 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = y_51;
            t = x_8(z_51, a_52, b_52, t);
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
                  t = HL_0_0(t);
                  LocalPopChoice(s_25);
                }
              else
                {
                  t = q_25;
                  {
                    ATerm x_25 = t;
                    int y_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(y_25);
                      }
                    else
                      {
                        t = x_25;
                        {
                          ATerm a_26 = t;
                          int c_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm d_26 = t;
                              int e_26 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm g_52 = NULL,i_52 = NULL,j_52 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      g_52 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = g_52;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      i_52 = ATgetArgument(t, 0);
                                      t = i_52;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          i_52 = ATgetArgument(t, 0);
                                          j_52 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, i_52, j_52);
                                    }
                                  LocalPopChoice(e_26);
                                }
                              else
                                {
                                  t = d_26;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(c_26);
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
  t = topdown_1_0(s_5, t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL;
  k_53 = t;
  t = SSL_explode_term(k_53);
  if(match_cons(t, sym__2))
    {
      ATerm f_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_26 = ATgetArgument(t, 1);
        if(((ATgetType(h_26) == AT_LIST) && !(ATisEmpty(h_26))))
          {
            j_53 = ATgetFirst((ATermList) h_26);
            {
              ATerm i_26 = (ATerm) ATgetNext((ATermList) h_26);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_53;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL;
  g_29 = t;
  t = SSL_explode_term(g_29);
  if(match_cons(t, sym__2))
    {
      ATerm k_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_26 = ATgetArgument(t, 1);
        if(((ATgetType(l_26) == AT_LIST) && !(ATisEmpty(l_26))))
          {
            ATerm m_26 = ATgetFirst((ATermList) l_26);
            e_29 = (ATerm) ATgetNext((ATermList) l_26);
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
static ATerm x_5 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm h_102 (ATerm), ATerm t)
{
  ATerm a_53 = NULL,b_53 = NULL;
  static ATerm l_53 (ATerm t)
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_53 = NULL,f_53 = NULL,g_53 = NULL;
        c_53 = t;
        t = map_1_0(v_5, t);
        t = h_102(t);
        f_53 = t;
        t = c_53;
        t = map_1_0(w_5, t);
        t = l_53(t);
        g_53 = t;
        t = (ATerm) ATinsert(CheckATermList(g_53), f_53);
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        t = map_1_0(x_5, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = l_53(t);
  b_53 = t;
  t = term_i_19;
  a_53 = t;
  t = SSL_mkterm(a_53, b_53);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm m_53 = NULL;
  m_53 = t;
  {
    ATerm p_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_53 = NULL,p_53 = NULL,r_53 = NULL;
        t = m_53;
        t = new_0_0(t);
        o_53 = t;
        t = new_0_0(t);
        p_53 = t;
        t = new_0_0(t);
        r_53 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_53), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_i_19, (ATerm) ATinsert(ATinsert(ATempty, m_53), (ATerm) ATmakeAppl(sym_Var_1, p_53))), (ATerm) ATmakeAppl(sym_Var_1, r_53)), (ATerm)ATmakeAppl(sym_VarDec_2, o_53, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_27), term_a_27)), p_53, (ATerm)ATmakeAppl(sym_Var_1, p_53), r_53, (ATerm) ATmakeAppl(sym_Var_1, r_53));
        LocalPopChoice(r_26);
      }
    else
      {
        t = p_26;
        {
          ATerm t_53 = NULL,v_53 = NULL,w_53 = NULL;
          t = m_53;
          t = new_0_0(t);
          t_53 = t;
          t = new_0_0(t);
          v_53 = t;
          t = new_0_0(t);
          w_53 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, t_53), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_i_19, (ATerm) ATinsert(ATinsert(ATempty, m_53), (ATerm) ATmakeAppl(sym_Var_1, v_53))), (ATerm) ATmakeAppl(sym_Var_1, w_53)), (ATerm)ATmakeAppl(sym_VarDec_2, t_53, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_27), term_a_27)), v_53, (ATerm)ATmakeAppl(sym_Var_1, v_53), w_53, (ATerm) ATmakeAppl(sym_Var_1, w_53));
        }
      }
  }
  return(t);
}
static ATerm c_9 (ATerm u_40, ATerm v_40, ATerm t)
{
  ATerm b_27 = t;
  int c_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(u_40, v_40);
      LocalPopChoice(c_27);
    }
  else
    {
      t = b_27;
      t = SSL_subtr(u_40, v_40);
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm y_53 = NULL,z_53 = NULL;
  if(match_cons(t, sym__2))
    {
      y_53 = ATgetArgument(t, 0);
      z_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, y_53, z_53, (ATerm) ATempty);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm b_54 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm d_27 = ATgetArgument(t, 0);
      if(((ATgetType(d_27) != AT_INT) || (ATgetInt((ATermInt) d_27) != 0)))
        _fail(t);
      {
        ATerm e_27 = ATgetArgument(t, 1);
      }
      b_54 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_54;
  return(t);
}
ATerm copy_1_0 (ATerm o_115 (ATerm), ATerm t)
{
  static ATerm b_6 (ATerm t)
  {
    ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL;
    if(match_cons(t, sym__3))
      {
        c_54 = ATgetArgument(t, 0);
        d_54 = ATgetArgument(t, 1);
        e_54 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, c_54, term_j_16);
    t = geq_0_0(t);
    t = term_j_16;
    j_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_54, term_j_16);
    t = c_9(c_54, j_54, t);
    h_54 = t;
    t = d_54;
    t = o_115(t);
    i_54 = t;
    t = (ATerm) ATmakeAppl(sym__3, h_54, d_54, (ATerm) ATinsert(CheckATermList(e_54), i_54));
    return(t);
  }
  t = for_3_0(y_5, a_6, b_6, t);
  return(t);
}
static ATerm d_9 (ATerm g_57, ATerm h_57, ATerm t)
{
  ATerm k_54 = NULL,l_54 = NULL,m_54 = NULL;
  t = new_0_0(t);
  k_54 = t;
  t = new_0_0(t);
  l_54 = t;
  t = new_0_0(t);
  m_54 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_54), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_i_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_57)), (ATerm) ATmakeAppl(sym_Var_1, l_54))), (ATerm) ATmakeAppl(sym_Op_2, term_i_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, h_57)), (ATerm) ATmakeAppl(sym_Var_1, m_54)))), (ATerm)ATmakeAppl(sym_VarDec_2, k_54, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_27), term_a_27)), l_54, (ATerm)ATmakeAppl(sym_Var_1, l_54), m_54, (ATerm) ATmakeAppl(sym_Var_1, m_54));
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
static ATerm g_61 (ATerm h_55, ATerm i_55, ATerm j_55, ATerm k_55, ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL,x_55 = NULL,y_55 = NULL,r_56 = NULL,p_57 = NULL,q_57 = NULL,r_57 = NULL,s_57 = NULL,t_57 = NULL,u_57 = NULL;
  t = term_j_16;
  u_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_55, term_j_16);
  t = h_10(i_55, u_57, t);
  t_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_57, term_e_16);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_55 = ATgetFirst((ATermList) t);
      u_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_55;
  t = last_0_0(t);
  s_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_55), t_55), u_55);
  t = genzip_4_0(c_6, f_6, j_6, k_6, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      x_55 = ATgetArgument(t, 0);
      y_55 = ATgetArgument(t, 1);
      r_56 = ATgetArgument(t, 2);
      p_57 = ATgetArgument(t, 3);
      q_57 = ATgetArgument(t, 4);
      r_57 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, q_57), r_56), u_55);
  t = concat_0_0(t);
  s_57 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, h_55, term_f_27), y_55, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(s_57), t_55), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_i_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, t_55)), (ATerm) ATmakeAppl(sym_Op_2, h_55, p_57))), (ATerm)ATmakeAppl(sym_Op_2, term_i_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, s_55)), (ATerm) ATmakeAppl(sym_Op_2, h_55, r_57))), (ATerm) ATmakeAppl(sym_Seqs_1, x_55)))));
  return(t);
}
static ATerm h_61 (ATerm h_58, ATerm n_58, ATerm o_58, ATerm r_58, ATerm t)
{
  ATerm l_59 = NULL,m_59 = NULL,n_59 = NULL,o_59 = NULL,q_59 = NULL,w_59 = NULL,z_59 = NULL,a_60 = NULL;
  t = r_58;
  t = new_0_0(t);
  l_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_58, (ATerm) ATmakeAppl(sym_Var_1, l_59));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      m_59 = ATgetArgument(t, 0);
      n_59 = ATgetArgument(t, 1);
      o_59 = ATgetArgument(t, 2);
      q_59 = ATgetArgument(t, 3);
      w_59 = ATgetArgument(t, 4);
      z_59 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_59, w_59);
  t = conc_0_0(t);
  a_60 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, h_58, term_g_27), n_59, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(a_60), l_59), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_i_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_59)), (ATerm) ATmakeAppl(sym_Op_2, h_58, q_59))), (ATerm)ATmakeAppl(sym_Op_2, h_58, z_59), (ATerm) ATmakeAppl(sym_Seqs_1, m_59)))));
  return(t);
}
static ATerm c_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_27 = ATgetArgument(t, 0);
      ATerm k_27 = ATgetArgument(t, 1);
      if(((ATgetType(k_27) != AT_LIST) || !(ATisEmpty(k_27))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm v_57 = NULL,w_57 = NULL,x_57 = NULL,y_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_27 = ATgetArgument(t, 0);
      if(((ATgetType(l_27) == AT_LIST) && !(ATisEmpty(l_27))))
        {
          v_57 = ATgetFirst((ATermList) l_27);
          w_57 = (ATerm) ATgetNext((ATermList) l_27);
        }
      else
        _fail(t);
      {
        ATerm m_27 = ATgetArgument(t, 1);
        if(((ATgetType(m_27) == AT_LIST) && !(ATisEmpty(m_27))))
          {
            x_57 = ATgetFirst((ATermList) m_27);
            y_57 = (ATerm) ATgetNext((ATermList) m_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_57, x_57), (ATerm) ATmakeAppl(sym__2, w_57, y_57));
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm z_57 = NULL,a_58 = NULL;
  if(match_cons(t, sym__2))
    {
      z_57 = ATgetArgument(t, 0);
      a_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_58), z_57);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL;
  if(match_cons(t, sym__2))
    {
      b_58 = ATgetArgument(t, 0);
      c_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_9(b_58, c_58, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm e_60 = NULL,m_60 = NULL,p_60 = NULL,q_60 = NULL,r_60 = NULL,u_60 = NULL;
  e_60 = t;
  if(match_cons(t, sym__3))
    {
      m_60 = ATgetArgument(t, 0);
      p_60 = ATgetArgument(t, 1);
      q_60 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = p_60;
  if(match_string(t, "T"))
    {
      t = q_60;
      if(match_cons(t, sym__2))
        {
          r_60 = ATgetArgument(t, 0);
          u_60 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_60;
      if(match_int(t, 0))
        {
          ATerm n_27 = t;
          int r_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_61(m_60, r_60, u_60, e_60, t);
              LocalPopChoice(r_27);
            }
          else
            {
              t = n_27;
              {
                ATerm d_61 = NULL;
                t = e_60;
                t = new_0_0(t);
                d_61 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, m_60, term_f_27), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_61), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_i_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, d_61)), (ATerm) ATmakeAppl(sym_Op_2, m_60, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_i_19, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, d_61)), (ATerm) ATmakeAppl(sym_Op_2, m_60, (ATerm) ATempty))), term_h_20))));
              }
            }
        }
      else
        {
          t = g_61(m_60, r_60, u_60, e_60, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = q_60;
      if(match_cons(t, sym__2))
        {
          r_60 = ATgetArgument(t, 0);
          u_60 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_61(m_60, r_60, u_60, e_60, t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm u_110 (ATerm), ATerm t)
{
  ATerm m_16 = NULL;
  static ATerm l_6 (ATerm t)
  {
    t = u_110(t);
    if(((m_16 != NULL) && (m_16 != t)))
      _fail(t);
    else
      m_16 = t;
    return(t);
  }
  t = fetch_1_0(l_6, t);
  t = not_null(m_16);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm p_16 = NULL,r_16 = NULL,y_16 = NULL;
  t = term_f_16;
  r_16 = t;
  t = (ATerm) ATinsert(ATempty, term_x_27);
  y_16 = t;
  t = SSL_printnl(r_16, y_16);
  t = term_j_16;
  p_16 = t;
  t = SSL_exit(p_16);
  t = (ATerm) ATinsert(ATempty, term_x_27);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_y_27;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL;
  ATerm z_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          ATerm d_28 = ATgetArgument(t, 0);
          y_12 = ATgetArgument(t, 1);
          z_12 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(a_28);
      t = z_12;
      t = foldr_3_0(u_6, v_6, y_6, t);
      t = y_12;
      t = foldr_3_0(z_6, b_7, c_7, t);
    }
  else
    {
      t = z_27;
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          ATerm e_28 = ATgetArgument(t, 0);
          y_12 = ATgetArgument(t, 1);
          z_12 = ATgetArgument(t, 2);
          {
            ATerm g_28 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = z_12;
      t = foldr_3_0(d_7, e_7, f_7, t);
      t = y_12;
      t = foldr_3_0(h_7, m_7, n_7, t);
    }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = term_w_18;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm g_13 = NULL,h_13 = NULL;
  if(match_cons(t, sym__2))
    {
      g_13 = ATgetArgument(t, 0);
      h_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_10(g_13, h_13, t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_w_18;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL;
  if(match_cons(t, sym__2))
    {
      i_13 = ATgetArgument(t, 0);
      j_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_10(i_13, j_13, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = term_w_18;
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL;
  if(match_cons(t, sym__2))
    {
      n_13 = ATgetArgument(t, 0);
      o_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_10(n_13, o_13, t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_w_18;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL;
  if(match_cons(t, sym__2))
    {
      p_13 = ATgetArgument(t, 0);
      q_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_10(p_13, q_13, t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      ATerm i_28 = ATgetArgument(t, 0);
      ATerm j_28 = ATgetArgument(t, 1);
      ATerm k_28 = ATgetArgument(t, 2);
      ATerm n_28 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  return(t);
}
ATerm JoinDefsExt_0_0 (ATerm t)
{
  ATerm p_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_17 = NULL;
      static ATerm n_6 (ATerm t)
      {
        ATerm q_17 = NULL,r_17 = NULL;
        q_17 = t;
        {
          ATerm u_28 = t;
          int w_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDef_3))
                {
                  r_17 = ATgetArgument(t, 0);
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
              t = r_17;
              if(((p_17 != NULL) && (p_17 != t)))
                _fail(t);
              else
                p_17 = t;
              t = q_17;
            }
          else
            {
              t = u_28;
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  r_17 = ATgetArgument(t, 0);
                  {
                    ATerm a_29 = ATgetArgument(t, 1);
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
              t = r_17;
              if(((p_17 != NULL) && (p_17 != t)))
                _fail(t);
              else
                p_17 = t;
              t = q_17;
            }
        }
        return(t);
      }
      t = fetch_1_0(n_6, t);
      {
        static ATerm o_6 (ATerm t)
        {
          if(match_cons(t, sym_SDefT_4))
            {
              if(((p_17 != NULL) && (p_17 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                p_17 = ATgetArgument(t, 0);
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
        t = fetch_1_0(o_6, t);
      }
      t = not_null(p_17);
      t = debug_1_0(q_6, t);
      t = giving_up_0_0(t);
      LocalPopChoice(q_28);
    }
  else
    {
      t = p_28;
      {
        ATerm q_19 = NULL;
        q_19 = t;
        t = map_1_0(s_6, t);
        t = q_19;
        {
          ATerm o_29 = t;
          int p_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = fetch_elem_1_0(o_7, t);
              LocalPopChoice(p_29);
            }
          else
            {
              t = o_29;
              {
                ATerm s_13 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    s_13 = ATgetFirst((ATermList) t);
                    {
                      ATerm q_29 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = s_13;
              }
            }
        }
      }
    }
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_g_20;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,o_14 = NULL;
  x_19 = t;
  t = SSL_explode_term(x_19);
  if(match_cons(t, sym__2))
    {
      ATerm r_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_29 = ATgetArgument(t, 1);
        if(((ATgetType(s_29) == AT_LIST) && !(ATisEmpty(s_29))))
          {
            y_19 = ATgetFirst((ATermList) s_29);
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
  t = SSL_explode_term(x_19);
  if(match_cons(t, sym__2))
    {
      ATerm u_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_29 = ATgetArgument(t, 1);
        if(((ATgetType(w_29) == AT_LIST) && !(ATisEmpty(w_29))))
          {
            ATerm x_29 = ATgetFirst((ATermList) w_29);
            ATerm y_29 = (ATerm) ATgetNext((ATermList) w_29);
            if(((ATgetType(y_29) == AT_LIST) && !(ATisEmpty(y_29))))
              {
                o_14 = ATgetFirst((ATermList) y_29);
                {
                  ATerm z_29 = (ATerm) ATgetNext((ATermList) y_29);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, y_19, o_14);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(p_7, r_7, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL;
  e_20 = t;
  if(match_cons(t, sym__2))
    {
      f_20 = ATgetArgument(t, 0);
      k_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_20;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_20 = ATgetFirst((ATermList) t);
      m_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_20;
  if(match_cons(t, sym__2))
    {
      c_20 = ATgetArgument(t, 0);
      d_20 = ATgetArgument(t, 1);
      {
        ATerm a_30 = t;
        int b_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_20;
            if((f_20 != t))
              {
                _fail(t);
              }
            t = d_20;
            LocalPopChoice(b_30);
          }
        else
          {
            t = a_30;
            t = (ATerm) ATmakeAppl(sym__2, f_20, m_20);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, f_20, m_20);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm x_99 (ATerm), ATerm t)
{
  static ATerm n_21 (ATerm t)
  {
    ATerm c_30 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_99(t);
        LocalPopChoice(d_30);
      }
    else
      {
        t = c_30;
        t = SRTS_all(n_21, t);
      }
    return(t);
  }
  t = n_21(t);
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
  ATerm e_22 = NULL,f_22 = NULL,i_22 = NULL,j_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_30 = ATgetArgument(t, 0);
      if(((ATgetType(h_30) == AT_LIST) && !(ATisEmpty(h_30))))
        {
          e_22 = ATgetFirst((ATermList) h_30);
          f_22 = (ATerm) ATgetNext((ATermList) h_30);
        }
      else
        _fail(t);
      {
        ATerm i_30 = ATgetArgument(t, 1);
        if(((ATgetType(i_30) == AT_LIST) && !(ATisEmpty(i_30))))
          {
            i_22 = ATgetFirst((ATermList) i_30);
            j_22 = (ATerm) ATgetNext((ATermList) i_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_22, i_22), (ATerm) ATmakeAppl(sym__2, f_22, j_22));
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm l_22 = NULL,o_22 = NULL;
  if(match_cons(t, sym__2))
    {
      l_22 = ATgetArgument(t, 0);
      o_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_22), l_22);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL;
  r_21 = t;
  {
    ATerm j_30 = t;
    int k_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_30 = ATgetArgument(t, 0);
            ATerm m_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(k_30);
        t = r_21;
      }
    else
      {
        t = j_30;
        {
          ATerm c_22 = NULL;
          if(match_cons(t, sym__3))
            {
              s_21 = ATgetArgument(t, 0);
              t_21 = ATgetArgument(t, 1);
              u_21 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, s_21, t_21);
          t = genzip_4_0(t_7, u_7, w_7, _id, t);
          c_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_22, u_21);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL;
  static ATerm x_7 (ATerm t)
  {
    ATerm w_14 = NULL;
    t = o_97(t);
    w_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_14, not_null(s_22));
    t = lookup_0_0(t);
    t = p_97(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((s_22 != NULL) && (s_22 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_22 = ATgetArgument(t, 0);
      r_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_22;
  t = alltd_1_0(x_7, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL,f_24 = NULL,i_24 = NULL,g_6 = NULL;
  i_24 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      a_24 = ATgetArgument(t, 0);
      b_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_24);
  z_23 = t;
  t = a_24;
  t = new_0_0(t);
  f_24 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, f_24, b_24);
  g_6 = t;
  t = SSLsetAnnotations(g_6, z_23);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,p_24 = NULL,i_6 = NULL;
  p_24 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      k_24 = ATgetArgument(t, 0);
      l_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_24);
  j_24 = t;
  t = k_24;
  t = new_0_0(t);
  m_24 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, m_24, l_24);
  i_6 = t;
  t = SSLsetAnnotations(i_6, j_24);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm r_24 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      r_24 = ATgetArgument(t, 0);
      {
        ATerm n_30 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_24), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm s_24 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      s_24 = ATgetArgument(t, 0);
      {
        ATerm o_30 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, s_24);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm l_25 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      l_25 = ATgetArgument(t, 0);
      {
        ATerm p_30 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = l_25;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm m_25 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      m_25 = ATgetArgument(t, 0);
      {
        ATerm q_30 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = m_25;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm r_25 = NULL,t_25 = NULL,z_25 = NULL,b_26 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      t_25 = ATgetArgument(t, 0);
      b_26 = ATgetArgument(t, 1);
      r_25 = ATgetArgument(t, 2);
      t = t_25;
      if(match_cons(t, sym_SVar_1))
        {
          z_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_26;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_25;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_25;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          t_25 = ATgetArgument(t, 0);
          b_26 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_25;
      if(match_cons(t, sym_SVar_1))
        {
          z_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_26;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_25;
    }
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm g_26 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_26;
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,p_23 = NULL,q_23 = NULL,v_23 = NULL,x_23 = NULL;
  p_23 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_30 = ATgetFirst((ATermList) t);
      if(match_cons(r_30, sym_SDefT_4))
        {
          h_23 = ATgetArgument(r_30, 0);
          i_23 = ATgetArgument(r_30, 1);
          j_23 = ATgetArgument(r_30, 2);
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
  t = i_23;
  t = map_1_0(y_7, t);
  k_23 = t;
  t = j_23;
  t = map_1_0(b_8, t);
  l_23 = t;
  t = k_23;
  t = map_1_0(d_8, t);
  v_23 = t;
  t = l_23;
  t = map_1_0(h_8, t);
  q_23 = t;
  t = p_23;
  {
    static ATerm j_8 (ATerm t)
    {
      ATerm t_24 = NULL,x_24 = NULL,e_25 = NULL,g_25 = NULL,j_25 = NULL,k_25 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm u_30 = ATgetArgument(t, 0);
          t_24 = ATgetArgument(t, 1);
          x_24 = ATgetArgument(t, 2);
          e_25 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = x_24;
      t = map_1_0(l_8, t);
      g_25 = t;
      t = t_24;
      t = map_1_0(m_8, t);
      k_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, k_25, v_23, e_25);
      t = substitute_2_0(n_8, _id, t);
      j_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, g_25, q_23, j_25);
      t = substitute_2_0(p_8, _id, t);
      return(t);
    }
    t = map_1_0(j_8, t);
  }
  t = choices_0_0(t);
  x_23 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, h_23, k_23, l_23, x_23);
  return(t);
}
static ATerm q_63 (ATerm u_61, ATerm v_61, ATerm w_61, ATerm x_61, ATerm t)
{
  ATerm h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL,m_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_61, v_61);
  t = Definitions_0_0(t);
  h_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_62, w_61);
  k_62 = t;
  if(match_cons(t, sym__2))
    {
      ATerm v_30 = ATgetArgument(t, 0);
      ATerm x_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_62);
  i_62 = t;
  t = h_62;
  {
    ATerm y_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_62 = NULL,n_62 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_62 = ATgetFirst((ATermList) t);
            n_62 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_62;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_62;
        LocalPopChoice(z_30);
      }
    else
      {
        t = y_30;
        {
          ATerm a_31 = t;
          int b_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = JoinDefs2_0_0(t);
              LocalPopChoice(b_31);
            }
          else
            {
              t = a_31;
              t = JoinDefsExt_0_0(t);
            }
        }
      }
  }
  j_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_62, w_61);
  m_6 = t;
  t = SSLsetAnnotations(m_6, i_62);
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm q_62 = NULL,t_62 = NULL,v_62 = NULL,z_62 = NULL,a_63 = NULL,b_63 = NULL,d_63 = NULL;
  v_62 = t;
  if(match_cons(t, sym__2))
    {
      z_62 = ATgetArgument(t, 0);
      d_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_62;
  if(match_cons(t, sym__2))
    {
      a_63 = ATgetArgument(t, 0);
      b_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_63;
  if(match_cons(t, sym_Mod_2))
    {
      q_62 = ATgetArgument(t, 0);
      t_62 = ATgetArgument(t, 1);
      {
        ATerm c_31 = t;
        int d_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_63 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, q_62, t_62, b_63);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            p_63 = t;
            t = (ATerm) ATmakeAppl(sym__2, p_63, d_63);
            LocalPopChoice(d_31);
          }
        else
          {
            t = c_31;
            t = q_63(a_63, b_63, d_63, v_62, t);
          }
      }
    }
  else
    {
      t = q_63(a_63, b_63, d_63, v_62, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm y_110 (ATerm), ATerm t)
{
  static ATerm v_64 (ATerm t)
  {
    ATerm q_64 = NULL,r_64 = NULL,u_64 = NULL;
    u_64 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_64 = ATgetFirst((ATermList) t);
        r_64 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm k_29 = NULL,n_29 = NULL,p_6 = NULL;
          t = SSLgetAnnotations(u_64);
          k_29 = t;
          t = r_64;
          t = v_64(t);
          n_29 = t;
          t = (ATerm) ATinsert(CheckATermList(n_29), q_64);
          p_6 = t;
          t = SSLsetAnnotations(p_6, k_29);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_64;
        t = y_110(t);
      }
    return(t);
  }
  t = v_64(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL;
  s_63 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_63;
    }
  else
    {
      static ATerm q_8 (ATerm t)
      {
        t = not_null(u_63);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_63 = ATgetFirst((ATermList) t);
          if(((u_63 != NULL) && (u_63 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            u_63 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_63;
      t = at_end_1_0(q_8, t);
    }
  return(t);
}
static ATerm k_65 (ATerm b_65, ATerm t)
{
  ATerm d_65 = NULL;
  t = SSL_explode_term(b_65);
  if(match_cons(t, sym__2))
    {
      ATerm e_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      d_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_65;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL;
  h_65 = t;
  if(match_cons(t, sym__2))
    {
      f_65 = ATgetArgument(t, 0);
      g_65 = ATgetArgument(t, 1);
      {
        ATerm f_31 = t;
        int g_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_8 (ATerm t)
            {
              t = g_65;
              return(t);
            }
            t = f_65;
            t = at_end_1_0(s_8, t);
            LocalPopChoice(g_31);
          }
        else
          {
            t = f_31;
            t = k_65(h_65, t);
          }
      }
    }
  else
    {
      t = k_65(h_65, t);
    }
  return(t);
}
static ATerm j_9 (ATerm f_112 (ATerm), ATerm v_45, ATerm u_45, ATerm t)
{
  static ATerm i_66 (ATerm t)
  {
    ATerm x_65 = NULL,y_65 = NULL,e_66 = NULL;
    x_65 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_65;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_65 = ATgetFirst((ATermList) t);
            e_66 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_31 = t;
          int i_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_65;
              {
                static ATerm t_8 (ATerm t)
                {
                  t = u_45;
                  return(t);
                }
                t = u_9(f_112, t_8, y_65, e_66, t);
              }
              t = i_66(t);
              LocalPopChoice(i_31);
            }
          else
            {
              t = h_31;
              {
                ATerm v_29 = NULL,g_30 = NULL,r_6 = NULL;
                t = SSLgetAnnotations(x_65);
                v_29 = t;
                t = e_66;
                t = i_66(t);
                g_30 = t;
                t = (ATerm) ATinsert(CheckATermList(g_30), y_65);
                r_6 = t;
                t = SSLsetAnnotations(r_6, v_29);
              }
            }
        }
      }
    return(t);
  }
  t = v_45;
  t = i_66(t);
  return(t);
}
ATerm genzip_4_0 (ATerm r_102 (ATerm), ATerm s_102 (ATerm), ATerm t_102 (ATerm), ATerm u_102 (ATerm), ATerm t)
{
  static ATerm x_66 (ATerm t)
  {
    ATerm j_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_102(t);
        LocalPopChoice(m_31);
      }
    else
      {
        t = j_31;
        {
          ATerm k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,p_66 = NULL,w_66 = NULL,t_6 = NULL;
          t = s_102(t);
          w_66 = t;
          if(match_cons(t, sym__2))
            {
              l_66 = ATgetArgument(t, 0);
              m_66 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_66);
          k_66 = t;
          t = l_66;
          t = u_102(t);
          n_66 = t;
          t = m_66;
          t = x_66(t);
          p_66 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_66, p_66);
          t_6 = t;
          t = SSLsetAnnotations(t_6, k_66);
          t = t_102(t);
        }
      }
    return(t);
  }
  t = x_66(t);
  return(t);
}
static ATerm u_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_31 = ATgetArgument(t, 0);
      if(((ATgetType(n_31) != AT_LIST) || !(ATisEmpty(n_31))))
        _fail(t);
      {
        ATerm o_31 = ATgetArgument(t, 1);
        if(((ATgetType(o_31) != AT_LIST) || !(ATisEmpty(o_31))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm g_67 = NULL,h_67 = NULL,k_67 = NULL,l_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_31 = ATgetArgument(t, 0);
      if(((ATgetType(p_31) == AT_LIST) && !(ATisEmpty(p_31))))
        {
          g_67 = ATgetFirst((ATermList) p_31);
          h_67 = (ATerm) ATgetNext((ATermList) p_31);
        }
      else
        _fail(t);
      {
        ATerm q_31 = ATgetArgument(t, 1);
        if(((ATgetType(q_31) == AT_LIST) && !(ATisEmpty(q_31))))
          {
            k_67 = ATgetFirst((ATermList) q_31);
            l_67 = (ATerm) ATgetNext((ATermList) q_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_67, k_67), (ATerm) ATmakeAppl(sym__2, h_67, l_67));
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm m_67 = NULL,n_67 = NULL;
  if(match_cons(t, sym__2))
    {
      m_67 = ATgetArgument(t, 0);
      n_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_67), m_67);
  return(t);
}
static ATerm o_9 (ATerm m_692, ATerm r_692, ATerm u_67, ATerm t)
{
  ATerm z_66 = NULL,b_67 = NULL,c_67 = NULL,d_67 = NULL;
  t = SSL_explode_term(r_692);
  if(match_cons(t, sym__2))
    {
      z_66 = ATgetArgument(t, 0);
      c_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(m_692);
  if(match_cons(t, sym__2))
    {
      if((z_66 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      b_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_67, c_67);
  t = genzip_4_0(u_8, w_8, y_8, _id, t);
  d_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_67, u_67);
  t = conc_0_0(t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm a_68 = NULL;
  a_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, a_68);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,w_6 = NULL;
  f_68 = t;
  if(match_cons(t, sym__2))
    {
      d_68 = ATgetArgument(t, 0);
      e_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_68);
  c_68 = t;
  t = e_68;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_68, e_68);
  w_6 = t;
  t = SSLsetAnnotations(w_6, c_68);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm k_69 = NULL,l_69 = NULL,m_69 = NULL,x_69 = NULL,a_70 = NULL;
  k_69 = t;
  if(match_cons(t, sym__2))
    {
      l_69 = ATgetArgument(t, 0);
      m_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_69;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_69 = ATgetFirst((ATermList) t);
      a_70 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_31 = t;
        int w_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_71(l_69, m_69, k_69, t);
            LocalPopChoice(w_31);
          }
        else
          {
            t = r_31;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_69), x_69), a_70);
          }
      }
    }
  else
    {
      t = q_71(l_69, m_69, k_69, t);
    }
  return(t);
}
static ATerm q_71 (ATerm g_68, ATerm h_68, ATerm i_68, ATerm t)
{
  ATerm j_68 = NULL,m_68 = NULL,x_6 = NULL,p_68 = NULL,c_69 = NULL,d_69 = NULL,e_69 = NULL;
  t = SSLgetAnnotations(i_68);
  j_68 = t;
  t = h_68;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_68 = ATgetFirst((ATermList) t);
      e_69 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_68;
  if(match_cons(t, sym__2))
    {
      c_69 = ATgetArgument(t, 0);
      d_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_32 = t;
    int c_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_69;
        if((c_69 != t))
          {
            _fail(t);
          }
        t = e_69;
        LocalPopChoice(c_32);
      }
    else
      {
        t = b_32;
        t = h_68;
        t = o_9(c_69, d_69, e_69, t);
      }
  }
  m_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_68, m_68);
  x_6 = t;
  t = SSLsetAnnotations(x_6, j_68);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm p_71 = NULL;
  if(match_cons(t, sym__2))
    {
      p_71 = ATgetArgument(t, 0);
      if((p_71 != ATgetArgument(t, 1)))
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
  ATerm i_32 = t;
  int j_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(a_9, e_9, k_9, t);
      LocalPopChoice(j_32);
    }
  else
    {
      t = i_32;
      {
        ATerm h_70 = NULL,k_70 = NULL,n_70 = NULL;
        h_70 = t;
        if(match_cons(t, sym__2))
          {
            k_70 = ATgetArgument(t, 0);
            n_70 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_70;
        t = j_9(l_9, k_70, n_70, t);
      }
    }
  return(t);
}
static ATerm q_9 (ATerm r_129 (ATerm), ATerm s_129 (ATerm), ATerm t_129 (ATerm), ATerm v_68, ATerm s_68, ATerm a_69, ATerm w_68, ATerm t_68, ATerm u_68, ATerm t)
{
  ATerm t_71 = NULL,u_71 = NULL,v_71 = NULL,z_71 = NULL,a_72 = NULL,b_72 = NULL,h_72 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_68, w_68);
  t = r_129(t);
  if(match_cons(t, sym__2))
    {
      u_71 = ATgetArgument(t, 0);
      t_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_71;
  t = s_129(t);
  v_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_71, a_69);
  t = diff_0_0(t);
  z_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_71, s_68);
  t = conc_0_0(t);
  a_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_71, a_69);
  t = conc_0_0(t);
  b_72 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_68, u_71, t_68);
  t = t_129(t);
  h_72 = t;
  t = (ATerm) ATmakeAppl(sym__5, a_72, b_72, t_71, h_72, u_68);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm r_129 (ATerm), ATerm s_129 (ATerm), ATerm t_129 (ATerm), ATerm t)
{
  ATerm v_72 = NULL,w_72 = NULL,c_73 = NULL,d_73 = NULL,e_73 = NULL,f_73 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm k_32 = ATgetArgument(t, 0);
      if(((ATgetType(k_32) == AT_LIST) && !(ATisEmpty(k_32))))
        {
          v_72 = ATgetFirst((ATermList) k_32);
          w_72 = (ATerm) ATgetNext((ATermList) k_32);
        }
      else
        _fail(t);
      c_73 = ATgetArgument(t, 1);
      d_73 = ATgetArgument(t, 2);
      e_73 = ATgetArgument(t, 3);
      f_73 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = q_9(r_129, s_129, t_129, v_72, w_72, c_73, d_73, e_73, f_73, t);
  return(t);
}
ATerm while_not_2_0 (ATerm r_104 (ATerm), ATerm s_104 (ATerm), ATerm t)
{
  static ATerm v_74 (ATerm t)
  {
    ATerm l_32 = t;
    int m_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_104(t);
        LocalPopChoice(m_32);
      }
    else
      {
        t = l_32;
        t = s_104(t);
        t = v_74(t);
      }
    return(t);
  }
  t = v_74(t);
  return(t);
}
ATerm for_3_0 (ATerm u_104 (ATerm), ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm t)
{
  t = u_104(t);
  t = while_not_2_0(v_104, w_104, t);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm v_75 = NULL,w_75 = NULL,x_75 = NULL;
  if(match_cons(t, sym__3))
    {
      v_75 = ATgetArgument(t, 0);
      w_75 = ATgetArgument(t, 1);
      x_75 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, v_75, v_75, w_75, x_75, (ATerm) ATempty);
  return(t);
}
static ATerm n_9 (ATerm t)
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
static ATerm r_9 (ATerm t)
{
  ATerm q_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, s_9, w_9, t);
      LocalPopChoice(s_32);
    }
  else
    {
      t = q_32;
      {
        ATerm n_76 = NULL,o_76 = NULL,r_76 = NULL,s_76 = NULL,u_76 = NULL,v_76 = NULL,w_76 = NULL;
        if(match_cons(t, sym__5))
          {
            n_76 = ATgetArgument(t, 0);
            s_76 = ATgetArgument(t, 1);
            u_76 = ATgetArgument(t, 2);
            v_76 = ATgetArgument(t, 3);
            w_76 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = n_76;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_76 = ATgetFirst((ATermList) t);
            r_76 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, r_76, s_76, u_76, v_76, (ATerm) ATinsert(CheckATermList(w_76), o_76));
      }
    }
  return(t);
}
static ATerm s_9 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(y_9, t);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm i_76 = NULL,j_76 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm t_32 = ATgetArgument(t, 0);
      i_76 = ATgetArgument(t, 1);
      j_76 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_76), i_76);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm u_32 = t;
  int v_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      LocalPopChoice(v_32);
    }
  else
    {
      t = u_32;
    }
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,x_31 = NULL,y_31 = NULL,g_32 = NULL;
  x_31 = t;
  if(match_cons(t, sym__2))
    {
      y_31 = ATgetArgument(t, 0);
      g_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_31;
  if(match_cons(t, sym_Mod_2))
    {
      u_31 = ATgetArgument(t, 0);
      v_31 = ATgetArgument(t, 1);
      {
        ATerm w_32 = t;
        int x_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_31;
            t = k_8(u_31, v_31, g_32, t);
            LocalPopChoice(x_32);
          }
        else
          {
            t = w_32;
            t = r_32(y_31, g_32, t);
          }
      }
    }
  else
    {
      t = r_32(y_31, g_32, t);
    }
  return(t);
}
static ATerm r_32 (ATerm k_31, ATerm l_31, ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL;
  t = term_f_16;
  s_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_17), l_31), term_m_17), k_31), term_j_17);
  t_31 = t;
  t = SSL_printnl(s_31, t_31);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_17), l_31), term_m_17), k_31), term_j_17);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm z_77 = NULL,a_78 = NULL,d_78 = NULL,e_78 = NULL,f_78 = NULL;
  t = for_3_0(m_9, n_9, r_9, t);
  z_77 = t;
  if(match_cons(t, sym__2))
    {
      a_78 = ATgetArgument(t, 0);
      d_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_78;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_78;
    }
  else
    {
      ATerm w_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_78 = ATgetFirst((ATermList) t);
          f_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(f_78), e_78);
      t = map_1_0(i_10, t);
      t = term_j_16;
      w_30 = t;
      t = SSL_exit(w_30);
    }
  return(t);
}
static ATerm p_10 (ATerm t)
{
  t = term_w_18;
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm x_78 = NULL,y_78 = NULL;
  if(match_cons(t, sym__2))
    {
      x_78 = ATgetArgument(t, 0);
      y_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_10(x_78, y_78, t);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm v_10 (ATerm t)
{
  t = term_w_18;
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm z_78 = NULL,a_79 = NULL;
  if(match_cons(t, sym__2))
    {
      z_78 = ATgetArgument(t, 0);
      a_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_10(z_78, a_79, t);
  return(t);
}
static ATerm y_10 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm a_11 (ATerm t)
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
  t = term_y_32;
  return(t);
}
static ATerm c_11 (ATerm t)
{
  t = term_z_32;
  return(t);
}
ATerm RegisterExtSDefInl_0_0 (ATerm t)
{
  ATerm j_78 = NULL,k_78 = NULL,l_78 = NULL,m_78 = NULL,n_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL,s_78 = NULL,t_78 = NULL,u_78 = NULL,v_78 = NULL,w_78 = NULL;
  l_78 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      o_78 = ATgetArgument(t, 0);
      j_78 = ATgetArgument(t, 1);
      k_78 = ATgetArgument(t, 2);
      {
        ATerm a_33 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  q_78 = t;
  t = j_78;
  t = foldr_3_0(p_10, q_10, r_10, t);
  m_78 = t;
  t = k_78;
  t = foldr_3_0(v_10, x_10, y_10, t);
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
  t = v_9(a_11, w_78, r_78, t);
  p_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_78, (ATerm) ATmakeAppl(sym__2, m_78, n_78));
  u_78 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_33, (ATerm) ATinsert(CheckATermList(s_78), l_78));
  v_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_78, (ATerm) ATmakeAppl(sym__2, m_78, n_78)), (ATerm) ATmakeAppl(sym_Defined_2, term_f_33, (ATerm) ATinsert(CheckATermList(s_78), l_78)));
  t = t_9(b_11, u_78, v_78, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_33, p_78);
  t_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_78, (ATerm) ATmakeAppl(sym_Defined_2, term_g_33, p_78));
  t = t_9(c_11, o_78, t_78, t);
  t = q_78;
  return(t);
}
static ATerm e_11 (ATerm t)
{
  t = term_w_18;
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm q_79 = NULL,r_79 = NULL;
  if(match_cons(t, sym__2))
    {
      q_79 = ATgetArgument(t, 0);
      r_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_10(q_79, r_79, t);
  return(t);
}
static ATerm g_11 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm h_11 (ATerm t)
{
  t = term_w_18;
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
  t = h_10(s_79, t_79, t);
  return(t);
}
static ATerm l_11 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm n_11 (ATerm t)
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
static ATerm o_11 (ATerm t)
{
  t = term_y_32;
  return(t);
}
static ATerm p_11 (ATerm t)
{
  t = term_z_32;
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
  t = foldr_3_0(e_11, f_11, g_11, t);
  f_79 = t;
  t = d_79;
  t = foldr_3_0(h_11, i_11, l_11, t);
  g_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_79, (ATerm) ATmakeAppl(sym__2, f_79, g_79));
  {
    ATerm h_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(m_33);
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
  t = v_9(n_11, p_79, k_79, t);
  i_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_79, (ATerm) ATmakeAppl(sym__2, f_79, g_79));
  n_79 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_33, (ATerm) ATinsert(CheckATermList(l_79), e_79));
  o_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_79, (ATerm) ATmakeAppl(sym__2, f_79, g_79)), (ATerm) ATmakeAppl(sym_Defined_2, term_p_33, (ATerm) ATinsert(CheckATermList(l_79), e_79)));
  t = t_9(o_11, n_79, o_79, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_r_33, i_79);
  m_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_79, (ATerm) ATmakeAppl(sym_Defined_2, term_r_33, i_79));
  t = t_9(p_11, h_79, m_79, t);
  t = j_79;
  return(t);
}
static ATerm t_9 (ATerm y_109 (ATerm), ATerm c_42, ATerm a_42, ATerm t)
{
  ATerm v_79 = NULL,w_79 = NULL,x_79 = NULL,y_79 = NULL,z_79 = NULL,a_80 = NULL;
  y_79 = t;
  t = y_109(t);
  v_79 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_79, c_42, a_42);
  t = k_10(v_79, c_42, a_42, t);
  {
    ATerm s_33 = t;
    int t_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_80 = NULL;
        t = term_y_33;
        b_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_79, term_y_33);
        t = j_10(v_79, b_80, t);
        LocalPopChoice(t_33);
      }
    else
      {
        t = s_33;
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
  t = term_y_33;
  z_79 = t;
  t = (ATerm) ATinsert(CheckATermList(x_79), (ATerm) ATinsert(CheckATermList(w_79), c_42));
  a_80 = t;
  t = SSL_table_put(v_79, z_79, a_80);
  t = y_79;
  return(t);
}
static ATerm u_9 (ATerm n_112 (ATerm), ATerm o_112 (ATerm), ATerm b_46, ATerm a_46, ATerm t)
{
  t = o_112(t);
  {
    static ATerm r_11 (ATerm t)
    {
      ATerm c_80 = NULL;
      c_80 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_46, c_80);
      t = n_112(t);
      return(t);
    }
    t = fetch_1_0(r_11, t);
  }
  t = a_46;
  return(t);
}
static ATerm v_9 (ATerm k_112 (ATerm), ATerm x_45, ATerm w_45, ATerm t)
{
  static ATerm s_80 (ATerm t)
  {
    ATerm n_80 = NULL,o_80 = NULL,p_80 = NULL;
    n_80 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_45;
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
          int b_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_80;
              {
                static ATerm y_11 (ATerm t)
                {
                  t = w_45;
                  return(t);
                }
                t = u_9(k_112, y_11, o_80, p_80, t);
              }
              t = s_80(t);
              LocalPopChoice(b_34);
            }
          else
            {
              t = z_33;
              {
                ATerm q_33 = NULL,x_33 = NULL,a_7 = NULL;
                t = SSLgetAnnotations(n_80);
                q_33 = t;
                t = p_80;
                t = s_80(t);
                x_33 = t;
                t = (ATerm) ATinsert(CheckATermList(x_33), o_80);
                a_7 = t;
                t = SSLsetAnnotations(a_7, q_33);
              }
            }
        }
      }
    return(t);
  }
  t = x_45;
  t = s_80(t);
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm g_81 = NULL;
  g_81 = t;
  {
    ATerm c_34 = t;
    int d_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_34 = NULL,d_35 = NULL;
        t = term_z_32;
        d_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_z_32, g_81);
        t = x_9(d_35, g_81, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm e_34 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_34) != ATmakeSymbol("a_1", 0, ATtrue)))
              _fail(t);
            z_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_34;
        LocalPopChoice(d_34);
      }
    else
      {
        t = c_34;
        {
          ATerm f_34 = t;
          int g_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_35 = NULL,r_35 = NULL;
              t = term_z_32;
              r_35 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_z_32, g_81);
              t = x_9(r_35, g_81, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm h_34 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) h_34) != ATmakeSymbol("w_0", 0, ATtrue)))
                    _fail(t);
                  n_35 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_35;
              LocalPopChoice(g_34);
            }
          else
            {
              t = f_34;
              {
                ATerm y_35 = NULL,b_36 = NULL;
                t = term_z_32;
                b_36 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_z_32, g_81);
                t = x_9(b_36, g_81, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm i_34 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) i_34) != ATmakeSymbol("s_0", 0, ATtrue)))
                      _fail(t);
                    y_35 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = y_35;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm x_9 (ATerm v_42, ATerm w_42, ATerm t)
{
  ATerm k_81 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_42, w_42);
  t = j_10(v_42, w_42, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_81 = ATgetFirst((ATermList) t);
      {
        ATerm j_34 = (ATerm) ATgetNext((ATermList) t);
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
      ATerm k_34 = ATgetArgument(t, 0);
      d_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_82;
  if(match_cons(t, sym__2))
    {
      ATerm l_34 = ATgetArgument(t, 0);
      ATerm m_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_34 = t;
    int o_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_37 = NULL,i_37 = NULL;
        t = term_y_32;
        i_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_y_32, b_82);
        t = x_9(i_37, b_82, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm p_34 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_34) != ATmakeSymbol("y_0", 0, ATtrue)))
              _fail(t);
            a_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_37;
        LocalPopChoice(o_34);
      }
    else
      {
        t = n_34;
        {
          ATerm q_34 = t;
          int r_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_37 = NULL,a_38 = NULL;
              t = term_y_32;
              a_38 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_y_32, b_82);
              t = x_9(a_38, b_82, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm v_34 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) v_34) != ATmakeSymbol("u_0", 0, ATtrue)))
                    _fail(t);
                  x_37 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = x_37;
              LocalPopChoice(r_34);
            }
          else
            {
              t = q_34;
              {
                ATerm e_38 = NULL,s_38 = NULL;
                t = term_y_32;
                s_38 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_y_32, b_82);
                t = x_9(s_38, b_82, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm w_34 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) w_34) != ATmakeSymbol("q_0", 0, ATtrue)))
                      _fail(t);
                    e_38 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = e_38;
              }
            }
        }
      }
  }
  return(t);
}
ATerm foldr_3_0 (ATerm a_115 (ATerm), ATerm b_115 (ATerm), ATerm c_115 (ATerm), ATerm t)
{
  ATerm k_82 = NULL,l_82 = NULL,m_82 = NULL;
  k_82 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_82;
      t = a_115(t);
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
      t = c_115(t);
      p_82 = t;
      t = m_82;
      t = foldr_3_0(a_115, b_115, c_115, t);
      q_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_82, q_82);
      t = b_115(t);
    }
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = term_w_18;
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm f_83 = NULL,g_83 = NULL;
  if(match_cons(t, sym__2))
    {
      f_83 = ATgetArgument(t, 0);
      g_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_10(f_83, g_83, t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  t = term_w_18;
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm h_83 = NULL,i_83 = NULL;
  if(match_cons(t, sym__2))
    {
      h_83 = ATgetArgument(t, 0);
      i_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_10(h_83, i_83, t);
  return(t);
}
static ATerm k_12 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm l_12 (ATerm t)
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
static ATerm m_12 (ATerm t)
{
  t = term_y_32;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = term_z_32;
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
        ATerm y_34 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  y_82 = t;
  t = r_82;
  t = foldr_3_0(a_12, g_12, h_12, t);
  u_82 = t;
  t = s_82;
  t = foldr_3_0(i_12, j_12, k_12, t);
  v_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_82, (ATerm) ATmakeAppl(sym__2, u_82, v_82));
  {
    ATerm b_35 = t;
    int c_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(c_35);
      }
    else
      {
        t = b_35;
        t = (ATerm) ATempty;
      }
  }
  a_83 = t;
  t = w_82;
  {
    ATerm e_35 = t;
    int g_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(g_35);
      }
    else
      {
        t = e_35;
        t = (ATerm) ATempty;
      }
  }
  z_82 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, u_82, v_82));
  e_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, u_82, v_82)), z_82);
  t = v_9(l_12, e_83, z_82, t);
  x_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_82, (ATerm) ATmakeAppl(sym__2, u_82, v_82));
  c_83 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_i_35, (ATerm) ATinsert(CheckATermList(a_83), t_82));
  d_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_82, (ATerm) ATmakeAppl(sym__2, u_82, v_82)), (ATerm) ATmakeAppl(sym_Defined_2, term_i_35, (ATerm) ATinsert(CheckATermList(a_83), t_82)));
  t = t_9(m_12, c_83, d_83, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_m_35, x_82);
  b_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_82, (ATerm) ATmakeAppl(sym_Defined_2, term_m_35, x_82));
  t = t_9(n_12, w_82, b_83, t);
  t = y_82;
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm o_35 = t;
  int p_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RegisterSDefT_0_0(t);
      LocalPopChoice(p_35);
    }
  else
    {
      t = o_35;
      {
        ATerm s_35 = t;
        int t_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RegisterExtSDef_0_0(t);
            LocalPopChoice(t_35);
          }
        else
          {
            t = s_35;
            t = RegisterExtSDefInl_0_0(t);
          }
      }
    }
  return(t);
}
ATerm needed_defs_0_0 (ATerm t)
{
  ATerm m_83 = NULL;
  t = map_1_0(p_12, t);
  m_83 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_z_35), m_83, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm t)
{
  ATerm n_83 = NULL,o_83 = NULL,p_83 = NULL,q_83 = NULL,r_83 = NULL,s_83 = NULL,g_7 = NULL;
  s_83 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_83 = ATgetFirst((ATermList) t);
      p_83 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_83);
  n_83 = t;
  t = o_83;
  t = k_83(t);
  q_83 = t;
  t = p_83;
  t = l_83(t);
  r_83 = t;
  t = (ATerm) ATinsert(CheckATermList(r_83), q_83);
  g_7 = t;
  t = SSLsetAnnotations(g_7, n_83);
  return(t);
}
static ATerm a_10 (ATerm i_33, ATerm j_33, ATerm t)
{
  ATerm t_83 = NULL;
  t = SSL_fputc(i_33, j_33);
  t_83 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_83);
  return(t);
}
static ATerm b_10 (ATerm d_32, ATerm e_32, ATerm t)
{
  ATerm u_83 = NULL;
  t = SSL_write_term_to_stream_text(d_32, e_32);
  u_83 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_83);
  return(t);
}
static ATerm d_10 (ATerm p_105 (ATerm), ATerm h_238, ATerm h_32, ATerm t)
{
  ATerm v_83 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_238, term_a_36);
  t = g_10(t);
  v_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_83, h_32);
  t = p_105(t);
  t = fclose_0_0(t);
  t = h_32;
  return(t);
}
static ATerm c_10 (ATerm z_31, ATerm a_32, ATerm t)
{
  ATerm w_83 = NULL;
  t = SSL_write_term_to_stream_baf(z_31, a_32);
  w_83 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_83);
  return(t);
}
static ATerm t_12 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_36 = ATgetArgument(t, 0);
      if(match_cons(c_36, sym_Stream_1))
        {
          n_39 = ATgetArgument(c_36, 0);
        }
      else
        _fail(t);
      o_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(n_39, o_39, t);
  return(t);
}
static ATerm v_12 (ATerm t)
{
  ATerm j_40 = NULL,n_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_36 = ATgetArgument(t, 0);
      if(match_cons(d_36, sym_Stream_1))
        {
          r_40 = ATgetArgument(d_36, 0);
        }
      else
        _fail(t);
      s_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_10(r_40, s_40, t);
  j_40 = t;
  t = term_e_36;
  n_40 = t;
  t = j_40;
  if(match_cons(t, sym_Stream_1))
    {
      q_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_e_36, j_40);
  t = a_10(n_40, q_40, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm a_84 = NULL,b_84 = NULL,c_84 = NULL,d_84 = NULL,e_84 = NULL,g_84 = NULL,h_84 = NULL,i_84 = NULL,j_84 = NULL,k_84 = NULL,k_85 = NULL,l_85 = NULL,j_7 = NULL,i_7 = NULL;
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
    ATerm f_36 = t;
    int j_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm s_12 (ATerm t)
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
        t = fetch_1_0(s_12, t);
        LocalPopChoice(j_36);
      }
    else
      {
        t = f_36;
        t = term_m_36;
        a_84 = t;
      }
  }
  k_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_84, j_84);
  i_7 = t;
  t = SSLsetAnnotations(i_7, h_84);
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
  j_7 = t;
  t = SSLsetAnnotations(j_7, c_84);
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
        ATerm a_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,k_7 = NULL;
        t = SSLgetAnnotations(g_84);
        a_39 = t;
        t = k_85;
        t = fetch_1_0(t_12, t);
        d_39 = t;
        t = l_85;
        if(match_cons(t, sym__2))
          {
            f_39 = ATgetArgument(t, 0);
            g_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_10(u_12, f_39, g_39, t);
        e_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_39, e_39);
        k_7 = t;
        t = SSLsetAnnotations(k_7, a_39);
        LocalPopChoice(o_36);
      }
    else
      {
        t = n_36;
        {
          ATerm x_39 = NULL,a_40 = NULL,g_40 = NULL,h_40 = NULL,l_7 = NULL;
          t = SSLgetAnnotations(g_84);
          x_39 = t;
          t = l_85;
          if(match_cons(t, sym__2))
            {
              g_40 = ATgetArgument(t, 0);
              h_40 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_10(v_12, g_40, h_40, t);
          a_40 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_85, a_40);
          l_7 = t;
          t = SSLsetAnnotations(l_7, x_39);
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
ATerm apply_strategy_1_0 (ATerm j_124 (ATerm), ATerm t)
{
  ATerm o_85 = NULL,p_85 = NULL,q_85 = NULL,r_85 = NULL,s_85 = NULL;
  s_85 = t;
  t = dtime_0_0(t);
  t = s_85;
  t = j_124(t);
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
static ATerm e_10 (ATerm f_32, ATerm t)
{
  t = SSL_read_term_from_stream(f_32);
  return(t);
}
static ATerm f_10 (ATerm k_33, ATerm l_33, ATerm t)
{
  ATerm h_86 = NULL;
  t = SSL_fopen(k_33, l_33);
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
  ATerm x_86 = NULL,y_86 = NULL,z_86 = NULL,c_87 = NULL,s_7 = NULL;
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
  s_7 = t;
  t = SSLsetAnnotations(s_7, z_86);
  if(match_cons(t, sym__2))
    {
      x_86 = ATgetArgument(t, 0);
      y_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_10(x_86, y_86, t);
  return(t);
}
static ATerm t_87 (ATerm e_87, ATerm f_87, ATerm g_87, ATerm t)
{
  ATerm h_87 = NULL,i_87 = NULL,j_87 = NULL,m_87 = NULL,v_7 = NULL;
  t = SSLgetAnnotations(g_87);
  j_87 = t;
  t = SSL_is_string(e_87);
  m_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_87, f_87);
  v_7 = t;
  t = SSLsetAnnotations(v_7, j_87);
  if(match_cons(t, sym__2))
    {
      h_87 = ATgetArgument(t, 0);
      i_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_10(h_87, i_87, t);
  return(t);
}
static ATerm g_10 (ATerm t)
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
static ATerm w_12 (ATerm t)
{
  t = term_y_36;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_87 = NULL,v_87 = NULL,w_87 = NULL;
  ATerm z_36 = t;
  int b_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_87 = NULL;
      x_87 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_87, term_c_37);
      t = g_10(t);
      LocalPopChoice(b_37);
    }
  else
    {
      t = z_36;
      t = debug_1_0(w_12, t);
      _fail(t);
    }
  v_87 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_10(w_87, t);
  u_87 = t;
  t = v_87;
  t = fclose_0_0(t);
  t = u_87;
  return(t);
}
ATerm fetch_1_0 (ATerm s_110 (ATerm), ATerm t)
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
      ATerm d_37 = t;
      int e_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_41 = NULL,o_41 = NULL,z_7 = NULL;
          t = SSLgetAnnotations(s_88);
          h_41 = t;
          t = t_88;
          t = s_110(t);
          o_41 = t;
          t = (ATerm) ATinsert(CheckATermList(u_88), o_41);
          z_7 = t;
          t = SSLsetAnnotations(z_7, h_41);
          LocalPopChoice(e_37);
        }
      else
        {
          t = d_37;
          {
            ATerm g_42 = NULL,m_42 = NULL,a_8 = NULL;
            t = SSLgetAnnotations(s_88);
            g_42 = t;
            t = u_88;
            t = v_88(t);
            m_42 = t;
            t = (ATerm) ATinsert(CheckATermList(m_42), t_88);
            a_8 = t;
            t = SSLsetAnnotations(a_8, g_42);
          }
        }
    }
    return(t);
  }
  t = v_88(t);
  return(t);
}
static ATerm z_9 (ATerm y_54, ATerm z_54, ATerm t)
{
  t = SSL_strcat(y_54, z_54);
  return(t);
}
ATerm debug_1_0 (ATerm n_105 (ATerm), ATerm t)
{
  ATerm y_88 = NULL,z_88 = NULL,a_89 = NULL,b_89 = NULL;
  y_88 = t;
  t = n_105(t);
  z_88 = t;
  t = term_f_16;
  a_89 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_88), z_88);
  b_89 = t;
  t = SSL_printnl(a_89, b_89);
  t = y_88;
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm f_37 = t;
  int g_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(g_37);
    }
  else
    {
      t = f_37;
    }
  return(t);
}
static ATerm a_13 (ATerm t)
{
  t = term_h_37;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm l_37 = t;
  int m_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_89 = NULL;
      i_89 = t;
      t = SSL_is_string(i_89);
      LocalPopChoice(m_37);
    }
  else
    {
      t = l_37;
      {
        ATerm n_37 = t;
        int o_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(x_12, t);
            LocalPopChoice(o_37);
          }
        else
          {
            t = n_37;
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
                        ATerm p_37 = t;
                        int q_37 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(q_37);
                          }
                        else
                          {
                            t = p_37;
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
                      t = z_9(u_89, v_89, t);
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
  t = term_r_37;
  a_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_37, z_89);
  t = j_10(a_90, z_89, t);
  {
    ATerm s_37 = t;
    int t_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_90 = NULL,c_90 = NULL;
        t = eval_config_0_0(t);
        b_90 = t;
        t = term_r_37;
        c_90 = t;
        t = SSL_table_put(c_90, z_89, b_90);
        t = b_90;
        LocalPopChoice(t_37);
      }
    else
      {
        t = s_37;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm g_107 (ATerm), ATerm t)
{
  ATerm g_90 = NULL;
  g_90 = t;
  {
    ATerm u_37 = t;
    int v_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_90 = NULL;
        t = term_w_37;
        t = get_config_0_0(t);
        i_90 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_90, term_y_37);
        t = geq_0_0(t);
        t = g_90;
        t = g_107(t);
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
static ATerm c_13 (ATerm t)
{
  ATerm m_90 = NULL,n_90 = NULL,o_90 = NULL;
  m_90 = t;
  t = SSL_string_to_int(m_90);
  n_90 = t;
  t = term_z_37;
  o_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_37, n_90);
  t = m_10(o_90, n_90, t);
  t = m_90;
  return(t);
}
static ATerm d_13 (ATerm t)
{
  t = term_b_38;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_13, c_13, d_13, t);
  return(t);
}
static ATerm e_13 (ATerm t)
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
static ATerm l_13 (ATerm t)
{
  ATerm r_90 = NULL,s_90 = NULL;
  t = term_w_37;
  r_90 = t;
  t = term_w_18;
  s_90 = t;
  t = term_c_38;
  t = m_10(r_90, s_90, t);
  t = term_d_38;
  return(t);
}
static ATerm m_13 (ATerm t)
{
  t = term_h_38;
  return(t);
}
static ATerm r_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_13 (ATerm t)
{
  ATerm t_90 = NULL,u_90 = NULL,v_90 = NULL;
  t_90 = t;
  t = SSL_string_to_int(t_90);
  u_90 = t;
  t = term_w_37;
  v_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_37, u_90);
  t = m_10(v_90, u_90, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_90);
  return(t);
}
static ATerm u_13 (ATerm t)
{
  t = term_o_38;
  return(t);
}
static ATerm v_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm w_90 = NULL,x_90 = NULL;
  t = term_t_38;
  w_90 = t;
  t = term_e_16;
  x_90 = t;
  t = term_v_38;
  t = m_10(w_90, x_90, t);
  t = term_z_38;
  return(t);
}
static ATerm l_14 (ATerm t)
{
  t = term_b_39;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_39 = t;
  int q_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_13, l_13, m_13, t);
      LocalPopChoice(q_39);
    }
  else
    {
      t = c_39;
      {
        ATerm t_39 = t;
        int u_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_13, t_13, u_13, t);
            LocalPopChoice(u_39);
          }
        else
          {
            t = t_39;
            t = Option_3_0(v_13, k_14, l_14, t);
          }
      }
    }
  return(t);
}
static ATerm m_10 (ATerm j_37, ATerm k_37, ATerm t)
{
  ATerm y_90 = NULL;
  t = term_r_37;
  y_90 = t;
  t = SSL_table_put(y_90, j_37, k_37);
  t = (ATerm) ATmakeAppl(sym__3, term_r_37, j_37, k_37);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm b_91 = NULL,c_91 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_91 = NULL,e_91 = NULL,f_91 = NULL;
      t = term_e_16;
      t = e_0(t);
      d_91 = t;
      t = term_v_39;
      e_91 = t;
      t = term_w_39;
      f_91 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_39, term_w_39, d_91);
      t = k_10(e_91, f_91, d_91, t);
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
      t = c_0(t);
      t = term_e_16;
      t = d_0(t);
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
  t = term_y_39;
  m_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_39, l_91);
  t = m_10(m_91, l_91, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, l_91);
  return(t);
}
static ATerm p_14 (ATerm t)
{
  t = term_z_39;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_14, n_14, p_14, t);
  return(t);
}
static ATerm k_10 (ATerm k_42, ATerm l_42, ATerm j_42, ATerm t)
{
  ATerm o_91 = NULL,p_91 = NULL,q_91 = NULL;
  o_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_42, l_42);
  {
    ATerm c_40 = t;
    int m_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_40 = ATgetArgument(t, 0);
            ATerm x_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_42, l_42);
        t = j_10(k_42, l_42, t);
        LocalPopChoice(m_40);
      }
    else
      {
        t = c_40;
        t = (ATerm) ATempty;
      }
  }
  p_91 = t;
  t = (ATerm) ATinsert(CheckATermList(p_91), j_42);
  q_91 = t;
  t = SSL_table_put(k_42, l_42, q_91);
  t = o_91;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm x_91 = NULL,y_91 = NULL,z_91 = NULL,a_92 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_92 = NULL,c_92 = NULL,d_92 = NULL;
      t = term_e_16;
      t = n_0(t);
      b_92 = t;
      t = term_v_39;
      c_92 = t;
      t = term_w_39;
      d_92 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_39, term_w_39, b_92);
      t = k_10(c_92, d_92, b_92, t);
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
      t = k_0(t);
      t = z_91;
      t = l_0(t);
      h_92 = t;
      t = (ATerm) ATinsert(CheckATermList(a_92), h_92);
    }
  return(t);
}
static ATerm q_14 (ATerm t)
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
static ATerm r_14 (ATerm t)
{
  ATerm k_92 = NULL,l_92 = NULL;
  k_92 = t;
  t = term_y_40;
  l_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_40, k_92);
  t = m_10(l_92, k_92, t);
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
  t = ArgOption_3_0(q_14, r_14, s_14, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_92 = NULL,n_92 = NULL,o_92 = NULL,p_92 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_16;
  t = whoami_0_0(t);
  m_92 = t;
  t = term_f_16;
  o_92 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_41), m_92);
  p_92 = t;
  t = SSL_printnl(o_92, p_92);
  t = term_j_16;
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
static ATerm h_10 (ATerm o_40, ATerm p_40, ATerm t)
{
  ATerm c_41 = t;
  int d_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(o_40, p_40);
      LocalPopChoice(d_41);
    }
  else
    {
      t = c_41;
      t = SSL_addr(o_40, p_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm y_114 (ATerm), ATerm z_114 (ATerm), ATerm t)
{
  ATerm r_92 = NULL,s_92 = NULL,t_92 = NULL;
  r_92 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_92;
      t = y_114(t);
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
      t = foldr_2_0(y_114, z_114, t);
      w_92 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_92, w_92);
      t = z_114(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm u_14 (ATerm t)
{
  t = term_w_18;
  return(t);
}
static ATerm v_14 (ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL;
  if(match_cons(t, sym__2))
    {
      s_44 = ATgetArgument(t, 0);
      t_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_10(s_44, t_44, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_92 = NULL,m_43 = NULL,p_44 = NULL;
  t = times_0_0(t);
  p_44 = t;
  t = SSL_explode_term(p_44);
  if(match_cons(t, sym__2))
    {
      ATerm e_41 = ATgetArgument(t, 0);
      m_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_43;
  t = foldr_2_0(u_14, v_14, t);
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
          ATerm i_41 = t;
          int j_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_93, m_93);
              LocalPopChoice(j_41);
            }
          else
            {
              t = i_41;
              t = SSL_gtr(l_93, m_93);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, l_93, m_93);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_107 (ATerm), ATerm t)
{
  ATerm q_93 = NULL;
  q_93 = t;
  {
    ATerm k_41 = t;
    int l_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_93 = NULL;
        t = term_w_37;
        t = get_config_0_0(t);
        s_93 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_93, term_j_16);
        t = geq_0_0(t);
        t = q_93;
        t = f_107(t);
        LocalPopChoice(l_41);
      }
    else
      {
        t = k_41;
        t = q_93;
      }
  }
  return(t);
}
static ATerm x_14 (ATerm t)
{
  ATerm u_93 = NULL,v_93 = NULL,x_93 = NULL,y_93 = NULL;
  t = run_time_0_0(t);
  u_93 = t;
  t = term_e_16;
  t = whoami_0_0(t);
  v_93 = t;
  t = term_f_16;
  x_93 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_41), u_93), term_m_41), v_93);
  y_93 = t;
  t = SSL_printnl(x_93, y_93);
  t = (ATerm) ATmakeAppl(sym__2, term_f_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_41), u_93), term_m_41), v_93));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_14, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_93 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_18;
  z_93 = t;
  t = SSL_exit(z_93);
  return(t);
}
static ATerm y_14 (ATerm t)
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
            ATerm t_46 = NULL,e_8 = NULL;
            t = SSLgetAnnotations(i_94);
            t_46 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, h_94);
            e_8 = t;
            t = SSLsetAnnotations(e_8, t_46);
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
ATerm need_help_1_0 (ATerm h_125 (ATerm), ATerm t)
{
  ATerm p_41 = t;
  int q_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_41;
      t = get_config_0_0(t);
      LocalPopChoice(q_41);
    }
  else
    {
      t = p_41;
      t = fetch_1_0(y_14, t);
    }
  t = h_125(t);
  return(t);
}
ATerm map_1_0 (ATerm i_110 (ATerm), ATerm t)
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
        ATerm j_47 = NULL,o_47 = NULL,p_47 = NULL,u_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_94 = ATgetFirst((ATermList) t);
            x_94 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_94);
        j_47 = t;
        t = w_94;
        t = i_110(t);
        o_47 = t;
        t = x_94;
        t = y_94(t);
        p_47 = t;
        t = (ATerm) ATinsert(CheckATermList(p_47), o_47);
        u_10 = t;
        t = SSLsetAnnotations(u_10, j_47);
      }
    return(t);
  }
  t = y_94(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm b_95 = NULL,c_95 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_95 = ATgetFirst((ATermList) t);
      c_95 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_95 = NULL,h_95 = NULL;
        static ATerm z_14 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_95)), not_null(h_95));
          return(t);
        }
        t = c_95;
        t = i_0(t);
        if(((g_95 != NULL) && (g_95 != t)))
          _fail(t);
        else
          g_95 = t;
        t = b_95;
        t = g_0(t);
        if(((h_95 != NULL) && (h_95 != t)))
          _fail(t);
        else
          h_95 = t;
        t = c_95;
        t = reverse_acc_2_0(g_0, z_14, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_16;
      t = i_0(t);
    }
  return(t);
}
static ATerm j_10 (ATerm b_44, ATerm c_44, ATerm t)
{
  t = SSL_table_get(b_44, c_44);
  return(t);
}
static ATerm a_15 (ATerm t)
{
  ATerm l_95 = NULL,m_95 = NULL,n_95 = NULL,w_10 = NULL;
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
  w_10 = t;
  t = SSLsetAnnotations(w_10, l_95);
  return(t);
}
static ATerm b_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_15 (ATerm t)
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
      t = fetch_1_0(a_15, t);
    }
  t = term_v_41;
  t = echo_0_0(t);
  t = term_v_39;
  j_95 = t;
  t = term_w_39;
  k_95 = t;
  t = term_w_41;
  t = j_10(j_95, k_95, t);
  t = reverse_acc_2_0(_id, b_15, t);
  t = map_1_0(c_15, t);
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
                ATerm b_42 = (ATerm) ATgetNext((ATermList) t);
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
static ATerm d_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_15 (ATerm t)
{
  ATerm x_95 = NULL,y_95 = NULL;
  t = term_d_42;
  x_95 = t;
  t = term_e_16;
  y_95 = t;
  t = term_e_42;
  t = m_10(x_95, y_95, t);
  return(t);
}
static ATerm g_15 (ATerm t)
{
  t = term_f_42;
  return(t);
}
static ATerm h_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_15 (ATerm t)
{
  ATerm z_95 = NULL,a_96 = NULL,b_96 = NULL,c_96 = NULL;
  t = term_d_42;
  b_96 = t;
  t = term_e_16;
  c_96 = t;
  t = term_e_42;
  t = m_10(b_96, c_96, t);
  t = term_h_42;
  z_95 = t;
  t = term_e_16;
  a_96 = t;
  t = term_i_42;
  t = m_10(z_95, a_96, t);
  t = term_n_42;
  return(t);
}
static ATerm j_15 (ATerm t)
{
  t = term_o_42;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_42 = t;
  int q_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_15, e_15, g_15, t);
      LocalPopChoice(q_42);
    }
  else
    {
      t = p_42;
      t = Option_3_0(h_15, i_15, j_15, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_127 (ATerm), ATerm t)
{
  ATerm h_96 = NULL,i_96 = NULL,j_96 = NULL,k_96 = NULL,m_96 = NULL,n_96 = NULL,j_11 = NULL;
  h_96 = t;
  {
    ATerm r_42 = t;
    int s_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_42;
        t = k_127(t);
        LocalPopChoice(s_42);
      }
    else
      {
        t = r_42;
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
  t = m_10(n_96, j_96, t);
  t = k_96;
  {
    static ATerm x_96 (ATerm t)
    {
      ATerm u_42 = t;
      int x_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_42 = t;
          int z_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_96 = NULL;
              q_96 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = q_96;
              LocalPopChoice(z_42);
            }
          else
            {
              t = y_42;
              t = k_127(t);
              t = Cons_2_0(_id, x_96, t);
            }
          LocalPopChoice(x_42);
        }
      else
        {
          t = u_42;
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
  j_11 = t;
  t = SSLsetAnnotations(j_11, i_96);
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
  ATerm n_97 = NULL,q_97 = NULL;
  t = term_r_41;
  n_97 = t;
  t = term_e_16;
  q_97 = t;
  t = term_a_43;
  t = m_10(n_97, q_97, t);
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
ATerm parse_options_1_0 (ATerm j_127 (ATerm), ATerm t)
{
  ATerm c_97 = NULL,d_97 = NULL,e_97 = NULL,f_97 = NULL,g_97 = NULL,h_97 = NULL,i_97 = NULL;
  e_97 = t;
  t = term_v_39;
  g_97 = t;
  t = term_w_39;
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
          t = j_127(t);
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
              ATerm g_48 = NULL;
              t = x_97;
              {
                ATerm l_43 = t;
                int n_43 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_r_41;
                    t = get_config_0_0(t);
                    LocalPopChoice(n_43);
                  }
                else
                  {
                    t = l_43;
                    t = fetch_1_0(p_15, t);
                  }
              }
              t = x_97;
              t = default_system_usage_0_0(t);
              t = term_w_18;
              g_48 = t;
              t = SSL_exit(g_48);
              LocalPopChoice(k_43);
            }
          else
            {
              t = j_43;
              {
                ATerm k_48 = NULL;
                t = term_d_42;
                t = get_config_0_0(t);
                t = x_97;
                t = default_system_about_0_0(t);
                t = term_w_18;
                k_48 = t;
                t = SSL_exit(k_48);
              }
            }
        }
        LocalPopChoice(i_43);
      }
    else
      {
        t = h_43;
        {
          ATerm o_43 = t;
          int p_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_97 = NULL,z_97 = NULL,a_98 = NULL;
              static ATerm q_15 (ATerm t)
              {
                ATerm b_98 = NULL,c_98 = NULL,g_98 = NULL,q_11 = NULL;
                g_98 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    c_98 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(g_98);
                b_98 = t;
                t = c_98;
                if(((c_97 != NULL) && (c_97 != t)))
                  _fail(t);
                else
                  c_97 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, c_98);
                q_11 = t;
                t = SSLsetAnnotations(q_11, b_98);
                return(t);
              }
              t = fetch_1_0(q_15, t);
              t = term_f_16;
              z_97 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_97)), term_q_43);
              a_98 = t;
              t = SSL_printnl(z_97, a_98);
              t = (ATerm) ATmakeAppl(sym__2, term_f_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_97)), term_q_43));
              t = default_system_usage_0_0(t);
              t = term_j_16;
              y_97 = t;
              t = SSL_exit(y_97);
              LocalPopChoice(p_43);
            }
          else
            {
              t = o_43;
            }
        }
      }
  }
  d_97 = t;
  t = term_v_39;
  f_97 = t;
  t = SSL_table_destroy(f_97);
  t = d_97;
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_125 (ATerm), ATerm k_125 (ATerm), ATerm l_125 (ATerm), ATerm m_125 (ATerm), ATerm t)
{
  ATerm l_98 = NULL,m_98 = NULL,n_98 = NULL,o_98 = NULL;
  t = parse_options_1_0(j_125, t);
  l_98 = t;
  t = term_r_43;
  o_98 = t;
  t = SSL_table_create(o_98);
  t = term_r_43;
  m_98 = t;
  t = term_s_43;
  n_98 = t;
  t = SSL_table_put(m_98, n_98, l_98);
  t = l_98;
  t = l_125(t);
  {
    ATerm t_43 = t;
    int u_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_125, t);
        LocalPopChoice(u_43);
      }
    else
      {
        t = t_43;
        {
          ATerm v_43 = t;
          int w_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_125(t);
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
static ATerm t_15 (ATerm t)
{
  t = if_verbose2_1_0(y_15, t);
  return(t);
}
static ATerm v_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_15 (ATerm t)
{
  ATerm p_98 = NULL,q_98 = NULL;
  t = term_x_43;
  p_98 = t;
  t = term_e_16;
  q_98 = t;
  t = term_y_43;
  t = m_10(p_98, q_98, t);
  t = term_z_43;
  return(t);
}
static ATerm x_15 (ATerm t)
{
  t = term_a_44;
  return(t);
}
static ATerm y_15 (ATerm t)
{
  ATerm r_98 = NULL,s_98 = NULL,t_98 = NULL,u_98 = NULL;
  r_98 = t;
  t = term_b_41;
  t = get_config_0_0(t);
  s_98 = t;
  t = term_f_16;
  t_98 = t;
  t = (ATerm) ATinsert(ATempty, s_98);
  u_98 = t;
  t = SSL_printnl(t_98, u_98);
  t = r_98;
  return(t);
}
ATerm iowrap_3_0 (ATerm s_124 (ATerm), ATerm t_124 (ATerm), ATerm u_124 (ATerm), ATerm t)
{
  static ATerm s_15 (ATerm t)
  {
    ATerm d_44 = t;
    int e_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_124(t);
        LocalPopChoice(e_44);
      }
    else
      {
        t = d_44;
        {
          ATerm f_44 = t;
          int g_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(g_44);
            }
          else
            {
              t = f_44;
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
                          t = Option_3_0(v_15, w_15, x_15, t);
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
  static ATerm u_15 (ATerm t)
  {
    ATerm v_98 = NULL,w_98 = NULL,x_98 = NULL;
    w_98 = t;
    {
      ATerm n_44 = t;
      int o_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm z_15 (ATerm t)
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
          t = fetch_1_0(z_15, t);
          LocalPopChoice(o_44);
        }
      else
        {
          t = n_44;
          t = term_q_44;
          v_98 = t;
        }
    }
    t = not_null(v_98);
    t = ReadFromFile_0_0(t);
    x_98 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_98, x_98);
    t = apply_strategy_1_0(s_124, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(s_15, u_124, t_15, u_15, t);
  return(t);
}
static ATerm a_16 (ATerm t)
{
  ATerm y_98 = NULL,z_98 = NULL,a_99 = NULL,b_99 = NULL,c_99 = NULL,d_99 = NULL,e_99 = NULL,f_99 = NULL,g_99 = NULL,h_99 = NULL,i_99 = NULL,l_99 = NULL,m_99 = NULL,n_99 = NULL,v_11 = NULL,u_11 = NULL,t_11 = NULL;
  n_99 = t;
  if(match_cons(t, sym__2))
    {
      z_98 = ATgetArgument(t, 0);
      a_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_99);
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
  t = Cons_2_0(b_16, d_16, t);
  l_99 = t;
  t = (ATerm) ATinsert(CheckATermList(l_99), h_99);
  t_11 = t;
  t = SSLsetAnnotations(t_11, g_99);
  m_99 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, m_99);
  u_11 = t;
  t = SSLsetAnnotations(u_11, e_99);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm r_44 = ATgetArgument(t, 0);
      if(((ATgetType(r_44) == AT_LIST) && !(ATisEmpty(r_44))))
        {
          c_99 = ATgetFirst((ATermList) r_44);
          {
            ATerm u_44 = (ATerm) ATgetNext((ATermList) r_44);
            if(((ATgetType(u_44) == AT_LIST) && !(ATisEmpty(u_44))))
              {
                ATerm v_44 = ATgetFirst((ATermList) u_44);
                if(match_cons(v_44, sym_Strategies_1))
                  {
                    d_99 = ATgetArgument(v_44, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm w_44 = (ATerm) ATgetNext((ATermList) u_44);
                  if(((ATgetType(w_44) != AT_LIST) || !(ATisEmpty(w_44))))
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
  t = i_8(c_99, d_99, t);
  b_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_98, b_99);
  v_11 = t;
  t = SSLsetAnnotations(v_11, y_98);
  return(t);
}
static ATerm b_16 (ATerm t)
{
  ATerm o_99 = NULL,p_99 = NULL,q_99 = NULL,r_99 = NULL,s_11 = NULL;
  r_99 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      p_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_99);
  o_99 = t;
  t = p_99;
  t = needed_defs_0_0(t);
  q_99 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, q_99);
  s_11 = t;
  t = SSLsetAnnotations(s_11, o_99);
  return(t);
}
static ATerm d_16 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(a_16, _fail, default_usage_0_0, t);
  return(t);
}
