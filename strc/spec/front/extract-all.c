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
ATerm term_g_42;
ATerm term_f_42;
ATerm term_d_42;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_c_41;
ATerm term_p_39;
ATerm term_o_39;
ATerm term_k_39;
ATerm term_f_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_l_38;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_x_37;
ATerm term_v_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_y_36;
ATerm term_w_36;
ATerm term_t_36;
ATerm term_n_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_h_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_h_35;
ATerm term_d_35;
ATerm term_o_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_h_34;
ATerm term_e_34;
ATerm term_p_33;
ATerm term_n_33;
ATerm term_l_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_p_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_e_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_y_21;
ATerm term_m_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_f_20;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_p_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_u_15;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_Sort_2, term_c_26, (ATerm) ATempty);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_ConstType_1, term_d_26);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("redefining external definition: ", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_s_17);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_17);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(sym__2, term_z_35, term_k_26);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(sym__2, term_j_36, term_k_36);
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(sym__2, term_u_38, term_k_26);
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(sym__2, term_x_38, term_k_26);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(sym__2, term_v_37, term_k_26);
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(sym__2, term_o_34, term_k_26);
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm e_8 (ATerm v_23, ATerm x_23, ATerm y_23, ATerm t);
static ATerm a_0 (ATerm t);
ATerm DefinitionExists_0_0 (ATerm t);
ATerm sboundin_3_0 (ATerm h_93 (ATerm), ATerm i_93 (ATerm), ATerm j_93 (ATerm), ATerm t);
static ATerm q_0 (ATerm t);
static ATerm l_8 (ATerm c_34, ATerm b_34, ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm free_vars2_4_0 (ATerm o_110 (ATerm), ATerm p_110 (ATerm), ATerm q_110 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm r_110 (ATerm), ATerm t);
static ATerm g_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm i_2 (ATerm t);
ATerm svars_arity_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm i_92 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm r_8 (ATerm z_31, ATerm a_32, ATerm b_32, ATerm t);
static ATerm e_42 (ATerm h_41, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm x_99 (ATerm), ATerm y_99 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm g_95 (ATerm), ATerm t);
static ATerm v_8 (ATerm m_27, ATerm n_27, ATerm o_27, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm c_94 (ATerm), ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm tuple_unzip_1_0 (ATerm e_98 (ATerm), ATerm t);
ATerm MkDistApplication_0_0 (ATerm t);
static ATerm w_8 (ATerm n_48, ATerm o_48, ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm copy_1_0 (ATerm u_115 (ATerm), ATerm t);
static ATerm x_8 (ATerm r_22, ATerm s_22, ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm h_58 (ATerm c_55, ATerm d_55, ATerm e_55, ATerm f_55, ATerm t);
static ATerm p_58 (ATerm s_56, ATerm t_56, ATerm u_56, ATerm v_56, ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm DefineCongruence_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm h_106 (ATerm), ATerm t);
ATerm giving_up_0_0 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm JoinDefsExt_0_0 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
ATerm choices_0_0 (ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm u_95 (ATerm), ATerm t);
static ATerm w_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm l_93 (ATerm), ATerm m_93 (ATerm), ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm i_8 (ATerm t);
ATerm JoinDefs2_0_0 (ATerm t);
static ATerm v_61 (ATerm j_59, ATerm k_59, ATerm l_59, ATerm n_59, ATerm t);
ATerm get_definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm l_106 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm o_63 (ATerm z_62, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm d_9 (ATerm r_112 (ATerm), ATerm w_58, ATerm v_58, ATerm t);
ATerm genzip_4_0 (ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm r_98 (ATerm), ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm i_9 (ATerm l_683, ATerm q_683, ATerm k_69, ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm o_68 (ATerm d_67, ATerm e_67, ATerm f_67, ATerm t);
static ATerm a_9 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm k_9 (ATerm f_125 (ATerm), ATerm g_125 (ATerm), ATerm h_125 (ATerm), ATerm l_70, ATerm i_70, ATerm q_70, ATerm m_70, ATerm j_70, ATerm k_70, ATerm t);
ATerm GnNextChangeGraph_3_0 (ATerm f_125 (ATerm), ATerm g_125 (ATerm), ATerm h_125 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm t);
ATerm for_3_0 (ATerm r_100 (ATerm), ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm f_27 (ATerm q_26, ATerm s_26, ATerm t);
ATerm extract_needed_defs_0_0 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm q_10 (ATerm t);
ATerm RegisterExtSDefInl_0_0 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
ATerm RegisterExtSDef_0_0 (ATerm t);
static ATerm n_9 (ATerm o_125 (ATerm), ATerm j_71, ATerm h_71, ATerm t);
ATerm Arities_0_0 (ATerm t);
static ATerm p_9 (ATerm t_66, ATerm u_66, ATerm t);
ATerm Definitions_0_0 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
ATerm RegisterSDefT_0_0 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm v_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm y_12 (ATerm t);
ATerm DefinitionName_0_0 (ATerm t);
static ATerm q_9 (ATerm z_112 (ATerm), ATerm a_113 (ATerm), ATerm c_59, ATerm b_59, ATerm t);
static ATerm r_9 (ATerm w_112 (ATerm), ATerm y_58, ATerm x_58, ATerm t);
ATerm foldr_3_0 (ATerm g_115 (ATerm), ATerm h_115 (ATerm), ATerm i_115 (ATerm), ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
ATerm all_defs_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm x_79 (ATerm), ATerm y_79 (ATerm), ATerm t);
static ATerm s_9 (ATerm q_41, ATerm r_41, ATerm t);
static ATerm t_9 (ATerm k_40, ATerm l_40, ATerm t);
static ATerm v_9 (ATerm m_101 (ATerm), ATerm b_278, ATerm o_40, ATerm t);
static ATerm u_9 (ATerm g_40, ATerm h_40, ATerm t);
static ATerm f_13 (ATerm t);
static ATerm g_13 (ATerm t);
ATerm output_1_0 (ATerm d_121 (ATerm), ATerm t);
static ATerm x_81 (ATerm r_81, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm w_9 (ATerm m_40, ATerm t);
static ATerm x_9 (ATerm s_41, ATerm t_41, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm i_83 (ATerm h_82, ATerm t);
static ATerm j_83 (ATerm l_82, ATerm m_82, ATerm n_82, ATerm t);
static ATerm k_83 (ATerm v_82, ATerm w_82, ATerm x_82, ATerm t);
static ATerm y_9 (ATerm t);
static ATerm h_13 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm e_121 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm k_13 (ATerm t);
static ATerm l_13 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm s_13 (ATerm t);
static ATerm t_13 (ATerm t);
static ATerm u_13 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm g_10 (ATerm k_45, ATerm l_45, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm w_13 (ATerm t);
static ATerm x_13 (ATerm t);
static ATerm y_13 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm e_10 (ATerm i_66, ATerm j_66, ATerm h_66, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm a_14 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm c_14 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm z_9 (ATerm h_48, ATerm i_48, ATerm t);
ATerm foldr_2_0 (ATerm e_115 (ATerm), ATerm f_115 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm e_14 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm c_103 (ATerm), ATerm t);
static ATerm f_14 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm g_14 (ATerm t);
ATerm need_help_1_0 (ATerm u_120 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm o_14 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm f_106 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm c_10 (ATerm n_58, ATerm o_58, ATerm t);
ATerm debug_1_0 (ATerm k_101 (ATerm), ATerm t);
ATerm map_1_0 (ATerm v_105 (ATerm), ATerm t);
static ATerm q_14 (ATerm t);
static ATerm t_14 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm d_10 (ATerm z_67, ATerm a_68, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm v_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm x_14 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm d_15 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm x_122 (ATerm), ATerm t);
static ATerm f_15 (ATerm t);
static ATerm g_15 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm j_15 (ATerm t);
ATerm parse_options_1_0 (ATerm w_122 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm w_120 (ATerm), ATerm x_120 (ATerm), ATerm y_120 (ATerm), ATerm z_120 (ATerm), ATerm t);
static ATerm m_15 (ATerm t);
static ATerm n_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm p_15 (ATerm t);
static ATerm q_15 (ATerm t);
static ATerm r_15 (ATerm t);
static ATerm s_15 (ATerm t);
static ATerm t_15 (ATerm t);
static ATerm v_15 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm e_8 (ATerm v_23, ATerm x_23, ATerm y_23, ATerm t)
{
  ATerm p_0 = NULL,r_0 = NULL;
  t = term_u_15;
  p_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_16), y_23), term_z_15), x_23), term_x_15), v_23), term_w_15);
  r_0 = t;
  t = SSL_printnl(p_0, r_0);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_16), y_23), term_z_15), x_23), term_x_15), v_23), term_w_15);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_16 = ATgetArgument(t, 0);
      if(((ATgetType(b_16) != AT_INT) || (ATgetInt((ATermInt) b_16) != 0)))
        _fail(t);
      {
        ATerm c_16 = ATgetArgument(t, 1);
        if(((ATgetType(c_16) != AT_INT) || (ATgetInt((ATermInt) c_16) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm u_1 = NULL,v_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL;
  u_1 = t;
  if(match_cons(t, sym__2))
    {
      v_1 = ATgetArgument(t, 0);
      w_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_1;
  if(match_cons(t, sym__2))
    {
      x_1 = ATgetArgument(t, 0);
      y_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_1;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = y_1;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm d_16 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_0 = NULL,u_0 = NULL;
        t = v_1;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_16 = ATgetFirst((ATermList) t);
            ATerm g_16 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(g_16) == AT_LIST) && !(ATisEmpty(g_16))))
              {
                ATerm j_16 = ATgetFirst((ATermList) g_16);
                ATerm l_16 = (ATerm) ATgetNext((ATermList) g_16);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm m_16 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(a_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = m_16;
            }
        }
        t = term_u_15;
        t_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, v_1), term_p_16);
        u_0 = t;
        t = SSL_printnl(t_0, u_0);
        t = (ATerm) ATinsert(ATinsert(ATempty, v_1), term_p_16);
        t = giving_up_0_0(t);
        LocalPopChoice(e_16);
      }
    else
      {
        t = d_16;
        {
          ATerm a_1 = NULL,b_1 = NULL;
          t = v_1;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm q_16 = ATgetFirst((ATermList) t);
              if(match_cons(q_16, sym__2))
                {
                  a_1 = ATgetArgument(q_16, 0);
                  b_1 = ATgetArgument(q_16, 1);
                }
              else
                _fail(t);
              {
                ATerm r_16 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(r_16) != AT_LIST) || !(ATisEmpty(r_16))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, v_1, (ATerm) ATmakeAppl(sym__2, a_1, b_1));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, v_1, (ATerm) ATmakeAppl(sym__2, a_1, b_1));
        }
      }
  }
  return(t);
}
ATerm sboundin_3_0 (ATerm h_93 (ATerm), ATerm i_93 (ATerm), ATerm j_93 (ATerm), ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL;
  j_4 = t;
  if(match_cons(t, sym_Let_2))
    {
      k_4 = ATgetArgument(t, 0);
      l_4 = ATgetArgument(t, 1);
      {
        ATerm q_1 = NULL,b_2 = NULL,c_2 = NULL,d_1 = NULL;
        t = SSLgetAnnotations(j_4);
        q_1 = t;
        t = k_4;
        t = h_93(t);
        b_2 = t;
        t = l_4;
        t = h_93(t);
        c_2 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, b_2, c_2);
        d_1 = t;
        t = SSLsetAnnotations(d_1, q_1);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          k_4 = ATgetArgument(t, 0);
          l_4 = ATgetArgument(t, 1);
          h_4 = ATgetArgument(t, 2);
          {
            ATerm t_3 = NULL,n_4 = NULL,r_4 = NULL,t_4 = NULL,h_1 = NULL;
            t = SSLgetAnnotations(j_4);
            t_3 = t;
            t = k_4;
            t = j_93(t);
            n_4 = t;
            t = l_4;
            t = j_93(t);
            r_4 = t;
            t = h_4;
            t = h_93(t);
            t_4 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, n_4, r_4, t_4);
            h_1 = t;
            t = SSLsetAnnotations(h_1, t_3);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              k_4 = ATgetArgument(t, 0);
              l_4 = ATgetArgument(t, 1);
              h_4 = ATgetArgument(t, 2);
              i_4 = ATgetArgument(t, 3);
              {
                ATerm n_5 = NULL,v_5 = NULL,w_5 = NULL,z_5 = NULL,b_6 = NULL,j_1 = NULL;
                t = SSLgetAnnotations(j_4);
                n_5 = t;
                t = k_4;
                t = j_93(t);
                v_5 = t;
                t = l_4;
                t = j_93(t);
                w_5 = t;
                t = h_4;
                t = j_93(t);
                z_5 = t;
                t = i_4;
                t = h_93(t);
                b_6 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, v_5, w_5, z_5, b_6);
                j_1 = t;
                t = SSLsetAnnotations(j_1, n_5);
              }
            }
          else
            {
              ATerm x_6 = NULL,b_7 = NULL,e_7 = NULL,k_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  k_4 = ATgetArgument(t, 0);
                  l_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(j_4);
              x_6 = t;
              t = k_4;
              t = j_93(t);
              b_7 = t;
              t = l_4;
              t = h_93(t);
              e_7 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, b_7, e_7);
              k_1 = t;
              t = SSLsetAnnotations(k_1, x_6);
            }
        }
    }
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm v_4 = NULL;
  ATerm s_16 = t;
  int t_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          v_4 = ATgetArgument(t, 0);
          {
            ATerm v_16 = ATgetArgument(t, 1);
          }
          {
            ATerm w_16 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_16);
      t = v_4;
    }
  else
    {
      t = s_16;
      if(match_cons(t, sym_SDefT_4))
        {
          v_4 = ATgetArgument(t, 0);
          {
            ATerm x_16 = ATgetArgument(t, 1);
          }
          {
            ATerm y_16 = ATgetArgument(t, 2);
          }
          {
            ATerm z_16 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = v_4;
    }
  return(t);
}
static ATerm l_8 (ATerm c_34, ATerm b_34, ATerm t)
{
  t = c_34;
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
  t = r_9(y_0, f_8, g_8, t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm h_8 = NULL;
  if(match_cons(t, sym__2))
    {
      h_8 = ATgetArgument(t, 0);
      if((h_8 != ATgetArgument(t, 1)))
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
  t = r_9(e_1, f_9, g_9, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm h_9 = NULL;
  if(match_cons(t, sym__2))
    {
      h_9 = ATgetArgument(t, 0);
      if((h_9 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm p_6 = NULL;
  if(match_cons(t, sym__2))
    {
      p_6 = ATgetArgument(t, 0);
      if((p_6 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm o_110 (ATerm), ATerm p_110 (ATerm), ATerm q_110 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm r_110 (ATerm), ATerm t)
{
  static ATerm s_6 (ATerm t)
  {
    ATerm x_5 = NULL,y_5 = NULL,a_6 = NULL;
    a_6 = t;
    {
      ATerm a_17 = t;
      int c_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_110(t);
          LocalPopChoice(c_17);
        }
      else
        {
          t = a_17;
          t = (ATerm) ATempty;
        }
    }
    x_5 = t;
    t = a_6;
    {
      ATerm d_17 = t;
      int f_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_6 = NULL,z_7 = NULL,a_8 = NULL;
          t = p_110(t);
          c_6 = t;
          t = a_6;
          {
            static ATerm s_0 (ATerm t)
            {
              ATerm r_7 = NULL;
              t = s_6(t);
              r_7 = t;
              t = (ATerm) ATmakeAppl(sym__2, r_7, c_6);
              t = d_9(r_110, r_7, c_6, t);
              return(t);
            }
            t = q_110(s_0, s_6, v_0, t);
          }
          a_8 = t;
          t = SSL_explode_term(a_8);
          if(match_cons(t, sym__2))
            {
              ATerm g_17 = ATgetArgument(t, 0);
              z_7 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_7;
          t = foldr_3_0(w_0, x_0, _id, t);
          LocalPopChoice(f_17);
        }
      else
        {
          t = d_17;
          {
            ATerm u_8 = NULL;
            t = SSL_explode_term(a_6);
            if(match_cons(t, sym__2))
              {
                ATerm h_17 = ATgetArgument(t, 0);
                u_8 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = u_8;
            t = foldr_3_0(z_0, c_1, s_6, t);
          }
        }
    }
    y_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_5, y_5);
    t = r_9(f_1, x_5, y_5, t);
    return(t);
  }
  t = s_6(t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm y_6 = NULL,c_7 = NULL,d_7 = NULL,f_7 = NULL,g_7 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm i_17 = ATgetArgument(t, 0);
      if(match_cons(i_17, sym_SVar_1))
        {
          y_6 = ATgetArgument(i_17, 0);
        }
      else
        _fail(t);
      c_7 = ATgetArgument(t, 1);
      d_7 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = c_7;
  t = foldr_3_0(m_1, n_1, o_1, t);
  f_7 = t;
  t = d_7;
  t = foldr_3_0(r_1, t_1, d_2, t);
  g_7 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, y_6, (ATerm) ATmakeAppl(sym__2, f_7, g_7)));
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm o_7 = NULL,p_7 = NULL,s_7 = NULL,t_7 = NULL,y_7 = NULL;
  o_7 = t;
  if(match_cons(t, sym_Let_2))
    {
      p_7 = ATgetArgument(t, 0);
      s_7 = ATgetArgument(t, 1);
      t = o_7;
      t = l_8(p_7, s_7, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          p_7 = ATgetArgument(t, 0);
          s_7 = ATgetArgument(t, 1);
          t_7 = ATgetArgument(t, 2);
          t = s_7;
          t = map_1_0(e_2, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              p_7 = ATgetArgument(t, 0);
              s_7 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, p_7);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  p_7 = ATgetArgument(t, 0);
                  s_7 = ATgetArgument(t, 1);
                  t_7 = ATgetArgument(t, 2);
                  y_7 = ATgetArgument(t, 3);
                  t = s_7;
                  t = map_1_0(f_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      p_7 = ATgetArgument(t, 0);
                      s_7 = ATgetArgument(t, 1);
                      t_7 = ATgetArgument(t, 2);
                      y_7 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_7;
                  t = map_1_0(i_2, t);
                }
            }
        }
    }
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm p_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_17 = ATgetArgument(t, 0);
      if(match_cons(o_17, sym__2))
        {
          p_11 = ATgetArgument(o_17, 0);
          {
            ATerm p_17 = ATgetArgument(o_17, 1);
          }
        }
      else
        _fail(t);
      if((p_11 != ATgetArgument(t, 1)))
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
  t = term_s_17;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm i_7 = NULL,j_7 = NULL;
  if(match_cons(t, sym__2))
    {
      i_7 = ATgetArgument(t, 0);
      j_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_9(i_7, j_7, t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_t_17;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_s_17;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm k_7 = NULL,l_7 = NULL;
  if(match_cons(t, sym__2))
    {
      k_7 = ATgetArgument(t, 0);
      l_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_9(k_7, l_7, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_t_17;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm q_8 = NULL;
  ATerm u_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_8 = ATgetArgument(t, 0);
          {
            ATerm y_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_17);
      t = q_8;
    }
  else
    {
      t = u_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_8;
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm n_10 = NULL;
  ATerm z_17 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_10 = ATgetArgument(t, 0);
          {
            ATerm b_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_18);
      t = n_10;
    }
  else
    {
      t = z_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_10;
    }
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm k_11 = NULL;
  ATerm x_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_11 = ATgetArgument(t, 0);
          {
            ATerm e_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_19);
      t = k_11;
    }
  else
    {
      t = x_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_11;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(g_1, i_1, sboundin_3_0, l_1, t);
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm x_21 = NULL,g_22 = NULL,h_22 = NULL;
  g_22 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      h_22 = ATgetArgument(t, 0);
      x_21 = ATgetArgument(t, 1);
      {
        ATerm c_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL;
        t = g_22;
        t = new_0_0(t);
        c_23 = t;
        t = new_0_0(t);
        f_23 = t;
        t = new_0_0(t);
        g_23 = t;
        t = new_0_0(t);
        h_23 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_23), g_23), f_23), c_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, c_23), (ATerm) ATmakeAppl(sym_Var_1, g_23))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, h_22, (ATerm)ATmakeAppl(sym_Var_1, c_23), (ATerm) ATmakeAppl(sym_Var_1, f_23)), (ATerm) ATmakeAppl(sym_BAM_3, x_21, (ATerm)ATmakeAppl(sym_Var_1, g_23), (ATerm) ATmakeAppl(sym_Var_1, h_23)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_f_20, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, h_23)), (ATerm) ATmakeAppl(sym_Var_1, f_23))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          h_22 = ATgetArgument(t, 0);
          {
            ATerm i_23 = NULL,j_23 = NULL,p_23 = NULL,r_23 = NULL;
            t = g_22;
            t = new_0_0(t);
            p_23 = t;
            t = h_22;
            {
              static ATerm j_2 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((i_23 != NULL) && (i_23 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      i_23 = ATgetArgument(t, 0);
                    if(((j_23 != NULL) && (j_23 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      j_23 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, p_23);
                return(t);
              }
              t = oncetd_1_0(j_2, t);
            }
            r_23 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_f_20, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_23)), not_null(i_23))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, p_23)), (ATerm) ATmakeAppl(sym_Build_1, r_23))));
          }
        }
      else
        {
          ATerm t_23 = NULL,w_23 = NULL,d_24 = NULL,o_24 = NULL,p_24 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              h_22 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_22;
          t = new_0_0(t);
          d_24 = t;
          t = new_0_0(t);
          o_24 = t;
          t = h_22;
          {
            static ATerm k_2 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((t_23 != NULL) && (t_23 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    t_23 = ATgetArgument(t, 0);
                  if(((w_23 != NULL) && (w_23 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    w_23 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, d_24);
              return(t);
            }
            t = oncetd_1_0(k_2, t);
          }
          p_24 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_24), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, o_24)), (ATerm) ATmakeAppl(sym_PrimT_3, term_i_20, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, o_24))))), (ATerm)ATmakeAppl(sym_Var_1, d_24), (ATerm) ATmakeAppl(sym_Op_2, term_j_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_23)), not_null(t_23)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm c_25 = NULL,i_25 = NULL;
  c_25 = t;
  if(match_cons(t, sym_Match_1))
    {
      i_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_20 = t;
    int l_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_25 = NULL,l_25 = NULL,n_25 = NULL,t_25 = NULL;
        t = c_25;
        t = new_0_0(t);
        n_25 = t;
        t = i_25;
        {
          static ATerm l_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((k_25 != NULL) && (k_25 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_25 = ATgetArgument(t, 0);
                if(((l_25 != NULL) && (l_25 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  l_25 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, n_25), k_25);
            return(t);
          }
          t = pat_td_1_0(l_2, t);
        }
        t_25 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_25), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, t_25), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_m_20, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, n_25))), (ATerm) ATmakeAppl(sym_Match_1, not_null(l_25))))));
        LocalPopChoice(l_20);
      }
    else
      {
        t = k_20;
        {
          ATerm n_20 = t;
          int o_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_25 = NULL,y_25 = NULL,b_26 = NULL;
              t = c_25;
              t = new_0_0(t);
              y_25 = t;
              t = i_25;
              {
                static ATerm m_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((x_25 != NULL) && (x_25 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        x_25 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, y_25);
                  return(t);
                }
                t = pat_td_1_0(m_2, t);
              }
              b_26 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_25), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, y_25)), not_null(x_25))));
              LocalPopChoice(o_20);
            }
          else
            {
              t = n_20;
              {
                ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL,r_26 = NULL;
                t = c_25;
                t = new_0_0(t);
                o_26 = t;
                t = i_25;
                {
                  static ATerm n_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((n_26 != NULL) && (n_26 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          n_26 = ATgetArgument(t, 0);
                        if(((m_26 != NULL) && (m_26 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          m_26 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, o_26);
                    return(t);
                  }
                  t = pat_td_1_0(n_2, t);
                }
                r_26 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, o_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_26)), not_null(n_26)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm i_92 (ATerm), ATerm t)
{
  ATerm p_20 = t;
  int x_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_92(t);
      LocalPopChoice(x_20);
    }
  else
    {
      t = p_20;
      {
        ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL;
        v_35 = t;
        if(match_cons(t, sym_Op_2))
          {
            w_35 = ATgetArgument(t, 0);
            x_35 = ATgetArgument(t, 1);
            {
              ATerm g_12 = NULL,j_12 = NULL,p_1 = NULL;
              t = SSLgetAnnotations(v_35);
              g_12 = t;
              t = x_35;
              {
                static ATerm o_2 (ATerm t)
                {
                  t = pat_td_1_0(i_92, t);
                  return(t);
                }
                t = fetch_1_0(o_2, t);
              }
              j_12 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, w_35, j_12);
              p_1 = t;
              t = SSLsetAnnotations(p_1, g_12);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                w_35 = ATgetArgument(t, 0);
                x_35 = ATgetArgument(t, 1);
                {
                  ATerm y_20 = t;
                  int z_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_13 = NULL,v_13 = NULL,s_1 = NULL;
                      t = SSLgetAnnotations(v_35);
                      i_13 = t;
                      t = x_35;
                      t = pat_td_1_0(i_92, t);
                      v_13 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, w_35, v_13);
                      s_1 = t;
                      t = SSLsetAnnotations(s_1, i_13);
                      LocalPopChoice(z_20);
                    }
                  else
                    {
                      t = y_20;
                      {
                        ATerm n_14 = NULL,s_14 = NULL,z_1 = NULL;
                        t = SSLgetAnnotations(v_35);
                        n_14 = t;
                        t = w_35;
                        t = pat_td_1_0(i_92, t);
                        s_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, s_14, x_35);
                        z_1 = t;
                        t = SSLsetAnnotations(z_1, n_14);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    w_35 = ATgetArgument(t, 0);
                    x_35 = ATgetArgument(t, 1);
                    u_35 = ATgetArgument(t, 2);
                    {
                      ATerm h_15 = NULL,l_15 = NULL,a_2 = NULL;
                      t = SSLgetAnnotations(v_35);
                      h_15 = t;
                      t = u_35;
                      {
                        static ATerm p_2 (ATerm t)
                        {
                          t = pat_td_1_0(i_92, t);
                          return(t);
                        }
                        t = fetch_1_0(p_2, t);
                      }
                      l_15 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, w_35, x_35, l_15);
                      a_2 = t;
                      t = SSLsetAnnotations(a_2, h_15);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        w_35 = ATgetArgument(t, 0);
                        x_35 = ATgetArgument(t, 1);
                        u_35 = ATgetArgument(t, 2);
                        {
                          ATerm h_16 = NULL,o_16 = NULL,g_2 = NULL;
                          t = SSLgetAnnotations(v_35);
                          h_16 = t;
                          t = u_35;
                          {
                            static ATerm s_2 (ATerm t)
                            {
                              t = pat_td_1_0(i_92, t);
                              return(t);
                            }
                            t = fetch_1_0(s_2, t);
                          }
                          o_16 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, w_35, x_35, o_16);
                          g_2 = t;
                          t = SSLsetAnnotations(g_2, h_16);
                        }
                      }
                    else
                      {
                        ATerm b_17 = NULL,e_17 = NULL,h_2 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            w_35 = ATgetArgument(t, 0);
                            x_35 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(v_35);
                        b_17 = t;
                        t = x_35;
                        t = pat_td_1_0(i_92, t);
                        e_17 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, w_35, e_17);
                        h_2 = t;
                        t = SSLsetAnnotations(h_2, b_17);
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
  ATerm i_36 = NULL,l_36 = NULL;
  i_36 = t;
  if(match_cons(t, sym_Build_1))
    {
      l_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_36 = NULL,s_36 = NULL,u_36 = NULL,v_36 = NULL;
        t = i_36;
        t = new_0_0(t);
        u_36 = t;
        t = l_36;
        {
          static ATerm t_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((m_36 != NULL) && (m_36 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_36 = ATgetArgument(t, 0);
                if(((s_36 != NULL) && (s_36 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  s_36 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, u_36);
            return(t);
          }
          t = pat_td_1_0(t_2, t);
        }
        v_36 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_36), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_y_21, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_36)), not_null(m_36))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_36)))), (ATerm) ATmakeAppl(sym_Build_1, v_36)));
        LocalPopChoice(w_21);
      }
    else
      {
        t = c_21;
        {
          ATerm z_21 = t;
          int a_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_36 = NULL,z_36 = NULL,a_37 = NULL;
              t = i_36;
              t = new_0_0(t);
              z_36 = t;
              t = l_36;
              {
                static ATerm v_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((x_36 != NULL) && (x_36 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        x_36 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, z_36);
                  return(t);
                }
                t = pat_td_1_0(v_2, t);
              }
              a_37 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_36), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_36), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, z_36)))), (ATerm) ATmakeAppl(sym_Build_1, a_37)));
              LocalPopChoice(a_22);
            }
          else
            {
              t = z_21;
              {
                ATerm b_37 = NULL,c_37 = NULL,f_37 = NULL,k_37 = NULL;
                t = i_36;
                t = new_0_0(t);
                f_37 = t;
                t = l_36;
                {
                  static ATerm a_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((b_37 != NULL) && (b_37 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          b_37 = ATgetArgument(t, 0);
                        if(((c_37 != NULL) && (c_37 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          c_37 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, f_37);
                    return(t);
                  }
                  t = pat_td_1_0(a_3, t);
                }
                k_37 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_37), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(b_37), not_null(c_37), (ATerm) ATmakeAppl(sym_Var_1, f_37))), (ATerm) ATmakeAppl(sym_Build_1, k_37)));
              }
            }
        }
      }
  }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL,w_37 = NULL,y_37 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      w_37 = ATgetArgument(t, 0);
      y_37 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, w_37, y_37);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          w_37 = ATgetArgument(t, 0);
          t = w_37;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_37 = ATgetFirst((ATermList) t);
              r_37 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, q_37, (ATerm) ATmakeAppl(sym_LChoices_1, r_37));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_b_22;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              w_37 = ATgetArgument(t, 0);
              t = w_37;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_37 = ATgetFirst((ATermList) t);
                  r_37 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, q_37, (ATerm) ATmakeAppl(sym_Choices_1, r_37));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_b_22;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  w_37 = ATgetArgument(t, 0);
                  t = w_37;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      q_37 = ATgetFirst((ATermList) t);
                      r_37 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_37, (ATerm) ATmakeAppl(sym_Seqs_1, r_37));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_c_22;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      w_37 = ATgetArgument(t, 0);
                      y_37 = ATgetArgument(t, 1);
                      s_37 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, y_37, (ATerm) ATmakeAppl(sym_Op_2, term_j_20, (ATerm) ATinsert(ATinsert(ATempty, s_37), w_37)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          w_37 = ATgetArgument(t, 0);
                          y_37 = ATgetArgument(t, 1);
                          s_37 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, s_37)), w_37), (ATerm) ATmakeAppl(sym_Build_1, y_37)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              w_37 = ATgetArgument(t, 0);
                              y_37 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_37, (ATerm) ATmakeAppl(sym_Match_1, y_37));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  w_37 = ATgetArgument(t, 0);
                                  y_37 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, w_37), y_37);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      w_37 = ATgetArgument(t, 0);
                                      y_37 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, y_37), w_37);
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
  ATerm d_22 = t;
  if((PushChoice() == 0))
    {
      ATerm c_40 = NULL,d_40 = NULL,e_40 = NULL,q_2 = NULL;
      e_40 = t;
      if(match_cons(t, sym_Var_1))
        {
          d_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_40);
      c_40 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, d_40);
      q_2 = t;
      t = SSLsetAnnotations(q_2, c_40);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_22;
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_e_22;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm f_40 = NULL,i_40 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_40 = ATgetFirst((ATermList) t);
      i_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_40, i_40);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm j_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_22 = ATgetArgument(t, 0);
      if(match_cons(i_22, sym__2))
        {
          j_40 = ATgetArgument(i_22, 0);
          p_40 = ATgetArgument(i_22, 1);
        }
      else
        _fail(t);
      {
        ATerm j_22 = ATgetArgument(t, 1);
        if(match_cons(j_22, sym__2))
          {
            q_40 = ATgetArgument(j_22, 0);
            r_40 = ATgetArgument(j_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_40), j_40), (ATerm) ATinsert(CheckATermList(r_40), p_40));
  return(t);
}
static ATerm g_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_e_22;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm s_40 = NULL,v_40 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_40 = ATgetFirst((ATermList) t);
      v_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_40, v_40);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL,d_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_22 = ATgetArgument(t, 0);
      if(match_cons(k_22, sym__2))
        {
          w_40 = ATgetArgument(k_22, 0);
          x_40 = ATgetArgument(k_22, 1);
        }
      else
        _fail(t);
      {
        ATerm l_22 = ATgetArgument(t, 1);
        if(match_cons(l_22, sym__2))
          {
            y_40 = ATgetArgument(l_22, 0);
            d_41 = ATgetArgument(l_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_40), w_40), (ATerm) ATinsert(CheckATermList(d_41), x_40));
  return(t);
}
static ATerm r_8 (ATerm z_31, ATerm a_32, ATerm b_32, ATerm t)
{
  ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,a_40 = NULL,b_40 = NULL,r_2 = NULL;
  t = b_32;
  t = fetch_1_0(b_3, t);
  t = b_32;
  t = genzip_4_0(c_3, d_3, e_3, LiftPrimArg_0_0, t);
  b_40 = t;
  if(match_cons(t, sym__2))
    {
      t_39 = ATgetArgument(t, 0);
      u_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_40);
  s_39 = t;
  t = t_39;
  t = concat_0_0(t);
  v_39 = t;
  t = u_39;
  t = genzip_4_0(g_3, h_3, k_3, _id, t);
  a_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_39, a_40);
  r_2 = t;
  t = SSLsetAnnotations(r_2, s_39);
  if(match_cons(t, sym__2))
    {
      l_39 = ATgetArgument(t, 0);
      {
        ATerm m_22 = ATgetArgument(t, 1);
        if(match_cons(m_22, sym__2))
          {
            m_39 = ATgetArgument(m_22, 0);
            n_39 = ATgetArgument(m_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, l_39, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, m_39), (ATerm) ATmakeAppl(sym_CallT_3, z_31, a_32, n_39)));
  return(t);
}
static ATerm e_42 (ATerm h_41, ATerm t)
{
  ATerm j_41 = NULL;
  t = h_41;
  {
    ATerm n_22 = t;
    if((PushChoice() == 0))
      {
        ATerm k_41 = NULL,l_41 = NULL,w_41 = NULL,u_2 = NULL;
        w_41 = t;
        if(match_cons(t, sym_Var_1))
          {
            l_41 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_41);
        k_41 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, l_41);
        u_2 = t;
        t = SSLsetAnnotations(u_2, k_41);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_22;
      }
  }
  t = new_0_0(t);
  j_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, j_41), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_41), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_41)))), (ATerm) ATmakeAppl(sym_Var_1, j_41)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL;
  x_41 = t;
  if(match_cons(t, sym_Var_1))
    {
      y_41 = ATgetArgument(t, 0);
      {
        ATerm o_22 = t;
        int p_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_42(x_41, t);
            LocalPopChoice(p_22);
          }
        else
          {
            t = o_22;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_c_22, (ATerm) ATmakeAppl(sym_Var_1, y_41)));
          }
      }
    }
  else
    {
      t = e_42(x_41, t);
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm q_22 = t;
  if((PushChoice() == 0))
    {
      ATerm j_18 = NULL,k_18 = NULL,p_18 = NULL,w_2 = NULL;
      p_18 = t;
      if(match_cons(t, sym_Var_1))
        {
          k_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_18);
      j_18 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, k_18);
      w_2 = t;
      t = SSLsetAnnotations(w_2, j_18);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_22;
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_e_22;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_18 = ATgetFirst((ATermList) t);
      r_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_18, r_18);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm s_18 = NULL,z_18 = NULL,a_19 = NULL,j_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_22 = ATgetArgument(t, 0);
      if(match_cons(t_22, sym__2))
        {
          s_18 = ATgetArgument(t_22, 0);
          z_18 = ATgetArgument(t_22, 1);
        }
      else
        _fail(t);
      {
        ATerm u_22 = ATgetArgument(t, 1);
        if(match_cons(u_22, sym__2))
          {
            a_19 = ATgetArgument(u_22, 0);
            j_19 = ATgetArgument(u_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_19), s_18), (ATerm) ATinsert(CheckATermList(j_19), z_18));
  return(t);
}
static ATerm s_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_e_22;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_19 = ATgetFirst((ATermList) t);
      l_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_19, l_19);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm m_19 = NULL,o_19 = NULL,r_19 = NULL,w_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_22 = ATgetArgument(t, 0);
      if(match_cons(v_22, sym__2))
        {
          m_19 = ATgetArgument(v_22, 0);
          o_19 = ATgetArgument(v_22, 1);
        }
      else
        _fail(t);
      {
        ATerm w_22 = ATgetArgument(t, 1);
        if(match_cons(w_22, sym__2))
          {
            r_19 = ATgetArgument(w_22, 0);
            w_19 = ATgetArgument(w_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_19), m_19), (ATerm) ATinsert(CheckATermList(w_19), o_19));
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm x_22 = t;
  if((PushChoice() == 0))
    {
      ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL,y_2 = NULL;
      j_21 = t;
      if(match_cons(t, sym_Var_1))
        {
          i_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_21);
      h_21 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, i_21);
      y_2 = t;
      t = SSLsetAnnotations(y_2, h_21);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_22;
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_e_22;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_21 = ATgetFirst((ATermList) t);
      l_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_21, l_21);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_22 = ATgetArgument(t, 0);
      if(match_cons(z_22, sym__2))
        {
          m_21 = ATgetArgument(z_22, 0);
          n_21 = ATgetArgument(z_22, 1);
        }
      else
        _fail(t);
      {
        ATerm a_23 = ATgetArgument(t, 1);
        if(match_cons(a_23, sym__2))
          {
            o_21 = ATgetArgument(a_23, 0);
            p_21 = ATgetArgument(a_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_21), m_21), (ATerm) ATinsert(CheckATermList(p_21), n_21));
  return(t);
}
static ATerm g_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_e_22;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_21 = ATgetFirst((ATermList) t);
      r_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_21, r_21);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_23 = ATgetArgument(t, 0);
      if(match_cons(b_23, sym__2))
        {
          s_21 = ATgetArgument(b_23, 0);
          t_21 = ATgetArgument(b_23, 1);
        }
      else
        _fail(t);
      {
        ATerm d_23 = ATgetArgument(t, 1);
        if(match_cons(d_23, sym__2))
          {
            u_21 = ATgetArgument(d_23, 0);
            v_21 = ATgetArgument(d_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_21), s_21), (ATerm) ATinsert(CheckATermList(v_21), t_21));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm e_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL;
  g_47 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      h_47 = ATgetArgument(t, 0);
      i_47 = ATgetArgument(t, 1);
      e_47 = ATgetArgument(t, 2);
      {
        ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,x_2 = NULL;
        t = e_47;
        t = fetch_1_0(l_3, t);
        t = e_47;
        t = genzip_4_0(m_3, o_3, r_3, LiftPrimArg_0_0, t);
        i_18 = t;
        if(match_cons(t, sym__2))
          {
            e_18 = ATgetArgument(t, 0);
            f_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_18);
        d_18 = t;
        t = e_18;
        t = concat_0_0(t);
        g_18 = t;
        t = f_18;
        t = genzip_4_0(s_3, v_3, x_3, _id, t);
        h_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_18, h_18);
        x_2 = t;
        t = SSLsetAnnotations(x_2, d_18);
        if(match_cons(t, sym__2))
          {
            a_18 = ATgetArgument(t, 0);
            {
              ATerm e_23 = ATgetArgument(t, 1);
              if(match_cons(e_23, sym__2))
                {
                  b_18 = ATgetArgument(e_23, 0);
                  c_18 = ATgetArgument(e_23, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, a_18, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, b_18), (ATerm) ATmakeAppl(sym_PrimT_3, h_47, i_47, c_18)));
      }
    }
  else
    {
      ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,w_20 = NULL,a_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,z_2 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          h_47 = ATgetArgument(t, 0);
          i_47 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_47;
      t = fetch_1_0(y_3, t);
      t = i_47;
      t = genzip_4_0(z_3, b_4, d_4, LiftPrimArg_0_0, t);
      g_21 = t;
      if(match_cons(t, sym__2))
        {
          a_21 = ATgetArgument(t, 0);
          d_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_21);
      w_20 = t;
      t = a_21;
      t = concat_0_0(t);
      e_21 = t;
      t = d_21;
      t = genzip_4_0(g_4, m_4, o_4, _id, t);
      f_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_21, f_21);
      z_2 = t;
      t = SSLsetAnnotations(z_2, w_20);
      if(match_cons(t, sym__2))
        {
          q_20 = ATgetArgument(t, 0);
          {
            ATerm k_23 = ATgetArgument(t, 1);
            if(match_cons(k_23, sym__2))
              {
                r_20 = ATgetArgument(k_23, 0);
                s_20 = ATgetArgument(k_23, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, q_20, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_20), (ATerm) ATmakeAppl(sym_PrimT_3, h_47, (ATerm)ATempty, s_20)));
    }
  return(t);
}
ATerm repeat_2_0 (ATerm x_99 (ATerm), ATerm y_99 (ATerm), ATerm t)
{
  static ATerm l_47 (ATerm t)
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_99(t);
        t = l_47(t);
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
        t = y_99(t);
      }
    return(t);
  }
  t = l_47(t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL;
  b_48 = t;
  if(match_cons(t, sym_Con_3))
    {
      y_47 = ATgetArgument(t, 0);
      z_47 = ATgetArgument(t, 1);
      a_48 = ATgetArgument(t, 2);
      {
        ATerm f_22 = NULL,f_3 = NULL;
        t = SSLgetAnnotations(b_48);
        f_22 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, y_47, z_47, a_48);
        f_3 = t;
        t = SSLsetAnnotations(f_3, f_22);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = b_48;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm n_23 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(q_4, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_23;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL;
  d_49 = t;
  if(match_cons(t, sym_Con_3))
    {
      e_49 = ATgetArgument(t, 0);
      f_49 = ATgetArgument(t, 1);
      c_49 = ATgetArgument(t, 2);
      {
        ATerm y_22 = NULL,i_3 = NULL;
        t = SSLgetAnnotations(d_49);
        y_22 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, e_49, f_49, c_49);
        i_3 = t;
        t = SSLsetAnnotations(i_3, y_22);
      }
    }
  else
    {
      ATerm z_23 = NULL,j_3 = NULL;
      if(match_cons(t, sym_App_2))
        {
          e_49 = ATgetArgument(t, 0);
          f_49 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_49);
      z_23 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, e_49, f_49);
      j_3 = t;
      t = SSLsetAnnotations(j_3, z_23);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm o_23 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(u_4, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_23;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm l_49 = NULL,m_49 = NULL,o_49 = NULL,p_49 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      l_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_49;
  if(match_cons(t, sym_StratRule_3))
    {
      m_49 = ATgetArgument(t, 0);
      o_49 = ATgetArgument(t, 1);
      p_49 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, o_49), (ATerm) ATmakeAppl(sym_Where_1, p_49)), m_49));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          m_49 = ATgetArgument(t, 0);
          o_49 = ATgetArgument(t, 1);
          p_49 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = m_49;
      t = pureterm_0_0(t);
      t = o_49;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, o_49)), (ATerm) ATmakeAppl(sym_Where_1, p_49)), (ATerm) ATmakeAppl(sym_Match_1, m_49)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm g_95 (ATerm), ATerm t)
{
  static ATerm b_50 (ATerm t)
  {
    ATerm q_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_95(t);
        LocalPopChoice(s_23);
      }
    else
      {
        t = q_23;
        t = SRTS_one(b_50, t);
      }
    return(t);
  }
  t = b_50(t);
  return(t);
}
static ATerm v_8 (ATerm m_27, ATerm n_27, ATerm o_27, ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL;
  t = new_0_0(t);
  h_50 = t;
  t = m_27;
  {
    static ATerm w_4 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm u_23 = ATgetArgument(t, 0);
          if(match_cons(u_23, sym_Var_1))
            {
              if(((f_50 != NULL) && (f_50 != ATgetArgument(u_23, 0))))
                _fail(ATgetArgument(u_23, 0));
              else
                f_50 = ATgetArgument(u_23, 0);
            }
          else
            _fail(t);
          if(((d_50 != NULL) && (d_50 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            d_50 = ATgetArgument(t, 1);
          {
            ATerm a_24 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, f_50);
      return(t);
    }
    t = oncetd_1_0(w_4, t);
  }
  i_50 = t;
  t = n_27;
  {
    static ATerm x_4 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm b_24 = ATgetArgument(t, 0);
          if(match_cons(b_24, sym_Var_1))
            {
              if(((f_50 != NULL) && (f_50 != ATgetArgument(b_24, 0))))
                _fail(ATgetArgument(b_24, 0));
              else
                f_50 = ATgetArgument(b_24, 0);
            }
          else
            _fail(t);
          if(((e_50 != NULL) && (e_50 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            e_50 = ATgetArgument(t, 1);
          {
            ATerm c_24 = ATgetArgument(t, 2);
            if(match_cons(c_24, sym_CallT_3))
              {
                if(((c_50 != NULL) && (c_50 != ATgetArgument(c_24, 0))))
                  _fail(ATgetArgument(c_24, 0));
                else
                  c_50 = ATgetArgument(c_24, 0);
                {
                  ATerm e_24 = ATgetArgument(c_24, 1);
                  if(((ATgetType(e_24) != AT_LIST) || !(ATisEmpty(e_24))))
                    _fail(t);
                }
                {
                  ATerm f_24 = ATgetArgument(c_24, 2);
                  if(((ATgetType(f_24) != AT_LIST) || !(ATisEmpty(f_24))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, h_50);
      return(t);
    }
    t = oncetd_1_0(x_4, t);
  }
  j_50 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_50), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, i_50, j_50, (ATerm) ATmakeAppl(sym_Seq_2, o_27, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(c_50), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(d_50), not_null(e_50), term_c_22))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(f_50)), (ATerm) ATmakeAppl(sym_Var_1, h_50))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm g_24 = t;
  int h_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_24 = t;
      int j_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL;
          h_51 = t;
          if(match_cons(t, sym_SRule_1))
            {
              i_51 = ATgetArgument(t, 0);
              t = i_51;
              if(match_cons(t, sym_Rule_3))
                {
                  e_51 = ATgetArgument(t, 0);
                  f_51 = ATgetArgument(t, 1);
                  g_51 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = h_51;
              t = v_8(e_51, f_51, g_51, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm k_24 = NULL,n_24 = NULL,n_3 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  i_51 = ATgetArgument(t, 0);
                  j_51 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(h_51);
              k_24 = t;
              t = j_51;
              t = desugarRule_0_0(t);
              n_24 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, i_51, n_24);
              n_3 = t;
              t = SSLsetAnnotations(n_3, k_24);
            }
          LocalPopChoice(j_24);
        }
      else
        {
          t = i_24;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(h_24);
    }
  else
    {
      t = g_24;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm c_94 (ATerm), ATerm t)
{
  static ATerm y_4 (ATerm t)
  {
    t = topdown_1_0(c_94, t);
    return(t);
  }
  t = c_94(t);
  t = SRTS_all(y_4, t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm l_24 = t;
  int m_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(m_24);
    }
  else
    {
      t = l_24;
    }
  t = repeat_2_0(a_5, _id, t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm q_24 = t;
  int r_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(r_24);
    }
  else
    {
      t = q_24;
      {
        ATerm s_24 = t;
        int t_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL;
            g_52 = t;
            if(match_cons(t, sym_CallT_3))
              {
                h_52 = ATgetArgument(t, 0);
                i_52 = ATgetArgument(t, 1);
                j_52 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = g_52;
            t = r_8(h_52, i_52, j_52, t);
            LocalPopChoice(t_24);
          }
        else
          {
            t = s_24;
            {
              ATerm x_24 = t;
              int y_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(y_24);
                }
              else
                {
                  t = x_24;
                  {
                    ATerm z_24 = t;
                    int b_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(b_25);
                      }
                    else
                      {
                        t = z_24;
                        {
                          ATerm d_25 = t;
                          int f_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_25 = t;
                              int h_25 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      r_52 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = r_52;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      s_52 = ATgetArgument(t, 0);
                                      t = s_52;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          s_52 = ATgetArgument(t, 0);
                                          t_52 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, s_52, t_52);
                                    }
                                  LocalPopChoice(h_25);
                                }
                              else
                                {
                                  t = g_25;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(f_25);
                            }
                          else
                            {
                              t = d_25;
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
  ATerm h_53 = NULL,i_53 = NULL;
  i_53 = t;
  t = SSL_explode_term(i_53);
  if(match_cons(t, sym__2))
    {
      ATerm j_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_25 = ATgetArgument(t, 1);
        if(((ATgetType(m_25) == AT_LIST) && !(ATisEmpty(m_25))))
          {
            h_53 = ATgetFirst((ATermList) m_25);
            {
              ATerm o_25 = (ATerm) ATgetNext((ATermList) m_25);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_53;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL;
  w_24 = t;
  t = SSL_explode_term(w_24);
  if(match_cons(t, sym__2))
    {
      ATerm p_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_25 = ATgetArgument(t, 1);
        if(((ATgetType(q_25) == AT_LIST) && !(ATisEmpty(q_25))))
          {
            ATerm s_25 = ATgetFirst((ATermList) q_25);
            u_24 = (ATerm) ATgetNext((ATermList) q_25);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_j_20;
  v_24 = t;
  t = SSL_mkterm(v_24, u_24);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm e_98 (ATerm), ATerm t)
{
  ATerm b_53 = NULL,c_53 = NULL;
  static ATerm j_53 (ATerm t)
  {
    ATerm u_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_53 = NULL,e_53 = NULL,f_53 = NULL;
        d_53 = t;
        t = map_1_0(b_5, t);
        t = e_98(t);
        e_53 = t;
        t = d_53;
        t = map_1_0(c_5, t);
        t = j_53(t);
        f_53 = t;
        t = (ATerm) ATinsert(CheckATermList(f_53), e_53);
        LocalPopChoice(w_25);
      }
    else
      {
        t = u_25;
        t = map_1_0(d_5, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = j_53(t);
  c_53 = t;
  t = term_j_20;
  b_53 = t;
  t = SSL_mkterm(b_53, c_53);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm k_53 = NULL;
  k_53 = t;
  {
    ATerm z_25 = t;
    int a_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_53 = NULL,n_53 = NULL,o_53 = NULL;
        t = k_53;
        t = new_0_0(t);
        m_53 = t;
        t = new_0_0(t);
        n_53 = t;
        t = new_0_0(t);
        o_53 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_53), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_j_20, (ATerm) ATinsert(ATinsert(ATempty, k_53), (ATerm) ATmakeAppl(sym_Var_1, n_53))), (ATerm) ATmakeAppl(sym_Var_1, o_53)), (ATerm)ATmakeAppl(sym_VarDec_2, m_53, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_26), term_e_26)), n_53, (ATerm)ATmakeAppl(sym_Var_1, n_53), o_53, (ATerm) ATmakeAppl(sym_Var_1, o_53));
        LocalPopChoice(a_26);
      }
    else
      {
        t = z_25;
        {
          ATerm q_53 = NULL,r_53 = NULL,s_53 = NULL;
          t = k_53;
          t = new_0_0(t);
          q_53 = t;
          t = new_0_0(t);
          r_53 = t;
          t = new_0_0(t);
          s_53 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, q_53), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_j_20, (ATerm) ATinsert(ATinsert(ATempty, k_53), (ATerm) ATmakeAppl(sym_Var_1, r_53))), (ATerm) ATmakeAppl(sym_Var_1, s_53)), (ATerm)ATmakeAppl(sym_VarDec_2, q_53, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_26), term_e_26)), r_53, (ATerm)ATmakeAppl(sym_Var_1, r_53), s_53, (ATerm) ATmakeAppl(sym_Var_1, s_53));
        }
      }
  }
  return(t);
}
static ATerm w_8 (ATerm n_48, ATerm o_48, ATerm t)
{
  ATerm f_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(n_48, o_48);
      LocalPopChoice(g_26);
    }
  else
    {
      t = f_26;
      t = SSL_subtr(n_48, o_48);
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm t_53 = NULL,u_53 = NULL;
  if(match_cons(t, sym__2))
    {
      t_53 = ATgetArgument(t, 0);
      u_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, t_53, u_53, (ATerm) ATempty);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm v_53 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm h_26 = ATgetArgument(t, 0);
      if(((ATgetType(h_26) != AT_INT) || (ATgetInt((ATermInt) h_26) != 0)))
        _fail(t);
      {
        ATerm j_26 = ATgetArgument(t, 1);
      }
      v_53 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_53;
  return(t);
}
ATerm copy_1_0 (ATerm u_115 (ATerm), ATerm t)
{
  static ATerm g_5 (ATerm t)
  {
    ATerm w_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL;
    if(match_cons(t, sym__3))
      {
        w_53 = ATgetArgument(t, 0);
        x_53 = ATgetArgument(t, 1);
        y_53 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, w_53, term_t_17);
    t = geq_0_0(t);
    t = term_t_17;
    b_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_53, term_t_17);
    t = w_8(w_53, b_54, t);
    z_53 = t;
    t = x_53;
    t = u_115(t);
    a_54 = t;
    t = (ATerm) ATmakeAppl(sym__3, z_53, x_53, (ATerm) ATinsert(CheckATermList(y_53), a_54));
    return(t);
  }
  t = for_3_0(e_5, f_5, g_5, t);
  return(t);
}
static ATerm x_8 (ATerm r_22, ATerm s_22, ATerm t)
{
  ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL;
  t = new_0_0(t);
  c_54 = t;
  t = new_0_0(t);
  d_54 = t;
  t = new_0_0(t);
  e_54 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, c_54), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_j_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, r_22)), (ATerm) ATmakeAppl(sym_Var_1, d_54))), (ATerm) ATmakeAppl(sym_Op_2, term_j_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, s_22)), (ATerm) ATmakeAppl(sym_Var_1, e_54)))), (ATerm)ATmakeAppl(sym_VarDec_2, c_54, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_26), term_e_26)), d_54, (ATerm)ATmakeAppl(sym_Var_1, d_54), e_54, (ATerm) ATmakeAppl(sym_Var_1, e_54));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm i_54 = NULL,j_54 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_54 = ATgetFirst((ATermList) t);
      j_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_54;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_54;
    }
  else
    {
      t = j_54;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm h_58 (ATerm c_55, ATerm d_55, ATerm e_55, ATerm f_55, ATerm t)
{
  ATerm n_55 = NULL,o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL,c_56 = NULL,d_56 = NULL,e_56 = NULL;
  t = term_t_17;
  e_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_55, term_t_17);
  t = z_9(d_55, e_56, t);
  d_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_56, term_k_26);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_55 = ATgetFirst((ATermList) t);
      p_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_55;
  t = last_0_0(t);
  n_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_55), o_55), p_55);
  t = genzip_4_0(h_5, i_5, k_5, l_5, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      q_55 = ATgetArgument(t, 0);
      r_55 = ATgetArgument(t, 1);
      s_55 = ATgetArgument(t, 2);
      z_55 = ATgetArgument(t, 3);
      a_56 = ATgetArgument(t, 4);
      b_56 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_56), s_55), p_55);
  t = concat_0_0(t);
  c_56 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, c_55, term_l_26), r_55, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(c_56), o_55), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_j_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, o_55)), (ATerm) ATmakeAppl(sym_Op_2, c_55, z_55))), (ATerm)ATmakeAppl(sym_Op_2, term_j_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, n_55)), (ATerm) ATmakeAppl(sym_Op_2, c_55, b_56))), (ATerm) ATmakeAppl(sym_Seqs_1, q_55)))));
  return(t);
}
static ATerm p_58 (ATerm s_56, ATerm t_56, ATerm u_56, ATerm v_56, ATerm t)
{
  ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL;
  t = v_56;
  t = new_0_0(t);
  e_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_56, (ATerm) ATmakeAppl(sym_Var_1, e_57));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      f_57 = ATgetArgument(t, 0);
      g_57 = ATgetArgument(t, 1);
      h_57 = ATgetArgument(t, 2);
      i_57 = ATgetArgument(t, 3);
      j_57 = ATgetArgument(t, 4);
      k_57 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_57, j_57);
  t = conc_0_0(t);
  l_57 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, s_56, term_p_26), g_57, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(l_57), e_57), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_j_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, e_57)), (ATerm) ATmakeAppl(sym_Op_2, s_56, i_57))), (ATerm)ATmakeAppl(sym_Op_2, s_56, k_57), (ATerm) ATmakeAppl(sym_Seqs_1, f_57)))));
  return(t);
}
static ATerm h_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_26 = ATgetArgument(t, 0);
      ATerm u_26 = ATgetArgument(t, 1);
      if(((ATgetType(u_26) != AT_LIST) || !(ATisEmpty(u_26))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_27 = ATgetArgument(t, 0);
      if(((ATgetType(c_27) == AT_LIST) && !(ATisEmpty(c_27))))
        {
          f_56 = ATgetFirst((ATermList) c_27);
          g_56 = (ATerm) ATgetNext((ATermList) c_27);
        }
      else
        _fail(t);
      {
        ATerm d_27 = ATgetArgument(t, 1);
        if(((ATgetType(d_27) == AT_LIST) && !(ATisEmpty(d_27))))
          {
            h_56 = ATgetFirst((ATermList) d_27);
            i_56 = (ATerm) ATgetNext((ATermList) d_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_56, h_56), (ATerm) ATmakeAppl(sym__2, g_56, i_56));
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm j_56 = NULL,k_56 = NULL;
  if(match_cons(t, sym__2))
    {
      j_56 = ATgetArgument(t, 0);
      k_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_56), j_56);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm m_56 = NULL,n_56 = NULL;
  if(match_cons(t, sym__2))
    {
      m_56 = ATgetArgument(t, 0);
      n_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_8(m_56, n_56, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm n_57 = NULL,q_57 = NULL,r_57 = NULL,s_57 = NULL,z_57 = NULL,a_58 = NULL;
  n_57 = t;
  if(match_cons(t, sym__3))
    {
      q_57 = ATgetArgument(t, 0);
      r_57 = ATgetArgument(t, 1);
      s_57 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = r_57;
  if(match_string(t, "T"))
    {
      t = s_57;
      if(match_cons(t, sym__2))
        {
          z_57 = ATgetArgument(t, 0);
          a_58 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_57;
      if(match_int(t, 0))
        {
          ATerm e_27 = t;
          int g_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_58(q_57, z_57, a_58, n_57, t);
              LocalPopChoice(g_27);
            }
          else
            {
              t = e_27;
              {
                ATerm f_58 = NULL;
                t = n_57;
                t = new_0_0(t);
                f_58 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, q_57, term_l_26), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_58), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_j_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, f_58)), (ATerm) ATmakeAppl(sym_Op_2, q_57, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_j_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, f_58)), (ATerm) ATmakeAppl(sym_Op_2, q_57, (ATerm) ATempty))), term_c_22))));
              }
            }
        }
      else
        {
          t = h_58(q_57, z_57, a_58, n_57, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = s_57;
      if(match_cons(t, sym__2))
        {
          z_57 = ATgetArgument(t, 0);
          a_58 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_58(q_57, z_57, a_58, n_57, t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm h_106 (ATerm), ATerm t)
{
  ATerm q_11 = NULL;
  static ATerm m_5 (ATerm t)
  {
    t = h_106(t);
    if(((q_11 != NULL) && (q_11 != t)))
      _fail(t);
    else
      q_11 = t;
    return(t);
  }
  t = fetch_1_0(m_5, t);
  t = not_null(q_11);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm r_11 = NULL,u_11 = NULL,z_11 = NULL;
  t = term_u_15;
  u_11 = t;
  t = (ATerm) ATinsert(ATempty, term_h_27);
  z_11 = t;
  t = SSL_printnl(u_11, z_11);
  t = term_t_17;
  r_11 = t;
  t = SSL_exit(r_11);
  t = (ATerm) ATinsert(ATempty, term_h_27);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = term_i_27;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL;
  ATerm j_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          ATerm l_27 = ATgetArgument(t, 0);
          l_10 = ATgetArgument(t, 1);
          m_10 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(k_27);
      t = m_10;
      t = foldr_3_0(t_5, u_5, d_6, t);
      t = l_10;
      t = foldr_3_0(e_6, f_6, h_6, t);
    }
  else
    {
      t = j_27;
      if(match_cons(t, sym_ExtSDefInl_4))
        {
          ATerm p_27 = ATgetArgument(t, 0);
          l_10 = ATgetArgument(t, 1);
          m_10 = ATgetArgument(t, 2);
          {
            ATerm q_27 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = m_10;
      t = foldr_3_0(i_6, k_6, n_6, t);
      t = l_10;
      t = foldr_3_0(o_6, q_6, r_6, t);
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_s_17;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm s_10 = NULL,t_10 = NULL;
  if(match_cons(t, sym__2))
    {
      s_10 = ATgetArgument(t, 0);
      t_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_9(s_10, t_10, t);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_t_17;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_s_17;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL;
  if(match_cons(t, sym__2))
    {
      v_10 = ATgetArgument(t, 0);
      w_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_9(v_10, w_10, t);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_t_17;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_s_17;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm a_11 = NULL,c_11 = NULL;
  if(match_cons(t, sym__2))
    {
      a_11 = ATgetArgument(t, 0);
      c_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_9(a_11, c_11, t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_t_17;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_s_17;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL;
  if(match_cons(t, sym__2))
    {
      d_11 = ATgetArgument(t, 0);
      e_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_9(d_11, e_11, t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_t_17;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      ATerm r_27 = ATgetArgument(t, 0);
      ATerm s_27 = ATgetArgument(t, 1);
      ATerm t_27 = ATgetArgument(t, 2);
      ATerm u_27 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  return(t);
}
ATerm JoinDefsExt_0_0 (ATerm t)
{
  ATerm v_27 = t;
  int w_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_12 = NULL;
      static ATerm o_5 (ATerm t)
      {
        ATerm m_12 = NULL,n_12 = NULL;
        m_12 = t;
        {
          ATerm x_27 = t;
          int y_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDef_3))
                {
                  n_12 = ATgetArgument(t, 0);
                  {
                    ATerm z_27 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm a_28 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(y_27);
              t = n_12;
              if(((l_12 != NULL) && (l_12 != t)))
                _fail(t);
              else
                l_12 = t;
              t = m_12;
            }
          else
            {
              t = x_27;
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  n_12 = ATgetArgument(t, 0);
                  {
                    ATerm c_28 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm d_28 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm f_28 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              t = n_12;
              if(((l_12 != NULL) && (l_12 != t)))
                _fail(t);
              else
                l_12 = t;
              t = m_12;
            }
        }
        return(t);
      }
      t = fetch_1_0(o_5, t);
      {
        static ATerm p_5 (ATerm t)
        {
          if(match_cons(t, sym_SDefT_4))
            {
              if(((l_12 != NULL) && (l_12 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                l_12 = ATgetArgument(t, 0);
              {
                ATerm g_28 = ATgetArgument(t, 1);
              }
              {
                ATerm h_28 = ATgetArgument(t, 2);
              }
              {
                ATerm i_28 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(p_5, t);
      }
      t = not_null(l_12);
      t = debug_1_0(q_5, t);
      t = giving_up_0_0(t);
      LocalPopChoice(w_27);
    }
  else
    {
      t = v_27;
      {
        ATerm z_13 = NULL;
        z_13 = t;
        t = map_1_0(s_5, t);
        t = z_13;
        {
          ATerm j_28 = t;
          int k_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = fetch_elem_1_0(t_6, t);
              LocalPopChoice(k_28);
            }
          else
            {
              t = j_28;
              {
                ATerm m_11 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    m_11 = ATgetFirst((ATermList) t);
                    {
                      ATerm l_28 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = m_11;
              }
            }
        }
      }
    }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = term_b_22;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL,v_11 = NULL;
  h_14 = t;
  t = SSL_explode_term(h_14);
  if(match_cons(t, sym__2))
    {
      ATerm m_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_28 = ATgetArgument(t, 1);
        if(((ATgetType(n_28) == AT_LIST) && !(ATisEmpty(n_28))))
          {
            i_14 = ATgetFirst((ATermList) n_28);
            {
              ATerm o_28 = (ATerm) ATgetNext((ATermList) n_28);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(h_14);
  if(match_cons(t, sym__2))
    {
      ATerm p_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_28 = ATgetArgument(t, 1);
        if(((ATgetType(r_28) == AT_LIST) && !(ATisEmpty(r_28))))
          {
            ATerm s_28 = ATgetFirst((ATermList) r_28);
            ATerm u_28 = (ATerm) ATgetNext((ATermList) r_28);
            if(((ATgetType(u_28) == AT_LIST) && !(ATisEmpty(u_28))))
              {
                v_11 = ATgetFirst((ATermList) u_28);
                {
                  ATerm v_28 = (ATerm) ATgetNext((ATermList) u_28);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, i_14, v_11);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(u_6, v_6, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm m_14 = NULL,p_14 = NULL,r_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL;
  r_14 = t;
  if(match_cons(t, sym__2))
    {
      y_14 = ATgetArgument(t, 0);
      z_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_14;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_15 = ATgetFirst((ATermList) t);
      b_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_15;
  if(match_cons(t, sym__2))
    {
      m_14 = ATgetArgument(t, 0);
      p_14 = ATgetArgument(t, 1);
      {
        ATerm w_28 = t;
        int y_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_14;
            if((y_14 != t))
              {
                _fail(t);
              }
            t = p_14;
            LocalPopChoice(y_28);
          }
        else
          {
            t = w_28;
            t = (ATerm) ATmakeAppl(sym__2, y_14, b_15);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, y_14, b_15);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm u_95 (ATerm), ATerm t)
{
  static ATerm y_15 (ATerm t)
  {
    ATerm z_28 = t;
    int b_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_95(t);
        LocalPopChoice(b_29);
      }
    else
      {
        t = z_28;
        t = SRTS_all(y_15, t);
      }
    return(t);
  }
  t = y_15(t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_29 = ATgetArgument(t, 0);
      if(((ATgetType(c_29) != AT_LIST) || !(ATisEmpty(c_29))))
        _fail(t);
      {
        ATerm d_29 = ATgetArgument(t, 1);
        if(((ATgetType(d_29) != AT_LIST) || !(ATisEmpty(d_29))))
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
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_29 = ATgetArgument(t, 0);
      if(((ATgetType(e_29) == AT_LIST) && !(ATisEmpty(e_29))))
        {
          k_17 = ATgetFirst((ATermList) e_29);
          l_17 = (ATerm) ATgetNext((ATermList) e_29);
        }
      else
        _fail(t);
      {
        ATerm f_29 = ATgetArgument(t, 1);
        if(((ATgetType(f_29) == AT_LIST) && !(ATisEmpty(f_29))))
          {
            m_17 = ATgetFirst((ATermList) f_29);
            n_17 = (ATerm) ATgetNext((ATermList) f_29);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_17, m_17), (ATerm) ATmakeAppl(sym__2, l_17, n_17));
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL;
  if(match_cons(t, sym__2))
    {
      q_17 = ATgetArgument(t, 0);
      r_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_17), q_17);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm i_16 = NULL,k_16 = NULL,n_16 = NULL,u_16 = NULL;
  i_16 = t;
  {
    ATerm g_29 = t;
    int h_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_29 = ATgetArgument(t, 0);
            ATerm j_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(h_29);
        t = i_16;
      }
    else
      {
        t = g_29;
        {
          ATerm j_17 = NULL;
          if(match_cons(t, sym__3))
            {
              k_16 = ATgetArgument(t, 0);
              n_16 = ATgetArgument(t, 1);
              u_16 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, k_16, n_16);
          t = genzip_4_0(w_6, z_6, a_7, _id, t);
          j_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_17, u_16);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm l_93 (ATerm), ATerm m_93 (ATerm), ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL;
  static ATerm h_7 (ATerm t)
  {
    ATerm y_11 = NULL;
    t = l_93(t);
    y_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_11, not_null(w_17));
    t = lookup_0_0(t);
    t = m_93(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((w_17 != NULL) && (w_17 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_17 = ATgetArgument(t, 0);
      v_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_17;
  t = alltd_1_0(h_7, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,p_3 = NULL;
  g_19 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      d_19 = ATgetArgument(t, 0);
      e_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_19);
  c_19 = t;
  t = d_19;
  t = new_0_0(t);
  f_19 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, f_19, e_19);
  p_3 = t;
  t = SSLsetAnnotations(p_3, c_19);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL,n_19 = NULL,p_19 = NULL,q_19 = NULL,q_3 = NULL;
  q_19 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      i_19 = ATgetArgument(t, 0);
      n_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_19);
  h_19 = t;
  t = i_19;
  t = new_0_0(t);
  p_19 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, p_19, n_19);
  q_3 = t;
  t = SSLsetAnnotations(q_3, h_19);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm s_19 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      s_19 = ATgetArgument(t, 0);
      {
        ATerm k_29 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, s_19), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm t_19 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      t_19 = ATgetArgument(t, 0);
      {
        ATerm l_29 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, t_19);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm d_20 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      d_20 = ATgetArgument(t, 0);
      {
        ATerm m_29 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = d_20;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm g_20 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      g_20 = ATgetArgument(t, 0);
      {
        ATerm n_29 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = g_20;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm h_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      t_20 = ATgetArgument(t, 0);
      v_20 = ATgetArgument(t, 1);
      h_20 = ATgetArgument(t, 2);
      t = t_20;
      if(match_cons(t, sym_SVar_1))
        {
          u_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_20;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_20;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_20;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          t_20 = ATgetArgument(t, 0);
          v_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_20;
      if(match_cons(t, sym_SVar_1))
        {
          u_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_20;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_20;
    }
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm b_21 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_21;
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL,y_18 = NULL;
  u_18 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_29 = ATgetFirst((ATermList) t);
      if(match_cons(o_29, sym_SDefT_4))
        {
          l_18 = ATgetArgument(o_29, 0);
          m_18 = ATgetArgument(o_29, 1);
          n_18 = ATgetArgument(o_29, 2);
          {
            ATerm q_29 = ATgetArgument(o_29, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm p_29 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = m_18;
  t = map_1_0(m_7, t);
  o_18 = t;
  t = n_18;
  t = map_1_0(n_7, t);
  t_18 = t;
  t = o_18;
  t = map_1_0(q_7, t);
  w_18 = t;
  t = t_18;
  t = map_1_0(u_7, t);
  v_18 = t;
  t = u_18;
  {
    static ATerm v_7 (ATerm t)
    {
      ATerm u_19 = NULL,v_19 = NULL,y_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm r_29 = ATgetArgument(t, 0);
          u_19 = ATgetArgument(t, 1);
          v_19 = ATgetArgument(t, 2);
          y_19 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = v_19;
      t = map_1_0(w_7, t);
      a_20 = t;
      t = u_19;
      t = map_1_0(b_8, t);
      c_20 = t;
      t = (ATerm) ATmakeAppl(sym__3, c_20, w_18, y_19);
      t = substitute_2_0(d_8, _id, t);
      b_20 = t;
      t = (ATerm) ATmakeAppl(sym__3, a_20, v_18, b_20);
      t = substitute_2_0(i_8, _id, t);
      return(t);
    }
    t = map_1_0(v_7, t);
  }
  t = choices_0_0(t);
  y_18 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, l_18, o_18, t_18, y_18);
  return(t);
}
static ATerm v_61 (ATerm j_59, ATerm k_59, ATerm l_59, ATerm n_59, ATerm t)
{
  ATerm t_59 = NULL,u_59 = NULL,w_59 = NULL,x_59 = NULL,u_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_59, k_59);
  t = Definitions_0_0(t);
  t_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_59, l_59);
  x_59 = t;
  if(match_cons(t, sym__2))
    {
      ATerm s_29 = ATgetArgument(t, 0);
      ATerm t_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_59);
  u_59 = t;
  t = t_59;
  {
    ATerm v_29 = t;
    int w_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_60 = NULL,j_60 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_60 = ATgetFirst((ATermList) t);
            j_60 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_60;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_60;
        LocalPopChoice(w_29);
      }
    else
      {
        t = v_29;
        {
          ATerm y_29 = t;
          int z_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = JoinDefs2_0_0(t);
              LocalPopChoice(z_29);
            }
          else
            {
              t = y_29;
              t = JoinDefsExt_0_0(t);
            }
        }
      }
  }
  w_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_59, l_59);
  u_3 = t;
  t = SSLsetAnnotations(u_3, u_59);
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm p_60 = NULL,v_60 = NULL,w_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL,p_61 = NULL;
  w_60 = t;
  if(match_cons(t, sym__2))
    {
      y_60 = ATgetArgument(t, 0);
      p_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_60;
  if(match_cons(t, sym__2))
    {
      z_60 = ATgetArgument(t, 0);
      a_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_60;
  if(match_cons(t, sym_Mod_2))
    {
      p_60 = ATgetArgument(t, 0);
      v_60 = ATgetArgument(t, 1);
      {
        ATerm a_30 = t;
        int b_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_61 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, p_60, v_60, a_61);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            u_61 = t;
            t = (ATerm) ATmakeAppl(sym__2, u_61, p_61);
            LocalPopChoice(b_30);
          }
        else
          {
            t = a_30;
            t = v_61(z_60, a_61, p_61, w_60, t);
          }
      }
    }
  else
    {
      t = v_61(z_60, a_61, p_61, w_60, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm l_106 (ATerm), ATerm t)
{
  static ATerm v_62 (ATerm t)
  {
    ATerm q_62 = NULL,r_62 = NULL,s_62 = NULL;
    s_62 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_62 = ATgetFirst((ATermList) t);
        r_62 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm a_25 = NULL,e_25 = NULL,w_3 = NULL;
          t = SSLgetAnnotations(s_62);
          a_25 = t;
          t = r_62;
          t = v_62(t);
          e_25 = t;
          t = (ATerm) ATinsert(CheckATermList(e_25), q_62);
          w_3 = t;
          t = SSLsetAnnotations(w_3, a_25);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_62;
        t = l_106(t);
      }
    return(t);
  }
  t = v_62(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL;
  x_61 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_61;
    }
  else
    {
      static ATerm j_8 (ATerm t)
      {
        t = not_null(z_61);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_61 = ATgetFirst((ATermList) t);
          if(((z_61 != NULL) && (z_61 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            z_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_61;
      t = at_end_1_0(j_8, t);
    }
  return(t);
}
static ATerm o_63 (ATerm z_62, ATerm t)
{
  ATerm a_63 = NULL;
  t = SSL_explode_term(z_62);
  if(match_cons(t, sym__2))
    {
      ATerm d_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_30) != ATmakeSymbol("", 0, ATtrue)))
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
  ATerm h_63 = NULL,j_63 = NULL,l_63 = NULL;
  l_63 = t;
  if(match_cons(t, sym__2))
    {
      h_63 = ATgetArgument(t, 0);
      j_63 = ATgetArgument(t, 1);
      {
        ATerm e_30 = t;
        int g_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm k_8 (ATerm t)
            {
              t = j_63;
              return(t);
            }
            t = h_63;
            t = at_end_1_0(k_8, t);
            LocalPopChoice(g_30);
          }
        else
          {
            t = e_30;
            t = o_63(l_63, t);
          }
      }
    }
  else
    {
      t = o_63(l_63, t);
    }
  return(t);
}
static ATerm d_9 (ATerm r_112 (ATerm), ATerm w_58, ATerm v_58, ATerm t)
{
  static ATerm v_64 (ATerm t)
  {
    ATerm n_64 = NULL,o_64 = NULL,r_64 = NULL;
    n_64 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_64;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_64 = ATgetFirst((ATermList) t);
            r_64 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_30 = t;
          int i_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_64;
              {
                static ATerm m_8 (ATerm t)
                {
                  t = v_58;
                  return(t);
                }
                t = q_9(r_112, m_8, o_64, r_64, t);
              }
              t = v_64(t);
              LocalPopChoice(i_30);
            }
          else
            {
              t = h_30;
              {
                ATerm r_25 = NULL,v_25 = NULL,a_4 = NULL;
                t = SSLgetAnnotations(n_64);
                r_25 = t;
                t = r_64;
                t = v_64(t);
                v_25 = t;
                t = (ATerm) ATinsert(CheckATermList(v_25), o_64);
                a_4 = t;
                t = SSLsetAnnotations(a_4, r_25);
              }
            }
        }
      }
    return(t);
  }
  t = w_58;
  t = v_64(t);
  return(t);
}
ATerm genzip_4_0 (ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm r_98 (ATerm), ATerm t)
{
  static ATerm g_65 (ATerm t)
  {
    ATerm k_30 = t;
    int l_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_98(t);
        LocalPopChoice(l_30);
      }
    else
      {
        t = k_30;
        {
          ATerm x_64 = NULL,y_64 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL,f_65 = NULL,c_4 = NULL;
          t = p_98(t);
          f_65 = t;
          if(match_cons(t, sym__2))
            {
              y_64 = ATgetArgument(t, 0);
              b_65 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(f_65);
          x_64 = t;
          t = y_64;
          t = r_98(t);
          c_65 = t;
          t = b_65;
          t = g_65(t);
          d_65 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_65, d_65);
          c_4 = t;
          t = SSLsetAnnotations(c_4, x_64);
          t = q_98(t);
        }
      }
    return(t);
  }
  t = g_65(t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_30 = ATgetArgument(t, 0);
      if(((ATgetType(n_30) != AT_LIST) || !(ATisEmpty(n_30))))
        _fail(t);
      {
        ATerm o_30 = ATgetArgument(t, 1);
        if(((ATgetType(o_30) != AT_LIST) || !(ATisEmpty(o_30))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm y_65 = NULL,z_65 = NULL,c_66 = NULL,d_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_30 = ATgetArgument(t, 0);
      if(((ATgetType(p_30) == AT_LIST) && !(ATisEmpty(p_30))))
        {
          y_65 = ATgetFirst((ATermList) p_30);
          z_65 = (ATerm) ATgetNext((ATermList) p_30);
        }
      else
        _fail(t);
      {
        ATerm q_30 = ATgetArgument(t, 1);
        if(((ATgetType(q_30) == AT_LIST) && !(ATisEmpty(q_30))))
          {
            c_66 = ATgetFirst((ATermList) q_30);
            d_66 = (ATerm) ATgetNext((ATermList) q_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_65, c_66), (ATerm) ATmakeAppl(sym__2, z_65, d_66));
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm e_66 = NULL,g_66 = NULL;
  if(match_cons(t, sym__2))
    {
      e_66 = ATgetArgument(t, 0);
      g_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_66), e_66);
  return(t);
}
static ATerm i_9 (ATerm l_683, ATerm q_683, ATerm k_69, ATerm t)
{
  ATerm k_65 = NULL,l_65 = NULL,v_65 = NULL,w_65 = NULL;
  t = SSL_explode_term(q_683);
  if(match_cons(t, sym__2))
    {
      k_65 = ATgetArgument(t, 0);
      v_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(l_683);
  if(match_cons(t, sym__2))
    {
      if((k_65 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      l_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_65, v_65);
  t = genzip_4_0(n_8, o_8, p_8, _id, t);
  w_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_65, k_69);
  t = conc_0_0(t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm v_66 = NULL;
  v_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, v_66);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL,c_67 = NULL,e_4 = NULL;
  c_67 = t;
  if(match_cons(t, sym__2))
    {
      z_66 = ATgetArgument(t, 0);
      a_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_67);
  y_66 = t;
  t = a_67;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_66, a_67);
  e_4 = t;
  t = SSLsetAnnotations(e_4, y_66);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm x_67 = NULL,y_67 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL;
  x_67 = t;
  if(match_cons(t, sym__2))
    {
      y_67 = ATgetArgument(t, 0);
      b_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_68;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_68 = ATgetFirst((ATermList) t);
      d_68 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_30 = t;
        int s_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_68(y_67, b_68, x_67, t);
            LocalPopChoice(s_30);
          }
        else
          {
            t = r_30;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_67), c_68), d_68);
          }
      }
    }
  else
    {
      t = o_68(y_67, b_68, x_67, t);
    }
  return(t);
}
static ATerm o_68 (ATerm d_67, ATerm e_67, ATerm f_67, ATerm t)
{
  ATerm g_67 = NULL,j_67 = NULL,f_4 = NULL,m_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL;
  t = SSLgetAnnotations(f_67);
  g_67 = t;
  t = e_67;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_67 = ATgetFirst((ATermList) t);
      r_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_67;
  if(match_cons(t, sym__2))
    {
      p_67 = ATgetArgument(t, 0);
      q_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_30 = t;
    int u_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_67;
        if((p_67 != t))
          {
            _fail(t);
          }
        t = r_67;
        LocalPopChoice(u_30);
      }
    else
      {
        t = t_30;
        t = e_67;
        t = i_9(p_67, q_67, r_67, t);
      }
  }
  j_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_67, j_67);
  f_4 = t;
  t = SSLsetAnnotations(f_4, g_67);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm n_68 = NULL;
  if(match_cons(t, sym__2))
    {
      n_68 = ATgetArgument(t, 0);
      if((n_68 != ATgetArgument(t, 1)))
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
  ATerm v_30 = t;
  int x_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(s_8, t_8, y_8, t);
      LocalPopChoice(x_30);
    }
  else
    {
      t = v_30;
      {
        ATerm h_68 = NULL,i_68 = NULL,j_68 = NULL;
        h_68 = t;
        if(match_cons(t, sym__2))
          {
            i_68 = ATgetArgument(t, 0);
            j_68 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_68;
        t = d_9(a_9, i_68, j_68, t);
      }
    }
  return(t);
}
static ATerm k_9 (ATerm f_125 (ATerm), ATerm g_125 (ATerm), ATerm h_125 (ATerm), ATerm l_70, ATerm i_70, ATerm q_70, ATerm m_70, ATerm j_70, ATerm k_70, ATerm t)
{
  ATerm p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL,w_68 = NULL,x_68 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_70, m_70);
  t = f_125(t);
  if(match_cons(t, sym__2))
    {
      q_68 = ATgetArgument(t, 0);
      p_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_68;
  t = g_125(t);
  r_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_68, q_70);
  t = diff_0_0(t);
  s_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_68, i_70);
  t = conc_0_0(t);
  t_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_68, q_70);
  t = conc_0_0(t);
  w_68 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_70, q_68, j_70);
  t = h_125(t);
  x_68 = t;
  t = (ATerm) ATmakeAppl(sym__5, t_68, w_68, p_68, x_68, k_70);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm f_125 (ATerm), ATerm g_125 (ATerm), ATerm h_125 (ATerm), ATerm t)
{
  ATerm z_68 = NULL,a_69 = NULL,b_69 = NULL,c_69 = NULL,d_69 = NULL,f_69 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm y_30 = ATgetArgument(t, 0);
      if(((ATgetType(y_30) == AT_LIST) && !(ATisEmpty(y_30))))
        {
          z_68 = ATgetFirst((ATermList) y_30);
          a_69 = (ATerm) ATgetNext((ATermList) y_30);
        }
      else
        _fail(t);
      b_69 = ATgetArgument(t, 1);
      c_69 = ATgetArgument(t, 2);
      d_69 = ATgetArgument(t, 3);
      f_69 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = k_9(f_125, g_125, h_125, z_68, a_69, b_69, c_69, d_69, f_69, t);
  return(t);
}
ATerm while_not_2_0 (ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm t)
{
  static ATerm g_69 (ATerm t)
  {
    ATerm a_31 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_100(t);
        LocalPopChoice(b_31);
      }
    else
      {
        t = a_31;
        t = p_100(t);
        t = g_69(t);
      }
    return(t);
  }
  t = g_69(t);
  return(t);
}
ATerm for_3_0 (ATerm r_100 (ATerm), ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm t)
{
  t = r_100(t);
  t = while_not_2_0(s_100, t_100, t);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm y_69 = NULL,z_69 = NULL,a_70 = NULL;
  if(match_cons(t, sym__3))
    {
      y_69 = ATgetArgument(t, 0);
      z_69 = ATgetArgument(t, 1);
      a_70 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, y_69, y_69, z_69, a_70, (ATerm) ATempty);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm t_70 = NULL,u_70 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm c_31 = ATgetArgument(t, 0);
      if(((ATgetType(c_31) != AT_LIST) || !(ATisEmpty(c_31))))
        _fail(t);
      {
        ATerm d_31 = ATgetArgument(t, 1);
      }
      {
        ATerm e_31 = ATgetArgument(t, 2);
      }
      t_70 = ATgetArgument(t, 3);
      u_70 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_70, u_70);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm f_31 = t;
  int g_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, l_9, m_9, t);
      LocalPopChoice(g_31);
    }
  else
    {
      t = f_31;
      {
        ATerm a_71 = NULL,b_71 = NULL,c_71 = NULL,d_71 = NULL,e_71 = NULL,f_71 = NULL,m_71 = NULL;
        if(match_cons(t, sym__5))
          {
            a_71 = ATgetArgument(t, 0);
            d_71 = ATgetArgument(t, 1);
            e_71 = ATgetArgument(t, 2);
            f_71 = ATgetArgument(t, 3);
            m_71 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = a_71;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_71 = ATgetFirst((ATermList) t);
            c_71 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, c_71, d_71, e_71, f_71, (ATerm) ATinsert(CheckATermList(m_71), b_71));
      }
    }
  return(t);
}
static ATerm l_9 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(o_9, t);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm x_70 = NULL,y_70 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm h_31 = ATgetArgument(t, 0);
      x_70 = ATgetArgument(t, 1);
      y_70 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_70), x_70);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm i_31 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      LocalPopChoice(j_31);
    }
  else
    {
      t = i_31;
    }
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL;
  z_26 = t;
  if(match_cons(t, sym__2))
    {
      a_27 = ATgetArgument(t, 0);
      b_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_27;
  if(match_cons(t, sym_Mod_2))
    {
      x_26 = ATgetArgument(t, 0);
      y_26 = ATgetArgument(t, 1);
      {
        ATerm m_31 = t;
        int n_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_26;
            t = e_8(x_26, y_26, b_27, t);
            LocalPopChoice(n_31);
          }
        else
          {
            t = m_31;
            t = f_27(a_27, b_27, t);
          }
      }
    }
  else
    {
      t = f_27(a_27, b_27, t);
    }
  return(t);
}
static ATerm f_27 (ATerm q_26, ATerm s_26, ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL;
  t = term_u_15;
  v_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_16), s_26), term_z_15), q_26), term_w_15);
  w_26 = t;
  t = SSL_printnl(v_26, w_26);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_16), s_26), term_z_15), q_26), term_w_15);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm y_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL,c_73 = NULL;
  t = for_3_0(b_9, c_9, j_9, t);
  y_72 = t;
  if(match_cons(t, sym__2))
    {
      z_72 = ATgetArgument(t, 0);
      a_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_73;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_72;
    }
  else
    {
      ATerm i_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_73 = ATgetFirst((ATermList) t);
          c_73 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(c_73), b_73);
      t = map_1_0(a_10, t);
      t = term_t_17;
      i_26 = t;
      t = SSL_exit(i_26);
    }
  return(t);
}
static ATerm b_10 (ATerm t)
{
  t = term_s_17;
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm f_74 = NULL,g_74 = NULL;
  if(match_cons(t, sym__2))
    {
      f_74 = ATgetArgument(t, 0);
      g_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_9(f_74, g_74, t);
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = term_t_17;
  return(t);
}
static ATerm i_10 (ATerm t)
{
  t = term_s_17;
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm k_74 = NULL,o_74 = NULL;
  if(match_cons(t, sym__2))
    {
      k_74 = ATgetArgument(t, 0);
      o_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_9(k_74, o_74, t);
  return(t);
}
static ATerm k_10 (ATerm t)
{
  t = term_t_17;
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm p_74 = NULL;
  if(match_cons(t, sym__2))
    {
      p_74 = ATgetArgument(t, 0);
      if((p_74 != ATgetArgument(t, 1)))
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
  t = term_q_31;
  return(t);
}
static ATerm q_10 (ATerm t)
{
  t = term_r_31;
  return(t);
}
ATerm RegisterExtSDefInl_0_0 (ATerm t)
{
  ATerm j_73 = NULL,k_73 = NULL,m_73 = NULL,n_73 = NULL,p_73 = NULL,s_73 = NULL,v_73 = NULL,w_73 = NULL,x_73 = NULL,y_73 = NULL,z_73 = NULL,a_74 = NULL,b_74 = NULL,e_74 = NULL;
  m_73 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      s_73 = ATgetArgument(t, 0);
      j_73 = ATgetArgument(t, 1);
      k_73 = ATgetArgument(t, 2);
      {
        ATerm s_31 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  w_73 = t;
  t = j_73;
  t = foldr_3_0(b_10, f_10, h_10, t);
  n_73 = t;
  t = k_73;
  t = foldr_3_0(i_10, j_10, k_10, t);
  p_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_73, (ATerm) ATmakeAppl(sym__2, n_73, p_73));
  {
    ATerm t_31 = t;
    int u_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(u_31);
      }
    else
      {
        t = t_31;
        t = (ATerm) ATempty;
      }
  }
  y_73 = t;
  t = s_73;
  {
    ATerm v_31 = t;
    int w_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(w_31);
      }
    else
      {
        t = v_31;
        t = (ATerm) ATempty;
      }
  }
  x_73 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, n_73, p_73));
  e_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, n_73, p_73)), x_73);
  t = r_9(o_10, e_74, x_73, t);
  v_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_73, (ATerm) ATmakeAppl(sym__2, n_73, p_73));
  a_74 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_x_31, (ATerm) ATinsert(CheckATermList(y_73), m_73));
  b_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_73, (ATerm) ATmakeAppl(sym__2, n_73, p_73)), (ATerm) ATmakeAppl(sym_Defined_2, term_x_31, (ATerm) ATinsert(CheckATermList(y_73), m_73)));
  t = n_9(p_10, a_74, b_74, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_y_31, v_73);
  z_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_73, (ATerm) ATmakeAppl(sym_Defined_2, term_y_31, v_73));
  t = n_9(q_10, s_73, z_73, t);
  t = w_73;
  return(t);
}
static ATerm r_10 (ATerm t)
{
  t = term_s_17;
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm e_75 = NULL,f_75 = NULL;
  if(match_cons(t, sym__2))
    {
      e_75 = ATgetArgument(t, 0);
      f_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_9(e_75, f_75, t);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  t = term_t_17;
  return(t);
}
static ATerm y_10 (ATerm t)
{
  t = term_s_17;
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm g_75 = NULL,h_75 = NULL;
  if(match_cons(t, sym__2))
    {
      g_75 = ATgetArgument(t, 0);
      h_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_9(g_75, h_75, t);
  return(t);
}
static ATerm b_11 (ATerm t)
{
  t = term_t_17;
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm i_75 = NULL;
  if(match_cons(t, sym__2))
    {
      i_75 = ATgetArgument(t, 0);
      if((i_75 != ATgetArgument(t, 1)))
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
  t = term_q_31;
  return(t);
}
static ATerm h_11 (ATerm t)
{
  t = term_r_31;
  return(t);
}
ATerm RegisterExtSDef_0_0 (ATerm t)
{
  ATerm q_74 = NULL,r_74 = NULL,s_74 = NULL,t_74 = NULL,u_74 = NULL,v_74 = NULL,w_74 = NULL,x_74 = NULL,y_74 = NULL,z_74 = NULL,a_75 = NULL,b_75 = NULL,c_75 = NULL,d_75 = NULL;
  s_74 = t;
  if(match_cons(t, sym_ExtSDef_3))
    {
      v_74 = ATgetArgument(t, 0);
      q_74 = ATgetArgument(t, 1);
      r_74 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  x_74 = t;
  t = q_74;
  t = foldr_3_0(r_10, u_10, x_10, t);
  t_74 = t;
  t = r_74;
  t = foldr_3_0(y_10, z_10, b_11, t);
  u_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_74, (ATerm) ATmakeAppl(sym__2, t_74, u_74));
  {
    ATerm c_32 = t;
    int d_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(d_32);
      }
    else
      {
        t = c_32;
        t = (ATerm) ATempty;
      }
  }
  z_74 = t;
  t = v_74;
  {
    ATerm f_32 = t;
    int g_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(g_32);
      }
    else
      {
        t = f_32;
        t = (ATerm) ATempty;
      }
  }
  y_74 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_74, u_74));
  d_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_74, u_74)), y_74);
  t = r_9(f_11, d_75, y_74, t);
  w_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_74, (ATerm) ATmakeAppl(sym__2, t_74, u_74));
  b_75 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_h_32, (ATerm) ATinsert(CheckATermList(z_74), s_74));
  c_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_74, (ATerm) ATmakeAppl(sym__2, t_74, u_74)), (ATerm) ATmakeAppl(sym_Defined_2, term_h_32, (ATerm) ATinsert(CheckATermList(z_74), s_74)));
  t = n_9(g_11, b_75, c_75, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_i_32, w_74);
  a_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_74, (ATerm) ATmakeAppl(sym_Defined_2, term_i_32, w_74));
  t = n_9(h_11, v_74, a_75, t);
  t = x_74;
  return(t);
}
static ATerm n_9 (ATerm o_125 (ATerm), ATerm j_71, ATerm h_71, ATerm t)
{
  ATerm j_75 = NULL,k_75 = NULL,l_75 = NULL,m_75 = NULL,n_75 = NULL,o_75 = NULL;
  m_75 = t;
  t = o_125(t);
  j_75 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_75, j_71, h_71);
  t = e_10(j_75, j_71, h_71, t);
  {
    ATerm j_32 = t;
    int k_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_75 = NULL;
        t = term_l_32;
        p_75 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_75, term_l_32);
        t = d_10(j_75, p_75, t);
        LocalPopChoice(k_32);
      }
    else
      {
        t = j_32;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_75 = ATgetFirst((ATermList) t);
      l_75 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_l_32;
  n_75 = t;
  t = (ATerm) ATinsert(CheckATermList(l_75), (ATerm) ATinsert(CheckATermList(k_75), j_71));
  o_75 = t;
  t = SSL_table_put(j_75, n_75, o_75);
  t = m_75;
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm e_76 = NULL;
  e_76 = t;
  {
    ATerm n_32 = t;
    int o_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_28 = NULL,e_28 = NULL;
        t = term_r_31;
        e_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_r_31, e_76);
        t = p_9(e_28, e_76, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm q_32 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_32) != ATmakeSymbol("o_0", 0, ATtrue)))
              _fail(t);
            b_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_28;
        LocalPopChoice(o_32);
      }
    else
      {
        t = n_32;
        {
          ATerm r_32 = t;
          int s_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_28 = NULL,t_28 = NULL;
              t = term_r_31;
              t_28 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_r_31, e_76);
              t = p_9(t_28, e_76, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm t_32 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) t_32) != ATmakeSymbol("j_0", 0, ATtrue)))
                    _fail(t);
                  q_28 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = q_28;
              LocalPopChoice(s_32);
            }
          else
            {
              t = r_32;
              {
                ATerm x_28 = NULL,a_29 = NULL;
                t = term_r_31;
                a_29 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_r_31, e_76);
                t = p_9(a_29, e_76, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm u_32 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) u_32) != ATmakeSymbol("f_0", 0, ATtrue)))
                      _fail(t);
                    x_28 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = x_28;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm p_9 (ATerm t_66, ATerm u_66, ATerm t)
{
  ATerm i_76 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_66, u_66);
  t = d_10(t_66, u_66, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_76 = ATgetFirst((ATermList) t);
      {
        ATerm v_32 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_76;
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm z_76 = NULL,b_77 = NULL;
  z_76 = t;
  if(match_cons(t, sym__2))
    {
      ATerm w_32 = ATgetArgument(t, 0);
      b_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_77;
  if(match_cons(t, sym__2))
    {
      ATerm y_32 = ATgetArgument(t, 0);
      ATerm z_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_33 = t;
    int c_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_29 = NULL,x_29 = NULL;
        t = term_q_31;
        x_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_31, z_76);
        t = p_9(x_29, z_76, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm d_33 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_33) != ATmakeSymbol("m_0", 0, ATtrue)))
              _fail(t);
            u_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_29;
        LocalPopChoice(c_33);
      }
    else
      {
        t = b_33;
        {
          ATerm e_33 = t;
          int f_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_30 = NULL,f_30 = NULL;
              t = term_q_31;
              f_30 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_q_31, z_76);
              t = p_9(f_30, z_76, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm g_33 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) g_33) != ATmakeSymbol("h_0", 0, ATtrue)))
                    _fail(t);
                  c_30 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = c_30;
              LocalPopChoice(f_33);
            }
          else
            {
              t = e_33;
              {
                ATerm j_30 = NULL,m_30 = NULL;
                t = term_q_31;
                m_30 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_q_31, z_76);
                t = p_9(m_30, z_76, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm h_33 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) h_33) != ATmakeSymbol("b_0", 0, ATtrue)))
                      _fail(t);
                    j_30 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = j_30;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm i_11 (ATerm t)
{
  t = term_s_17;
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm v_77 = NULL,w_77 = NULL;
  if(match_cons(t, sym__2))
    {
      v_77 = ATgetArgument(t, 0);
      w_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_9(v_77, w_77, t);
  return(t);
}
static ATerm l_11 (ATerm t)
{
  t = term_t_17;
  return(t);
}
static ATerm n_11 (ATerm t)
{
  t = term_s_17;
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm x_77 = NULL,y_77 = NULL;
  if(match_cons(t, sym__2))
    {
      x_77 = ATgetArgument(t, 0);
      y_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_9(x_77, y_77, t);
  return(t);
}
static ATerm s_11 (ATerm t)
{
  t = term_t_17;
  return(t);
}
static ATerm t_11 (ATerm t)
{
  ATerm z_77 = NULL;
  if(match_cons(t, sym__2))
    {
      z_77 = ATgetArgument(t, 0);
      if((z_77 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm w_11 (ATerm t)
{
  t = term_q_31;
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = term_r_31;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm h_77 = NULL,i_77 = NULL,j_77 = NULL,k_77 = NULL,l_77 = NULL,m_77 = NULL,n_77 = NULL,o_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL,u_77 = NULL;
  j_77 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      m_77 = ATgetArgument(t, 0);
      h_77 = ATgetArgument(t, 1);
      i_77 = ATgetArgument(t, 2);
      {
        ATerm i_33 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  o_77 = t;
  t = h_77;
  t = foldr_3_0(i_11, j_11, l_11, t);
  k_77 = t;
  t = i_77;
  t = foldr_3_0(n_11, o_11, s_11, t);
  l_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_77, (ATerm) ATmakeAppl(sym__2, k_77, l_77));
  {
    ATerm j_33 = t;
    int k_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        LocalPopChoice(k_33);
      }
    else
      {
        t = j_33;
        t = (ATerm) ATempty;
      }
  }
  q_77 = t;
  t = m_77;
  {
    ATerm l_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Arities_0_0(t);
        LocalPopChoice(m_33);
      }
    else
      {
        t = l_33;
        t = (ATerm) ATempty;
      }
  }
  p_77 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, k_77, l_77));
  u_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, k_77, l_77)), p_77);
  t = r_9(t_11, u_77, p_77, t);
  n_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_77, (ATerm) ATmakeAppl(sym__2, k_77, l_77));
  s_77 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_n_33, (ATerm) ATinsert(CheckATermList(q_77), j_77));
  t_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_77, (ATerm) ATmakeAppl(sym__2, k_77, l_77)), (ATerm) ATmakeAppl(sym_Defined_2, term_n_33, (ATerm) ATinsert(CheckATermList(q_77), j_77)));
  t = n_9(w_11, s_77, t_77, t);
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_33, n_77);
  r_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_77, (ATerm) ATmakeAppl(sym_Defined_2, term_p_33, n_77));
  t = n_9(x_11, m_77, r_77, t);
  t = o_77;
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = term_s_17;
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm m_78 = NULL,n_78 = NULL;
  if(match_cons(t, sym__2))
    {
      m_78 = ATgetArgument(t, 0);
      n_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_9(m_78, n_78, t);
  return(t);
}
static ATerm e_12 (ATerm t)
{
  t = term_t_17;
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = term_s_17;
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm o_78 = NULL,p_78 = NULL;
  if(match_cons(t, sym__2))
    {
      o_78 = ATgetArgument(t, 0);
      p_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_9(o_78, p_78, t);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  t = term_t_17;
  return(t);
}
static ATerm k_12 (ATerm t)
{
  t = term_s_17;
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm v_78 = NULL,w_78 = NULL;
  if(match_cons(t, sym__2))
    {
      v_78 = ATgetArgument(t, 0);
      w_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_9(v_78, w_78, t);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  t = term_t_17;
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = term_s_17;
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm x_78 = NULL,y_78 = NULL;
  if(match_cons(t, sym__2))
    {
      x_78 = ATgetArgument(t, 0);
      y_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_9(x_78, y_78, t);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  t = term_t_17;
  return(t);
}
static ATerm t_12 (ATerm t)
{
  t = term_s_17;
  return(t);
}
static ATerm u_12 (ATerm t)
{
  ATerm f_79 = NULL,g_79 = NULL;
  if(match_cons(t, sym__2))
    {
      f_79 = ATgetArgument(t, 0);
      g_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_9(f_79, g_79, t);
  return(t);
}
static ATerm v_12 (ATerm t)
{
  t = term_t_17;
  return(t);
}
static ATerm w_12 (ATerm t)
{
  t = term_s_17;
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm h_79 = NULL,i_79 = NULL;
  if(match_cons(t, sym__2))
    {
      h_79 = ATgetArgument(t, 0);
      i_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_9(h_79, i_79, t);
  return(t);
}
static ATerm y_12 (ATerm t)
{
  t = term_t_17;
  return(t);
}
ATerm DefinitionName_0_0 (ATerm t)
{
  ATerm b_78 = NULL,c_78 = NULL,d_78 = NULL,e_78 = NULL;
  b_78 = t;
  {
    ATerm q_33 = t;
    int r_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_ExtSDefInl_4))
          {
            c_78 = ATgetArgument(t, 0);
            d_78 = ATgetArgument(t, 1);
            e_78 = ATgetArgument(t, 2);
            {
              ATerm s_33 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(r_33);
        {
          ATerm j_78 = NULL,k_78 = NULL;
          t = d_78;
          t = foldr_3_0(a_12, d_12, e_12, t);
          j_78 = t;
          t = e_78;
          t = foldr_3_0(f_12, h_12, i_12, t);
          k_78 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, c_78, (ATerm) ATmakeAppl(sym__2, j_78, k_78)));
        }
      }
    else
      {
        t = q_33;
        if(match_cons(t, sym_ExtSDef_3))
          {
            c_78 = ATgetArgument(t, 0);
            d_78 = ATgetArgument(t, 1);
            e_78 = ATgetArgument(t, 2);
            {
              ATerm t_78 = NULL,u_78 = NULL;
              t = d_78;
              t = foldr_3_0(k_12, o_12, p_12, t);
              t_78 = t;
              t = e_78;
              t = foldr_3_0(q_12, r_12, s_12, t);
              u_78 = t;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, c_78, (ATerm) ATmakeAppl(sym__2, t_78, u_78)));
            }
          }
        else
          {
            ATerm c_79 = NULL,d_79 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                c_78 = ATgetArgument(t, 0);
                d_78 = ATgetArgument(t, 1);
                e_78 = ATgetArgument(t, 2);
                {
                  ATerm u_33 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = d_78;
            t = foldr_3_0(t_12, u_12, v_12, t);
            c_79 = t;
            t = e_78;
            t = foldr_3_0(w_12, x_12, y_12, t);
            d_79 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, c_78, (ATerm) ATmakeAppl(sym__2, c_79, d_79)));
          }
      }
  }
  return(t);
}
static ATerm q_9 (ATerm z_112 (ATerm), ATerm a_113 (ATerm), ATerm c_59, ATerm b_59, ATerm t)
{
  t = a_113(t);
  {
    static ATerm z_12 (ATerm t)
    {
      ATerm j_79 = NULL;
      j_79 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_59, j_79);
      t = z_112(t);
      return(t);
    }
    t = fetch_1_0(z_12, t);
  }
  t = b_59;
  return(t);
}
static ATerm r_9 (ATerm w_112 (ATerm), ATerm y_58, ATerm x_58, ATerm t)
{
  static ATerm b_80 (ATerm t)
  {
    ATerm u_79 = NULL,v_79 = NULL,w_79 = NULL;
    u_79 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_58;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_79 = ATgetFirst((ATermList) t);
            w_79 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm w_33 = t;
          int x_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_79;
              {
                static ATerm a_13 (ATerm t)
                {
                  t = x_58;
                  return(t);
                }
                t = q_9(w_112, a_13, v_79, w_79, t);
              }
              t = b_80(t);
              LocalPopChoice(x_33);
            }
          else
            {
              t = w_33;
              {
                ATerm w_30 = NULL,z_30 = NULL,p_4 = NULL;
                t = SSLgetAnnotations(u_79);
                w_30 = t;
                t = w_79;
                t = b_80(t);
                z_30 = t;
                t = (ATerm) ATinsert(CheckATermList(z_30), v_79);
                p_4 = t;
                t = SSLsetAnnotations(p_4, w_30);
              }
            }
        }
      }
    return(t);
  }
  t = y_58;
  t = b_80(t);
  return(t);
}
ATerm foldr_3_0 (ATerm g_115 (ATerm), ATerm h_115 (ATerm), ATerm i_115 (ATerm), ATerm t)
{
  ATerm e_80 = NULL,f_80 = NULL,g_80 = NULL;
  e_80 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_80;
      t = g_115(t);
    }
  else
    {
      ATerm j_80 = NULL,k_80 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_80 = ATgetFirst((ATermList) t);
          g_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_80;
      t = i_115(t);
      j_80 = t;
      t = g_80;
      t = foldr_3_0(g_115, h_115, i_115, t);
      k_80 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_80, k_80);
      t = h_115(t);
    }
  return(t);
}
static ATerm b_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm o_80 = NULL,p_80 = NULL;
  if(match_cons(t, sym__2))
    {
      o_80 = ATgetArgument(t, 0);
      p_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_9(d_13, o_80, p_80, t);
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm q_80 = NULL;
  if(match_cons(t, sym__2))
    {
      q_80 = ATgetArgument(t, 0);
      if((q_80 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm y_33 = t;
  int z_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RegisterSDefT_0_0(t);
      LocalPopChoice(z_33);
    }
  else
    {
      t = y_33;
      {
        ATerm a_34 = t;
        int d_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RegisterExtSDef_0_0(t);
            LocalPopChoice(d_34);
          }
        else
          {
            t = a_34;
            t = RegisterExtSDefInl_0_0(t);
          }
      }
    }
  return(t);
}
ATerm all_defs_0_0 (ATerm t)
{
  ATerm l_80 = NULL,m_80 = NULL,n_80 = NULL;
  n_80 = t;
  t = foldr_3_0(b_13, c_13, DefinitionName_0_0, t);
  l_80 = t;
  t = n_80;
  t = map_1_0(e_13, t);
  m_80 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_80, m_80, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm x_79 (ATerm), ATerm y_79 (ATerm), ATerm t)
{
  ATerm r_80 = NULL,s_80 = NULL,t_80 = NULL,u_80 = NULL,v_80 = NULL,w_80 = NULL,s_4 = NULL;
  w_80 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_80 = ATgetFirst((ATermList) t);
      t_80 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_80);
  r_80 = t;
  t = s_80;
  t = x_79(t);
  u_80 = t;
  t = t_80;
  t = y_79(t);
  v_80 = t;
  t = (ATerm) ATinsert(CheckATermList(v_80), u_80);
  s_4 = t;
  t = SSLsetAnnotations(s_4, r_80);
  return(t);
}
static ATerm s_9 (ATerm q_41, ATerm r_41, ATerm t)
{
  ATerm x_80 = NULL;
  t = SSL_fputc(q_41, r_41);
  x_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_80);
  return(t);
}
static ATerm t_9 (ATerm k_40, ATerm l_40, ATerm t)
{
  ATerm y_80 = NULL;
  t = SSL_write_term_to_stream_text(k_40, l_40);
  y_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_80);
  return(t);
}
static ATerm v_9 (ATerm m_101 (ATerm), ATerm b_278, ATerm o_40, ATerm t)
{
  ATerm z_80 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_278, term_e_34);
  t = y_9(t);
  z_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_80, o_40);
  t = m_101(t);
  t = fclose_0_0(t);
  t = o_40;
  return(t);
}
static ATerm u_9 (ATerm g_40, ATerm h_40, ATerm t)
{
  ATerm a_81 = NULL;
  t = SSL_write_term_to_stream_baf(g_40, h_40);
  a_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_81);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm d_81 = NULL,e_81 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_34 = ATgetArgument(t, 0);
      if(match_cons(f_34, sym_Stream_1))
        {
          d_81 = ATgetArgument(f_34, 0);
        }
      else
        _fail(t);
      e_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_9(d_81, e_81, t);
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm f_81 = NULL,g_81 = NULL,h_81 = NULL,i_81 = NULL,j_81 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_34 = ATgetArgument(t, 0);
      if(match_cons(g_34, sym_Stream_1))
        {
          i_81 = ATgetArgument(g_34, 0);
        }
      else
        _fail(t);
      j_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_9(i_81, j_81, t);
  f_81 = t;
  t = term_h_34;
  g_81 = t;
  t = f_81;
  if(match_cons(t, sym_Stream_1))
    {
      h_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_h_34, f_81);
  t = s_9(g_81, h_81, t);
  return(t);
}
ATerm output_1_0 (ATerm d_121 (ATerm), ATerm t)
{
  ATerm b_81 = NULL,c_81 = NULL;
  t = d_121(t);
  c_81 = t;
  {
    ATerm i_34 = t;
    int j_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_34;
        t = get_config_0_0(t);
        LocalPopChoice(j_34);
      }
    else
      {
        t = i_34;
        t = term_l_34;
      }
  }
  b_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_81, c_81);
  {
    ATerm m_34 = t;
    int n_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_34;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, b_81, c_81);
        LocalPopChoice(n_34);
        if(match_cons(t, sym__2))
          {
            ATerm p_34 = ATgetArgument(t, 0);
            ATerm q_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_9(f_13, b_81, c_81, t);
      }
    else
      {
        t = m_34;
        if(match_cons(t, sym__2))
          {
            ATerm r_34 = ATgetArgument(t, 0);
            ATerm s_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_9(g_13, b_81, c_81, t);
      }
  }
  return(t);
}
static ATerm x_81 (ATerm r_81, ATerm t)
{
  t = SSL_fclose(r_81);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_81 = NULL,v_81 = NULL;
  v_81 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_81 = ATgetArgument(t, 0);
      {
        ATerm t_34 = t;
        int u_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_81);
            LocalPopChoice(u_34);
          }
        else
          {
            t = t_34;
            t = x_81(v_81, t);
          }
      }
    }
  else
    {
      t = x_81(v_81, t);
    }
  return(t);
}
static ATerm w_9 (ATerm m_40, ATerm t)
{
  t = SSL_read_term_from_stream(m_40);
  return(t);
}
static ATerm x_9 (ATerm s_41, ATerm t_41, ATerm t)
{
  ATerm y_81 = NULL;
  t = SSL_fopen(s_41, t_41);
  y_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_81);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_81 = NULL;
  t = SSL_stdin_stream();
  z_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_81);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_82 = NULL;
  t = SSL_stdout_stream();
  a_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_82);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_82 = NULL;
  t = SSL_stderr_stream();
  b_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_82);
  return(t);
}
static ATerm i_83 (ATerm h_82, ATerm t)
{
  ATerm i_82 = NULL;
  t = SSL_explode_term(h_82);
  if(match_cons(t, sym__2))
    {
      ATerm v_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_34) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_34 = ATgetArgument(t, 1);
        if(((ATgetType(w_34) == AT_LIST) && !(ATisEmpty(w_34))))
          {
            i_82 = ATgetFirst((ATermList) w_34);
            {
              ATerm x_34 = (ATerm) ATgetNext((ATermList) w_34);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_82;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_82;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_82;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_82;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm j_83 (ATerm l_82, ATerm m_82, ATerm n_82, ATerm t)
{
  ATerm o_82 = NULL,p_82 = NULL,q_82 = NULL,t_82 = NULL,j_5 = NULL;
  t = SSLgetAnnotations(n_82);
  q_82 = t;
  t = l_82;
  if(match_cons(t, sym_Path_1))
    {
      t_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_82, m_82);
  j_5 = t;
  t = SSLsetAnnotations(j_5, q_82);
  if(match_cons(t, sym__2))
    {
      o_82 = ATgetArgument(t, 0);
      p_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_9(o_82, p_82, t);
  return(t);
}
static ATerm k_83 (ATerm v_82, ATerm w_82, ATerm x_82, ATerm t)
{
  ATerm y_82 = NULL,z_82 = NULL,a_83 = NULL,d_83 = NULL,r_5 = NULL;
  t = SSLgetAnnotations(x_82);
  a_83 = t;
  t = SSL_is_string(v_82);
  d_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_83, w_82);
  r_5 = t;
  t = SSLsetAnnotations(r_5, a_83);
  if(match_cons(t, sym__2))
    {
      y_82 = ATgetArgument(t, 0);
      z_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_9(y_82, z_82, t);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm f_83 = NULL,g_83 = NULL,h_83 = NULL;
  f_83 = t;
  if(match_cons(t, sym__2))
    {
      g_83 = ATgetArgument(t, 0);
      h_83 = ATgetArgument(t, 1);
      {
        ATerm y_34 = t;
        int z_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_83(f_83, t);
            LocalPopChoice(z_34);
          }
        else
          {
            t = y_34;
            {
              ATerm b_35 = t;
              int c_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_83(g_83, h_83, f_83, t);
                  LocalPopChoice(c_35);
                }
              else
                {
                  t = b_35;
                  t = k_83(g_83, h_83, f_83, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_83(f_83, t);
    }
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = term_d_35;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_83 = NULL,m_83 = NULL,n_83 = NULL;
  ATerm f_35 = t;
  int g_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_83 = NULL;
      o_83 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_83, term_h_35);
      t = y_9(t);
      LocalPopChoice(g_35);
    }
  else
    {
      t = f_35;
      t = debug_1_0(h_13, t);
      _fail(t);
    }
  m_83 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_9(n_83, t);
  l_83 = t;
  t = m_83;
  t = fclose_0_0(t);
  t = l_83;
  return(t);
}
ATerm input_1_0 (ATerm e_121 (ATerm), ATerm t)
{
  ATerm i_35 = t;
  int j_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_35;
      t = get_config_0_0(t);
      LocalPopChoice(j_35);
    }
  else
    {
      t = i_35;
      t = term_l_35;
    }
  t = ReadFromFile_0_0(t);
  t = e_121(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm q_83 = NULL,r_83 = NULL,s_83 = NULL,t_83 = NULL,u_83 = NULL;
  q_83 = t;
  t = term_k_26;
  t = whoami_0_0(t);
  r_83 = t;
  t = term_u_15;
  t_83 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_35), r_83), term_m_35);
  u_83 = t;
  t = SSL_printnl(t_83, u_83);
  t = term_t_17;
  s_83 = t;
  t = SSL_exit(s_83);
  t = q_83;
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm w_83 = NULL;
  w_83 = t;
  if(match_string(t, "-k"))
    {
      t = w_83;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = w_83;
    }
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm x_83 = NULL,y_83 = NULL,z_83 = NULL;
  x_83 = t;
  t = SSL_string_to_int(x_83);
  y_83 = t;
  t = term_o_35;
  z_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_35, y_83);
  t = g_10(z_83, y_83, t);
  t = x_83;
  return(t);
}
static ATerm l_13 (ATerm t)
{
  t = term_p_35;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_13, k_13, l_13, t);
  return(t);
}
static ATerm m_13 (ATerm t)
{
  ATerm b_84 = NULL;
  b_84 = t;
  if(match_string(t, "-S"))
    {
      t = b_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_84;
    }
  return(t);
}
static ATerm n_13 (ATerm t)
{
  ATerm c_84 = NULL,d_84 = NULL;
  t = term_q_35;
  c_84 = t;
  t = term_s_17;
  d_84 = t;
  t = term_r_35;
  t = g_10(c_84, d_84, t);
  t = term_s_35;
  return(t);
}
static ATerm o_13 (ATerm t)
{
  t = term_t_35;
  return(t);
}
static ATerm p_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  ATerm e_84 = NULL,f_84 = NULL,g_84 = NULL;
  e_84 = t;
  t = SSL_string_to_int(e_84);
  f_84 = t;
  t = term_q_35;
  g_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_35, f_84);
  t = g_10(g_84, f_84, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_84);
  return(t);
}
static ATerm r_13 (ATerm t)
{
  t = term_y_35;
  return(t);
}
static ATerm s_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_13 (ATerm t)
{
  ATerm h_84 = NULL,i_84 = NULL;
  t = term_z_35;
  h_84 = t;
  t = term_k_26;
  i_84 = t;
  t = term_a_36;
  t = g_10(h_84, i_84, t);
  t = term_b_36;
  return(t);
}
static ATerm u_13 (ATerm t)
{
  t = term_c_36;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_36 = t;
  int e_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_13, n_13, o_13, t);
      LocalPopChoice(e_36);
    }
  else
    {
      t = d_36;
      {
        ATerm f_36 = t;
        int g_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_13, q_13, r_13, t);
            LocalPopChoice(g_36);
          }
        else
          {
            t = f_36;
            t = Option_3_0(s_13, t_13, u_13, t);
          }
      }
    }
  return(t);
}
static ATerm g_10 (ATerm k_45, ATerm l_45, ATerm t)
{
  ATerm j_84 = NULL;
  t = term_h_36;
  j_84 = t;
  t = SSL_table_put(j_84, k_45, l_45);
  t = (ATerm) ATmakeAppl(sym__3, term_h_36, k_45, l_45);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm m_84 = NULL,n_84 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_84 = NULL,p_84 = NULL,q_84 = NULL;
      t = term_k_26;
      t = e_0(t);
      o_84 = t;
      t = term_j_36;
      p_84 = t;
      t = term_k_36;
      q_84 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_36, term_k_36, o_84);
      t = e_10(p_84, q_84, o_84, t);
      _fail(t);
    }
  else
    {
      ATerm t_84 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_84 = ATgetFirst((ATermList) t);
          n_84 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_84;
      t = c_0(t);
      t = term_k_26;
      t = d_0(t);
      t_84 = t;
      t = (ATerm) ATinsert(CheckATermList(n_84), t_84);
    }
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm v_84 = NULL;
  v_84 = t;
  if(match_string(t, "-o"))
    {
      t = v_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_84;
    }
  return(t);
}
static ATerm x_13 (ATerm t)
{
  ATerm w_84 = NULL,x_84 = NULL;
  w_84 = t;
  t = term_k_34;
  x_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_34, w_84);
  t = g_10(x_84, w_84, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_84);
  return(t);
}
static ATerm y_13 (ATerm t)
{
  t = term_n_36;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_13, x_13, y_13, t);
  return(t);
}
static ATerm e_10 (ATerm i_66, ATerm j_66, ATerm h_66, ATerm t)
{
  ATerm z_84 = NULL,a_85 = NULL,b_85 = NULL;
  z_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_66, j_66);
  {
    ATerm o_36 = t;
    int p_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_36 = ATgetArgument(t, 0);
            ATerm r_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_66, j_66);
        t = d_10(i_66, j_66, t);
        LocalPopChoice(p_36);
      }
    else
      {
        t = o_36;
        t = (ATerm) ATempty;
      }
  }
  a_85 = t;
  t = (ATerm) ATinsert(CheckATermList(a_85), h_66);
  b_85 = t;
  t = SSL_table_put(i_66, j_66, b_85);
  t = z_84;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm i_85 = NULL,j_85 = NULL,k_85 = NULL,l_85 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_85 = NULL,n_85 = NULL,o_85 = NULL;
      t = term_k_26;
      t = n_0(t);
      m_85 = t;
      t = term_j_36;
      n_85 = t;
      t = term_k_36;
      o_85 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_36, term_k_36, m_85);
      t = e_10(n_85, o_85, m_85, t);
      _fail(t);
    }
  else
    {
      ATerm s_85 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_85 = ATgetFirst((ATermList) t);
          j_85 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_85;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_85 = ATgetFirst((ATermList) t);
          l_85 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_85;
      t = k_0(t);
      t = k_85;
      t = l_0(t);
      s_85 = t;
      t = (ATerm) ATinsert(CheckATermList(l_85), s_85);
    }
  return(t);
}
static ATerm a_14 (ATerm t)
{
  ATerm u_85 = NULL;
  u_85 = t;
  if(match_string(t, "-i"))
    {
      t = u_85;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_85;
    }
  return(t);
}
static ATerm b_14 (ATerm t)
{
  ATerm v_85 = NULL,w_85 = NULL;
  v_85 = t;
  t = term_k_35;
  w_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_35, v_85);
  t = g_10(w_85, v_85, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_85);
  return(t);
}
static ATerm c_14 (ATerm t)
{
  t = term_t_36;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_14, b_14, c_14, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm x_85 = NULL,y_85 = NULL,z_85 = NULL,a_86 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_26;
  t = whoami_0_0(t);
  x_85 = t;
  t = term_u_15;
  z_85 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_w_36), x_85);
  a_86 = t;
  t = SSL_printnl(z_85, a_86);
  t = term_t_17;
  y_85 = t;
  t = SSL_exit(y_85);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_y_36;
  t = get_config_0_0(t);
  return(t);
}
static ATerm z_9 (ATerm h_48, ATerm i_48, ATerm t)
{
  ATerm d_37 = t;
  int e_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(h_48, i_48);
      LocalPopChoice(e_37);
    }
  else
    {
      t = d_37;
      t = SSL_addr(h_48, i_48);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_115 (ATerm), ATerm f_115 (ATerm), ATerm t)
{
  ATerm c_86 = NULL,d_86 = NULL,e_86 = NULL;
  c_86 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_86;
      t = e_115(t);
    }
  else
    {
      ATerm h_86 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_86 = ATgetFirst((ATermList) t);
          e_86 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_86;
      t = foldr_2_0(e_115, f_115, t);
      h_86 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_86, h_86);
      t = f_115(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm d_14 (ATerm t)
{
  t = term_s_17;
  return(t);
}
static ATerm e_14 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL;
  if(match_cons(t, sym__2))
    {
      o_31 = ATgetArgument(t, 0);
      p_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_9(o_31, p_31, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_86 = NULL,k_31 = NULL,l_31 = NULL;
  t = times_0_0(t);
  l_31 = t;
  t = SSL_explode_term(l_31);
  if(match_cons(t, sym__2))
    {
      ATerm g_37 = ATgetArgument(t, 0);
      k_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_31;
  t = foldr_2_0(d_14, e_14, t);
  k_86 = t;
  t = SSL_TicksToSeconds(k_86);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_86 = NULL,w_86 = NULL,x_86 = NULL;
  v_86 = t;
  if(match_cons(t, sym__2))
    {
      w_86 = ATgetArgument(t, 0);
      x_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_37 = t;
    int i_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_86;
        if((w_86 != t))
          {
            _fail(t);
          }
        t = v_86;
        LocalPopChoice(i_37);
      }
    else
      {
        t = h_37;
        t = (ATerm) ATmakeAppl(sym__2, w_86, x_86);
        {
          ATerm j_37 = t;
          int l_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_86, x_86);
              LocalPopChoice(l_37);
            }
          else
            {
              t = j_37;
              t = SSL_gtr(w_86, x_86);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, w_86, x_86);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_103 (ATerm), ATerm t)
{
  ATerm b_87 = NULL;
  b_87 = t;
  {
    ATerm m_37 = t;
    int n_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_87 = NULL;
        t = term_q_35;
        t = get_config_0_0(t);
        d_87 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_87, term_t_17);
        t = geq_0_0(t);
        t = b_87;
        t = c_103(t);
        LocalPopChoice(n_37);
      }
    else
      {
        t = m_37;
        t = b_87;
      }
  }
  return(t);
}
static ATerm f_14 (ATerm t)
{
  ATerm f_87 = NULL,g_87 = NULL,i_87 = NULL,j_87 = NULL;
  t = run_time_0_0(t);
  f_87 = t;
  t = term_k_26;
  t = whoami_0_0(t);
  g_87 = t;
  t = term_u_15;
  i_87 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_37), f_87), term_o_37), g_87);
  j_87 = t;
  t = SSL_printnl(i_87, j_87);
  t = (ATerm) ATmakeAppl(sym__2, term_u_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_37), f_87), term_o_37), g_87));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_14, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm k_87 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_17;
  k_87 = t;
  t = SSL_exit(k_87);
  return(t);
}
static ATerm g_14 (ATerm t)
{
  ATerm s_87 = NULL,t_87 = NULL;
  t_87 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = t_87;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          s_87 = ATgetArgument(t, 0);
          {
            ATerm e_32 = NULL,g_6 = NULL;
            t = SSLgetAnnotations(t_87);
            e_32 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, s_87);
            g_6 = t;
            t = SSLsetAnnotations(g_6, e_32);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = t_87;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm u_120 (ATerm), ATerm t)
{
  ATerm t_37 = t;
  int u_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_37;
      t = get_config_0_0(t);
      LocalPopChoice(u_37);
    }
  else
    {
      t = t_37;
      t = fetch_1_0(g_14, t);
    }
  t = u_120(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm w_87 = NULL,x_87 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_87 = ATgetFirst((ATermList) t);
      x_87 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_88 = NULL,c_88 = NULL;
        static ATerm j_14 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(b_88)), not_null(c_88));
          return(t);
        }
        t = x_87;
        t = i_0(t);
        if(((b_88 != NULL) && (b_88 != t)))
          _fail(t);
        else
          b_88 = t;
        t = w_87;
        t = g_0(t);
        if(((c_88 != NULL) && (c_88 != t)))
          _fail(t);
        else
          c_88 = t;
        t = x_87;
        t = reverse_acc_2_0(g_0, j_14, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_k_26;
      t = i_0(t);
    }
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm g_88 = NULL,h_88 = NULL,i_88 = NULL,j_6 = NULL;
  i_88 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_88);
  g_88 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, h_88);
  j_6 = t;
  t = SSLsetAnnotations(j_6, g_88);
  return(t);
}
static ATerm l_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm k_88 = NULL;
  k_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_88), term_x_37);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_88 = NULL,f_88 = NULL;
  ATerm z_37 = t;
  int a_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_36;
      t = get_config_0_0(t);
      LocalPopChoice(a_38);
    }
  else
    {
      t = z_37;
      t = fetch_1_0(k_14, t);
    }
  t = term_b_38;
  t = echo_0_0(t);
  t = term_j_36;
  e_88 = t;
  t = term_k_36;
  f_88 = t;
  t = term_c_38;
  t = d_10(e_88, f_88, t);
  t = reverse_acc_2_0(_id, l_14, t);
  t = map_1_0(o_14, t);
  return(t);
}
ATerm fetch_1_0 (ATerm f_106 (ATerm), ATerm t)
{
  static ATerm h_89 (ATerm t)
  {
    ATerm e_89 = NULL,f_89 = NULL,g_89 = NULL;
    e_89 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_89 = ATgetFirst((ATermList) t);
        g_89 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_38 = t;
      int e_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_32 = NULL,p_32 = NULL,l_6 = NULL;
          t = SSLgetAnnotations(e_89);
          m_32 = t;
          t = f_89;
          t = f_106(t);
          p_32 = t;
          t = (ATerm) ATinsert(CheckATermList(g_89), p_32);
          l_6 = t;
          t = SSLsetAnnotations(l_6, m_32);
          LocalPopChoice(e_38);
        }
      else
        {
          t = d_38;
          {
            ATerm x_32 = NULL,a_33 = NULL,m_6 = NULL;
            t = SSLgetAnnotations(e_89);
            x_32 = t;
            t = g_89;
            t = h_89(t);
            a_33 = t;
            t = (ATerm) ATinsert(CheckATermList(a_33), f_89);
            m_6 = t;
            t = SSLsetAnnotations(m_6, x_32);
          }
        }
    }
    return(t);
  }
  t = h_89(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_89 = NULL,m_89 = NULL,n_89 = NULL;
  l_89 = t;
  {
    ATerm f_38 = t;
    int g_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_89;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_38 = ATgetFirst((ATermList) t);
                ATerm i_38 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_89;
          }
        LocalPopChoice(g_38);
      }
    else
      {
        t = f_38;
        t = (ATerm) ATinsert(ATempty, l_89);
      }
  }
  m_89 = t;
  t = term_l_34;
  n_89 = t;
  t = SSL_printnl(n_89, m_89);
  t = l_89;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_y_36;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm c_10 (ATerm n_58, ATerm o_58, ATerm t)
{
  t = SSL_strcat(n_58, o_58);
  return(t);
}
ATerm debug_1_0 (ATerm k_101 (ATerm), ATerm t)
{
  ATerm r_89 = NULL,s_89 = NULL,t_89 = NULL,u_89 = NULL;
  r_89 = t;
  t = k_101(t);
  s_89 = t;
  t = term_u_15;
  t_89 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_89), s_89);
  u_89 = t;
  t = SSL_printnl(t_89, u_89);
  t = r_89;
  return(t);
}
ATerm map_1_0 (ATerm v_105 (ATerm), ATerm t)
{
  static ATerm j_90 (ATerm t)
  {
    ATerm g_90 = NULL,h_90 = NULL,i_90 = NULL;
    g_90 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_90;
      }
    else
      {
        ATerm o_33 = NULL,t_33 = NULL,v_33 = NULL,x_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_90 = ATgetFirst((ATermList) t);
            i_90 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_90);
        o_33 = t;
        t = h_90;
        t = v_105(t);
        t_33 = t;
        t = i_90;
        t = j_90(t);
        v_33 = t;
        t = (ATerm) ATinsert(CheckATermList(v_33), t_33);
        x_7 = t;
        t = SSLsetAnnotations(x_7, o_33);
      }
    return(t);
  }
  t = j_90(t);
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm j_38 = t;
  int k_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(k_38);
    }
  else
    {
      t = j_38;
    }
  return(t);
}
static ATerm t_14 (ATerm t)
{
  t = term_l_38;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm m_38 = t;
  int n_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_90 = NULL;
      r_90 = t;
      t = SSL_is_string(r_90);
      LocalPopChoice(n_38);
    }
  else
    {
      t = m_38;
      {
        ATerm o_38 = t;
        int p_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(q_14, t);
            LocalPopChoice(p_38);
          }
        else
          {
            t = o_38;
            {
              ATerm x_90 = NULL,y_90 = NULL,z_90 = NULL;
              x_90 = t;
              if(match_cons(t, sym_Path_1))
                {
                  y_90 = ATgetArgument(t, 0);
                  t = y_90;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      y_90 = ATgetArgument(t, 0);
                      t = y_90;
                      {
                        ATerm q_38 = t;
                        int r_38 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(r_38);
                          }
                        else
                          {
                            t = q_38;
                            t = debug_1_0(t_14, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm d_91 = NULL,e_91 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          y_90 = ATgetArgument(t, 0);
                          z_90 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_90;
                      t = eval_config_0_0(t);
                      d_91 = t;
                      t = z_90;
                      t = eval_config_0_0(t);
                      e_91 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_91, e_91);
                      t = c_10(d_91, e_91, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_10 (ATerm z_67, ATerm a_68, ATerm t)
{
  t = SSL_table_get(z_67, a_68);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm i_91 = NULL,j_91 = NULL;
  i_91 = t;
  t = term_h_36;
  j_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_36, i_91);
  t = d_10(j_91, i_91, t);
  {
    ATerm s_38 = t;
    int t_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_91 = NULL,l_91 = NULL;
        t = eval_config_0_0(t);
        k_91 = t;
        t = term_h_36;
        l_91 = t;
        t = SSL_table_put(l_91, i_91, k_91);
        t = k_91;
        LocalPopChoice(t_38);
      }
    else
      {
        t = s_38;
      }
  }
  return(t);
}
static ATerm u_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_14 (ATerm t)
{
  ATerm o_91 = NULL,p_91 = NULL;
  t = term_u_38;
  o_91 = t;
  t = term_k_26;
  p_91 = t;
  t = term_v_38;
  t = g_10(o_91, p_91, t);
  return(t);
}
static ATerm w_14 (ATerm t)
{
  t = term_w_38;
  return(t);
}
static ATerm x_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_15 (ATerm t)
{
  ATerm q_91 = NULL,r_91 = NULL,s_91 = NULL,t_91 = NULL;
  t = term_u_38;
  s_91 = t;
  t = term_k_26;
  t_91 = t;
  t = term_v_38;
  t = g_10(s_91, t_91, t);
  t = term_x_38;
  q_91 = t;
  t = term_k_26;
  r_91 = t;
  t = term_y_38;
  t = g_10(q_91, r_91, t);
  t = term_z_38;
  return(t);
}
static ATerm d_15 (ATerm t)
{
  t = term_a_39;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_39 = t;
  int c_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_14, v_14, w_14, t);
      LocalPopChoice(c_39);
    }
  else
    {
      t = b_39;
      t = Option_3_0(x_14, c_15, d_15, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_122 (ATerm), ATerm t)
{
  ATerm y_91 = NULL,z_91 = NULL,a_92 = NULL,b_92 = NULL,d_92 = NULL,e_92 = NULL,c_8 = NULL;
  y_91 = t;
  {
    ATerm d_39 = t;
    int e_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_39;
        t = x_122(t);
        LocalPopChoice(e_39);
      }
    else
      {
        t = d_39;
      }
  }
  t = y_91;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_92 = ATgetFirst((ATermList) t);
      b_92 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_91);
  z_91 = t;
  t = term_y_36;
  e_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_36, a_92);
  t = g_10(e_92, a_92, t);
  t = b_92;
  {
    static ATerm q_92 (ATerm t)
    {
      ATerm g_39 = t;
      int h_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_39 = t;
          int j_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_92 = NULL;
              j_92 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = j_92;
              LocalPopChoice(j_39);
            }
          else
            {
              t = i_39;
              t = x_122(t);
              t = Cons_2_0(_id, q_92, t);
            }
          LocalPopChoice(h_39);
        }
      else
        {
          t = g_39;
          {
            ATerm m_92 = NULL,n_92 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_92 = ATgetFirst((ATermList) t);
                n_92 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(n_92), (ATerm) ATmakeAppl(sym_Undefined_1, m_92));
          }
        }
      return(t);
    }
    t = q_92(t);
  }
  d_92 = t;
  t = (ATerm) ATinsert(CheckATermList(d_92), (ATerm) ATmakeAppl(sym_Program_1, a_92));
  c_8 = t;
  t = SSLsetAnnotations(c_8, z_91);
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm c_93 = NULL;
  c_93 = t;
  if(match_string(t, "--help"))
    {
      t = c_93;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_93;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_93;
        }
    }
  return(t);
}
static ATerm g_15 (ATerm t)
{
  ATerm d_93 = NULL,e_93 = NULL;
  t = term_v_37;
  d_93 = t;
  t = term_k_26;
  e_93 = t;
  t = term_k_39;
  t = g_10(d_93, e_93, t);
  t = term_o_39;
  return(t);
}
static ATerm i_15 (ATerm t)
{
  t = term_p_39;
  return(t);
}
static ATerm j_15 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm w_122 (ATerm), ATerm t)
{
  ATerm v_92 = NULL,w_92 = NULL,x_92 = NULL,y_92 = NULL,z_92 = NULL,a_93 = NULL,b_93 = NULL;
  x_92 = t;
  t = term_j_36;
  z_92 = t;
  t = term_k_36;
  a_93 = t;
  t = (ATerm) ATempty;
  b_93 = t;
  t = SSL_table_put(z_92, a_93, b_93);
  t = x_92;
  {
    static ATerm e_15 (ATerm t)
    {
      ATerm q_39 = t;
      int r_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_122(t);
          LocalPopChoice(r_39);
        }
      else
        {
          t = q_39;
          {
            ATerm w_39 = t;
            int x_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_15, g_15, i_15, t);
                LocalPopChoice(x_39);
              }
            else
              {
                t = w_39;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_15, t);
  }
  {
    ATerm y_39 = t;
    int z_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_93 = NULL;
        q_93 = t;
        {
          ATerm n_40 = t;
          int t_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_35 = NULL;
              t = q_93;
              {
                ATerm u_40 = t;
                int z_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_v_37;
                    t = get_config_0_0(t);
                    LocalPopChoice(z_40);
                  }
                else
                  {
                    t = u_40;
                    t = fetch_1_0(j_15, t);
                  }
              }
              t = q_93;
              t = default_system_usage_0_0(t);
              t = term_s_17;
              a_35 = t;
              t = SSL_exit(a_35);
              LocalPopChoice(t_40);
            }
          else
            {
              t = n_40;
              {
                ATerm e_35 = NULL;
                t = term_u_38;
                t = get_config_0_0(t);
                t = q_93;
                t = default_system_about_0_0(t);
                t = term_s_17;
                e_35 = t;
                t = SSL_exit(e_35);
              }
            }
        }
        LocalPopChoice(z_39);
      }
    else
      {
        t = y_39;
        {
          ATerm a_41 = t;
          int b_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_93 = NULL,s_93 = NULL,t_93 = NULL;
              static ATerm k_15 (ATerm t)
              {
                ATerm u_93 = NULL,v_93 = NULL,w_93 = NULL,z_8 = NULL;
                w_93 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    v_93 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(w_93);
                u_93 = t;
                t = v_93;
                if(((v_92 != NULL) && (v_92 != t)))
                  _fail(t);
                else
                  v_92 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, v_93);
                z_8 = t;
                t = SSLsetAnnotations(z_8, u_93);
                return(t);
              }
              t = fetch_1_0(k_15, t);
              t = term_u_15;
              s_93 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_92)), term_c_41);
              t_93 = t;
              t = SSL_printnl(s_93, t_93);
              t = (ATerm) ATmakeAppl(sym__2, term_u_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_92)), term_c_41));
              t = default_system_usage_0_0(t);
              t = term_t_17;
              r_93 = t;
              t = SSL_exit(r_93);
              LocalPopChoice(b_41);
            }
          else
            {
              t = a_41;
            }
        }
      }
  }
  w_92 = t;
  t = term_j_36;
  y_92 = t;
  t = SSL_table_destroy(y_92);
  t = w_92;
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_120 (ATerm), ATerm x_120 (ATerm), ATerm y_120 (ATerm), ATerm z_120 (ATerm), ATerm t)
{
  ATerm e_94 = NULL,f_94 = NULL,g_94 = NULL,h_94 = NULL;
  t = parse_options_1_0(w_120, t);
  e_94 = t;
  t = term_e_41;
  h_94 = t;
  t = SSL_table_create(h_94);
  t = term_e_41;
  f_94 = t;
  t = term_f_41;
  g_94 = t;
  t = SSL_table_put(f_94, g_94, e_94);
  t = e_94;
  t = y_120(t);
  {
    ATerm g_41 = t;
    int i_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_120, t);
        LocalPopChoice(i_41);
      }
    else
      {
        t = g_41;
        {
          ATerm m_41 = t;
          int n_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_120(t);
              t = report_success_0_0(t);
              LocalPopChoice(n_41);
            }
          else
            {
              t = m_41;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm m_15 (ATerm t)
{
  ATerm o_41 = t;
  int p_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(p_41);
    }
  else
    {
      t = o_41;
      {
        ATerm u_41 = t;
        int v_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(v_41);
          }
        else
          {
            t = u_41;
            {
              ATerm z_41 = t;
              int a_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(o_15, p_15, q_15, t);
                  LocalPopChoice(a_42);
                }
              else
                {
                  t = z_41;
                  {
                    ATerm b_42 = t;
                    int c_42 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(c_42);
                      }
                    else
                      {
                        t = b_42;
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
static ATerm n_15 (ATerm t)
{
  t = input_1_0(r_15, t);
  return(t);
}
static ATerm o_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_15 (ATerm t)
{
  ATerm j_94 = NULL,k_94 = NULL;
  t = term_o_34;
  j_94 = t;
  t = term_k_26;
  k_94 = t;
  t = term_d_42;
  t = g_10(j_94, k_94, t);
  t = term_f_42;
  return(t);
}
static ATerm q_15 (ATerm t)
{
  t = term_g_42;
  return(t);
}
static ATerm r_15 (ATerm t)
{
  t = output_1_0(s_15, t);
  return(t);
}
static ATerm s_15 (ATerm t)
{
  ATerm m_94 = NULL,n_94 = NULL,o_94 = NULL,p_94 = NULL,q_94 = NULL,r_94 = NULL,s_94 = NULL,t_94 = NULL,c_12 = NULL,b_12 = NULL;
  t_94 = t;
  if(match_cons(t, sym_Specification_1))
    {
      n_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_94);
  m_94 = t;
  t = n_94;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_94 = ATgetFirst((ATermList) t);
      q_94 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_94);
  o_94 = t;
  t = q_94;
  t = Cons_2_0(t_15, v_15, t);
  r_94 = t;
  t = (ATerm) ATinsert(CheckATermList(r_94), p_94);
  b_12 = t;
  t = SSLsetAnnotations(b_12, o_94);
  s_94 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, s_94);
  c_12 = t;
  t = SSLsetAnnotations(c_12, m_94);
  return(t);
}
static ATerm t_15 (ATerm t)
{
  ATerm u_94 = NULL,v_94 = NULL,w_94 = NULL,x_94 = NULL,e_9 = NULL;
  x_94 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      v_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_94);
  u_94 = t;
  t = v_94;
  t = all_defs_0_0(t);
  w_94 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, w_94);
  e_9 = t;
  t = SSLsetAnnotations(e_9, u_94);
  return(t);
}
static ATerm v_15 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(m_15, default_usage_0_0, _id, n_15, t);
  return(t);
}
