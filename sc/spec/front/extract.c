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
ATerm term_d_41;
ATerm term_q_40;
ATerm term_p_40;
ATerm term_o_40;
ATerm term_l_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_z_39;
ATerm term_h_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_y_38;
ATerm term_p_38;
ATerm term_o_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_j_38;
ATerm term_i_38;
ATerm term_d_38;
ATerm term_c_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_r_37;
ATerm term_m_37;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_j_36;
ATerm term_g_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_q_34;
ATerm term_j_34;
ATerm term_d_34;
ATerm term_a_34;
ATerm term_x_32;
ATerm term_q_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_e_31;
ATerm term_a_31;
ATerm term_v_30;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_u_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_x_18;
ATerm term_h_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_j_17;
ATerm term_k_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_t_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_d_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_w_14;
ATerm term_v_14;
void init_constant_terms (void)
{
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorNeeded", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Defined_1, term_m_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Defined_1, term_p_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Sort_2, term_e_19, (ATerm) ATempty);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_ConstType_1, term_f_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(sym__2, term_j_17, term_j_17);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(sym__2, term_k_32, term_l_32);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym__2, term_w_34, term_j_17);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_17);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_v_14);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_u_35);
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(sym__2, term_i_38, term_v_14);
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(sym__2, term_l_38, term_v_14);
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(sym__2, term_y_37, term_v_14);
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(sym__2, term_l_40, term_v_14);
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm ConstructorNeeded_0_0 (ATerm);
ATerm filter_1_0 (ATerm l_103 (ATerm), ATerm);
ATerm e_0 (ATerm);
ATerm y_0 (ATerm);
ATerm DeclareConstructorNeeded_0_0 (ATerm);
ATerm z_0 (ATerm);
ATerm y_7 (ATerm o_70, ATerm n_70, ATerm);
ATerm a_8 (ATerm k_47, ATerm l_47, ATerm m_47, ATerm);
ATerm giving_up_0_0 (ATerm);
ATerm b_1 (ATerm);
ATerm DefinitionExists_0_0 (ATerm);
ATerm sboundin_3_0 (ATerm j_90 (ATerm), ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm);
ATerm c_1 (ATerm);
ATerm h_8 (ATerm h_22, ATerm g_22, ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm free_vars2_4_0 (ATerm s_105 (ATerm), ATerm t_105 (ATerm), ATerm u_105 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm v_105 (ATerm), ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm n_2 (ATerm);
ATerm p_2 (ATerm);
ATerm s_2 (ATerm);
ATerm svars_arity_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm pat_td_1_0 (ATerm r_120 (ATerm), ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm map1_1_0 (ATerm t_0 (ATerm), ATerm);
ATerm t_3 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm j_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm y_4 (ATerm);
ATerm q_8 (ATerm o_68, ATerm p_68, ATerm q_68, ATerm);
ATerm e_44 (ATerm t_43, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm d_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm repeat_1_0 (ATerm w_107 (ATerm), ATerm);
ATerm u_5 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm v_5 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm i_92 (ATerm), ATerm);
ATerm t_8 (ATerm d_64, ATerm e_64, ATerm f_64, ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm e_91 (ATerm), ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm p_6 (ATerm);
ATerm tuple_unzip_1_0 (ATerm g_95 (ATerm), ATerm);
ATerm MkDistApplication_0_0 (ATerm);
ATerm u_8 (ATerm v_33, ATerm w_33, ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm copy_1_0 (ATerm l_102 (ATerm), ATerm);
ATerm v_8 (ATerm n_46, ATerm o_46, ATerm);
ATerm last_0_0 (ATerm);
ATerm x_63 (ATerm z_59, ATerm c_60, ATerm d_60, ATerm e_60, ATerm);
ATerm y_63 (ATerm a_62, ATerm b_62, ATerm c_62, ATerm e_62, ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm y_6 (ATerm);
ATerm a_7 (ATerm);
ATerm DefineCongruence_0_0 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm choices_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm alltd_1_0 (ATerm w_92 (ATerm), ATerm);
ATerm e_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm p_7 (ATerm);
ATerm r_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm JoinDefs2_0_0 (ATerm);
ATerm r_67 (ATerm q_64, ATerm r_64, ATerm s_64, ATerm t_64, ATerm);
ATerm get_definition_0_0 (ATerm);
ATerm at_end_1_0 (ATerm v_97 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm a_72 (ATerm s_71, ATerm);
ATerm conc_0_0 (ATerm);
ATerm a_9 (ATerm c_99 (ATerm), ATerm t_29, ATerm s_29, ATerm);
ATerm genzip_4_0 (ATerm q_95 (ATerm), ATerm r_95 (ATerm), ATerm s_95 (ATerm), ATerm t_95 (ATerm), ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm e_9 (ATerm d_650, ATerm i_650, ATerm o_62, ATerm);
ATerm l_8 (ATerm);
ATerm m_8 (ATerm);
ATerm p_8 (ATerm);
ATerm v_76 (ATerm e_75, ATerm f_75, ATerm g_75, ATerm);
ATerm r_8 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm g_9 (ATerm n_120 (ATerm), ATerm o_120 (ATerm), ATerm p_120 (ATerm), ATerm l_63, ATerm i_63, ATerm q_63, ATerm m_63, ATerm j_63, ATerm k_63, ATerm);
ATerm GnNextChangeGraph_3_0 (ATerm n_120 (ATerm), ATerm o_120 (ATerm), ATerm p_120 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm l_108 (ATerm), ATerm m_108 (ATerm), ATerm);
ATerm for_3_0 (ATerm o_108 (ATerm), ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm);
ATerm s_8 (ATerm);
ATerm w_8 (ATerm);
ATerm c_9 (ATerm);
ATerm f_9 (ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm m_9 (ATerm);
ATerm e_32 (ATerm n_31, ATerm p_31, ATerm);
ATerm extract_needed_defs_0_0 (ATerm);
ATerm j_9 (ATerm h_103 (ATerm), ATerm o_35, ATerm m_35, ATerm);
ATerm k_9 (ATerm k_99 (ATerm), ATerm l_99 (ATerm), ATerm z_29, ATerm y_29, ATerm);
ATerm l_9 (ATerm h_99 (ATerm), ATerm v_29, ATerm u_29, ATerm);
ATerm Arities_0_0 (ATerm);
ATerm n_9 (ATerm h_36, ATerm i_36, ATerm);
ATerm d_82 (ATerm t_81, ATerm);
ATerm Definitions_0_0 (ATerm);
ATerm foldr_3_0 (ATerm x_101 (ATerm), ATerm y_101 (ATerm), ATerm z_101 (ATerm), ATerm);
ATerm a_10 (ATerm);
ATerm c_10 (ATerm);
ATerm d_10 (ATerm);
ATerm e_10 (ATerm);
ATerm f_10 (ATerm);
ATerm g_10 (ATerm);
ATerm i_10 (ATerm);
ATerm l_10 (ATerm);
ATerm o_10 (ATerm);
ATerm RegisterSDefT_0_0 (ATerm);
ATerm needed_defs_0_0 (ATerm);
ATerm Cons_2_0 (ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm);
ATerm q_9 (ATerm w_51, ATerm x_51, ATerm);
ATerm r_9 (ATerm k_55, ATerm l_55, ATerm);
ATerm t_9 (ATerm e_113 (ATerm), ATerm f_523, ATerm o_55, ATerm);
ATerm s_9 (ATerm g_55, ATerm h_55, ATerm);
ATerm t_10 (ATerm);
ATerm v_10 (ATerm);
ATerm w_10 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm g_116 (ATerm), ATerm);
ATerm z_85 (ATerm t_85, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm u_9 (ATerm m_55, ATerm);
ATerm v_9 (ATerm y_51, ATerm z_51, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm k_87 (ATerm j_86, ATerm);
ATerm l_87 (ATerm n_86, ATerm o_86, ATerm p_86, ATerm);
ATerm m_87 (ATerm x_86, ATerm y_86, ATerm z_86, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm y_10 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm p_97 (ATerm), ATerm);
ATerm p_9 (ATerm f_44, ATerm g_44, ATerm);
ATerm debug_1_0 (ATerm c_113 (ATerm), ATerm);
ATerm a_11 (ATerm);
ATerm b_11 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm p_114 (ATerm), ATerm);
ATerm e_11 (ATerm);
ATerm f_11 (ATerm);
ATerm j_11 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm k_11 (ATerm);
ATerm n_11 (ATerm);
ATerm p_11 (ATerm);
ATerm q_11 (ATerm);
ATerm r_11 (ATerm);
ATerm s_11 (ATerm);
ATerm t_11 (ATerm);
ATerm x_11 (ATerm);
ATerm z_11 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm b_10 (ATerm n_56, ATerm o_56, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm a_12 (ATerm);
ATerm c_12 (ATerm);
ATerm e_12 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm z_9 (ATerm w_35, ATerm x_35, ATerm v_35, ATerm);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm m_12 (ATerm);
ATerm n_12 (ATerm);
ATerm r_12 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm w_9 (ATerm n_33, ATerm o_33, ATerm);
ATerm foldr_2_0 (ATerm v_101 (ATerm), ATerm w_101 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm v_12 (ATerm);
ATerm w_12 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm o_114 (ATerm), ATerm);
ATerm x_12 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm y_12 (ATerm);
ATerm need_help_1_0 (ATerm e_117 (ATerm), ATerm);
ATerm map_1_0 (ATerm f_97 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm y_9 (ATerm n_37, ATerm o_37, ATerm);
ATerm b_13 (ATerm);
ATerm c_13 (ATerm);
ATerm d_13 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm f_13 (ATerm);
ATerm g_13 (ATerm);
ATerm h_13 (ATerm);
ATerm i_13 (ATerm);
ATerm j_13 (ATerm);
ATerm k_13 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm h_119 (ATerm), ATerm);
ATerm m_13 (ATerm);
ATerm n_13 (ATerm);
ATerm q_13 (ATerm);
ATerm r_13 (ATerm);
ATerm parse_options_1_0 (ATerm g_119 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm g_117 (ATerm), ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm j_117 (ATerm), ATerm);
ATerm x_13 (ATerm);
ATerm b_14 (ATerm);
ATerm c_14 (ATerm);
ATerm d_14 (ATerm);
ATerm e_14 (ATerm);
ATerm iowrap_3_0 (ATerm p_116 (ATerm), ATerm q_116 (ATerm), ATerm r_116 (ATerm), ATerm);
ATerm h_14 (ATerm);
ATerm p_14 (ATerm);
ATerm u_14 (ATerm);
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
  t = term_v_14;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_w_14;
  s_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_14), b_0), term_y_14);
  a_1 = t;
  t = SSL_printnl(s_0, a_1);
  t = term_a_15;
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
    ATerm b_15 = t;
    int c_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_1 = NULL,y_1 = NULL;
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, r_1, (ATerm) ATempty);
        w_1 = t;
        t = term_d_15;
        y_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_15, (ATerm) ATmakeAppl(sym_OpDecl_2, r_1, (ATerm) ATempty));
        t = n_9(y_1, w_1, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm e_15 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_15) != ATmakeSymbol("w_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, r_1, s_1);
        ;
        LocalPopChoice(c_15);
      }
    else
      {
        t = b_15;
        {
          ATerm w_3 = NULL,a_4 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, r_1, (ATerm) ATempty);
          w_3 = t;
          t = term_d_15;
          a_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_15, (ATerm) ATmakeAppl(sym_OpDecl_2, r_1, (ATerm) ATempty));
          t = n_9(a_4, w_3, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm f_15 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) f_15) != ATmakeSymbol("u_0", 0, ATtrue)))
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
ATerm filter_1_0 (ATerm l_103 (ATerm), ATerm t)
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
        ATerm g_15 = t;
        int h_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_4 = NULL,w_4 = NULL,x_4 = NULL,c_0 = NULL;
            t = SSLgetAnnotations(k_2);
            f_4 = t;
            t = l_2;
            t = l_103(t);
            w_4 = t;
            t = m_2;
            t = filter_1_0(l_103, t);
            x_4 = t;
            t = (ATerm) ATinsert(CheckATermList(x_4), w_4);
            c_0 = t;
            t = SSLsetAnnotations(c_0, f_4);
            ;
            LocalPopChoice(h_15);
          }
        else
          {
            t = g_15;
            t = m_2;
            t = filter_1_0(l_103, t);
          }
      }
    }
  return(t);
}
ATerm e_0 (ATerm t)
{
  t = term_d_15;
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = term_d_15;
  return(t);
}
ATerm DeclareConstructorNeeded_0_0 (ATerm t)
{
  ATerm q_2 = NULL,r_2 = NULL;
  q_2 = t;
  {
    ATerm i_15 = t;
    int k_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Cong_2))
          {
            r_2 = ATgetArgument(t, 0);
            {
              ATerm l_15 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(k_15);
        {
          ATerm x_2 = NULL,y_2 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, r_2, (ATerm) ATempty);
          x_2 = t;
          t = term_n_15;
          y_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, r_2, (ATerm) ATempty), term_n_15);
          t = j_9(e_0, x_2, y_2, t);
          t = q_2;
        }
      }
    else
      {
        t = i_15;
        {
          ATerm b_3 = NULL,c_3 = NULL;
          if(match_cons(t, sym_Op_2))
            {
              r_2 = ATgetArgument(t, 0);
              {
                ATerm o_15 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, r_2, (ATerm) ATempty);
          b_3 = t;
          t = term_q_15;
          c_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, r_2, (ATerm) ATempty), term_q_15);
          t = j_9(y_0, b_3, c_3, t);
          t = q_2;
        }
      }
  }
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm r_15 = t;
  int s_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareConstructorNeeded_0_0(t);
      ;
      LocalPopChoice(s_15);
    }
  else
    {
      t = r_15;
    }
  return(t);
}
ATerm y_7 (ATerm o_70, ATerm n_70, ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,p_3 = NULL,q_3 = NULL,x_0 = NULL,v_0 = NULL,h_0 = NULL;
  t = n_70;
  t = topdown_1_0(z_0, t);
  t = o_70;
  if(match_cons(t, sym_Signature_1))
    {
      f_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_70);
  e_3 = t;
  t = f_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_3 = ATgetFirst((ATermList) t);
      k_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_3);
  h_3 = t;
  t = j_3;
  if(match_cons(t, sym_Constructors_1))
    {
      n_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_3);
  m_3 = t;
  t = n_3;
  t = filter_1_0(ConstructorNeeded_0_0, t);
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym_Constructors_1, p_3);
  h_0 = t;
  t = SSLsetAnnotations(h_0, m_3);
  q_3 = t;
  t = k_3;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_3), q_3);
  v_0 = t;
  t = SSLsetAnnotations(v_0, h_3);
  l_3 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, l_3);
  x_0 = t;
  t = SSLsetAnnotations(x_0, e_3);
  g_3 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, n_70)), g_3));
  return(t);
}
ATerm a_8 (ATerm k_47, ATerm l_47, ATerm m_47, ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL;
  t = term_w_14;
  u_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_15), m_47), term_w_15), l_47), term_v_15), k_47), term_t_15);
  v_3 = t;
  t = SSL_printnl(u_3, v_3);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_15), m_47), term_w_15), l_47), term_v_15), k_47), term_t_15);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL;
  t = term_w_14;
  y_3 = t;
  t = (ATerm) ATinsert(ATempty, term_y_15);
  z_3 = t;
  t = SSL_printnl(y_3, z_3);
  t = term_a_15;
  x_3 = t;
  t = SSL_exit(x_3);
  t = (ATerm) ATinsert(ATempty, term_y_15);
  return(t);
}
ATerm b_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_15 = ATgetArgument(t, 0);
      if(((ATgetType(z_15) != AT_INT) || (ATgetInt((ATermInt) z_15) != 0)))
        _fail(t);
      {
        ATerm a_16 = ATgetArgument(t, 1);
        if(((ATgetType(a_16) != AT_INT) || (ATgetInt((ATermInt) a_16) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,c_5 = NULL;
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
      c_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_4;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = c_5;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm c_16 = t;
    int d_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_5 = NULL,i_5 = NULL;
        t = t_4;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_16 = ATgetFirst((ATermList) t);
            ATerm g_16 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(g_16) == AT_LIST) && !(ATisEmpty(g_16))))
              {
                ATerm h_16 = ATgetFirst((ATermList) g_16);
                ATerm i_16 = (ATerm) ATgetNext((ATermList) g_16);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm j_16 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(b_1, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = j_16;
            }
          t = term_w_14;
          h_5 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, t_4), term_k_16);
          i_5 = t;
          t = SSL_printnl(h_5, i_5);
          t = (ATerm) ATinsert(ATinsert(ATempty, t_4), term_k_16);
          t = giving_up_0_0(t);
        }
        ;
        LocalPopChoice(d_16);
      }
    else
      {
        t = c_16;
        {
          ATerm p_5 = NULL,q_5 = NULL;
          t = t_4;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm l_16 = ATgetFirst((ATermList) t);
              if(match_cons(l_16, sym__2))
                {
                  p_5 = ATgetArgument(l_16, 0);
                  q_5 = ATgetArgument(l_16, 1);
                }
              else
                _fail(t);
              {
                ATerm n_16 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(n_16) != AT_LIST) || !(ATisEmpty(n_16))))
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
ATerm sboundin_3_0 (ATerm j_90 (ATerm), ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm t)
{
  ATerm m_10 = NULL,n_10 = NULL,s_10 = NULL,u_10 = NULL,z_10 = NULL;
  s_10 = t;
  if(match_cons(t, sym_Let_2))
    {
      u_10 = ATgetArgument(t, 0);
      z_10 = ATgetArgument(t, 1);
      {
        ATerm w_5 = NULL,e_6 = NULL,g_6 = NULL,h_1 = NULL;
        t = SSLgetAnnotations(s_10);
        w_5 = t;
        t = u_10;
        t = j_90(t);
        e_6 = t;
        t = z_10;
        t = j_90(t);
        g_6 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, e_6, g_6);
        h_1 = t;
        t = SSLsetAnnotations(h_1, w_5);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          u_10 = ATgetArgument(t, 0);
          z_10 = ATgetArgument(t, 1);
          m_10 = ATgetArgument(t, 2);
          {
            ATerm n_7 = NULL,w_7 = NULL,x_7 = NULL,z_7 = NULL,i_1 = NULL;
            t = SSLgetAnnotations(s_10);
            n_7 = t;
            t = u_10;
            t = l_90(t);
            w_7 = t;
            t = z_10;
            t = l_90(t);
            x_7 = t;
            t = m_10;
            t = j_90(t);
            z_7 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, w_7, x_7, z_7);
            i_1 = t;
            t = SSLsetAnnotations(i_1, n_7);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              u_10 = ATgetArgument(t, 0);
              z_10 = ATgetArgument(t, 1);
              m_10 = ATgetArgument(t, 2);
              n_10 = ATgetArgument(t, 3);
              {
                ATerm o_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,b_9 = NULL,j_1 = NULL;
                t = SSLgetAnnotations(s_10);
                o_8 = t;
                t = u_10;
                t = l_90(t);
                x_8 = t;
                t = z_10;
                t = l_90(t);
                y_8 = t;
                t = m_10;
                t = l_90(t);
                z_8 = t;
                t = n_10;
                t = j_90(t);
                b_9 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, x_8, y_8, z_8, b_9);
                j_1 = t;
                t = SSLsetAnnotations(j_1, o_8);
              }
            }
          else
            {
              ATerm h_10 = NULL,p_10 = NULL,q_10 = NULL,k_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  u_10 = ATgetArgument(t, 0);
                  z_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(s_10);
              h_10 = t;
              t = u_10;
              t = l_90(t);
              p_10 = t;
              t = z_10;
              t = j_90(t);
              q_10 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, p_10, q_10);
              k_1 = t;
              t = SSLsetAnnotations(k_1, h_10);
            }
        }
    }
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm m_11 = NULL;
  ATerm o_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          m_11 = ATgetArgument(t, 0);
          {
            ATerm q_16 = ATgetArgument(t, 1);
          }
          {
            ATerm s_16 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_16);
      t = m_11;
    }
  else
    {
      t = o_16;
      if(match_cons(t, sym_SDefT_4))
        {
          m_11 = ATgetArgument(t, 0);
          {
            ATerm t_16 = ATgetArgument(t, 1);
          }
          {
            ATerm u_16 = ATgetArgument(t, 2);
          }
          {
            ATerm v_16 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = m_11;
    }
  return(t);
}
ATerm h_8 (ATerm h_22, ATerm g_22, ATerm t)
{
  t = h_22;
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
  ATerm o_11 = NULL,u_11 = NULL;
  if(match_cons(t, sym__2))
    {
      o_11 = ATgetArgument(t, 0);
      u_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_9(l_1, o_11, u_11, t);
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm v_11 = NULL;
  if(match_cons(t, sym__2))
    {
      v_11 = ATgetArgument(t, 0);
      if((v_11 != ATgetArgument(t, 1)))
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
  ATerm h_12 = NULL,i_12 = NULL;
  if(match_cons(t, sym__2))
    {
      h_12 = ATgetArgument(t, 0);
      i_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_9(o_1, h_12, i_12, t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm j_12 = NULL;
  if(match_cons(t, sym__2))
    {
      j_12 = ATgetArgument(t, 0);
      if((j_12 != ATgetArgument(t, 1)))
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
  ATerm o_13 = NULL;
  if(match_cons(t, sym__2))
    {
      o_13 = ATgetArgument(t, 0);
      if((o_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm s_105 (ATerm), ATerm t_105 (ATerm), ATerm u_105 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm v_105 (ATerm), ATerm t)
{
  ATerm p_13 (ATerm t)
  {
    ATerm k_12 = NULL,p_12 = NULL,q_12 = NULL;
    q_12 = t;
    {
      ATerm y_16 = t;
      int z_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_105(t);
          ;
          LocalPopChoice(z_16);
        }
      else
        {
          t = y_16;
          t = (ATerm) ATempty;
        }
      k_12 = t;
      t = q_12;
      {
        ATerm a_17 = t;
        int b_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_12 = NULL,h_11 = NULL,i_11 = NULL;
            t = t_105(t);
            t_12 = t;
            t = q_12;
            {
              ATerm d_1 (ATerm t)
              {
                ATerm x_10 = NULL;
                t = p_13(t);
                x_10 = t;
                t = (ATerm) ATmakeAppl(sym__2, x_10, t_12);
                t = a_9(v_105, x_10, t_12, t);
                return(t);
              }
              t = u_105(d_1, p_13, e_1, t);
              i_11 = t;
              t = SSL_explode_term(i_11);
              if(match_cons(t, sym__2))
                {
                  ATerm c_17 = ATgetArgument(t, 0);
                  h_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = h_11;
              t = foldr_3_0(f_1, g_1, _id, t);
            }
            ;
            LocalPopChoice(b_17);
          }
        else
          {
            t = a_17;
            {
              ATerm b_12 = NULL;
              t = SSL_explode_term(q_12);
              if(match_cons(t, sym__2))
                {
                  ATerm e_17 = ATgetArgument(t, 0);
                  b_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = b_12;
              t = foldr_3_0(m_1, n_1, p_13, t);
            }
          }
        p_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_12, p_12);
        t = l_9(p_1, k_12, p_12, t);
      }
    }
    return(t);
  }
  t = p_13(t);
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,a_14 = NULL,g_14 = NULL,i_14 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm f_17 = ATgetArgument(t, 0);
      if(match_cons(f_17, sym_SVar_1))
        {
          u_13 = ATgetArgument(f_17, 0);
        }
      else
        _fail(t);
      v_13 = ATgetArgument(t, 1);
      a_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_13;
  t = foldr_3_0(e_2, f_2, g_2, t);
  g_14 = t;
  t = a_14;
  t = foldr_3_0(h_2, i_2, j_2, t);
  i_14 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, u_13, (ATerm) ATmakeAppl(sym__2, g_14, i_14)));
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm n_14 = NULL,o_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL;
  n_14 = t;
  if(match_cons(t, sym_Let_2))
    {
      o_14 = ATgetArgument(t, 0);
      r_14 = ATgetArgument(t, 1);
      t = n_14;
      t = h_8(o_14, r_14, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          o_14 = ATgetArgument(t, 0);
          r_14 = ATgetArgument(t, 1);
          s_14 = ATgetArgument(t, 2);
          t = r_14;
          t = map_1_0(n_2, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              o_14 = ATgetArgument(t, 0);
              r_14 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, o_14);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  o_14 = ATgetArgument(t, 0);
                  r_14 = ATgetArgument(t, 1);
                  s_14 = ATgetArgument(t, 2);
                  t_14 = ATgetArgument(t, 3);
                  t = r_14;
                  t = map_1_0(p_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      o_14 = ATgetArgument(t, 0);
                      r_14 = ATgetArgument(t, 1);
                      s_14 = ATgetArgument(t, 2);
                      t_14 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_14;
                  t = map_1_0(s_2, t);
                }
            }
        }
    }
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm r_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_17 = ATgetArgument(t, 0);
      if(match_cons(g_17, sym__2))
        {
          r_16 = ATgetArgument(g_17, 0);
          {
            ATerm i_17 = ATgetArgument(g_17, 1);
          }
        }
      else
        _fail(t);
      if((r_16 != ATgetArgument(t, 1)))
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
  t = term_j_17;
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL;
  if(match_cons(t, sym__2))
    {
      j_14 = ATgetArgument(t, 0);
      k_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9(j_14, k_14, t);
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_a_15;
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_j_17;
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL;
  if(match_cons(t, sym__2))
    {
      l_14 = ATgetArgument(t, 0);
      m_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9(l_14, m_14, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_a_15;
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm j_15 = NULL;
  ATerm o_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_15 = ATgetArgument(t, 0);
          {
            ATerm q_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_17);
      t = j_15;
    }
  else
    {
      t = o_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_15;
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm u_15 = NULL;
  ATerm s_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_15 = ATgetArgument(t, 0);
          {
            ATerm v_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_17);
      t = u_15;
    }
  else
    {
      t = s_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_15;
    }
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm m_16 = NULL;
  ATerm y_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_16 = ATgetArgument(t, 0);
          {
            ATerm b_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_17);
      t = m_16;
    }
  else
    {
      t = y_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_16;
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
  ATerm d_24 = NULL,g_24 = NULL,i_24 = NULL;
  g_24 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      i_24 = ATgetArgument(t, 0);
      d_24 = ATgetArgument(t, 1);
      {
        ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL;
        t = g_24;
        t = new_0_0(t);
        o_24 = t;
        t = new_0_0(t);
        p_24 = t;
        t = new_0_0(t);
        q_24 = t;
        t = new_0_0(t);
        r_24 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_24), q_24), p_24), o_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, o_24), (ATerm) ATmakeAppl(sym_Var_1, q_24))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, i_24, (ATerm)ATmakeAppl(sym_Var_1, o_24), (ATerm) ATmakeAppl(sym_Var_1, p_24)), (ATerm) ATmakeAppl(sym_BAM_3, d_24, (ATerm)ATmakeAppl(sym_Var_1, q_24), (ATerm) ATmakeAppl(sym_Var_1, r_24)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_c_18, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, r_24)), (ATerm) ATmakeAppl(sym_Var_1, p_24))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          i_24 = ATgetArgument(t, 0);
          {
            ATerm u_24 = NULL,v_24 = NULL,x_24 = NULL,y_24 = NULL;
            t = g_24;
            t = new_0_0(t);
            x_24 = t;
            t = i_24;
            {
              ATerm t_2 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((u_24 != NULL) && (u_24 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      u_24 = ATgetArgument(t, 0);
                    if(((v_24 != NULL) && (v_24 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      v_24 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, x_24);
                return(t);
              }
              t = oncetd_1_0(t_2, t);
              y_24 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_c_18, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_24)), not_null(u_24))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, x_24)), (ATerm) ATmakeAppl(sym_Build_1, y_24))));
            }
          }
        }
      else
        {
          ATerm e_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              i_24 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_24;
          t = new_0_0(t);
          i_25 = t;
          t = new_0_0(t);
          j_25 = t;
          t = i_24;
          {
            ATerm u_2 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((e_25 != NULL) && (e_25 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    e_25 = ATgetArgument(t, 0);
                  if(((h_25 != NULL) && (h_25 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    h_25 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, i_25);
              return(t);
            }
            t = oncetd_1_0(u_2, t);
            k_25 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_25), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_25), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_25), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_25)), (ATerm) ATmakeAppl(sym_PrimT_3, term_d_18, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, j_25))))), (ATerm)ATmakeAppl(sym_Var_1, i_25), (ATerm) ATmakeAppl(sym_Op_2, term_e_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_25)), not_null(e_25)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm o_25 = NULL,q_25 = NULL;
  o_25 = t;
  if(match_cons(t, sym_Match_1))
    {
      q_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_25 = NULL,w_25 = NULL,z_25 = NULL,a_26 = NULL;
        t = o_25;
        t = new_0_0(t);
        z_25 = t;
        t = q_25;
        {
          ATerm v_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((s_25 != NULL) && (s_25 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_25 = ATgetArgument(t, 0);
                if(((w_25 != NULL) && (w_25 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  w_25 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, z_25), s_25);
            return(t);
          }
          t = pat_td_1_0(v_2, t);
          a_26 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_25), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_26), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_h_18, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, z_25))), (ATerm) ATmakeAppl(sym_Match_1, not_null(w_25))))));
        }
        ;
        LocalPopChoice(g_18);
      }
    else
      {
        t = f_18;
        {
          ATerm i_18 = t;
          int j_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_26 = NULL,i_26 = NULL,j_26 = NULL;
              t = o_25;
              t = new_0_0(t);
              i_26 = t;
              t = q_25;
              {
                ATerm w_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((f_26 != NULL) && (f_26 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        f_26 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, i_26);
                  return(t);
                }
                t = pat_td_1_0(w_2, t);
                j_26 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, j_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, i_26)), not_null(f_26))));
              }
              ;
              LocalPopChoice(j_18);
            }
          else
            {
              t = i_18;
              {
                ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL;
                t = o_25;
                t = new_0_0(t);
                u_26 = t;
                t = q_25;
                {
                  ATerm z_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((t_26 != NULL) && (t_26 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          t_26 = ATgetArgument(t, 0);
                        if(((s_26 != NULL) && (s_26 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          s_26 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, u_26);
                    return(t);
                  }
                  t = pat_td_1_0(z_2, t);
                  v_26 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, v_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, u_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(s_26)), not_null(t_26)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm r_120 (ATerm), ATerm t)
{
  ATerm k_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_120(t);
      ;
      LocalPopChoice(q_18);
    }
  else
    {
      t = k_18;
      {
        ATerm q_31 = NULL,u_31 = NULL,f_32 = NULL,g_32 = NULL;
        u_31 = t;
        if(match_cons(t, sym_Op_2))
          {
            f_32 = ATgetArgument(t, 0);
            g_32 = ATgetArgument(t, 1);
            {
              ATerm a_13 = NULL,e_13 = NULL,v_1 = NULL;
              t = SSLgetAnnotations(u_31);
              a_13 = t;
              t = g_32;
              {
                ATerm a_3 (ATerm t)
                {
                  t = pat_td_1_0(r_120, t);
                  return(t);
                }
                t = fetch_1_0(a_3, t);
                e_13 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, f_32, e_13);
                v_1 = t;
                t = SSLsetAnnotations(v_1, a_13);
              }
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                f_32 = ATgetArgument(t, 0);
                g_32 = ATgetArgument(t, 1);
                {
                  ATerm r_18 = t;
                  int u_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_13 = NULL,z_13 = NULL,x_1 = NULL;
                      t = SSLgetAnnotations(u_31);
                      w_13 = t;
                      t = g_32;
                      t = pat_td_1_0(r_120, t);
                      z_13 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, f_32, z_13);
                      x_1 = t;
                      t = SSLsetAnnotations(x_1, w_13);
                      ;
                      LocalPopChoice(u_18);
                    }
                  else
                    {
                      t = r_18;
                      {
                        ATerm q_14 = NULL,x_14 = NULL,z_1 = NULL;
                        t = SSLgetAnnotations(u_31);
                        q_14 = t;
                        t = f_32;
                        t = pat_td_1_0(r_120, t);
                        x_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, x_14, g_32);
                        z_1 = t;
                        t = SSLsetAnnotations(z_1, q_14);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    f_32 = ATgetArgument(t, 0);
                    g_32 = ATgetArgument(t, 1);
                    q_31 = ATgetArgument(t, 2);
                    {
                      ATerm b_16 = NULL,f_16 = NULL,a_2 = NULL;
                      t = SSLgetAnnotations(u_31);
                      b_16 = t;
                      t = q_31;
                      {
                        ATerm d_3 (ATerm t)
                        {
                          t = pat_td_1_0(r_120, t);
                          return(t);
                        }
                        t = fetch_1_0(d_3, t);
                        f_16 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, f_32, g_32, f_16);
                        a_2 = t;
                        t = SSLsetAnnotations(a_2, b_16);
                      }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        f_32 = ATgetArgument(t, 0);
                        g_32 = ATgetArgument(t, 1);
                        q_31 = ATgetArgument(t, 2);
                        {
                          ATerm d_17 = NULL,h_17 = NULL,b_2 = NULL;
                          t = SSLgetAnnotations(u_31);
                          d_17 = t;
                          t = q_31;
                          {
                            ATerm i_3 (ATerm t)
                            {
                              t = pat_td_1_0(r_120, t);
                              return(t);
                            }
                            t = fetch_1_0(i_3, t);
                            h_17 = t;
                            t = (ATerm) ATmakeAppl(sym_CallT_3, f_32, g_32, h_17);
                            b_2 = t;
                            t = SSLsetAnnotations(b_2, d_17);
                          }
                        }
                      }
                    else
                      {
                        ATerm x_17 = NULL,a_18 = NULL,c_2 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            f_32 = ATgetArgument(t, 0);
                            g_32 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(u_31);
                        x_17 = t;
                        t = g_32;
                        t = pat_td_1_0(r_120, t);
                        a_18 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, f_32, a_18);
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
  ATerm s_32 = NULL,t_32 = NULL;
  s_32 = t;
  if(match_cons(t, sym_Build_1))
    {
      t_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_32 = NULL,w_32 = NULL,a_33 = NULL,b_33 = NULL;
        t = s_32;
        t = new_0_0(t);
        a_33 = t;
        t = t_32;
        {
          ATerm o_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((u_32 != NULL) && (u_32 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  u_32 = ATgetArgument(t, 0);
                if(((w_32 != NULL) && (w_32 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  w_32 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, a_33);
            return(t);
          }
          t = pat_td_1_0(o_3, t);
          b_33 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_33), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_x_18, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_32)), not_null(u_32))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_33)))), (ATerm) ATmakeAppl(sym_Build_1, b_33)));
        }
        ;
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
        {
          ATerm y_18 = t;
          int z_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_33 = NULL,j_33 = NULL,k_33 = NULL;
              t = s_32;
              t = new_0_0(t);
              j_33 = t;
              t = t_32;
              {
                ATerm r_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((c_33 != NULL) && (c_33 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        c_33 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, j_33);
                  return(t);
                }
                t = pat_td_1_0(r_3, t);
                k_33 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_33), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_33), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_33)))), (ATerm) ATmakeAppl(sym_Build_1, k_33)));
              }
              ;
              LocalPopChoice(z_18);
            }
          else
            {
              t = y_18;
              {
                ATerm l_33 = NULL,m_33 = NULL,q_33 = NULL,r_33 = NULL;
                t = s_32;
                t = new_0_0(t);
                q_33 = t;
                t = t_32;
                {
                  ATerm s_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((l_33 != NULL) && (l_33 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          l_33 = ATgetArgument(t, 0);
                        if(((m_33 != NULL) && (m_33 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          m_33 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, q_33);
                    return(t);
                  }
                  t = pat_td_1_0(s_3, t);
                  r_33 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_33), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(l_33), not_null(m_33), (ATerm) ATmakeAppl(sym_Var_1, q_33))), (ATerm) ATmakeAppl(sym_Build_1, r_33)));
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
  ATerm l_35 = NULL,r_35 = NULL,s_35 = NULL;
  l_35 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_35 = ATgetFirst((ATermList) t);
      s_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,s_18 = NULL,t_18 = NULL,b_4 = NULL,o_2 = NULL;
        t = SSLgetAnnotations(l_35);
        p_18 = t;
        t = r_35;
        t = t_0(t);
        s_18 = t;
        t = (ATerm) ATinsert(CheckATermList(s_35), s_18);
        o_2 = t;
        t = SSLsetAnnotations(o_2, p_18);
        t_18 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_18 = ATgetFirst((ATermList) t);
            n_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_18);
        l_18 = t;
        t = n_18;
        {
          ATerm c_19 = t;
          int d_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(t_0, t);
              ;
              LocalPopChoice(d_19);
            }
          else
            {
              t = c_19;
            }
          o_18 = t;
          t = (ATerm) ATinsert(CheckATermList(o_18), m_18);
          b_4 = t;
          t = SSLsetAnnotations(b_4, l_18);
        }
        ;
        LocalPopChoice(b_19);
      }
    else
      {
        t = a_19;
        {
          ATerm o_19 = NULL,a_20 = NULL,g_4 = NULL;
          t = SSLgetAnnotations(l_35);
          o_19 = t;
          t = s_35;
          t = map1_1_0(t_0, t);
          a_20 = t;
          t = (ATerm) ATinsert(CheckATermList(a_20), r_35);
          g_4 = t;
          t = SSLsetAnnotations(g_4, o_19);
        }
      }
  }
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm r_38 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      r_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, r_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_g_19), term_g_19));
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm t_38 = NULL,u_38 = NULL;
  u_38 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      t_38 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, t_38, term_g_19);
    }
  else
    {
      t = u_38;
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm j_39 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      j_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, j_39, term_g_19);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm m_39 = NULL,o_39 = NULL;
  o_39 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      m_39 = ATgetArgument(t, 0);
      {
        ATerm h_19 = t;
        int i_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, m_39, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_g_19), term_g_19));
            ;
            LocalPopChoice(i_19);
          }
        else
          {
            t = h_19;
            t = o_39;
          }
      }
    }
  else
    {
      t = o_39;
    }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm k_40 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      k_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, k_40, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_g_19), term_g_19));
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL;
  n_40 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      m_40 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, m_40, term_g_19);
    }
  else
    {
      t = n_40;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm f_37 = NULL,i_37 = NULL,k_37 = NULL,l_37 = NULL,p_37 = NULL,q_37 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      p_37 = ATgetArgument(t, 0);
      q_37 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, p_37, q_37);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          p_37 = ATgetArgument(t, 0);
          t = p_37;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_37 = ATgetFirst((ATermList) t);
              i_37 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, f_37, (ATerm) ATmakeAppl(sym_LChoices_1, i_37));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_k_19;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              p_37 = ATgetArgument(t, 0);
              t = p_37;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_37 = ATgetFirst((ATermList) t);
                  i_37 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, f_37, (ATerm) ATmakeAppl(sym_Choices_1, i_37));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_k_19;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  p_37 = ATgetArgument(t, 0);
                  t = p_37;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      f_37 = ATgetFirst((ATermList) t);
                      i_37 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_37, (ATerm) ATmakeAppl(sym_Seqs_1, i_37));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_l_19;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      p_37 = ATgetArgument(t, 0);
                      q_37 = ATgetArgument(t, 1);
                      l_37 = ATgetArgument(t, 2);
                      k_37 = ATgetArgument(t, 3);
                      {
                        ATerm n_38 = NULL,q_38 = NULL;
                        t = q_37;
                        t = map1_1_0(t_3, t);
                        n_38 = t;
                        t = l_37;
                        t = map1_1_0(c_4, t);
                        q_38 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, p_37, n_38, q_38, k_37);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          p_37 = ATgetArgument(t, 0);
                          q_37 = ATgetArgument(t, 1);
                          l_37 = ATgetArgument(t, 2);
                          k_37 = ATgetArgument(t, 3);
                          {
                            ATerm m_19 = t;
                            int n_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm g_39 = NULL,i_39 = NULL;
                                t = l_37;
                                t = map1_1_0(d_4, t);
                                g_39 = t;
                                t = q_37;
                                t = map_1_0(e_4, t);
                                i_39 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, p_37, i_39, g_39, k_37);
                                ;
                                LocalPopChoice(n_19);
                              }
                            else
                              {
                                t = m_19;
                                {
                                  ATerm h_40 = NULL,j_40 = NULL;
                                  t = q_37;
                                  t = map1_1_0(h_4, t);
                                  h_40 = t;
                                  t = l_37;
                                  t = map_1_0(i_4, t);
                                  j_40 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, p_37, h_40, j_40, k_37);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              p_37 = ATgetArgument(t, 0);
                              q_37 = ATgetArgument(t, 1);
                              l_37 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, q_37, (ATerm) ATmakeAppl(sym_Op_2, term_e_18, (ATerm) ATinsert(ATinsert(ATempty, l_37), p_37)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  p_37 = ATgetArgument(t, 0);
                                  q_37 = ATgetArgument(t, 1);
                                  l_37 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, l_37)), p_37), (ATerm) ATmakeAppl(sym_Build_1, q_37)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      p_37 = ATgetArgument(t, 0);
                                      q_37 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_37, (ATerm) ATmakeAppl(sym_Match_1, q_37));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          p_37 = ATgetArgument(t, 0);
                                          q_37 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_37), q_37);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              p_37 = ATgetArgument(t, 0);
                                              q_37 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, q_37), p_37);
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
ATerm j_4 (ATerm t)
{
  ATerm p_19 = t;
  if((PushChoice() == 0))
    {
      ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL,k_4 = NULL;
      g_42 = t;
      if(match_cons(t, sym_Var_1))
        {
          f_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_42);
      e_42 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, f_42);
      k_4 = t;
      t = SSLsetAnnotations(k_4, e_42);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_19;
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_19;
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm h_42 = NULL,k_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_42 = ATgetFirst((ATermList) t);
      k_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_42, k_42);
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL,o_42 = NULL,t_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_19 = ATgetArgument(t, 0);
      if(match_cons(v_19, sym__2))
        {
          m_42 = ATgetArgument(v_19, 0);
          n_42 = ATgetArgument(v_19, 1);
        }
      else
        _fail(t);
      {
        ATerm w_19 = ATgetArgument(t, 1);
        if(match_cons(w_19, sym__2))
          {
            o_42 = ATgetArgument(w_19, 0);
            t_42 = ATgetArgument(w_19, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_42), m_42), (ATerm) ATinsert(CheckATermList(t_42), n_42));
  return(t);
}
ATerm q_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_19;
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm x_42 = NULL,z_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_42 = ATgetFirst((ATermList) t);
      z_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_42, z_42);
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm d_43 = NULL,e_43 = NULL,f_43 = NULL,j_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_19 = ATgetArgument(t, 0);
      if(match_cons(z_19, sym__2))
        {
          d_43 = ATgetArgument(z_19, 0);
          e_43 = ATgetArgument(z_19, 1);
        }
      else
        _fail(t);
      {
        ATerm b_20 = ATgetArgument(t, 1);
        if(match_cons(b_20, sym__2))
          {
            f_43 = ATgetArgument(b_20, 0);
            j_43 = ATgetArgument(b_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_43), d_43), (ATerm) ATinsert(CheckATermList(j_43), e_43));
  return(t);
}
ATerm q_8 (ATerm o_68, ATerm p_68, ATerm q_68, ATerm t)
{
  ATerm l_41 = NULL,m_41 = NULL,p_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,l_4 = NULL;
  t = q_68;
  t = fetch_1_0(j_4, t);
  t = q_68;
  t = genzip_4_0(m_4, n_4, o_4, LiftPrimArg_0_0, t);
  d_42 = t;
  if(match_cons(t, sym__2))
    {
      s_41 = ATgetArgument(t, 0);
      t_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_42);
  r_41 = t;
  t = s_41;
  t = concat_0_0(t);
  b_42 = t;
  t = t_41;
  t = genzip_4_0(q_4, r_4, y_4, _id, t);
  c_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_42, c_42);
  l_4 = t;
  t = SSLsetAnnotations(l_4, r_41);
  if(match_cons(t, sym__2))
    {
      l_41 = ATgetArgument(t, 0);
      {
        ATerm c_20 = ATgetArgument(t, 1);
        if(match_cons(c_20, sym__2))
          {
            m_41 = ATgetArgument(c_20, 0);
            p_41 = ATgetArgument(c_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, l_41, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, m_41), (ATerm) ATmakeAppl(sym_CallT_3, o_68, p_68, p_41)));
  return(t);
}
ATerm e_44 (ATerm t_43, ATerm t)
{
  ATerm v_43 = NULL;
  t = t_43;
  {
    ATerm d_20 = t;
    if((PushChoice() == 0))
      {
        ATerm w_43 = NULL,x_43 = NULL,y_43 = NULL,p_4 = NULL;
        y_43 = t;
        if(match_cons(t, sym_Var_1))
          {
            x_43 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_43);
        w_43 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, x_43);
        p_4 = t;
        t = SSLsetAnnotations(p_4, w_43);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_20;
      }
    t = new_0_0(t);
    v_43 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, v_43), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_43), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_43)))), (ATerm) ATmakeAppl(sym_Var_1, v_43)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm z_43 = NULL,c_44 = NULL;
  z_43 = t;
  if(match_cons(t, sym_Var_1))
    {
      c_44 = ATgetArgument(t, 0);
      {
        ATerm e_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_44(z_43, t);
            ;
            LocalPopChoice(k_20);
          }
        else
          {
            t = e_20;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_l_19, (ATerm) ATmakeAppl(sym_Var_1, c_44)));
          }
      }
    }
  else
    {
      t = e_44(z_43, t);
    }
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm n_20 = t;
  if((PushChoice() == 0))
    {
      ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,e_5 = NULL;
      n_21 = t;
      if(match_cons(t, sym_Var_1))
        {
          m_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_21);
      l_21 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, m_21);
      e_5 = t;
      t = SSLsetAnnotations(e_5, l_21);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_20;
    }
  return(t);
}
ATerm a_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_19;
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_21 = ATgetFirst((ATermList) t);
      p_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_21, p_21);
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm s_21 = NULL,u_21 = NULL,v_21 = NULL,y_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_20 = ATgetArgument(t, 0);
      if(match_cons(o_20, sym__2))
        {
          s_21 = ATgetArgument(o_20, 0);
          u_21 = ATgetArgument(o_20, 1);
        }
      else
        _fail(t);
      {
        ATerm p_20 = ATgetArgument(t, 1);
        if(match_cons(p_20, sym__2))
          {
            v_21 = ATgetArgument(p_20, 0);
            y_21 = ATgetArgument(p_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_21), s_21), (ATerm) ATinsert(CheckATermList(y_21), u_21));
  return(t);
}
ATerm f_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_19;
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_22 = ATgetFirst((ATermList) t);
      c_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_22, c_22);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,j_22 = NULL,k_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_20 = ATgetArgument(t, 0);
      if(match_cons(q_20, sym__2))
        {
          d_22 = ATgetArgument(q_20, 0);
          e_22 = ATgetArgument(q_20, 1);
        }
      else
        _fail(t);
      {
        ATerm r_20 = ATgetArgument(t, 1);
        if(match_cons(r_20, sym__2))
          {
            j_22 = ATgetArgument(r_20, 0);
            k_22 = ATgetArgument(r_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_22), d_22), (ATerm) ATinsert(CheckATermList(k_22), e_22));
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm s_20 = t;
  if((PushChoice() == 0))
    {
      ATerm e_24 = NULL,f_24 = NULL,h_24 = NULL,y_5 = NULL;
      h_24 = t;
      if(match_cons(t, sym_Var_1))
        {
          f_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_24);
      e_24 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, f_24);
      y_5 = t;
      t = SSLsetAnnotations(y_5, e_24);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_20;
    }
  return(t);
}
ATerm m_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_19;
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_24 = ATgetFirst((ATermList) t);
      m_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_24, m_24);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm n_24 = NULL,s_24 = NULL,t_24 = NULL,z_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_20 = ATgetArgument(t, 0);
      if(match_cons(t_20, sym__2))
        {
          n_24 = ATgetArgument(t_20, 0);
          s_24 = ATgetArgument(t_20, 1);
        }
      else
        _fail(t);
      {
        ATerm q_21 = ATgetArgument(t, 1);
        if(match_cons(q_21, sym__2))
          {
            t_24 = ATgetArgument(q_21, 0);
            z_24 = ATgetArgument(q_21, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_24), n_24), (ATerm) ATinsert(CheckATermList(z_24), s_24));
  return(t);
}
ATerm r_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_u_19;
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_25 = ATgetFirst((ATermList) t);
      c_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_25, c_25);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm d_25 = NULL,f_25 = NULL,g_25 = NULL,l_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_21 = ATgetArgument(t, 0);
      if(match_cons(t_21, sym__2))
        {
          d_25 = ATgetArgument(t_21, 0);
          f_25 = ATgetArgument(t_21, 1);
        }
      else
        _fail(t);
      {
        ATerm l_22 = ATgetArgument(t, 1);
        if(match_cons(l_22, sym__2))
          {
            g_25 = ATgetArgument(l_22, 0);
            l_25 = ATgetArgument(l_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_25), d_25), (ATerm) ATinsert(CheckATermList(l_25), f_25));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL;
  g_50 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      h_50 = ATgetArgument(t, 0);
      i_50 = ATgetArgument(t, 1);
      f_50 = ATgetArgument(t, 2);
      {
        ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,k_21 = NULL,j_5 = NULL;
        t = f_50;
        t = fetch_1_0(z_4, t);
        t = f_50;
        t = genzip_4_0(a_5, b_5, d_5, LiftPrimArg_0_0, t);
        k_21 = t;
        if(match_cons(t, sym__2))
          {
            y_20 = ATgetArgument(t, 0);
            z_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_21);
        x_20 = t;
        t = y_20;
        t = concat_0_0(t);
        a_21 = t;
        t = z_20;
        t = genzip_4_0(f_5, g_5, k_5, _id, t);
        b_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_21, b_21);
        j_5 = t;
        t = SSLsetAnnotations(j_5, x_20);
        if(match_cons(t, sym__2))
          {
            u_20 = ATgetArgument(t, 0);
            {
              ATerm m_22 = ATgetArgument(t, 1);
              if(match_cons(m_22, sym__2))
                {
                  v_20 = ATgetArgument(m_22, 0);
                  w_20 = ATgetArgument(m_22, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, u_20, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, v_20), (ATerm) ATmakeAppl(sym_PrimT_3, h_50, i_50, w_20)));
      }
    }
  else
    {
      ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,b_24 = NULL,c_24 = NULL,z_5 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          h_50 = ATgetArgument(t, 0);
          i_50 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_50;
      t = fetch_1_0(l_5, t);
      t = i_50;
      t = genzip_4_0(m_5, n_5, o_5, LiftPrimArg_0_0, t);
      c_24 = t;
      if(match_cons(t, sym__2))
        {
          v_23 = ATgetArgument(t, 0);
          w_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_24);
      s_23 = t;
      t = v_23;
      t = concat_0_0(t);
      x_23 = t;
      t = w_23;
      t = genzip_4_0(r_5, s_5, t_5, _id, t);
      b_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_23, b_24);
      z_5 = t;
      t = SSLsetAnnotations(z_5, s_23);
      if(match_cons(t, sym__2))
        {
          p_23 = ATgetArgument(t, 0);
          {
            ATerm r_22 = ATgetArgument(t, 1);
            if(match_cons(r_22, sym__2))
              {
                q_23 = ATgetArgument(r_22, 0);
                r_23 = ATgetArgument(r_22, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, p_23, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, q_23), (ATerm) ATmakeAppl(sym_PrimT_3, h_50, (ATerm)ATempty, r_23)));
    }
  return(t);
}
ATerm repeat_1_0 (ATerm w_107 (ATerm), ATerm t)
{
  ATerm o_50 (ATerm t)
  {
    ATerm x_22 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_107(t);
        t = o_50(t);
        ;
        LocalPopChoice(c_23);
      }
    else
      {
        t = x_22;
      }
    return(t);
  }
  t = o_50(t);
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL,d_51 = NULL;
  d_51 = t;
  if(match_cons(t, sym_Con_3))
    {
      a_51 = ATgetArgument(t, 0);
      b_51 = ATgetArgument(t, 1);
      c_51 = ATgetArgument(t, 2);
      {
        ATerm c_26 = NULL,h_6 = NULL;
        t = SSLgetAnnotations(d_51);
        c_26 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, a_51, b_51, c_51);
        h_6 = t;
        t = SSLsetAnnotations(h_6, c_26);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = d_51;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm d_23 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(u_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_23;
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm j_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL;
  o_52 = t;
  if(match_cons(t, sym_Con_3))
    {
      p_52 = ATgetArgument(t, 0);
      q_52 = ATgetArgument(t, 1);
      j_52 = ATgetArgument(t, 2);
      {
        ATerm x_26 = NULL,j_6 = NULL;
        t = SSLgetAnnotations(o_52);
        x_26 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, p_52, q_52, j_52);
        j_6 = t;
        t = SSLsetAnnotations(j_6, x_26);
      }
    }
  else
    {
      ATerm n_27 = NULL,l_6 = NULL;
      if(match_cons(t, sym_App_2))
        {
          p_52 = ATgetArgument(t, 0);
          q_52 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_52);
      n_27 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, p_52, q_52);
      l_6 = t;
      t = SSLsetAnnotations(l_6, n_27);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm g_23 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(v_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_23;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm w_52 = NULL,d_53 = NULL,e_53 = NULL,f_53 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      w_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_52;
  if(match_cons(t, sym_StratRule_3))
    {
      d_53 = ATgetArgument(t, 0);
      e_53 = ATgetArgument(t, 1);
      f_53 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_53), (ATerm) ATmakeAppl(sym_Where_1, f_53)), d_53));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          d_53 = ATgetArgument(t, 0);
          e_53 = ATgetArgument(t, 1);
          f_53 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = d_53;
      t = pureterm_0_0(t);
      t = e_53;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, e_53)), (ATerm) ATmakeAppl(sym_Where_1, f_53)), (ATerm) ATmakeAppl(sym_Match_1, d_53)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm i_92 (ATerm), ATerm t)
{
  ATerm m_53 (ATerm t)
  {
    ATerm i_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_92(t);
        ;
        LocalPopChoice(l_23);
      }
    else
      {
        t = i_23;
        t = SRTS_one(m_53, t);
      }
    return(t);
  }
  t = m_53(t);
  return(t);
}
ATerm t_8 (ATerm d_64, ATerm e_64, ATerm f_64, ATerm t)
{
  ATerm n_53 = NULL,o_53 = NULL,q_53 = NULL,r_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL;
  t = new_0_0(t);
  v_53 = t;
  t = d_64;
  {
    ATerm x_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm m_23 = ATgetArgument(t, 0);
          if(match_cons(m_23, sym_Var_1))
            {
              if(((r_53 != NULL) && (r_53 != ATgetArgument(m_23, 0))))
                _fail(ATgetArgument(m_23, 0));
              else
                r_53 = ATgetArgument(m_23, 0);
            }
          else
            _fail(t);
          if(((o_53 != NULL) && (o_53 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            o_53 = ATgetArgument(t, 1);
          {
            ATerm n_23 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, r_53);
      return(t);
    }
    t = oncetd_1_0(x_5, t);
    w_53 = t;
    t = e_64;
    {
      ATerm a_6 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm o_23 = ATgetArgument(t, 0);
            if(match_cons(o_23, sym_Var_1))
              {
                if(((r_53 != NULL) && (r_53 != ATgetArgument(o_23, 0))))
                  _fail(ATgetArgument(o_23, 0));
                else
                  r_53 = ATgetArgument(o_23, 0);
              }
            else
              _fail(t);
            if(((q_53 != NULL) && (q_53 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              q_53 = ATgetArgument(t, 1);
            {
              ATerm t_23 = ATgetArgument(t, 2);
              if(match_cons(t_23, sym_CallT_3))
                {
                  if(((n_53 != NULL) && (n_53 != ATgetArgument(t_23, 0))))
                    _fail(ATgetArgument(t_23, 0));
                  else
                    n_53 = ATgetArgument(t_23, 0);
                  {
                    ATerm u_23 = ATgetArgument(t_23, 1);
                    if(((ATgetType(u_23) != AT_LIST) || !(ATisEmpty(u_23))))
                      _fail(t);
                  }
                  {
                    ATerm y_23 = ATgetArgument(t_23, 2);
                    if(((ATgetType(y_23) != AT_LIST) || !(ATisEmpty(y_23))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, v_53);
        return(t);
      }
      t = oncetd_1_0(a_6, t);
      x_53 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_53), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, w_53, x_53, (ATerm) ATmakeAppl(sym_Seq_2, f_64, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(n_53), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(o_53), not_null(q_53), term_l_19))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(r_53)), (ATerm) ATmakeAppl(sym_Var_1, v_53))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm a_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_24 = t;
      int w_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL,u_54 = NULL,v_54 = NULL,w_54 = NULL;
          u_54 = t;
          if(match_cons(t, sym_SRule_1))
            {
              v_54 = ATgetArgument(t, 0);
              t = v_54;
              if(match_cons(t, sym_Rule_3))
                {
                  p_54 = ATgetArgument(t, 0);
                  q_54 = ATgetArgument(t, 1);
                  r_54 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = u_54;
              t = t_8(p_54, q_54, r_54, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm i_28 = NULL,o_28 = NULL,o_6 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  v_54 = ATgetArgument(t, 0);
                  w_54 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(u_54);
              i_28 = t;
              t = w_54;
              t = desugarRule_0_0(t);
              o_28 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, v_54, o_28);
              o_6 = t;
              t = SSLsetAnnotations(o_6, i_28);
            }
          ;
          LocalPopChoice(w_24);
        }
      else
        {
          t = k_24;
          t = RtoS_0_0(t);
        }
      ;
      LocalPopChoice(j_24);
    }
  else
    {
      t = a_24;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm e_91 (ATerm), ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    t = topdown_1_0(e_91, t);
    return(t);
  }
  t = e_91(t);
  t = SRTS_all(b_6, t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm a_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(m_25);
    }
  else
    {
      t = a_25;
    }
  t = repeat_1_0(d_6, t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm n_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
      LocalPopChoice(p_25);
    }
  else
    {
      t = n_25;
      {
        ATerm r_25 = t;
        int t_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL;
            x_55 = t;
            if(match_cons(t, sym_CallT_3))
              {
                y_55 = ATgetArgument(t, 0);
                z_55 = ATgetArgument(t, 1);
                a_56 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = x_55;
            t = q_8(y_55, z_55, a_56, t);
            ;
            LocalPopChoice(t_25);
          }
        else
          {
            t = r_25;
            {
              ATerm u_25 = t;
              int v_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(v_25);
                }
              else
                {
                  t = u_25;
                  {
                    ATerm x_25 = t;
                    int y_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(y_25);
                      }
                    else
                      {
                        t = x_25;
                        {
                          ATerm b_26 = t;
                          int d_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm e_26 = t;
                              int g_26 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm g_56 = NULL,h_56 = NULL,i_56 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      g_56 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = g_56;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      h_56 = ATgetArgument(t, 0);
                                      {
                                        ATerm h_26 = t;
                                        int k_26 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm k_56 = NULL,s_56 = NULL;
                                            t = g_56;
                                            {
                                              ATerm f_6 (ATerm t)
                                              {
                                                if(match_cons(t, sym_RootApp_1))
                                                  {
                                                    ATerm l_26 = ATgetArgument(t, 0);
                                                    if(match_cons(l_26, sym_Match_1))
                                                      {
                                                        if(((k_56 != NULL) && (k_56 != ATgetArgument(l_26, 0))))
                                                          _fail(ATgetArgument(l_26, 0));
                                                        else
                                                          k_56 = ATgetArgument(l_26, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = k_56;
                                                return(t);
                                              }
                                              t = pat_td_1_0(f_6, t);
                                              s_56 = t;
                                              t = (ATerm) ATmakeAppl(sym_Match_1, s_56);
                                            }
                                            ;
                                            LocalPopChoice(k_26);
                                          }
                                        else
                                          {
                                            t = h_26;
                                            t = h_56;
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          h_56 = ATgetArgument(t, 0);
                                          i_56 = ATgetArgument(t, 1);
                                          {
                                            ATerm m_26 = t;
                                            int n_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm d_57 = NULL,f_57 = NULL;
                                                t = g_56;
                                                {
                                                  ATerm i_6 (ATerm t)
                                                  {
                                                    if(match_cons(t, sym_RootApp_1))
                                                      {
                                                        ATerm o_26 = ATgetArgument(t, 0);
                                                        if(match_cons(o_26, sym_Match_1))
                                                          {
                                                            if(((d_57 != NULL) && (d_57 != ATgetArgument(o_26, 0))))
                                                              _fail(ATgetArgument(o_26, 0));
                                                            else
                                                              d_57 = ATgetArgument(o_26, 0);
                                                          }
                                                        else
                                                          _fail(t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = d_57;
                                                    return(t);
                                                  }
                                                  t = pat_td_1_0(i_6, t);
                                                  f_57 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, f_57);
                                                }
                                                ;
                                                LocalPopChoice(n_26);
                                              }
                                            else
                                              {
                                                t = m_26;
                                                t = (ATerm) ATmakeAppl(sym_BA_2, h_56, i_56);
                                              }
                                          }
                                        }
                                      else
                                        {
                                          ATerm l_57 = NULL,m_57 = NULL;
                                          t = g_56;
                                          {
                                            ATerm k_6 (ATerm t)
                                            {
                                              if(match_cons(t, sym_RootApp_1))
                                                {
                                                  ATerm p_26 = ATgetArgument(t, 0);
                                                  if(match_cons(p_26, sym_Match_1))
                                                    {
                                                      if(((l_57 != NULL) && (l_57 != ATgetArgument(p_26, 0))))
                                                        _fail(ATgetArgument(p_26, 0));
                                                      else
                                                        l_57 = ATgetArgument(p_26, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                _fail(t);
                                              t = l_57;
                                              return(t);
                                            }
                                            t = pat_td_1_0(k_6, t);
                                            m_57 = t;
                                            t = (ATerm) ATmakeAppl(sym_Match_1, m_57);
                                          }
                                        }
                                    }
                                  ;
                                  LocalPopChoice(g_26);
                                }
                              else
                                {
                                  t = e_26;
                                  t = Mapp2_0_0(t);
                                }
                              ;
                              LocalPopChoice(d_26);
                            }
                          else
                            {
                              t = b_26;
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
ATerm m_6 (ATerm t)
{
  ATerm y_57 = NULL,z_57 = NULL;
  z_57 = t;
  t = SSL_explode_term(z_57);
  if(match_cons(t, sym__2))
    {
      ATerm q_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_26 = ATgetArgument(t, 1);
        if(((ATgetType(r_26) == AT_LIST) && !(ATisEmpty(r_26))))
          {
            y_57 = ATgetFirst((ATermList) r_26);
            {
              ATerm w_26 = (ATerm) ATgetNext((ATermList) r_26);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_57;
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm y_28 = NULL,a_29 = NULL,b_29 = NULL;
  b_29 = t;
  t = SSL_explode_term(b_29);
  if(match_cons(t, sym__2))
    {
      ATerm y_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_26 = ATgetArgument(t, 1);
        if(((ATgetType(z_26) == AT_LIST) && !(ATisEmpty(z_26))))
          {
            ATerm a_27 = ATgetFirst((ATermList) z_26);
            y_28 = (ATerm) ATgetNext((ATermList) z_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_e_18;
  a_29 = t;
  t = SSL_mkterm(a_29, y_28);
  return(t);
}
ATerm p_6 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm g_95 (ATerm), ATerm t)
{
  ATerm r_57 = NULL,s_57 = NULL;
  ATerm b_58 (ATerm t)
  {
    ATerm b_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL;
        t_57 = t;
        t = map_1_0(m_6, t);
        t = g_95(t);
        u_57 = t;
        t = t_57;
        t = map_1_0(n_6, t);
        t = b_58(t);
        v_57 = t;
        t = (ATerm) ATinsert(CheckATermList(v_57), u_57);
        ;
        LocalPopChoice(c_27);
      }
    else
      {
        t = b_27;
        t = map_1_0(p_6, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = b_58(t);
  s_57 = t;
  t = term_e_18;
  r_57 = t;
  t = SSL_mkterm(r_57, s_57);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm c_58 = NULL;
  c_58 = t;
  {
    ATerm d_27 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_58 = NULL,k_58 = NULL,l_58 = NULL;
        t = c_58;
        t = new_0_0(t);
        i_58 = t;
        t = new_0_0(t);
        k_58 = t;
        t = new_0_0(t);
        l_58 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_58), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_e_18, (ATerm) ATinsert(ATinsert(ATempty, c_58), (ATerm) ATmakeAppl(sym_Var_1, k_58))), (ATerm) ATmakeAppl(sym_Var_1, l_58)), (ATerm)ATmakeAppl(sym_VarDec_2, i_58, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_g_19), term_g_19)), k_58, (ATerm)ATmakeAppl(sym_Var_1, k_58), l_58, (ATerm) ATmakeAppl(sym_Var_1, l_58));
        ;
        LocalPopChoice(e_27);
      }
    else
      {
        t = d_27;
        {
          ATerm o_58 = NULL,p_58 = NULL,q_58 = NULL;
          t = c_58;
          t = new_0_0(t);
          o_58 = t;
          t = new_0_0(t);
          p_58 = t;
          t = new_0_0(t);
          q_58 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_58), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_e_18, (ATerm) ATinsert(ATinsert(ATempty, c_58), (ATerm) ATmakeAppl(sym_Var_1, p_58))), (ATerm) ATmakeAppl(sym_Var_1, q_58)), (ATerm)ATmakeAppl(sym_VarDec_2, o_58, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_g_19), term_g_19)), p_58, (ATerm)ATmakeAppl(sym_Var_1, p_58), q_58, (ATerm) ATmakeAppl(sym_Var_1, q_58));
        }
      }
  }
  return(t);
}
ATerm u_8 (ATerm v_33, ATerm w_33, ATerm t)
{
  ATerm f_27 = t;
  int g_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(v_33, w_33);
      ;
      LocalPopChoice(g_27);
    }
  else
    {
      t = f_27;
      t = SSL_subtr(v_33, w_33);
    }
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm r_58 = NULL,u_58 = NULL;
  if(match_cons(t, sym__2))
    {
      r_58 = ATgetArgument(t, 0);
      u_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, r_58, u_58, (ATerm) ATempty);
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm v_58 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm h_27 = ATgetArgument(t, 0);
      if(((ATgetType(h_27) != AT_INT) || (ATgetInt((ATermInt) h_27) != 0)))
        _fail(t);
      {
        ATerm i_27 = ATgetArgument(t, 1);
      }
      v_58 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_58;
  return(t);
}
ATerm copy_1_0 (ATerm l_102 (ATerm), ATerm t)
{
  ATerm u_6 (ATerm t)
  {
    ATerm w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL;
    if(match_cons(t, sym__3))
      {
        w_58 = ATgetArgument(t, 0);
        x_58 = ATgetArgument(t, 1);
        y_58 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, w_58, term_a_15);
    t = geq_0_0(t);
    t = term_a_15;
    b_59 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_58, term_a_15);
    t = u_8(w_58, b_59, t);
    z_58 = t;
    t = x_58;
    t = l_102(t);
    a_59 = t;
    t = (ATerm) ATmakeAppl(sym__3, z_58, x_58, (ATerm) ATinsert(CheckATermList(y_58), a_59));
    return(t);
  }
  t = for_3_0(r_6, s_6, u_6, t);
  return(t);
}
ATerm v_8 (ATerm n_46, ATerm o_46, ATerm t)
{
  ATerm c_59 = NULL,d_59 = NULL,e_59 = NULL;
  t = new_0_0(t);
  c_59 = t;
  t = new_0_0(t);
  d_59 = t;
  t = new_0_0(t);
  e_59 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, c_59), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_e_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, n_46)), (ATerm) ATmakeAppl(sym_Var_1, d_59))), (ATerm) ATmakeAppl(sym_Op_2, term_e_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, o_46)), (ATerm) ATmakeAppl(sym_Var_1, e_59)))), (ATerm)ATmakeAppl(sym_VarDec_2, c_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_g_19), term_g_19)), d_59, (ATerm)ATmakeAppl(sym_Var_1, d_59), e_59, (ATerm) ATmakeAppl(sym_Var_1, e_59));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm i_59 = NULL,j_59 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_59 = ATgetFirst((ATermList) t);
      j_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_59;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_59;
    }
  else
    {
      t = j_59;
      t = last_0_0(t);
    }
  return(t);
}
ATerm x_63 (ATerm z_59, ATerm c_60, ATerm d_60, ATerm e_60, ATerm t)
{
  ATerm p_60 = NULL,q_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL,j_61 = NULL,k_61 = NULL;
  t = term_a_15;
  k_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_60, term_a_15);
  t = w_9(c_60, k_61, t);
  j_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_61, term_v_14);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_60 = ATgetFirst((ATermList) t);
      y_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_60;
  t = last_0_0(t);
  p_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_60), q_60), y_60);
  t = genzip_4_0(v_6, w_6, y_6, a_7, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      z_60 = ATgetArgument(t, 0);
      a_61 = ATgetArgument(t, 1);
      b_61 = ATgetArgument(t, 2);
      e_61 = ATgetArgument(t, 3);
      f_61 = ATgetArgument(t, 4);
      g_61 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, f_61), b_61), y_60);
  t = concat_0_0(t);
  h_61 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, z_59, term_j_27), a_61, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(h_61), q_60), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_e_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, q_60)), (ATerm) ATmakeAppl(sym_Op_2, z_59, e_61))), (ATerm)ATmakeAppl(sym_Op_2, term_e_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, p_60)), (ATerm) ATmakeAppl(sym_Op_2, z_59, g_61))), (ATerm) ATmakeAppl(sym_Seqs_1, z_60)))));
  return(t);
}
ATerm y_63 (ATerm a_62, ATerm b_62, ATerm c_62, ATerm e_62, ATerm t)
{
  ATerm j_62 = NULL,k_62 = NULL,r_62 = NULL,t_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,a_63 = NULL;
  t = e_62;
  t = new_0_0(t);
  j_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_62, (ATerm) ATmakeAppl(sym_Var_1, j_62));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      k_62 = ATgetArgument(t, 0);
      r_62 = ATgetArgument(t, 1);
      t_62 = ATgetArgument(t, 2);
      w_62 = ATgetArgument(t, 3);
      x_62 = ATgetArgument(t, 4);
      y_62 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_62, x_62);
  t = conc_0_0(t);
  a_63 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, a_62, term_k_27), r_62, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(a_63), j_62), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_e_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, j_62)), (ATerm) ATmakeAppl(sym_Op_2, a_62, w_62))), (ATerm)ATmakeAppl(sym_Op_2, a_62, y_62), (ATerm) ATmakeAppl(sym_Seqs_1, k_62)))));
  return(t);
}
ATerm v_6 (ATerm t)
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
ATerm w_6 (ATerm t)
{
  ATerm l_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_27 = ATgetArgument(t, 0);
      if(((ATgetType(o_27) == AT_LIST) && !(ATisEmpty(o_27))))
        {
          l_61 = ATgetFirst((ATermList) o_27);
          p_61 = (ATerm) ATgetNext((ATermList) o_27);
        }
      else
        _fail(t);
      {
        ATerm p_27 = ATgetArgument(t, 1);
        if(((ATgetType(p_27) == AT_LIST) && !(ATisEmpty(p_27))))
          {
            q_61 = ATgetFirst((ATermList) p_27);
            r_61 = (ATerm) ATgetNext((ATermList) p_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_61, q_61), (ATerm) ATmakeAppl(sym__2, p_61, r_61));
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm v_61 = NULL,w_61 = NULL;
  if(match_cons(t, sym__2))
    {
      v_61 = ATgetArgument(t, 0);
      w_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_61), v_61);
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm x_61 = NULL,y_61 = NULL;
  if(match_cons(t, sym__2))
    {
      x_61 = ATgetArgument(t, 0);
      y_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_8(x_61, y_61, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm c_63 = NULL,e_63 = NULL,f_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL;
  c_63 = t;
  if(match_cons(t, sym__3))
    {
      e_63 = ATgetArgument(t, 0);
      f_63 = ATgetArgument(t, 1);
      s_63 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = f_63;
  if(match_string(t, "T"))
    {
      t = s_63;
      if(match_cons(t, sym__2))
        {
          t_63 = ATgetArgument(t, 0);
          u_63 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_63;
      if(match_int(t, 0))
        {
          ATerm q_27 = t;
          int r_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_63(e_63, t_63, u_63, c_63, t);
              ;
              LocalPopChoice(r_27);
            }
          else
            {
              t = q_27;
              {
                ATerm w_63 = NULL;
                t = c_63;
                t = new_0_0(t);
                w_63 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, e_63, term_j_27), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_63), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_e_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, w_63)), (ATerm) ATmakeAppl(sym_Op_2, e_63, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_e_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, w_63)), (ATerm) ATmakeAppl(sym_Op_2, e_63, (ATerm) ATempty))), term_l_19))));
              }
            }
        }
      else
        {
          t = x_63(e_63, t_63, u_63, c_63, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = s_63;
      if(match_cons(t, sym__2))
        {
          t_63 = ATgetArgument(t, 0);
          u_63 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_63(e_63, t_63, u_63, c_63, t);
    }
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = term_k_19;
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,l_12 = NULL;
  w_16 = t;
  t = SSL_explode_term(w_16);
  if(match_cons(t, sym__2))
    {
      ATerm s_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_27 = ATgetArgument(t, 1);
        if(((ATgetType(t_27) == AT_LIST) && !(ATisEmpty(t_27))))
          {
            x_16 = ATgetFirst((ATermList) t_27);
            {
              ATerm u_27 = (ATerm) ATgetNext((ATermList) t_27);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(w_16);
  if(match_cons(t, sym__2))
    {
      ATerm v_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_27 = ATgetArgument(t, 1);
        if(((ATgetType(w_27) == AT_LIST) && !(ATisEmpty(w_27))))
          {
            ATerm x_27 = ATgetFirst((ATermList) w_27);
            ATerm y_27 = (ATerm) ATgetNext((ATermList) w_27);
            if(((ATgetType(y_27) == AT_LIST) && !(ATisEmpty(y_27))))
              {
                l_12 = ATgetFirst((ATermList) y_27);
                {
                  ATerm z_27 = (ATerm) ATgetNext((ATermList) y_27);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, x_16, l_12);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(c_7, d_7, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,r_17 = NULL,u_17 = NULL,w_17 = NULL;
  m_17 = t;
  if(match_cons(t, sym__2))
    {
      n_17 = ATgetArgument(t, 0);
      r_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_17;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_17 = ATgetFirst((ATermList) t);
      w_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_17;
  if(match_cons(t, sym__2))
    {
      k_17 = ATgetArgument(t, 0);
      l_17 = ATgetArgument(t, 1);
      {
        ATerm a_28 = t;
        int b_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_17;
            if((n_17 != t))
              {
                _fail(t);
              }
            t = l_17;
            ;
            LocalPopChoice(b_28);
          }
        else
          {
            t = a_28;
            t = (ATerm) ATmakeAppl(sym__2, n_17, w_17);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, n_17, w_17);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm w_92 (ATerm), ATerm t)
{
  ATerm j_19 (ATerm t)
  {
    ATerm c_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_92(t);
        ;
        LocalPopChoice(d_28);
      }
    else
      {
        t = c_28;
        t = SRTS_all(j_19, t);
      }
    return(t);
  }
  t = j_19(t);
  return(t);
}
ATerm e_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_28 = ATgetArgument(t, 0);
      if(((ATgetType(e_28) != AT_LIST) || !(ATisEmpty(e_28))))
        _fail(t);
      {
        ATerm f_28 = ATgetArgument(t, 1);
        if(((ATgetType(f_28) != AT_LIST) || !(ATisEmpty(f_28))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm y_19 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_28 = ATgetArgument(t, 0);
      if(((ATgetType(g_28) == AT_LIST) && !(ATisEmpty(g_28))))
        {
          y_19 = ATgetFirst((ATermList) g_28);
          f_20 = (ATerm) ATgetNext((ATermList) g_28);
        }
      else
        _fail(t);
      {
        ATerm h_28 = ATgetArgument(t, 1);
        if(((ATgetType(h_28) == AT_LIST) && !(ATisEmpty(h_28))))
          {
            g_20 = ATgetFirst((ATermList) h_28);
            h_20 = (ATerm) ATgetNext((ATermList) h_28);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_19, g_20), (ATerm) ATmakeAppl(sym__2, f_20, h_20));
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL;
  if(match_cons(t, sym__2))
    {
      i_20 = ATgetArgument(t, 0);
      j_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_20), i_20);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL;
  q_19 = t;
  {
    ATerm j_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_28 = ATgetArgument(t, 0);
            ATerm m_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(k_28);
        t = q_19;
      }
    else
      {
        t = j_28;
        {
          ATerm x_19 = NULL;
          if(match_cons(t, sym__3))
            {
              r_19 = ATgetArgument(t, 0);
              s_19 = ATgetArgument(t, 1);
              t_19 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, r_19, s_19);
          t = genzip_4_0(e_7, g_7, h_7, _id, t);
          x_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_19, t_19);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL;
  ATerm j_7 (ATerm t)
  {
    ATerm o_12 = NULL;
    t = n_90(t);
    o_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_12, not_null(m_20));
    t = lookup_0_0(t);
    t = o_90(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((m_20 != NULL) && (m_20 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_20 = ATgetArgument(t, 0);
      l_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_20;
  t = alltd_1_0(j_7, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,z_21 = NULL,a_22 = NULL,f_22 = NULL,q_6 = NULL;
  f_22 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      x_21 = ATgetArgument(t, 0);
      z_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_22);
  w_21 = t;
  t = x_21;
  t = new_0_0(t);
  a_22 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, a_22, z_21);
  q_6 = t;
  t = SSLsetAnnotations(q_6, w_21);
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm i_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,t_6 = NULL;
  q_22 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      n_22 = ATgetArgument(t, 0);
      o_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_22);
  i_22 = t;
  t = n_22;
  t = new_0_0(t);
  p_22 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, p_22, o_22);
  t_6 = t;
  t = SSLsetAnnotations(t_6, i_22);
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm s_22 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      s_22 = ATgetArgument(t, 0);
      {
        ATerm n_28 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, s_22), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm t_22 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      t_22 = ATgetArgument(t, 0);
      {
        ATerm p_28 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, t_22);
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm b_23 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      b_23 = ATgetArgument(t, 0);
      {
        ATerm q_28 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = b_23;
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm e_23 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      e_23 = ATgetArgument(t, 0);
      {
        ATerm r_28 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = e_23;
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm f_23 = NULL,h_23 = NULL,j_23 = NULL,k_23 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      h_23 = ATgetArgument(t, 0);
      k_23 = ATgetArgument(t, 1);
      f_23 = ATgetArgument(t, 2);
      t = h_23;
      if(match_cons(t, sym_SVar_1))
        {
          j_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_23;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_23;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_23;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          h_23 = ATgetArgument(t, 0);
          k_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_23;
      if(match_cons(t, sym_SVar_1))
        {
          j_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_23;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_23;
    }
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm z_23 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_23;
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,r_21 = NULL;
  h_21 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_28 = ATgetFirst((ATermList) t);
      if(match_cons(s_28, sym_SDefT_4))
        {
          c_21 = ATgetArgument(s_28, 0);
          d_21 = ATgetArgument(s_28, 1);
          e_21 = ATgetArgument(s_28, 2);
          {
            ATerm u_28 = ATgetArgument(s_28, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm t_28 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = d_21;
  t = map_1_0(l_7, t);
  f_21 = t;
  t = e_21;
  t = map_1_0(m_7, t);
  g_21 = t;
  t = f_21;
  t = map_1_0(p_7, t);
  j_21 = t;
  t = g_21;
  t = map_1_0(r_7, t);
  i_21 = t;
  t = h_21;
  {
    ATerm s_7 (ATerm t)
    {
      ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm v_28 = ATgetArgument(t, 0);
          u_22 = ATgetArgument(t, 1);
          v_22 = ATgetArgument(t, 2);
          w_22 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = v_22;
      t = map_1_0(u_7, t);
      y_22 = t;
      t = u_22;
      t = map_1_0(v_7, t);
      a_23 = t;
      t = (ATerm) ATmakeAppl(sym__3, a_23, j_21, w_22);
      t = substitute_2_0(b_8, _id, t);
      z_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, y_22, i_21, z_22);
      t = substitute_2_0(c_8, _id, t);
      return(t);
    }
    t = map_1_0(s_7, t);
    t = choices_0_0(t);
    r_21 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, c_21, f_21, g_21, r_21);
  }
  return(t);
}
ATerm r_67 (ATerm q_64, ATerm r_64, ATerm s_64, ATerm t_64, ATerm t)
{
  ATerm z_64 = NULL,b_66 = NULL,c_66 = NULL,d_66 = NULL,x_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_64, r_64);
  t = Definitions_0_0(t);
  z_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_64, s_64);
  d_66 = t;
  if(match_cons(t, sym__2))
    {
      ATerm w_28 = ATgetArgument(t, 0);
      ATerm x_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_66);
  b_66 = t;
  t = z_64;
  {
    ATerm z_28 = t;
    int c_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_66 = NULL,i_66 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_66 = ATgetFirst((ATermList) t);
            i_66 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_66;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_66;
        ;
        LocalPopChoice(c_29);
      }
    else
      {
        t = z_28;
        t = JoinDefs2_0_0(t);
      }
    c_66 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_66, s_64);
    x_6 = t;
    t = SSLsetAnnotations(x_6, b_66);
  }
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm k_66 = NULL,l_66 = NULL,m_66 = NULL,s_66 = NULL,t_66 = NULL,u_66 = NULL,v_66 = NULL;
  m_66 = t;
  if(match_cons(t, sym__2))
    {
      s_66 = ATgetArgument(t, 0);
      v_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_66;
  if(match_cons(t, sym__2))
    {
      t_66 = ATgetArgument(t, 0);
      u_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_66;
  if(match_cons(t, sym_Mod_2))
    {
      k_66 = ATgetArgument(t, 0);
      l_66 = ATgetArgument(t, 1);
      {
        ATerm d_29 = t;
        int e_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_67 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, k_66, l_66, u_66);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            q_67 = t;
            t = (ATerm) ATmakeAppl(sym__2, q_67, v_66);
            ;
            LocalPopChoice(e_29);
          }
        else
          {
            t = d_29;
            t = r_67(t_66, u_66, v_66, m_66, t);
          }
      }
    }
  else
    {
      t = r_67(t_66, u_66, v_66, m_66, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm v_97 (ATerm), ATerm t)
{
  ATerm m_71 (ATerm t)
  {
    ATerm j_71 = NULL,k_71 = NULL,l_71 = NULL;
    l_71 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_71 = ATgetFirst((ATermList) t);
        k_71 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm n_29 = NULL,a_30 = NULL,z_6 = NULL;
          t = SSLgetAnnotations(l_71);
          n_29 = t;
          t = k_71;
          t = m_71(t);
          a_30 = t;
          t = (ATerm) ATinsert(CheckATermList(a_30), j_71);
          z_6 = t;
          t = SSLsetAnnotations(z_6, n_29);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_71;
        t = v_97(t);
      }
    return(t);
  }
  t = m_71(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_70 = NULL,l_70 = NULL,m_70 = NULL;
  c_70 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_70;
    }
  else
    {
      ATerm e_8 (ATerm t)
      {
        t = not_null(m_70);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_70 = ATgetFirst((ATermList) t);
          if(((m_70 != NULL) && (m_70 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            m_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_70;
      t = at_end_1_0(e_8, t);
    }
  return(t);
}
ATerm a_72 (ATerm s_71, ATerm t)
{
  ATerm t_71 = NULL;
  t = SSL_explode_term(s_71);
  if(match_cons(t, sym__2))
    {
      ATerm f_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_71;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_71 = NULL,w_71 = NULL,x_71 = NULL;
  x_71 = t;
  if(match_cons(t, sym__2))
    {
      v_71 = ATgetArgument(t, 0);
      w_71 = ATgetArgument(t, 1);
      {
        ATerm g_29 = t;
        int h_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_8 (ATerm t)
            {
              t = w_71;
              return(t);
            }
            t = v_71;
            t = at_end_1_0(f_8, t);
            ;
            LocalPopChoice(h_29);
          }
        else
          {
            t = g_29;
            t = a_72(x_71, t);
          }
      }
    }
  else
    {
      t = a_72(x_71, t);
    }
  return(t);
}
ATerm a_9 (ATerm c_99 (ATerm), ATerm t_29, ATerm s_29, ATerm t)
{
  ATerm b_73 (ATerm t)
  {
    ATerm t_72 = NULL,u_72 = NULL,w_72 = NULL;
    t_72 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_72;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_72 = ATgetFirst((ATermList) t);
            w_72 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm i_29 = t;
          int j_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_72;
              {
                ATerm g_8 (ATerm t)
                {
                  t = s_29;
                  return(t);
                }
                t = k_9(c_99, g_8, u_72, w_72, t);
                t = b_73(t);
              }
              ;
              LocalPopChoice(j_29);
            }
          else
            {
              t = i_29;
              {
                ATerm r_30 = NULL,u_30 = NULL,b_7 = NULL;
                t = SSLgetAnnotations(t_72);
                r_30 = t;
                t = w_72;
                t = b_73(t);
                u_30 = t;
                t = (ATerm) ATinsert(CheckATermList(u_30), u_72);
                b_7 = t;
                t = SSLsetAnnotations(b_7, r_30);
              }
            }
        }
      }
    return(t);
  }
  t = t_29;
  t = b_73(t);
  return(t);
}
ATerm genzip_4_0 (ATerm q_95 (ATerm), ATerm r_95 (ATerm), ATerm s_95 (ATerm), ATerm t_95 (ATerm), ATerm t)
{
  ATerm k_73 (ATerm t)
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_95(t);
        ;
        LocalPopChoice(l_29);
      }
    else
      {
        t = k_29;
        {
          ATerm d_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL,i_73 = NULL,j_73 = NULL,f_7 = NULL;
          t = r_95(t);
          j_73 = t;
          if(match_cons(t, sym__2))
            {
              e_73 = ATgetArgument(t, 0);
              f_73 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_73);
          d_73 = t;
          t = e_73;
          t = t_95(t);
          g_73 = t;
          t = f_73;
          t = k_73(t);
          i_73 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_73, i_73);
          f_7 = t;
          t = SSLsetAnnotations(f_7, d_73);
          t = s_95(t);
        }
      }
    return(t);
  }
  t = k_73(t);
  return(t);
}
ATerm i_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_29 = ATgetArgument(t, 0);
      if(((ATgetType(m_29) != AT_LIST) || !(ATisEmpty(m_29))))
        _fail(t);
      {
        ATerm o_29 = ATgetArgument(t, 1);
        if(((ATgetType(o_29) != AT_LIST) || !(ATisEmpty(o_29))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm r_73 = NULL,s_73 = NULL,v_73 = NULL,y_73 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_29 = ATgetArgument(t, 0);
      if(((ATgetType(p_29) == AT_LIST) && !(ATisEmpty(p_29))))
        {
          r_73 = ATgetFirst((ATermList) p_29);
          s_73 = (ATerm) ATgetNext((ATermList) p_29);
        }
      else
        _fail(t);
      {
        ATerm q_29 = ATgetArgument(t, 1);
        if(((ATgetType(q_29) == AT_LIST) && !(ATisEmpty(q_29))))
          {
            v_73 = ATgetFirst((ATermList) q_29);
            y_73 = (ATerm) ATgetNext((ATermList) q_29);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_73, v_73), (ATerm) ATmakeAppl(sym__2, s_73, y_73));
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm z_73 = NULL,a_74 = NULL;
  if(match_cons(t, sym__2))
    {
      z_73 = ATgetArgument(t, 0);
      a_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_74), z_73);
  return(t);
}
ATerm e_9 (ATerm d_650, ATerm i_650, ATerm o_62, ATerm t)
{
  ATerm m_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL;
  t = SSL_explode_term(i_650);
  if(match_cons(t, sym__2))
    {
      m_73 = ATgetArgument(t, 0);
      o_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(d_650);
  if(match_cons(t, sym__2))
    {
      if((m_73 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      n_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_73, o_73);
  t = genzip_4_0(i_8, j_8, k_8, _id, t);
  p_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_73, o_62);
  t = conc_0_0(t);
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm r_74 = NULL;
  r_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, r_74);
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm u_74 = NULL,v_74 = NULL,w_74 = NULL,a_75 = NULL,i_7 = NULL;
  a_75 = t;
  if(match_cons(t, sym__2))
    {
      v_74 = ATgetArgument(t, 0);
      w_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_75);
  u_74 = t;
  t = w_74;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_74, w_74);
  i_7 = t;
  t = SSLsetAnnotations(i_7, u_74);
  return(t);
}
ATerm p_8 (ATerm t)
{
  ATerm y_75 = NULL,z_75 = NULL,a_76 = NULL,d_76 = NULL,e_76 = NULL;
  y_75 = t;
  if(match_cons(t, sym__2))
    {
      z_75 = ATgetArgument(t, 0);
      a_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_76;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_76 = ATgetFirst((ATermList) t);
      e_76 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_29 = t;
        int w_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_76(z_75, a_76, y_75, t);
            ;
            LocalPopChoice(w_29);
          }
        else
          {
            t = r_29;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_75), d_76), e_76);
          }
      }
    }
  else
    {
      t = v_76(z_75, a_76, y_75, t);
    }
  return(t);
}
ATerm v_76 (ATerm e_75, ATerm f_75, ATerm g_75, ATerm t)
{
  ATerm h_75 = NULL,k_75 = NULL,k_7 = NULL,n_75 = NULL,q_75 = NULL,r_75 = NULL,s_75 = NULL;
  t = SSLgetAnnotations(g_75);
  h_75 = t;
  t = f_75;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_75 = ATgetFirst((ATermList) t);
      s_75 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_75;
  if(match_cons(t, sym__2))
    {
      q_75 = ATgetArgument(t, 0);
      r_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_29 = t;
    int b_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_75;
        if((q_75 != t))
          {
            _fail(t);
          }
        t = s_75;
        ;
        LocalPopChoice(b_30);
      }
    else
      {
        t = x_29;
        t = f_75;
        t = e_9(q_75, r_75, s_75, t);
      }
    k_75 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_75, k_75);
    k_7 = t;
    t = SSLsetAnnotations(k_7, h_75);
  }
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm u_76 = NULL;
  if(match_cons(t, sym__2))
    {
      u_76 = ATgetArgument(t, 0);
      if((u_76 != ATgetArgument(t, 1)))
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
  ATerm c_30 = t;
  int d_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(l_8, m_8, p_8, t);
      ;
      LocalPopChoice(d_30);
    }
  else
    {
      t = c_30;
      {
        ATerm m_76 = NULL,n_76 = NULL,q_76 = NULL;
        m_76 = t;
        if(match_cons(t, sym__2))
          {
            n_76 = ATgetArgument(t, 0);
            q_76 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_76;
        t = a_9(r_8, n_76, q_76, t);
      }
    }
  return(t);
}
ATerm g_9 (ATerm n_120 (ATerm), ATerm o_120 (ATerm), ATerm p_120 (ATerm), ATerm l_63, ATerm i_63, ATerm q_63, ATerm m_63, ATerm j_63, ATerm k_63, ATerm t)
{
  ATerm w_76 = NULL,x_76 = NULL,y_76 = NULL,z_76 = NULL,a_77 = NULL,b_77 = NULL,c_77 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_63, m_63);
  t = n_120(t);
  if(match_cons(t, sym__2))
    {
      x_76 = ATgetArgument(t, 0);
      w_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_76;
  t = o_120(t);
  y_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_76, q_63);
  t = diff_0_0(t);
  z_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_76, i_63);
  t = conc_0_0(t);
  a_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_76, q_63);
  t = conc_0_0(t);
  b_77 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_63, x_76, j_63);
  t = p_120(t);
  c_77 = t;
  t = (ATerm) ATmakeAppl(sym__5, a_77, b_77, w_76, c_77, k_63);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm n_120 (ATerm), ATerm o_120 (ATerm), ATerm p_120 (ATerm), ATerm t)
{
  ATerm e_77 = NULL,f_77 = NULL,g_77 = NULL,h_77 = NULL,i_77 = NULL,j_77 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm e_30 = ATgetArgument(t, 0);
      if(((ATgetType(e_30) == AT_LIST) && !(ATisEmpty(e_30))))
        {
          e_77 = ATgetFirst((ATermList) e_30);
          f_77 = (ATerm) ATgetNext((ATermList) e_30);
        }
      else
        _fail(t);
      g_77 = ATgetArgument(t, 1);
      h_77 = ATgetArgument(t, 2);
      i_77 = ATgetArgument(t, 3);
      j_77 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = g_9(n_120, o_120, p_120, e_77, f_77, g_77, h_77, i_77, j_77, t);
  return(t);
}
ATerm while_not_2_0 (ATerm l_108 (ATerm), ATerm m_108 (ATerm), ATerm t)
{
  ATerm k_77 (ATerm t)
  {
    ATerm f_30 = t;
    int g_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_108(t);
        ;
        LocalPopChoice(g_30);
      }
    else
      {
        t = f_30;
        t = m_108(t);
        t = k_77(t);
      }
    return(t);
  }
  t = k_77(t);
  return(t);
}
ATerm for_3_0 (ATerm o_108 (ATerm), ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm t)
{
  t = o_108(t);
  t = while_not_2_0(p_108, q_108, t);
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm u_77 = NULL,v_77 = NULL,w_77 = NULL;
  if(match_cons(t, sym__3))
    {
      u_77 = ATgetArgument(t, 0);
      v_77 = ATgetArgument(t, 1);
      w_77 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, u_77, u_77, v_77, w_77, (ATerm) ATempty);
  return(t);
}
ATerm w_8 (ATerm t)
{
  ATerm z_77 = NULL,a_78 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm h_30 = ATgetArgument(t, 0);
      if(((ATgetType(h_30) != AT_LIST) || !(ATisEmpty(h_30))))
        _fail(t);
      {
        ATerm i_30 = ATgetArgument(t, 1);
      }
      {
        ATerm j_30 = ATgetArgument(t, 2);
      }
      z_77 = ATgetArgument(t, 3);
      a_78 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_77, a_78);
  return(t);
}
ATerm c_9 (ATerm t)
{
  ATerm k_30 = t;
  int l_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, f_9, h_9, t);
      ;
      LocalPopChoice(l_30);
    }
  else
    {
      t = k_30;
      {
        ATerm g_78 = NULL,h_78 = NULL,k_78 = NULL,l_78 = NULL,m_78 = NULL,n_78 = NULL,o_78 = NULL;
        if(match_cons(t, sym__5))
          {
            g_78 = ATgetArgument(t, 0);
            l_78 = ATgetArgument(t, 1);
            m_78 = ATgetArgument(t, 2);
            n_78 = ATgetArgument(t, 3);
            o_78 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = g_78;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_78 = ATgetFirst((ATermList) t);
            k_78 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, k_78, l_78, m_78, n_78, (ATerm) ATinsert(CheckATermList(o_78), h_78));
      }
    }
  return(t);
}
ATerm f_9 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(i_9, t);
  return(t);
}
ATerm h_9 (ATerm t)
{
  ATerm d_78 = NULL,e_78 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm m_30 = ATgetArgument(t, 0);
      d_78 = ATgetArgument(t, 1);
      e_78 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_78), d_78);
  return(t);
}
ATerm i_9 (ATerm t)
{
  ATerm n_30 = t;
  int o_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      ;
      LocalPopChoice(o_30);
    }
  else
    {
      t = n_30;
    }
  return(t);
}
ATerm m_9 (ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL;
  y_31 = t;
  if(match_cons(t, sym__2))
    {
      z_31 = ATgetArgument(t, 0);
      a_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_31;
  if(match_cons(t, sym_Mod_2))
    {
      w_31 = ATgetArgument(t, 0);
      x_31 = ATgetArgument(t, 1);
      {
        ATerm p_30 = t;
        int q_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_31;
            t = a_8(w_31, x_31, a_32, t);
            ;
            LocalPopChoice(q_30);
          }
        else
          {
            t = p_30;
            t = e_32(z_31, a_32, t);
          }
      }
    }
  else
    {
      t = e_32(z_31, a_32, t);
    }
  return(t);
}
ATerm e_32 (ATerm n_31, ATerm p_31, ATerm t)
{
  ATerm t_31 = NULL,v_31 = NULL;
  t = term_w_14;
  t_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_15), p_31), term_w_15), n_31), term_t_15);
  v_31 = t;
  t = SSL_printnl(t_31, v_31);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_15), p_31), term_w_15), n_31), term_t_15);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm r_79 = NULL,s_79 = NULL,t_79 = NULL,u_79 = NULL,v_79 = NULL;
  t = for_3_0(s_8, w_8, c_9, t);
  r_79 = t;
  if(match_cons(t, sym__2))
    {
      s_79 = ATgetArgument(t, 0);
      t_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_79;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_79;
    }
  else
    {
      ATerm g_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_79 = ATgetFirst((ATermList) t);
          v_79 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(v_79), u_79);
      t = map_1_0(m_9, t);
      t = term_a_15;
      g_31 = t;
      t = SSL_exit(g_31);
    }
  return(t);
}
ATerm j_9 (ATerm h_103 (ATerm), ATerm o_35, ATerm m_35, ATerm t)
{
  ATerm z_79 = NULL,a_80 = NULL,b_80 = NULL,c_80 = NULL,d_80 = NULL,e_80 = NULL;
  c_80 = t;
  t = h_103(t);
  z_79 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_79, o_35, m_35);
  t = z_9(z_79, o_35, m_35, t);
  {
    ATerm s_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_80 = NULL;
        t = term_v_30;
        f_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_79, term_v_30);
        t = y_9(z_79, f_80, t);
        ;
        LocalPopChoice(t_30);
      }
    else
      {
        t = s_30;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_80 = ATgetFirst((ATermList) t);
        b_80 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_v_30;
    d_80 = t;
    t = (ATerm) ATinsert(CheckATermList(b_80), (ATerm) ATinsert(CheckATermList(a_80), o_35));
    e_80 = t;
    t = SSL_table_put(z_79, d_80, e_80);
    t = c_80;
  }
  return(t);
}
ATerm k_9 (ATerm k_99 (ATerm), ATerm l_99 (ATerm), ATerm z_29, ATerm y_29, ATerm t)
{
  t = l_99(t);
  {
    ATerm o_9 (ATerm t)
    {
      ATerm g_80 = NULL;
      g_80 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_29, g_80);
      t = k_99(t);
      return(t);
    }
    t = fetch_1_0(o_9, t);
    t = y_29;
  }
  return(t);
}
ATerm l_9 (ATerm h_99 (ATerm), ATerm v_29, ATerm u_29, ATerm t)
{
  ATerm w_80 (ATerm t)
  {
    ATerm r_80 = NULL,s_80 = NULL,t_80 = NULL;
    r_80 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_29;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_80 = ATgetFirst((ATermList) t);
            t_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm w_30 = t;
          int x_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_80;
              {
                ATerm x_9 (ATerm t)
                {
                  t = u_29;
                  return(t);
                }
                t = k_9(h_99, x_9, s_80, t_80, t);
                t = w_80(t);
              }
              ;
              LocalPopChoice(x_30);
            }
          else
            {
              t = w_30;
              {
                ATerm z_32 = NULL,g_33 = NULL,o_7 = NULL;
                t = SSLgetAnnotations(r_80);
                z_32 = t;
                t = t_80;
                t = w_80(t);
                g_33 = t;
                t = (ATerm) ATinsert(CheckATermList(g_33), s_80);
                o_7 = t;
                t = SSLsetAnnotations(o_7, z_32);
              }
            }
        }
      }
    return(t);
  }
  t = v_29;
  t = w_80(t);
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm g_81 = NULL;
  g_81 = t;
  {
    ATerm y_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_34 = NULL,s_34 = NULL;
        t = term_a_31;
        s_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_31, g_81);
        t = n_9(s_34, g_81, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm b_31 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_31) != ATmakeSymbol("q_0", 0, ATtrue)))
              _fail(t);
            f_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_34;
        ;
        LocalPopChoice(z_30);
      }
    else
      {
        t = y_30;
        {
          ATerm c_35 = NULL,n_35 = NULL;
          t = term_a_31;
          n_35 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_a_31, g_81);
          t = n_9(n_35, g_81, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm c_31 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) c_31) != ATmakeSymbol("l_0", 0, ATtrue)))
                _fail(t);
              c_35 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_35;
        }
      }
  }
  return(t);
}
ATerm n_9 (ATerm h_36, ATerm i_36, ATerm t)
{
  ATerm j_81 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_36, i_36);
  t = y_9(h_36, i_36, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_81 = ATgetFirst((ATermList) t);
      {
        ATerm d_31 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_81;
  return(t);
}
ATerm d_82 (ATerm t_81, ATerm t)
{
  ATerm v_81 = NULL,w_81 = NULL,b_36 = NULL;
  t = term_e_31;
  b_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_31, t_81);
  t = n_9(b_36, t_81, t);
  if(match_cons(t, sym_Defined_3))
    {
      ATerm f_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_31) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
      v_81 = ATgetArgument(t, 1);
      w_81 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_81), v_81);
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm z_81 = NULL,b_82 = NULL;
  z_81 = t;
  if(match_cons(t, sym__2))
    {
      ATerm h_31 = ATgetArgument(t, 0);
      b_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_82;
  {
    ATerm i_31 = t;
    int j_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_31 = ATgetArgument(t, 0);
            ATerm l_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(j_31);
        {
          ATerm m_31 = t;
          int o_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_36 = NULL,k_36 = NULL;
              t = term_e_31;
              k_36 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_e_31, z_81);
              t = n_9(k_36, z_81, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm r_31 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) r_31) != ATmakeSymbol("o_0", 0, ATtrue)))
                    _fail(t);
                  f_36 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = f_36;
              ;
              LocalPopChoice(o_31);
            }
          else
            {
              t = m_31;
              t = d_82(z_81, t);
            }
        }
      }
    else
      {
        t = i_31;
        t = d_82(z_81, t);
      }
  }
  return(t);
}
ATerm foldr_3_0 (ATerm x_101 (ATerm), ATerm y_101 (ATerm), ATerm z_101 (ATerm), ATerm t)
{
  ATerm f_82 = NULL,g_82 = NULL,h_82 = NULL;
  f_82 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_82;
      t = x_101(t);
    }
  else
    {
      ATerm k_82 = NULL,l_82 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_82 = ATgetFirst((ATermList) t);
          h_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_82;
      t = z_101(t);
      k_82 = t;
      t = h_82;
      t = foldr_3_0(x_101, y_101, z_101, t);
      l_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_82, l_82);
      t = y_101(t);
    }
  return(t);
}
ATerm a_10 (ATerm t)
{
  t = term_j_17;
  return(t);
}
ATerm c_10 (ATerm t)
{
  ATerm a_83 = NULL,b_83 = NULL;
  if(match_cons(t, sym__2))
    {
      a_83 = ATgetArgument(t, 0);
      b_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9(a_83, b_83, t);
  return(t);
}
ATerm d_10 (ATerm t)
{
  t = term_a_15;
  return(t);
}
ATerm e_10 (ATerm t)
{
  t = term_j_17;
  return(t);
}
ATerm f_10 (ATerm t)
{
  ATerm c_83 = NULL,d_83 = NULL;
  if(match_cons(t, sym__2))
    {
      c_83 = ATgetArgument(t, 0);
      d_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9(c_83, d_83, t);
  return(t);
}
ATerm g_10 (ATerm t)
{
  t = term_a_15;
  return(t);
}
ATerm i_10 (ATerm t)
{
  ATerm e_83 = NULL;
  if(match_cons(t, sym__2))
    {
      e_83 = ATgetArgument(t, 0);
      if((e_83 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm l_10 (ATerm t)
{
  t = term_e_31;
  return(t);
}
ATerm o_10 (ATerm t)
{
  t = term_a_31;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm m_82 = NULL,n_82 = NULL,o_82 = NULL,p_82 = NULL,q_82 = NULL,r_82 = NULL,s_82 = NULL,t_82 = NULL,u_82 = NULL,v_82 = NULL,w_82 = NULL,x_82 = NULL,y_82 = NULL,z_82 = NULL;
  o_82 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      r_82 = ATgetArgument(t, 0);
      m_82 = ATgetArgument(t, 1);
      n_82 = ATgetArgument(t, 2);
      {
        ATerm s_31 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t_82 = t;
  t = m_82;
  t = foldr_3_0(a_10, c_10, d_10, t);
  p_82 = t;
  t = n_82;
  t = foldr_3_0(e_10, f_10, g_10, t);
  q_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_82, (ATerm) ATmakeAppl(sym__2, p_82, q_82));
  {
    ATerm b_32 = t;
    int c_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        ;
        LocalPopChoice(c_32);
      }
    else
      {
        t = b_32;
        t = (ATerm) ATempty;
      }
    v_82 = t;
    t = r_82;
    {
      ATerm d_32 = t;
      int h_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Arities_0_0(t);
          ;
          LocalPopChoice(h_32);
        }
      else
        {
          t = d_32;
          t = (ATerm) ATempty;
        }
      u_82 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, p_82, q_82));
      z_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, p_82, q_82)), u_82);
      t = l_9(i_10, z_82, u_82, t);
      s_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_82, (ATerm) ATmakeAppl(sym__2, p_82, q_82));
      x_82 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_i_32, (ATerm) ATinsert(CheckATermList(v_82), o_82));
      y_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_82, (ATerm) ATmakeAppl(sym__2, p_82, q_82)), (ATerm) ATmakeAppl(sym_Defined_2, term_i_32, (ATerm) ATinsert(CheckATermList(v_82), o_82)));
      t = j_9(l_10, x_82, y_82, t);
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_j_32, s_82);
      w_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_82, (ATerm) ATmakeAppl(sym_Defined_2, term_j_32, s_82));
      t = j_9(o_10, r_82, w_82, t);
      t = t_82;
    }
  }
  return(t);
}
ATerm needed_defs_0_0 (ATerm t)
{
  ATerm f_83 = NULL;
  t = map_1_0(RegisterSDefT_0_0, t);
  f_83 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_m_32), f_83, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm t)
{
  ATerm g_83 = NULL,h_83 = NULL,i_83 = NULL,j_83 = NULL,k_83 = NULL,l_83 = NULL,q_7 = NULL;
  l_83 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_83 = ATgetFirst((ATermList) t);
      i_83 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_83);
  g_83 = t;
  t = h_83;
  t = o_75(t);
  j_83 = t;
  t = i_83;
  t = p_75(t);
  k_83 = t;
  t = (ATerm) ATinsert(CheckATermList(k_83), j_83);
  q_7 = t;
  t = SSLsetAnnotations(q_7, g_83);
  return(t);
}
ATerm q_9 (ATerm w_51, ATerm x_51, ATerm t)
{
  ATerm m_83 = NULL;
  t = SSL_fputc(w_51, x_51);
  m_83 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_83);
  return(t);
}
ATerm r_9 (ATerm k_55, ATerm l_55, ATerm t)
{
  ATerm n_83 = NULL;
  t = SSL_write_term_to_stream_text(k_55, l_55);
  n_83 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_83);
  return(t);
}
ATerm t_9 (ATerm e_113 (ATerm), ATerm f_523, ATerm o_55, ATerm t)
{
  ATerm o_83 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_523, term_n_32);
  t = open_stream_0_0(t);
  o_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_83, o_55);
  t = e_113(t);
  t = fclose_0_0(t);
  t = o_55;
  return(t);
}
ATerm s_9 (ATerm g_55, ATerm h_55, ATerm t)
{
  ATerm p_83 = NULL;
  t = SSL_write_term_to_stream_baf(g_55, h_55);
  p_83 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_83);
  return(t);
}
ATerm t_10 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm v_10 (ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_32 = ATgetArgument(t, 0);
      if(match_cons(o_32, sym_Stream_1))
        {
          v_36 = ATgetArgument(o_32, 0);
        }
      else
        _fail(t);
      w_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_9(v_36, w_36, t);
  return(t);
}
ATerm w_10 (ATerm t)
{
  ATerm j_37 = NULL,s_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_32 = ATgetArgument(t, 0);
      if(match_cons(p_32, sym_Stream_1))
        {
          w_37 = ATgetArgument(p_32, 0);
        }
      else
        _fail(t);
      x_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_9(w_37, x_37, t);
  j_37 = t;
  t = term_q_32;
  s_37 = t;
  t = j_37;
  if(match_cons(t, sym_Stream_1))
    {
      v_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_q_32, j_37);
  t = q_9(s_37, v_37, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm t_83 = NULL,u_83 = NULL,v_83 = NULL,w_83 = NULL,x_83 = NULL,z_83 = NULL,a_84 = NULL,b_84 = NULL,c_84 = NULL,d_84 = NULL,d_85 = NULL,e_85 = NULL,d_8 = NULL,t_7 = NULL;
  u_83 = t;
  if(match_cons(t, sym__2))
    {
      b_84 = ATgetArgument(t, 0);
      c_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_83);
  a_84 = t;
  t = b_84;
  {
    ATerm r_32 = t;
    int v_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_10 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((t_83 != NULL) && (t_83 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                t_83 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(r_10, t);
        ;
        LocalPopChoice(v_32);
      }
    else
      {
        t = r_32;
        t = term_x_32;
        t_83 = t;
      }
    d_84 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_84, c_84);
    t_7 = t;
    t = SSLsetAnnotations(t_7, a_84);
    t = u_83;
    if(match_cons(t, sym__2))
      {
        w_83 = ATgetArgument(t, 0);
        x_83 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_83);
    v_83 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_83, (ATerm) ATmakeAppl(sym__2, not_null(t_83), x_83));
    d_8 = t;
    t = SSLsetAnnotations(d_8, v_83);
    z_83 = t;
    if(match_cons(t, sym__2))
      {
        d_85 = ATgetArgument(t, 0);
        e_85 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm y_32 = t;
      int d_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL,n_8 = NULL;
          t = SSLgetAnnotations(z_83);
          o_36 = t;
          t = d_85;
          t = fetch_1_0(t_10, t);
          r_36 = t;
          t = e_85;
          if(match_cons(t, sym__2))
            {
              t_36 = ATgetArgument(t, 0);
              u_36 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_9(v_10, t_36, u_36, t);
          s_36 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
          n_8 = t;
          t = SSLsetAnnotations(n_8, o_36);
          ;
          LocalPopChoice(d_33);
        }
      else
        {
          t = y_32;
          {
            ATerm b_37 = NULL,e_37 = NULL,g_37 = NULL,h_37 = NULL,d_9 = NULL;
            t = SSLgetAnnotations(z_83);
            b_37 = t;
            t = e_85;
            if(match_cons(t, sym__2))
              {
                g_37 = ATgetArgument(t, 0);
                h_37 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = t_9(w_10, g_37, h_37, t);
            e_37 = t;
            t = (ATerm) ATmakeAppl(sym__2, d_85, e_37);
            d_9 = t;
            t = SSLsetAnnotations(d_9, b_37);
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
ATerm apply_strategy_1_0 (ATerm g_116 (ATerm), ATerm t)
{
  ATerm h_85 = NULL,i_85 = NULL,j_85 = NULL,k_85 = NULL,l_85 = NULL;
  l_85 = t;
  t = dtime_0_0(t);
  t = l_85;
  t = g_116(t);
  k_85 = t;
  t = dtime_0_0(t);
  h_85 = t;
  t = k_85;
  if(match_cons(t, sym__2))
    {
      i_85 = ATgetArgument(t, 0);
      j_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_85), (ATerm) ATmakeAppl(sym_Runtime_1, h_85)), j_85);
  return(t);
}
ATerm z_85 (ATerm t_85, ATerm t)
{
  t = SSL_fclose(t_85);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_85 = NULL,x_85 = NULL;
  x_85 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_85 = ATgetArgument(t, 0);
      {
        ATerm e_33 = t;
        int f_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_85);
            ;
            LocalPopChoice(f_33);
          }
        else
          {
            t = e_33;
            t = z_85(x_85, t);
          }
      }
    }
  else
    {
      t = z_85(x_85, t);
    }
  return(t);
}
ATerm u_9 (ATerm m_55, ATerm t)
{
  t = SSL_read_term_from_stream(m_55);
  return(t);
}
ATerm v_9 (ATerm y_51, ATerm z_51, ATerm t)
{
  ATerm a_86 = NULL;
  t = SSL_fopen(y_51, z_51);
  a_86 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_86);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_86 = NULL;
  t = SSL_stdin_stream();
  b_86 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_86);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm c_86 = NULL;
  t = SSL_stdout_stream();
  c_86 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_86);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_86 = NULL;
  t = SSL_stderr_stream();
  d_86 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_86);
  return(t);
}
ATerm k_87 (ATerm j_86, ATerm t)
{
  ATerm k_86 = NULL;
  t = SSL_explode_term(j_86);
  if(match_cons(t, sym__2))
    {
      ATerm h_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_33 = ATgetArgument(t, 1);
        if(((ATgetType(i_33) == AT_LIST) && !(ATisEmpty(i_33))))
          {
            k_86 = ATgetFirst((ATermList) i_33);
            {
              ATerm p_33 = (ATerm) ATgetNext((ATermList) i_33);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_86;
  if(match_cons(t, sym_stderr_0))
    {
      t = k_86;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = k_86;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = k_86;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm l_87 (ATerm n_86, ATerm o_86, ATerm p_86, ATerm t)
{
  ATerm q_86 = NULL,r_86 = NULL,s_86 = NULL,v_86 = NULL,j_10 = NULL;
  t = SSLgetAnnotations(p_86);
  s_86 = t;
  t = n_86;
  if(match_cons(t, sym_Path_1))
    {
      v_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_86, o_86);
  j_10 = t;
  t = SSLsetAnnotations(j_10, s_86);
  if(match_cons(t, sym__2))
    {
      q_86 = ATgetArgument(t, 0);
      r_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_9(q_86, r_86, t);
  return(t);
}
ATerm m_87 (ATerm x_86, ATerm y_86, ATerm z_86, ATerm t)
{
  ATerm a_87 = NULL,b_87 = NULL,c_87 = NULL,f_87 = NULL,k_10 = NULL;
  t = SSLgetAnnotations(z_86);
  c_87 = t;
  t = SSL_is_string(x_86);
  f_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_87, y_86);
  k_10 = t;
  t = SSLsetAnnotations(k_10, c_87);
  if(match_cons(t, sym__2))
    {
      a_87 = ATgetArgument(t, 0);
      b_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_9(a_87, b_87, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm h_87 = NULL,i_87 = NULL,j_87 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_33 = ATgetArgument(t, 0);
      ATerm t_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  h_87 = t;
  if(match_cons(t, sym__2))
    {
      i_87 = ATgetArgument(t, 0);
      j_87 = ATgetArgument(t, 1);
      {
        ATerm u_33 = t;
        int x_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_87(h_87, t);
            ;
            LocalPopChoice(x_33);
          }
        else
          {
            t = u_33;
            {
              ATerm y_33 = t;
              int z_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_87(i_87, j_87, h_87, t);
                  ;
                  LocalPopChoice(z_33);
                }
              else
                {
                  t = y_33;
                  t = m_87(i_87, j_87, h_87, t);
                }
            }
          }
      }
    }
  else
    {
      t = k_87(h_87, t);
    }
  return(t);
}
ATerm y_10 (ATerm t)
{
  t = term_a_34;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_87 = NULL,o_87 = NULL,p_87 = NULL;
  ATerm b_34 = t;
  int c_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_87 = NULL;
      q_87 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_87, term_d_34);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(c_34);
    }
  else
    {
      t = b_34;
      t = debug_1_0(y_10, t);
      _fail(t);
    }
  o_87 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(p_87, t);
  n_87 = t;
  t = o_87;
  t = fclose_0_0(t);
  t = n_87;
  return(t);
}
ATerm fetch_1_0 (ATerm p_97 (ATerm), ATerm t)
{
  ATerm o_88 (ATerm t)
  {
    ATerm l_88 = NULL,m_88 = NULL,n_88 = NULL;
    l_88 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_88 = ATgetFirst((ATermList) t);
        n_88 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm e_34 = t;
      int g_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_38 = NULL,k_39 = NULL,c_11 = NULL;
          t = SSLgetAnnotations(l_88);
          z_38 = t;
          t = m_88;
          t = p_97(t);
          k_39 = t;
          t = (ATerm) ATinsert(CheckATermList(n_88), k_39);
          c_11 = t;
          t = SSLsetAnnotations(c_11, z_38);
          ;
          LocalPopChoice(g_34);
        }
      else
        {
          t = e_34;
          {
            ATerm a_40 = NULL,d_40 = NULL,d_11 = NULL;
            t = SSLgetAnnotations(l_88);
            a_40 = t;
            t = n_88;
            t = o_88(t);
            d_40 = t;
            t = (ATerm) ATinsert(CheckATermList(d_40), m_88);
            d_11 = t;
            t = SSLsetAnnotations(d_11, a_40);
          }
        }
    }
    return(t);
  }
  t = o_88(t);
  return(t);
}
ATerm p_9 (ATerm f_44, ATerm g_44, ATerm t)
{
  t = SSL_strcat(f_44, g_44);
  return(t);
}
ATerm debug_1_0 (ATerm c_113 (ATerm), ATerm t)
{
  ATerm r_88 = NULL,s_88 = NULL,t_88 = NULL,u_88 = NULL;
  r_88 = t;
  t = c_113(t);
  s_88 = t;
  t = term_w_14;
  t_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_88), s_88);
  u_88 = t;
  t = SSL_printnl(t_88, u_88);
  t = r_88;
  return(t);
}
ATerm a_11 (ATerm t)
{
  ATerm h_34 = t;
  int i_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(i_34);
    }
  else
    {
      t = h_34;
    }
  return(t);
}
ATerm b_11 (ATerm t)
{
  t = term_j_34;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm k_34 = t;
  int l_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_89 = NULL;
      b_89 = t;
      t = SSL_is_string(b_89);
      ;
      LocalPopChoice(l_34);
    }
  else
    {
      t = k_34;
      {
        ATerm m_34 = t;
        int n_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(a_11, t);
            ;
            LocalPopChoice(n_34);
          }
        else
          {
            t = m_34;
            {
              ATerm h_89 = NULL,i_89 = NULL,j_89 = NULL;
              h_89 = t;
              if(match_cons(t, sym_Path_1))
                {
                  i_89 = ATgetArgument(t, 0);
                  t = i_89;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      i_89 = ATgetArgument(t, 0);
                      t = i_89;
                      {
                        ATerm o_34 = t;
                        int p_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(p_34);
                          }
                        else
                          {
                            t = o_34;
                            t = debug_1_0(b_11, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm n_89 = NULL,o_89 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          i_89 = ATgetArgument(t, 0);
                          j_89 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = i_89;
                      t = eval_config_0_0(t);
                      n_89 = t;
                      t = j_89;
                      t = eval_config_0_0(t);
                      o_89 = t;
                      t = (ATerm) ATmakeAppl(sym__2, n_89, o_89);
                      t = p_9(n_89, o_89, t);
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
  ATerm s_89 = NULL,t_89 = NULL;
  s_89 = t;
  t = term_q_34;
  t_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_34, s_89);
  t = y_9(t_89, s_89, t);
  {
    ATerm r_34 = t;
    int t_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_89 = NULL,v_89 = NULL;
        t = eval_config_0_0(t);
        u_89 = t;
        t = term_q_34;
        v_89 = t;
        t = SSL_table_put(v_89, s_89, u_89);
        t = u_89;
        ;
        LocalPopChoice(t_34);
      }
    else
      {
        t = r_34;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm p_114 (ATerm), ATerm t)
{
  ATerm z_89 = NULL;
  z_89 = t;
  {
    ATerm u_34 = t;
    int v_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_90 = NULL;
        t = term_w_34;
        t = get_config_0_0(t);
        b_90 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_90, term_x_34);
        t = geq_0_0(t);
        t = z_89;
        t = p_114(t);
        ;
        LocalPopChoice(v_34);
      }
    else
      {
        t = u_34;
        t = z_89;
      }
  }
  return(t);
}
ATerm e_11 (ATerm t)
{
  ATerm e_90 = NULL;
  e_90 = t;
  if(match_string(t, "-k"))
    {
      t = e_90;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_90;
    }
  return(t);
}
ATerm f_11 (ATerm t)
{
  ATerm f_90 = NULL,g_90 = NULL,h_90 = NULL;
  f_90 = t;
  t = SSL_string_to_int(f_90);
  g_90 = t;
  t = term_y_34;
  h_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_34, g_90);
  t = b_10(h_90, g_90, t);
  t = f_90;
  return(t);
}
ATerm j_11 (ATerm t)
{
  t = term_z_34;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_11, f_11, j_11, t);
  return(t);
}
ATerm k_11 (ATerm t)
{
  ATerm m_90 = NULL;
  m_90 = t;
  if(match_string(t, "-S"))
    {
      t = m_90;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_90;
    }
  return(t);
}
ATerm n_11 (ATerm t)
{
  ATerm p_90 = NULL,q_90 = NULL;
  t = term_w_34;
  p_90 = t;
  t = term_j_17;
  q_90 = t;
  t = term_a_35;
  t = b_10(p_90, q_90, t);
  t = term_b_35;
  return(t);
}
ATerm p_11 (ATerm t)
{
  t = term_d_35;
  return(t);
}
ATerm q_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_11 (ATerm t)
{
  ATerm r_90 = NULL,s_90 = NULL,t_90 = NULL;
  r_90 = t;
  t = SSL_string_to_int(r_90);
  s_90 = t;
  t = term_w_34;
  t_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_34, s_90);
  t = b_10(t_90, s_90, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, r_90);
  return(t);
}
ATerm s_11 (ATerm t)
{
  t = term_e_35;
  return(t);
}
ATerm t_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_11 (ATerm t)
{
  ATerm u_90 = NULL,v_90 = NULL;
  t = term_f_35;
  u_90 = t;
  t = term_v_14;
  v_90 = t;
  t = term_g_35;
  t = b_10(u_90, v_90, t);
  t = term_h_35;
  return(t);
}
ATerm z_11 (ATerm t)
{
  t = term_i_35;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_35 = t;
  int k_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_11, n_11, p_11, t);
      ;
      LocalPopChoice(k_35);
    }
  else
    {
      t = j_35;
      {
        ATerm p_35 = t;
        int q_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_11, r_11, s_11, t);
            ;
            LocalPopChoice(q_35);
          }
        else
          {
            t = p_35;
            t = Option_3_0(t_11, x_11, z_11, t);
          }
      }
    }
  return(t);
}
ATerm b_10 (ATerm n_56, ATerm o_56, ATerm t)
{
  ATerm w_90 = NULL;
  t = term_q_34;
  w_90 = t;
  t = SSL_table_put(w_90, n_56, o_56);
  t = (ATerm) ATmakeAppl(sym__3, term_q_34, n_56, o_56);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm z_90 = NULL,a_91 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_91 = NULL,f_91 = NULL,g_91 = NULL;
      t = term_v_14;
      t = i_0(t);
      b_91 = t;
      t = term_t_35;
      f_91 = t;
      t = term_u_35;
      g_91 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_35, term_u_35, b_91);
      t = z_9(f_91, g_91, b_91, t);
      _fail(t);
    }
  else
    {
      ATerm j_91 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_90 = ATgetFirst((ATermList) t);
          a_91 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_90;
      t = d_0(t);
      t = term_v_14;
      t = g_0(t);
      j_91 = t;
      t = (ATerm) ATinsert(CheckATermList(a_91), j_91);
    }
  return(t);
}
ATerm a_12 (ATerm t)
{
  ATerm l_91 = NULL;
  l_91 = t;
  if(match_string(t, "-o"))
    {
      t = l_91;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_91;
    }
  return(t);
}
ATerm c_12 (ATerm t)
{
  ATerm m_91 = NULL,n_91 = NULL;
  m_91 = t;
  t = term_y_35;
  n_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_35, m_91);
  t = b_10(n_91, m_91, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, m_91);
  return(t);
}
ATerm e_12 (ATerm t)
{
  t = term_z_35;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_12, c_12, e_12, t);
  return(t);
}
ATerm z_9 (ATerm w_35, ATerm x_35, ATerm v_35, ATerm t)
{
  ATerm p_91 = NULL,q_91 = NULL,r_91 = NULL;
  p_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_35, x_35);
  {
    ATerm a_36 = t;
    int c_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_36 = ATgetArgument(t, 0);
            ATerm e_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_35, x_35);
        t = y_9(w_35, x_35, t);
        ;
        LocalPopChoice(c_36);
      }
    else
      {
        t = a_36;
        t = (ATerm) ATempty;
      }
    q_91 = t;
    t = (ATerm) ATinsert(CheckATermList(q_91), v_35);
    r_91 = t;
    t = SSL_table_put(w_35, x_35, r_91);
    t = p_91;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm y_91 = NULL,z_91 = NULL,a_92 = NULL,b_92 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_92 = NULL,d_92 = NULL,e_92 = NULL;
      t = term_v_14;
      t = r_0(t);
      c_92 = t;
      t = term_t_35;
      d_92 = t;
      t = term_u_35;
      e_92 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_35, term_u_35, c_92);
      t = z_9(d_92, e_92, c_92, t);
      _fail(t);
    }
  else
    {
      ATerm k_92 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_91 = ATgetFirst((ATermList) t);
          z_91 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_91;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_92 = ATgetFirst((ATermList) t);
          b_92 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_91;
      t = n_0(t);
      t = a_92;
      t = p_0(t);
      k_92 = t;
      t = (ATerm) ATinsert(CheckATermList(b_92), k_92);
    }
  return(t);
}
ATerm m_12 (ATerm t)
{
  ATerm m_92 = NULL;
  m_92 = t;
  if(match_string(t, "-i"))
    {
      t = m_92;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_92;
    }
  return(t);
}
ATerm n_12 (ATerm t)
{
  ATerm n_92 = NULL,o_92 = NULL;
  n_92 = t;
  t = term_g_36;
  o_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_36, n_92);
  t = b_10(o_92, n_92, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, n_92);
  return(t);
}
ATerm r_12 (ATerm t)
{
  t = term_j_36;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_12, n_12, r_12, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_92 = NULL,q_92 = NULL,r_92 = NULL,s_92 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_14;
  t = whoami_0_0(t);
  p_92 = t;
  t = term_w_14;
  r_92 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_36), p_92);
  s_92 = t;
  t = SSL_printnl(r_92, s_92);
  t = term_a_15;
  q_92 = t;
  t = SSL_exit(q_92);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_m_36;
  t = get_config_0_0(t);
  return(t);
}
ATerm w_9 (ATerm n_33, ATerm o_33, ATerm t)
{
  ATerm n_36 = t;
  int p_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(n_33, o_33);
      ;
      LocalPopChoice(p_36);
    }
  else
    {
      t = n_36;
      t = SSL_addr(n_33, o_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm v_101 (ATerm), ATerm w_101 (ATerm), ATerm t)
{
  ATerm u_92 = NULL,v_92 = NULL,y_92 = NULL;
  u_92 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_92;
      t = v_101(t);
    }
  else
    {
      ATerm b_93 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_92 = ATgetFirst((ATermList) t);
          y_92 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_92;
      t = foldr_2_0(v_101, w_101, t);
      b_93 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_92, b_93);
      t = w_101(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm v_12 (ATerm t)
{
  t = term_j_17;
  return(t);
}
ATerm w_12 (ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL;
  if(match_cons(t, sym__2))
    {
      v_41 = ATgetArgument(t, 0);
      w_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9(v_41, w_41, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_93 = NULL,n_41 = NULL,o_41 = NULL;
  t = times_0_0(t);
  o_41 = t;
  t = SSL_explode_term(o_41);
  if(match_cons(t, sym__2))
    {
      ATerm q_36 = ATgetArgument(t, 0);
      n_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_41;
  t = foldr_2_0(v_12, w_12, t);
  e_93 = t;
  t = SSL_TicksToSeconds(e_93);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_93 = NULL,q_93 = NULL,r_93 = NULL;
  p_93 = t;
  if(match_cons(t, sym__2))
    {
      q_93 = ATgetArgument(t, 0);
      r_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_36 = t;
    int y_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_93;
        if((q_93 != t))
          {
            _fail(t);
          }
        t = p_93;
        ;
        LocalPopChoice(y_36);
      }
    else
      {
        t = x_36;
        t = (ATerm) ATmakeAppl(sym__2, q_93, r_93);
        {
          ATerm z_36 = t;
          int a_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_93, r_93);
              ;
              LocalPopChoice(a_37);
            }
          else
            {
              t = z_36;
              t = SSL_gtr(q_93, r_93);
            }
          t = (ATerm) ATmakeAppl(sym__2, q_93, r_93);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm o_114 (ATerm), ATerm t)
{
  ATerm v_93 = NULL;
  v_93 = t;
  {
    ATerm c_37 = t;
    int d_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_93 = NULL;
        t = term_w_34;
        t = get_config_0_0(t);
        x_93 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_93, term_a_15);
        t = geq_0_0(t);
        t = v_93;
        t = o_114(t);
        ;
        LocalPopChoice(d_37);
      }
    else
      {
        t = c_37;
        t = v_93;
      }
  }
  return(t);
}
ATerm x_12 (ATerm t)
{
  ATerm z_93 = NULL,a_94 = NULL,c_94 = NULL,d_94 = NULL;
  t = run_time_0_0(t);
  z_93 = t;
  t = term_v_14;
  t = whoami_0_0(t);
  a_94 = t;
  t = term_w_14;
  c_94 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_37), z_93), term_m_37), a_94);
  d_94 = t;
  t = SSL_printnl(c_94, d_94);
  t = (ATerm) ATmakeAppl(sym__2, term_w_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_37), z_93), term_m_37), a_94));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm e_94 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_17;
  e_94 = t;
  t = SSL_exit(e_94);
  return(t);
}
ATerm y_12 (ATerm t)
{
  ATerm m_94 = NULL,n_94 = NULL;
  n_94 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = n_94;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          m_94 = ATgetArgument(t, 0);
          {
            ATerm u_42 = NULL,g_11 = NULL;
            t = SSLgetAnnotations(n_94);
            u_42 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, m_94);
            g_11 = t;
            t = SSLsetAnnotations(g_11, u_42);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = n_94;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm e_117 (ATerm), ATerm t)
{
  ATerm t_37 = t;
  int u_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_37;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_37);
    }
  else
    {
      t = t_37;
      t = fetch_1_0(y_12, t);
    }
  t = e_117(t);
  return(t);
}
ATerm map_1_0 (ATerm f_97 (ATerm), ATerm t)
{
  ATerm f_95 (ATerm t)
  {
    ATerm c_95 = NULL,d_95 = NULL,e_95 = NULL;
    c_95 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_95;
      }
    else
      {
        ATerm h_43 = NULL,l_43 = NULL,n_43 = NULL,l_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_95 = ATgetFirst((ATermList) t);
            e_95 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_95);
        h_43 = t;
        t = d_95;
        t = f_97(t);
        l_43 = t;
        t = e_95;
        t = f_95(t);
        n_43 = t;
        t = (ATerm) ATinsert(CheckATermList(n_43), l_43);
        l_11 = t;
        t = SSLsetAnnotations(l_11, h_43);
      }
    return(t);
  }
  t = f_95(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm k_95 = NULL,l_95 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_95 = ATgetFirst((ATermList) t);
      l_95 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_95 = NULL,v_95 = NULL;
        ATerm z_12 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(p_95)), not_null(v_95));
          return(t);
        }
        t = l_95;
        t = m_0(t);
        if(((p_95 != NULL) && (p_95 != t)))
          _fail(t);
        else
          p_95 = t;
        t = k_95;
        t = k_0(t);
        if(((v_95 != NULL) && (v_95 != t)))
          _fail(t);
        else
          v_95 = t;
        t = l_95;
        t = reverse_acc_2_0(k_0, z_12, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_14;
      t = m_0(t);
    }
  return(t);
}
ATerm y_9 (ATerm n_37, ATerm o_37, ATerm t)
{
  t = SSL_table_get(n_37, o_37);
  return(t);
}
ATerm b_13 (ATerm t)
{
  ATerm z_95 = NULL,a_96 = NULL,b_96 = NULL,w_11 = NULL;
  b_96 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_96);
  z_95 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_96);
  w_11 = t;
  t = SSLsetAnnotations(w_11, z_95);
  return(t);
}
ATerm c_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_13 (ATerm t)
{
  ATerm d_96 = NULL;
  d_96 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_96), term_z_37);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm x_95 = NULL,y_95 = NULL;
  ATerm a_38 = t;
  int b_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_36;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_38);
    }
  else
    {
      t = a_38;
      t = fetch_1_0(b_13, t);
    }
  t = term_c_38;
  t = echo_0_0(t);
  t = term_t_35;
  x_95 = t;
  t = term_u_35;
  y_95 = t;
  t = term_d_38;
  t = y_9(x_95, y_95, t);
  t = reverse_acc_2_0(_id, c_13, t);
  t = map_1_0(d_13, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm f_96 = NULL,g_96 = NULL,h_96 = NULL;
  f_96 = t;
  {
    ATerm e_38 = t;
    int f_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_96;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_38 = ATgetFirst((ATermList) t);
                ATerm h_38 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_96;
          }
        ;
        LocalPopChoice(f_38);
      }
    else
      {
        t = e_38;
        t = (ATerm) ATinsert(ATempty, f_96);
      }
    g_96 = t;
    t = term_x_32;
    h_96 = t;
    t = SSL_printnl(h_96, g_96);
    t = f_96;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_m_36;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm f_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_13 (ATerm t)
{
  ATerm l_96 = NULL,m_96 = NULL;
  t = term_i_38;
  l_96 = t;
  t = term_v_14;
  m_96 = t;
  t = term_j_38;
  t = b_10(l_96, m_96, t);
  return(t);
}
ATerm h_13 (ATerm t)
{
  t = term_k_38;
  return(t);
}
ATerm i_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_13 (ATerm t)
{
  ATerm n_96 = NULL,o_96 = NULL,p_96 = NULL,q_96 = NULL;
  t = term_i_38;
  p_96 = t;
  t = term_v_14;
  q_96 = t;
  t = term_j_38;
  t = b_10(p_96, q_96, t);
  t = term_l_38;
  n_96 = t;
  t = term_v_14;
  o_96 = t;
  t = term_m_38;
  t = b_10(n_96, o_96, t);
  t = term_o_38;
  return(t);
}
ATerm k_13 (ATerm t)
{
  t = term_p_38;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_38 = t;
  int v_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_13, g_13, h_13, t);
      ;
      LocalPopChoice(v_38);
    }
  else
    {
      t = s_38;
      t = Option_3_0(i_13, j_13, k_13, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_119 (ATerm), ATerm t)
{
  ATerm v_96 = NULL,w_96 = NULL,x_96 = NULL,y_96 = NULL,a_97 = NULL,b_97 = NULL,y_11 = NULL;
  v_96 = t;
  {
    ATerm w_38 = t;
    int x_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_38;
        t = h_119(t);
        ;
        LocalPopChoice(x_38);
      }
    else
      {
        t = w_38;
      }
    t = v_96;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_96 = ATgetFirst((ATermList) t);
        y_96 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(v_96);
    w_96 = t;
    t = term_m_36;
    b_97 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_m_36, x_96);
    t = b_10(b_97, x_96, t);
    t = y_96;
    {
      ATerm o_97 (ATerm t)
      {
        ATerm a_39 = t;
        int b_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_39 = t;
            int d_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_97 = NULL;
                h_97 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = h_97;
                ;
                LocalPopChoice(d_39);
              }
            else
              {
                t = c_39;
                t = h_119(t);
                t = Cons_2_0(_id, o_97, t);
              }
            ;
            LocalPopChoice(b_39);
          }
        else
          {
            t = a_39;
            {
              ATerm k_97 = NULL,l_97 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  k_97 = ATgetFirst((ATermList) t);
                  l_97 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(l_97), (ATerm) ATmakeAppl(sym_Undefined_1, k_97));
            }
          }
        return(t);
      }
      t = o_97(t);
      a_97 = t;
      t = (ATerm) ATinsert(CheckATermList(a_97), (ATerm) ATmakeAppl(sym_Program_1, x_96));
      y_11 = t;
      t = SSLsetAnnotations(y_11, w_96);
    }
  }
  return(t);
}
ATerm m_13 (ATerm t)
{
  ATerm e_98 = NULL;
  e_98 = t;
  if(match_string(t, "--help"))
    {
      t = e_98;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_98;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_98;
        }
    }
  return(t);
}
ATerm n_13 (ATerm t)
{
  ATerm f_98 = NULL,g_98 = NULL;
  t = term_y_37;
  f_98 = t;
  t = term_v_14;
  g_98 = t;
  t = term_e_39;
  t = b_10(f_98, g_98, t);
  t = term_f_39;
  return(t);
}
ATerm q_13 (ATerm t)
{
  t = term_h_39;
  return(t);
}
ATerm r_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm g_119 (ATerm), ATerm t)
{
  ATerm x_97 = NULL,y_97 = NULL,z_97 = NULL,a_98 = NULL,b_98 = NULL,c_98 = NULL,d_98 = NULL;
  z_97 = t;
  t = term_t_35;
  b_98 = t;
  t = term_u_35;
  c_98 = t;
  t = (ATerm) ATempty;
  d_98 = t;
  t = SSL_table_put(b_98, c_98, d_98);
  t = z_97;
  {
    ATerm l_13 (ATerm t)
    {
      ATerm l_39 = t;
      int n_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_119(t);
          ;
          LocalPopChoice(n_39);
        }
      else
        {
          t = l_39;
          {
            ATerm p_39 = t;
            int q_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_13, n_13, q_13, t);
                ;
                LocalPopChoice(q_39);
              }
            else
              {
                t = p_39;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_13, t);
    {
      ATerm r_39 = t;
      int s_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_98 = NULL;
          n_98 = t;
          {
            ATerm t_39 = t;
            int u_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_44 = NULL;
                t = n_98;
                {
                  ATerm v_39 = t;
                  int w_39 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_y_37;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(w_39);
                    }
                  else
                    {
                      t = v_39;
                      t = fetch_1_0(r_13, t);
                    }
                  t = n_98;
                  t = default_system_usage_0_0(t);
                  t = term_j_17;
                  b_44 = t;
                  t = SSL_exit(b_44);
                }
                ;
                LocalPopChoice(u_39);
              }
            else
              {
                t = t_39;
                {
                  ATerm k_44 = NULL;
                  t = term_i_38;
                  t = get_config_0_0(t);
                  t = n_98;
                  t = default_system_about_0_0(t);
                  t = term_j_17;
                  k_44 = t;
                  t = SSL_exit(k_44);
                }
              }
          }
          ;
          LocalPopChoice(s_39);
        }
      else
        {
          t = r_39;
          {
            ATerm x_39 = t;
            int y_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_98 = NULL,p_98 = NULL,q_98 = NULL;
                ATerm s_13 (ATerm t)
                {
                  ATerm r_98 = NULL,s_98 = NULL,t_98 = NULL,d_12 = NULL;
                  t_98 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      s_98 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(t_98);
                  r_98 = t;
                  t = s_98;
                  if(((x_97 != NULL) && (x_97 != t)))
                    _fail(t);
                  else
                    x_97 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, s_98);
                  d_12 = t;
                  t = SSLsetAnnotations(d_12, r_98);
                  return(t);
                }
                t = fetch_1_0(s_13, t);
                t = term_w_14;
                p_98 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_97)), term_z_39);
                q_98 = t;
                t = SSL_printnl(p_98, q_98);
                t = (ATerm) ATmakeAppl(sym__2, term_w_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_97)), term_z_39));
                t = default_system_usage_0_0(t);
                t = term_a_15;
                o_98 = t;
                t = SSL_exit(o_98);
                ;
                LocalPopChoice(y_39);
              }
            else
              {
                t = x_39;
              }
          }
        }
      y_97 = t;
      t = term_t_35;
      a_98 = t;
      t = SSL_table_destroy(a_98);
      t = y_97;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm g_117 (ATerm), ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm j_117 (ATerm), ATerm t)
{
  ATerm y_98 = NULL,z_98 = NULL,a_99 = NULL,b_99 = NULL;
  t = parse_options_1_0(g_117, t);
  y_98 = t;
  t = term_b_40;
  b_99 = t;
  t = SSL_table_create(b_99);
  t = term_b_40;
  z_98 = t;
  t = term_c_40;
  a_99 = t;
  t = SSL_table_put(z_98, a_99, y_98);
  t = y_98;
  t = i_117(t);
  {
    ATerm e_40 = t;
    int f_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(h_117, t);
        ;
        LocalPopChoice(f_40);
      }
    else
      {
        t = e_40;
        {
          ATerm g_40 = t;
          int i_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_117(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(i_40);
            }
          else
            {
              t = g_40;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm x_13 (ATerm t)
{
  t = if_verbose2_1_0(e_14, t);
  return(t);
}
ATerm b_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_14 (ATerm t)
{
  ATerm e_99 = NULL,f_99 = NULL;
  t = term_l_40;
  e_99 = t;
  t = term_v_14;
  f_99 = t;
  t = term_o_40;
  t = b_10(e_99, f_99, t);
  t = term_p_40;
  return(t);
}
ATerm d_14 (ATerm t)
{
  t = term_q_40;
  return(t);
}
ATerm e_14 (ATerm t)
{
  ATerm g_99 = NULL,j_99 = NULL,m_99 = NULL,n_99 = NULL;
  g_99 = t;
  t = term_m_36;
  t = get_config_0_0(t);
  j_99 = t;
  t = term_w_14;
  m_99 = t;
  t = (ATerm) ATinsert(ATempty, j_99);
  n_99 = t;
  t = SSL_printnl(m_99, n_99);
  t = g_99;
  return(t);
}
ATerm iowrap_3_0 (ATerm p_116 (ATerm), ATerm q_116 (ATerm), ATerm r_116 (ATerm), ATerm t)
{
  ATerm t_13 (ATerm t)
  {
    ATerm r_40 = t;
    int s_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_116(t);
        ;
        LocalPopChoice(s_40);
      }
    else
      {
        t = r_40;
        {
          ATerm t_40 = t;
          int u_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(u_40);
            }
          else
            {
              t = t_40;
              {
                ATerm v_40 = t;
                int w_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(w_40);
                  }
                else
                  {
                    t = v_40;
                    {
                      ATerm x_40 = t;
                      int y_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(b_14, c_14, d_14, t);
                          ;
                          LocalPopChoice(y_40);
                        }
                      else
                        {
                          t = x_40;
                          {
                            ATerm z_40 = t;
                            int a_41 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(a_41);
                              }
                            else
                              {
                                t = z_40;
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
  ATerm y_13 (ATerm t)
  {
    ATerm o_99 = NULL,p_99 = NULL,q_99 = NULL;
    p_99 = t;
    {
      ATerm b_41 = t;
      int c_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_14 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((o_99 != NULL) && (o_99 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  o_99 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(f_14, t);
          ;
          LocalPopChoice(c_41);
        }
      else
        {
          t = b_41;
          t = term_d_41;
          o_99 = t;
        }
      t = not_null(o_99);
      t = ReadFromFile_0_0(t);
      q_99 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_99, q_99);
      t = apply_strategy_1_0(p_116, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(t_13, r_116, x_13, y_13, t);
  return(t);
}
ATerm h_14 (ATerm t)
{
  ATerm w_99 = NULL,x_99 = NULL,y_99 = NULL,z_99 = NULL,a_100 = NULL,b_100 = NULL,c_100 = NULL,d_100 = NULL,e_100 = NULL,f_100 = NULL,g_100 = NULL,h_100 = NULL,i_100 = NULL,j_100 = NULL,u_12 = NULL,s_12 = NULL,g_12 = NULL;
  j_100 = t;
  if(match_cons(t, sym__2))
    {
      x_99 = ATgetArgument(t, 0);
      y_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_100);
  w_99 = t;
  t = y_99;
  if(match_cons(t, sym_Specification_1))
    {
      d_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_99);
  c_100 = t;
  t = d_100;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_100 = ATgetFirst((ATermList) t);
      g_100 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_100);
  e_100 = t;
  t = g_100;
  t = Cons_2_0(p_14, u_14, t);
  h_100 = t;
  t = (ATerm) ATinsert(CheckATermList(h_100), f_100);
  g_12 = t;
  t = SSLsetAnnotations(g_12, e_100);
  i_100 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, i_100);
  s_12 = t;
  t = SSLsetAnnotations(s_12, c_100);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm e_41 = ATgetArgument(t, 0);
      if(((ATgetType(e_41) == AT_LIST) && !(ATisEmpty(e_41))))
        {
          a_100 = ATgetFirst((ATermList) e_41);
          {
            ATerm f_41 = (ATerm) ATgetNext((ATermList) e_41);
            if(((ATgetType(f_41) == AT_LIST) && !(ATisEmpty(f_41))))
              {
                ATerm g_41 = ATgetFirst((ATermList) f_41);
                if(match_cons(g_41, sym_Strategies_1))
                  {
                    b_100 = ATgetArgument(g_41, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm h_41 = (ATerm) ATgetNext((ATermList) f_41);
                  if(((ATgetType(h_41) != AT_LIST) || !(ATisEmpty(h_41))))
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
  t = y_7(a_100, b_100, t);
  z_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_99, z_99);
  u_12 = t;
  t = SSLsetAnnotations(u_12, w_99);
  return(t);
}
ATerm p_14 (ATerm t)
{
  ATerm k_100 = NULL,l_100 = NULL,m_100 = NULL,n_100 = NULL,f_12 = NULL;
  n_100 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      l_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_100);
  k_100 = t;
  t = l_100;
  t = needed_defs_0_0(t);
  m_100 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, m_100);
  f_12 = t;
  t = SSLsetAnnotations(f_12, k_100);
  return(t);
}
ATerm u_14 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(h_14, _fail, default_usage_0_0, t);
  return(t);
}
