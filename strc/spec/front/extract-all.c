#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Sort_2;
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
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
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
Symbol sym_Anno_2;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
static void init_module_constructors (void)
{
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
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
}
ATerm term_e_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_e_39;
ATerm term_p_38;
ATerm term_o_38;
ATerm term_n_38;
ATerm term_u_37;
ATerm term_h_37;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_r_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_m_34;
ATerm term_j_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_w_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_o_33;
ATerm term_l_33;
ATerm term_v_32;
ATerm term_p_32;
ATerm term_n_32;
ATerm term_k_32;
ATerm term_h_32;
ATerm term_q_31;
ATerm term_o_31;
ATerm term_l_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_e_25;
ATerm term_c_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_u_21;
ATerm term_k_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_c_16;
ATerm term_i_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_d_13;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_Sort_2, term_e_25, (ATerm) ATempty);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_ConstType_1, term_h_25);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("overloading external definition: ", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym__2, term_e_34, term_a_19);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_19);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym__2, term_m_34, term_u_25);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym__2, term_b_35, term_c_35);
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(sym__2, term_a_37, term_u_25);
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(sym__2, term_d_37, term_u_25);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(sym__2, term_d_36, term_u_25);
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(sym__2, term_v_32, term_u_25);
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm d_8 (ATerm v_23, ATerm x_23, ATerm y_23, ATerm t);
static ATerm a_0 (ATerm t);
ATerm DefinitionExists_0_0 (ATerm t);
ATerm sboundin_3_0 (ATerm a_93 (ATerm), ATerm b_93 (ATerm), ATerm c_93 (ATerm), ATerm t);
static ATerm q_0 (ATerm t);
static ATerm k_8 (ATerm y_33, ATerm x_33, ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm i_1 (ATerm t);
ATerm free_vars2_4_0 (ATerm h_110 (ATerm), ATerm i_110 (ATerm), ATerm j_110 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm k_110 (ATerm), ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
ATerm svars_arity_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm b_92 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm q_8 (ATerm v_31, ATerm w_31, ATerm x_31, ATerm t);
static ATerm q_39 (ATerm b_39, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm q_99 (ATerm), ATerm r_99 (ATerm), ATerm t);
static ATerm p_4 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm z_94 (ATerm), ATerm t);
static ATerm u_8 (ATerm i_27, ATerm j_27, ATerm k_27, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm v_93 (ATerm), ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm tuple_unzip_1_0 (ATerm x_97 (ATerm), ATerm t);
ATerm MkDistApplication_0_0 (ATerm t);
static ATerm v_8 (ATerm g_48, ATerm h_48, ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm copy_1_0 (ATerm n_115 (ATerm), ATerm t);
static ATerm w_8 (ATerm r_22, ATerm s_22, ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm c_56 (ATerm j_53, ATerm k_53, ATerm l_53, ATerm m_53, ATerm t);
static ATerm d_56 (ATerm u_54, ATerm v_54, ATerm w_54, ATerm x_54, ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm DefineCongruence_0_0 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm choices_0_0 (ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm n_95 (ATerm), ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm e_93 (ATerm), ATerm f_93 (ATerm), ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm JoinDefs2_0_0 (ATerm t);
ATerm giving_up_0_0 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm JoinDefsExt_0_0 (ATerm t);
static ATerm x_58 (ATerm p_56, ATerm q_56, ATerm r_56, ATerm s_56, ATerm t);
ATerm get_definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm e_106 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm r_61 (ATerm g_61, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm c_9 (ATerm k_112 (ATerm), ATerm p_58, ATerm o_58, ATerm t);
ATerm genzip_4_0 (ATerm h_98 (ATerm), ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm t);
static ATerm w_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm h_9 (ATerm s_679, ATerm x_679, ATerm d_69, ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm v_66 (ATerm t_64, ATerm u_64, ATerm z_64, ATerm t);
static ATerm q_7 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm j_9 (ATerm y_124 (ATerm), ATerm z_124 (ATerm), ATerm a_125 (ATerm), ATerm e_70, ATerm b_70, ATerm j_70, ATerm f_70, ATerm c_70, ATerm d_70, ATerm t);
ATerm GnNextChangeGraph_3_0 (ATerm y_124 (ATerm), ATerm z_124 (ATerm), ATerm a_125 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm h_100 (ATerm), ATerm i_100 (ATerm), ATerm t);
ATerm for_3_0 (ATerm k_100 (ATerm), ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm z_25 (ATerm f_25, ATerm g_25, ATerm t);
ATerm extract_needed_defs_0_0 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
ATerm RegisterExtSDefInl_0_0 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm h_10 (ATerm t);
ATerm RegisterExtSDef_0_0 (ATerm t);
static ATerm m_9 (ATerm h_125 (ATerm), ATerm c_71, ATerm a_71, ATerm t);
ATerm Arities_0_0 (ATerm t);
static ATerm o_9 (ATerm m_66, ATerm n_66, ATerm t);
ATerm Definitions_0_0 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm v_10 (ATerm t);
ATerm RegisterSDefT_0_0 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
ATerm DefinitionName_0_0 (ATerm t);
static ATerm p_9 (ATerm s_112 (ATerm), ATerm t_112 (ATerm), ATerm v_58, ATerm u_58, ATerm t);
static ATerm q_9 (ATerm p_112 (ATerm), ATerm r_58, ATerm q_58, ATerm t);
ATerm foldr_3_0 (ATerm z_114 (ATerm), ATerm a_115 (ATerm), ATerm b_115 (ATerm), ATerm t);
static ATerm u_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm a_12 (ATerm t);
ATerm all_defs_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm q_79 (ATerm), ATerm r_79 (ATerm), ATerm t);
static ATerm r_9 (ATerm l_41, ATerm m_41, ATerm t);
static ATerm s_9 (ATerm g_40, ATerm h_40, ATerm t);
static ATerm u_9 (ATerm f_101 (ATerm), ATerm i_275, ATerm k_40, ATerm t);
static ATerm t_9 (ATerm c_40, ATerm d_40, ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
ATerm output_1_0 (ATerm w_120 (ATerm), ATerm t);
static ATerm j_80 (ATerm d_80, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm v_9 (ATerm i_40, ATerm t);
static ATerm w_9 (ATerm n_41, ATerm o_41, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm u_81 (ATerm t_80, ATerm t);
static ATerm v_81 (ATerm x_80, ATerm y_80, ATerm z_80, ATerm t);
static ATerm w_81 (ATerm h_81, ATerm i_81, ATerm j_81, ATerm t);
static ATerm x_9 (ATerm t);
static ATerm d_12 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm x_120 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm v_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm y_12 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm f_10 (ATerm d_45, ATerm e_45, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm b_13 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm d_10 (ATerm b_66, ATerm c_66, ATerm a_66, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm c_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm y_9 (ATerm a_48, ATerm b_48, ATerm t);
ATerm foldr_2_0 (ATerm x_114 (ATerm), ATerm y_114 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm v_102 (ATerm), ATerm t);
static ATerm j_13 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm k_13 (ATerm t);
ATerm need_help_1_0 (ATerm n_120 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm m_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm p_13 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm y_105 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm b_10 (ATerm g_58, ATerm h_58, ATerm t);
ATerm debug_1_0 (ATerm d_101 (ATerm), ATerm t);
ATerm map_1_0 (ATerm o_105 (ATerm), ATerm t);
static ATerm v_13 (ATerm t);
static ATerm w_13 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm c_10 (ATerm s_67, ATerm t_67, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm x_13 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm c_14 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm j_14 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm q_122 (ATerm), ATerm t);
static ATerm n_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
ATerm parse_options_1_0 (ATerm p_122 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm p_120 (ATerm), ATerm q_120 (ATerm), ATerm r_120 (ATerm), ATerm s_120 (ATerm), ATerm t);
static ATerm t_14 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm x_14 (ATerm t);
static ATerm y_14 (ATerm t);
static ATerm z_14 (ATerm t);
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
static ATerm d_8 (ATerm v_23, ATerm x_23, ATerm y_23, ATerm t)
{
  ATerm p_0 = NULL,r_0 = NULL;
  t = term_d_13;
  p_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_15), y_23), term_g_15), x_23), term_f_15), v_23), term_d_15);
  r_0 = t;
  t = SSL_printnl(p_0, r_0);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_15), y_23), term_g_15), x_23), term_f_15), v_23), term_d_15);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_15 = ATgetArgument(t, 0);
      if(((ATgetType(j_15) != AT_INT) || (ATgetInt((ATermInt) j_15) != 0)))
        _fail(t);
      {
        ATerm k_15 = ATgetArgument(t, 1);
        if(((ATgetType(k_15) != AT_INT) || (ATgetInt((ATermInt) k_15) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm t_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL,x_1 = NULL;
  t_1 = t;
  if(match_cons(t, sym__2))
    {
      u_1 = ATgetArgument(t, 0);
      v_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_1;
  if(match_cons(t, sym__2))
    {
      w_1 = ATgetArgument(t, 0);
      x_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_1;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = x_1;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm l_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_0 = NULL,u_0 = NULL;
        t = u_1;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_15 = ATgetFirst((ATermList) t);
            ATerm y_15 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(y_15) == AT_LIST) && !(ATisEmpty(y_15))))
              {
                ATerm z_15 = ATgetFirst((ATermList) y_15);
                ATerm a_16 = (ATerm) ATgetNext((ATermList) y_15);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm b_16 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(a_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = b_16;
            }
        }
        t = term_d_13;
        t_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, u_1), term_c_16);
        u_0 = t;
        t = SSL_printnl(t_0, u_0);
        t = (ATerm) ATinsert(ATinsert(ATempty, u_1), term_c_16);
        t = giving_up_0_0(t);
        LocalPopChoice(u_15);
      }
    else
      {
        t = l_15;
        {
          ATerm a_1 = NULL,b_1 = NULL;
          t = u_1;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm d_16 = ATgetFirst((ATermList) t);
              if(match_cons(d_16, sym__2))
                {
                  a_1 = ATgetArgument(d_16, 0);
                  b_1 = ATgetArgument(d_16, 1);
                }
              else
                _fail(t);
              {
                ATerm f_16 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(f_16) != AT_LIST) || !(ATisEmpty(f_16))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, u_1, (ATerm) ATmakeAppl(sym__2, a_1, b_1));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, u_1, (ATerm) ATmakeAppl(sym__2, a_1, b_1));
        }
      }
  }
  return(t);
}
ATerm sboundin_3_0 (ATerm a_93 (ATerm), ATerm b_93 (ATerm), ATerm c_93 (ATerm), ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL;
  i_4 = t;
  if(match_cons(t, sym_Let_2))
    {
      j_4 = ATgetArgument(t, 0);
      k_4 = ATgetArgument(t, 1);
      {
        ATerm r_1 = NULL,b_2 = NULL,c_2 = NULL,d_1 = NULL;
        t = SSLgetAnnotations(i_4);
        r_1 = t;
        t = j_4;
        t = a_93(t);
        b_2 = t;
        t = k_4;
        t = a_93(t);
        c_2 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, b_2, c_2);
        d_1 = t;
        t = SSLsetAnnotations(d_1, r_1);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          j_4 = ATgetArgument(t, 0);
          k_4 = ATgetArgument(t, 1);
          g_4 = ATgetArgument(t, 2);
          {
            ATerm x_3 = NULL,q_4 = NULL,s_4 = NULL,y_4 = NULL,f_1 = NULL;
            t = SSLgetAnnotations(i_4);
            x_3 = t;
            t = j_4;
            t = c_93(t);
            q_4 = t;
            t = k_4;
            t = c_93(t);
            s_4 = t;
            t = g_4;
            t = a_93(t);
            y_4 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, q_4, s_4, y_4);
            f_1 = t;
            t = SSLsetAnnotations(f_1, x_3);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              j_4 = ATgetArgument(t, 0);
              k_4 = ATgetArgument(t, 1);
              g_4 = ATgetArgument(t, 2);
              h_4 = ATgetArgument(t, 3);
              {
                ATerm n_5 = NULL,v_5 = NULL,y_5 = NULL,a_6 = NULL,e_6 = NULL,g_1 = NULL;
                t = SSLgetAnnotations(i_4);
                n_5 = t;
                t = j_4;
                t = c_93(t);
                v_5 = t;
                t = k_4;
                t = c_93(t);
                y_5 = t;
                t = g_4;
                t = c_93(t);
                a_6 = t;
                t = h_4;
                t = a_93(t);
                e_6 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, v_5, y_5, a_6, e_6);
                g_1 = t;
                t = SSLsetAnnotations(g_1, n_5);
              }
            }
          else
            {
              ATerm y_6 = NULL,d_7 = NULL,g_7 = NULL,h_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  j_4 = ATgetArgument(t, 0);
                  k_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(i_4);
              y_6 = t;
              t = j_4;
              t = c_93(t);
              d_7 = t;
              t = k_4;
              t = a_93(t);
              g_7 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, d_7, g_7);
              h_1 = t;
              t = SSLsetAnnotations(h_1, y_6);
            }
        }
    }
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm u_4 = NULL;
  ATerm p_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          u_4 = ATgetArgument(t, 0);
          {
            ATerm z_17 = ATgetArgument(t, 1);
          }
          {
            ATerm a_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_17);
      t = u_4;
    }
  else
    {
      t = p_17;
      if(match_cons(t, sym_SDefT_4))
        {
          u_4 = ATgetArgument(t, 0);
          {
            ATerm b_18 = ATgetArgument(t, 1);
          }
          {
            ATerm c_18 = ATgetArgument(t, 2);
          }
          {
            ATerm g_18 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = u_4;
    }
  return(t);
}
static ATerm k_8 (ATerm y_33, ATerm x_33, ATerm t)
{
  t = y_33;
  t = map_1_0(q_0, t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL;
  if(match_cons(t, sym__2))
    {
      f_8 = ATgetArgument(t, 0);
      g_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_9(y_0, f_8, g_8, t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm s_8 = NULL;
  if(match_cons(t, sym__2))
    {
      s_8 = ATgetArgument(t, 0);
      if((s_8 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL;
  if(match_cons(t, sym__2))
    {
      f_9 = ATgetArgument(t, 0);
      g_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_9(e_1, f_9, g_9, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm k_9 = NULL;
  if(match_cons(t, sym__2))
    {
      k_9 = ATgetArgument(t, 0);
      if((k_9 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm o_6 = NULL;
  if(match_cons(t, sym__2))
    {
      o_6 = ATgetArgument(t, 0);
      if((o_6 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm h_110 (ATerm), ATerm i_110 (ATerm), ATerm j_110 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm k_110 (ATerm), ATerm t)
{
  static ATerm r_6 (ATerm t)
  {
    ATerm w_5 = NULL,x_5 = NULL,z_5 = NULL;
    z_5 = t;
    {
      ATerm h_18 = t;
      int i_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_110(t);
          LocalPopChoice(i_18);
        }
      else
        {
          t = h_18;
          t = (ATerm) ATempty;
        }
    }
    w_5 = t;
    t = z_5;
    {
      ATerm j_18 = t;
      int k_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_6 = NULL,z_7 = NULL,a_8 = NULL;
          t = i_110(t);
          b_6 = t;
          t = z_5;
          {
            static ATerm s_0 (ATerm t)
            {
              ATerm t_7 = NULL;
              t = r_6(t);
              t_7 = t;
              t = (ATerm) ATmakeAppl(sym__2, t_7, b_6);
              t = c_9(k_110, t_7, b_6, t);
              return(t);
            }
            t = j_110(s_0, r_6, v_0, t);
          }
          a_8 = t;
          t = SSL_explode_term(a_8);
          if(match_cons(t, sym__2))
            {
              ATerm m_18 = ATgetArgument(t, 0);
              z_7 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_7;
          t = foldr_3_0(w_0, x_0, _id, t);
          LocalPopChoice(k_18);
        }
      else
        {
          t = j_18;
          {
            ATerm x_8 = NULL;
            t = SSL_explode_term(z_5);
            if(match_cons(t, sym__2))
              {
                ATerm o_18 = ATgetArgument(t, 0);
                x_8 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = x_8;
            t = foldr_3_0(z_0, c_1, r_6, t);
          }
        }
    }
    x_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_5, x_5);
    t = q_9(i_1, w_5, x_5, t);
    return(t);
  }
  t = r_6(t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm x_6 = NULL,b_7 = NULL,c_7 = NULL,e_7 = NULL,f_7 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm p_18 = ATgetArgument(t, 0);
      if(match_cons(p_18, sym_SVar_1))
        {
          x_6 = ATgetArgument(p_18, 0);
        }
      else
        _fail(t);
      b_7 = ATgetArgument(t, 1);
      c_7 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_7;
  t = foldr_3_0(m_1, n_1, q_1, t);
  e_7 = t;
  t = c_7;
  t = foldr_3_0(s_1, a_2, d_2, t);
  f_7 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, x_6, (ATerm) ATmakeAppl(sym__2, e_7, f_7)));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm n_7 = NULL,o_7 = NULL,r_7 = NULL,s_7 = NULL,x_7 = NULL;
  n_7 = t;
  if(match_cons(t, sym_Let_2))
    {
      o_7 = ATgetArgument(t, 0);
      r_7 = ATgetArgument(t, 1);
      t = n_7;
      t = k_8(o_7, r_7, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          o_7 = ATgetArgument(t, 0);
          r_7 = ATgetArgument(t, 1);
          s_7 = ATgetArgument(t, 2);
          t = r_7;
          t = map_1_0(e_2, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              o_7 = ATgetArgument(t, 0);
              r_7 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, o_7);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  o_7 = ATgetArgument(t, 0);
                  r_7 = ATgetArgument(t, 1);
                  s_7 = ATgetArgument(t, 2);
                  x_7 = ATgetArgument(t, 3);
                  t = r_7;
                  t = map_1_0(h_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      o_7 = ATgetArgument(t, 0);
                      r_7 = ATgetArgument(t, 1);
                      s_7 = ATgetArgument(t, 2);
                      x_7 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_7;
                  t = map_1_0(i_2, t);
                }
            }
        }
    }
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm o_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_18 = ATgetArgument(t, 0);
      if(match_cons(q_18, sym__2))
        {
          o_11 = ATgetArgument(q_18, 0);
          {
            ATerm r_18 = ATgetArgument(q_18, 1);
          }
        }
      else
        _fail(t);
      if((o_11 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_a_19;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm h_7 = NULL,i_7 = NULL;
  if(match_cons(t, sym__2))
    {
      h_7 = ATgetArgument(t, 0);
      i_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9(h_7, i_7, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_b_19;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_a_19;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm j_7 = NULL,k_7 = NULL;
  if(match_cons(t, sym__2))
    {
      j_7 = ATgetArgument(t, 0);
      k_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9(j_7, k_7, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_b_19;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm p_8 = NULL;
  ATerm c_19 = t;
  int i_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_8 = ATgetArgument(t, 0);
          {
            ATerm j_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_19);
      t = p_8;
    }
  else
    {
      t = c_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_8;
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm m_10 = NULL;
  ATerm w_19 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_10 = ATgetArgument(t, 0);
          {
            ATerm s_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_20);
      t = m_10;
    }
  else
    {
      t = w_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_10;
    }
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm j_11 = NULL;
  ATerm z_20 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_11 = ATgetArgument(t, 0);
          {
            ATerm e_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_21);
      t = j_11;
    }
  else
    {
      t = z_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_11;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(j_1, k_1, sboundin_3_0, l_1, t);
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm e_19 = NULL,g_19 = NULL,h_19 = NULL;
  g_19 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      h_19 = ATgetArgument(t, 0);
      e_19 = ATgetArgument(t, 1);
      {
        ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL,s_19 = NULL;
        t = g_19;
        t = new_0_0(t);
        k_19 = t;
        t = new_0_0(t);
        l_19 = t;
        t = new_0_0(t);
        m_19 = t;
        t = new_0_0(t);
        s_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_19), m_19), l_19), k_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, k_19), (ATerm) ATmakeAppl(sym_Var_1, m_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, h_19, (ATerm)ATmakeAppl(sym_Var_1, k_19), (ATerm) ATmakeAppl(sym_Var_1, l_19)), (ATerm) ATmakeAppl(sym_BAM_3, e_19, (ATerm)ATmakeAppl(sym_Var_1, m_19), (ATerm) ATmakeAppl(sym_Var_1, s_19)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_f_21, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, s_19)), (ATerm) ATmakeAppl(sym_Var_1, l_19))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          h_19 = ATgetArgument(t, 0);
          {
            ATerm t_19 = NULL,u_19 = NULL,x_19 = NULL,a_20 = NULL;
            t = g_19;
            t = new_0_0(t);
            x_19 = t;
            t = h_19;
            {
              static ATerm j_2 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((t_19 != NULL) && (t_19 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      t_19 = ATgetArgument(t, 0);
                    if(((u_19 != NULL) && (u_19 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      u_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, x_19);
                return(t);
              }
              t = oncetd_1_0(j_2, t);
            }
            a_20 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_f_21, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_19)), not_null(t_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, x_19)), (ATerm) ATmakeAppl(sym_Build_1, a_20))));
          }
        }
      else
        {
          ATerm d_20 = NULL,g_20 = NULL,h_20 = NULL,j_20 = NULL,k_20 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              h_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_19;
          t = new_0_0(t);
          h_20 = t;
          t = new_0_0(t);
          j_20 = t;
          t = h_19;
          {
            static ATerm k_2 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((d_20 != NULL) && (d_20 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    d_20 = ATgetArgument(t, 0);
                  if(((g_20 != NULL) && (g_20 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    g_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, h_20);
              return(t);
            }
            t = oncetd_1_0(k_2, t);
          }
          k_20 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_20)), (ATerm) ATmakeAppl(sym_PrimT_3, term_g_21, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, j_20))))), (ATerm)ATmakeAppl(sym_Var_1, h_20), (ATerm) ATmakeAppl(sym_Op_2, term_h_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_20)), not_null(d_20)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL;
  q_20 = t;
  if(match_cons(t, sym_Match_1))
    {
      r_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL;
        t = q_20;
        t = new_0_0(t);
        v_20 = t;
        t = r_20;
        {
          static ATerm l_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((t_20 != NULL) && (t_20 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  t_20 = ATgetArgument(t, 0);
                if(((u_20 != NULL) && (u_20 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  u_20 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, v_20), t_20);
            return(t);
          }
          t = pat_td_1_0(l_2, t);
        }
        w_20 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, w_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_k_21, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_20))), (ATerm) ATmakeAppl(sym_Match_1, not_null(u_20))))));
        LocalPopChoice(j_21);
      }
    else
      {
        t = i_21;
        {
          ATerm l_21 = t;
          int n_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL;
              t = q_20;
              t = new_0_0(t);
              b_21 = t;
              t = r_20;
              {
                static ATerm m_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((a_21 != NULL) && (a_21 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        a_21 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, b_21);
                  return(t);
                }
                t = pat_td_1_0(m_2, t);
              }
              c_21 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, b_21)), not_null(a_21))));
              LocalPopChoice(n_21);
            }
          else
            {
              t = l_21;
              {
                ATerm x_21 = NULL,l_22 = NULL,m_22 = NULL,c_23 = NULL;
                t = q_20;
                t = new_0_0(t);
                m_22 = t;
                t = r_20;
                {
                  static ATerm n_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((l_22 != NULL) && (l_22 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          l_22 = ATgetArgument(t, 0);
                        if(((x_21 != NULL) && (x_21 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          x_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, m_22);
                    return(t);
                  }
                  t = pat_td_1_0(n_2, t);
                }
                c_23 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, m_22)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_21)), not_null(l_22)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm b_92 (ATerm), ATerm t)
{
  ATerm o_21 = t;
  int p_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_92(t);
      LocalPopChoice(p_21);
    }
  else
    {
      t = o_21;
      {
        ATerm r_30 = NULL,a_31 = NULL,q_32 = NULL,a_33 = NULL;
        a_31 = t;
        if(match_cons(t, sym_Op_2))
          {
            q_32 = ATgetArgument(t, 0);
            a_33 = ATgetArgument(t, 1);
            {
              ATerm u_10 = NULL,x_10 = NULL,o_1 = NULL;
              t = SSLgetAnnotations(a_31);
              u_10 = t;
              t = a_33;
              {
                static ATerm o_2 (ATerm t)
                {
                  t = pat_td_1_0(b_92, t);
                  return(t);
                }
                t = fetch_1_0(o_2, t);
              }
              x_10 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, q_32, x_10);
              o_1 = t;
              t = SSLsetAnnotations(o_1, u_10);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                q_32 = ATgetArgument(t, 0);
                a_33 = ATgetArgument(t, 1);
                {
                  ATerm q_21 = t;
                  int r_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_11 = NULL,v_11 = NULL,p_1 = NULL;
                      t = SSLgetAnnotations(a_31);
                      r_11 = t;
                      t = a_33;
                      t = pat_td_1_0(b_92, t);
                      v_11 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, q_32, v_11);
                      p_1 = t;
                      t = SSLsetAnnotations(p_1, r_11);
                      LocalPopChoice(r_21);
                    }
                  else
                    {
                      t = q_21;
                      {
                        ATerm f_12 = NULL,i_12 = NULL,y_1 = NULL;
                        t = SSLgetAnnotations(a_31);
                        f_12 = t;
                        t = q_32;
                        t = pat_td_1_0(b_92, t);
                        i_12 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, i_12, a_33);
                        y_1 = t;
                        t = SSLsetAnnotations(y_1, f_12);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    q_32 = ATgetArgument(t, 0);
                    a_33 = ATgetArgument(t, 1);
                    r_30 = ATgetArgument(t, 2);
                    {
                      ATerm i_13 = NULL,u_13 = NULL,z_1 = NULL;
                      t = SSLgetAnnotations(a_31);
                      i_13 = t;
                      t = r_30;
                      {
                        static ATerm r_2 (ATerm t)
                        {
                          t = pat_td_1_0(b_92, t);
                          return(t);
                        }
                        t = fetch_1_0(r_2, t);
                      }
                      u_13 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, q_32, a_33, u_13);
                      z_1 = t;
                      t = SSLsetAnnotations(z_1, i_13);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        q_32 = ATgetArgument(t, 0);
                        a_33 = ATgetArgument(t, 1);
                        r_30 = ATgetArgument(t, 2);
                        {
                          ATerm r_14 = NULL,v_14 = NULL,f_2 = NULL;
                          t = SSLgetAnnotations(a_31);
                          r_14 = t;
                          t = r_30;
                          {
                            static ATerm s_2 (ATerm t)
                            {
                              t = pat_td_1_0(b_92, t);
                              return(t);
                            }
                            t = fetch_1_0(s_2, t);
                          }
                          v_14 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, q_32, a_33, v_14);
                          f_2 = t;
                          t = SSLsetAnnotations(f_2, r_14);
                        }
                      }
                    else
                      {
                        ATerm e_15 = NULL,h_15 = NULL,g_2 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            q_32 = ATgetArgument(t, 0);
                            a_33 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(a_31);
                        e_15 = t;
                        t = a_33;
                        t = pat_td_1_0(b_92, t);
                        h_15 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, q_32, h_15);
                        g_2 = t;
                        t = SSLsetAnnotations(g_2, e_15);
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
  ATerm t_33 = NULL,u_33 = NULL;
  t_33 = t;
  if(match_cons(t, sym_Build_1))
    {
      u_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_21 = t;
    int t_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_33 = NULL,d_34 = NULL,i_34 = NULL,k_34 = NULL;
        t = t_33;
        t = new_0_0(t);
        i_34 = t;
        t = u_33;
        {
          static ATerm u_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((z_33 != NULL) && (z_33 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  z_33 = ATgetArgument(t, 0);
                if(((d_34 != NULL) && (d_34 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  d_34 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, i_34);
            return(t);
          }
          t = pat_td_1_0(u_2, t);
        }
        k_34 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_34), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_u_21, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_34)), not_null(z_33))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, i_34)))), (ATerm) ATmakeAppl(sym_Build_1, k_34)));
        LocalPopChoice(t_21);
      }
    else
      {
        t = s_21;
        {
          ATerm v_21 = t;
          int w_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_34 = NULL,n_34 = NULL,r_34 = NULL;
              t = t_33;
              t = new_0_0(t);
              n_34 = t;
              t = u_33;
              {
                static ATerm z_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((l_34 != NULL) && (l_34 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        l_34 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, n_34);
                  return(t);
                }
                t = pat_td_1_0(z_2, t);
              }
              r_34 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_34), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_34), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_34)))), (ATerm) ATmakeAppl(sym_Build_1, r_34)));
              LocalPopChoice(w_21);
            }
          else
            {
              t = v_21;
              {
                ATerm s_34 = NULL,t_34 = NULL,v_34 = NULL,z_34 = NULL;
                t = t_33;
                t = new_0_0(t);
                v_34 = t;
                t = u_33;
                {
                  static ATerm a_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((s_34 != NULL) && (s_34 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          s_34 = ATgetArgument(t, 0);
                        if(((t_34 != NULL) && (t_34 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          t_34 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, v_34);
                    return(t);
                  }
                  t = pat_td_1_0(a_3, t);
                }
                z_34 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_34), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(s_34), not_null(t_34), (ATerm) ATmakeAppl(sym_Var_1, v_34))), (ATerm) ATmakeAppl(sym_Build_1, z_34)));
              }
            }
        }
      }
  }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm l_35 = NULL,p_35 = NULL,r_35 = NULL,x_35 = NULL,y_35 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      x_35 = ATgetArgument(t, 0);
      y_35 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, x_35, y_35);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          x_35 = ATgetArgument(t, 0);
          t = x_35;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_35 = ATgetFirst((ATermList) t);
              p_35 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, l_35, (ATerm) ATmakeAppl(sym_LChoices_1, p_35));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_y_21;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              x_35 = ATgetArgument(t, 0);
              t = x_35;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_35 = ATgetFirst((ATermList) t);
                  p_35 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, l_35, (ATerm) ATmakeAppl(sym_Choices_1, p_35));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_y_21;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  x_35 = ATgetArgument(t, 0);
                  t = x_35;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      l_35 = ATgetFirst((ATermList) t);
                      p_35 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_35, (ATerm) ATmakeAppl(sym_Seqs_1, p_35));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_z_21;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      x_35 = ATgetArgument(t, 0);
                      y_35 = ATgetArgument(t, 1);
                      r_35 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, y_35, (ATerm) ATmakeAppl(sym_Op_2, term_h_21, (ATerm) ATinsert(ATinsert(ATempty, r_35), x_35)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          x_35 = ATgetArgument(t, 0);
                          y_35 = ATgetArgument(t, 1);
                          r_35 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, r_35)), x_35), (ATerm) ATmakeAppl(sym_Build_1, y_35)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              x_35 = ATgetArgument(t, 0);
                              y_35 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_35, (ATerm) ATmakeAppl(sym_Match_1, y_35));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  x_35 = ATgetArgument(t, 0);
                                  y_35 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, x_35), y_35);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      x_35 = ATgetArgument(t, 0);
                                      y_35 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, y_35), x_35);
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
static ATerm b_3 (ATerm t)
{
  ATerm b_22 = t;
  if((PushChoice() == 0))
    {
      ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL,p_2 = NULL;
      x_37 = t;
      if(match_cons(t, sym_Var_1))
        {
          w_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_37);
      v_37 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, w_37);
      p_2 = t;
      t = SSLsetAnnotations(p_2, v_37);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_22;
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_22;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm y_37 = NULL,d_38 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_37 = ATgetFirst((ATermList) t);
      d_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_37, d_38);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_22 = ATgetArgument(t, 0);
      if(match_cons(d_22, sym__2))
        {
          e_38 = ATgetArgument(d_22, 0);
          f_38 = ATgetArgument(d_22, 1);
        }
      else
        _fail(t);
      {
        ATerm e_22 = ATgetArgument(t, 1);
        if(match_cons(e_22, sym__2))
          {
            g_38 = ATgetArgument(e_22, 0);
            h_38 = ATgetArgument(e_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_38), e_38), (ATerm) ATinsert(CheckATermList(h_38), f_38));
  return(t);
}
static ATerm g_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_22;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_38 = ATgetFirst((ATermList) t);
      j_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_38, j_38);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL,r_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_22 = ATgetArgument(t, 0);
      if(match_cons(f_22, sym__2))
        {
          k_38 = ATgetArgument(f_22, 0);
          l_38 = ATgetArgument(f_22, 1);
        }
      else
        _fail(t);
      {
        ATerm g_22 = ATgetArgument(t, 1);
        if(match_cons(g_22, sym__2))
          {
            m_38 = ATgetArgument(g_22, 0);
            r_38 = ATgetArgument(g_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_38), k_38), (ATerm) ATinsert(CheckATermList(r_38), l_38));
  return(t);
}
static ATerm q_8 (ATerm v_31, ATerm w_31, ATerm x_31, ATerm t)
{
  ATerm g_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL,q_37 = NULL,s_37 = NULL,q_2 = NULL;
  t = x_31;
  t = fetch_1_0(b_3, t);
  t = x_31;
  t = genzip_4_0(c_3, d_3, f_3, LiftPrimArg_0_0, t);
  s_37 = t;
  if(match_cons(t, sym__2))
    {
      l_37 = ATgetArgument(t, 0);
      m_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_37);
  k_37 = t;
  t = l_37;
  t = concat_0_0(t);
  n_37 = t;
  t = m_37;
  t = genzip_4_0(g_3, j_3, k_3, _id, t);
  q_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_37, q_37);
  q_2 = t;
  t = SSLsetAnnotations(q_2, k_37);
  if(match_cons(t, sym__2))
    {
      g_37 = ATgetArgument(t, 0);
      {
        ATerm h_22 = ATgetArgument(t, 1);
        if(match_cons(h_22, sym__2))
          {
            i_37 = ATgetArgument(h_22, 0);
            j_37 = ATgetArgument(h_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, g_37, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, i_37), (ATerm) ATmakeAppl(sym_CallT_3, v_31, w_31, j_37)));
  return(t);
}
static ATerm q_39 (ATerm b_39, ATerm t)
{
  ATerm f_39 = NULL;
  t = b_39;
  {
    ATerm i_22 = t;
    if((PushChoice() == 0))
      {
        ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL,t_2 = NULL;
        m_39 = t;
        if(match_cons(t, sym_Var_1))
          {
            l_39 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_39);
        k_39 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, l_39);
        t_2 = t;
        t = SSLsetAnnotations(t_2, k_39);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_22;
      }
  }
  t = new_0_0(t);
  f_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, f_39), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_39), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, f_39)))), (ATerm) ATmakeAppl(sym_Var_1, f_39)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL;
  n_39 = t;
  if(match_cons(t, sym_Var_1))
    {
      o_39 = ATgetArgument(t, 0);
      {
        ATerm j_22 = t;
        int k_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_39(n_39, t);
            LocalPopChoice(k_22);
          }
        else
          {
            t = j_22;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_z_21, (ATerm) ATmakeAppl(sym_Var_1, o_39)));
          }
      }
    }
  else
    {
      t = q_39(n_39, t);
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm n_22 = t;
  if((PushChoice() == 0))
    {
      ATerm u_16 = NULL,y_16 = NULL,z_16 = NULL,v_2 = NULL;
      z_16 = t;
      if(match_cons(t, sym_Var_1))
        {
          y_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_16);
      u_16 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, y_16);
      v_2 = t;
      t = SSLsetAnnotations(v_2, u_16);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_22;
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_22;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_17 = ATgetFirst((ATermList) t);
      b_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_17, b_17);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_22 = ATgetArgument(t, 0);
      if(match_cons(p_22, sym__2))
        {
          c_17 = ATgetArgument(p_22, 0);
          d_17 = ATgetArgument(p_22, 1);
        }
      else
        _fail(t);
      {
        ATerm q_22 = ATgetArgument(t, 1);
        if(match_cons(q_22, sym__2))
          {
            e_17 = ATgetArgument(q_22, 0);
            f_17 = ATgetArgument(q_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_17), c_17), (ATerm) ATinsert(CheckATermList(f_17), d_17));
  return(t);
}
static ATerm s_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_22;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_17 = ATgetFirst((ATermList) t);
      h_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_17, h_17);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL,s_17 = NULL,t_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_22 = ATgetArgument(t, 0);
      if(match_cons(t_22, sym__2))
        {
          n_17 = ATgetArgument(t_22, 0);
          o_17 = ATgetArgument(t_22, 1);
        }
      else
        _fail(t);
      {
        ATerm u_22 = ATgetArgument(t, 1);
        if(match_cons(u_22, sym__2))
          {
            s_17 = ATgetArgument(u_22, 0);
            t_17 = ATgetArgument(u_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_17), n_17), (ATerm) ATinsert(CheckATermList(t_17), o_17));
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm v_22 = t;
  if((PushChoice() == 0))
    {
      ATerm r_19 = NULL,v_19 = NULL,y_19 = NULL,x_2 = NULL;
      y_19 = t;
      if(match_cons(t, sym_Var_1))
        {
          v_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_19);
      r_19 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, v_19);
      x_2 = t;
      t = SSLsetAnnotations(x_2, r_19);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_22;
    }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_22;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm z_19 = NULL,c_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_19 = ATgetFirst((ATermList) t);
      c_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_19, c_20);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL,i_20 = NULL,l_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_22 = ATgetArgument(t, 0);
      if(match_cons(w_22, sym__2))
        {
          e_20 = ATgetArgument(w_22, 0);
          f_20 = ATgetArgument(w_22, 1);
        }
      else
        _fail(t);
      {
        ATerm x_22 = ATgetArgument(t, 1);
        if(match_cons(x_22, sym__2))
          {
            i_20 = ATgetArgument(x_22, 0);
            l_20 = ATgetArgument(x_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_20), e_20), (ATerm) ATinsert(CheckATermList(l_20), f_20));
  return(t);
}
static ATerm l_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_22;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_20 = ATgetFirst((ATermList) t);
      n_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_20, n_20);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,x_20 = NULL,y_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_22 = ATgetArgument(t, 0);
      if(match_cons(y_22, sym__2))
        {
          o_20 = ATgetArgument(y_22, 0);
          p_20 = ATgetArgument(y_22, 1);
        }
      else
        _fail(t);
      {
        ATerm z_22 = ATgetArgument(t, 1);
        if(match_cons(z_22, sym__2))
          {
            x_20 = ATgetArgument(z_22, 0);
            y_20 = ATgetArgument(z_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_20), o_20), (ATerm) ATinsert(CheckATermList(y_20), p_20));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm a_45 = NULL,b_45 = NULL,g_45 = NULL,h_45 = NULL;
  b_45 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      g_45 = ATgetArgument(t, 0);
      h_45 = ATgetArgument(t, 1);
      a_45 = ATgetArgument(t, 2);
      {
        ATerm i_16 = NULL,k_16 = NULL,l_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,w_2 = NULL;
        t = a_45;
        t = fetch_1_0(l_3, t);
        t = a_45;
        t = genzip_4_0(n_3, q_3, r_3, LiftPrimArg_0_0, t);
        s_16 = t;
        if(match_cons(t, sym__2))
          {
            o_16 = ATgetArgument(t, 0);
            p_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_16);
        n_16 = t;
        t = o_16;
        t = concat_0_0(t);
        q_16 = t;
        t = p_16;
        t = genzip_4_0(s_3, u_3, w_3, _id, t);
        r_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_16, r_16);
        w_2 = t;
        t = SSLsetAnnotations(w_2, n_16);
        if(match_cons(t, sym__2))
          {
            i_16 = ATgetArgument(t, 0);
            {
              ATerm b_23 = ATgetArgument(t, 1);
              if(match_cons(b_23, sym__2))
                {
                  k_16 = ATgetArgument(b_23, 0);
                  l_16 = ATgetArgument(b_23, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, i_16, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, k_16), (ATerm) ATmakeAppl(sym_PrimT_3, g_45, h_45, l_16)));
      }
    }
  else
    {
      ATerm u_18 = NULL,y_18 = NULL,z_18 = NULL,d_19 = NULL,f_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,y_2 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          g_45 = ATgetArgument(t, 0);
          h_45 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_45;
      t = fetch_1_0(y_3, t);
      t = h_45;
      t = genzip_4_0(a_4, c_4, f_4, LiftPrimArg_0_0, t);
      q_19 = t;
      if(match_cons(t, sym__2))
        {
          f_19 = ATgetArgument(t, 0);
          n_19 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_19);
      d_19 = t;
      t = f_19;
      t = concat_0_0(t);
      o_19 = t;
      t = n_19;
      t = genzip_4_0(l_4, m_4, n_4, _id, t);
      p_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_19, p_19);
      y_2 = t;
      t = SSLsetAnnotations(y_2, d_19);
      if(match_cons(t, sym__2))
        {
          u_18 = ATgetArgument(t, 0);
          {
            ATerm d_23 = ATgetArgument(t, 1);
            if(match_cons(d_23, sym__2))
              {
                y_18 = ATgetArgument(d_23, 0);
                z_18 = ATgetArgument(d_23, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, u_18, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, y_18), (ATerm) ATmakeAppl(sym_PrimT_3, g_45, (ATerm)ATempty, z_18)));
    }
  return(t);
}
ATerm repeat_2_0 (ATerm q_99 (ATerm), ATerm r_99 (ATerm), ATerm t)
{
  static ATerm k_45 (ATerm t)
  {
    ATerm f_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_99(t);
        t = k_45(t);
        LocalPopChoice(g_23);
      }
    else
      {
        t = f_23;
        t = r_99(t);
      }
    return(t);
  }
  t = k_45(t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL,m_46 = NULL;
  m_46 = t;
  if(match_cons(t, sym_Con_3))
    {
      g_46 = ATgetArgument(t, 0);
      h_46 = ATgetArgument(t, 1);
      i_46 = ATgetArgument(t, 2);
      {
        ATerm m_21 = NULL,e_3 = NULL;
        t = SSLgetAnnotations(m_46);
        m_21 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, g_46, h_46, i_46);
        e_3 = t;
        t = SSLsetAnnotations(e_3, m_21);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = m_46;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm h_23 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(p_4, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_23;
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL;
  k_47 = t;
  if(match_cons(t, sym_Con_3))
    {
      l_47 = ATgetArgument(t, 0);
      m_47 = ATgetArgument(t, 1);
      j_47 = ATgetArgument(t, 2);
      {
        ATerm a_22 = NULL,h_3 = NULL;
        t = SSLgetAnnotations(k_47);
        a_22 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, l_47, m_47, j_47);
        h_3 = t;
        t = SSLsetAnnotations(h_3, a_22);
      }
    }
  else
    {
      ATerm o_22 = NULL,i_3 = NULL;
      if(match_cons(t, sym_App_2))
        {
          l_47 = ATgetArgument(t, 0);
          m_47 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_47);
      o_22 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, l_47, m_47);
      i_3 = t;
      t = SSLsetAnnotations(i_3, o_22);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm i_23 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(t_4, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_23;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      u_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_47;
  if(match_cons(t, sym_StratRule_3))
    {
      v_47 = ATgetArgument(t, 0);
      w_47 = ATgetArgument(t, 1);
      x_47 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_47), (ATerm) ATmakeAppl(sym_Where_1, x_47)), v_47));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          v_47 = ATgetArgument(t, 0);
          w_47 = ATgetArgument(t, 1);
          x_47 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = v_47;
      t = pureterm_0_0(t);
      t = w_47;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, w_47)), (ATerm) ATmakeAppl(sym_Where_1, x_47)), (ATerm) ATmakeAppl(sym_Match_1, v_47)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm z_94 (ATerm), ATerm t)
{
  static ATerm i_48 (ATerm t)
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_94(t);
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
        t = SRTS_one(i_48, t);
      }
    return(t);
  }
  t = i_48(t);
  return(t);
}
static ATerm u_8 (ATerm i_27, ATerm j_27, ATerm k_27, ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL;
  t = new_0_0(t);
  n_48 = t;
  t = i_27;
  {
    static ATerm v_4 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm o_23 = ATgetArgument(t, 0);
          if(match_cons(o_23, sym_Var_1))
            {
              if(((m_48 != NULL) && (m_48 != ATgetArgument(o_23, 0))))
                _fail(ATgetArgument(o_23, 0));
              else
                m_48 = ATgetArgument(o_23, 0);
            }
          else
            _fail(t);
          if(((k_48 != NULL) && (k_48 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            k_48 = ATgetArgument(t, 1);
          {
            ATerm q_23 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, m_48);
      return(t);
    }
    t = oncetd_1_0(v_4, t);
  }
  o_48 = t;
  t = j_27;
  {
    static ATerm w_4 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm r_23 = ATgetArgument(t, 0);
          if(match_cons(r_23, sym_Var_1))
            {
              if(((m_48 != NULL) && (m_48 != ATgetArgument(r_23, 0))))
                _fail(ATgetArgument(r_23, 0));
              else
                m_48 = ATgetArgument(r_23, 0);
            }
          else
            _fail(t);
          if(((l_48 != NULL) && (l_48 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            l_48 = ATgetArgument(t, 1);
          {
            ATerm s_23 = ATgetArgument(t, 2);
            if(match_cons(s_23, sym_CallT_3))
              {
                if(((j_48 != NULL) && (j_48 != ATgetArgument(s_23, 0))))
                  _fail(ATgetArgument(s_23, 0));
                else
                  j_48 = ATgetArgument(s_23, 0);
                {
                  ATerm t_23 = ATgetArgument(s_23, 1);
                  if(((ATgetType(t_23) != AT_LIST) || !(ATisEmpty(t_23))))
                    _fail(t);
                }
                {
                  ATerm u_23 = ATgetArgument(s_23, 2);
                  if(((ATgetType(u_23) != AT_LIST) || !(ATisEmpty(u_23))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, n_48);
      return(t);
    }
    t = oncetd_1_0(w_4, t);
  }
  p_48 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_48), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, o_48, p_48, (ATerm) ATmakeAppl(sym_Seq_2, k_27, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(j_48), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(k_48), not_null(l_48), term_z_21))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(m_48)), (ATerm) ATmakeAppl(sym_Var_1, n_48))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm w_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_24 = t;
      int c_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL,h_49 = NULL,i_49 = NULL;
          f_49 = t;
          if(match_cons(t, sym_SRule_1))
            {
              h_49 = ATgetArgument(t, 0);
              t = h_49;
              if(match_cons(t, sym_Rule_3))
                {
                  c_49 = ATgetArgument(t, 0);
                  d_49 = ATgetArgument(t, 1);
                  e_49 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = f_49;
              t = u_8(c_49, d_49, e_49, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm a_23 = NULL,e_23 = NULL,m_3 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  h_49 = ATgetArgument(t, 0);
                  i_49 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(f_49);
              a_23 = t;
              t = i_49;
              t = desugarRule_0_0(t);
              e_23 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, h_49, e_23);
              m_3 = t;
              t = SSLsetAnnotations(m_3, a_23);
            }
          LocalPopChoice(c_24);
        }
      else
        {
          t = a_24;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(z_23);
    }
  else
    {
      t = w_23;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm v_93 (ATerm), ATerm t)
{
  static ATerm x_4 (ATerm t)
  {
    t = topdown_1_0(v_93, t);
    return(t);
  }
  t = v_93(t);
  t = SRTS_all(x_4, t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm d_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(e_24);
    }
  else
    {
      t = d_24;
    }
  t = repeat_2_0(a_5, _id, t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm f_24 = t;
  int g_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(g_24);
    }
  else
    {
      t = f_24;
      {
        ATerm h_24 = t;
        int i_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL;
            k_50 = t;
            if(match_cons(t, sym_CallT_3))
              {
                l_50 = ATgetArgument(t, 0);
                m_50 = ATgetArgument(t, 1);
                n_50 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = k_50;
            t = q_8(l_50, m_50, n_50, t);
            LocalPopChoice(i_24);
          }
        else
          {
            t = h_24;
            {
              ATerm j_24 = t;
              int k_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(k_24);
                }
              else
                {
                  t = j_24;
                  {
                    ATerm l_24 = t;
                    int n_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(n_24);
                      }
                    else
                      {
                        t = l_24;
                        {
                          ATerm o_24 = t;
                          int q_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm r_24 = t;
                              int s_24 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      s_50 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = s_50;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      t_50 = ATgetArgument(t, 0);
                                      t = t_50;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          t_50 = ATgetArgument(t, 0);
                                          u_50 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, t_50, u_50);
                                    }
                                  LocalPopChoice(s_24);
                                }
                              else
                                {
                                  t = r_24;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(q_24);
                            }
                          else
                            {
                              t = o_24;
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
  t = topdown_1_0(z_4, t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm q_51 = NULL,r_51 = NULL;
  r_51 = t;
  t = SSL_explode_term(r_51);
  if(match_cons(t, sym__2))
    {
      ATerm t_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_24 = ATgetArgument(t, 1);
        if(((ATgetType(u_24) == AT_LIST) && !(ATisEmpty(u_24))))
          {
            q_51 = ATgetFirst((ATermList) u_24);
            {
              ATerm v_24 = (ATerm) ATgetNext((ATermList) u_24);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_51;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL;
  l_23 = t;
  t = SSL_explode_term(l_23);
  if(match_cons(t, sym__2))
    {
      ATerm w_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_24 = ATgetArgument(t, 1);
        if(((ATgetType(x_24) == AT_LIST) && !(ATisEmpty(x_24))))
          {
            ATerm y_24 = ATgetFirst((ATermList) x_24);
            j_23 = (ATerm) ATgetNext((ATermList) x_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_h_21;
  k_23 = t;
  t = SSL_mkterm(k_23, j_23);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm x_97 (ATerm), ATerm t)
{
  ATerm e_51 = NULL,l_51 = NULL;
  static ATerm s_51 (ATerm t)
  {
    ATerm a_25 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL;
        m_51 = t;
        t = map_1_0(b_5, t);
        t = x_97(t);
        n_51 = t;
        t = m_51;
        t = map_1_0(c_5, t);
        t = s_51(t);
        o_51 = t;
        t = (ATerm) ATinsert(CheckATermList(o_51), n_51);
        LocalPopChoice(b_25);
      }
    else
      {
        t = a_25;
        t = map_1_0(d_5, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = s_51(t);
  l_51 = t;
  t = term_h_21;
  e_51 = t;
  t = SSL_mkterm(e_51, l_51);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm t_51 = NULL;
  t_51 = t;
  {
    ATerm c_25 = t;
    int d_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_51 = NULL,z_51 = NULL,a_52 = NULL;
        t = t_51;
        t = new_0_0(t);
        x_51 = t;
        t = new_0_0(t);
        z_51 = t;
        t = new_0_0(t);
        a_52 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, x_51), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_h_21, (ATerm) ATinsert(ATinsert(ATempty, t_51), (ATerm) ATmakeAppl(sym_Var_1, z_51))), (ATerm) ATmakeAppl(sym_Var_1, a_52)), (ATerm)ATmakeAppl(sym_VarDec_2, x_51, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_i_25), term_i_25)), z_51, (ATerm)ATmakeAppl(sym_Var_1, z_51), a_52, (ATerm) ATmakeAppl(sym_Var_1, a_52));
        LocalPopChoice(d_25);
      }
    else
      {
        t = c_25;
        {
          ATerm c_52 = NULL,d_52 = NULL,e_52 = NULL;
          t = t_51;
          t = new_0_0(t);
          c_52 = t;
          t = new_0_0(t);
          d_52 = t;
          t = new_0_0(t);
          e_52 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, c_52), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_h_21, (ATerm) ATinsert(ATinsert(ATempty, t_51), (ATerm) ATmakeAppl(sym_Var_1, d_52))), (ATerm) ATmakeAppl(sym_Var_1, e_52)), (ATerm)ATmakeAppl(sym_VarDec_2, c_52, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_i_25), term_i_25)), d_52, (ATerm)ATmakeAppl(sym_Var_1, d_52), e_52, (ATerm) ATmakeAppl(sym_Var_1, e_52));
        }
      }
  }
  return(t);
}
static ATerm v_8 (ATerm g_48, ATerm h_48, ATerm t)
{
  ATerm j_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(g_48, h_48);
      LocalPopChoice(p_25);
    }
  else
    {
      t = j_25;
      t = SSL_subtr(g_48, h_48);
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm f_52 = NULL,g_52 = NULL;
  if(match_cons(t, sym__2))
    {
      f_52 = ATgetArgument(t, 0);
      g_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, f_52, g_52, (ATerm) ATempty);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm h_52 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm s_25 = ATgetArgument(t, 0);
      if(((ATgetType(s_25) != AT_INT) || (ATgetInt((ATermInt) s_25) != 0)))
        _fail(t);
      {
        ATerm t_25 = ATgetArgument(t, 1);
      }
      h_52 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = h_52;
  return(t);
}
ATerm copy_1_0 (ATerm n_115 (ATerm), ATerm t)
{
  static ATerm g_5 (ATerm t)
  {
    ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL;
    if(match_cons(t, sym__3))
      {
        i_52 = ATgetArgument(t, 0);
        j_52 = ATgetArgument(t, 1);
        k_52 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, i_52, term_b_19);
    t = geq_0_0(t);
    t = term_b_19;
    n_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_52, term_b_19);
    t = v_8(i_52, n_52, t);
    l_52 = t;
    t = j_52;
    t = n_115(t);
    m_52 = t;
    t = (ATerm) ATmakeAppl(sym__3, l_52, j_52, (ATerm) ATinsert(CheckATermList(k_52), m_52));
    return(t);
  }
  t = for_3_0(e_5, f_5, g_5, t);
  return(t);
}
static ATerm w_8 (ATerm r_22, ATerm s_22, ATerm t)
{
  ATerm o_52 = NULL,p_52 = NULL,q_52 = NULL;
  t = new_0_0(t);
  o_52 = t;
  t = new_0_0(t);
  p_52 = t;
  t = new_0_0(t);
  q_52 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_52), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_h_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, r_22)), (ATerm) ATmakeAppl(sym_Var_1, p_52))), (ATerm) ATmakeAppl(sym_Op_2, term_h_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, s_22)), (ATerm) ATmakeAppl(sym_Var_1, q_52)))), (ATerm)ATmakeAppl(sym_VarDec_2, o_52, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_i_25), term_i_25)), p_52, (ATerm)ATmakeAppl(sym_Var_1, p_52), q_52, (ATerm) ATmakeAppl(sym_Var_1, q_52));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm u_52 = NULL,v_52 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_52 = ATgetFirst((ATermList) t);
      v_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_52;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_52;
    }
  else
    {
      t = v_52;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm c_56 (ATerm j_53, ATerm k_53, ATerm l_53, ATerm m_53, ATerm t)
{
  ATerm q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL;
  t = term_b_19;
  b_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_53, term_b_19);
  t = y_9(k_53, b_54, t);
  a_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_54, term_u_25);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_53 = ATgetFirst((ATermList) t);
      s_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_53;
  t = last_0_0(t);
  q_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_53), r_53), s_53);
  t = genzip_4_0(h_5, j_5, k_5, l_5, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      t_53 = ATgetArgument(t, 0);
      u_53 = ATgetArgument(t, 1);
      v_53 = ATgetArgument(t, 2);
      w_53 = ATgetArgument(t, 3);
      x_53 = ATgetArgument(t, 4);
      y_53 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, x_53), v_53), s_53);
  t = concat_0_0(t);
  z_53 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, j_53, term_v_25), u_53, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(z_53), r_53), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_h_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, r_53)), (ATerm) ATmakeAppl(sym_Op_2, j_53, w_53))), (ATerm)ATmakeAppl(sym_Op_2, term_h_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, q_53)), (ATerm) ATmakeAppl(sym_Op_2, j_53, y_53))), (ATerm) ATmakeAppl(sym_Seqs_1, t_53)))));
  return(t);
}
static ATerm d_56 (ATerm u_54, ATerm v_54, ATerm w_54, ATerm x_54, ATerm t)
{
  ATerm b_55 = NULL,i_55 = NULL,j_55 = NULL,k_55 = NULL,l_55 = NULL,m_55 = NULL,n_55 = NULL,o_55 = NULL;
  t = x_54;
  t = new_0_0(t);
  b_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_54, (ATerm) ATmakeAppl(sym_Var_1, b_55));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      i_55 = ATgetArgument(t, 0);
      j_55 = ATgetArgument(t, 1);
      k_55 = ATgetArgument(t, 2);
      l_55 = ATgetArgument(t, 3);
      m_55 = ATgetArgument(t, 4);
      n_55 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_55, m_55);
  t = conc_0_0(t);
  o_55 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, u_54, term_w_25), j_55, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(o_55), b_55), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_h_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, b_55)), (ATerm) ATmakeAppl(sym_Op_2, u_54, l_55))), (ATerm)ATmakeAppl(sym_Op_2, u_54, n_55), (ATerm) ATmakeAppl(sym_Seqs_1, i_55)))));
  return(t);
}
static ATerm h_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_25 = ATgetArgument(t, 0);
      ATerm y_25 = ATgetArgument(t, 1);
      if(((ATgetType(y_25) != AT_LIST) || !(ATisEmpty(y_25))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm c_54 = NULL,d_54 = NULL,j_54 = NULL,k_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_26 = ATgetArgument(t, 0);
      if(((ATgetType(a_26) == AT_LIST) && !(ATisEmpty(a_26))))
        {
          c_54 = ATgetFirst((ATermList) a_26);
          d_54 = (ATerm) ATgetNext((ATermList) a_26);
        }
      else
        _fail(t);
      {
        ATerm b_26 = ATgetArgument(t, 1);
        if(((ATgetType(b_26) == AT_LIST) && !(ATisEmpty(b_26))))
          {
            j_54 = ATgetFirst((ATermList) b_26);
            k_54 = (ATerm) ATgetNext((ATermList) b_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_54, j_54), (ATerm) ATmakeAppl(sym__2, d_54, k_54));
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm l_54 = NULL,m_54 = NULL;
  if(match_cons(t, sym__2))
    {
      l_54 = ATgetArgument(t, 0);
      m_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_54), l_54);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm n_54 = NULL,o_54 = NULL;
  if(match_cons(t, sym__2))
    {
      n_54 = ATgetArgument(t, 0);
      o_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_8(n_54, o_54, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL,v_55 = NULL,w_55 = NULL;
  q_55 = t;
  if(match_cons(t, sym__3))
    {
      r_55 = ATgetArgument(t, 0);
      s_55 = ATgetArgument(t, 1);
      t_55 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = s_55;
  if(match_string(t, "T"))
    {
      t = t_55;
      if(match_cons(t, sym__2))
        {
          v_55 = ATgetArgument(t, 0);
          w_55 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_55;
      if(match_int(t, 0))
        {
          ATerm c_26 = t;
          int d_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_56(r_55, v_55, w_55, q_55, t);
              LocalPopChoice(d_26);
            }
          else
            {
              t = c_26;
              {
                ATerm b_56 = NULL;
                t = q_55;
                t = new_0_0(t);
                b_56 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, r_55, term_v_25), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_56), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_h_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, b_56)), (ATerm) ATmakeAppl(sym_Op_2, r_55, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_h_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, b_56)), (ATerm) ATmakeAppl(sym_Op_2, r_55, (ATerm) ATempty))), term_z_21))));
              }
            }
        }
      else
        {
          t = c_56(r_55, v_55, w_55, q_55, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = t_55;
      if(match_cons(t, sym__2))
        {
          v_55 = ATgetArgument(t, 0);
          w_55 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_56(r_55, v_55, w_55, q_55, t);
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_y_21;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL,g_10 = NULL;
  y_11 = t;
  t = SSL_explode_term(y_11);
  if(match_cons(t, sym__2))
    {
      ATerm e_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_26 = ATgetArgument(t, 1);
        if(((ATgetType(f_26) == AT_LIST) && !(ATisEmpty(f_26))))
          {
            z_11 = ATgetFirst((ATermList) f_26);
            {
              ATerm g_26 = (ATerm) ATgetNext((ATermList) f_26);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(y_11);
  if(match_cons(t, sym__2))
    {
      ATerm h_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_26 = ATgetArgument(t, 1);
        if(((ATgetType(i_26) == AT_LIST) && !(ATisEmpty(i_26))))
          {
            ATerm j_26 = ATgetFirst((ATermList) i_26);
            ATerm k_26 = (ATerm) ATgetNext((ATermList) i_26);
            if(((ATgetType(k_26) == AT_LIST) && !(ATisEmpty(k_26))))
              {
                g_10 = ATgetFirst((ATermList) k_26);
                {
                  ATerm l_26 = (ATerm) ATgetNext((ATermList) k_26);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, z_11, g_10);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(m_5, o_5, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL;
  m_12 = t;
  if(match_cons(t, sym__2))
    {
      n_12 = ATgetArgument(t, 0);
      o_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_12;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_12 = ATgetFirst((ATermList) t);
      q_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_12;
  if(match_cons(t, sym__2))
    {
      k_12 = ATgetArgument(t, 0);
      l_12 = ATgetArgument(t, 1);
      {
        ATerm m_26 = t;
        int n_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_12;
            if((n_12 != t))
              {
                _fail(t);
              }
            t = l_12;
            LocalPopChoice(n_26);
          }
        else
          {
            t = m_26;
            t = (ATerm) ATmakeAppl(sym__2, n_12, q_12);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, n_12, q_12);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm n_95 (ATerm), ATerm t)
{
  static ATerm n_13 (ATerm t)
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_95(t);
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
        t = SRTS_all(n_13, t);
      }
    return(t);
  }
  t = n_13(t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_26 = ATgetArgument(t, 0);
      if(((ATgetType(q_26) != AT_LIST) || !(ATisEmpty(q_26))))
        _fail(t);
      {
        ATerm r_26 = ATgetArgument(t, 1);
        if(((ATgetType(r_26) != AT_LIST) || !(ATisEmpty(r_26))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL,e_14 = NULL,g_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_26 = ATgetArgument(t, 0);
      if(((ATgetType(s_26) == AT_LIST) && !(ATisEmpty(s_26))))
        {
          a_14 = ATgetFirst((ATermList) s_26);
          b_14 = (ATerm) ATgetNext((ATermList) s_26);
        }
      else
        _fail(t);
      {
        ATerm t_26 = ATgetArgument(t, 1);
        if(((ATgetType(t_26) == AT_LIST) && !(ATisEmpty(t_26))))
          {
            e_14 = ATgetFirst((ATermList) t_26);
            g_14 = (ATerm) ATgetNext((ATermList) t_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_14, e_14), (ATerm) ATmakeAppl(sym__2, b_14, g_14));
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL;
  if(match_cons(t, sym__2))
    {
      h_14 = ATgetArgument(t, 0);
      i_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_14), h_14);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL;
  q_13 = t;
  {
    ATerm u_26 = t;
    int w_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_26 = ATgetArgument(t, 0);
            ATerm y_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(w_26);
        t = q_13;
      }
    else
      {
        t = u_26;
        {
          ATerm z_13 = NULL;
          if(match_cons(t, sym__3))
            {
              r_13 = ATgetArgument(t, 0);
              s_13 = ATgetArgument(t, 1);
              t_13 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, r_13, s_13);
          t = genzip_4_0(p_5, r_5, s_5, _id, t);
          z_13 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_13, t_13);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm e_93 (ATerm), ATerm f_93 (ATerm), ATerm t)
{
  ATerm k_14 = NULL,l_14 = NULL;
  static ATerm t_5 (ATerm t)
  {
    ATerm k_10 = NULL;
    t = e_93(t);
    k_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_10, not_null(l_14));
    t = lookup_0_0(t);
    t = f_93(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((l_14 != NULL) && (l_14 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_14 = ATgetArgument(t, 0);
      k_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_14;
  t = alltd_1_0(t_5, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm x_15 = NULL,e_16 = NULL,g_16 = NULL,h_16 = NULL,j_16 = NULL,o_3 = NULL;
  j_16 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      e_16 = ATgetArgument(t, 0);
      g_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_16);
  x_15 = t;
  t = e_16;
  t = new_0_0(t);
  h_16 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, h_16, g_16);
  o_3 = t;
  t = SSLsetAnnotations(o_3, x_15);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm m_16 = NULL,t_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,p_3 = NULL;
  x_16 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      t_16 = ATgetArgument(t, 0);
      v_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_16);
  m_16 = t;
  t = t_16;
  t = new_0_0(t);
  w_16 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, w_16, v_16);
  p_3 = t;
  t = SSLsetAnnotations(p_3, m_16);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm i_17 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      i_17 = ATgetArgument(t, 0);
      {
        ATerm z_26 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_17), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm j_17 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      j_17 = ATgetArgument(t, 0);
      {
        ATerm a_27 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, j_17);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm v_17 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      v_17 = ATgetArgument(t, 0);
      {
        ATerm b_27 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = v_17;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm w_17 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      w_17 = ATgetArgument(t, 0);
      {
        ATerm d_27 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = w_17;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm x_17 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      d_18 = ATgetArgument(t, 0);
      f_18 = ATgetArgument(t, 1);
      x_17 = ATgetArgument(t, 2);
      t = d_18;
      if(match_cons(t, sym_SVar_1))
        {
          e_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_18;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_17;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_18;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          d_18 = ATgetArgument(t, 0);
          f_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_18;
      if(match_cons(t, sym_SVar_1))
        {
          e_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_18;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_18;
    }
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm l_18 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_18;
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,v_15 = NULL;
  r_15 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_27 = ATgetFirst((ATermList) t);
      if(match_cons(e_27, sym_SDefT_4))
        {
          m_15 = ATgetArgument(e_27, 0);
          n_15 = ATgetArgument(e_27, 1);
          o_15 = ATgetArgument(e_27, 2);
          {
            ATerm g_27 = ATgetArgument(e_27, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm f_27 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = n_15;
  t = map_1_0(u_5, t);
  p_15 = t;
  t = o_15;
  t = map_1_0(c_6, t);
  q_15 = t;
  t = p_15;
  t = map_1_0(d_6, t);
  t_15 = t;
  t = q_15;
  t = map_1_0(g_6, t);
  s_15 = t;
  t = r_15;
  {
    static ATerm h_6 (ATerm t)
    {
      ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL,q_17 = NULL,r_17 = NULL,u_17 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm h_27 = ATgetArgument(t, 0);
          k_17 = ATgetArgument(t, 1);
          l_17 = ATgetArgument(t, 2);
          m_17 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = l_17;
      t = map_1_0(j_6, t);
      q_17 = t;
      t = k_17;
      t = map_1_0(m_6, t);
      u_17 = t;
      t = (ATerm) ATmakeAppl(sym__3, u_17, t_15, m_17);
      t = substitute_2_0(n_6, _id, t);
      r_17 = t;
      t = (ATerm) ATmakeAppl(sym__3, q_17, s_15, r_17);
      t = substitute_2_0(p_6, _id, t);
      return(t);
    }
    t = map_1_0(h_6, t);
  }
  t = choices_0_0(t);
  v_15 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, m_15, p_15, q_15, v_15);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm n_18 = NULL,s_18 = NULL,t_18 = NULL;
  t = term_d_13;
  s_18 = t;
  t = (ATerm) ATinsert(ATempty, term_m_27);
  t_18 = t;
  t = SSL_printnl(s_18, t_18);
  t = term_b_19;
  n_18 = t;
  t = SSL_exit(n_18);
  t = (ATerm) ATinsert(ATempty, term_m_27);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_n_27;
  return(t);
}
ATerm JoinDefsExt_0_0 (ATerm t)
{
  ATerm v_18 = NULL;
  static ATerm q_6 (ATerm t)
  {
    ATerm w_18 = NULL,x_18 = NULL;
    w_18 = t;
    {
      ATerm p_27 = t;
      int q_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_ExtSDef_3))
            {
              x_18 = ATgetArgument(t, 0);
              {
                ATerm r_27 = ATgetArgument(t, 1);
              }
              {
                ATerm t_27 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          LocalPopChoice(q_27);
          t = x_18;
          if(((v_18 != NULL) && (v_18 != t)))
            _fail(t);
          else
            v_18 = t;
          t = w_18;
        }
      else
        {
          t = p_27;
          if(match_cons(t, sym_ExtSDefInl_4))
            {
              x_18 = ATgetArgument(t, 0);
              {
                ATerm u_27 = ATgetArgument(t, 1);
              }
              {
                ATerm v_27 = ATgetArgument(t, 2);
              }
              {
                ATerm x_27 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = x_18;
          if(((v_18 != NULL) && (v_18 != t)))
            _fail(t);
          else
            v_18 = t;
          t = w_18;
        }
    }
    return(t);
  }
  t = fetch_1_0(q_6, t);
  t = not_null(v_18);
  t = debug_1_0(s_6, t);
  t = giving_up_0_0(t);
  return(t);
}
static ATerm x_58 (ATerm p_56, ATerm q_56, ATerm r_56, ATerm s_56, ATerm t)
{
  ATerm w_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL,t_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_56, q_56);
  t = Definitions_0_0(t);
  w_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_56, r_56);
  b_57 = t;
  if(match_cons(t, sym__2))
    {
      ATerm y_27 = ATgetArgument(t, 0);
      ATerm z_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_57);
  z_56 = t;
  t = w_56;
  {
    ATerm a_28 = t;
    int b_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_57 = NULL,n_57 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_57 = ATgetFirst((ATermList) t);
            n_57 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_57;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_57;
        LocalPopChoice(b_28);
      }
    else
      {
        t = a_28;
        {
          ATerm c_28 = t;
          int d_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = JoinDefsExt_0_0(t);
              LocalPopChoice(d_28);
            }
          else
            {
              t = c_28;
              t = JoinDefs2_0_0(t);
            }
        }
      }
  }
  a_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_57, r_56);
  t_3 = t;
  t = SSLsetAnnotations(t_3, z_56);
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm q_57 = NULL,w_57 = NULL,x_57 = NULL,b_58 = NULL,c_58 = NULL,e_58 = NULL,f_58 = NULL;
  x_57 = t;
  if(match_cons(t, sym__2))
    {
      b_58 = ATgetArgument(t, 0);
      f_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_58;
  if(match_cons(t, sym__2))
    {
      c_58 = ATgetArgument(t, 0);
      e_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_58;
  if(match_cons(t, sym_Mod_2))
    {
      q_57 = ATgetArgument(t, 0);
      w_57 = ATgetArgument(t, 1);
      {
        ATerm e_28 = t;
        int f_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_58 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, q_57, w_57, e_58);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            n_58 = t;
            t = (ATerm) ATmakeAppl(sym__2, n_58, f_58);
            LocalPopChoice(f_28);
          }
        else
          {
            t = e_28;
            t = x_58(c_58, e_58, f_58, x_57, t);
          }
      }
    }
  else
    {
      t = x_58(c_58, e_58, f_58, x_57, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm e_106 (ATerm), ATerm t)
{
  static ATerm c_61 (ATerm t)
  {
    ATerm z_60 = NULL,a_61 = NULL,b_61 = NULL;
    b_61 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_60 = ATgetFirst((ATermList) t);
        a_61 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm p_23 = NULL,b_24 = NULL,v_3 = NULL;
          t = SSLgetAnnotations(b_61);
          p_23 = t;
          t = a_61;
          t = c_61(t);
          b_24 = t;
          t = (ATerm) ATinsert(CheckATermList(b_24), z_60);
          v_3 = t;
          t = SSLsetAnnotations(v_3, p_23);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_61;
        t = e_106(t);
      }
    return(t);
  }
  t = c_61(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_59 = NULL,c_59 = NULL,d_59 = NULL;
  b_59 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_59;
    }
  else
    {
      static ATerm t_6 (ATerm t)
      {
        t = not_null(d_59);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_59 = ATgetFirst((ATermList) t);
          if(((d_59 != NULL) && (d_59 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            d_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_59;
      t = at_end_1_0(t_6, t);
    }
  return(t);
}
static ATerm r_61 (ATerm g_61, ATerm t)
{
  ATerm h_61 = NULL;
  t = SSL_explode_term(g_61);
  if(match_cons(t, sym__2))
    {
      ATerm g_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      h_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_61;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm m_61 = NULL,n_61 = NULL,o_61 = NULL;
  o_61 = t;
  if(match_cons(t, sym__2))
    {
      m_61 = ATgetArgument(t, 0);
      n_61 = ATgetArgument(t, 1);
      {
        ATerm h_28 = t;
        int i_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm u_6 (ATerm t)
            {
              t = n_61;
              return(t);
            }
            t = m_61;
            t = at_end_1_0(u_6, t);
            LocalPopChoice(i_28);
          }
        else
          {
            t = h_28;
            t = r_61(o_61, t);
          }
      }
    }
  else
    {
      t = r_61(o_61, t);
    }
  return(t);
}
static ATerm c_9 (ATerm k_112 (ATerm), ATerm p_58, ATerm o_58, ATerm t)
{
  static ATerm j_62 (ATerm t)
  {
    ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL;
    e_62 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_62;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_62 = ATgetFirst((ATermList) t);
            g_62 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_28 = t;
          int k_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_62;
              {
                static ATerm v_6 (ATerm t)
                {
                  t = o_58;
                  return(t);
                }
                t = p_9(k_112, v_6, f_62, g_62, t);
              }
              t = j_62(t);
              LocalPopChoice(k_28);
            }
          else
            {
              t = j_28;
              {
                ATerm m_24 = NULL,p_24 = NULL,z_3 = NULL;
                t = SSLgetAnnotations(e_62);
                m_24 = t;
                t = g_62;
                t = j_62(t);
                p_24 = t;
                t = (ATerm) ATinsert(CheckATermList(p_24), f_62);
                z_3 = t;
                t = SSLsetAnnotations(z_3, m_24);
              }
            }
        }
      }
    return(t);
  }
  t = p_58;
  t = j_62(t);
  return(t);
}
ATerm genzip_4_0 (ATerm h_98 (ATerm), ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm t)
{
  static ATerm b_63 (ATerm t)
  {
    ATerm l_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_98(t);
        LocalPopChoice(m_28);
      }
    else
      {
        t = l_28;
        {
          ATerm s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL,y_62 = NULL,a_63 = NULL,b_4 = NULL;
          t = i_98(t);
          a_63 = t;
          if(match_cons(t, sym__2))
            {
              t_62 = ATgetArgument(t, 0);
              u_62 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_63);
          s_62 = t;
          t = t_62;
          t = k_98(t);
          v_62 = t;
          t = u_62;
          t = b_63(t);
          y_62 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_62, y_62);
          b_4 = t;
          t = SSLsetAnnotations(b_4, s_62);
          t = j_98(t);
        }
      }
    return(t);
  }
  t = b_63(t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_28 = ATgetArgument(t, 0);
      if(((ATgetType(n_28) != AT_LIST) || !(ATisEmpty(n_28))))
        _fail(t);
      {
        ATerm o_28 = ATgetArgument(t, 1);
        if(((ATgetType(o_28) != AT_LIST) || !(ATisEmpty(o_28))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL,w_63 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_28 = ATgetArgument(t, 0);
      if(((ATgetType(p_28) == AT_LIST) && !(ATisEmpty(p_28))))
        {
          s_63 = ATgetFirst((ATermList) p_28);
          t_63 = (ATerm) ATgetNext((ATermList) p_28);
        }
      else
        _fail(t);
      {
        ATerm q_28 = ATgetArgument(t, 1);
        if(((ATgetType(q_28) == AT_LIST) && !(ATisEmpty(q_28))))
          {
            u_63 = ATgetFirst((ATermList) q_28);
            w_63 = (ATerm) ATgetNext((ATermList) q_28);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_63, u_63), (ATerm) ATmakeAppl(sym__2, t_63, w_63));
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm x_63 = NULL,a_64 = NULL;
  if(match_cons(t, sym__2))
    {
      x_63 = ATgetArgument(t, 0);
      a_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_64), x_63);
  return(t);
}
static ATerm h_9 (ATerm s_679, ATerm x_679, ATerm d_69, ATerm t)
{
  ATerm d_63 = NULL,h_63 = NULL,j_63 = NULL,m_63 = NULL;
  t = SSL_explode_term(x_679);
  if(match_cons(t, sym__2))
    {
      d_63 = ATgetArgument(t, 0);
      j_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(s_679);
  if(match_cons(t, sym__2))
    {
      if((d_63 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      h_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_63, j_63);
  t = genzip_4_0(w_6, z_6, a_7, _id, t);
  m_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_63, d_69);
  t = conc_0_0(t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm l_64 = NULL;
  l_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, l_64);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm m_64 = NULL,o_64 = NULL,p_64 = NULL,s_64 = NULL,d_4 = NULL;
  s_64 = t;
  if(match_cons(t, sym__2))
    {
      o_64 = ATgetArgument(t, 0);
      p_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_64);
  m_64 = t;
  t = p_64;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_64, p_64);
  d_4 = t;
  t = SSLsetAnnotations(d_4, m_64);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm z_65 = NULL,f_66 = NULL,g_66 = NULL,h_66 = NULL,j_66 = NULL;
  z_65 = t;
  if(match_cons(t, sym__2))
    {
      f_66 = ATgetArgument(t, 0);
      g_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_66;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_66 = ATgetFirst((ATermList) t);
      j_66 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_28 = t;
        int t_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_66(f_66, g_66, z_65, t);
            LocalPopChoice(t_28);
          }
        else
          {
            t = r_28;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_66), h_66), j_66);
          }
      }
    }
  else
    {
      t = v_66(f_66, g_66, z_65, t);
    }
  return(t);
}
static ATerm v_66 (ATerm t_64, ATerm u_64, ATerm z_64, ATerm t)
{
  ATerm a_65 = NULL,d_65 = NULL,e_4 = NULL,i_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL;
  t = SSLgetAnnotations(z_64);
  a_65 = t;
  t = u_64;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_65 = ATgetFirst((ATermList) t);
      q_65 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_65;
  if(match_cons(t, sym__2))
    {
      o_65 = ATgetArgument(t, 0);
      p_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_28 = t;
    int w_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_65;
        if((o_65 != t))
          {
            _fail(t);
          }
        t = q_65;
        LocalPopChoice(w_28);
      }
    else
      {
        t = u_28;
        t = u_64;
        t = h_9(o_65, p_65, q_65, t);
      }
  }
  d_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_64, d_65);
  e_4 = t;
  t = SSLsetAnnotations(e_4, a_65);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm u_66 = NULL;
  if(match_cons(t, sym__2))
    {
      u_66 = ATgetArgument(t, 0);
      if((u_66 != ATgetArgument(t, 1)))
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
  ATerm x_28 = t;
  int y_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(l_7, m_7, p_7, t);
      LocalPopChoice(y_28);
    }
  else
    {
      t = x_28;
      {
        ATerm p_66 = NULL,q_66 = NULL,r_66 = NULL;
        p_66 = t;
        if(match_cons(t, sym__2))
          {
            q_66 = ATgetArgument(t, 0);
            r_66 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_66;
        t = c_9(q_7, q_66, r_66, t);
      }
    }
  return(t);
}
static ATerm j_9 (ATerm y_124 (ATerm), ATerm z_124 (ATerm), ATerm a_125 (ATerm), ATerm e_70, ATerm b_70, ATerm j_70, ATerm f_70, ATerm c_70, ATerm d_70, ATerm t)
{
  ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL,d_67 = NULL,e_67 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_70, f_70);
  t = y_124(t);
  if(match_cons(t, sym__2))
    {
      z_66 = ATgetArgument(t, 0);
      y_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_66;
  t = z_124(t);
  a_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_67, j_70);
  t = diff_0_0(t);
  b_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_67, b_70);
  t = conc_0_0(t);
  c_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_67, j_70);
  t = conc_0_0(t);
  d_67 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_70, z_66, c_70);
  t = a_125(t);
  e_67 = t;
  t = (ATerm) ATmakeAppl(sym__5, c_67, d_67, y_66, e_67, d_70);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm y_124 (ATerm), ATerm z_124 (ATerm), ATerm a_125 (ATerm), ATerm t)
{
  ATerm g_67 = NULL,h_67 = NULL,i_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm a_29 = ATgetArgument(t, 0);
      if(((ATgetType(a_29) == AT_LIST) && !(ATisEmpty(a_29))))
        {
          g_67 = ATgetFirst((ATermList) a_29);
          h_67 = (ATerm) ATgetNext((ATermList) a_29);
        }
      else
        _fail(t);
      i_67 = ATgetArgument(t, 1);
      j_67 = ATgetArgument(t, 2);
      k_67 = ATgetArgument(t, 3);
      l_67 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = j_9(y_124, z_124, a_125, g_67, h_67, i_67, j_67, k_67, l_67, t);
  return(t);
}
ATerm while_not_2_0 (ATerm h_100 (ATerm), ATerm i_100 (ATerm), ATerm t)
{
  static ATerm m_67 (ATerm t)
  {
    ATerm b_29 = t;
    int d_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_100(t);
        LocalPopChoice(d_29);
      }
    else
      {
        t = b_29;
        t = i_100(t);
        t = m_67(t);
      }
    return(t);
  }
  t = m_67(t);
  return(t);
}
ATerm for_3_0 (ATerm k_100 (ATerm), ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm t)
{
  t = k_100(t);
  t = while_not_2_0(l_100, m_100, t);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm z_67 = NULL,a_68 = NULL,b_68 = NULL;
  if(match_cons(t, sym__3))
    {
      z_67 = ATgetArgument(t, 0);
      a_68 = ATgetArgument(t, 1);
      b_68 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, z_67, z_67, a_68, b_68, (ATerm) ATempty);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm g_68 = NULL,h_68 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm e_29 = ATgetArgument(t, 0);
      if(((ATgetType(e_29) != AT_LIST) || !(ATisEmpty(e_29))))
        _fail(t);
      {
        ATerm f_29 = ATgetArgument(t, 1);
      }
      {
        ATerm h_29 = ATgetArgument(t, 2);
      }
      g_68 = ATgetArgument(t, 3);
      h_68 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_68, h_68);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm i_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, b_8, e_8, t);
      LocalPopChoice(j_29);
    }
  else
    {
      t = i_29;
      {
        ATerm p_68 = NULL,q_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL;
        if(match_cons(t, sym__5))
          {
            p_68 = ATgetArgument(t, 0);
            t_68 = ATgetArgument(t, 1);
            u_68 = ATgetArgument(t, 2);
            v_68 = ATgetArgument(t, 3);
            w_68 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = p_68;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_68 = ATgetFirst((ATermList) t);
            s_68 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, s_68, t_68, u_68, v_68, (ATerm) ATinsert(CheckATermList(w_68), q_68));
      }
    }
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(h_8, t);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm l_68 = NULL,m_68 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm k_29 = ATgetArgument(t, 0);
      l_68 = ATgetArgument(t, 1);
      m_68 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_68), l_68);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm l_29 = t;
  int m_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      LocalPopChoice(m_29);
    }
  else
    {
      t = l_29;
    }
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL,q_25 = NULL,r_25 = NULL;
  o_25 = t;
  if(match_cons(t, sym__2))
    {
      q_25 = ATgetArgument(t, 0);
      r_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_25;
  if(match_cons(t, sym_Mod_2))
    {
      m_25 = ATgetArgument(t, 0);
      n_25 = ATgetArgument(t, 1);
      {
        ATerm o_29 = t;
        int p_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_25;
            t = d_8(m_25, n_25, r_25, t);
            LocalPopChoice(p_29);
          }
        else
          {
            t = o_29;
            t = z_25(q_25, r_25, t);
          }
      }
    }
  else
    {
      t = z_25(q_25, r_25, t);
    }
  return(t);
}
static ATerm z_25 (ATerm f_25, ATerm g_25, ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL;
  t = term_d_13;
  k_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_15), g_25), term_g_15), f_25), term_d_15);
  l_25 = t;
  t = SSL_printnl(k_25, l_25);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_15), g_25), term_g_15), f_25), term_d_15);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm z_70 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL,j_71 = NULL;
  t = for_3_0(u_7, v_7, w_7, t);
  z_70 = t;
  if(match_cons(t, sym__2))
    {
      f_71 = ATgetArgument(t, 0);
      g_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_71;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_71;
    }
  else
    {
      ATerm z_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_71 = ATgetFirst((ATermList) t);
          j_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(j_71), h_71);
      t = map_1_0(i_8, t);
      t = term_b_19;
      z_24 = t;
      t = SSL_exit(z_24);
    }
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = term_a_19;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm g_72 = NULL,h_72 = NULL;
  if(match_cons(t, sym__2))
    {
      g_72 = ATgetArgument(t, 0);
      h_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9(g_72, h_72, t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = term_b_19;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_a_19;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm i_72 = NULL,m_72 = NULL;
  if(match_cons(t, sym__2))
    {
      i_72 = ATgetArgument(t, 0);
      m_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9(i_72, m_72, t);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = term_b_19;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm o_72 = NULL;
  if(match_cons(t, sym__2))
    {
      o_72 = ATgetArgument(t, 0);
      if((o_72 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_q_29;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = term_r_29;
  return(t);
}
ATerm RegisterExtSDefInl_0_0 (ATerm t)
{
  ATerm o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL,c_72 = NULL,f_72 = NULL;
  q_71 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      t_71 = ATgetArgument(t, 0);
      o_71 = ATgetArgument(t, 1);
      p_71 = ATgetArgument(t, 2);
      {
        ATerm s_29 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  v_71 = t;
  t = o_71;
  t = foldr_3_0(j_8, l_8, m_8, t);
  r_71 = t;
  t = p_71;
  t = foldr_3_0(n_8, o_8, r_8, t);
  s_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_71, (ATerm) ATmakeAppl(sym__2, r_71, s_71));
  {
    ATerm t_29 = t;
    int u_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(u_29);
      }
    else
      {
        t = t_29;
        t = (ATerm) ATempty;
      }
  }
  x_71 = t;
  t = t_71;
  {
    ATerm w_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(x_29);
      }
    else
      {
        t = w_29;
        t = (ATerm) ATempty;
      }
  }
  w_71 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, r_71, s_71));
  f_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, r_71, s_71)), w_71);
  t = q_9(t_8, f_72, w_71, t);
  u_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_71, (ATerm) ATmakeAppl(sym__2, r_71, s_71));
  z_71 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_z_29, (ATerm) ATinsert(CheckATermList(x_71), q_71));
  c_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_71, (ATerm) ATmakeAppl(sym__2, r_71, s_71)), (ATerm) ATmakeAppl(sym_Defined_2, term_z_29, (ATerm) ATinsert(CheckATermList(x_71), q_71)));
  t = m_9(y_8, z_71, c_72, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_a_30, u_71);
  y_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_71, (ATerm) ATmakeAppl(sym_Defined_2, term_a_30, u_71));
  t = m_9(z_8, t_71, y_71, t);
  t = v_71;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  t = term_a_19;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm k_73 = NULL,l_73 = NULL;
  if(match_cons(t, sym__2))
    {
      k_73 = ATgetArgument(t, 0);
      l_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9(k_73, l_73, t);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  t = term_b_19;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  t = term_a_19;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm m_73 = NULL,o_73 = NULL;
  if(match_cons(t, sym__2))
    {
      m_73 = ATgetArgument(t, 0);
      o_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9(m_73, o_73, t);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = term_b_19;
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm p_73 = NULL;
  if(match_cons(t, sym__2))
    {
      p_73 = ATgetArgument(t, 0);
      if((p_73 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm e_10 (ATerm t)
{
  t = term_q_29;
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = term_r_29;
  return(t);
}
ATerm RegisterExtSDef_0_0 (ATerm t)
{
  ATerm q_72 = NULL,t_72 = NULL,u_72 = NULL,v_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL,c_73 = NULL,d_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL;
  u_72 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      z_72 = ATgetArgument(t, 0);
      q_72 = ATgetArgument(t, 1);
      t_72 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  b_73 = t;
  t = q_72;
  t = foldr_3_0(b_9, d_9, i_9, t);
  v_72 = t;
  t = t_72;
  t = foldr_3_0(l_9, n_9, z_9, t);
  y_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_72, (ATerm) ATmakeAppl(sym__2, v_72, y_72));
  {
    ATerm b_30 = t;
    int c_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(c_30);
      }
    else
      {
        t = b_30;
        t = (ATerm) ATempty;
      }
  }
  d_73 = t;
  t = z_72;
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(e_30);
      }
    else
      {
        t = d_30;
        t = (ATerm) ATempty;
      }
  }
  c_73 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, v_72, y_72));
  h_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, v_72, y_72)), c_73);
  t = q_9(a_10, h_73, c_73, t);
  a_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_72, (ATerm) ATmakeAppl(sym__2, v_72, y_72));
  f_73 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_30, (ATerm) ATinsert(CheckATermList(d_73), u_72));
  g_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_72, (ATerm) ATmakeAppl(sym__2, v_72, y_72)), (ATerm) ATmakeAppl(sym_Defined_2, term_f_30, (ATerm) ATinsert(CheckATermList(d_73), u_72)));
  t = m_9(e_10, f_73, g_73, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_30, a_73);
  e_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_72, (ATerm) ATmakeAppl(sym_Defined_2, term_g_30, a_73));
  t = m_9(h_10, z_72, e_73, t);
  t = b_73;
  return(t);
}
static ATerm m_9 (ATerm h_125 (ATerm), ATerm c_71, ATerm a_71, ATerm t)
{
  ATerm q_73 = NULL,t_73 = NULL,x_73 = NULL,y_73 = NULL,z_73 = NULL,a_74 = NULL;
  y_73 = t;
  t = h_125(t);
  q_73 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_73, c_71, a_71);
  t = d_10(q_73, c_71, a_71, t);
  {
    ATerm h_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_74 = NULL;
        t = term_l_30;
        b_74 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_73, term_l_30);
        t = c_10(q_73, b_74, t);
        LocalPopChoice(i_30);
      }
    else
      {
        t = h_30;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_73 = ATgetFirst((ATermList) t);
      x_73 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_l_30;
  z_73 = t;
  t = (ATerm) ATinsert(CheckATermList(x_73), (ATerm) ATinsert(CheckATermList(t_73), c_71));
  a_74 = t;
  t = SSL_table_put(q_73, z_73, a_74);
  t = y_73;
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm o_74 = NULL;
  o_74 = t;
  {
    ATerm m_30 = t;
    int n_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_26 = NULL,c_27 = NULL;
        t = term_r_29;
        c_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_r_29, o_74);
        t = o_9(c_27, o_74, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm o_30 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_30) != ATmakeSymbol("o_0", 0, ATtrue)))
              _fail(t);
            v_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_26;
        LocalPopChoice(n_30);
      }
    else
      {
        t = m_30;
        {
          ATerm p_30 = t;
          int q_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_27 = NULL,o_27 = NULL;
              t = term_r_29;
              o_27 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_r_29, o_74);
              t = o_9(o_27, o_74, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm s_30 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) s_30) != ATmakeSymbol("j_0", 0, ATtrue)))
                    _fail(t);
                  l_27 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = l_27;
              LocalPopChoice(q_30);
            }
          else
            {
              t = p_30;
              {
                ATerm s_27 = NULL,w_27 = NULL;
                t = term_r_29;
                w_27 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_r_29, o_74);
                t = o_9(w_27, o_74, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm v_30 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) v_30) != ATmakeSymbol("f_0", 0, ATtrue)))
                      _fail(t);
                    s_27 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = s_27;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm o_9 (ATerm m_66, ATerm n_66, ATerm t)
{
  ATerm s_74 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_66, n_66);
  t = c_10(m_66, n_66, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_74 = ATgetFirst((ATermList) t);
      {
        ATerm w_30 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_74;
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm l_75 = NULL,n_75 = NULL;
  l_75 = t;
  if(match_cons(t, sym__2))
    {
      ATerm x_30 = ATgetArgument(t, 0);
      n_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_75;
  if(match_cons(t, sym__2))
    {
      ATerm y_30 = ATgetArgument(t, 0);
      ATerm z_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_31 = t;
    int c_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_28 = NULL,v_28 = NULL;
        t = term_q_29;
        v_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_29, l_75);
        t = o_9(v_28, l_75, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm d_31 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_31) != ATmakeSymbol("m_0", 0, ATtrue)))
              _fail(t);
            s_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_28;
        LocalPopChoice(c_31);
      }
    else
      {
        t = b_31;
        {
          ATerm e_31 = t;
          int f_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_28 = NULL,c_29 = NULL;
              t = term_q_29;
              c_29 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_q_29, l_75);
              t = o_9(c_29, l_75, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm g_31 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) g_31) != ATmakeSymbol("h_0", 0, ATtrue)))
                    _fail(t);
                  z_28 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = z_28;
              LocalPopChoice(f_31);
            }
          else
            {
              t = e_31;
              {
                ATerm g_29 = NULL,n_29 = NULL;
                t = term_q_29;
                n_29 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_q_29, l_75);
                t = o_9(n_29, l_75, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm i_31 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) i_31) != ATmakeSymbol("b_0", 0, ATtrue)))
                      _fail(t);
                    g_29 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = g_29;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm i_10 (ATerm t)
{
  t = term_a_19;
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm h_76 = NULL,i_76 = NULL;
  if(match_cons(t, sym__2))
    {
      h_76 = ATgetArgument(t, 0);
      i_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9(h_76, i_76, t);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  t = term_b_19;
  return(t);
}
static ATerm p_10 (ATerm t)
{
  t = term_a_19;
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm j_76 = NULL,k_76 = NULL;
  if(match_cons(t, sym__2))
    {
      j_76 = ATgetArgument(t, 0);
      k_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9(j_76, k_76, t);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  t = term_b_19;
  return(t);
}
static ATerm s_10 (ATerm t)
{
  ATerm l_76 = NULL;
  if(match_cons(t, sym__2))
    {
      l_76 = ATgetArgument(t, 0);
      if((l_76 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm t_10 (ATerm t)
{
  t = term_q_29;
  return(t);
}
static ATerm v_10 (ATerm t)
{
  t = term_r_29;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm t_75 = NULL,u_75 = NULL,v_75 = NULL,w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL,e_76 = NULL,f_76 = NULL,g_76 = NULL;
  v_75 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      y_75 = ATgetArgument(t, 0);
      t_75 = ATgetArgument(t, 1);
      u_75 = ATgetArgument(t, 2);
      {
        ATerm j_31 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  a_76 = t;
  t = t_75;
  t = foldr_3_0(i_10, j_10, l_10, t);
  w_75 = t;
  t = u_75;
  t = foldr_3_0(p_10, q_10, r_10, t);
  x_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_75, (ATerm) ATmakeAppl(sym__2, w_75, x_75));
  {
    ATerm k_31 = t;
    int l_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(l_31);
      }
    else
      {
        t = k_31;
        t = (ATerm) ATempty;
      }
  }
  c_76 = t;
  t = y_75;
  {
    ATerm m_31 = t;
    int n_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(n_31);
      }
    else
      {
        t = m_31;
        t = (ATerm) ATempty;
      }
  }
  b_76 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, w_75, x_75));
  g_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, w_75, x_75)), b_76);
  t = q_9(s_10, g_76, b_76, t);
  z_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_75, (ATerm) ATmakeAppl(sym__2, w_75, x_75));
  e_76 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_31, (ATerm) ATinsert(CheckATermList(c_76), v_75));
  f_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_75, (ATerm) ATmakeAppl(sym__2, w_75, x_75)), (ATerm) ATmakeAppl(sym_Defined_2, term_o_31, (ATerm) ATinsert(CheckATermList(c_76), v_75)));
  t = m_9(t_10, e_76, f_76, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_31, z_75);
  d_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_75, (ATerm) ATmakeAppl(sym_Defined_2, term_q_31, z_75));
  t = m_9(v_10, y_75, d_76, t);
  t = a_76;
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = term_a_19;
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm y_76 = NULL,z_76 = NULL;
  if(match_cons(t, sym__2))
    {
      y_76 = ATgetArgument(t, 0);
      z_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9(y_76, z_76, t);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  t = term_b_19;
  return(t);
}
static ATerm a_11 (ATerm t)
{
  t = term_a_19;
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm a_77 = NULL,b_77 = NULL;
  if(match_cons(t, sym__2))
    {
      a_77 = ATgetArgument(t, 0);
      b_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9(a_77, b_77, t);
  return(t);
}
static ATerm c_11 (ATerm t)
{
  t = term_b_19;
  return(t);
}
static ATerm d_11 (ATerm t)
{
  t = term_a_19;
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm h_77 = NULL,i_77 = NULL;
  if(match_cons(t, sym__2))
    {
      h_77 = ATgetArgument(t, 0);
      i_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9(h_77, i_77, t);
  return(t);
}
static ATerm f_11 (ATerm t)
{
  t = term_b_19;
  return(t);
}
static ATerm g_11 (ATerm t)
{
  t = term_a_19;
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm j_77 = NULL,k_77 = NULL;
  if(match_cons(t, sym__2))
    {
      j_77 = ATgetArgument(t, 0);
      k_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9(j_77, k_77, t);
  return(t);
}
static ATerm i_11 (ATerm t)
{
  t = term_b_19;
  return(t);
}
static ATerm k_11 (ATerm t)
{
  t = term_a_19;
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm r_77 = NULL,s_77 = NULL;
  if(match_cons(t, sym__2))
    {
      r_77 = ATgetArgument(t, 0);
      s_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9(r_77, s_77, t);
  return(t);
}
static ATerm m_11 (ATerm t)
{
  t = term_b_19;
  return(t);
}
static ATerm n_11 (ATerm t)
{
  t = term_a_19;
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm t_77 = NULL,u_77 = NULL;
  if(match_cons(t, sym__2))
    {
      t_77 = ATgetArgument(t, 0);
      u_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9(t_77, u_77, t);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  t = term_b_19;
  return(t);
}
ATerm DefinitionName_0_0 (ATerm t)
{
  ATerm n_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL;
  n_76 = t;
  {
    ATerm r_31 = t;
    int t_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_ExtSDefInl_4))
          {
            o_76 = ATgetArgument(t, 0);
            p_76 = ATgetArgument(t, 1);
            q_76 = ATgetArgument(t, 2);
            {
              ATerm u_31 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(t_31);
        {
          ATerm v_76 = NULL,w_76 = NULL;
          t = p_76;
          t = foldr_3_0(w_10, y_10, z_10, t);
          v_76 = t;
          t = q_76;
          t = foldr_3_0(a_11, b_11, c_11, t);
          w_76 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, o_76, (ATerm) ATmakeAppl(sym__2, v_76, w_76)));
        }
      }
    else
      {
        t = r_31;
        if(match_cons(t, sym_ExtSDef_3))
          {
            o_76 = ATgetArgument(t, 0);
            p_76 = ATgetArgument(t, 1);
            q_76 = ATgetArgument(t, 2);
            {
              ATerm f_77 = NULL,g_77 = NULL;
              t = p_76;
              t = foldr_3_0(d_11, e_11, f_11, t);
              f_77 = t;
              t = q_76;
              t = foldr_3_0(g_11, h_11, i_11, t);
              g_77 = t;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, o_76, (ATerm) ATmakeAppl(sym__2, f_77, g_77)));
            }
          }
        else
          {
            ATerm o_77 = NULL,p_77 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                o_76 = ATgetArgument(t, 0);
                p_76 = ATgetArgument(t, 1);
                q_76 = ATgetArgument(t, 2);
                {
                  ATerm y_31 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = p_76;
            t = foldr_3_0(k_11, l_11, m_11, t);
            o_77 = t;
            t = q_76;
            t = foldr_3_0(n_11, p_11, q_11, t);
            p_77 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, o_76, (ATerm) ATmakeAppl(sym__2, o_77, p_77)));
          }
      }
  }
  return(t);
}
static ATerm p_9 (ATerm s_112 (ATerm), ATerm t_112 (ATerm), ATerm v_58, ATerm u_58, ATerm t)
{
  t = t_112(t);
  {
    static ATerm s_11 (ATerm t)
    {
      ATerm v_77 = NULL;
      v_77 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_58, v_77);
      t = s_112(t);
      return(t);
    }
    t = fetch_1_0(s_11, t);
  }
  t = u_58;
  return(t);
}
static ATerm q_9 (ATerm p_112 (ATerm), ATerm r_58, ATerm q_58, ATerm t)
{
  static ATerm l_78 (ATerm t)
  {
    ATerm g_78 = NULL,h_78 = NULL,i_78 = NULL;
    g_78 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_58;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_78 = ATgetFirst((ATermList) t);
            i_78 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm z_31 = t;
          int a_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_78;
              {
                static ATerm t_11 (ATerm t)
                {
                  t = q_58;
                  return(t);
                }
                t = p_9(p_112, t_11, h_78, i_78, t);
              }
              t = l_78(t);
              LocalPopChoice(a_32);
            }
          else
            {
              t = z_31;
              {
                ATerm v_29 = NULL,y_29 = NULL,o_4 = NULL;
                t = SSLgetAnnotations(g_78);
                v_29 = t;
                t = i_78;
                t = l_78(t);
                y_29 = t;
                t = (ATerm) ATinsert(CheckATermList(y_29), h_78);
                o_4 = t;
                t = SSLsetAnnotations(o_4, v_29);
              }
            }
        }
      }
    return(t);
  }
  t = r_58;
  t = l_78(t);
  return(t);
}
ATerm foldr_3_0 (ATerm z_114 (ATerm), ATerm a_115 (ATerm), ATerm b_115 (ATerm), ATerm t)
{
  ATerm o_78 = NULL,p_78 = NULL,q_78 = NULL;
  o_78 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_78;
      t = z_114(t);
    }
  else
    {
      ATerm t_78 = NULL,u_78 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_78 = ATgetFirst((ATermList) t);
          q_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_78;
      t = b_115(t);
      t_78 = t;
      t = q_78;
      t = foldr_3_0(z_114, a_115, b_115, t);
      u_78 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_78, u_78);
      t = a_115(t);
    }
  return(t);
}
static ATerm u_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm y_78 = NULL,z_78 = NULL;
  if(match_cons(t, sym__2))
    {
      y_78 = ATgetArgument(t, 0);
      z_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_9(x_11, y_78, z_78, t);
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm a_79 = NULL;
  if(match_cons(t, sym__2))
    {
      a_79 = ATgetArgument(t, 0);
      if((a_79 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm b_32 = t;
  int c_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RegisterSDefT_0_0(t);
      LocalPopChoice(c_32);
    }
  else
    {
      t = b_32;
      {
        ATerm e_32 = t;
        int f_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RegisterExtSDef_0_0(t);
            LocalPopChoice(f_32);
          }
        else
          {
            t = e_32;
            t = RegisterExtSDefInl_0_0(t);
          }
      }
    }
  return(t);
}
ATerm all_defs_0_0 (ATerm t)
{
  ATerm v_78 = NULL,w_78 = NULL,x_78 = NULL;
  x_78 = t;
  t = foldr_3_0(u_11, w_11, DefinitionName_0_0, t);
  v_78 = t;
  t = x_78;
  t = map_1_0(a_12, t);
  w_78 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_78, w_78, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm q_79 (ATerm), ATerm r_79 (ATerm), ATerm t)
{
  ATerm b_79 = NULL,c_79 = NULL,d_79 = NULL,e_79 = NULL,f_79 = NULL,g_79 = NULL,r_4 = NULL;
  g_79 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_79 = ATgetFirst((ATermList) t);
      d_79 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_79);
  b_79 = t;
  t = c_79;
  t = q_79(t);
  e_79 = t;
  t = d_79;
  t = r_79(t);
  f_79 = t;
  t = (ATerm) ATinsert(CheckATermList(f_79), e_79);
  r_4 = t;
  t = SSLsetAnnotations(r_4, b_79);
  return(t);
}
static ATerm r_9 (ATerm l_41, ATerm m_41, ATerm t)
{
  ATerm h_79 = NULL;
  t = SSL_fputc(l_41, m_41);
  h_79 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_79);
  return(t);
}
static ATerm s_9 (ATerm g_40, ATerm h_40, ATerm t)
{
  ATerm i_79 = NULL;
  t = SSL_write_term_to_stream_text(g_40, h_40);
  i_79 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_79);
  return(t);
}
static ATerm u_9 (ATerm f_101 (ATerm), ATerm i_275, ATerm k_40, ATerm t)
{
  ATerm j_79 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_275, term_h_32);
  t = x_9(t);
  j_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_79, k_40);
  t = f_101(t);
  t = fclose_0_0(t);
  t = k_40;
  return(t);
}
static ATerm t_9 (ATerm c_40, ATerm d_40, ATerm t)
{
  ATerm k_79 = NULL;
  t = SSL_write_term_to_stream_baf(c_40, d_40);
  k_79 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_79);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm n_79 = NULL,o_79 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_32 = ATgetArgument(t, 0);
      if(match_cons(i_32, sym_Stream_1))
        {
          n_79 = ATgetArgument(i_32, 0);
        }
      else
        _fail(t);
      o_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_9(n_79, o_79, t);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm p_79 = NULL,s_79 = NULL,t_79 = NULL,u_79 = NULL,v_79 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_32 = ATgetArgument(t, 0);
      if(match_cons(j_32, sym_Stream_1))
        {
          u_79 = ATgetArgument(j_32, 0);
        }
      else
        _fail(t);
      v_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_9(u_79, v_79, t);
  p_79 = t;
  t = term_k_32;
  s_79 = t;
  t = p_79;
  if(match_cons(t, sym_Stream_1))
    {
      t_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_k_32, p_79);
  t = r_9(s_79, t_79, t);
  return(t);
}
ATerm output_1_0 (ATerm w_120 (ATerm), ATerm t)
{
  ATerm l_79 = NULL,m_79 = NULL;
  t = w_120(t);
  m_79 = t;
  {
    ATerm l_32 = t;
    int m_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_32;
        t = get_config_0_0(t);
        LocalPopChoice(m_32);
      }
    else
      {
        t = l_32;
        t = term_p_32;
      }
  }
  l_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_79, m_79);
  {
    ATerm r_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_32;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, l_79, m_79);
        LocalPopChoice(u_32);
        if(match_cons(t, sym__2))
          {
            ATerm w_32 = ATgetArgument(t, 0);
            ATerm x_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_9(b_12, l_79, m_79, t);
      }
    else
      {
        t = r_32;
        if(match_cons(t, sym__2))
          {
            ATerm y_32 = ATgetArgument(t, 0);
            ATerm z_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_9(c_12, l_79, m_79, t);
      }
  }
  return(t);
}
static ATerm j_80 (ATerm d_80, ATerm t)
{
  t = SSL_fclose(d_80);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_80 = NULL,h_80 = NULL;
  h_80 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_80 = ATgetArgument(t, 0);
      {
        ATerm b_33 = t;
        int c_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_80);
            LocalPopChoice(c_33);
          }
        else
          {
            t = b_33;
            t = j_80(h_80, t);
          }
      }
    }
  else
    {
      t = j_80(h_80, t);
    }
  return(t);
}
static ATerm v_9 (ATerm i_40, ATerm t)
{
  t = SSL_read_term_from_stream(i_40);
  return(t);
}
static ATerm w_9 (ATerm n_41, ATerm o_41, ATerm t)
{
  ATerm k_80 = NULL;
  t = SSL_fopen(n_41, o_41);
  k_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_80);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_80 = NULL;
  t = SSL_stdin_stream();
  l_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_80);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_80 = NULL;
  t = SSL_stdout_stream();
  m_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_80);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_80 = NULL;
  t = SSL_stderr_stream();
  n_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_80);
  return(t);
}
static ATerm u_81 (ATerm t_80, ATerm t)
{
  ATerm u_80 = NULL;
  t = SSL_explode_term(t_80);
  if(match_cons(t, sym__2))
    {
      ATerm d_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_33 = ATgetArgument(t, 1);
        if(((ATgetType(e_33) == AT_LIST) && !(ATisEmpty(e_33))))
          {
            u_80 = ATgetFirst((ATermList) e_33);
            {
              ATerm f_33 = (ATerm) ATgetNext((ATermList) e_33);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_80;
  if(match_cons(t, sym_stderr_0))
    {
      t = u_80;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_80;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_80;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm v_81 (ATerm x_80, ATerm y_80, ATerm z_80, ATerm t)
{
  ATerm a_81 = NULL,b_81 = NULL,c_81 = NULL,f_81 = NULL,i_5 = NULL;
  t = SSLgetAnnotations(z_80);
  c_81 = t;
  t = x_80;
  if(match_cons(t, sym_Path_1))
    {
      f_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_81, y_80);
  i_5 = t;
  t = SSLsetAnnotations(i_5, c_81);
  if(match_cons(t, sym__2))
    {
      a_81 = ATgetArgument(t, 0);
      b_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9(a_81, b_81, t);
  return(t);
}
static ATerm w_81 (ATerm h_81, ATerm i_81, ATerm j_81, ATerm t)
{
  ATerm k_81 = NULL,l_81 = NULL,m_81 = NULL,p_81 = NULL,q_5 = NULL;
  t = SSLgetAnnotations(j_81);
  m_81 = t;
  t = SSL_is_string(h_81);
  p_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_81, i_81);
  q_5 = t;
  t = SSLsetAnnotations(q_5, m_81);
  if(match_cons(t, sym__2))
    {
      k_81 = ATgetArgument(t, 0);
      l_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9(k_81, l_81, t);
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm r_81 = NULL,s_81 = NULL,t_81 = NULL;
  r_81 = t;
  if(match_cons(t, sym__2))
    {
      s_81 = ATgetArgument(t, 0);
      t_81 = ATgetArgument(t, 1);
      {
        ATerm g_33 = t;
        int h_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_81(r_81, t);
            LocalPopChoice(h_33);
          }
        else
          {
            t = g_33;
            {
              ATerm i_33 = t;
              int j_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_81(s_81, t_81, r_81, t);
                  LocalPopChoice(j_33);
                }
              else
                {
                  t = i_33;
                  t = w_81(s_81, t_81, r_81, t);
                }
            }
          }
      }
    }
  else
    {
      t = u_81(r_81, t);
    }
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = term_l_33;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_81 = NULL,y_81 = NULL,z_81 = NULL;
  ATerm m_33 = t;
  int n_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_82 = NULL;
      a_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_82, term_o_33);
      t = x_9(t);
      LocalPopChoice(n_33);
    }
  else
    {
      t = m_33;
      t = debug_1_0(d_12, t);
      _fail(t);
    }
  y_81 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_9(z_81, t);
  x_81 = t;
  t = y_81;
  t = fclose_0_0(t);
  t = x_81;
  return(t);
}
ATerm input_1_0 (ATerm x_120 (ATerm), ATerm t)
{
  ATerm p_33 = t;
  int q_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_33;
      t = get_config_0_0(t);
      LocalPopChoice(q_33);
    }
  else
    {
      t = p_33;
      t = term_s_33;
    }
  t = ReadFromFile_0_0(t);
  t = x_120(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_82 = NULL,d_82 = NULL,e_82 = NULL,f_82 = NULL,g_82 = NULL;
  c_82 = t;
  t = term_u_25;
  t = whoami_0_0(t);
  d_82 = t;
  t = term_d_13;
  f_82 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_34), d_82), term_w_33);
  g_82 = t;
  t = SSL_printnl(f_82, g_82);
  t = term_b_19;
  e_82 = t;
  t = SSL_exit(e_82);
  t = c_82;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm i_82 = NULL;
  i_82 = t;
  if(match_string(t, "-k"))
    {
      t = i_82;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = i_82;
    }
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm j_82 = NULL,k_82 = NULL,l_82 = NULL;
  j_82 = t;
  t = SSL_string_to_int(j_82);
  k_82 = t;
  t = term_b_34;
  l_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_34, k_82);
  t = f_10(l_82, k_82, t);
  t = j_82;
  return(t);
}
static ATerm h_12 (ATerm t)
{
  t = term_c_34;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_12, g_12, h_12, t);
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm n_82 = NULL;
  n_82 = t;
  if(match_string(t, "-S"))
    {
      t = n_82;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_82;
    }
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm o_82 = NULL,p_82 = NULL;
  t = term_e_34;
  o_82 = t;
  t = term_a_19;
  p_82 = t;
  t = term_f_34;
  t = f_10(o_82, p_82, t);
  t = term_g_34;
  return(t);
}
static ATerm s_12 (ATerm t)
{
  t = term_h_34;
  return(t);
}
static ATerm t_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  ATerm q_82 = NULL,r_82 = NULL,s_82 = NULL;
  q_82 = t;
  t = SSL_string_to_int(q_82);
  r_82 = t;
  t = term_e_34;
  s_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_34, r_82);
  t = f_10(s_82, r_82, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, q_82);
  return(t);
}
static ATerm v_12 (ATerm t)
{
  t = term_j_34;
  return(t);
}
static ATerm w_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm t_82 = NULL,u_82 = NULL;
  t = term_m_34;
  t_82 = t;
  t = term_u_25;
  u_82 = t;
  t = term_o_34;
  t = f_10(t_82, u_82, t);
  t = term_p_34;
  return(t);
}
static ATerm y_12 (ATerm t)
{
  t = term_q_34;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_34 = t;
  int w_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_12, r_12, s_12, t);
      LocalPopChoice(w_34);
    }
  else
    {
      t = u_34;
      {
        ATerm x_34 = t;
        int y_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(t_12, u_12, v_12, t);
            LocalPopChoice(y_34);
          }
        else
          {
            t = x_34;
            t = Option_3_0(w_12, x_12, y_12, t);
          }
      }
    }
  return(t);
}
static ATerm f_10 (ATerm d_45, ATerm e_45, ATerm t)
{
  ATerm v_82 = NULL;
  t = term_a_35;
  v_82 = t;
  t = SSL_table_put(v_82, d_45, e_45);
  t = (ATerm) ATmakeAppl(sym__3, term_a_35, d_45, e_45);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm y_82 = NULL,z_82 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_83 = NULL,b_83 = NULL,c_83 = NULL;
      t = term_u_25;
      t = e_0(t);
      a_83 = t;
      t = term_b_35;
      b_83 = t;
      t = term_c_35;
      c_83 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_35, term_c_35, a_83);
      t = d_10(b_83, c_83, a_83, t);
      _fail(t);
    }
  else
    {
      ATerm f_83 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_82 = ATgetFirst((ATermList) t);
          z_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_82;
      t = c_0(t);
      t = term_u_25;
      t = d_0(t);
      f_83 = t;
      t = (ATerm) ATinsert(CheckATermList(z_82), f_83);
    }
  return(t);
}
static ATerm z_12 (ATerm t)
{
  ATerm h_83 = NULL;
  h_83 = t;
  if(match_string(t, "-o"))
    {
      t = h_83;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_83;
    }
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm i_83 = NULL,j_83 = NULL;
  i_83 = t;
  t = term_n_32;
  j_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_32, i_83);
  t = f_10(j_83, i_83, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_83);
  return(t);
}
static ATerm b_13 (ATerm t)
{
  t = term_d_35;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_12, a_13, b_13, t);
  return(t);
}
static ATerm d_10 (ATerm b_66, ATerm c_66, ATerm a_66, ATerm t)
{
  ATerm l_83 = NULL,m_83 = NULL,n_83 = NULL;
  l_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_66, c_66);
  {
    ATerm e_35 = t;
    int f_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_35 = ATgetArgument(t, 0);
            ATerm h_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_66, c_66);
        t = c_10(b_66, c_66, t);
        LocalPopChoice(f_35);
      }
    else
      {
        t = e_35;
        t = (ATerm) ATempty;
      }
  }
  m_83 = t;
  t = (ATerm) ATinsert(CheckATermList(m_83), a_66);
  n_83 = t;
  t = SSL_table_put(b_66, c_66, n_83);
  t = l_83;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm u_83 = NULL,v_83 = NULL,w_83 = NULL,x_83 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_83 = NULL,z_83 = NULL,a_84 = NULL;
      t = term_u_25;
      t = n_0(t);
      y_83 = t;
      t = term_b_35;
      z_83 = t;
      t = term_c_35;
      a_84 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_35, term_c_35, y_83);
      t = d_10(z_83, a_84, y_83, t);
      _fail(t);
    }
  else
    {
      ATerm e_84 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_83 = ATgetFirst((ATermList) t);
          v_83 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_83;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_83 = ATgetFirst((ATermList) t);
          x_83 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_83;
      t = k_0(t);
      t = w_83;
      t = l_0(t);
      e_84 = t;
      t = (ATerm) ATinsert(CheckATermList(x_83), e_84);
    }
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm g_84 = NULL;
  g_84 = t;
  if(match_string(t, "-i"))
    {
      t = g_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_84;
    }
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm h_84 = NULL,i_84 = NULL;
  h_84 = t;
  t = term_r_33;
  i_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_33, h_84);
  t = f_10(i_84, h_84, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_84);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  t = term_i_35;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_13, e_13, f_13, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_84 = NULL,k_84 = NULL,l_84 = NULL,m_84 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_25;
  t = whoami_0_0(t);
  j_84 = t;
  t = term_d_13;
  l_84 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_35), j_84);
  m_84 = t;
  t = SSL_printnl(l_84, m_84);
  t = term_b_19;
  k_84 = t;
  t = SSL_exit(k_84);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_k_35;
  t = get_config_0_0(t);
  return(t);
}
static ATerm y_9 (ATerm a_48, ATerm b_48, ATerm t)
{
  ATerm m_35 = t;
  int n_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_48, b_48);
      LocalPopChoice(n_35);
    }
  else
    {
      t = m_35;
      t = SSL_addr(a_48, b_48);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm x_114 (ATerm), ATerm y_114 (ATerm), ATerm t)
{
  ATerm o_84 = NULL,p_84 = NULL,q_84 = NULL;
  o_84 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_84;
      t = x_114(t);
    }
  else
    {
      ATerm t_84 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_84 = ATgetFirst((ATermList) t);
          q_84 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_84;
      t = foldr_2_0(x_114, y_114, t);
      t_84 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_84, t_84);
      t = y_114(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm g_13 (ATerm t)
{
  t = term_a_19;
  return(t);
}
static ATerm h_13 (ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL;
  if(match_cons(t, sym__2))
    {
      t_30 = ATgetArgument(t, 0);
      u_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9(t_30, u_30, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_84 = NULL,j_30 = NULL,k_30 = NULL;
  t = times_0_0(t);
  k_30 = t;
  t = SSL_explode_term(k_30);
  if(match_cons(t, sym__2))
    {
      ATerm o_35 = ATgetArgument(t, 0);
      j_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_30;
  t = foldr_2_0(g_13, h_13, t);
  w_84 = t;
  t = SSL_TicksToSeconds(w_84);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_85 = NULL,i_85 = NULL,j_85 = NULL;
  h_85 = t;
  if(match_cons(t, sym__2))
    {
      i_85 = ATgetArgument(t, 0);
      j_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_35 = t;
    int s_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_85;
        if((i_85 != t))
          {
            _fail(t);
          }
        t = h_85;
        LocalPopChoice(s_35);
      }
    else
      {
        t = q_35;
        t = (ATerm) ATmakeAppl(sym__2, i_85, j_85);
        {
          ATerm t_35 = t;
          int u_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(i_85, j_85);
              LocalPopChoice(u_35);
            }
          else
            {
              t = t_35;
              t = SSL_gtr(i_85, j_85);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, i_85, j_85);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_102 (ATerm), ATerm t)
{
  ATerm n_85 = NULL;
  n_85 = t;
  {
    ATerm v_35 = t;
    int w_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_85 = NULL;
        t = term_e_34;
        t = get_config_0_0(t);
        p_85 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_85, term_b_19);
        t = geq_0_0(t);
        t = n_85;
        t = v_102(t);
        LocalPopChoice(w_35);
      }
    else
      {
        t = v_35;
        t = n_85;
      }
  }
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm r_85 = NULL,s_85 = NULL,u_85 = NULL,v_85 = NULL;
  t = run_time_0_0(t);
  r_85 = t;
  t = term_u_25;
  t = whoami_0_0(t);
  s_85 = t;
  t = term_d_13;
  u_85 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_36), r_85), term_z_35), s_85);
  v_85 = t;
  t = SSL_printnl(u_85, v_85);
  t = (ATerm) ATmakeAppl(sym__2, term_d_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_36), r_85), term_z_35), s_85));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(j_13, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm w_85 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_19;
  w_85 = t;
  t = SSL_exit(w_85);
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm e_86 = NULL,f_86 = NULL;
  f_86 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = f_86;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          e_86 = ATgetArgument(t, 0);
          {
            ATerm h_31 = NULL,f_6 = NULL;
            t = SSLgetAnnotations(f_86);
            h_31 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, e_86);
            f_6 = t;
            t = SSLsetAnnotations(f_6, h_31);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = f_86;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm n_120 (ATerm), ATerm t)
{
  ATerm b_36 = t;
  int c_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_36;
      t = get_config_0_0(t);
      LocalPopChoice(c_36);
    }
  else
    {
      t = b_36;
      t = fetch_1_0(k_13, t);
    }
  t = n_120(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm i_86 = NULL,j_86 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_86 = ATgetFirst((ATermList) t);
      j_86 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_86 = NULL,o_86 = NULL;
        static ATerm l_13 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(n_86)), not_null(o_86));
          return(t);
        }
        t = j_86;
        t = i_0(t);
        if(((n_86 != NULL) && (n_86 != t)))
          _fail(t);
        else
          n_86 = t;
        t = i_86;
        t = g_0(t);
        if(((o_86 != NULL) && (o_86 != t)))
          _fail(t);
        else
          o_86 = t;
        t = j_86;
        t = reverse_acc_2_0(g_0, l_13, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_25;
      t = i_0(t);
    }
  return(t);
}
static ATerm m_13 (ATerm t)
{
  ATerm s_86 = NULL,t_86 = NULL,u_86 = NULL,i_6 = NULL;
  u_86 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_86);
  s_86 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_86);
  i_6 = t;
  t = SSLsetAnnotations(i_6, s_86);
  return(t);
}
static ATerm o_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_13 (ATerm t)
{
  ATerm w_86 = NULL;
  w_86 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_86), term_e_36);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_86 = NULL,r_86 = NULL;
  ATerm f_36 = t;
  int g_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_35;
      t = get_config_0_0(t);
      LocalPopChoice(g_36);
    }
  else
    {
      t = f_36;
      t = fetch_1_0(m_13, t);
    }
  t = term_h_36;
  t = echo_0_0(t);
  t = term_b_35;
  q_86 = t;
  t = term_c_35;
  r_86 = t;
  t = term_i_36;
  t = c_10(q_86, r_86, t);
  t = reverse_acc_2_0(_id, o_13, t);
  t = map_1_0(p_13, t);
  return(t);
}
ATerm fetch_1_0 (ATerm y_105 (ATerm), ATerm t)
{
  static ATerm t_87 (ATerm t)
  {
    ATerm q_87 = NULL,r_87 = NULL,s_87 = NULL;
    q_87 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_87 = ATgetFirst((ATermList) t);
        s_87 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_36 = t;
      int k_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_31 = NULL,s_31 = NULL,k_6 = NULL;
          t = SSLgetAnnotations(q_87);
          p_31 = t;
          t = r_87;
          t = y_105(t);
          s_31 = t;
          t = (ATerm) ATinsert(CheckATermList(s_87), s_31);
          k_6 = t;
          t = SSLsetAnnotations(k_6, p_31);
          LocalPopChoice(k_36);
        }
      else
        {
          t = j_36;
          {
            ATerm d_32 = NULL,g_32 = NULL,l_6 = NULL;
            t = SSLgetAnnotations(q_87);
            d_32 = t;
            t = s_87;
            t = t_87(t);
            g_32 = t;
            t = (ATerm) ATinsert(CheckATermList(g_32), r_87);
            l_6 = t;
            t = SSLsetAnnotations(l_6, d_32);
          }
        }
    }
    return(t);
  }
  t = t_87(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_87 = NULL,y_87 = NULL,z_87 = NULL;
  x_87 = t;
  {
    ATerm l_36 = t;
    int m_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_87;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_36 = ATgetFirst((ATermList) t);
                ATerm o_36 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_87;
          }
        LocalPopChoice(m_36);
      }
    else
      {
        t = l_36;
        t = (ATerm) ATinsert(ATempty, x_87);
      }
  }
  y_87 = t;
  t = term_p_32;
  z_87 = t;
  t = SSL_printnl(z_87, y_87);
  t = x_87;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_k_35;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm b_10 (ATerm g_58, ATerm h_58, ATerm t)
{
  t = SSL_strcat(g_58, h_58);
  return(t);
}
ATerm debug_1_0 (ATerm d_101 (ATerm), ATerm t)
{
  ATerm d_88 = NULL,e_88 = NULL,f_88 = NULL,g_88 = NULL;
  d_88 = t;
  t = d_101(t);
  e_88 = t;
  t = term_d_13;
  f_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_88), e_88);
  g_88 = t;
  t = SSL_printnl(f_88, g_88);
  t = d_88;
  return(t);
}
ATerm map_1_0 (ATerm o_105 (ATerm), ATerm t)
{
  static ATerm v_88 (ATerm t)
  {
    ATerm s_88 = NULL,t_88 = NULL,u_88 = NULL;
    s_88 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_88;
      }
    else
      {
        ATerm o_32 = NULL,s_32 = NULL,t_32 = NULL,y_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_88 = ATgetFirst((ATermList) t);
            u_88 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_88);
        o_32 = t;
        t = t_88;
        t = o_105(t);
        s_32 = t;
        t = u_88;
        t = v_88(t);
        t_32 = t;
        t = (ATerm) ATinsert(CheckATermList(t_32), s_32);
        y_7 = t;
        t = SSLsetAnnotations(y_7, o_32);
      }
    return(t);
  }
  t = v_88(t);
  return(t);
}
static ATerm v_13 (ATerm t)
{
  ATerm p_36 = t;
  int q_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(q_36);
    }
  else
    {
      t = p_36;
    }
  return(t);
}
static ATerm w_13 (ATerm t)
{
  t = term_r_36;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm s_36 = t;
  int t_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_89 = NULL;
      d_89 = t;
      t = SSL_is_string(d_89);
      LocalPopChoice(t_36);
    }
  else
    {
      t = s_36;
      {
        ATerm u_36 = t;
        int v_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(v_13, t);
            LocalPopChoice(v_36);
          }
        else
          {
            t = u_36;
            {
              ATerm j_89 = NULL,k_89 = NULL,l_89 = NULL;
              j_89 = t;
              if(match_cons(t, sym_Path_1))
                {
                  k_89 = ATgetArgument(t, 0);
                  t = k_89;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      k_89 = ATgetArgument(t, 0);
                      t = k_89;
                      {
                        ATerm w_36 = t;
                        int x_36 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(x_36);
                          }
                        else
                          {
                            t = w_36;
                            t = debug_1_0(w_13, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm p_89 = NULL,q_89 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          k_89 = ATgetArgument(t, 0);
                          l_89 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = k_89;
                      t = eval_config_0_0(t);
                      p_89 = t;
                      t = l_89;
                      t = eval_config_0_0(t);
                      q_89 = t;
                      t = (ATerm) ATmakeAppl(sym__2, p_89, q_89);
                      t = b_10(p_89, q_89, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_10 (ATerm s_67, ATerm t_67, ATerm t)
{
  t = SSL_table_get(s_67, t_67);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm u_89 = NULL,v_89 = NULL;
  u_89 = t;
  t = term_a_35;
  v_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_35, u_89);
  t = c_10(v_89, u_89, t);
  {
    ATerm y_36 = t;
    int z_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_89 = NULL,x_89 = NULL;
        t = eval_config_0_0(t);
        w_89 = t;
        t = term_a_35;
        x_89 = t;
        t = SSL_table_put(x_89, u_89, w_89);
        t = w_89;
        LocalPopChoice(z_36);
      }
    else
      {
        t = y_36;
      }
  }
  return(t);
}
static ATerm x_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm a_90 = NULL,b_90 = NULL;
  t = term_a_37;
  a_90 = t;
  t = term_u_25;
  b_90 = t;
  t = term_b_37;
  t = f_10(a_90, b_90, t);
  return(t);
}
static ATerm c_14 (ATerm t)
{
  t = term_c_37;
  return(t);
}
static ATerm d_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_14 (ATerm t)
{
  ATerm c_90 = NULL,d_90 = NULL,e_90 = NULL,f_90 = NULL;
  t = term_a_37;
  e_90 = t;
  t = term_u_25;
  f_90 = t;
  t = term_b_37;
  t = f_10(e_90, f_90, t);
  t = term_d_37;
  c_90 = t;
  t = term_u_25;
  d_90 = t;
  t = term_e_37;
  t = f_10(c_90, d_90, t);
  t = term_f_37;
  return(t);
}
static ATerm j_14 (ATerm t)
{
  t = term_h_37;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_37 = t;
  int p_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_13, y_13, c_14, t);
      LocalPopChoice(p_37);
    }
  else
    {
      t = o_37;
      t = Option_3_0(d_14, f_14, j_14, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_122 (ATerm), ATerm t)
{
  ATerm k_90 = NULL,l_90 = NULL,m_90 = NULL,n_90 = NULL,p_90 = NULL,q_90 = NULL,c_8 = NULL;
  k_90 = t;
  {
    ATerm r_37 = t;
    int t_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_37;
        t = q_122(t);
        LocalPopChoice(t_37);
      }
    else
      {
        t = r_37;
      }
  }
  t = k_90;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_90 = ATgetFirst((ATermList) t);
      n_90 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_90);
  l_90 = t;
  t = term_k_35;
  q_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_35, m_90);
  t = f_10(q_90, m_90, t);
  t = n_90;
  {
    static ATerm a_91 (ATerm t)
    {
      ATerm z_37 = t;
      int a_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_38 = t;
          int c_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_90 = NULL;
              t_90 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = t_90;
              LocalPopChoice(c_38);
            }
          else
            {
              t = b_38;
              t = q_122(t);
              t = Cons_2_0(_id, a_91, t);
            }
          LocalPopChoice(a_38);
        }
      else
        {
          t = z_37;
          {
            ATerm w_90 = NULL,x_90 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_90 = ATgetFirst((ATermList) t);
                x_90 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(x_90), (ATerm) ATmakeAppl(sym_Undefined_1, w_90));
          }
        }
      return(t);
    }
    t = a_91(t);
  }
  p_90 = t;
  t = (ATerm) ATinsert(CheckATermList(p_90), (ATerm) ATmakeAppl(sym_Program_1, m_90));
  c_8 = t;
  t = SSLsetAnnotations(c_8, l_90);
  return(t);
}
static ATerm n_14 (ATerm t)
{
  ATerm m_91 = NULL;
  m_91 = t;
  if(match_string(t, "--help"))
    {
      t = m_91;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_91;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_91;
        }
    }
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm n_91 = NULL,o_91 = NULL;
  t = term_d_36;
  n_91 = t;
  t = term_u_25;
  o_91 = t;
  t = term_n_38;
  t = f_10(n_91, o_91, t);
  t = term_o_38;
  return(t);
}
static ATerm p_14 (ATerm t)
{
  t = term_p_38;
  return(t);
}
static ATerm q_14 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_122 (ATerm), ATerm t)
{
  ATerm f_91 = NULL,g_91 = NULL,h_91 = NULL,i_91 = NULL,j_91 = NULL,k_91 = NULL,l_91 = NULL;
  h_91 = t;
  t = term_b_35;
  j_91 = t;
  t = term_c_35;
  k_91 = t;
  t = (ATerm) ATempty;
  l_91 = t;
  t = SSL_table_put(j_91, k_91, l_91);
  t = h_91;
  {
    static ATerm m_14 (ATerm t)
    {
      ATerm q_38 = t;
      int s_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_122(t);
          LocalPopChoice(s_38);
        }
      else
        {
          t = q_38;
          {
            ATerm t_38 = t;
            int u_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_14, o_14, p_14, t);
                LocalPopChoice(u_38);
              }
            else
              {
                t = t_38;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_14, t);
  }
  {
    ATerm v_38 = t;
    int w_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_91 = NULL;
        v_91 = t;
        {
          ATerm x_38 = t;
          int y_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_33 = NULL;
              t = v_91;
              {
                ATerm z_38 = t;
                int a_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_d_36;
                    t = get_config_0_0(t);
                    LocalPopChoice(a_39);
                  }
                else
                  {
                    t = z_38;
                    t = fetch_1_0(q_14, t);
                  }
              }
              t = v_91;
              t = default_system_usage_0_0(t);
              t = term_a_19;
              k_33 = t;
              t = SSL_exit(k_33);
              LocalPopChoice(y_38);
            }
          else
            {
              t = x_38;
              {
                ATerm v_33 = NULL;
                t = term_a_37;
                t = get_config_0_0(t);
                t = v_91;
                t = default_system_about_0_0(t);
                t = term_a_19;
                v_33 = t;
                t = SSL_exit(v_33);
              }
            }
        }
        LocalPopChoice(w_38);
      }
    else
      {
        t = v_38;
        {
          ATerm c_39 = t;
          int d_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_91 = NULL,x_91 = NULL,y_91 = NULL;
              static ATerm s_14 (ATerm t)
              {
                ATerm z_91 = NULL,c_92 = NULL,d_92 = NULL,a_9 = NULL;
                d_92 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    c_92 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(d_92);
                z_91 = t;
                t = c_92;
                if(((f_91 != NULL) && (f_91 != t)))
                  _fail(t);
                else
                  f_91 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, c_92);
                a_9 = t;
                t = SSLsetAnnotations(a_9, z_91);
                return(t);
              }
              t = fetch_1_0(s_14, t);
              t = term_d_13;
              x_91 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_91)), term_e_39);
              y_91 = t;
              t = SSL_printnl(x_91, y_91);
              t = (ATerm) ATmakeAppl(sym__2, term_d_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_91)), term_e_39));
              t = default_system_usage_0_0(t);
              t = term_b_19;
              w_91 = t;
              t = SSL_exit(w_91);
              LocalPopChoice(d_39);
            }
          else
            {
              t = c_39;
            }
        }
      }
  }
  g_91 = t;
  t = term_b_35;
  i_91 = t;
  t = SSL_table_destroy(i_91);
  t = g_91;
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_120 (ATerm), ATerm q_120 (ATerm), ATerm r_120 (ATerm), ATerm s_120 (ATerm), ATerm t)
{
  ATerm i_92 = NULL,j_92 = NULL,k_92 = NULL,l_92 = NULL;
  t = parse_options_1_0(p_120, t);
  i_92 = t;
  t = term_g_39;
  l_92 = t;
  t = SSL_table_create(l_92);
  t = term_g_39;
  j_92 = t;
  t = term_h_39;
  k_92 = t;
  t = SSL_table_put(j_92, k_92, i_92);
  t = i_92;
  t = r_120(t);
  {
    ATerm i_39 = t;
    int j_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_120, t);
        LocalPopChoice(j_39);
      }
    else
      {
        t = i_39;
        {
          ATerm p_39 = t;
          int r_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_120(t);
              t = report_success_0_0(t);
              LocalPopChoice(r_39);
            }
          else
            {
              t = p_39;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm t_14 (ATerm t)
{
  ATerm s_39 = t;
  int t_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(t_39);
    }
  else
    {
      t = s_39;
      {
        ATerm u_39 = t;
        int v_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(v_39);
          }
        else
          {
            t = u_39;
            {
              ATerm w_39 = t;
              int x_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(w_14, x_14, y_14, t);
                  LocalPopChoice(x_39);
                }
              else
                {
                  t = w_39;
                  {
                    ATerm y_39 = t;
                    int z_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(z_39);
                      }
                    else
                      {
                        t = y_39;
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
static ATerm u_14 (ATerm t)
{
  t = input_1_0(z_14, t);
  return(t);
}
static ATerm w_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_14 (ATerm t)
{
  ATerm n_92 = NULL,o_92 = NULL;
  t = term_v_32;
  n_92 = t;
  t = term_u_25;
  o_92 = t;
  t = term_a_40;
  t = f_10(n_92, o_92, t);
  t = term_b_40;
  return(t);
}
static ATerm y_14 (ATerm t)
{
  t = term_e_40;
  return(t);
}
static ATerm z_14 (ATerm t)
{
  t = output_1_0(a_15, t);
  return(t);
}
static ATerm a_15 (ATerm t)
{
  ATerm q_92 = NULL,r_92 = NULL,s_92 = NULL,t_92 = NULL,u_92 = NULL,v_92 = NULL,w_92 = NULL,x_92 = NULL,o_10 = NULL,n_10 = NULL;
  x_92 = t;
  if(match_cons(t, sym_Specification_1))
    {
      r_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_92);
  q_92 = t;
  t = r_92;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_92 = ATgetFirst((ATermList) t);
      u_92 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_92);
  s_92 = t;
  t = u_92;
  t = Cons_2_0(b_15, c_15, t);
  v_92 = t;
  t = (ATerm) ATinsert(CheckATermList(v_92), t_92);
  n_10 = t;
  t = SSLsetAnnotations(n_10, s_92);
  w_92 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, w_92);
  o_10 = t;
  t = SSLsetAnnotations(o_10, q_92);
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm y_92 = NULL,z_92 = NULL,d_93 = NULL,g_93 = NULL,e_9 = NULL;
  g_93 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      z_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_93);
  y_92 = t;
  t = z_92;
  t = all_defs_0_0(t);
  d_93 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, d_93);
  e_9 = t;
  t = SSLsetAnnotations(e_9, y_92);
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
  t = option_wrap_4_0(t_14, default_usage_0_0, _id, u_14, t);
  return(t);
}
