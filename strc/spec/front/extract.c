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
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_s_40;
ATerm term_y_39;
ATerm term_x_39;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_p_39;
ATerm term_o_39;
ATerm term_n_39;
ATerm term_p_38;
ATerm term_o_38;
ATerm term_n_38;
ATerm term_i_38;
ATerm term_d_38;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_w_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_m_36;
ATerm term_i_36;
ATerm term_s_35;
ATerm term_q_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_a_35;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_e_34;
ATerm term_v_33;
ATerm term_n_33;
ATerm term_h_33;
ATerm term_j_32;
ATerm term_g_32;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_p_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_u_30;
ATerm term_p_30;
ATerm term_k_30;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_n_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_v_18;
ATerm term_f_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_g_17;
ATerm term_i_16;
ATerm term_w_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_b_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_r_14;
ATerm term_i_14;
void init_constant_terms (void)
{
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorNeeded", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Sort_2, term_c_19, (ATerm) ATempty);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_ConstType_1, term_d_19);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym__2, term_g_17, term_g_17);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym__2, term_n_31, term_p_31);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym__2, term_j_34, term_g_17);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_17);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(sym__2, term_s_34, term_i_14);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(sym__2, term_a_35, term_c_35);
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(sym__2, term_w_37, term_i_14);
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(sym__2, term_a_38, term_i_14);
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(sym__2, term_q_36, term_i_14);
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(sym__2, term_v_39, term_i_14);
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm ConstructorNeeded_0_0 (ATerm);
ATerm filter_1_0 (ATerm s_103 (ATerm), ATerm);
ATerm e_0 (ATerm);
ATerm y_0 (ATerm);
ATerm DeclareConstructorNeeded_0_0 (ATerm);
ATerm z_0 (ATerm);
ATerm x_7 (ATerm u_70, ATerm t_70, ATerm);
ATerm z_7 (ATerm o_47, ATerm p_47, ATerm q_47, ATerm);
ATerm giving_up_0_0 (ATerm);
ATerm b_1 (ATerm);
ATerm DefinitionExists_0_0 (ATerm);
ATerm sboundin_3_0 (ATerm q_90 (ATerm), ATerm r_90 (ATerm), ATerm s_90 (ATerm), ATerm);
ATerm c_1 (ATerm);
ATerm g_8 (ATerm j_22, ATerm i_22, ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm free_vars2_4_0 (ATerm z_105 (ATerm), ATerm a_106 (ATerm), ATerm b_106 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm c_106 (ATerm), ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm m_2 (ATerm);
ATerm o_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm svars_arity_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm pat_td_1_0 (ATerm y_120 (ATerm), ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm map1_1_0 (ATerm t_0 (ATerm), ATerm);
ATerm v_3 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm i_4 (ATerm);
ATerm l_4 (ATerm);
ATerm n_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm y_4 (ATerm);
ATerm o_8 (ATerm u_68, ATerm v_68, ATerm w_68, ATerm);
ATerm e_44 (ATerm o_43, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm repeat_1_0 (ATerm d_108 (ATerm), ATerm);
ATerm u_5 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm v_5 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm p_92 (ATerm), ATerm);
ATerm s_8 (ATerm h_64, ATerm i_64, ATerm j_64, ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm l_91 (ATerm), ATerm);
ATerm c_6 (ATerm);
ATerm e_6 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm f_6 (ATerm);
ATerm h_6 (ATerm);
ATerm l_6 (ATerm);
ATerm tuple_unzip_1_0 (ATerm n_95 (ATerm), ATerm);
ATerm MkDistApplication_0_0 (ATerm);
ATerm t_8 (ATerm z_33, ATerm a_34, ATerm);
ATerm m_6 (ATerm);
ATerm o_6 (ATerm);
ATerm copy_1_0 (ATerm s_102 (ATerm), ATerm);
ATerm u_8 (ATerm r_46, ATerm s_46, ATerm);
ATerm last_0_0 (ATerm);
ATerm f_63 (ATerm q_59, ATerm t_59, ATerm u_59, ATerm a_60, ATerm);
ATerm k_63 (ATerm s_61, ATerm u_61, ATerm y_61, ATerm z_61, ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm v_6 (ATerm);
ATerm DefineCongruence_0_0 (ATerm);
ATerm w_6 (ATerm);
ATerm y_6 (ATerm);
ATerm choices_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm alltd_1_0 (ATerm d_93 (ATerm), ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm d_7 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm u_90 (ATerm), ATerm v_90 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm g_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm l_7 (ATerm);
ATerm p_7 (ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm u_7 (ATerm);
ATerm JoinDefs2_0_0 (ATerm);
ATerm q_66 (ATerm b_64, ATerm c_64, ATerm d_64, ATerm e_64, ATerm);
ATerm get_definition_0_0 (ATerm);
ATerm at_end_1_0 (ATerm c_98 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm w_71 (ATerm h_71, ATerm);
ATerm conc_0_0 (ATerm);
ATerm a_9 (ATerm j_99 (ATerm), ATerm v_29, ATerm u_29, ATerm);
ATerm genzip_4_0 (ATerm x_95 (ATerm), ATerm y_95 (ATerm), ATerm z_95 (ATerm), ATerm a_96 (ATerm), ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm h_8 (ATerm);
ATerm f_9 (ATerm u_654, ATerm z_654, ATerm s_62, ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm k_76 (ATerm t_74, ATerm u_74, ATerm v_74, ATerm);
ATerm l_8 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm h_9 (ATerm u_120 (ATerm), ATerm v_120 (ATerm), ATerm w_120 (ATerm), ATerm p_63, ATerm m_63, ATerm u_63, ATerm q_63, ATerm n_63, ATerm o_63, ATerm);
ATerm GnNextChangeGraph_3_0 (ATerm u_120 (ATerm), ATerm v_120 (ATerm), ATerm w_120 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm s_108 (ATerm), ATerm t_108 (ATerm), ATerm);
ATerm for_3_0 (ATerm v_108 (ATerm), ATerm w_108 (ATerm), ATerm x_108 (ATerm), ATerm);
ATerm m_8 (ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm v_8 (ATerm);
ATerm w_8 (ATerm);
ATerm c_9 (ATerm);
ATerm e_9 (ATerm);
ATerm p_32 (ATerm o_31, ATerm t_31, ATerm);
ATerm extract_needed_defs_0_0 (ATerm);
ATerm k_9 (ATerm o_103 (ATerm), ATerm r_35, ATerm p_35, ATerm);
ATerm l_9 (ATerm r_99 (ATerm), ATerm s_99 (ATerm), ATerm b_30, ATerm a_30, ATerm);
ATerm m_9 (ATerm o_99 (ATerm), ATerm x_29, ATerm w_29, ATerm);
ATerm Arities_0_0 (ATerm);
ATerm o_9 (ATerm k_36, ATerm l_36, ATerm);
ATerm s_81 (ATerm i_81, ATerm);
ATerm Definitions_0_0 (ATerm);
ATerm foldr_3_0 (ATerm e_102 (ATerm), ATerm f_102 (ATerm), ATerm g_102 (ATerm), ATerm);
ATerm j_9 (ATerm);
ATerm n_9 (ATerm);
ATerm p_9 (ATerm);
ATerm z_9 (ATerm);
ATerm c_10 (ATerm);
ATerm e_10 (ATerm);
ATerm f_10 (ATerm);
ATerm g_10 (ATerm);
ATerm h_10 (ATerm);
ATerm RegisterSDefT_0_0 (ATerm);
ATerm needed_defs_0_0 (ATerm);
ATerm Cons_2_0 (ATerm u_75 (ATerm), ATerm v_75 (ATerm), ATerm);
ATerm r_9 (ATerm a_52, ATerm b_52, ATerm);
ATerm s_9 (ATerm o_55, ATerm p_55, ATerm);
ATerm u_9 (ATerm l_113 (ATerm), ATerm w_527, ATerm s_55, ATerm);
ATerm t_9 (ATerm k_55, ATerm l_55, ATerm);
ATerm m_10 (ATerm);
ATerm p_10 (ATerm);
ATerm s_10 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm n_116 (ATerm), ATerm);
ATerm o_85 (ATerm i_85, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm v_9 (ATerm q_55, ATerm);
ATerm w_9 (ATerm c_52, ATerm d_52, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm z_86 (ATerm y_85, ATerm);
ATerm a_87 (ATerm c_86, ATerm d_86, ATerm e_86, ATerm);
ATerm b_87 (ATerm m_86, ATerm n_86, ATerm o_86, ATerm);
ATerm x_9 (ATerm);
ATerm u_10 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm w_97 (ATerm), ATerm);
ATerm q_9 (ATerm j_44, ATerm k_44, ATerm);
ATerm debug_1_0 (ATerm j_113 (ATerm), ATerm);
ATerm w_10 (ATerm);
ATerm x_10 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm w_114 (ATerm), ATerm);
ATerm z_10 (ATerm);
ATerm b_11 (ATerm);
ATerm c_11 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm f_11 (ATerm);
ATerm g_11 (ATerm);
ATerm k_11 (ATerm);
ATerm l_11 (ATerm);
ATerm o_11 (ATerm);
ATerm r_11 (ATerm);
ATerm s_11 (ATerm);
ATerm t_11 (ATerm);
ATerm u_11 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm d_10 (ATerm r_56, ATerm s_56, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm v_11 (ATerm);
ATerm x_11 (ATerm);
ATerm z_11 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm b_10 (ATerm z_35, ATerm a_36, ATerm y_35, ATerm);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm b_12 (ATerm);
ATerm d_12 (ATerm);
ATerm f_12 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm y_9 (ATerm r_33, ATerm t_33, ATerm);
ATerm foldr_2_0 (ATerm c_102 (ATerm), ATerm d_102 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm n_12 (ATerm);
ATerm o_12 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm v_114 (ATerm), ATerm);
ATerm s_12 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm w_12 (ATerm);
ATerm need_help_1_0 (ATerm l_117 (ATerm), ATerm);
ATerm map_1_0 (ATerm m_97 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm a_10 (ATerm q_37, ATerm r_37, ATerm);
ATerm y_12 (ATerm);
ATerm z_12 (ATerm);
ATerm a_13 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm c_13 (ATerm);
ATerm d_13 (ATerm);
ATerm e_13 (ATerm);
ATerm g_13 (ATerm);
ATerm h_13 (ATerm);
ATerm i_13 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm o_119 (ATerm), ATerm);
ATerm k_13 (ATerm);
ATerm l_13 (ATerm);
ATerm m_13 (ATerm);
ATerm n_13 (ATerm);
ATerm parse_options_1_0 (ATerm n_119 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm n_117 (ATerm), ATerm o_117 (ATerm), ATerm p_117 (ATerm), ATerm q_117 (ATerm), ATerm);
ATerm s_13 (ATerm);
ATerm u_13 (ATerm);
ATerm y_13 (ATerm);
ATerm z_13 (ATerm);
ATerm c_14 (ATerm);
ATerm iowrap_3_0 (ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm);
ATerm e_14 (ATerm);
ATerm f_14 (ATerm);
ATerm g_14 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,s_0 = NULL,a_1 = NULL;
  a_0 = t;
  t = term_i_14;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_r_14;
  s_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_14), b_0), term_v_14);
  a_1 = t;
  t = SSL_printnl(s_0, a_1);
  t = term_x_14;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
ATerm ConstructorNeeded_0_0 (ATerm t)
{
  ATerm q_1 = NULL,r_1 = NULL,s_1 = NULL;
  q_1 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      r_1 = ATgetArgument(t, 0);
      s_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_1 = NULL,y_1 = NULL;
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, r_1, (ATerm) ATempty);
        w_1 = t;
        t = term_b_15;
        y_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_b_15, (ATerm) ATmakeAppl(sym_OpDecl_2, r_1, (ATerm) ATempty));
        t = o_9(y_1, w_1, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm c_15 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_15) != ATmakeSymbol("w_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, r_1, s_1);
        ;
        LocalPopChoice(a_15);
      }
    else
      {
        t = z_14;
        {
          ATerm z_3 = NULL,a_4 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, r_1, (ATerm) ATempty);
          z_3 = t;
          t = term_b_15;
          a_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_15, (ATerm) ATmakeAppl(sym_OpDecl_2, r_1, (ATerm) ATempty));
          t = o_9(a_4, z_3, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm d_15 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) d_15) != ATmakeSymbol("u_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, r_1, s_1);
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm s_103 (ATerm), ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL;
  j_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_2;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_2 = ATgetFirst((ATermList) t);
          l_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm e_15 = t;
        int f_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_4 = NULL,w_4 = NULL,x_4 = NULL,c_0 = NULL;
            t = SSLgetAnnotations(j_2);
            m_4 = t;
            t = k_2;
            t = s_103(t);
            w_4 = t;
            t = l_2;
            t = filter_1_0(s_103, t);
            x_4 = t;
            t = (ATerm) ATinsert(CheckATermList(x_4), w_4);
            c_0 = t;
            t = SSLsetAnnotations(c_0, m_4);
            ;
            LocalPopChoice(f_15);
          }
        else
          {
            t = e_15;
            t = l_2;
            t = filter_1_0(s_103, t);
          }
      }
    }
  return(t);
}
ATerm e_0 (ATerm t)
{
  t = term_b_15;
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = term_b_15;
  return(t);
}
ATerm DeclareConstructorNeeded_0_0 (ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL;
  p_2 = t;
  {
    ATerm g_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Cong_2))
          {
            q_2 = ATgetArgument(t, 0);
            {
              ATerm j_15 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(h_15);
        {
          ATerm w_2 = NULL,x_2 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, q_2, (ATerm) ATempty);
          w_2 = t;
          t = term_l_15;
          x_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, q_2, (ATerm) ATempty), term_l_15);
          t = k_9(e_0, w_2, x_2, t);
          t = p_2;
        }
      }
    else
      {
        t = g_15;
        {
          ATerm a_3 = NULL,b_3 = NULL;
          if(match_cons(t, sym_Op_2))
            {
              q_2 = ATgetArgument(t, 0);
              {
                ATerm m_15 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, q_2, (ATerm) ATempty);
          a_3 = t;
          t = term_o_15;
          b_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, q_2, (ATerm) ATempty), term_o_15);
          t = k_9(y_0, a_3, b_3, t);
          t = p_2;
        }
      }
  }
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm p_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareConstructorNeeded_0_0(t);
      ;
      LocalPopChoice(q_15);
    }
  else
    {
      t = p_15;
    }
  return(t);
}
ATerm x_7 (ATerm u_70, ATerm t_70, ATerm t)
{
  ATerm d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,o_3 = NULL,p_3 = NULL,x_0 = NULL,v_0 = NULL,h_0 = NULL;
  t = t_70;
  t = topdown_1_0(z_0, t);
  t = u_70;
  if(match_cons(t, sym_Signature_1))
    {
      e_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_70);
  d_3 = t;
  t = e_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_3 = ATgetFirst((ATermList) t);
      j_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_3);
  g_3 = t;
  t = i_3;
  if(match_cons(t, sym_Constructors_1))
    {
      m_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_3);
  l_3 = t;
  t = m_3;
  t = filter_1_0(ConstructorNeeded_0_0, t);
  o_3 = t;
  t = (ATerm) ATmakeAppl(sym_Constructors_1, o_3);
  h_0 = t;
  t = SSLsetAnnotations(h_0, l_3);
  p_3 = t;
  t = j_3;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_3), p_3);
  v_0 = t;
  t = SSLsetAnnotations(v_0, g_3);
  k_3 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, k_3);
  x_0 = t;
  t = SSLsetAnnotations(x_0, d_3);
  f_3 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, t_70)), f_3));
  return(t);
}
ATerm z_7 (ATerm o_47, ATerm p_47, ATerm q_47, ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL;
  t = term_r_14;
  t_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_15), q_47), term_t_15), p_47), term_s_15), o_47), term_r_15);
  u_3 = t;
  t = SSL_printnl(t_3, u_3);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_15), q_47), term_t_15), p_47), term_s_15), o_47), term_r_15);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL;
  t = term_r_14;
  x_3 = t;
  t = (ATerm) ATinsert(ATempty, term_w_15);
  y_3 = t;
  t = SSL_printnl(x_3, y_3);
  t = term_x_14;
  w_3 = t;
  t = SSL_exit(w_3);
  t = (ATerm) ATinsert(ATempty, term_w_15);
  return(t);
}
ATerm b_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_15 = ATgetArgument(t, 0);
      if(((ATgetType(x_15) != AT_INT) || (ATgetInt((ATermInt) x_15) != 0)))
        _fail(t);
      {
        ATerm y_15 = ATgetArgument(t, 1);
        if(((ATgetType(y_15) != AT_INT) || (ATgetInt((ATermInt) y_15) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,d_5 = NULL;
  s_4 = t;
  if(match_cons(t, sym__2))
    {
      t_4 = ATgetArgument(t, 0);
      u_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_4;
  if(match_cons(t, sym__2))
    {
      v_4 = ATgetArgument(t, 0);
      d_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_4;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = d_5;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm z_15 = t;
    int a_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_5 = NULL,h_5 = NULL;
        t = t_4;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm b_16 = ATgetFirst((ATermList) t);
            ATerm d_16 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(d_16) == AT_LIST) && !(ATisEmpty(d_16))))
              {
                ATerm e_16 = ATgetFirst((ATermList) d_16);
                ATerm f_16 = (ATerm) ATgetNext((ATermList) d_16);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm h_16 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(b_1, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = h_16;
            }
          t = term_r_14;
          g_5 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, t_4), term_i_16);
          h_5 = t;
          t = SSL_printnl(g_5, h_5);
          t = (ATerm) ATinsert(ATinsert(ATempty, t_4), term_i_16);
          t = giving_up_0_0(t);
        }
        ;
        LocalPopChoice(a_16);
      }
    else
      {
        t = z_15;
        {
          ATerm p_5 = NULL,q_5 = NULL;
          t = t_4;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm j_16 = ATgetFirst((ATermList) t);
              if(match_cons(j_16, sym__2))
                {
                  p_5 = ATgetArgument(j_16, 0);
                  q_5 = ATgetArgument(j_16, 1);
                }
              else
                _fail(t);
              {
                ATerm k_16 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(k_16) != AT_LIST) || !(ATisEmpty(k_16))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, t_4, (ATerm) ATmakeAppl(sym__2, p_5, q_5));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, t_4, (ATerm) ATmakeAppl(sym__2, p_5, q_5));
        }
      }
  }
  return(t);
}
ATerm sboundin_3_0 (ATerm q_90 (ATerm), ATerm r_90 (ATerm), ATerm s_90 (ATerm), ATerm t)
{
  ATerm n_10 = NULL,o_10 = NULL,t_10 = NULL,v_10 = NULL,a_11 = NULL;
  t_10 = t;
  if(match_cons(t, sym_Let_2))
    {
      v_10 = ATgetArgument(t, 0);
      a_11 = ATgetArgument(t, 1);
      {
        ATerm w_5 = NULL,d_6 = NULL,j_6 = NULL,h_1 = NULL;
        t = SSLgetAnnotations(t_10);
        w_5 = t;
        t = v_10;
        t = q_90(t);
        d_6 = t;
        t = a_11;
        t = q_90(t);
        j_6 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, d_6, j_6);
        h_1 = t;
        t = SSLsetAnnotations(h_1, w_5);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          v_10 = ATgetArgument(t, 0);
          a_11 = ATgetArgument(t, 1);
          n_10 = ATgetArgument(t, 2);
          {
            ATerm m_7 = NULL,w_7 = NULL,y_7 = NULL,a_8 = NULL,i_1 = NULL;
            t = SSLgetAnnotations(t_10);
            m_7 = t;
            t = v_10;
            t = s_90(t);
            w_7 = t;
            t = a_11;
            t = s_90(t);
            y_7 = t;
            t = n_10;
            t = q_90(t);
            a_8 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, w_7, y_7, a_8);
            i_1 = t;
            t = SSLsetAnnotations(i_1, m_7);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              v_10 = ATgetArgument(t, 0);
              a_11 = ATgetArgument(t, 1);
              n_10 = ATgetArgument(t, 2);
              o_10 = ATgetArgument(t, 3);
              {
                ATerm p_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,b_9 = NULL,j_1 = NULL;
                t = SSLgetAnnotations(t_10);
                p_8 = t;
                t = v_10;
                t = s_90(t);
                x_8 = t;
                t = a_11;
                t = s_90(t);
                y_8 = t;
                t = n_10;
                t = s_90(t);
                z_8 = t;
                t = o_10;
                t = q_90(t);
                b_9 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, x_8, y_8, z_8, b_9);
                j_1 = t;
                t = SSLsetAnnotations(j_1, p_8);
              }
            }
          else
            {
              ATerm j_10 = NULL,q_10 = NULL,r_10 = NULL,k_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  v_10 = ATgetArgument(t, 0);
                  a_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(t_10);
              j_10 = t;
              t = v_10;
              t = s_90(t);
              q_10 = t;
              t = a_11;
              t = q_90(t);
              r_10 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, q_10, r_10);
              k_1 = t;
              t = SSLsetAnnotations(k_1, j_10);
            }
        }
    }
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm n_11 = NULL;
  ATerm l_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          n_11 = ATgetArgument(t, 0);
          {
            ATerm o_16 = ATgetArgument(t, 1);
          }
          {
            ATerm p_16 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_16);
      t = n_11;
    }
  else
    {
      t = l_16;
      if(match_cons(t, sym_SDefT_4))
        {
          n_11 = ATgetArgument(t, 0);
          {
            ATerm q_16 = ATgetArgument(t, 1);
          }
          {
            ATerm r_16 = ATgetArgument(t, 2);
          }
          {
            ATerm t_16 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = n_11;
    }
  return(t);
}
ATerm g_8 (ATerm j_22, ATerm i_22, ATerm t)
{
  t = j_22;
  t = map_1_0(c_1, t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm p_11 = NULL,q_11 = NULL;
  if(match_cons(t, sym__2))
    {
      p_11 = ATgetArgument(t, 0);
      q_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_9(l_1, p_11, q_11, t);
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm w_11 = NULL;
  if(match_cons(t, sym__2))
    {
      w_11 = ATgetArgument(t, 0);
      if((w_11 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL;
  if(match_cons(t, sym__2))
    {
      i_12 = ATgetArgument(t, 0);
      j_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_9(o_1, i_12, j_12, t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm k_12 = NULL;
  if(match_cons(t, sym__2))
    {
      k_12 = ATgetArgument(t, 0);
      if((k_12 != ATgetArgument(t, 1)))
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
  ATerm p_13 = NULL;
  if(match_cons(t, sym__2))
    {
      p_13 = ATgetArgument(t, 0);
      if((p_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm z_105 (ATerm), ATerm a_106 (ATerm), ATerm b_106 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm c_106 (ATerm), ATerm t)
{
  ATerm q_13 (ATerm t)
  {
    ATerm l_12 = NULL,q_12 = NULL,r_12 = NULL;
    r_12 = t;
    {
      ATerm u_16 = t;
      int v_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_105(t);
          ;
          LocalPopChoice(v_16);
        }
      else
        {
          t = u_16;
          t = (ATerm) ATempty;
        }
      l_12 = t;
      t = r_12;
      {
        ATerm w_16 = t;
        int z_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_12 = NULL,i_11 = NULL,j_11 = NULL;
            t = a_106(t);
            u_12 = t;
            t = r_12;
            {
              ATerm d_1 (ATerm t)
              {
                ATerm y_10 = NULL;
                t = q_13(t);
                y_10 = t;
                t = (ATerm) ATmakeAppl(sym__2, y_10, u_12);
                t = a_9(c_106, y_10, u_12, t);
                return(t);
              }
              t = b_106(d_1, q_13, e_1, t);
              j_11 = t;
              t = SSL_explode_term(j_11);
              if(match_cons(t, sym__2))
                {
                  ATerm a_17 = ATgetArgument(t, 0);
                  i_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = i_11;
              t = foldr_3_0(f_1, g_1, _id, t);
            }
            ;
            LocalPopChoice(z_16);
          }
        else
          {
            t = w_16;
            {
              ATerm c_12 = NULL;
              t = SSL_explode_term(r_12);
              if(match_cons(t, sym__2))
                {
                  ATerm b_17 = ATgetArgument(t, 0);
                  c_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = c_12;
              t = foldr_3_0(m_1, n_1, q_13, t);
            }
          }
        q_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_12, q_12);
        t = m_9(p_1, l_12, q_12, t);
      }
    }
    return(t);
  }
  t = q_13(t);
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL,b_14 = NULL,h_14 = NULL,j_14 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm c_17 = ATgetArgument(t, 0);
      if(match_cons(c_17, sym_SVar_1))
        {
          v_13 = ATgetArgument(c_17, 0);
        }
      else
        _fail(t);
      w_13 = ATgetArgument(t, 1);
      b_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = w_13;
  t = foldr_3_0(e_2, f_2, g_2, t);
  h_14 = t;
  t = b_14;
  t = foldr_3_0(h_2, i_2, m_2, t);
  j_14 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, v_13, (ATerm) ATmakeAppl(sym__2, h_14, j_14)));
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL,t_14 = NULL,u_14 = NULL;
  o_14 = t;
  if(match_cons(t, sym_Let_2))
    {
      p_14 = ATgetArgument(t, 0);
      q_14 = ATgetArgument(t, 1);
      t = o_14;
      t = g_8(p_14, q_14, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          p_14 = ATgetArgument(t, 0);
          q_14 = ATgetArgument(t, 1);
          t_14 = ATgetArgument(t, 2);
          t = q_14;
          t = map_1_0(o_2, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              p_14 = ATgetArgument(t, 0);
              q_14 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, p_14);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  p_14 = ATgetArgument(t, 0);
                  q_14 = ATgetArgument(t, 1);
                  t_14 = ATgetArgument(t, 2);
                  u_14 = ATgetArgument(t, 3);
                  t = q_14;
                  t = map_1_0(r_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      p_14 = ATgetArgument(t, 0);
                      q_14 = ATgetArgument(t, 1);
                      t_14 = ATgetArgument(t, 2);
                      u_14 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_14;
                  t = map_1_0(s_2, t);
                }
            }
        }
    }
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm s_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_17 = ATgetArgument(t, 0);
      if(match_cons(d_17, sym__2))
        {
          s_16 = ATgetArgument(d_17, 0);
          {
            ATerm f_17 = ATgetArgument(d_17, 1);
          }
        }
      else
        _fail(t);
      if((s_16 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_g_17;
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm k_14 = NULL,l_14 = NULL;
  if(match_cons(t, sym__2))
    {
      k_14 = ATgetArgument(t, 0);
      l_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9(k_14, l_14, t);
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_x_14;
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_g_17;
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL;
  if(match_cons(t, sym__2))
    {
      m_14 = ATgetArgument(t, 0);
      n_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9(m_14, n_14, t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_x_14;
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm i_15 = NULL;
  ATerm h_17 = t;
  int j_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_15 = ATgetArgument(t, 0);
          {
            ATerm k_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_17);
      t = i_15;
    }
  else
    {
      t = h_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_15;
    }
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm v_15 = NULL;
  ATerm p_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_15 = ATgetArgument(t, 0);
          {
            ATerm r_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_17);
      t = v_15;
    }
  else
    {
      t = p_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_15;
    }
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm n_16 = NULL;
  ATerm s_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_16 = ATgetArgument(t, 0);
          {
            ATerm w_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_17);
      t = n_16;
    }
  else
    {
      t = s_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_16;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(t_1, u_1, sboundin_3_0, d_2, t);
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL,i_24 = NULL;
  f_24 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      i_24 = ATgetArgument(t, 0);
      e_24 = ATgetArgument(t, 1);
      {
        ATerm p_24 = NULL,q_24 = NULL,s_24 = NULL,t_24 = NULL;
        t = f_24;
        t = new_0_0(t);
        p_24 = t;
        t = new_0_0(t);
        q_24 = t;
        t = new_0_0(t);
        s_24 = t;
        t = new_0_0(t);
        t_24 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_24), s_24), q_24), p_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, p_24), (ATerm) ATmakeAppl(sym_Var_1, s_24))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, i_24, (ATerm)ATmakeAppl(sym_Var_1, p_24), (ATerm) ATmakeAppl(sym_Var_1, q_24)), (ATerm) ATmakeAppl(sym_BAM_3, e_24, (ATerm)ATmakeAppl(sym_Var_1, s_24), (ATerm) ATmakeAppl(sym_Var_1, t_24)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_z_17, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, t_24)), (ATerm) ATmakeAppl(sym_Var_1, q_24))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          i_24 = ATgetArgument(t, 0);
          {
            ATerm v_24 = NULL,w_24 = NULL,y_24 = NULL,z_24 = NULL;
            t = f_24;
            t = new_0_0(t);
            y_24 = t;
            t = i_24;
            {
              ATerm t_2 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((v_24 != NULL) && (v_24 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      v_24 = ATgetArgument(t, 0);
                    if(((w_24 != NULL) && (w_24 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      w_24 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, y_24);
                return(t);
              }
              t = oncetd_1_0(t_2, t);
              z_24 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_z_17, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_24)), not_null(v_24))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, y_24)), (ATerm) ATmakeAppl(sym_Build_1, z_24))));
            }
          }
        }
      else
        {
          ATerm f_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              i_24 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_24;
          t = new_0_0(t);
          j_25 = t;
          t = new_0_0(t);
          k_25 = t;
          t = i_24;
          {
            ATerm u_2 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((f_25 != NULL) && (f_25 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    f_25 = ATgetArgument(t, 0);
                  if(((i_25 != NULL) && (i_25 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    i_25 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, j_25);
              return(t);
            }
            t = oncetd_1_0(u_2, t);
            l_25 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_25), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, l_25), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_25), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_25)), (ATerm) ATmakeAppl(sym_PrimT_3, term_a_18, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, k_25))))), (ATerm)ATmakeAppl(sym_Var_1, j_25), (ATerm) ATmakeAppl(sym_Op_2, term_b_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_25)), not_null(f_25)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm p_25 = NULL,r_25 = NULL;
  p_25 = t;
  if(match_cons(t, sym_Match_1))
    {
      r_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_25 = NULL,x_25 = NULL,a_26 = NULL,b_26 = NULL;
        t = p_25;
        t = new_0_0(t);
        a_26 = t;
        t = r_25;
        {
          ATerm v_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((t_25 != NULL) && (t_25 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  t_25 = ATgetArgument(t, 0);
                if(((x_25 != NULL) && (x_25 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  x_25 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, a_26), t_25);
            return(t);
          }
          t = pat_td_1_0(v_2, t);
          b_26 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_26), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_f_18, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, a_26))), (ATerm) ATmakeAppl(sym_Match_1, not_null(x_25))))));
        }
        ;
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        {
          ATerm g_18 = t;
          int h_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_26 = NULL,j_26 = NULL,k_26 = NULL;
              t = p_25;
              t = new_0_0(t);
              j_26 = t;
              t = r_25;
              {
                ATerm y_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((g_26 != NULL) && (g_26 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        g_26 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, j_26);
                  return(t);
                }
                t = pat_td_1_0(y_2, t);
                k_26 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, j_26)), not_null(g_26))));
              }
              ;
              LocalPopChoice(h_18);
            }
          else
            {
              t = g_18;
              {
                ATerm o_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL;
                t = p_25;
                t = new_0_0(t);
                r_26 = t;
                t = r_25;
                {
                  ATerm z_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((q_26 != NULL) && (q_26 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          q_26 = ATgetArgument(t, 0);
                        if(((o_26 != NULL) && (o_26 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          o_26 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, r_26);
                    return(t);
                  }
                  t = pat_td_1_0(z_2, t);
                  s_26 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, s_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, r_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(o_26)), not_null(q_26)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm y_120 (ATerm), ATerm t)
{
  ATerm i_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_120(t);
      ;
      LocalPopChoice(j_18);
    }
  else
    {
      t = i_18;
      {
        ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL,x_31 = NULL;
        r_31 = t;
        if(match_cons(t, sym_Op_2))
          {
            s_31 = ATgetArgument(t, 0);
            x_31 = ATgetArgument(t, 1);
            {
              ATerm b_13 = NULL,f_13 = NULL,v_1 = NULL;
              t = SSLgetAnnotations(r_31);
              b_13 = t;
              t = x_31;
              {
                ATerm c_3 (ATerm t)
                {
                  t = pat_td_1_0(y_120, t);
                  return(t);
                }
                t = fetch_1_0(c_3, t);
                f_13 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, s_31, f_13);
                v_1 = t;
                t = SSLsetAnnotations(v_1, b_13);
              }
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                s_31 = ATgetArgument(t, 0);
                x_31 = ATgetArgument(t, 1);
                {
                  ATerm k_18 = t;
                  int l_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_13 = NULL,a_14 = NULL,x_1 = NULL;
                      t = SSLgetAnnotations(r_31);
                      x_13 = t;
                      t = x_31;
                      t = pat_td_1_0(y_120, t);
                      a_14 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, s_31, a_14);
                      x_1 = t;
                      t = SSLsetAnnotations(x_1, x_13);
                      ;
                      LocalPopChoice(l_18);
                    }
                  else
                    {
                      t = k_18;
                      {
                        ATerm s_14 = NULL,y_14 = NULL,z_1 = NULL;
                        t = SSLgetAnnotations(r_31);
                        s_14 = t;
                        t = s_31;
                        t = pat_td_1_0(y_120, t);
                        y_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, y_14, x_31);
                        z_1 = t;
                        t = SSLsetAnnotations(z_1, s_14);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    s_31 = ATgetArgument(t, 0);
                    x_31 = ATgetArgument(t, 1);
                    q_31 = ATgetArgument(t, 2);
                    {
                      ATerm c_16 = NULL,g_16 = NULL,a_2 = NULL;
                      t = SSLgetAnnotations(r_31);
                      c_16 = t;
                      t = q_31;
                      {
                        ATerm h_3 (ATerm t)
                        {
                          t = pat_td_1_0(y_120, t);
                          return(t);
                        }
                        t = fetch_1_0(h_3, t);
                        g_16 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, s_31, x_31, g_16);
                        a_2 = t;
                        t = SSLsetAnnotations(a_2, c_16);
                      }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        s_31 = ATgetArgument(t, 0);
                        x_31 = ATgetArgument(t, 1);
                        q_31 = ATgetArgument(t, 2);
                        {
                          ATerm e_17 = NULL,i_17 = NULL,b_2 = NULL;
                          t = SSLgetAnnotations(r_31);
                          e_17 = t;
                          t = q_31;
                          {
                            ATerm n_3 (ATerm t)
                            {
                              t = pat_td_1_0(y_120, t);
                              return(t);
                            }
                            t = fetch_1_0(n_3, t);
                            i_17 = t;
                            t = (ATerm) ATmakeAppl(sym_CallT_3, s_31, x_31, i_17);
                            b_2 = t;
                            t = SSLsetAnnotations(b_2, e_17);
                          }
                        }
                      }
                    else
                      {
                        ATerm x_17 = NULL,c_18 = NULL,c_2 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            s_31 = ATgetArgument(t, 0);
                            x_31 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(r_31);
                        x_17 = t;
                        t = x_31;
                        t = pat_td_1_0(y_120, t);
                        c_18 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, s_31, c_18);
                        c_2 = t;
                        t = SSLsetAnnotations(c_2, x_17);
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
  ATerm l_32 = NULL,o_32 = NULL;
  l_32 = t;
  if(match_cons(t, sym_Build_1))
    {
      o_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_32 = NULL,s_32 = NULL,u_32 = NULL,z_32 = NULL;
        t = l_32;
        t = new_0_0(t);
        u_32 = t;
        t = o_32;
        {
          ATerm q_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((r_32 != NULL) && (r_32 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_32 = ATgetArgument(t, 0);
                if(((s_32 != NULL) && (s_32 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  s_32 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, u_32);
            return(t);
          }
          t = pat_td_1_0(q_3, t);
          z_32 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_32), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_v_18, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_32)), not_null(r_32))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_32)))), (ATerm) ATmakeAppl(sym_Build_1, z_32)));
        }
        ;
        LocalPopChoice(s_18);
      }
    else
      {
        t = r_18;
        {
          ATerm w_18 = t;
          int x_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_33 = NULL,c_33 = NULL,d_33 = NULL;
              t = l_32;
              t = new_0_0(t);
              c_33 = t;
              t = o_32;
              {
                ATerm r_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((a_33 != NULL) && (a_33 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        a_33 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, c_33);
                  return(t);
                }
                t = pat_td_1_0(r_3, t);
                d_33 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_33), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_33), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, c_33)))), (ATerm) ATmakeAppl(sym_Build_1, d_33)));
              }
              ;
              LocalPopChoice(x_18);
            }
          else
            {
              t = w_18;
              {
                ATerm e_33 = NULL,f_33 = NULL,i_33 = NULL,m_33 = NULL;
                t = l_32;
                t = new_0_0(t);
                i_33 = t;
                t = o_32;
                {
                  ATerm s_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((e_33 != NULL) && (e_33 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          e_33 = ATgetArgument(t, 0);
                        if(((f_33 != NULL) && (f_33 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          f_33 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, i_33);
                    return(t);
                  }
                  t = pat_td_1_0(s_3, t);
                  m_33 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_33), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(e_33), not_null(f_33), (ATerm) ATmakeAppl(sym_Var_1, i_33))), (ATerm) ATmakeAppl(sym_Build_1, m_33)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm map1_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL,w_35 = NULL;
  m_35 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_35 = ATgetFirst((ATermList) t);
      w_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm y_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,t_18 = NULL,u_18 = NULL,b_4 = NULL,n_2 = NULL;
        t = SSLgetAnnotations(m_35);
        q_18 = t;
        t = n_35;
        t = t_0(t);
        t_18 = t;
        t = (ATerm) ATinsert(CheckATermList(w_35), t_18);
        n_2 = t;
        t = SSLsetAnnotations(n_2, q_18);
        u_18 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_18 = ATgetFirst((ATermList) t);
            o_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_18);
        m_18 = t;
        t = o_18;
        {
          ATerm a_19 = t;
          int b_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(t_0, t);
              ;
              LocalPopChoice(b_19);
            }
          else
            {
              t = a_19;
            }
          p_18 = t;
          t = (ATerm) ATinsert(CheckATermList(p_18), n_18);
          b_4 = t;
          t = SSLsetAnnotations(b_4, m_18);
        }
        ;
        LocalPopChoice(z_18);
      }
    else
      {
        t = y_18;
        {
          ATerm p_19 = NULL,b_20 = NULL,f_4 = NULL;
          t = SSLgetAnnotations(m_35);
          p_19 = t;
          t = w_35;
          t = map1_1_0(t_0, t);
          b_20 = t;
          t = (ATerm) ATinsert(CheckATermList(b_20), n_35);
          f_4 = t;
          t = SSLsetAnnotations(f_4, p_19);
        }
      }
  }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm t_38 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      t_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, t_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_19), term_e_19));
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm u_38 = NULL,x_38 = NULL;
  x_38 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      u_38 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, u_38, term_e_19);
    }
  else
    {
      t = x_38;
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm l_39 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      l_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, l_39, term_e_19);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm m_39 = NULL,s_39 = NULL;
  s_39 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      m_39 = ATgetArgument(t, 0);
      {
        ATerm f_19 = t;
        int g_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, m_39, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_19), term_e_19));
            ;
            LocalPopChoice(g_19);
          }
        else
          {
            t = f_19;
            t = s_39;
          }
      }
    }
  else
    {
      t = s_39;
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm g_40 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      g_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, g_40, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_19), term_e_19));
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm h_40 = NULL,j_40 = NULL;
  j_40 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_40 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, h_40, term_e_19);
    }
  else
    {
      t = j_40;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm c_37 = NULL,h_37 = NULL,j_37 = NULL,k_37 = NULL,m_37 = NULL,n_37 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      m_37 = ATgetArgument(t, 0);
      n_37 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, m_37, n_37);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          m_37 = ATgetArgument(t, 0);
          t = m_37;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_37 = ATgetFirst((ATermList) t);
              h_37 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, c_37, (ATerm) ATmakeAppl(sym_LChoices_1, h_37));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_h_19;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              m_37 = ATgetArgument(t, 0);
              t = m_37;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_37 = ATgetFirst((ATermList) t);
                  h_37 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, c_37, (ATerm) ATmakeAppl(sym_Choices_1, h_37));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_h_19;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  m_37 = ATgetArgument(t, 0);
                  t = m_37;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      c_37 = ATgetFirst((ATermList) t);
                      h_37 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, c_37, (ATerm) ATmakeAppl(sym_Seqs_1, h_37));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_i_19;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      m_37 = ATgetArgument(t, 0);
                      n_37 = ATgetArgument(t, 1);
                      k_37 = ATgetArgument(t, 2);
                      j_37 = ATgetArgument(t, 3);
                      {
                        ATerm q_38 = NULL,s_38 = NULL;
                        t = n_37;
                        t = map1_1_0(v_3, t);
                        q_38 = t;
                        t = k_37;
                        t = map1_1_0(c_4, t);
                        s_38 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, m_37, q_38, s_38, j_37);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          m_37 = ATgetArgument(t, 0);
                          n_37 = ATgetArgument(t, 1);
                          k_37 = ATgetArgument(t, 2);
                          j_37 = ATgetArgument(t, 3);
                          {
                            ATerm j_19 = t;
                            int k_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm i_39 = NULL,k_39 = NULL;
                                t = k_37;
                                t = map1_1_0(d_4, t);
                                i_39 = t;
                                t = n_37;
                                t = map_1_0(e_4, t);
                                k_39 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, m_37, k_39, i_39, j_37);
                                ;
                                LocalPopChoice(k_19);
                              }
                            else
                              {
                                t = j_19;
                                {
                                  ATerm a_40 = NULL,f_40 = NULL;
                                  t = n_37;
                                  t = map1_1_0(g_4, t);
                                  a_40 = t;
                                  t = k_37;
                                  t = map_1_0(h_4, t);
                                  f_40 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, m_37, a_40, f_40, j_37);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              m_37 = ATgetArgument(t, 0);
                              n_37 = ATgetArgument(t, 1);
                              k_37 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, n_37, (ATerm) ATmakeAppl(sym_Op_2, term_b_18, (ATerm) ATinsert(ATinsert(ATempty, k_37), m_37)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  m_37 = ATgetArgument(t, 0);
                                  n_37 = ATgetArgument(t, 1);
                                  k_37 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, k_37)), m_37), (ATerm) ATmakeAppl(sym_Build_1, n_37)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      m_37 = ATgetArgument(t, 0);
                                      n_37 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_37, (ATerm) ATmakeAppl(sym_Match_1, n_37));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          m_37 = ATgetArgument(t, 0);
                                          n_37 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, m_37), n_37);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              m_37 = ATgetArgument(t, 0);
                                              n_37 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_37), m_37);
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
ATerm i_4 (ATerm t)
{
  ATerm m_19 = t;
  if((PushChoice() == 0))
    {
      ATerm c_42 = NULL,f_42 = NULL,h_42 = NULL,j_4 = NULL;
      h_42 = t;
      if(match_cons(t, sym_Var_1))
        {
          f_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_42);
      c_42 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, f_42);
      j_4 = t;
      t = SSLsetAnnotations(j_4, c_42);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_19;
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_n_19;
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm i_42 = NULL,j_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_42 = ATgetFirst((ATermList) t);
      j_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_42, j_42);
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm o_42 = NULL,s_42 = NULL,u_42 = NULL,y_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_19 = ATgetArgument(t, 0);
      if(match_cons(o_19, sym__2))
        {
          o_42 = ATgetArgument(o_19, 0);
          s_42 = ATgetArgument(o_19, 1);
        }
      else
        _fail(t);
      {
        ATerm q_19 = ATgetArgument(t, 1);
        if(match_cons(q_19, sym__2))
          {
            u_42 = ATgetArgument(q_19, 0);
            y_42 = ATgetArgument(q_19, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_42), o_42), (ATerm) ATinsert(CheckATermList(y_42), s_42));
  return(t);
}
ATerm q_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_n_19;
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm d_43 = NULL,e_43 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_43 = ATgetFirst((ATermList) t);
      e_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_43, e_43);
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_19 = ATgetArgument(t, 0);
      if(match_cons(r_19, sym__2))
        {
          f_43 = ATgetArgument(r_19, 0);
          g_43 = ATgetArgument(r_19, 1);
        }
      else
        _fail(t);
      {
        ATerm w_19 = ATgetArgument(t, 1);
        if(match_cons(w_19, sym__2))
          {
            h_43 = ATgetArgument(w_19, 0);
            i_43 = ATgetArgument(w_19, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_43), f_43), (ATerm) ATinsert(CheckATermList(i_43), g_43));
  return(t);
}
ATerm o_8 (ATerm u_68, ATerm v_68, ATerm w_68, ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL,k_4 = NULL;
  t = w_68;
  t = fetch_1_0(i_4, t);
  t = w_68;
  t = genzip_4_0(l_4, n_4, p_4, LiftPrimArg_0_0, t);
  b_42 = t;
  if(match_cons(t, sym__2))
    {
      x_41 = ATgetArgument(t, 0);
      y_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_42);
  w_41 = t;
  t = x_41;
  t = concat_0_0(t);
  z_41 = t;
  t = y_41;
  t = genzip_4_0(q_4, r_4, y_4, _id, t);
  a_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_41, a_42);
  k_4 = t;
  t = SSLsetAnnotations(k_4, w_41);
  if(match_cons(t, sym__2))
    {
      o_41 = ATgetArgument(t, 0);
      {
        ATerm x_19 = ATgetArgument(t, 1);
        if(match_cons(x_19, sym__2))
          {
            p_41 = ATgetArgument(x_19, 0);
            q_41 = ATgetArgument(x_19, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, o_41, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_41), (ATerm) ATmakeAppl(sym_CallT_3, u_68, v_68, q_41)));
  return(t);
}
ATerm e_44 (ATerm o_43, ATerm t)
{
  ATerm q_43 = NULL;
  t = o_43;
  {
    ATerm y_19 = t;
    if((PushChoice() == 0))
      {
        ATerm r_43 = NULL,s_43 = NULL,w_43 = NULL,o_4 = NULL;
        w_43 = t;
        if(match_cons(t, sym_Var_1))
          {
            s_43 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_43);
        r_43 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, s_43);
        o_4 = t;
        t = SSLsetAnnotations(o_4, r_43);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_19;
      }
    t = new_0_0(t);
    q_43 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, q_43), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, o_43), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_43)))), (ATerm) ATmakeAppl(sym_Var_1, q_43)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm b_44 = NULL,c_44 = NULL;
  b_44 = t;
  if(match_cons(t, sym_Var_1))
    {
      c_44 = ATgetArgument(t, 0);
      {
        ATerm c_20 = t;
        int d_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_44(b_44, t);
            ;
            LocalPopChoice(d_20);
          }
        else
          {
            t = c_20;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_i_19, (ATerm) ATmakeAppl(sym_Var_1, c_44)));
          }
      }
    }
  else
    {
      t = e_44(b_44, t);
    }
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm e_20 = t;
  if((PushChoice() == 0))
    {
      ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL,i_5 = NULL;
      p_21 = t;
      if(match_cons(t, sym_Var_1))
        {
          o_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_21);
      n_21 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, o_21);
      i_5 = t;
      t = SSLsetAnnotations(i_5, n_21);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_20;
    }
  return(t);
}
ATerm a_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_n_19;
  return(t);
}
ATerm b_5 (ATerm t)
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
ATerm c_5 (ATerm t)
{
  ATerm u_21 = NULL,w_21 = NULL,x_21 = NULL,a_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_20 = ATgetArgument(t, 0);
      if(match_cons(f_20, sym__2))
        {
          u_21 = ATgetArgument(f_20, 0);
          w_21 = ATgetArgument(f_20, 1);
        }
      else
        _fail(t);
      {
        ATerm g_20 = ATgetArgument(t, 1);
        if(match_cons(g_20, sym__2))
          {
            x_21 = ATgetArgument(g_20, 0);
            a_22 = ATgetArgument(g_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_21), u_21), (ATerm) ATinsert(CheckATermList(a_22), w_21));
  return(t);
}
ATerm e_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_n_19;
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_22 = ATgetFirst((ATermList) t);
      e_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_22, e_22);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL,k_22 = NULL,l_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_20 = ATgetArgument(t, 0);
      if(match_cons(m_20, sym__2))
        {
          f_22 = ATgetArgument(m_20, 0);
          g_22 = ATgetArgument(m_20, 1);
        }
      else
        _fail(t);
      {
        ATerm p_20 = ATgetArgument(t, 1);
        if(match_cons(p_20, sym__2))
          {
            k_22 = ATgetArgument(p_20, 0);
            l_22 = ATgetArgument(p_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_22), f_22), (ATerm) ATinsert(CheckATermList(l_22), g_22));
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm q_20 = t;
  if((PushChoice() == 0))
    {
      ATerm g_24 = NULL,h_24 = NULL,j_24 = NULL,y_5 = NULL;
      j_24 = t;
      if(match_cons(t, sym_Var_1))
        {
          h_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_24);
      g_24 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, h_24);
      y_5 = t;
      t = SSLsetAnnotations(y_5, g_24);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_20;
    }
  return(t);
}
ATerm m_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_n_19;
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_24 = ATgetFirst((ATermList) t);
      n_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_24, n_24);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm o_24 = NULL,r_24 = NULL,u_24 = NULL,a_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_20 = ATgetArgument(t, 0);
      if(match_cons(r_20, sym__2))
        {
          o_24 = ATgetArgument(r_20, 0);
          r_24 = ATgetArgument(r_20, 1);
        }
      else
        _fail(t);
      {
        ATerm s_20 = ATgetArgument(t, 1);
        if(match_cons(s_20, sym__2))
          {
            u_24 = ATgetArgument(s_20, 0);
            a_25 = ATgetArgument(s_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_24), o_24), (ATerm) ATinsert(CheckATermList(a_25), r_24));
  return(t);
}
ATerm r_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_n_19;
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm b_25 = NULL,d_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_25 = ATgetFirst((ATermList) t);
      d_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_25, d_25);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm e_25 = NULL,g_25 = NULL,h_25 = NULL,m_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_20 = ATgetArgument(t, 0);
      if(match_cons(t_20, sym__2))
        {
          e_25 = ATgetArgument(t_20, 0);
          g_25 = ATgetArgument(t_20, 1);
        }
      else
        _fail(t);
      {
        ATerm u_20 = ATgetArgument(t, 1);
        if(match_cons(u_20, sym__2))
          {
            h_25 = ATgetArgument(u_20, 0);
            m_25 = ATgetArgument(u_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_25), e_25), (ATerm) ATinsert(CheckATermList(m_25), g_25));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL;
  e_50 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      f_50 = ATgetArgument(t, 0);
      g_50 = ATgetArgument(t, 1);
      d_50 = ATgetArgument(t, 2);
      {
        ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,m_21 = NULL,j_5 = NULL;
        t = d_50;
        t = fetch_1_0(z_4, t);
        t = d_50;
        t = genzip_4_0(a_5, b_5, c_5, LiftPrimArg_0_0, t);
        m_21 = t;
        if(match_cons(t, sym__2))
          {
            z_20 = ATgetArgument(t, 0);
            a_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_21);
        y_20 = t;
        t = z_20;
        t = concat_0_0(t);
        b_21 = t;
        t = a_21;
        t = genzip_4_0(e_5, f_5, k_5, _id, t);
        c_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_21, c_21);
        j_5 = t;
        t = SSLsetAnnotations(j_5, y_20);
        if(match_cons(t, sym__2))
          {
            v_20 = ATgetArgument(t, 0);
            {
              ATerm l_21 = ATgetArgument(t, 1);
              if(match_cons(l_21, sym__2))
                {
                  w_20 = ATgetArgument(l_21, 0);
                  x_20 = ATgetArgument(l_21, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, v_20, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, w_20), (ATerm) ATmakeAppl(sym_PrimT_3, f_50, g_50, x_20)));
      }
    }
  else
    {
      ATerm q_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,c_24 = NULL,d_24 = NULL,a_6 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          f_50 = ATgetArgument(t, 0);
          g_50 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_50;
      t = fetch_1_0(l_5, t);
      t = g_50;
      t = genzip_4_0(m_5, n_5, o_5, LiftPrimArg_0_0, t);
      d_24 = t;
      if(match_cons(t, sym__2))
        {
          x_23 = ATgetArgument(t, 0);
          y_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_24);
      u_23 = t;
      t = x_23;
      t = concat_0_0(t);
      z_23 = t;
      t = y_23;
      t = genzip_4_0(r_5, s_5, t_5, _id, t);
      c_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_23, c_24);
      a_6 = t;
      t = SSLsetAnnotations(a_6, u_23);
      if(match_cons(t, sym__2))
        {
          q_23 = ATgetArgument(t, 0);
          {
            ATerm t_21 = ATgetArgument(t, 1);
            if(match_cons(t_21, sym__2))
              {
                s_23 = ATgetArgument(t_21, 0);
                t_23 = ATgetArgument(t_21, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, q_23, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, s_23), (ATerm) ATmakeAppl(sym_PrimT_3, f_50, (ATerm)ATempty, t_23)));
    }
  return(t);
}
ATerm repeat_1_0 (ATerm d_108 (ATerm), ATerm t)
{
  ATerm m_50 (ATerm t)
  {
    ATerm m_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_108(t);
        t = m_50(t);
        ;
        LocalPopChoice(n_22);
      }
    else
      {
        t = m_22;
      }
    return(t);
  }
  t = m_50(t);
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL;
  b_51 = t;
  if(match_cons(t, sym_Con_3))
    {
      y_50 = ATgetArgument(t, 0);
      z_50 = ATgetArgument(t, 1);
      a_51 = ATgetArgument(t, 2);
      {
        ATerm d_26 = NULL,g_6 = NULL;
        t = SSLgetAnnotations(b_51);
        d_26 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, y_50, z_50, a_51);
        g_6 = t;
        t = SSLsetAnnotations(g_6, d_26);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = b_51;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm s_22 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(u_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_22;
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL,u_52 = NULL;
  s_52 = t;
  if(match_cons(t, sym_Con_3))
    {
      t_52 = ATgetArgument(t, 0);
      u_52 = ATgetArgument(t, 1);
      r_52 = ATgetArgument(t, 2);
      {
        ATerm y_26 = NULL,i_6 = NULL;
        t = SSLgetAnnotations(s_52);
        y_26 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, t_52, u_52, r_52);
        i_6 = t;
        t = SSLsetAnnotations(i_6, y_26);
      }
    }
  else
    {
      ATerm r_27 = NULL,k_6 = NULL;
      if(match_cons(t, sym_App_2))
        {
          t_52 = ATgetArgument(t, 0);
          u_52 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_52);
      r_27 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, t_52, u_52);
      k_6 = t;
      t = SSLsetAnnotations(k_6, r_27);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm y_22 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(v_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_22;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm b_53 = NULL,c_53 = NULL,g_53 = NULL,h_53 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      b_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_53;
  if(match_cons(t, sym_StratRule_3))
    {
      c_53 = ATgetArgument(t, 0);
      g_53 = ATgetArgument(t, 1);
      h_53 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, g_53), (ATerm) ATmakeAppl(sym_Where_1, h_53)), c_53));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          c_53 = ATgetArgument(t, 0);
          g_53 = ATgetArgument(t, 1);
          h_53 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = c_53;
      t = pureterm_0_0(t);
      t = g_53;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, g_53)), (ATerm) ATmakeAppl(sym_Where_1, h_53)), (ATerm) ATmakeAppl(sym_Match_1, c_53)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm p_92 (ATerm), ATerm t)
{
  ATerm t_53 (ATerm t)
  {
    ATerm e_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_92(t);
        ;
        LocalPopChoice(f_23);
      }
    else
      {
        t = e_23;
        t = SRTS_one(t_53, t);
      }
    return(t);
  }
  t = t_53(t);
  return(t);
}
ATerm s_8 (ATerm h_64, ATerm i_64, ATerm j_64, ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL;
  t = new_0_0(t);
  y_53 = t;
  t = h_64;
  {
    ATerm x_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm h_23 = ATgetArgument(t, 0);
          if(match_cons(h_23, sym_Var_1))
            {
              if(((x_53 != NULL) && (x_53 != ATgetArgument(h_23, 0))))
                _fail(ATgetArgument(h_23, 0));
              else
                x_53 = ATgetArgument(h_23, 0);
            }
          else
            _fail(t);
          if(((v_53 != NULL) && (v_53 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            v_53 = ATgetArgument(t, 1);
          {
            ATerm j_23 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, x_53);
      return(t);
    }
    t = oncetd_1_0(x_5, t);
    z_53 = t;
    t = i_64;
    {
      ATerm z_5 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm k_23 = ATgetArgument(t, 0);
            if(match_cons(k_23, sym_Var_1))
              {
                if(((x_53 != NULL) && (x_53 != ATgetArgument(k_23, 0))))
                  _fail(ATgetArgument(k_23, 0));
                else
                  x_53 = ATgetArgument(k_23, 0);
              }
            else
              _fail(t);
            if(((w_53 != NULL) && (w_53 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              w_53 = ATgetArgument(t, 1);
            {
              ATerm n_23 = ATgetArgument(t, 2);
              if(match_cons(n_23, sym_CallT_3))
                {
                  if(((u_53 != NULL) && (u_53 != ATgetArgument(n_23, 0))))
                    _fail(ATgetArgument(n_23, 0));
                  else
                    u_53 = ATgetArgument(n_23, 0);
                  {
                    ATerm o_23 = ATgetArgument(n_23, 1);
                    if(((ATgetType(o_23) != AT_LIST) || !(ATisEmpty(o_23))))
                      _fail(t);
                  }
                  {
                    ATerm p_23 = ATgetArgument(n_23, 2);
                    if(((ATgetType(p_23) != AT_LIST) || !(ATisEmpty(p_23))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, y_53);
        return(t);
      }
      t = oncetd_1_0(z_5, t);
      a_54 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_53), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, z_53, a_54, (ATerm) ATmakeAppl(sym_Seq_2, j_64, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(u_53), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(v_53), not_null(w_53), term_i_19))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(x_53)), (ATerm) ATmakeAppl(sym_Var_1, y_53))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm r_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_23 = t;
      int b_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_54 = NULL,w_54 = NULL,x_54 = NULL,y_54 = NULL,z_54 = NULL,a_55 = NULL;
          y_54 = t;
          if(match_cons(t, sym_SRule_1))
            {
              z_54 = ATgetArgument(t, 0);
              t = z_54;
              if(match_cons(t, sym_Rule_3))
                {
                  v_54 = ATgetArgument(t, 0);
                  w_54 = ATgetArgument(t, 1);
                  x_54 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = y_54;
              t = s_8(v_54, w_54, x_54, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm p_28 = NULL,s_28 = NULL,n_6 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  z_54 = ATgetArgument(t, 0);
                  a_55 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(y_54);
              p_28 = t;
              t = a_55;
              t = desugarRule_0_0(t);
              s_28 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, z_54, s_28);
              n_6 = t;
              t = SSLsetAnnotations(n_6, p_28);
            }
          ;
          LocalPopChoice(b_24);
        }
      else
        {
          t = w_23;
          t = RtoS_0_0(t);
        }
      ;
      LocalPopChoice(v_23);
    }
  else
    {
      t = r_23;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm l_91 (ATerm), ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    t = topdown_1_0(l_91, t);
    return(t);
  }
  t = l_91(t);
  t = SRTS_all(b_6, t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm k_24 = t;
  int l_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(l_24);
    }
  else
    {
      t = k_24;
    }
  t = repeat_1_0(e_6, t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm x_24 = t;
  int c_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
      LocalPopChoice(c_25);
    }
  else
    {
      t = x_24;
      {
        ATerm n_25 = t;
        int o_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_56 = NULL,c_56 = NULL,g_56 = NULL,h_56 = NULL;
            b_56 = t;
            if(match_cons(t, sym_CallT_3))
              {
                c_56 = ATgetArgument(t, 0);
                g_56 = ATgetArgument(t, 1);
                h_56 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = b_56;
            t = o_8(c_56, g_56, h_56, t);
            ;
            LocalPopChoice(o_25);
          }
        else
          {
            t = n_25;
            {
              ATerm q_25 = t;
              int s_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(s_25);
                }
              else
                {
                  t = q_25;
                  {
                    ATerm u_25 = t;
                    int v_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(v_25);
                      }
                    else
                      {
                        t = u_25;
                        {
                          ATerm w_25 = t;
                          int y_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm z_25 = t;
                              int c_26 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm p_56 = NULL,q_56 = NULL,u_56 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      p_56 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = p_56;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      q_56 = ATgetArgument(t, 0);
                                      t = q_56;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          q_56 = ATgetArgument(t, 0);
                                          u_56 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, q_56, u_56);
                                    }
                                  ;
                                  LocalPopChoice(c_26);
                                }
                              else
                                {
                                  t = z_25;
                                  t = Mapp2_0_0(t);
                                }
                              ;
                              LocalPopChoice(y_25);
                            }
                          else
                            {
                              t = w_25;
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
  t = topdown_1_0(c_6, t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm p_57 = NULL,r_57 = NULL;
  r_57 = t;
  t = SSL_explode_term(r_57);
  if(match_cons(t, sym__2))
    {
      ATerm e_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_26 = ATgetArgument(t, 1);
        if(((ATgetType(f_26) == AT_LIST) && !(ATisEmpty(f_26))))
          {
            p_57 = ATgetFirst((ATermList) f_26);
            {
              ATerm h_26 = (ATerm) ATgetNext((ATermList) f_26);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_57;
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm a_29 = NULL,i_29 = NULL,j_29 = NULL;
  j_29 = t;
  t = SSL_explode_term(j_29);
  if(match_cons(t, sym__2))
    {
      ATerm i_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_26 = ATgetArgument(t, 1);
        if(((ATgetType(l_26) == AT_LIST) && !(ATisEmpty(l_26))))
          {
            ATerm m_26 = ATgetFirst((ATermList) l_26);
            a_29 = (ATerm) ATgetNext((ATermList) l_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_b_18;
  i_29 = t;
  t = SSL_mkterm(i_29, a_29);
  return(t);
}
ATerm l_6 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm n_95 (ATerm), ATerm t)
{
  ATerm h_57 = NULL,i_57 = NULL;
  ATerm s_57 (ATerm t)
  {
    ATerm n_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_57 = NULL,l_57 = NULL,m_57 = NULL;
        j_57 = t;
        t = map_1_0(f_6, t);
        t = n_95(t);
        l_57 = t;
        t = j_57;
        t = map_1_0(h_6, t);
        t = s_57(t);
        m_57 = t;
        t = (ATerm) ATinsert(CheckATermList(m_57), l_57);
        ;
        LocalPopChoice(p_26);
      }
    else
      {
        t = n_26;
        t = map_1_0(l_6, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = s_57(t);
  i_57 = t;
  t = term_b_18;
  h_57 = t;
  t = SSL_mkterm(h_57, i_57);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm t_57 = NULL;
  t_57 = t;
  {
    ATerm t_26 = t;
    int u_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_57 = NULL,y_57 = NULL,z_57 = NULL;
        t = t_57;
        t = new_0_0(t);
        v_57 = t;
        t = new_0_0(t);
        y_57 = t;
        t = new_0_0(t);
        z_57 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_57), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_b_18, (ATerm) ATinsert(ATinsert(ATempty, t_57), (ATerm) ATmakeAppl(sym_Var_1, y_57))), (ATerm) ATmakeAppl(sym_Var_1, z_57)), (ATerm)ATmakeAppl(sym_VarDec_2, v_57, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_19), term_e_19)), y_57, (ATerm)ATmakeAppl(sym_Var_1, y_57), z_57, (ATerm) ATmakeAppl(sym_Var_1, z_57));
        ;
        LocalPopChoice(u_26);
      }
    else
      {
        t = t_26;
        {
          ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL;
          t = t_57;
          t = new_0_0(t);
          b_58 = t;
          t = new_0_0(t);
          c_58 = t;
          t = new_0_0(t);
          d_58 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_58), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_b_18, (ATerm) ATinsert(ATinsert(ATempty, t_57), (ATerm) ATmakeAppl(sym_Var_1, c_58))), (ATerm) ATmakeAppl(sym_Var_1, d_58)), (ATerm)ATmakeAppl(sym_VarDec_2, b_58, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_19), term_e_19)), c_58, (ATerm)ATmakeAppl(sym_Var_1, c_58), d_58, (ATerm) ATmakeAppl(sym_Var_1, d_58));
        }
      }
  }
  return(t);
}
ATerm t_8 (ATerm z_33, ATerm a_34, ATerm t)
{
  ATerm v_26 = t;
  int w_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(z_33, a_34);
      ;
      LocalPopChoice(w_26);
    }
  else
    {
      t = v_26;
      t = SSL_subtr(z_33, a_34);
    }
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm e_58 = NULL,f_58 = NULL;
  if(match_cons(t, sym__2))
    {
      e_58 = ATgetArgument(t, 0);
      f_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, e_58, f_58, (ATerm) ATempty);
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm g_58 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm x_26 = ATgetArgument(t, 0);
      if(((ATgetType(x_26) != AT_INT) || (ATgetInt((ATermInt) x_26) != 0)))
        _fail(t);
      {
        ATerm z_26 = ATgetArgument(t, 1);
      }
      g_58 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = g_58;
  return(t);
}
ATerm copy_1_0 (ATerm s_102 (ATerm), ATerm t)
{
  ATerm q_6 (ATerm t)
  {
    ATerm h_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL,p_58 = NULL,q_58 = NULL;
    if(match_cons(t, sym__3))
      {
        h_58 = ATgetArgument(t, 0);
        m_58 = ATgetArgument(t, 1);
        n_58 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, h_58, term_x_14);
    t = geq_0_0(t);
    t = term_x_14;
    q_58 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_58, term_x_14);
    t = t_8(h_58, q_58, t);
    o_58 = t;
    t = m_58;
    t = s_102(t);
    p_58 = t;
    t = (ATerm) ATmakeAppl(sym__3, o_58, m_58, (ATerm) ATinsert(CheckATermList(n_58), p_58));
    return(t);
  }
  t = for_3_0(m_6, o_6, q_6, t);
  return(t);
}
ATerm u_8 (ATerm r_46, ATerm s_46, ATerm t)
{
  ATerm r_58 = NULL,s_58 = NULL,t_58 = NULL;
  t = new_0_0(t);
  r_58 = t;
  t = new_0_0(t);
  s_58 = t;
  t = new_0_0(t);
  t_58 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_58), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_b_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, r_46)), (ATerm) ATmakeAppl(sym_Var_1, s_58))), (ATerm) ATmakeAppl(sym_Op_2, term_b_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, s_46)), (ATerm) ATmakeAppl(sym_Var_1, t_58)))), (ATerm)ATmakeAppl(sym_VarDec_2, r_58, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_19), term_e_19)), s_58, (ATerm)ATmakeAppl(sym_Var_1, s_58), t_58, (ATerm) ATmakeAppl(sym_Var_1, t_58));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm x_58 = NULL,y_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_58 = ATgetFirst((ATermList) t);
      y_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_58;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_58;
    }
  else
    {
      t = y_58;
      t = last_0_0(t);
    }
  return(t);
}
ATerm f_63 (ATerm q_59, ATerm t_59, ATerm u_59, ATerm a_60, ATerm t)
{
  ATerm g_60 = NULL,h_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL;
  t = term_x_14;
  e_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_59, term_x_14);
  t = y_9(t_59, e_61, t);
  d_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_61, term_i_14);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_60 = ATgetFirst((ATermList) t);
      k_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_60;
  t = last_0_0(t);
  g_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_60), h_60), k_60);
  t = genzip_4_0(r_6, s_6, t_6, v_6, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      l_60 = ATgetArgument(t, 0);
      m_60 = ATgetArgument(t, 1);
      n_60 = ATgetArgument(t, 2);
      r_60 = ATgetArgument(t, 3);
      s_60 = ATgetArgument(t, 4);
      t_60 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_60), n_60), k_60);
  t = concat_0_0(t);
  c_61 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, q_59, term_a_27), m_60, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(c_61), h_60), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_b_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, h_60)), (ATerm) ATmakeAppl(sym_Op_2, q_59, r_60))), (ATerm)ATmakeAppl(sym_Op_2, term_b_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_60)), (ATerm) ATmakeAppl(sym_Op_2, q_59, t_60))), (ATerm) ATmakeAppl(sym_Seqs_1, l_60)))));
  return(t);
}
ATerm k_63 (ATerm s_61, ATerm u_61, ATerm y_61, ATerm z_61, ATerm t)
{
  ATerm g_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,n_62 = NULL,o_62 = NULL,t_62 = NULL;
  t = z_61;
  t = new_0_0(t);
  g_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_61, (ATerm) ATmakeAppl(sym_Var_1, g_62));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      i_62 = ATgetArgument(t, 0);
      j_62 = ATgetArgument(t, 1);
      k_62 = ATgetArgument(t, 2);
      l_62 = ATgetArgument(t, 3);
      n_62 = ATgetArgument(t, 4);
      o_62 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_62, n_62);
  t = conc_0_0(t);
  t_62 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, s_61, term_b_27), j_62, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(t_62), g_62), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_b_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_62)), (ATerm) ATmakeAppl(sym_Op_2, s_61, l_62))), (ATerm)ATmakeAppl(sym_Op_2, s_61, o_62), (ATerm) ATmakeAppl(sym_Seqs_1, i_62)))));
  return(t);
}
ATerm r_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_27 = ATgetArgument(t, 0);
      ATerm d_27 = ATgetArgument(t, 1);
      if(((ATgetType(d_27) != AT_LIST) || !(ATisEmpty(d_27))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm f_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_27 = ATgetArgument(t, 0);
      if(((ATgetType(e_27) == AT_LIST) && !(ATisEmpty(e_27))))
        {
          f_61 = ATgetFirst((ATermList) e_27);
          g_61 = (ATerm) ATgetNext((ATermList) e_27);
        }
      else
        _fail(t);
      {
        ATerm f_27 = ATgetArgument(t, 1);
        if(((ATgetType(f_27) == AT_LIST) && !(ATisEmpty(f_27))))
          {
            h_61 = ATgetFirst((ATermList) f_27);
            i_61 = (ATerm) ATgetNext((ATermList) f_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_61, h_61), (ATerm) ATmakeAppl(sym__2, g_61, i_61));
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm j_61 = NULL,k_61 = NULL;
  if(match_cons(t, sym__2))
    {
      j_61 = ATgetArgument(t, 0);
      k_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_61), j_61);
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm l_61 = NULL,n_61 = NULL;
  if(match_cons(t, sym__2))
    {
      l_61 = ATgetArgument(t, 0);
      n_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_8(l_61, n_61, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm v_62 = NULL,w_62 = NULL,x_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL;
  v_62 = t;
  if(match_cons(t, sym__3))
    {
      w_62 = ATgetArgument(t, 0);
      x_62 = ATgetArgument(t, 1);
      a_63 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = x_62;
  if(match_string(t, "T"))
    {
      t = a_63;
      if(match_cons(t, sym__2))
        {
          b_63 = ATgetArgument(t, 0);
          c_63 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_63;
      if(match_int(t, 0))
        {
          ATerm g_27 = t;
          int h_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_63(w_62, b_63, c_63, v_62, t);
              ;
              LocalPopChoice(h_27);
            }
          else
            {
              t = g_27;
              {
                ATerm e_63 = NULL;
                t = v_62;
                t = new_0_0(t);
                e_63 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, w_62, term_a_27), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_63), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_b_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, e_63)), (ATerm) ATmakeAppl(sym_Op_2, w_62, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_b_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, e_63)), (ATerm) ATmakeAppl(sym_Op_2, w_62, (ATerm) ATempty))), term_i_19))));
              }
            }
        }
      else
        {
          t = f_63(w_62, b_63, c_63, v_62, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = a_63;
      if(match_cons(t, sym__2))
        {
          b_63 = ATgetArgument(t, 0);
          c_63 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_63(w_62, b_63, c_63, v_62, t);
    }
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_h_19;
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,m_12 = NULL;
  x_16 = t;
  t = SSL_explode_term(x_16);
  if(match_cons(t, sym__2))
    {
      ATerm i_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_27 = ATgetArgument(t, 1);
        if(((ATgetType(j_27) == AT_LIST) && !(ATisEmpty(j_27))))
          {
            y_16 = ATgetFirst((ATermList) j_27);
            {
              ATerm k_27 = (ATerm) ATgetNext((ATermList) j_27);
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
      ATerm l_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_27 = ATgetArgument(t, 1);
        if(((ATgetType(m_27) == AT_LIST) && !(ATisEmpty(m_27))))
          {
            ATerm n_27 = ATgetFirst((ATermList) m_27);
            ATerm o_27 = (ATerm) ATgetNext((ATermList) m_27);
            if(((ATgetType(o_27) == AT_LIST) && !(ATisEmpty(o_27))))
              {
                m_12 = ATgetFirst((ATermList) o_27);
                {
                  ATerm p_27 = (ATerm) ATgetNext((ATermList) o_27);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, y_16, m_12);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(w_6, y_6, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,t_17 = NULL,v_17 = NULL,y_17 = NULL;
  n_17 = t;
  if(match_cons(t, sym__2))
    {
      o_17 = ATgetArgument(t, 0);
      t_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_17;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_17 = ATgetFirst((ATermList) t);
      y_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_17;
  if(match_cons(t, sym__2))
    {
      l_17 = ATgetArgument(t, 0);
      m_17 = ATgetArgument(t, 1);
      {
        ATerm q_27 = t;
        int s_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_17;
            if((o_17 != t))
              {
                _fail(t);
              }
            t = m_17;
            ;
            LocalPopChoice(s_27);
          }
        else
          {
            t = q_27;
            t = (ATerm) ATmakeAppl(sym__2, o_17, y_17);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, o_17, y_17);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm d_93 (ATerm), ATerm t)
{
  ATerm l_19 (ATerm t)
  {
    ATerm t_27 = t;
    int u_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_93(t);
        ;
        LocalPopChoice(u_27);
      }
    else
      {
        t = t_27;
        t = SRTS_all(l_19, t);
      }
    return(t);
  }
  t = l_19(t);
  return(t);
}
ATerm a_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_27 = ATgetArgument(t, 0);
      if(((ATgetType(v_27) != AT_LIST) || !(ATisEmpty(v_27))))
        _fail(t);
      {
        ATerm w_27 = ATgetArgument(t, 1);
        if(((ATgetType(w_27) != AT_LIST) || !(ATisEmpty(w_27))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm a_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_27 = ATgetArgument(t, 0);
      if(((ATgetType(x_27) == AT_LIST) && !(ATisEmpty(x_27))))
        {
          a_20 = ATgetFirst((ATermList) x_27);
          h_20 = (ATerm) ATgetNext((ATermList) x_27);
        }
      else
        _fail(t);
      {
        ATerm y_27 = ATgetArgument(t, 1);
        if(((ATgetType(y_27) == AT_LIST) && !(ATisEmpty(y_27))))
          {
            i_20 = ATgetFirst((ATermList) y_27);
            j_20 = (ATerm) ATgetNext((ATermList) y_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_20, i_20), (ATerm) ATmakeAppl(sym__2, h_20, j_20));
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm k_20 = NULL,l_20 = NULL;
  if(match_cons(t, sym__2))
    {
      k_20 = ATgetArgument(t, 0);
      l_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_20), k_20);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL;
  s_19 = t;
  {
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_28 = ATgetArgument(t, 0);
            ATerm c_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(a_28);
        t = s_19;
      }
    else
      {
        t = z_27;
        {
          ATerm z_19 = NULL;
          if(match_cons(t, sym__3))
            {
              t_19 = ATgetArgument(t, 0);
              u_19 = ATgetArgument(t, 1);
              v_19 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, t_19, u_19);
          t = genzip_4_0(a_7, b_7, d_7, _id, t);
          z_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_19, v_19);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm u_90 (ATerm), ATerm v_90 (ATerm), ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL;
  ATerm f_7 (ATerm t)
  {
    ATerm p_12 = NULL;
    t = u_90(t);
    p_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_12, not_null(o_20));
    t = lookup_0_0(t);
    t = v_90(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((o_20 != NULL) && (o_20 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_20 = ATgetArgument(t, 0);
      n_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_20;
  t = alltd_1_0(f_7, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm v_21 = NULL,y_21 = NULL,z_21 = NULL,b_22 = NULL,c_22 = NULL,p_6 = NULL;
  c_22 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      y_21 = ATgetArgument(t, 0);
      z_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_22);
  v_21 = t;
  t = y_21;
  t = new_0_0(t);
  b_22 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, b_22, z_21);
  p_6 = t;
  t = SSLsetAnnotations(p_6, v_21);
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm h_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,u_6 = NULL;
  r_22 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      o_22 = ATgetArgument(t, 0);
      p_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_22);
  h_22 = t;
  t = o_22;
  t = new_0_0(t);
  q_22 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, q_22, p_22);
  u_6 = t;
  t = SSLsetAnnotations(u_6, h_22);
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm t_22 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      t_22 = ATgetArgument(t, 0);
      {
        ATerm d_28 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, t_22), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm u_22 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      u_22 = ATgetArgument(t, 0);
      {
        ATerm e_28 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, u_22);
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm c_23 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      c_23 = ATgetArgument(t, 0);
      {
        ATerm f_28 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = c_23;
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm d_23 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      d_23 = ATgetArgument(t, 0);
      {
        ATerm g_28 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = d_23;
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm g_23 = NULL,i_23 = NULL,l_23 = NULL,m_23 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      i_23 = ATgetArgument(t, 0);
      m_23 = ATgetArgument(t, 1);
      g_23 = ATgetArgument(t, 2);
      t = i_23;
      if(match_cons(t, sym_SVar_1))
        {
          l_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_23;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_23;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_23;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          i_23 = ATgetArgument(t, 0);
          m_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_23;
      if(match_cons(t, sym_SVar_1))
        {
          l_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_23;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_23;
    }
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm a_24 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_24;
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,s_21 = NULL;
  i_21 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_28 = ATgetFirst((ATermList) t);
      if(match_cons(h_28, sym_SDefT_4))
        {
          d_21 = ATgetArgument(h_28, 0);
          e_21 = ATgetArgument(h_28, 1);
          f_21 = ATgetArgument(h_28, 2);
          {
            ATerm j_28 = ATgetArgument(h_28, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm i_28 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = e_21;
  t = map_1_0(g_7, t);
  g_21 = t;
  t = f_21;
  t = map_1_0(i_7, t);
  h_21 = t;
  t = g_21;
  t = map_1_0(j_7, t);
  k_21 = t;
  t = h_21;
  t = map_1_0(l_7, t);
  j_21 = t;
  t = i_21;
  {
    ATerm n_7 (ATerm t)
    {
      ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm k_28 = ATgetArgument(t, 0);
          v_22 = ATgetArgument(t, 1);
          w_22 = ATgetArgument(t, 2);
          x_22 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = w_22;
      t = map_1_0(p_7, t);
      z_22 = t;
      t = v_22;
      t = map_1_0(r_7, t);
      b_23 = t;
      t = (ATerm) ATmakeAppl(sym__3, b_23, k_21, x_22);
      t = substitute_2_0(s_7, _id, t);
      a_23 = t;
      t = (ATerm) ATmakeAppl(sym__3, z_22, j_21, a_23);
      t = substitute_2_0(u_7, _id, t);
      return(t);
    }
    t = map_1_0(n_7, t);
    t = choices_0_0(t);
    s_21 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, d_21, g_21, h_21, s_21);
  }
  return(t);
}
ATerm q_66 (ATerm b_64, ATerm c_64, ATerm d_64, ATerm e_64, ATerm t)
{
  ATerm s_64 = NULL,t_64 = NULL,w_64 = NULL,x_64 = NULL,x_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_64, c_64);
  t = Definitions_0_0(t);
  s_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_64, d_64);
  x_64 = t;
  if(match_cons(t, sym__2))
    {
      ATerm l_28 = ATgetArgument(t, 0);
      ATerm m_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_64);
  t_64 = t;
  t = s_64;
  {
    ATerm n_28 = t;
    int o_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_64 = NULL,a_65 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_64 = ATgetFirst((ATermList) t);
            a_65 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_65;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_64;
        ;
        LocalPopChoice(o_28);
      }
    else
      {
        t = n_28;
        t = JoinDefs2_0_0(t);
      }
    w_64 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_64, d_64);
    x_6 = t;
    t = SSLsetAnnotations(x_6, t_64);
  }
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm e_65 = NULL,f_65 = NULL,g_65 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL,k_66 = NULL;
  g_65 = t;
  if(match_cons(t, sym__2))
    {
      g_66 = ATgetArgument(t, 0);
      k_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_66;
  if(match_cons(t, sym__2))
    {
      h_66 = ATgetArgument(t, 0);
      i_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_66;
  if(match_cons(t, sym_Mod_2))
    {
      e_65 = ATgetArgument(t, 0);
      f_65 = ATgetArgument(t, 1);
      {
        ATerm q_28 = t;
        int r_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_66 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, e_65, f_65, i_66);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            p_66 = t;
            t = (ATerm) ATmakeAppl(sym__2, p_66, k_66);
            ;
            LocalPopChoice(r_28);
          }
        else
          {
            t = q_28;
            t = q_66(h_66, i_66, k_66, g_65, t);
          }
      }
    }
  else
    {
      t = q_66(h_66, i_66, k_66, g_65, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm c_98 (ATerm), ATerm t)
{
  ATerm b_71 (ATerm t)
  {
    ATerm s_70 = NULL,v_70 = NULL,x_70 = NULL;
    x_70 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_70 = ATgetFirst((ATermList) t);
        v_70 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_29 = NULL,c_30 = NULL,z_6 = NULL;
          t = SSLgetAnnotations(x_70);
          r_29 = t;
          t = v_70;
          t = b_71(t);
          c_30 = t;
          t = (ATerm) ATinsert(CheckATermList(c_30), s_70);
          z_6 = t;
          t = SSLsetAnnotations(z_6, r_29);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_70;
        t = c_98(t);
      }
    return(t);
  }
  t = b_71(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_66 = NULL,t_66 = NULL,u_66 = NULL;
  s_66 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_66;
    }
  else
    {
      ATerm v_7 (ATerm t)
      {
        t = not_null(u_66);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_66 = ATgetFirst((ATermList) t);
          if(((u_66 != NULL) && (u_66 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            u_66 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_66;
      t = at_end_1_0(v_7, t);
    }
  return(t);
}
ATerm w_71 (ATerm h_71, ATerm t)
{
  ATerm i_71 = NULL;
  t = SSL_explode_term(h_71);
  if(match_cons(t, sym__2))
    {
      ATerm t_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      i_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_71;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm l_71 = NULL,m_71 = NULL,n_71 = NULL;
  n_71 = t;
  if(match_cons(t, sym__2))
    {
      l_71 = ATgetArgument(t, 0);
      m_71 = ATgetArgument(t, 1);
      {
        ATerm u_28 = t;
        int v_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_8 (ATerm t)
            {
              t = m_71;
              return(t);
            }
            t = l_71;
            t = at_end_1_0(b_8, t);
            ;
            LocalPopChoice(v_28);
          }
        else
          {
            t = u_28;
            t = w_71(n_71, t);
          }
      }
    }
  else
    {
      t = w_71(n_71, t);
    }
  return(t);
}
ATerm a_9 (ATerm j_99 (ATerm), ATerm v_29, ATerm u_29, ATerm t)
{
  ATerm r_72 (ATerm t)
  {
    ATerm l_72 = NULL,m_72 = NULL,n_72 = NULL;
    l_72 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_72;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_72 = ATgetFirst((ATermList) t);
            n_72 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm w_28 = t;
          int x_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_72;
              {
                ATerm c_8 (ATerm t)
                {
                  t = u_29;
                  return(t);
                }
                t = l_9(j_99, c_8, m_72, n_72, t);
                t = r_72(t);
              }
              ;
              LocalPopChoice(x_28);
            }
          else
            {
              t = w_28;
              {
                ATerm s_30 = NULL,v_30 = NULL,c_7 = NULL;
                t = SSLgetAnnotations(l_72);
                s_30 = t;
                t = n_72;
                t = r_72(t);
                v_30 = t;
                t = (ATerm) ATinsert(CheckATermList(v_30), m_72);
                c_7 = t;
                t = SSLsetAnnotations(c_7, s_30);
              }
            }
        }
      }
    return(t);
  }
  t = v_29;
  t = r_72(t);
  return(t);
}
ATerm genzip_4_0 (ATerm x_95 (ATerm), ATerm y_95 (ATerm), ATerm z_95 (ATerm), ATerm a_96 (ATerm), ATerm t)
{
  ATerm z_72 (ATerm t)
  {
    ATerm y_28 = t;
    int z_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_95(t);
        ;
        LocalPopChoice(z_28);
      }
    else
      {
        t = y_28;
        {
          ATerm t_72 = NULL,u_72 = NULL,v_72 = NULL,w_72 = NULL,x_72 = NULL,y_72 = NULL,e_7 = NULL;
          t = y_95(t);
          y_72 = t;
          if(match_cons(t, sym__2))
            {
              u_72 = ATgetArgument(t, 0);
              v_72 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_72);
          t_72 = t;
          t = u_72;
          t = a_96(t);
          w_72 = t;
          t = v_72;
          t = z_72(t);
          x_72 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_72, x_72);
          e_7 = t;
          t = SSLsetAnnotations(e_7, t_72);
          t = z_95(t);
        }
      }
    return(t);
  }
  t = z_72(t);
  return(t);
}
ATerm e_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_29 = ATgetArgument(t, 0);
      if(((ATgetType(b_29) != AT_LIST) || !(ATisEmpty(b_29))))
        _fail(t);
      {
        ATerm c_29 = ATgetArgument(t, 1);
        if(((ATgetType(c_29) != AT_LIST) || !(ATisEmpty(c_29))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm n_73 = NULL,q_73 = NULL,t_73 = NULL,w_73 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_29 = ATgetArgument(t, 0);
      if(((ATgetType(d_29) == AT_LIST) && !(ATisEmpty(d_29))))
        {
          n_73 = ATgetFirst((ATermList) d_29);
          q_73 = (ATerm) ATgetNext((ATermList) d_29);
        }
      else
        _fail(t);
      {
        ATerm e_29 = ATgetArgument(t, 1);
        if(((ATgetType(e_29) == AT_LIST) && !(ATisEmpty(e_29))))
          {
            t_73 = ATgetFirst((ATermList) e_29);
            w_73 = (ATerm) ATgetNext((ATermList) e_29);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_73, t_73), (ATerm) ATmakeAppl(sym__2, q_73, w_73));
  return(t);
}
ATerm h_8 (ATerm t)
{
  ATerm x_73 = NULL,y_73 = NULL;
  if(match_cons(t, sym__2))
    {
      x_73 = ATgetArgument(t, 0);
      y_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_73), x_73);
  return(t);
}
ATerm f_9 (ATerm u_654, ATerm z_654, ATerm s_62, ATerm t)
{
  ATerm d_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL;
  t = SSL_explode_term(z_654);
  if(match_cons(t, sym__2))
    {
      d_73 = ATgetArgument(t, 0);
      h_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(u_654);
  if(match_cons(t, sym__2))
    {
      if((d_73 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      g_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_73, h_73);
  t = genzip_4_0(e_8, f_8, h_8, _id, t);
  i_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_73, s_62);
  t = conc_0_0(t);
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm o_74 = NULL;
  o_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, o_74);
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm p_74 = NULL,q_74 = NULL,r_74 = NULL,s_74 = NULL,h_7 = NULL;
  s_74 = t;
  if(match_cons(t, sym__2))
    {
      q_74 = ATgetArgument(t, 0);
      r_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_74);
  p_74 = t;
  t = r_74;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_74, r_74);
  h_7 = t;
  t = SSLsetAnnotations(h_7, p_74);
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm t_75 = NULL,w_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL;
  t_75 = t;
  if(match_cons(t, sym__2))
    {
      w_75 = ATgetArgument(t, 0);
      y_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_75;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_75 = ATgetFirst((ATermList) t);
      a_76 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_29 = t;
        int g_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_76(w_75, y_75, t_75, t);
            ;
            LocalPopChoice(g_29);
          }
        else
          {
            t = f_29;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_75), z_75), a_76);
          }
      }
    }
  else
    {
      t = k_76(w_75, y_75, t_75, t);
    }
  return(t);
}
ATerm k_76 (ATerm t_74, ATerm u_74, ATerm v_74, ATerm t)
{
  ATerm w_74 = NULL,z_74 = NULL,k_7 = NULL,c_75 = NULL,d_75 = NULL,g_75 = NULL,h_75 = NULL;
  t = SSLgetAnnotations(v_74);
  w_74 = t;
  t = u_74;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_75 = ATgetFirst((ATermList) t);
      h_75 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_75;
  if(match_cons(t, sym__2))
    {
      d_75 = ATgetArgument(t, 0);
      g_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_29 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_75;
        if((d_75 != t))
          {
            _fail(t);
          }
        t = h_75;
        ;
        LocalPopChoice(k_29);
      }
    else
      {
        t = h_29;
        t = u_74;
        t = f_9(d_75, g_75, h_75, t);
      }
    z_74 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_74, z_74);
    k_7 = t;
    t = SSLsetAnnotations(k_7, w_74);
  }
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm j_76 = NULL;
  if(match_cons(t, sym__2))
    {
      j_76 = ATgetArgument(t, 0);
      if((j_76 != ATgetArgument(t, 1)))
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
  ATerm l_29 = t;
  int m_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(i_8, j_8, k_8, t);
      ;
      LocalPopChoice(m_29);
    }
  else
    {
      t = l_29;
      {
        ATerm e_76 = NULL,f_76 = NULL,g_76 = NULL;
        e_76 = t;
        if(match_cons(t, sym__2))
          {
            f_76 = ATgetArgument(t, 0);
            g_76 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_76;
        t = a_9(l_8, f_76, g_76, t);
      }
    }
  return(t);
}
ATerm h_9 (ATerm u_120 (ATerm), ATerm v_120 (ATerm), ATerm w_120 (ATerm), ATerm p_63, ATerm m_63, ATerm u_63, ATerm q_63, ATerm n_63, ATerm o_63, ATerm t)
{
  ATerm l_76 = NULL,m_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL,r_76 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_63, q_63);
  t = u_120(t);
  if(match_cons(t, sym__2))
    {
      m_76 = ATgetArgument(t, 0);
      l_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_76;
  t = v_120(t);
  n_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_76, u_63);
  t = diff_0_0(t);
  o_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_76, m_63);
  t = conc_0_0(t);
  p_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_76, u_63);
  t = conc_0_0(t);
  q_76 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_63, m_76, n_63);
  t = w_120(t);
  r_76 = t;
  t = (ATerm) ATmakeAppl(sym__5, p_76, q_76, l_76, r_76, o_63);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm u_120 (ATerm), ATerm v_120 (ATerm), ATerm w_120 (ATerm), ATerm t)
{
  ATerm t_76 = NULL,u_76 = NULL,v_76 = NULL,w_76 = NULL,x_76 = NULL,y_76 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm n_29 = ATgetArgument(t, 0);
      if(((ATgetType(n_29) == AT_LIST) && !(ATisEmpty(n_29))))
        {
          t_76 = ATgetFirst((ATermList) n_29);
          u_76 = (ATerm) ATgetNext((ATermList) n_29);
        }
      else
        _fail(t);
      v_76 = ATgetArgument(t, 1);
      w_76 = ATgetArgument(t, 2);
      x_76 = ATgetArgument(t, 3);
      y_76 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = h_9(u_120, v_120, w_120, t_76, u_76, v_76, w_76, x_76, y_76, t);
  return(t);
}
ATerm while_not_2_0 (ATerm s_108 (ATerm), ATerm t_108 (ATerm), ATerm t)
{
  ATerm z_76 (ATerm t)
  {
    ATerm o_29 = t;
    int p_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_108(t);
        ;
        LocalPopChoice(p_29);
      }
    else
      {
        t = o_29;
        t = t_108(t);
        t = z_76(t);
      }
    return(t);
  }
  t = z_76(t);
  return(t);
}
ATerm for_3_0 (ATerm v_108 (ATerm), ATerm w_108 (ATerm), ATerm x_108 (ATerm), ATerm t)
{
  t = v_108(t);
  t = while_not_2_0(w_108, x_108, t);
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm l_77 = NULL,m_77 = NULL,n_77 = NULL;
  if(match_cons(t, sym__3))
    {
      l_77 = ATgetArgument(t, 0);
      m_77 = ATgetArgument(t, 1);
      n_77 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, l_77, l_77, m_77, n_77, (ATerm) ATempty);
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm q_77 = NULL,r_77 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm q_29 = ATgetArgument(t, 0);
      if(((ATgetType(q_29) != AT_LIST) || !(ATisEmpty(q_29))))
        _fail(t);
      {
        ATerm s_29 = ATgetArgument(t, 1);
      }
      {
        ATerm t_29 = ATgetArgument(t, 2);
      }
      q_77 = ATgetArgument(t, 3);
      r_77 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_77, r_77);
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm y_29 = t;
  int z_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, v_8, w_8, t);
      ;
      LocalPopChoice(z_29);
    }
  else
    {
      t = y_29;
      {
        ATerm x_77 = NULL,y_77 = NULL,z_77 = NULL,a_78 = NULL,b_78 = NULL,c_78 = NULL,d_78 = NULL;
        if(match_cons(t, sym__5))
          {
            x_77 = ATgetArgument(t, 0);
            a_78 = ATgetArgument(t, 1);
            b_78 = ATgetArgument(t, 2);
            c_78 = ATgetArgument(t, 3);
            d_78 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = x_77;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_77 = ATgetFirst((ATermList) t);
            z_77 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, z_77, a_78, b_78, c_78, (ATerm) ATinsert(CheckATermList(d_78), y_77));
      }
    }
  return(t);
}
ATerm v_8 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(c_9, t);
  return(t);
}
ATerm w_8 (ATerm t)
{
  ATerm u_77 = NULL,v_77 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm d_30 = ATgetArgument(t, 0);
      u_77 = ATgetArgument(t, 1);
      v_77 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_77), u_77);
  return(t);
}
ATerm c_9 (ATerm t)
{
  ATerm e_30 = t;
  int f_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      ;
      LocalPopChoice(f_30);
    }
  else
    {
      t = e_30;
    }
  return(t);
}
ATerm e_9 (ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL;
  b_32 = t;
  if(match_cons(t, sym__2))
    {
      c_32 = ATgetArgument(t, 0);
      d_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_32;
  if(match_cons(t, sym_Mod_2))
    {
      z_31 = ATgetArgument(t, 0);
      a_32 = ATgetArgument(t, 1);
      {
        ATerm g_30 = t;
        int h_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_32;
            t = z_7(z_31, a_32, d_32, t);
            ;
            LocalPopChoice(h_30);
          }
        else
          {
            t = g_30;
            t = p_32(c_32, d_32, t);
          }
      }
    }
  else
    {
      t = p_32(c_32, d_32, t);
    }
  return(t);
}
ATerm p_32 (ATerm o_31, ATerm t_31, ATerm t)
{
  ATerm w_31 = NULL,y_31 = NULL;
  t = term_r_14;
  w_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_15), t_31), term_t_15), o_31), term_r_15);
  y_31 = t;
  t = SSL_printnl(w_31, y_31);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_15), t_31), term_t_15), o_31), term_r_15);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm g_79 = NULL,h_79 = NULL,i_79 = NULL,j_79 = NULL,k_79 = NULL;
  t = for_3_0(m_8, q_8, r_8, t);
  g_79 = t;
  if(match_cons(t, sym__2))
    {
      h_79 = ATgetArgument(t, 0);
      i_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_79;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_79;
    }
  else
    {
      ATerm i_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_79 = ATgetFirst((ATermList) t);
          k_79 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(k_79), j_79);
      t = map_1_0(e_9, t);
      t = term_x_14;
      i_31 = t;
      t = SSL_exit(i_31);
    }
  return(t);
}
ATerm k_9 (ATerm o_103 (ATerm), ATerm r_35, ATerm p_35, ATerm t)
{
  ATerm o_79 = NULL,p_79 = NULL,q_79 = NULL,r_79 = NULL,s_79 = NULL,t_79 = NULL;
  r_79 = t;
  t = o_103(t);
  o_79 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_79, r_35, p_35);
  t = b_10(o_79, r_35, p_35, t);
  {
    ATerm i_30 = t;
    int j_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_79 = NULL;
        t = term_k_30;
        u_79 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_79, term_k_30);
        t = a_10(o_79, u_79, t);
        ;
        LocalPopChoice(j_30);
      }
    else
      {
        t = i_30;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_79 = ATgetFirst((ATermList) t);
        q_79 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_k_30;
    s_79 = t;
    t = (ATerm) ATinsert(CheckATermList(q_79), (ATerm) ATinsert(CheckATermList(p_79), r_35));
    t_79 = t;
    t = SSL_table_put(o_79, s_79, t_79);
    t = r_79;
  }
  return(t);
}
ATerm l_9 (ATerm r_99 (ATerm), ATerm s_99 (ATerm), ATerm b_30, ATerm a_30, ATerm t)
{
  t = s_99(t);
  {
    ATerm g_9 (ATerm t)
    {
      ATerm v_79 = NULL;
      v_79 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_30, v_79);
      t = r_99(t);
      return(t);
    }
    t = fetch_1_0(g_9, t);
    t = a_30;
  }
  return(t);
}
ATerm m_9 (ATerm o_99 (ATerm), ATerm x_29, ATerm w_29, ATerm t)
{
  ATerm l_80 (ATerm t)
  {
    ATerm g_80 = NULL,h_80 = NULL,i_80 = NULL;
    g_80 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_29;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_80 = ATgetFirst((ATermList) t);
            i_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm l_30 = t;
          int m_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_80;
              {
                ATerm i_9 (ATerm t)
                {
                  t = w_29;
                  return(t);
                }
                t = l_9(o_99, i_9, h_80, i_80, t);
                t = l_80(t);
              }
              ;
              LocalPopChoice(m_30);
            }
          else
            {
              t = l_30;
              {
                ATerm k_33 = NULL,o_33 = NULL,o_7 = NULL;
                t = SSLgetAnnotations(g_80);
                k_33 = t;
                t = i_80;
                t = l_80(t);
                o_33 = t;
                t = (ATerm) ATinsert(CheckATermList(o_33), h_80);
                o_7 = t;
                t = SSLsetAnnotations(o_7, k_33);
              }
            }
        }
      }
    return(t);
  }
  t = x_29;
  t = l_80(t);
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm v_80 = NULL;
  v_80 = t;
  {
    ATerm n_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_34 = NULL,b_35 = NULL;
        t = term_p_30;
        b_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_30, v_80);
        t = o_9(b_35, v_80, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm q_30 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_30) != ATmakeSymbol("q_0", 0, ATtrue)))
              _fail(t);
            q_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_34;
        ;
        LocalPopChoice(o_30);
      }
    else
      {
        t = n_30;
        {
          ATerm h_35 = NULL,o_35 = NULL;
          t = term_p_30;
          o_35 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_p_30, v_80);
          t = o_9(o_35, v_80, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm r_30 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) r_30) != ATmakeSymbol("m_0", 0, ATtrue)))
                _fail(t);
              h_35 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_35;
        }
      }
  }
  return(t);
}
ATerm o_9 (ATerm k_36, ATerm l_36, ATerm t)
{
  ATerm y_80 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_36, l_36);
  t = a_10(k_36, l_36, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_80 = ATgetFirst((ATermList) t);
      {
        ATerm t_30 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = y_80;
  return(t);
}
ATerm s_81 (ATerm i_81, ATerm t)
{
  ATerm k_81 = NULL,l_81 = NULL,x_35 = NULL;
  t = term_u_30;
  x_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_30, i_81);
  t = o_9(x_35, i_81, t);
  if(match_cons(t, sym_Defined_3))
    {
      ATerm w_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_30) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
      k_81 = ATgetArgument(t, 1);
      l_81 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_81), k_81);
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm o_81 = NULL,q_81 = NULL;
  o_81 = t;
  if(match_cons(t, sym__2))
    {
      ATerm x_30 = ATgetArgument(t, 0);
      q_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_81;
  {
    ATerm y_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_31 = ATgetArgument(t, 0);
            ATerm b_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(z_30);
        {
          ATerm c_31 = t;
          int d_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_36 = NULL,j_36 = NULL;
              t = term_u_30;
              j_36 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_u_30, o_81);
              t = o_9(j_36, o_81, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm e_31 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) e_31) != ATmakeSymbol("o_0", 0, ATtrue)))
                    _fail(t);
                  g_36 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = g_36;
              ;
              LocalPopChoice(d_31);
            }
          else
            {
              t = c_31;
              t = s_81(o_81, t);
            }
        }
      }
    else
      {
        t = y_30;
        t = s_81(o_81, t);
      }
  }
  return(t);
}
ATerm foldr_3_0 (ATerm e_102 (ATerm), ATerm f_102 (ATerm), ATerm g_102 (ATerm), ATerm t)
{
  ATerm u_81 = NULL,v_81 = NULL,w_81 = NULL;
  u_81 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_81;
      t = e_102(t);
    }
  else
    {
      ATerm z_81 = NULL,a_82 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_81 = ATgetFirst((ATermList) t);
          w_81 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_81;
      t = g_102(t);
      z_81 = t;
      t = w_81;
      t = foldr_3_0(e_102, f_102, g_102, t);
      a_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_81, a_82);
      t = f_102(t);
    }
  return(t);
}
ATerm j_9 (ATerm t)
{
  t = term_g_17;
  return(t);
}
ATerm n_9 (ATerm t)
{
  ATerm p_82 = NULL,q_82 = NULL;
  if(match_cons(t, sym__2))
    {
      p_82 = ATgetArgument(t, 0);
      q_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9(p_82, q_82, t);
  return(t);
}
ATerm p_9 (ATerm t)
{
  t = term_x_14;
  return(t);
}
ATerm z_9 (ATerm t)
{
  t = term_g_17;
  return(t);
}
ATerm c_10 (ATerm t)
{
  ATerm r_82 = NULL,s_82 = NULL;
  if(match_cons(t, sym__2))
    {
      r_82 = ATgetArgument(t, 0);
      s_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9(r_82, s_82, t);
  return(t);
}
ATerm e_10 (ATerm t)
{
  t = term_x_14;
  return(t);
}
ATerm f_10 (ATerm t)
{
  ATerm t_82 = NULL;
  if(match_cons(t, sym__2))
    {
      t_82 = ATgetArgument(t, 0);
      if((t_82 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm g_10 (ATerm t)
{
  t = term_u_30;
  return(t);
}
ATerm h_10 (ATerm t)
{
  t = term_p_30;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm b_82 = NULL,c_82 = NULL,d_82 = NULL,e_82 = NULL,f_82 = NULL,g_82 = NULL,h_82 = NULL,i_82 = NULL,j_82 = NULL,k_82 = NULL,l_82 = NULL,m_82 = NULL,n_82 = NULL,o_82 = NULL;
  d_82 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      g_82 = ATgetArgument(t, 0);
      b_82 = ATgetArgument(t, 1);
      c_82 = ATgetArgument(t, 2);
      {
        ATerm f_31 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  i_82 = t;
  t = b_82;
  t = foldr_3_0(j_9, n_9, p_9, t);
  e_82 = t;
  t = c_82;
  t = foldr_3_0(z_9, c_10, e_10, t);
  f_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_82, (ATerm) ATmakeAppl(sym__2, e_82, f_82));
  {
    ATerm g_31 = t;
    int h_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        ;
        LocalPopChoice(h_31);
      }
    else
      {
        t = g_31;
        t = (ATerm) ATempty;
      }
    k_82 = t;
    t = g_82;
    {
      ATerm j_31 = t;
      int k_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Arities_0_0(t);
          ;
          LocalPopChoice(k_31);
        }
      else
        {
          t = j_31;
          t = (ATerm) ATempty;
        }
      j_82 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_82, f_82));
      o_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_82, f_82)), j_82);
      t = m_9(f_10, o_82, j_82, t);
      h_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_82, (ATerm) ATmakeAppl(sym__2, e_82, f_82));
      m_82 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_l_31, (ATerm) ATinsert(CheckATermList(k_82), d_82));
      n_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_82, (ATerm) ATmakeAppl(sym__2, e_82, f_82)), (ATerm) ATmakeAppl(sym_Defined_2, term_l_31, (ATerm) ATinsert(CheckATermList(k_82), d_82)));
      t = k_9(g_10, m_82, n_82, t);
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_m_31, h_82);
      l_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_82, (ATerm) ATmakeAppl(sym_Defined_2, term_m_31, h_82));
      t = k_9(h_10, g_82, l_82, t);
      t = i_82;
    }
  }
  return(t);
}
ATerm needed_defs_0_0 (ATerm t)
{
  ATerm u_82 = NULL;
  t = map_1_0(RegisterSDefT_0_0, t);
  u_82 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_u_31), u_82, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm u_75 (ATerm), ATerm v_75 (ATerm), ATerm t)
{
  ATerm v_82 = NULL,w_82 = NULL,x_82 = NULL,y_82 = NULL,z_82 = NULL,a_83 = NULL,q_7 = NULL;
  a_83 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_82 = ATgetFirst((ATermList) t);
      x_82 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_83);
  v_82 = t;
  t = w_82;
  t = u_75(t);
  y_82 = t;
  t = x_82;
  t = v_75(t);
  z_82 = t;
  t = (ATerm) ATinsert(CheckATermList(z_82), y_82);
  q_7 = t;
  t = SSLsetAnnotations(q_7, v_82);
  return(t);
}
ATerm r_9 (ATerm a_52, ATerm b_52, ATerm t)
{
  ATerm b_83 = NULL;
  t = SSL_fputc(a_52, b_52);
  b_83 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_83);
  return(t);
}
ATerm s_9 (ATerm o_55, ATerm p_55, ATerm t)
{
  ATerm c_83 = NULL;
  t = SSL_write_term_to_stream_text(o_55, p_55);
  c_83 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_83);
  return(t);
}
ATerm u_9 (ATerm l_113 (ATerm), ATerm w_527, ATerm s_55, ATerm t)
{
  ATerm d_83 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_527, term_v_31);
  t = x_9(t);
  d_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_83, s_55);
  t = l_113(t);
  t = fclose_0_0(t);
  t = s_55;
  return(t);
}
ATerm t_9 (ATerm k_55, ATerm l_55, ATerm t)
{
  ATerm e_83 = NULL;
  t = SSL_write_term_to_stream_baf(k_55, l_55);
  e_83 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_83);
  return(t);
}
ATerm m_10 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm p_10 (ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_32 = ATgetArgument(t, 0);
      if(match_cons(e_32, sym_Stream_1))
        {
          w_36 = ATgetArgument(e_32, 0);
        }
      else
        _fail(t);
      x_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_9(w_36, x_36, t);
  return(t);
}
ATerm s_10 (ATerm t)
{
  ATerm p_37 = NULL,s_37 = NULL,t_37 = NULL,v_37 = NULL,x_37 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_32 = ATgetArgument(t, 0);
      if(match_cons(f_32, sym_Stream_1))
        {
          v_37 = ATgetArgument(f_32, 0);
        }
      else
        _fail(t);
      x_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_9(v_37, x_37, t);
  p_37 = t;
  t = term_g_32;
  s_37 = t;
  t = p_37;
  if(match_cons(t, sym_Stream_1))
    {
      t_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_g_32, p_37);
  t = r_9(s_37, t_37, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm i_83 = NULL,j_83 = NULL,k_83 = NULL,l_83 = NULL,m_83 = NULL,o_83 = NULL,p_83 = NULL,q_83 = NULL,r_83 = NULL,s_83 = NULL,s_84 = NULL,t_84 = NULL,d_8 = NULL,t_7 = NULL;
  j_83 = t;
  if(match_cons(t, sym__2))
    {
      q_83 = ATgetArgument(t, 0);
      r_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_83);
  p_83 = t;
  t = q_83;
  {
    ATerm h_32 = t;
    int i_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_10 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((i_83 != NULL) && (i_83 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                i_83 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(k_10, t);
        ;
        LocalPopChoice(i_32);
      }
    else
      {
        t = h_32;
        t = term_j_32;
        i_83 = t;
      }
    s_83 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_83, r_83);
    t_7 = t;
    t = SSLsetAnnotations(t_7, p_83);
    t = j_83;
    if(match_cons(t, sym__2))
      {
        l_83 = ATgetArgument(t, 0);
        m_83 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(j_83);
    k_83 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_83, (ATerm) ATmakeAppl(sym__2, not_null(i_83), m_83));
    d_8 = t;
    t = SSLsetAnnotations(d_8, k_83);
    o_83 = t;
    if(match_cons(t, sym__2))
      {
        s_84 = ATgetArgument(t, 0);
        t_84 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm k_32 = t;
      int m_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,n_8 = NULL;
          t = SSLgetAnnotations(o_83);
          p_36 = t;
          t = s_84;
          t = fetch_1_0(m_10, t);
          s_36 = t;
          t = t_84;
          if(match_cons(t, sym__2))
            {
              u_36 = ATgetArgument(t, 0);
              v_36 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_9(p_10, u_36, v_36, t);
          t_36 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_36, t_36);
          n_8 = t;
          t = SSLsetAnnotations(n_8, p_36);
          ;
          LocalPopChoice(m_32);
        }
      else
        {
          t = k_32;
          {
            ATerm d_37 = NULL,g_37 = NULL,i_37 = NULL,o_37 = NULL,d_9 = NULL;
            t = SSLgetAnnotations(o_83);
            d_37 = t;
            t = t_84;
            if(match_cons(t, sym__2))
              {
                i_37 = ATgetArgument(t, 0);
                o_37 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = u_9(s_10, i_37, o_37, t);
            g_37 = t;
            t = (ATerm) ATmakeAppl(sym__2, s_84, g_37);
            d_9 = t;
            t = SSLsetAnnotations(d_9, d_37);
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
ATerm apply_strategy_1_0 (ATerm n_116 (ATerm), ATerm t)
{
  ATerm w_84 = NULL,x_84 = NULL,y_84 = NULL,z_84 = NULL,a_85 = NULL;
  a_85 = t;
  t = dtime_0_0(t);
  t = a_85;
  t = n_116(t);
  z_84 = t;
  t = dtime_0_0(t);
  w_84 = t;
  t = z_84;
  if(match_cons(t, sym__2))
    {
      x_84 = ATgetArgument(t, 0);
      y_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_84), (ATerm) ATmakeAppl(sym_Runtime_1, w_84)), y_84);
  return(t);
}
ATerm o_85 (ATerm i_85, ATerm t)
{
  t = SSL_fclose(i_85);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_85 = NULL,m_85 = NULL;
  m_85 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_85 = ATgetArgument(t, 0);
      {
        ATerm n_32 = t;
        int q_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_85);
            ;
            LocalPopChoice(q_32);
          }
        else
          {
            t = n_32;
            t = o_85(m_85, t);
          }
      }
    }
  else
    {
      t = o_85(m_85, t);
    }
  return(t);
}
ATerm v_9 (ATerm q_55, ATerm t)
{
  t = SSL_read_term_from_stream(q_55);
  return(t);
}
ATerm w_9 (ATerm c_52, ATerm d_52, ATerm t)
{
  ATerm p_85 = NULL;
  t = SSL_fopen(c_52, d_52);
  p_85 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_85);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_85 = NULL;
  t = SSL_stdin_stream();
  q_85 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_85);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_85 = NULL;
  t = SSL_stdout_stream();
  r_85 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_85);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_85 = NULL;
  t = SSL_stderr_stream();
  s_85 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_85);
  return(t);
}
ATerm z_86 (ATerm y_85, ATerm t)
{
  ATerm z_85 = NULL;
  t = SSL_explode_term(y_85);
  if(match_cons(t, sym__2))
    {
      ATerm t_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_32 = ATgetArgument(t, 1);
        if(((ATgetType(v_32) == AT_LIST) && !(ATisEmpty(v_32))))
          {
            z_85 = ATgetFirst((ATermList) v_32);
            {
              ATerm w_32 = (ATerm) ATgetNext((ATermList) v_32);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_85;
  if(match_cons(t, sym_stderr_0))
    {
      t = z_85;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = z_85;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_85;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm a_87 (ATerm c_86, ATerm d_86, ATerm e_86, ATerm t)
{
  ATerm f_86 = NULL,g_86 = NULL,h_86 = NULL,k_86 = NULL,i_10 = NULL;
  t = SSLgetAnnotations(e_86);
  h_86 = t;
  t = c_86;
  if(match_cons(t, sym_Path_1))
    {
      k_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_86, d_86);
  i_10 = t;
  t = SSLsetAnnotations(i_10, h_86);
  if(match_cons(t, sym__2))
    {
      f_86 = ATgetArgument(t, 0);
      g_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9(f_86, g_86, t);
  return(t);
}
ATerm b_87 (ATerm m_86, ATerm n_86, ATerm o_86, ATerm t)
{
  ATerm p_86 = NULL,q_86 = NULL,r_86 = NULL,u_86 = NULL,l_10 = NULL;
  t = SSLgetAnnotations(o_86);
  r_86 = t;
  t = SSL_is_string(m_86);
  u_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_86, n_86);
  l_10 = t;
  t = SSLsetAnnotations(l_10, r_86);
  if(match_cons(t, sym__2))
    {
      p_86 = ATgetArgument(t, 0);
      q_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9(p_86, q_86, t);
  return(t);
}
ATerm x_9 (ATerm t)
{
  ATerm w_86 = NULL,x_86 = NULL,y_86 = NULL;
  w_86 = t;
  if(match_cons(t, sym__2))
    {
      x_86 = ATgetArgument(t, 0);
      y_86 = ATgetArgument(t, 1);
      {
        ATerm x_32 = t;
        int y_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_86(w_86, t);
            ;
            LocalPopChoice(y_32);
          }
        else
          {
            t = x_32;
            {
              ATerm b_33 = t;
              int g_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_87(x_86, y_86, w_86, t);
                  ;
                  LocalPopChoice(g_33);
                }
              else
                {
                  t = b_33;
                  t = b_87(x_86, y_86, w_86, t);
                }
            }
          }
      }
    }
  else
    {
      t = z_86(w_86, t);
    }
  return(t);
}
ATerm u_10 (ATerm t)
{
  t = term_h_33;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_87 = NULL,d_87 = NULL,e_87 = NULL;
  ATerm j_33 = t;
  int l_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_87 = NULL;
      f_87 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_87, term_n_33);
      t = x_9(t);
      ;
      LocalPopChoice(l_33);
    }
  else
    {
      t = j_33;
      t = debug_1_0(u_10, t);
      _fail(t);
    }
  d_87 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_9(e_87, t);
  c_87 = t;
  t = d_87;
  t = fclose_0_0(t);
  t = c_87;
  return(t);
}
ATerm fetch_1_0 (ATerm w_97 (ATerm), ATerm t)
{
  ATerm d_88 (ATerm t)
  {
    ATerm a_88 = NULL,b_88 = NULL,c_88 = NULL;
    a_88 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_88 = ATgetFirst((ATermList) t);
        c_88 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_33 = t;
      int q_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_39 = NULL,e_39 = NULL,d_11 = NULL;
          t = SSLgetAnnotations(a_88);
          b_39 = t;
          t = b_88;
          t = w_97(t);
          e_39 = t;
          t = (ATerm) ATinsert(CheckATermList(c_88), e_39);
          d_11 = t;
          t = SSLsetAnnotations(d_11, b_39);
          ;
          LocalPopChoice(q_33);
        }
      else
        {
          t = p_33;
          {
            ATerm d_40 = NULL,n_40 = NULL,e_11 = NULL;
            t = SSLgetAnnotations(a_88);
            d_40 = t;
            t = c_88;
            t = d_88(t);
            n_40 = t;
            t = (ATerm) ATinsert(CheckATermList(n_40), b_88);
            e_11 = t;
            t = SSLsetAnnotations(e_11, d_40);
          }
        }
    }
    return(t);
  }
  t = d_88(t);
  return(t);
}
ATerm q_9 (ATerm j_44, ATerm k_44, ATerm t)
{
  t = SSL_strcat(j_44, k_44);
  return(t);
}
ATerm debug_1_0 (ATerm j_113 (ATerm), ATerm t)
{
  ATerm g_88 = NULL,h_88 = NULL,i_88 = NULL,j_88 = NULL;
  g_88 = t;
  t = j_113(t);
  h_88 = t;
  t = term_r_14;
  i_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_88), h_88);
  j_88 = t;
  t = SSL_printnl(i_88, j_88);
  t = g_88;
  return(t);
}
ATerm w_10 (ATerm t)
{
  ATerm s_33 = t;
  int u_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(u_33);
    }
  else
    {
      t = s_33;
    }
  return(t);
}
ATerm x_10 (ATerm t)
{
  t = term_v_33;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm w_33 = t;
  int x_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_88 = NULL;
      q_88 = t;
      t = SSL_is_string(q_88);
      ;
      LocalPopChoice(x_33);
    }
  else
    {
      t = w_33;
      {
        ATerm y_33 = t;
        int b_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(w_10, t);
            ;
            LocalPopChoice(b_34);
          }
        else
          {
            t = y_33;
            {
              ATerm w_88 = NULL,x_88 = NULL,y_88 = NULL;
              w_88 = t;
              if(match_cons(t, sym_Path_1))
                {
                  x_88 = ATgetArgument(t, 0);
                  t = x_88;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      x_88 = ATgetArgument(t, 0);
                      t = x_88;
                      {
                        ATerm c_34 = t;
                        int d_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(d_34);
                          }
                        else
                          {
                            t = c_34;
                            t = debug_1_0(x_10, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm c_89 = NULL,d_89 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          x_88 = ATgetArgument(t, 0);
                          y_88 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = x_88;
                      t = eval_config_0_0(t);
                      c_89 = t;
                      t = y_88;
                      t = eval_config_0_0(t);
                      d_89 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_89, d_89);
                      t = q_9(c_89, d_89, t);
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
  ATerm h_89 = NULL,i_89 = NULL;
  h_89 = t;
  t = term_e_34;
  i_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_34, h_89);
  t = a_10(i_89, h_89, t);
  {
    ATerm f_34 = t;
    int g_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_89 = NULL,k_89 = NULL;
        t = eval_config_0_0(t);
        j_89 = t;
        t = term_e_34;
        k_89 = t;
        t = SSL_table_put(k_89, h_89, j_89);
        t = j_89;
        ;
        LocalPopChoice(g_34);
      }
    else
      {
        t = f_34;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm w_114 (ATerm), ATerm t)
{
  ATerm o_89 = NULL;
  o_89 = t;
  {
    ATerm h_34 = t;
    int i_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_89 = NULL;
        t = term_j_34;
        t = get_config_0_0(t);
        q_89 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_89, term_k_34);
        t = geq_0_0(t);
        t = o_89;
        t = w_114(t);
        ;
        LocalPopChoice(i_34);
      }
    else
      {
        t = h_34;
        t = o_89;
      }
  }
  return(t);
}
ATerm z_10 (ATerm t)
{
  ATerm t_89 = NULL;
  t_89 = t;
  if(match_string(t, "-k"))
    {
      t = t_89;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = t_89;
    }
  return(t);
}
ATerm b_11 (ATerm t)
{
  ATerm u_89 = NULL,v_89 = NULL,w_89 = NULL;
  u_89 = t;
  t = SSL_string_to_int(u_89);
  v_89 = t;
  t = term_l_34;
  w_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_34, v_89);
  t = d_10(w_89, v_89, t);
  t = u_89;
  return(t);
}
ATerm c_11 (ATerm t)
{
  t = term_m_34;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_10, b_11, c_11, t);
  return(t);
}
ATerm f_11 (ATerm t)
{
  ATerm y_89 = NULL;
  y_89 = t;
  if(match_string(t, "-S"))
    {
      t = y_89;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_89;
    }
  return(t);
}
ATerm g_11 (ATerm t)
{
  ATerm z_89 = NULL,a_90 = NULL;
  t = term_j_34;
  z_89 = t;
  t = term_g_17;
  a_90 = t;
  t = term_n_34;
  t = d_10(z_89, a_90, t);
  t = term_o_34;
  return(t);
}
ATerm k_11 (ATerm t)
{
  t = term_p_34;
  return(t);
}
ATerm l_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_11 (ATerm t)
{
  ATerm b_90 = NULL,c_90 = NULL,d_90 = NULL;
  b_90 = t;
  t = SSL_string_to_int(b_90);
  c_90 = t;
  t = term_j_34;
  d_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_34, c_90);
  t = d_10(d_90, c_90, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_90);
  return(t);
}
ATerm r_11 (ATerm t)
{
  t = term_r_34;
  return(t);
}
ATerm s_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_11 (ATerm t)
{
  ATerm e_90 = NULL,f_90 = NULL;
  t = term_s_34;
  e_90 = t;
  t = term_i_14;
  f_90 = t;
  t = term_t_34;
  t = d_10(e_90, f_90, t);
  t = term_u_34;
  return(t);
}
ATerm u_11 (ATerm t)
{
  t = term_v_34;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm w_34 = t;
  int x_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_11, g_11, k_11, t);
      ;
      LocalPopChoice(x_34);
    }
  else
    {
      t = w_34;
      {
        ATerm y_34 = t;
        int z_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(l_11, o_11, r_11, t);
            ;
            LocalPopChoice(z_34);
          }
        else
          {
            t = y_34;
            t = Option_3_0(s_11, t_11, u_11, t);
          }
      }
    }
  return(t);
}
ATerm d_10 (ATerm r_56, ATerm s_56, ATerm t)
{
  ATerm g_90 = NULL;
  t = term_e_34;
  g_90 = t;
  t = SSL_table_put(g_90, r_56, s_56);
  t = (ATerm) ATmakeAppl(sym__3, term_e_34, r_56, s_56);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm j_90 = NULL,k_90 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_90 = NULL,m_90 = NULL,n_90 = NULL;
      t = term_i_14;
      t = i_0(t);
      l_90 = t;
      t = term_a_35;
      m_90 = t;
      t = term_c_35;
      n_90 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_35, term_c_35, l_90);
      t = b_10(m_90, n_90, l_90, t);
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
      t = j_90;
      t = d_0(t);
      t = term_i_14;
      t = g_0(t);
      t_90 = t;
      t = (ATerm) ATinsert(CheckATermList(k_90), t_90);
    }
  return(t);
}
ATerm v_11 (ATerm t)
{
  ATerm x_90 = NULL;
  x_90 = t;
  if(match_string(t, "-o"))
    {
      t = x_90;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_90;
    }
  return(t);
}
ATerm x_11 (ATerm t)
{
  ATerm y_90 = NULL,z_90 = NULL;
  y_90 = t;
  t = term_d_35;
  z_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_35, y_90);
  t = d_10(z_90, y_90, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_90);
  return(t);
}
ATerm z_11 (ATerm t)
{
  t = term_e_35;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_11, x_11, z_11, t);
  return(t);
}
ATerm b_10 (ATerm z_35, ATerm a_36, ATerm y_35, ATerm t)
{
  ATerm b_91 = NULL,c_91 = NULL,d_91 = NULL;
  b_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_35, a_36);
  {
    ATerm f_35 = t;
    int g_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_35 = ATgetArgument(t, 0);
            ATerm j_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_35, a_36);
        t = a_10(z_35, a_36, t);
        ;
        LocalPopChoice(g_35);
      }
    else
      {
        t = f_35;
        t = (ATerm) ATempty;
      }
    c_91 = t;
    t = (ATerm) ATinsert(CheckATermList(c_91), y_35);
    d_91 = t;
    t = SSL_table_put(z_35, a_36, d_91);
    t = b_91;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm n_91 = NULL,o_91 = NULL,p_91 = NULL,q_91 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_91 = NULL,s_91 = NULL,t_91 = NULL;
      t = term_i_14;
      t = r_0(t);
      r_91 = t;
      t = term_a_35;
      s_91 = t;
      t = term_c_35;
      t_91 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_35, term_c_35, r_91);
      t = b_10(s_91, t_91, r_91, t);
      _fail(t);
    }
  else
    {
      ATerm x_91 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_91 = ATgetFirst((ATermList) t);
          o_91 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_91;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_91 = ATgetFirst((ATermList) t);
          q_91 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_91;
      t = n_0(t);
      t = p_91;
      t = p_0(t);
      x_91 = t;
      t = (ATerm) ATinsert(CheckATermList(q_91), x_91);
    }
  return(t);
}
ATerm b_12 (ATerm t)
{
  ATerm z_91 = NULL;
  z_91 = t;
  if(match_string(t, "-i"))
    {
      t = z_91;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_91;
    }
  return(t);
}
ATerm d_12 (ATerm t)
{
  ATerm a_92 = NULL,b_92 = NULL;
  a_92 = t;
  t = term_k_35;
  b_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_35, a_92);
  t = d_10(b_92, a_92, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_92);
  return(t);
}
ATerm f_12 (ATerm t)
{
  t = term_l_35;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_12, d_12, f_12, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm c_92 = NULL,d_92 = NULL,e_92 = NULL,f_92 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_14;
  t = whoami_0_0(t);
  c_92 = t;
  t = term_r_14;
  e_92 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_q_35), c_92);
  f_92 = t;
  t = SSL_printnl(e_92, f_92);
  t = term_x_14;
  d_92 = t;
  t = SSL_exit(d_92);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_s_35;
  t = get_config_0_0(t);
  return(t);
}
ATerm y_9 (ATerm r_33, ATerm t_33, ATerm t)
{
  ATerm t_35 = t;
  int u_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(r_33, t_33);
      ;
      LocalPopChoice(u_35);
    }
  else
    {
      t = t_35;
      t = SSL_addr(r_33, t_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_102 (ATerm), ATerm d_102 (ATerm), ATerm t)
{
  ATerm h_92 = NULL,i_92 = NULL,j_92 = NULL;
  h_92 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_92;
      t = c_102(t);
    }
  else
    {
      ATerm m_92 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_92 = ATgetFirst((ATermList) t);
          j_92 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_92;
      t = foldr_2_0(c_102, d_102, t);
      m_92 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_92, m_92);
      t = d_102(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm n_12 (ATerm t)
{
  t = term_g_17;
  return(t);
}
ATerm o_12 (ATerm t)
{
  ATerm t_41 = NULL,u_41 = NULL;
  if(match_cons(t, sym__2))
    {
      t_41 = ATgetArgument(t, 0);
      u_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9(t_41, u_41, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_92 = NULL,m_41 = NULL,n_41 = NULL;
  t = times_0_0(t);
  n_41 = t;
  t = SSL_explode_term(n_41);
  if(match_cons(t, sym__2))
    {
      ATerm v_35 = ATgetArgument(t, 0);
      m_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_41;
  t = foldr_2_0(n_12, o_12, t);
  r_92 = t;
  t = SSL_TicksToSeconds(r_92);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_93 = NULL,f_93 = NULL,g_93 = NULL;
  c_93 = t;
  if(match_cons(t, sym__2))
    {
      f_93 = ATgetArgument(t, 0);
      g_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_36 = t;
    int c_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_93;
        if((f_93 != t))
          {
            _fail(t);
          }
        t = c_93;
        ;
        LocalPopChoice(c_36);
      }
    else
      {
        t = b_36;
        t = (ATerm) ATmakeAppl(sym__2, f_93, g_93);
        {
          ATerm d_36 = t;
          int e_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_93, g_93);
              ;
              LocalPopChoice(e_36);
            }
          else
            {
              t = d_36;
              t = SSL_gtr(f_93, g_93);
            }
          t = (ATerm) ATmakeAppl(sym__2, f_93, g_93);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_114 (ATerm), ATerm t)
{
  ATerm k_93 = NULL;
  k_93 = t;
  {
    ATerm f_36 = t;
    int h_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_93 = NULL;
        t = term_j_34;
        t = get_config_0_0(t);
        m_93 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_93, term_x_14);
        t = geq_0_0(t);
        t = k_93;
        t = v_114(t);
        ;
        LocalPopChoice(h_36);
      }
    else
      {
        t = f_36;
        t = k_93;
      }
  }
  return(t);
}
ATerm s_12 (ATerm t)
{
  ATerm o_93 = NULL,p_93 = NULL,r_93 = NULL,s_93 = NULL;
  t = run_time_0_0(t);
  o_93 = t;
  t = term_i_14;
  t = whoami_0_0(t);
  p_93 = t;
  t = term_r_14;
  r_93 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_36), o_93), term_i_36), p_93);
  s_93 = t;
  t = SSL_printnl(r_93, s_93);
  t = (ATerm) ATmakeAppl(sym__2, term_r_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_36), o_93), term_i_36), p_93));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(s_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_93 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_17;
  t_93 = t;
  t = SSL_exit(t_93);
  return(t);
}
ATerm w_12 (ATerm t)
{
  ATerm b_94 = NULL,c_94 = NULL;
  c_94 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = c_94;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          b_94 = ATgetArgument(t, 0);
          {
            ATerm t_42 = NULL,h_11 = NULL;
            t = SSLgetAnnotations(c_94);
            t_42 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, b_94);
            h_11 = t;
            t = SSLsetAnnotations(h_11, t_42);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = c_94;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm l_117 (ATerm), ATerm t)
{
  ATerm n_36 = t;
  int o_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_36;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_36);
    }
  else
    {
      t = n_36;
      t = fetch_1_0(w_12, t);
    }
  t = l_117(t);
  return(t);
}
ATerm map_1_0 (ATerm m_97 (ATerm), ATerm t)
{
  ATerm s_94 (ATerm t)
  {
    ATerm p_94 = NULL,q_94 = NULL,r_94 = NULL;
    p_94 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_94;
      }
    else
      {
        ATerm k_43 = NULL,n_43 = NULL,t_43 = NULL,m_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_94 = ATgetFirst((ATermList) t);
            r_94 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_94);
        k_43 = t;
        t = q_94;
        t = m_97(t);
        n_43 = t;
        t = r_94;
        t = s_94(t);
        t_43 = t;
        t = (ATerm) ATinsert(CheckATermList(t_43), n_43);
        m_11 = t;
        t = SSLsetAnnotations(m_11, k_43);
      }
    return(t);
  }
  t = s_94(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm v_94 = NULL,w_94 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_94 = ATgetFirst((ATermList) t);
      w_94 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_95 = NULL,d_95 = NULL;
        ATerm x_12 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(c_95)), not_null(d_95));
          return(t);
        }
        t = w_94;
        t = l_0(t);
        if(((c_95 != NULL) && (c_95 != t)))
          _fail(t);
        else
          c_95 = t;
        t = v_94;
        t = k_0(t);
        if(((d_95 != NULL) && (d_95 != t)))
          _fail(t);
        else
          d_95 = t;
        t = w_94;
        t = reverse_acc_2_0(k_0, x_12, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_14;
      t = l_0(t);
    }
  return(t);
}
ATerm a_10 (ATerm q_37, ATerm r_37, ATerm t)
{
  t = SSL_table_get(q_37, r_37);
  return(t);
}
ATerm y_12 (ATerm t)
{
  ATerm h_95 = NULL,i_95 = NULL,j_95 = NULL,y_11 = NULL;
  j_95 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_95);
  h_95 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, i_95);
  y_11 = t;
  t = SSLsetAnnotations(y_11, h_95);
  return(t);
}
ATerm z_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_13 (ATerm t)
{
  ATerm l_95 = NULL;
  l_95 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_95), term_r_36);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_95 = NULL,g_95 = NULL;
  ATerm y_36 = t;
  int z_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_35;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_36);
    }
  else
    {
      t = y_36;
      t = fetch_1_0(y_12, t);
    }
  t = term_a_37;
  t = echo_0_0(t);
  t = term_a_35;
  f_95 = t;
  t = term_c_35;
  g_95 = t;
  t = term_b_37;
  t = a_10(f_95, g_95, t);
  t = reverse_acc_2_0(_id, z_12, t);
  t = map_1_0(a_13, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_95 = NULL,q_95 = NULL,r_95 = NULL;
  p_95 = t;
  {
    ATerm e_37 = t;
    int f_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_95;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_37 = ATgetFirst((ATermList) t);
                ATerm u_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_95;
          }
        ;
        LocalPopChoice(f_37);
      }
    else
      {
        t = e_37;
        t = (ATerm) ATinsert(ATempty, p_95);
      }
    q_95 = t;
    t = term_j_32;
    r_95 = t;
    t = SSL_printnl(r_95, q_95);
    t = p_95;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_s_35;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm c_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_13 (ATerm t)
{
  ATerm v_95 = NULL,w_95 = NULL;
  t = term_w_37;
  v_95 = t;
  t = term_i_14;
  w_95 = t;
  t = term_y_37;
  t = d_10(v_95, w_95, t);
  return(t);
}
ATerm e_13 (ATerm t)
{
  t = term_z_37;
  return(t);
}
ATerm g_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_13 (ATerm t)
{
  ATerm c_96 = NULL,d_96 = NULL,e_96 = NULL,f_96 = NULL;
  t = term_w_37;
  e_96 = t;
  t = term_i_14;
  f_96 = t;
  t = term_y_37;
  t = d_10(e_96, f_96, t);
  t = term_a_38;
  c_96 = t;
  t = term_i_14;
  d_96 = t;
  t = term_b_38;
  t = d_10(c_96, d_96, t);
  t = term_c_38;
  return(t);
}
ATerm i_13 (ATerm t)
{
  t = term_d_38;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_38 = t;
  int f_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_13, d_13, e_13, t);
      ;
      LocalPopChoice(f_38);
    }
  else
    {
      t = e_38;
      t = Option_3_0(g_13, h_13, i_13, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_119 (ATerm), ATerm t)
{
  ATerm k_96 = NULL,l_96 = NULL,m_96 = NULL,n_96 = NULL,p_96 = NULL,q_96 = NULL,a_12 = NULL;
  k_96 = t;
  {
    ATerm g_38 = t;
    int h_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_38;
        t = o_119(t);
        ;
        LocalPopChoice(h_38);
      }
    else
      {
        t = g_38;
      }
    t = k_96;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_96 = ATgetFirst((ATermList) t);
        n_96 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(k_96);
    l_96 = t;
    t = term_s_35;
    q_96 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_s_35, m_96);
    t = d_10(q_96, m_96, t);
    t = n_96;
    {
      ATerm a_97 (ATerm t)
      {
        ATerm j_38 = t;
        int k_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_38 = t;
            int m_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_96 = NULL;
                t_96 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = t_96;
                ;
                LocalPopChoice(m_38);
              }
            else
              {
                t = l_38;
                t = o_119(t);
                t = Cons_2_0(_id, a_97, t);
              }
            ;
            LocalPopChoice(k_38);
          }
        else
          {
            t = j_38;
            {
              ATerm w_96 = NULL,x_96 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_96 = ATgetFirst((ATermList) t);
                  x_96 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(x_96), (ATerm) ATmakeAppl(sym_Undefined_1, w_96));
            }
          }
        return(t);
      }
      t = a_97(t);
      p_96 = t;
      t = (ATerm) ATinsert(CheckATermList(p_96), (ATerm) ATmakeAppl(sym_Program_1, m_96));
      a_12 = t;
      t = SSLsetAnnotations(a_12, l_96);
    }
  }
  return(t);
}
ATerm k_13 (ATerm t)
{
  ATerm p_97 = NULL;
  p_97 = t;
  if(match_string(t, "--help"))
    {
      t = p_97;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_97;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_97;
        }
    }
  return(t);
}
ATerm l_13 (ATerm t)
{
  ATerm q_97 = NULL,r_97 = NULL;
  t = term_q_36;
  q_97 = t;
  t = term_i_14;
  r_97 = t;
  t = term_n_38;
  t = d_10(q_97, r_97, t);
  t = term_o_38;
  return(t);
}
ATerm m_13 (ATerm t)
{
  t = term_p_38;
  return(t);
}
ATerm n_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_119 (ATerm), ATerm t)
{
  ATerm f_97 = NULL,g_97 = NULL,h_97 = NULL,i_97 = NULL,j_97 = NULL,l_97 = NULL,o_97 = NULL;
  h_97 = t;
  t = term_a_35;
  j_97 = t;
  t = term_c_35;
  l_97 = t;
  t = (ATerm) ATempty;
  o_97 = t;
  t = SSL_table_put(j_97, l_97, o_97);
  t = h_97;
  {
    ATerm j_13 (ATerm t)
    {
      ATerm r_38 = t;
      int v_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_119(t);
          ;
          LocalPopChoice(v_38);
        }
      else
        {
          t = r_38;
          {
            ATerm w_38 = t;
            int y_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_13, l_13, m_13, t);
                ;
                LocalPopChoice(y_38);
              }
            else
              {
                t = w_38;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_13, t);
    {
      ATerm z_38 = t;
      int a_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_98 = NULL;
          a_98 = t;
          {
            ATerm c_39 = t;
            int d_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_44 = NULL;
                t = a_98;
                {
                  ATerm f_39 = t;
                  int g_39 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_q_36;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(g_39);
                    }
                  else
                    {
                      t = f_39;
                      t = fetch_1_0(n_13, t);
                    }
                  t = a_98;
                  t = default_system_usage_0_0(t);
                  t = term_g_17;
                  f_44 = t;
                  t = SSL_exit(f_44);
                }
                ;
                LocalPopChoice(d_39);
              }
            else
              {
                t = c_39;
                {
                  ATerm l_44 = NULL;
                  t = term_w_37;
                  t = get_config_0_0(t);
                  t = a_98;
                  t = default_system_about_0_0(t);
                  t = term_g_17;
                  l_44 = t;
                  t = SSL_exit(l_44);
                }
              }
          }
          ;
          LocalPopChoice(a_39);
        }
      else
        {
          t = z_38;
          {
            ATerm h_39 = t;
            int j_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_98 = NULL,e_98 = NULL,f_98 = NULL;
                ATerm o_13 (ATerm t)
                {
                  ATerm g_98 = NULL,h_98 = NULL,i_98 = NULL,e_12 = NULL;
                  i_98 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      h_98 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(i_98);
                  g_98 = t;
                  t = h_98;
                  if(((f_97 != NULL) && (f_97 != t)))
                    _fail(t);
                  else
                    f_97 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, h_98);
                  e_12 = t;
                  t = SSLsetAnnotations(e_12, g_98);
                  return(t);
                }
                t = fetch_1_0(o_13, t);
                t = term_r_14;
                e_98 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_97)), term_n_39);
                f_98 = t;
                t = SSL_printnl(e_98, f_98);
                t = (ATerm) ATmakeAppl(sym__2, term_r_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_97)), term_n_39));
                t = default_system_usage_0_0(t);
                t = term_x_14;
                b_98 = t;
                t = SSL_exit(b_98);
                ;
                LocalPopChoice(j_39);
              }
            else
              {
                t = h_39;
              }
          }
        }
      g_97 = t;
      t = term_a_35;
      i_97 = t;
      t = SSL_table_destroy(i_97);
      t = g_97;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_117 (ATerm), ATerm o_117 (ATerm), ATerm p_117 (ATerm), ATerm q_117 (ATerm), ATerm t)
{
  ATerm n_98 = NULL,o_98 = NULL,p_98 = NULL,q_98 = NULL;
  t = parse_options_1_0(n_117, t);
  n_98 = t;
  t = term_o_39;
  q_98 = t;
  t = SSL_table_create(q_98);
  t = term_o_39;
  o_98 = t;
  t = term_p_39;
  p_98 = t;
  t = SSL_table_put(o_98, p_98, n_98);
  t = n_98;
  t = p_117(t);
  {
    ATerm q_39 = t;
    int r_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_117, t);
        ;
        LocalPopChoice(r_39);
      }
    else
      {
        t = q_39;
        {
          ATerm t_39 = t;
          int u_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_117(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(u_39);
            }
          else
            {
              t = t_39;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm s_13 (ATerm t)
{
  t = if_verbose2_1_0(c_14, t);
  return(t);
}
ATerm u_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_13 (ATerm t)
{
  ATerm r_98 = NULL,s_98 = NULL;
  t = term_v_39;
  r_98 = t;
  t = term_i_14;
  s_98 = t;
  t = term_w_39;
  t = d_10(r_98, s_98, t);
  t = term_x_39;
  return(t);
}
ATerm z_13 (ATerm t)
{
  t = term_y_39;
  return(t);
}
ATerm c_14 (ATerm t)
{
  ATerm t_98 = NULL,u_98 = NULL,v_98 = NULL,w_98 = NULL;
  t_98 = t;
  t = term_s_35;
  t = get_config_0_0(t);
  u_98 = t;
  t = term_r_14;
  v_98 = t;
  t = (ATerm) ATinsert(ATempty, u_98);
  w_98 = t;
  t = SSL_printnl(v_98, w_98);
  t = t_98;
  return(t);
}
ATerm iowrap_3_0 (ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm t)
{
  ATerm r_13 (ATerm t)
  {
    ATerm z_39 = t;
    int b_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_116(t);
        ;
        LocalPopChoice(b_40);
      }
    else
      {
        t = z_39;
        {
          ATerm c_40 = t;
          int e_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(e_40);
            }
          else
            {
              t = c_40;
              {
                ATerm i_40 = t;
                int k_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(k_40);
                  }
                else
                  {
                    t = i_40;
                    {
                      ATerm l_40 = t;
                      int m_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(u_13, y_13, z_13, t);
                          ;
                          LocalPopChoice(m_40);
                        }
                      else
                        {
                          t = l_40;
                          {
                            ATerm o_40 = t;
                            int p_40 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(p_40);
                              }
                            else
                              {
                                t = o_40;
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
  ATerm t_13 (ATerm t)
  {
    ATerm x_98 = NULL,y_98 = NULL,z_98 = NULL;
    y_98 = t;
    {
      ATerm q_40 = t;
      int r_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_14 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((x_98 != NULL) && (x_98 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_98 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(d_14, t);
          ;
          LocalPopChoice(r_40);
        }
      else
        {
          t = q_40;
          t = term_s_40;
          x_98 = t;
        }
      t = not_null(x_98);
      t = ReadFromFile_0_0(t);
      z_98 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_98, z_98);
      t = apply_strategy_1_0(w_116, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(r_13, y_116, s_13, t_13, t);
  return(t);
}
ATerm e_14 (ATerm t)
{
  ATerm a_99 = NULL,b_99 = NULL,c_99 = NULL,d_99 = NULL,e_99 = NULL,f_99 = NULL,g_99 = NULL,h_99 = NULL,i_99 = NULL,l_99 = NULL,m_99 = NULL,n_99 = NULL,q_99 = NULL,t_99 = NULL,v_12 = NULL,t_12 = NULL,h_12 = NULL;
  t_99 = t;
  if(match_cons(t, sym__2))
    {
      b_99 = ATgetArgument(t, 0);
      c_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_99);
  a_99 = t;
  t = c_99;
  if(match_cons(t, sym_Specification_1))
    {
      h_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_99);
  g_99 = t;
  t = h_99;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_99 = ATgetFirst((ATermList) t);
      m_99 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_99);
  i_99 = t;
  t = m_99;
  t = Cons_2_0(f_14, g_14, t);
  n_99 = t;
  t = (ATerm) ATinsert(CheckATermList(n_99), l_99);
  h_12 = t;
  t = SSLsetAnnotations(h_12, i_99);
  q_99 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, q_99);
  t_12 = t;
  t = SSLsetAnnotations(t_12, g_99);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm t_40 = ATgetArgument(t, 0);
      if(((ATgetType(t_40) == AT_LIST) && !(ATisEmpty(t_40))))
        {
          e_99 = ATgetFirst((ATermList) t_40);
          {
            ATerm u_40 = (ATerm) ATgetNext((ATermList) t_40);
            if(((ATgetType(u_40) == AT_LIST) && !(ATisEmpty(u_40))))
              {
                ATerm v_40 = ATgetFirst((ATermList) u_40);
                if(match_cons(v_40, sym_Strategies_1))
                  {
                    f_99 = ATgetArgument(v_40, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm w_40 = (ATerm) ATgetNext((ATermList) u_40);
                  if(((ATgetType(w_40) != AT_LIST) || !(ATisEmpty(w_40))))
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
  t = x_7(e_99, f_99, t);
  d_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_99, d_99);
  v_12 = t;
  t = SSLsetAnnotations(v_12, a_99);
  return(t);
}
ATerm f_14 (ATerm t)
{
  ATerm u_99 = NULL,v_99 = NULL,w_99 = NULL,x_99 = NULL,g_12 = NULL;
  x_99 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      v_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_99);
  u_99 = t;
  t = v_99;
  t = needed_defs_0_0(t);
  w_99 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, w_99);
  g_12 = t;
  t = SSLsetAnnotations(g_12, u_99);
  return(t);
}
ATerm g_14 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(e_14, _fail, default_usage_0_0, t);
  return(t);
}
