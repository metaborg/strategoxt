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
ATerm term_d_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_r_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_u_38;
ATerm term_t_38;
ATerm term_n_38;
ATerm term_a_38;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_j_37;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_t_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_k_35;
ATerm term_i_35;
ATerm term_y_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_d_34;
ATerm term_v_33;
ATerm term_p_33;
ATerm term_m_33;
ATerm term_q_32;
ATerm term_l_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_f_31;
ATerm term_y_30;
ATerm term_n_30;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_q_19;
ATerm term_l_19;
ATerm term_j_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_x_18;
ATerm term_h_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_b_18;
ATerm term_j_17;
ATerm term_k_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_d_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_u_14;
void init_constant_terms (void)
{
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorNeeded", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("z_1", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Defined_1, term_m_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w_1", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Defined_1, term_p_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
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
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
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
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym__2, term_j_17, term_j_17);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym__2, term_e_32, term_f_32);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym__2, term_l_34, term_j_17);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_17);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym__2, term_t_34, term_u_14);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(sym__2, term_i_35, term_k_35);
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(sym__2, term_j_37, term_u_14);
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(sym__2, term_r_37, term_u_14);
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(sym__2, term_s_36, term_u_14);
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(sym__2, term_r_39, term_u_14);
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm ConstructorNeeded_0_0 (ATerm);
ATerm filter_1_0 (ATerm x_123 (ATerm), ATerm);
ATerm p_0 (ATerm);
ATerm w_0 (ATerm);
ATerm DeclareConstructorNeeded_0_0 (ATerm);
ATerm x_0 (ATerm);
ATerm y_7 (ATerm b_91, ATerm a_91, ATerm);
ATerm a_8 (ATerm q_65, ATerm r_65, ATerm s_65, ATerm);
ATerm giving_up_0_0 (ATerm);
ATerm z_0 (ATerm);
ATerm DefinitionExists_0_0 (ATerm);
ATerm sboundin_3_0 (ATerm w_110 (ATerm), ATerm x_110 (ATerm), ATerm y_110 (ATerm), ATerm);
ATerm a_1 (ATerm);
ATerm h_8 (ATerm h_41, ATerm g_41, ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm j_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm free_vars2_4_0 (ATerm e_126 (ATerm), ATerm f_126 (ATerm), ATerm g_126 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm h_126 (ATerm), ATerm);
ATerm o_1 (ATerm);
ATerm r_1 (ATerm);
ATerm a_2 (ATerm);
ATerm d_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm o_2 (ATerm);
ATerm q_2 (ATerm);
ATerm svars_arity_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm pat_td_1_0 (ATerm y_140 (ATerm), ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm u_3 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm g_4 (ATerm);
ATerm i_4 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm s_4 (ATerm);
ATerm x_4 (ATerm);
ATerm q_8 (ATerm u_86, ATerm v_86, ATerm w_86, ATerm);
ATerm j_42 (ATerm o_41, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm d_5 (ATerm);
ATerm f_5 (ATerm);
ATerm i_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm repeat_1_0 (ATerm d_128 (ATerm), ATerm);
ATerm u_5 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm v_5 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm v_112 (ATerm), ATerm);
ATerm t_8 (ATerm j_82, ATerm k_82, ATerm l_82, ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm r_111 (ATerm), ATerm);
ATerm d_6 (ATerm);
ATerm f_6 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm k_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm tuple_unzip_1_0 (ATerm t_115 (ATerm), ATerm);
ATerm MkDistApplication_0_0 (ATerm);
ATerm u_8 (ATerm o_52, ATerm p_52, ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm copy_1_0 (ATerm x_122 (ATerm), ATerm);
ATerm v_8 (ATerm t_64, ATerm u_64, ATerm);
ATerm last_0_0 (ATerm);
ATerm c_60 (ATerm g_57, ATerm h_57, ATerm i_57, ATerm j_57, ATerm);
ATerm d_60 (ATerm v_58, ATerm w_58, ATerm x_58, ATerm y_58, ATerm);
ATerm u_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm z_6 (ATerm);
ATerm DefineCongruence_0_0 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm choices_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm alltd_1_0 (ATerm j_113 (ATerm), ATerm);
ATerm d_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm a_111 (ATerm), ATerm b_111 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm q_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm z_7 (ATerm);
ATerm b_8 (ATerm);
ATerm JoinDefs2_0_0 (ATerm);
ATerm b_62 (ATerm m_60, ATerm n_60, ATerm q_60, ATerm r_60, ATerm);
ATerm get_definition_0_0 (ATerm);
ATerm at_end_1_0 (ATerm i_118 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm j_65 (ATerm e_64, ATerm);
ATerm conc_0_0 (ATerm);
ATerm a_9 (ATerm p_119 (ATerm), ATerm t_48, ATerm s_48, ATerm);
ATerm genzip_4_0 (ATerm d_116 (ATerm), ATerm e_116 (ATerm), ATerm f_116 (ATerm), ATerm g_116 (ATerm), ATerm);
ATerm g_8 (ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm e_9 (ATerm n_689, ATerm s_689, ATerm u_80, ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm o_8 (ATerm);
ATerm m_70 (ATerm y_68, ATerm z_68, ATerm a_69, ATerm);
ATerm p_8 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm g_9 (ATerm u_140 (ATerm), ATerm v_140 (ATerm), ATerm w_140 (ATerm), ATerm r_81, ATerm o_81, ATerm w_81, ATerm s_81, ATerm p_81, ATerm q_81, ATerm);
ATerm GnNextChangeGraph_3_0 (ATerm u_140 (ATerm), ATerm v_140 (ATerm), ATerm w_140 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm s_128 (ATerm), ATerm t_128 (ATerm), ATerm);
ATerm for_3_0 (ATerm v_128 (ATerm), ATerm w_128 (ATerm), ATerm x_128 (ATerm), ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm b_9 (ATerm);
ATerm c_9 (ATerm);
ATerm f_9 (ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_33 (ATerm m_32, ATerm n_32, ATerm);
ATerm extract_needed_defs_0_0 (ATerm);
ATerm j_9 (ATerm t_123 (ATerm), ATerm w_53, ATerm u_53, ATerm);
ATerm k_9 (ATerm x_119 (ATerm), ATerm y_119 (ATerm), ATerm z_48, ATerm y_48, ATerm);
ATerm l_9 (ATerm u_119 (ATerm), ATerm v_48, ATerm u_48, ATerm);
ATerm Arities_0_0 (ATerm);
ATerm n_9 (ATerm p_54, ATerm q_54, ATerm);
ATerm g_76 (ATerm w_75, ATerm);
ATerm Definitions_0_0 (ATerm);
ATerm foldr_3_0 (ATerm k_122 (ATerm), ATerm l_122 (ATerm), ATerm m_122 (ATerm), ATerm);
ATerm x_9 (ATerm);
ATerm c_10 (ATerm);
ATerm d_10 (ATerm);
ATerm e_10 (ATerm);
ATerm g_10 (ATerm);
ATerm h_10 (ATerm);
ATerm i_10 (ATerm);
ATerm j_10 (ATerm);
ATerm m_10 (ATerm);
ATerm RegisterSDefT_0_0 (ATerm);
ATerm needed_defs_0_0 (ATerm);
ATerm Cons_2_0 (ATerm b_96 (ATerm), ATerm c_96 (ATerm), ATerm);
ATerm q_9 (ATerm c_70, ATerm d_70, ATerm);
ATerm r_9 (ATerm q_73, ATerm r_73, ATerm);
ATerm t_9 (ATerm l_133 (ATerm), ATerm p_562, ATerm u_73, ATerm);
ATerm s_9 (ATerm m_73, ATerm n_73, ATerm);
ATerm r_10 (ATerm);
ATerm t_10 (ATerm);
ATerm v_10 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm n_136 (ATerm), ATerm);
ATerm m_80 (ATerm g_80, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm u_9 (ATerm s_73, ATerm);
ATerm v_9 (ATerm e_70, ATerm f_70, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm w_82 (ATerm b_81, ATerm);
ATerm x_82 (ATerm f_81, ATerm g_81, ATerm h_81, ATerm);
ATerm y_82 (ATerm z_81, ATerm a_82, ATerm b_82, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm x_10 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm c_118 (ATerm), ATerm);
ATerm p_9 (ATerm l_62, ATerm m_62, ATerm);
ATerm debug_1_0 (ATerm j_133 (ATerm), ATerm);
ATerm y_10 (ATerm);
ATerm a_11 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm w_134 (ATerm), ATerm);
ATerm e_11 (ATerm);
ATerm f_11 (ATerm);
ATerm j_11 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm l_11 (ATerm);
ATerm m_11 (ATerm);
ATerm q_11 (ATerm);
ATerm r_11 (ATerm);
ATerm s_11 (ATerm);
ATerm t_11 (ATerm);
ATerm v_11 (ATerm);
ATerm w_11 (ATerm);
ATerm y_11 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm b_10 (ATerm t_74, ATerm u_74, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm b_12 (ATerm);
ATerm c_12 (ATerm);
ATerm e_12 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm z_9 (ATerm e_54, ATerm f_54, ATerm d_54, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm l_12 (ATerm);
ATerm m_12 (ATerm);
ATerm o_12 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm w_9 (ATerm i_52, ATerm j_52, ATerm);
ATerm foldr_2_0 (ATerm i_122 (ATerm), ATerm j_122 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm u_12 (ATerm);
ATerm v_12 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm v_134 (ATerm), ATerm);
ATerm w_12 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm z_12 (ATerm);
ATerm need_help_1_0 (ATerm l_137 (ATerm), ATerm);
ATerm map_1_0 (ATerm s_117 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm y_9 (ATerm v_55, ATerm w_55, ATerm);
ATerm b_13 (ATerm);
ATerm c_13 (ATerm);
ATerm e_13 (ATerm);
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
ATerm parse_options_p__1_0 (ATerm o_139 (ATerm), ATerm);
ATerm m_13 (ATerm);
ATerm n_13 (ATerm);
ATerm o_13 (ATerm);
ATerm r_13 (ATerm);
ATerm parse_options_1_0 (ATerm n_139 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm n_137 (ATerm), ATerm o_137 (ATerm), ATerm p_137 (ATerm), ATerm q_137 (ATerm), ATerm);
ATerm w_13 (ATerm);
ATerm z_13 (ATerm);
ATerm b_14 (ATerm);
ATerm c_14 (ATerm);
ATerm d_14 (ATerm);
ATerm iowrap_3_0 (ATerm w_136 (ATerm), ATerm x_136 (ATerm), ATerm y_136 (ATerm), ATerm);
ATerm f_14 (ATerm);
ATerm h_14 (ATerm);
ATerm q_14 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL,q_0 = NULL,t_0 = NULL,y_0 = NULL;
  c_0 = t;
  t = term_u_14;
  t = whoami_0_0(t);
  e_0 = t;
  t = term_x_14;
  t_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_14), e_0), term_y_14);
  y_0 = t;
  t = SSL_printnl(t_0, y_0);
  t = term_a_15;
  q_0 = t;
  t = SSL_exit(q_0);
  t = c_0;
  return(t);
}
ATerm ConstructorNeeded_0_0 (ATerm t)
{
  ATerm p_1 = NULL,q_1 = NULL,t_1 = NULL;
  p_1 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      q_1 = ATgetArgument(t, 0);
      t_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_15 = t;
    int c_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_1 = NULL,u_1 = NULL;
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, q_1, (ATerm) ATempty);
        s_1 = t;
        t = term_d_15;
        u_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_15, (ATerm) ATmakeAppl(sym_OpDecl_2, q_1, (ATerm) ATempty));
        t = n_9(u_1, s_1, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm e_15 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_15) != ATmakeSymbol("z_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, q_1, t_1);
        ;
        LocalPopChoice(c_15);
      }
    else
      {
        t = b_15;
        {
          ATerm s_3 = NULL,w_3 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, q_1, (ATerm) ATempty);
          s_3 = t;
          t = term_d_15;
          w_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_15, (ATerm) ATmakeAppl(sym_OpDecl_2, q_1, (ATerm) ATempty));
          t = n_9(w_3, s_3, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm f_15 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) f_15) != ATmakeSymbol("w_1", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, q_1, t_1);
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm x_123 (ATerm), ATerm t)
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
        ATerm g_15 = t;
        int h_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_4 = NULL,q_4 = NULL,w_4 = NULL,h_0 = NULL;
            t = SSLgetAnnotations(l_2);
            f_4 = t;
            t = m_2;
            t = x_123(t);
            q_4 = t;
            t = n_2;
            t = filter_1_0(x_123, t);
            w_4 = t;
            t = (ATerm) ATinsert(CheckATermList(w_4), q_4);
            h_0 = t;
            t = SSLsetAnnotations(h_0, f_4);
            ;
            LocalPopChoice(h_15);
          }
        else
          {
            t = g_15;
            t = n_2;
            t = filter_1_0(x_123, t);
          }
      }
    }
  return(t);
}
ATerm p_0 (ATerm t)
{
  t = term_d_15;
  return(t);
}
ATerm w_0 (ATerm t)
{
  t = term_d_15;
  return(t);
}
ATerm DeclareConstructorNeeded_0_0 (ATerm t)
{
  ATerm r_2 = NULL,t_2 = NULL;
  r_2 = t;
  {
    ATerm i_15 = t;
    int j_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Cong_2))
          {
            t_2 = ATgetArgument(t, 0);
            {
              ATerm l_15 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(j_15);
        {
          ATerm y_2 = NULL,z_2 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, t_2, (ATerm) ATempty);
          y_2 = t;
          t = term_n_15;
          z_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, t_2, (ATerm) ATempty), term_n_15);
          t = j_9(p_0, y_2, z_2, t);
          t = r_2;
        }
      }
    else
      {
        t = i_15;
        {
          ATerm c_3 = NULL,d_3 = NULL;
          if(match_cons(t, sym_Op_2))
            {
              t_2 = ATgetArgument(t, 0);
              {
                ATerm o_15 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, t_2, (ATerm) ATempty);
          c_3 = t;
          t = term_q_15;
          d_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, t_2, (ATerm) ATempty), term_q_15);
          t = j_9(w_0, c_3, d_3, t);
          t = r_2;
        }
      }
  }
  return(t);
}
ATerm x_0 (ATerm t)
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
ATerm y_7 (ATerm b_91, ATerm a_91, ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL,h_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,v_0 = NULL,u_0 = NULL,s_0 = NULL;
  t = a_91;
  t = topdown_1_0(x_0, t);
  t = b_91;
  if(match_cons(t, sym_Signature_1))
    {
      g_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_91);
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
  s_0 = t;
  t = SSLsetAnnotations(s_0, n_3);
  r_3 = t;
  t = l_3;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_3), r_3);
  u_0 = t;
  t = SSLsetAnnotations(u_0, j_3);
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, m_3);
  v_0 = t;
  t = SSLsetAnnotations(v_0, f_3);
  h_3 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, a_91)), h_3));
  return(t);
}
ATerm a_8 (ATerm q_65, ATerm r_65, ATerm s_65, ATerm t)
{
  ATerm v_3 = NULL,x_3 = NULL;
  t = term_x_14;
  v_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_15), s_65), term_w_15), r_65), term_u_15), q_65), term_t_15);
  x_3 = t;
  t = SSL_printnl(v_3, x_3);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_15), s_65), term_w_15), r_65), term_u_15), q_65), term_t_15);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL;
  t = term_x_14;
  z_3 = t;
  t = (ATerm) ATinsert(ATempty, term_y_15);
  a_4 = t;
  t = SSL_printnl(z_3, a_4);
  t = term_a_15;
  y_3 = t;
  t = SSL_exit(y_3);
  t = (ATerm) ATinsert(ATempty, term_y_15);
  return(t);
}
ATerm z_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_16 = ATgetArgument(t, 0);
      if(((ATgetType(a_16) != AT_INT) || (ATgetInt((ATermInt) a_16) != 0)))
        _fail(t);
      {
        ATerm b_16 = ATgetArgument(t, 1);
        if(((ATgetType(b_16) != AT_INT) || (ATgetInt((ATermInt) b_16) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm t_4 = NULL,u_4 = NULL,v_4 = NULL,c_5 = NULL,e_5 = NULL;
  t_4 = t;
  if(match_cons(t, sym__2))
    {
      u_4 = ATgetArgument(t, 0);
      v_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_4;
  if(match_cons(t, sym__2))
    {
      c_5 = ATgetArgument(t, 0);
      e_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_5;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = e_5;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm c_16 = t;
    int d_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_5 = NULL,h_5 = NULL;
        t = u_4;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_16 = ATgetFirst((ATermList) t);
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
              t = fetch_1_0(z_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = j_16;
            }
          t = term_x_14;
          g_5 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, u_4), term_k_16);
          h_5 = t;
          t = SSL_printnl(g_5, h_5);
          t = (ATerm) ATinsert(ATinsert(ATempty, u_4), term_k_16);
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
          t = u_4;
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
                ATerm m_16 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(m_16) != AT_LIST) || !(ATisEmpty(m_16))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, u_4, (ATerm) ATmakeAppl(sym__2, p_5, q_5));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, u_4, (ATerm) ATmakeAppl(sym__2, p_5, q_5));
        }
      }
  }
  return(t);
}
ATerm sboundin_3_0 (ATerm w_110 (ATerm), ATerm x_110 (ATerm), ATerm y_110 (ATerm), ATerm t)
{
  ATerm n_10 = NULL,s_10 = NULL,u_10 = NULL,z_10 = NULL,b_11 = NULL;
  u_10 = t;
  if(match_cons(t, sym_Let_2))
    {
      z_10 = ATgetArgument(t, 0);
      b_11 = ATgetArgument(t, 1);
      {
        ATerm w_5 = NULL,a_6 = NULL,e_6 = NULL,g_1 = NULL;
        t = SSLgetAnnotations(u_10);
        w_5 = t;
        t = z_10;
        t = w_110(t);
        a_6 = t;
        t = b_11;
        t = w_110(t);
        e_6 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, a_6, e_6);
        g_1 = t;
        t = SSLsetAnnotations(g_1, w_5);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          z_10 = ATgetArgument(t, 0);
          b_11 = ATgetArgument(t, 1);
          n_10 = ATgetArgument(t, 2);
          {
            ATerm j_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL,h_1 = NULL;
            t = SSLgetAnnotations(u_10);
            j_7 = t;
            t = z_10;
            t = y_110(t);
            v_7 = t;
            t = b_11;
            t = y_110(t);
            w_7 = t;
            t = n_10;
            t = w_110(t);
            x_7 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, v_7, w_7, x_7);
            h_1 = t;
            t = SSLsetAnnotations(h_1, j_7);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              z_10 = ATgetArgument(t, 0);
              b_11 = ATgetArgument(t, 1);
              n_10 = ATgetArgument(t, 2);
              s_10 = ATgetArgument(t, 3);
              {
                ATerm m_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,i_1 = NULL;
                t = SSLgetAnnotations(u_10);
                m_8 = t;
                t = z_10;
                t = y_110(t);
                w_8 = t;
                t = b_11;
                t = y_110(t);
                x_8 = t;
                t = n_10;
                t = y_110(t);
                y_8 = t;
                t = s_10;
                t = w_110(t);
                z_8 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, w_8, x_8, y_8, z_8);
                i_1 = t;
                t = SSLsetAnnotations(i_1, m_8);
              }
            }
          else
            {
              ATerm f_10 = NULL,o_10 = NULL,p_10 = NULL,k_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  z_10 = ATgetArgument(t, 0);
                  b_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(u_10);
              f_10 = t;
              t = z_10;
              t = y_110(t);
              o_10 = t;
              t = b_11;
              t = w_110(t);
              p_10 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, o_10, p_10);
              k_1 = t;
              t = SSLsetAnnotations(k_1, f_10);
            }
        }
    }
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm p_11 = NULL;
  ATerm o_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          p_11 = ATgetArgument(t, 0);
          {
            ATerm q_16 = ATgetArgument(t, 1);
          }
          {
            ATerm r_16 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_16);
      t = p_11;
    }
  else
    {
      t = o_16;
      if(match_cons(t, sym_SDefT_4))
        {
          p_11 = ATgetArgument(t, 0);
          {
            ATerm s_16 = ATgetArgument(t, 1);
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
      t = p_11;
    }
  return(t);
}
ATerm h_8 (ATerm h_41, ATerm g_41, ATerm t)
{
  t = h_41;
  t = map_1_0(a_1, t);
  return(t);
}
ATerm c_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL;
  if(match_cons(t, sym__2))
    {
      n_11 = ATgetArgument(t, 0);
      o_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_9(f_1, n_11, o_11, t);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm u_11 = NULL;
  if(match_cons(t, sym__2))
    {
      u_11 = ATgetArgument(t, 0);
      if((u_11 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm g_12 = NULL,h_12 = NULL;
  if(match_cons(t, sym__2))
    {
      g_12 = ATgetArgument(t, 0);
      h_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_9(m_1, g_12, h_12, t);
  return(t);
}
ATerm m_1 (ATerm t)
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
ATerm n_1 (ATerm t)
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
ATerm free_vars2_4_0 (ATerm e_126 (ATerm), ATerm f_126 (ATerm), ATerm g_126 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm h_126 (ATerm), ATerm t)
{
  ATerm q_13 (ATerm t)
  {
    ATerm p_12 = NULL,q_12 = NULL,t_12 = NULL;
    if(((t_12 != NULL) && (t_12 != t)))
      _fail(t);
    else
      t_12 = t;
    {
      ATerm w_16 = t;
      int z_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_126(t);
          ;
          LocalPopChoice(z_16);
        }
      else
        {
          t = w_16;
          t = (ATerm) ATempty;
        }
      if(((p_12 != NULL) && (p_12 != t)))
        _fail(t);
      else
        p_12 = t;
      t = not_null(t_12);
      {
        ATerm a_17 = t;
        int b_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_12 = NULL,h_11 = NULL,i_11 = NULL;
            t = f_126(t);
            if(((y_12 != NULL) && (y_12 != t)))
              _fail(t);
            else
              y_12 = t;
            t = not_null(t_12);
            {
              ATerm b_1 (ATerm t)
              {
                ATerm w_10 = NULL;
                t = q_13(t);
                w_10 = t;
                t = (ATerm) ATmakeAppl(sym__2, w_10, not_null(y_12));
                t = a_9(h_126, w_10, not_null(y_12), t);
                return(t);
              }
              t = g_126(b_1, q_13, c_1, t);
              if(((i_11 != NULL) && (i_11 != t)))
                _fail(t);
              else
                i_11 = t;
              t = SSL_explode_term(not_null(i_11));
              if(match_cons(t, sym__2))
                {
                  ATerm c_17 = ATgetArgument(t, 0);
                  if(((h_11 != NULL) && (h_11 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    h_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = not_null(h_11);
              t = foldr_3_0(d_1, e_1, _id, t);
            }
            ;
            LocalPopChoice(b_17);
          }
        else
          {
            t = a_17;
            {
              ATerm z_11 = NULL;
              t = SSL_explode_term(not_null(t_12));
              if(match_cons(t, sym__2))
                {
                  ATerm e_17 = ATgetArgument(t, 0);
                  z_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = z_11;
              t = foldr_3_0(j_1, l_1, q_13, t);
            }
          }
        if(((q_12 != NULL) && (q_12 != t)))
          _fail(t);
        else
          q_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_12), not_null(q_12));
        t = l_9(n_1, not_null(p_12), not_null(q_12), t);
      }
    }
    return(t);
  }
  t = q_13(t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm v_13 = NULL,a_14 = NULL,g_14 = NULL,i_14 = NULL,j_14 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm f_17 = ATgetArgument(t, 0);
      if(match_cons(f_17, sym_SVar_1))
        {
          v_13 = ATgetArgument(f_17, 0);
        }
      else
        _fail(t);
      a_14 = ATgetArgument(t, 1);
      g_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_14;
  t = foldr_3_0(d_2, f_2, g_2, t);
  i_14 = t;
  t = g_14;
  t = foldr_3_0(h_2, i_2, j_2, t);
  j_14 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, v_13, (ATerm) ATmakeAppl(sym__2, i_14, j_14)));
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm o_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,v_14 = NULL;
  o_14 = t;
  if(match_cons(t, sym_Let_2))
    {
      r_14 = ATgetArgument(t, 0);
      s_14 = ATgetArgument(t, 1);
      t = o_14;
      t = h_8(r_14, s_14, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          r_14 = ATgetArgument(t, 0);
          s_14 = ATgetArgument(t, 1);
          t_14 = ATgetArgument(t, 2);
          t = s_14;
          t = map_1_0(k_2, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              r_14 = ATgetArgument(t, 0);
              s_14 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, r_14);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  r_14 = ATgetArgument(t, 0);
                  s_14 = ATgetArgument(t, 1);
                  t_14 = ATgetArgument(t, 2);
                  v_14 = ATgetArgument(t, 3);
                  t = s_14;
                  t = map_1_0(o_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      r_14 = ATgetArgument(t, 0);
                      s_14 = ATgetArgument(t, 1);
                      t_14 = ATgetArgument(t, 2);
                      v_14 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_14;
                  t = map_1_0(q_2, t);
                }
            }
        }
    }
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm t_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_17 = ATgetArgument(t, 0);
      if(match_cons(g_17, sym__2))
        {
          t_16 = ATgetArgument(g_17, 0);
          {
            ATerm i_17 = ATgetArgument(g_17, 1);
          }
        }
      else
        _fail(t);
      if((t_16 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_j_17;
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
  t = w_9(k_14, l_14, t);
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
  ATerm m_14 = NULL,n_14 = NULL;
  if(match_cons(t, sym__2))
    {
      m_14 = ATgetArgument(t, 0);
      n_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9(m_14, n_14, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_a_15;
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm k_15 = NULL;
  ATerm k_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_15 = ATgetArgument(t, 0);
          {
            ATerm p_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_17);
      t = k_15;
    }
  else
    {
      t = k_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_15;
    }
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm v_15 = NULL;
  ATerm q_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_15 = ATgetArgument(t, 0);
          {
            ATerm t_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_17);
      t = v_15;
    }
  else
    {
      t = q_17;
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
ATerm q_2 (ATerm t)
{
  ATerm n_16 = NULL;
  ATerm x_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_16 = ATgetArgument(t, 0);
          {
            ATerm a_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_17);
      t = n_16;
    }
  else
    {
      t = x_17;
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
  t = free_vars2_4_0(o_1, r_1, sboundin_3_0, a_2, t);
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL,y_23 = NULL;
  u_23 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      y_23 = ATgetArgument(t, 0);
      t_23 = ATgetArgument(t, 1);
      {
        ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL;
        t = u_23;
        t = new_0_0(t);
        c_24 = t;
        t = new_0_0(t);
        d_24 = t;
        t = new_0_0(t);
        e_24 = t;
        t = new_0_0(t);
        f_24 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_24), e_24), d_24), c_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, c_24), (ATerm) ATmakeAppl(sym_Var_1, e_24))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, y_23, (ATerm)ATmakeAppl(sym_Var_1, c_24), (ATerm) ATmakeAppl(sym_Var_1, d_24)), (ATerm) ATmakeAppl(sym_BAM_3, t_23, (ATerm)ATmakeAppl(sym_Var_1, e_24), (ATerm) ATmakeAppl(sym_Var_1, f_24)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_b_18, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, f_24)), (ATerm) ATmakeAppl(sym_Var_1, d_24))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          y_23 = ATgetArgument(t, 0);
          {
            ATerm j_24 = NULL,m_24 = NULL,o_24 = NULL,p_24 = NULL;
            t = not_null(u_23);
            t = new_0_0(t);
            if(((o_24 != NULL) && (o_24 != t)))
              _fail(t);
            else
              o_24 = t;
            t = not_null(y_23);
            {
              ATerm s_2 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((j_24 != NULL) && (j_24 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      j_24 = ATgetArgument(t, 0);
                    if(((m_24 != NULL) && (m_24 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      m_24 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_24));
                return(t);
              }
              t = oncetd_1_0(s_2, t);
              if(((p_24 != NULL) && (p_24 != t)))
                _fail(t);
              else
                p_24 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_24)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_b_18, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_24)), not_null(j_24))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_24))), (ATerm) ATmakeAppl(sym_Build_1, not_null(p_24)))));
            }
          }
        }
      else
        {
          ATerm t_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,b_25 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              if(((y_23 != NULL) && (y_23 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                y_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(u_23);
          t = new_0_0(t);
          if(((w_24 != NULL) && (w_24 != t)))
            _fail(t);
          else
            w_24 = t;
          t = new_0_0(t);
          if(((x_24 != NULL) && (x_24 != t)))
            _fail(t);
          else
            x_24 = t;
          t = not_null(y_23);
          {
            ATerm u_2 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((t_24 != NULL) && (t_24 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    t_24 = ATgetArgument(t, 0);
                  if(((v_24 != NULL) && (v_24 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    v_24 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_24));
              return(t);
            }
            t = oncetd_1_0(u_2, t);
            if(((b_25 != NULL) && (b_25 != t)))
              _fail(t);
            else
              b_25 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_24)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(b_25)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(x_24)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_24))), (ATerm) ATmakeAppl(sym_PrimT_3, term_d_18, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_24)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_24)), (ATerm) ATmakeAppl(sym_Op_2, term_e_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_24)), not_null(t_24)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm f_25 = NULL,i_25 = NULL;
  if(((f_25 != NULL) && (f_25 != t)))
    _fail(t);
  else
    f_25 = t;
  if(match_cons(t, sym_Match_1))
    {
      if(((i_25 != NULL) && (i_25 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL,p_25 = NULL;
        t = not_null(f_25);
        t = new_0_0(t);
        if(((n_25 != NULL) && (n_25 != t)))
          _fail(t);
        else
          n_25 = t;
        t = not_null(i_25);
        {
          ATerm v_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
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
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_25)), not_null(l_25));
            return(t);
          }
          t = pat_td_1_0(v_2, t);
          if(((p_25 != NULL) && (p_25 != t)))
            _fail(t);
          else
            p_25 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(p_25)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_h_18, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_25)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(m_25))))));
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
              ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL;
              t = not_null(f_25);
              t = new_0_0(t);
              if(((t_25 != NULL) && (t_25 != t)))
                _fail(t);
              else
                t_25 = t;
              t = not_null(i_25);
              {
                ATerm w_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((s_25 != NULL) && (s_25 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        s_25 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_25));
                  return(t);
                }
                t = pat_td_1_0(w_2, t);
                if(((u_25 != NULL) && (u_25 != t)))
                  _fail(t);
                else
                  u_25 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(u_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_25))), not_null(s_25))));
              }
              ;
              LocalPopChoice(j_18);
            }
          else
            {
              t = i_18;
              {
                ATerm x_25 = NULL,y_25 = NULL,c_26 = NULL,d_26 = NULL;
                t = not_null(f_25);
                t = new_0_0(t);
                if(((c_26 != NULL) && (c_26 != t)))
                  _fail(t);
                else
                  c_26 = t;
                t = not_null(i_25);
                {
                  ATerm x_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((y_25 != NULL) && (y_25 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          y_25 = ATgetArgument(t, 0);
                        if(((x_25 != NULL) && (x_25 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          x_25 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_26));
                    return(t);
                  }
                  t = pat_td_1_0(x_2, t);
                  if(((d_26 != NULL) && (d_26 != t)))
                    _fail(t);
                  else
                    d_26 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(d_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_26))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_25)), not_null(y_25)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm y_140 (ATerm), ATerm t)
{
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_140(t);
      ;
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
      {
        ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL;
        if(((c_30 != NULL) && (c_30 != t)))
          _fail(t);
        else
          c_30 = t;
        if(match_cons(t, sym_Op_2))
          {
            d_30 = ATgetArgument(t, 0);
            e_30 = ATgetArgument(t, 1);
            {
              ATerm x_12 = NULL,d_13 = NULL,v_1 = NULL;
              t = SSLgetAnnotations(not_null(c_30));
              if(((x_12 != NULL) && (x_12 != t)))
                _fail(t);
              else
                x_12 = t;
              t = not_null(e_30);
              {
                ATerm a_3 (ATerm t)
                {
                  t = pat_td_1_0(y_140, t);
                  return(t);
                }
                t = fetch_1_0(a_3, t);
                if(((d_13 != NULL) && (d_13 != t)))
                  _fail(t);
                else
                  d_13 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, not_null(d_30), not_null(d_13));
                if(((v_1 != NULL) && (v_1 != t)))
                  _fail(t);
                else
                  v_1 = t;
                t = SSLsetAnnotations(not_null(v_1), not_null(x_12));
              }
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                d_30 = ATgetArgument(t, 0);
                e_30 = ATgetArgument(t, 1);
                {
                  ATerm t_18 = t;
                  int u_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_13 = NULL,y_13 = NULL,x_1 = NULL;
                      t = SSLgetAnnotations(not_null(c_30));
                      u_13 = t;
                      t = not_null(e_30);
                      t = pat_td_1_0(y_140, t);
                      y_13 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, not_null(d_30), y_13);
                      x_1 = t;
                      t = SSLsetAnnotations(x_1, u_13);
                      ;
                      LocalPopChoice(u_18);
                    }
                  else
                    {
                      t = t_18;
                      {
                        ATerm p_14 = NULL,w_14 = NULL,y_1 = NULL;
                        t = SSLgetAnnotations(not_null(c_30));
                        p_14 = t;
                        t = not_null(d_30);
                        t = pat_td_1_0(y_140, t);
                        w_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, w_14, not_null(e_30));
                        y_1 = t;
                        t = SSLsetAnnotations(y_1, p_14);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    d_30 = ATgetArgument(t, 0);
                    e_30 = ATgetArgument(t, 1);
                    b_30 = ATgetArgument(t, 2);
                    {
                      ATerm z_15 = NULL,e_16 = NULL,b_2 = NULL;
                      t = SSLgetAnnotations(not_null(c_30));
                      if(((z_15 != NULL) && (z_15 != t)))
                        _fail(t);
                      else
                        z_15 = t;
                      t = not_null(b_30);
                      {
                        ATerm b_3 (ATerm t)
                        {
                          t = pat_td_1_0(y_140, t);
                          return(t);
                        }
                        t = fetch_1_0(b_3, t);
                        if(((e_16 != NULL) && (e_16 != t)))
                          _fail(t);
                        else
                          e_16 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, not_null(d_30), not_null(e_30), not_null(e_16));
                        if(((b_2 != NULL) && (b_2 != t)))
                          _fail(t);
                        else
                          b_2 = t;
                        t = SSLsetAnnotations(not_null(b_2), not_null(z_15));
                      }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        d_30 = ATgetArgument(t, 0);
                        e_30 = ATgetArgument(t, 1);
                        b_30 = ATgetArgument(t, 2);
                        {
                          ATerm d_17 = NULL,h_17 = NULL,c_2 = NULL;
                          t = SSLgetAnnotations(not_null(c_30));
                          if(((d_17 != NULL) && (d_17 != t)))
                            _fail(t);
                          else
                            d_17 = t;
                          t = not_null(b_30);
                          {
                            ATerm e_3 (ATerm t)
                            {
                              t = pat_td_1_0(y_140, t);
                              return(t);
                            }
                            t = fetch_1_0(e_3, t);
                            if(((h_17 != NULL) && (h_17 != t)))
                              _fail(t);
                            else
                              h_17 = t;
                            t = (ATerm) ATmakeAppl(sym_CallT_3, not_null(d_30), not_null(e_30), not_null(h_17));
                            if(((c_2 != NULL) && (c_2 != t)))
                              _fail(t);
                            else
                              c_2 = t;
                            t = SSLsetAnnotations(not_null(c_2), not_null(d_17));
                          }
                        }
                      }
                    else
                      {
                        ATerm v_17 = NULL,z_17 = NULL,e_2 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            if(((d_30 != NULL) && (d_30 != ATgetArgument(t, 0))))
                              _fail(ATgetArgument(t, 0));
                            else
                              d_30 = ATgetArgument(t, 0);
                            if(((e_30 != NULL) && (e_30 != ATgetArgument(t, 1))))
                              _fail(ATgetArgument(t, 1));
                            else
                              e_30 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(not_null(c_30));
                        v_17 = t;
                        t = not_null(e_30);
                        t = pat_td_1_0(y_140, t);
                        z_17 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, not_null(d_30), z_17);
                        e_2 = t;
                        t = SSLsetAnnotations(e_2, v_17);
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
  ATerm u_30 = NULL,v_30 = NULL;
  if(((u_30 != NULL) && (u_30 != t)))
    _fail(t);
  else
    u_30 = t;
  if(match_cons(t, sym_Build_1))
    {
      if(((v_30 != NULL) && (v_30 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_30 = NULL,x_30 = NULL,z_30 = NULL,a_31 = NULL;
        t = not_null(u_30);
        t = new_0_0(t);
        if(((z_30 != NULL) && (z_30 != t)))
          _fail(t);
        else
          z_30 = t;
        t = not_null(v_30);
        {
          ATerm i_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((w_30 != NULL) && (w_30 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_30 = ATgetArgument(t, 0);
                if(((x_30 != NULL) && (x_30 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  x_30 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_30));
            return(t);
          }
          t = pat_td_1_0(i_3, t);
          if(((a_31 != NULL) && (a_31 != t)))
            _fail(t);
          else
            a_31 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_30)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_x_18, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_30)), not_null(w_30))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_30))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(a_31))));
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
              ATerm b_31 = NULL,h_31 = NULL,i_31 = NULL;
              t = not_null(u_30);
              t = new_0_0(t);
              if(((h_31 != NULL) && (h_31 != t)))
                _fail(t);
              else
                h_31 = t;
              t = not_null(v_30);
              {
                ATerm o_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((b_31 != NULL) && (b_31 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        b_31 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_31));
                  return(t);
                }
                t = pat_td_1_0(o_3, t);
                if(((i_31 != NULL) && (i_31 != t)))
                  _fail(t);
                else
                  i_31 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_31), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_31))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(i_31))));
              }
              ;
              LocalPopChoice(z_18);
            }
          else
            {
              t = y_18;
              {
                ATerm j_31 = NULL,o_31 = NULL,q_31 = NULL,r_31 = NULL;
                t = not_null(u_30);
                t = new_0_0(t);
                if(((q_31 != NULL) && (q_31 != t)))
                  _fail(t);
                else
                  q_31 = t;
                t = not_null(v_30);
                {
                  ATerm t_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((j_31 != NULL) && (j_31 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          j_31 = ATgetArgument(t, 0);
                        if(((o_31 != NULL) && (o_31 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          o_31 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_31));
                    return(t);
                  }
                  t = pat_td_1_0(t_3, t);
                  if(((r_31 != NULL) && (r_31 != t)))
                    _fail(t);
                  else
                    r_31 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(j_31), not_null(o_31), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_31)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(r_31))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL,k_34 = NULL;
  h_34 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_34 = ATgetFirst((ATermList) t);
      k_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,r_18 = NULL,s_18 = NULL,b_4 = NULL,p_2 = NULL;
        t = SSLgetAnnotations(h_34);
        o_18 = t;
        t = i_34;
        t = n_0(t);
        r_18 = t;
        t = (ATerm) ATinsert(CheckATermList(k_34), r_18);
        p_2 = t;
        t = SSLsetAnnotations(p_2, o_18);
        s_18 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_18 = ATgetFirst((ATermList) t);
            m_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_18);
        k_18 = t;
        t = m_18;
        {
          ATerm c_19 = t;
          int d_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(d_19);
            }
          else
            {
              t = c_19;
            }
          n_18 = t;
          t = (ATerm) ATinsert(CheckATermList(n_18), l_18);
          b_4 = t;
          t = SSLsetAnnotations(b_4, k_18);
        }
        ;
        LocalPopChoice(b_19);
      }
    else
      {
        t = a_19;
        {
          ATerm o_19 = NULL,z_19 = NULL,h_4 = NULL;
          t = SSLgetAnnotations(h_34);
          o_19 = t;
          t = k_34;
          t = map1_1_0(n_0, t);
          z_19 = t;
          t = (ATerm) ATinsert(CheckATermList(z_19), i_34);
          h_4 = t;
          t = SSLsetAnnotations(h_4, o_19);
        }
      }
  }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm m_36 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      m_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, m_36, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_g_19), term_g_19));
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL;
  p_36 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      o_36 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, o_36, term_g_19);
    }
  else
    {
      t = p_36;
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm g_37 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      g_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, g_37, term_g_19);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm h_37 = NULL,i_37 = NULL;
  i_37 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_37 = ATgetArgument(t, 0);
      {
        ATerm h_19 = t;
        int i_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, h_37, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_g_19), term_g_19));
            ;
            LocalPopChoice(i_19);
          }
        else
          {
            t = h_19;
            t = i_37;
          }
      }
    }
  else
    {
      t = i_37;
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm e_38 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      e_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, e_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_g_19), term_g_19));
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL;
  g_38 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      f_38 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, f_38, term_g_19);
    }
  else
    {
      t = g_38;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm e_35 = NULL,f_35 = NULL,g_35 = NULL,j_35 = NULL,l_35 = NULL,m_35 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      l_35 = ATgetArgument(t, 0);
      m_35 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, l_35, m_35);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          l_35 = ATgetArgument(t, 0);
          t = l_35;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_35 = ATgetFirst((ATermList) t);
              f_35 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, e_35, (ATerm) ATmakeAppl(sym_LChoices_1, f_35));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_j_19;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              l_35 = ATgetArgument(t, 0);
              t = l_35;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_35 = ATgetFirst((ATermList) t);
                  f_35 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, e_35, (ATerm) ATmakeAppl(sym_Choices_1, f_35));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_j_19;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  l_35 = ATgetArgument(t, 0);
                  t = l_35;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      e_35 = ATgetFirst((ATermList) t);
                      f_35 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_35, (ATerm) ATmakeAppl(sym_Seqs_1, f_35));
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
                      l_35 = ATgetArgument(t, 0);
                      m_35 = ATgetArgument(t, 1);
                      j_35 = ATgetArgument(t, 2);
                      g_35 = ATgetArgument(t, 3);
                      {
                        ATerm g_36 = NULL,l_36 = NULL;
                        t = m_35;
                        t = map1_1_0(u_3, t);
                        g_36 = t;
                        t = j_35;
                        t = map1_1_0(c_4, t);
                        l_36 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, l_35, g_36, l_36, g_35);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          l_35 = ATgetArgument(t, 0);
                          m_35 = ATgetArgument(t, 1);
                          j_35 = ATgetArgument(t, 2);
                          g_35 = ATgetArgument(t, 3);
                          {
                            ATerm m_19 = t;
                            int n_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm y_36 = NULL,f_37 = NULL;
                                t = j_35;
                                t = map1_1_0(d_4, t);
                                y_36 = t;
                                t = m_35;
                                t = map_1_0(e_4, t);
                                f_37 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, l_35, f_37, y_36, g_35);
                                ;
                                LocalPopChoice(n_19);
                              }
                            else
                              {
                                t = m_19;
                                {
                                  ATerm b_38 = NULL,d_38 = NULL;
                                  t = m_35;
                                  t = map1_1_0(g_4, t);
                                  b_38 = t;
                                  t = j_35;
                                  t = map_1_0(i_4, t);
                                  d_38 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, l_35, b_38, d_38, g_35);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              l_35 = ATgetArgument(t, 0);
                              m_35 = ATgetArgument(t, 1);
                              j_35 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, m_35, (ATerm) ATmakeAppl(sym_Op_2, term_e_18, (ATerm) ATinsert(ATinsert(ATempty, j_35), l_35)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  l_35 = ATgetArgument(t, 0);
                                  m_35 = ATgetArgument(t, 1);
                                  j_35 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, j_35)), l_35), (ATerm) ATmakeAppl(sym_Build_1, m_35)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      l_35 = ATgetArgument(t, 0);
                                      m_35 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_35, (ATerm) ATmakeAppl(sym_Match_1, m_35));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          l_35 = ATgetArgument(t, 0);
                                          m_35 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, l_35), m_35);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              l_35 = ATgetArgument(t, 0);
                                              m_35 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_35), l_35);
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
      ATerm y_39 = NULL,g_40 = NULL,h_40 = NULL,l_4 = NULL;
      h_40 = t;
      if(match_cons(t, sym_Var_1))
        {
          g_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_40);
      y_39 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, g_40);
      l_4 = t;
      t = SSLsetAnnotations(l_4, y_39);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_19;
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_19;
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm i_40 = NULL,j_40 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_40 = ATgetFirst((ATermList) t);
      j_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_40, j_40);
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_19 = ATgetArgument(t, 0);
      if(match_cons(v_19, sym__2))
        {
          u_40 = ATgetArgument(v_19, 0);
          v_40 = ATgetArgument(v_19, 1);
        }
      else
        _fail(t);
      {
        ATerm w_19 = ATgetArgument(t, 1);
        if(match_cons(w_19, sym__2))
          {
            w_40 = ATgetArgument(w_19, 0);
            x_40 = ATgetArgument(w_19, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_40), u_40), (ATerm) ATinsert(CheckATermList(x_40), v_40));
  return(t);
}
ATerm p_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_19;
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_40 = ATgetFirst((ATermList) t);
      z_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_40, z_40);
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm c_41 = NULL,e_41 = NULL,f_41 = NULL,i_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_19 = ATgetArgument(t, 0);
      if(match_cons(x_19, sym__2))
        {
          c_41 = ATgetArgument(x_19, 0);
          e_41 = ATgetArgument(x_19, 1);
        }
      else
        _fail(t);
      {
        ATerm a_20 = ATgetArgument(t, 1);
        if(match_cons(a_20, sym__2))
          {
            f_41 = ATgetArgument(a_20, 0);
            i_41 = ATgetArgument(a_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_41), c_41), (ATerm) ATinsert(CheckATermList(i_41), e_41));
  return(t);
}
ATerm q_8 (ATerm u_86, ATerm v_86, ATerm w_86, ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,m_4 = NULL;
  t = w_86;
  t = fetch_1_0(j_4, t);
  t = w_86;
  t = genzip_4_0(k_4, n_4, o_4, LiftPrimArg_0_0, t);
  x_39 = t;
  if(match_cons(t, sym__2))
    {
      t_39 = ATgetArgument(t, 0);
      u_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_39);
  s_39 = t;
  t = t_39;
  t = concat_0_0(t);
  v_39 = t;
  t = u_39;
  t = genzip_4_0(p_4, s_4, x_4, _id, t);
  w_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_39, w_39);
  m_4 = t;
  t = SSLsetAnnotations(m_4, s_39);
  if(match_cons(t, sym__2))
    {
      n_39 = ATgetArgument(t, 0);
      {
        ATerm b_20 = ATgetArgument(t, 1);
        if(match_cons(b_20, sym__2))
          {
            o_39 = ATgetArgument(b_20, 0);
            p_39 = ATgetArgument(b_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, n_39, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, o_39), (ATerm) ATmakeAppl(sym_CallT_3, u_86, v_86, p_39)));
  return(t);
}
ATerm j_42 (ATerm o_41, ATerm t)
{
  ATerm r_41 = NULL;
  t = o_41;
  {
    ATerm c_20 = t;
    if((PushChoice() == 0))
      {
        ATerm s_41 = NULL,x_41 = NULL,b_42 = NULL,r_4 = NULL;
        b_42 = t;
        if(match_cons(t, sym_Var_1))
          {
            x_41 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_42);
        s_41 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, x_41);
        r_4 = t;
        t = SSLsetAnnotations(r_4, s_41);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_20;
      }
    t = new_0_0(t);
    r_41 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, r_41), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, o_41), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_41)))), (ATerm) ATmakeAppl(sym_Var_1, r_41)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm d_42 = NULL,h_42 = NULL;
  d_42 = t;
  if(match_cons(t, sym_Var_1))
    {
      h_42 = ATgetArgument(t, 0);
      {
        ATerm d_20 = t;
        int e_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_42(d_42, t);
            ;
            LocalPopChoice(e_20);
          }
        else
          {
            t = d_20;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_l_19, (ATerm) ATmakeAppl(sym_Var_1, h_42)));
          }
      }
    }
  else
    {
      t = j_42(d_42, t);
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm l_20 = t;
  if((PushChoice() == 0))
    {
      ATerm k_21 = NULL,l_21 = NULL,o_21 = NULL,j_5 = NULL;
      o_21 = t;
      if(match_cons(t, sym_Var_1))
        {
          l_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_21);
      k_21 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, l_21);
      j_5 = t;
      t = SSLsetAnnotations(j_5, k_21);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_20;
    }
  return(t);
}
ATerm z_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_19;
  return(t);
}
ATerm a_5 (ATerm t)
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
ATerm b_5 (ATerm t)
{
  ATerm u_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_20 = ATgetArgument(t, 0);
      if(match_cons(o_20, sym__2))
        {
          u_21 = ATgetArgument(o_20, 0);
          x_21 = ATgetArgument(o_20, 1);
        }
      else
        _fail(t);
      {
        ATerm p_20 = ATgetArgument(t, 1);
        if(match_cons(p_20, sym__2))
          {
            y_21 = ATgetArgument(p_20, 0);
            z_21 = ATgetArgument(p_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_21), u_21), (ATerm) ATinsert(CheckATermList(z_21), x_21));
  return(t);
}
ATerm d_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_19;
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm a_22 = NULL,j_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_22 = ATgetFirst((ATermList) t);
      j_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_22, j_22);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm k_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_20 = ATgetArgument(t, 0);
      if(match_cons(q_20, sym__2))
        {
          k_22 = ATgetArgument(q_20, 0);
          q_22 = ATgetArgument(q_20, 1);
        }
      else
        _fail(t);
      {
        ATerm r_20 = ATgetArgument(t, 1);
        if(match_cons(r_20, sym__2))
          {
            r_22 = ATgetArgument(r_20, 0);
            s_22 = ATgetArgument(r_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_22), k_22), (ATerm) ATinsert(CheckATermList(s_22), q_22));
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm s_20 = t;
  if((PushChoice() == 0))
    {
      ATerm l_24 = NULL,r_24 = NULL,s_24 = NULL,z_5 = NULL;
      s_24 = t;
      if(match_cons(t, sym_Var_1))
        {
          r_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_24);
      l_24 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, r_24);
      z_5 = t;
      t = SSLsetAnnotations(z_5, l_24);
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
  t = term_q_19;
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm u_24 = NULL,y_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_24 = ATgetFirst((ATermList) t);
      y_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_24, y_24);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL,c_25 = NULL,d_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_20 = ATgetArgument(t, 0);
      if(match_cons(t_20, sym__2))
        {
          z_24 = ATgetArgument(t_20, 0);
          a_25 = ATgetArgument(t_20, 1);
        }
      else
        _fail(t);
      {
        ATerm n_21 = ATgetArgument(t, 1);
        if(match_cons(n_21, sym__2))
          {
            c_25 = ATgetArgument(n_21, 0);
            d_25 = ATgetArgument(n_21, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_25), z_24), (ATerm) ATinsert(CheckATermList(d_25), a_25));
  return(t);
}
ATerm r_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_19;
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm e_25 = NULL,g_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_25 = ATgetFirst((ATermList) t);
      g_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_25, g_25);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm h_25 = NULL,k_25 = NULL,o_25 = NULL,r_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_21 = ATgetArgument(t, 0);
      if(match_cons(s_21, sym__2))
        {
          h_25 = ATgetArgument(s_21, 0);
          k_25 = ATgetArgument(s_21, 1);
        }
      else
        _fail(t);
      {
        ATerm p_22 = ATgetArgument(t, 1);
        if(match_cons(p_22, sym__2))
          {
            o_25 = ATgetArgument(p_22, 0);
            r_25 = ATgetArgument(p_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_25), h_25), (ATerm) ATinsert(CheckATermList(r_25), k_25));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL;
  e_46 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      f_46 = ATgetArgument(t, 0);
      g_46 = ATgetArgument(t, 1);
      d_46 = ATgetArgument(t, 2);
      {
        ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,k_5 = NULL;
        t = d_46;
        t = fetch_1_0(y_4, t);
        t = d_46;
        t = genzip_4_0(z_4, a_5, b_5, LiftPrimArg_0_0, t);
        c_21 = t;
        if(match_cons(t, sym__2))
          {
            y_20 = ATgetArgument(t, 0);
            z_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_21);
        x_20 = t;
        t = y_20;
        t = concat_0_0(t);
        a_21 = t;
        t = z_20;
        t = genzip_4_0(d_5, f_5, i_5, _id, t);
        b_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_21, b_21);
        k_5 = t;
        t = SSLsetAnnotations(k_5, x_20);
        if(match_cons(t, sym__2))
          {
            u_20 = ATgetArgument(t, 0);
            {
              ATerm t_22 = ATgetArgument(t, 1);
              if(match_cons(t_22, sym__2))
                {
                  v_20 = ATgetArgument(t_22, 0);
                  w_20 = ATgetArgument(t_22, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, u_20, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, v_20), (ATerm) ATmakeAppl(sym_PrimT_3, f_46, g_46, w_20)));
      }
    }
  else
    {
      ATerm s_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,a_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,k_24 = NULL,b_6 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          f_46 = ATgetArgument(t, 0);
          g_46 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_46;
      t = fetch_1_0(l_5, t);
      t = g_46;
      t = genzip_4_0(m_5, n_5, o_5, LiftPrimArg_0_0, t);
      k_24 = t;
      if(match_cons(t, sym__2))
        {
          a_24 = ATgetArgument(t, 0);
          g_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_24);
      x_23 = t;
      t = a_24;
      t = concat_0_0(t);
      h_24 = t;
      t = g_24;
      t = genzip_4_0(r_5, s_5, t_5, _id, t);
      i_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_24, i_24);
      b_6 = t;
      t = SSLsetAnnotations(b_6, x_23);
      if(match_cons(t, sym__2))
        {
          s_23 = ATgetArgument(t, 0);
          {
            ATerm x_22 = ATgetArgument(t, 1);
            if(match_cons(x_22, sym__2))
              {
                v_23 = ATgetArgument(x_22, 0);
                w_23 = ATgetArgument(x_22, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, s_23, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, v_23), (ATerm) ATmakeAppl(sym_PrimT_3, f_46, (ATerm)ATempty, w_23)));
    }
  return(t);
}
ATerm repeat_1_0 (ATerm d_128 (ATerm), ATerm t)
{
  ATerm m_46 (ATerm t)
  {
    ATerm y_22 = t;
    int z_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_128(t);
        t = m_46(t);
        ;
        LocalPopChoice(z_22);
      }
    else
      {
        t = y_22;
      }
    return(t);
  }
  t = m_46(t);
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL;
  f_47 = t;
  if(match_cons(t, sym_Con_3))
    {
      c_47 = ATgetArgument(t, 0);
      d_47 = ATgetArgument(t, 1);
      e_47 = ATgetArgument(t, 2);
      {
        ATerm i_26 = NULL,i_6 = NULL;
        t = SSLgetAnnotations(f_47);
        i_26 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, c_47, d_47, e_47);
        i_6 = t;
        t = SSLsetAnnotations(i_6, i_26);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = f_47;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm a_23 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(u_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_23;
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm p_48 = NULL,q_48 = NULL,r_48 = NULL,x_48 = NULL;
  q_48 = t;
  if(match_cons(t, sym_Con_3))
    {
      r_48 = ATgetArgument(t, 0);
      x_48 = ATgetArgument(t, 1);
      p_48 = ATgetArgument(t, 2);
      {
        ATerm d_27 = NULL,l_6 = NULL;
        t = SSLgetAnnotations(q_48);
        d_27 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, r_48, x_48, p_48);
        l_6 = t;
        t = SSLsetAnnotations(l_6, d_27);
      }
    }
  else
    {
      ATerm g_28 = NULL,m_6 = NULL;
      if(match_cons(t, sym_App_2))
        {
          r_48 = ATgetArgument(t, 0);
          x_48 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_48);
      g_28 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, r_48, x_48);
      m_6 = t;
      t = SSLsetAnnotations(m_6, g_28);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm e_23 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(v_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_23;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm m_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      m_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_49;
  if(match_cons(t, sym_StratRule_3))
    {
      n_49 = ATgetArgument(t, 0);
      o_49 = ATgetArgument(t, 1);
      p_49 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, o_49), (ATerm) ATmakeAppl(sym_Where_1, p_49)), n_49));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          n_49 = ATgetArgument(t, 0);
          o_49 = ATgetArgument(t, 1);
          p_49 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = n_49;
      t = pureterm_0_0(t);
      t = o_49;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, o_49)), (ATerm) ATmakeAppl(sym_Where_1, p_49)), (ATerm) ATmakeAppl(sym_Match_1, n_49)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm v_112 (ATerm), ATerm t)
{
  ATerm x_49 (ATerm t)
  {
    ATerm i_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_112(t);
        ;
        LocalPopChoice(j_23);
      }
    else
      {
        t = i_23;
        t = SRTS_one(x_49, t);
      }
    return(t);
  }
  t = x_49(t);
  return(t);
}
ATerm t_8 (ATerm j_82, ATerm k_82, ATerm l_82, ATerm t)
{
  ATerm y_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL,d_50 = NULL,i_50 = NULL;
  t = new_0_0(t);
  if(((c_50 != NULL) && (c_50 != t)))
    _fail(t);
  else
    c_50 = t;
  t = not_null(j_82);
  {
    ATerm x_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm k_23 = ATgetArgument(t, 0);
          if(match_cons(k_23, sym_Var_1))
            {
              if(((b_50 != NULL) && (b_50 != ATgetArgument(k_23, 0))))
                _fail(ATgetArgument(k_23, 0));
              else
                b_50 = ATgetArgument(k_23, 0);
            }
          else
            _fail(t);
          if(((z_49 != NULL) && (z_49 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            z_49 = ATgetArgument(t, 1);
          {
            ATerm l_23 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_50));
      return(t);
    }
    t = oncetd_1_0(x_5, t);
    if(((d_50 != NULL) && (d_50 != t)))
      _fail(t);
    else
      d_50 = t;
    t = not_null(k_82);
    {
      ATerm y_5 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm m_23 = ATgetArgument(t, 0);
            if(match_cons(m_23, sym_Var_1))
              {
                if(((b_50 != NULL) && (b_50 != ATgetArgument(m_23, 0))))
                  _fail(ATgetArgument(m_23, 0));
                else
                  b_50 = ATgetArgument(m_23, 0);
              }
            else
              _fail(t);
            if(((a_50 != NULL) && (a_50 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              a_50 = ATgetArgument(t, 1);
            {
              ATerm n_23 = ATgetArgument(t, 2);
              if(match_cons(n_23, sym_CallT_3))
                {
                  if(((y_49 != NULL) && (y_49 != ATgetArgument(n_23, 0))))
                    _fail(ATgetArgument(n_23, 0));
                  else
                    y_49 = ATgetArgument(n_23, 0);
                  {
                    ATerm o_23 = ATgetArgument(n_23, 1);
                    if(((ATgetType(o_23) != AT_LIST) || !(ATisEmpty(o_23))))
                      _fail(t);
                  }
                  {
                    ATerm q_23 = ATgetArgument(n_23, 2);
                    if(((ATgetType(q_23) != AT_LIST) || !(ATisEmpty(q_23))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_50));
        return(t);
      }
      t = oncetd_1_0(y_5, t);
      if(((i_50 != NULL) && (i_50 != t)))
        _fail(t);
      else
        i_50 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_50)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(d_50), not_null(i_50), (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_82), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(y_49), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(z_49), not_null(a_50), term_l_19))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(b_50)), (ATerm) ATmakeAppl(sym_Var_1, not_null(c_50)))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm r_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_24 = t;
      int n_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL;
          q_51 = t;
          if(match_cons(t, sym_SRule_1))
            {
              r_51 = ATgetArgument(t, 0);
              t = r_51;
              if(match_cons(t, sym_Rule_3))
                {
                  n_51 = ATgetArgument(t, 0);
                  o_51 = ATgetArgument(t, 1);
                  p_51 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = q_51;
              t = t_8(n_51, o_51, p_51, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm b_29 = NULL,o_29 = NULL,p_6 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  r_51 = ATgetArgument(t, 0);
                  s_51 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(q_51);
              b_29 = t;
              t = s_51;
              t = desugarRule_0_0(t);
              o_29 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, r_51, o_29);
              p_6 = t;
              t = SSLsetAnnotations(p_6, b_29);
            }
          ;
          LocalPopChoice(n_24);
        }
      else
        {
          t = b_24;
          t = RtoS_0_0(t);
        }
      ;
      LocalPopChoice(z_23);
    }
  else
    {
      t = r_23;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm r_111 (ATerm), ATerm t)
{
  ATerm c_6 (ATerm t)
  {
    t = topdown_1_0(r_111, t);
    return(t);
  }
  t = r_111(t);
  t = SRTS_all(c_6, t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm q_24 = t;
  int j_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(j_25);
    }
  else
    {
      t = q_24;
    }
  t = repeat_1_0(f_6, t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm q_25 = t;
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
      LocalPopChoice(v_25);
    }
  else
    {
      t = q_25;
      {
        ATerm w_25 = t;
        int z_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL;
            q_52 = t;
            if(match_cons(t, sym_CallT_3))
              {
                r_52 = ATgetArgument(t, 0);
                s_52 = ATgetArgument(t, 1);
                t_52 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = q_52;
            t = q_8(r_52, s_52, t_52, t);
            ;
            LocalPopChoice(z_25);
          }
        else
          {
            t = w_25;
            {
              ATerm a_26 = t;
              int b_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(b_26);
                }
              else
                {
                  t = a_26;
                  {
                    ATerm e_26 = t;
                    int f_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(f_26);
                      }
                    else
                      {
                        t = e_26;
                        {
                          ATerm g_26 = t;
                          int h_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm j_26 = t;
                              int k_26 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm y_52 = NULL,z_52 = NULL,a_53 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      if(((y_52 != NULL) && (y_52 != ATgetArgument(t, 0))))
                                        _fail(ATgetArgument(t, 0));
                                      else
                                        y_52 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = not_null(y_52);
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      z_52 = ATgetArgument(t, 0);
                                      {
                                        ATerm l_26 = t;
                                        int m_26 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm c_53 = NULL,d_53 = NULL;
                                            t = not_null(y_52);
                                            {
                                              ATerm g_6 (ATerm t)
                                              {
                                                if(match_cons(t, sym_RootApp_1))
                                                  {
                                                    ATerm n_26 = ATgetArgument(t, 0);
                                                    if(match_cons(n_26, sym_Match_1))
                                                      {
                                                        if(((c_53 != NULL) && (c_53 != ATgetArgument(n_26, 0))))
                                                          _fail(ATgetArgument(n_26, 0));
                                                        else
                                                          c_53 = ATgetArgument(n_26, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = not_null(c_53);
                                                return(t);
                                              }
                                              t = pat_td_1_0(g_6, t);
                                              if(((d_53 != NULL) && (d_53 != t)))
                                                _fail(t);
                                              else
                                                d_53 = t;
                                              t = (ATerm) ATmakeAppl(sym_Match_1, not_null(d_53));
                                            }
                                            ;
                                            LocalPopChoice(m_26);
                                          }
                                        else
                                          {
                                            t = l_26;
                                            t = not_null(z_52);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          z_52 = ATgetArgument(t, 0);
                                          a_53 = ATgetArgument(t, 1);
                                          {
                                            ATerm o_26 = t;
                                            int p_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm g_53 = NULL,h_53 = NULL;
                                                t = not_null(y_52);
                                                {
                                                  ATerm h_6 (ATerm t)
                                                  {
                                                    if(match_cons(t, sym_RootApp_1))
                                                      {
                                                        ATerm q_26 = ATgetArgument(t, 0);
                                                        if(match_cons(q_26, sym_Match_1))
                                                          {
                                                            if(((g_53 != NULL) && (g_53 != ATgetArgument(q_26, 0))))
                                                              _fail(ATgetArgument(q_26, 0));
                                                            else
                                                              g_53 = ATgetArgument(q_26, 0);
                                                          }
                                                        else
                                                          _fail(t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = not_null(g_53);
                                                    return(t);
                                                  }
                                                  t = pat_td_1_0(h_6, t);
                                                  if(((h_53 != NULL) && (h_53 != t)))
                                                    _fail(t);
                                                  else
                                                    h_53 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, not_null(h_53));
                                                }
                                                ;
                                                LocalPopChoice(p_26);
                                              }
                                            else
                                              {
                                                t = o_26;
                                                t = (ATerm) ATmakeAppl(sym_BA_2, not_null(z_52), not_null(a_53));
                                              }
                                          }
                                        }
                                      else
                                        {
                                          ATerm l_53 = NULL,m_53 = NULL;
                                          t = not_null(y_52);
                                          {
                                            ATerm j_6 (ATerm t)
                                            {
                                              if(match_cons(t, sym_RootApp_1))
                                                {
                                                  ATerm r_26 = ATgetArgument(t, 0);
                                                  if(match_cons(r_26, sym_Match_1))
                                                    {
                                                      if(((l_53 != NULL) && (l_53 != ATgetArgument(r_26, 0))))
                                                        _fail(ATgetArgument(r_26, 0));
                                                      else
                                                        l_53 = ATgetArgument(r_26, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                _fail(t);
                                              t = not_null(l_53);
                                              return(t);
                                            }
                                            t = pat_td_1_0(j_6, t);
                                            if(((m_53 != NULL) && (m_53 != t)))
                                              _fail(t);
                                            else
                                              m_53 = t;
                                            t = (ATerm) ATmakeAppl(sym_Match_1, not_null(m_53));
                                          }
                                        }
                                    }
                                  ;
                                  LocalPopChoice(k_26);
                                }
                              else
                                {
                                  t = j_26;
                                  t = Mapp2_0_0(t);
                                }
                              ;
                              LocalPopChoice(h_26);
                            }
                          else
                            {
                              t = g_26;
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
  t = topdown_1_0(d_6, t);
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm k_54 = NULL,l_54 = NULL;
  l_54 = t;
  t = SSL_explode_term(l_54);
  if(match_cons(t, sym__2))
    {
      ATerm s_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_26 = ATgetArgument(t, 1);
        if(((ATgetType(t_26) == AT_LIST) && !(ATisEmpty(t_26))))
          {
            k_54 = ATgetFirst((ATermList) t_26);
            {
              ATerm u_26 = (ATerm) ATgetNext((ATermList) t_26);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_54;
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL,h_30 = NULL;
  h_30 = t;
  t = SSL_explode_term(h_30);
  if(match_cons(t, sym__2))
    {
      ATerm v_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_26 = ATgetArgument(t, 1);
        if(((ATgetType(w_26) == AT_LIST) && !(ATisEmpty(w_26))))
          {
            ATerm x_26 = ATgetFirst((ATermList) w_26);
            x_29 = (ATerm) ATgetNext((ATermList) w_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_e_18;
  y_29 = t;
  t = SSL_mkterm(y_29, x_29);
  return(t);
}
ATerm o_6 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm t_115 (ATerm), ATerm t)
{
  ATerm r_53 = NULL,s_53 = NULL;
  ATerm m_54 (ATerm t)
  {
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_53 = NULL,z_53 = NULL,g_54 = NULL;
        t_53 = t;
        t = map_1_0(k_6, t);
        t = t_115(t);
        z_53 = t;
        t = t_53;
        t = map_1_0(n_6, t);
        t = m_54(t);
        g_54 = t;
        t = (ATerm) ATinsert(CheckATermList(g_54), z_53);
        ;
        LocalPopChoice(z_26);
      }
    else
      {
        t = y_26;
        t = map_1_0(o_6, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = m_54(t);
  if(((s_53 != NULL) && (s_53 != t)))
    _fail(t);
  else
    s_53 = t;
  t = term_e_18;
  if(((r_53 != NULL) && (r_53 != t)))
    _fail(t);
  else
    r_53 = t;
  t = SSL_mkterm(not_null(r_53), not_null(s_53));
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm r_54 = NULL;
  r_54 = t;
  {
    ATerm a_27 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_54 = NULL,z_54 = NULL,c_55 = NULL;
        t = r_54;
        t = new_0_0(t);
        y_54 = t;
        t = new_0_0(t);
        z_54 = t;
        t = new_0_0(t);
        c_55 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_54), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_e_18, (ATerm) ATinsert(ATinsert(ATempty, r_54), (ATerm) ATmakeAppl(sym_Var_1, z_54))), (ATerm) ATmakeAppl(sym_Var_1, c_55)), (ATerm)ATmakeAppl(sym_VarDec_2, y_54, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_g_19), term_g_19)), z_54, (ATerm)ATmakeAppl(sym_Var_1, z_54), c_55, (ATerm) ATmakeAppl(sym_Var_1, c_55));
        ;
        LocalPopChoice(b_27);
      }
    else
      {
        t = a_27;
        {
          ATerm e_55 = NULL,f_55 = NULL,i_55 = NULL;
          t = r_54;
          t = new_0_0(t);
          e_55 = t;
          t = new_0_0(t);
          f_55 = t;
          t = new_0_0(t);
          i_55 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_55), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_e_18, (ATerm) ATinsert(ATinsert(ATempty, r_54), (ATerm) ATmakeAppl(sym_Var_1, f_55))), (ATerm) ATmakeAppl(sym_Var_1, i_55)), (ATerm)ATmakeAppl(sym_VarDec_2, e_55, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_g_19), term_g_19)), f_55, (ATerm)ATmakeAppl(sym_Var_1, f_55), i_55, (ATerm) ATmakeAppl(sym_Var_1, i_55));
        }
      }
  }
  return(t);
}
ATerm u_8 (ATerm o_52, ATerm p_52, ATerm t)
{
  ATerm c_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(o_52, p_52);
      ;
      LocalPopChoice(e_27);
    }
  else
    {
      t = c_27;
      t = SSL_subtr(o_52, p_52);
    }
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm j_55 = NULL,k_55 = NULL;
  if(match_cons(t, sym__2))
    {
      j_55 = ATgetArgument(t, 0);
      k_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, j_55, k_55, (ATerm) ATempty);
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm l_55 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm f_27 = ATgetArgument(t, 0);
      if(((ATgetType(f_27) != AT_INT) || (ATgetInt((ATermInt) f_27) != 0)))
        _fail(t);
      {
        ATerm g_27 = ATgetArgument(t, 1);
      }
      l_55 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = l_55;
  return(t);
}
ATerm copy_1_0 (ATerm x_122 (ATerm), ATerm t)
{
  ATerm s_6 (ATerm t)
  {
    ATerm p_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL;
    if(match_cons(t, sym__3))
      {
        p_55 = ATgetArgument(t, 0);
        q_55 = ATgetArgument(t, 1);
        r_55 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, p_55, term_a_15);
    t = geq_0_0(t);
    t = term_a_15;
    u_55 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_55, term_a_15);
    t = u_8(p_55, u_55, t);
    s_55 = t;
    t = q_55;
    t = x_122(t);
    t_55 = t;
    t = (ATerm) ATmakeAppl(sym__3, s_55, q_55, (ATerm) ATinsert(CheckATermList(r_55), t_55));
    return(t);
  }
  t = for_3_0(q_6, r_6, s_6, t);
  return(t);
}
ATerm v_8 (ATerm t_64, ATerm u_64, ATerm t)
{
  ATerm x_55 = NULL,y_55 = NULL,c_56 = NULL;
  t = new_0_0(t);
  x_55 = t;
  t = new_0_0(t);
  y_55 = t;
  t = new_0_0(t);
  c_56 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, x_55), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_e_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, t_64)), (ATerm) ATmakeAppl(sym_Var_1, y_55))), (ATerm) ATmakeAppl(sym_Op_2, term_e_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, u_64)), (ATerm) ATmakeAppl(sym_Var_1, c_56)))), (ATerm)ATmakeAppl(sym_VarDec_2, x_55, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_g_19), term_g_19)), y_55, (ATerm)ATmakeAppl(sym_Var_1, y_55), c_56, (ATerm) ATmakeAppl(sym_Var_1, c_56));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm g_56 = NULL,h_56 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_56 = ATgetFirst((ATermList) t);
      h_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_56;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_56;
    }
  else
    {
      t = h_56;
      t = last_0_0(t);
    }
  return(t);
}
ATerm c_60 (ATerm g_57, ATerm h_57, ATerm i_57, ATerm j_57, ATerm t)
{
  ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL,y_57 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL;
  t = term_a_15;
  g_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_57, term_a_15);
  t = w_9(h_57, g_58, t);
  f_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_58, term_u_14);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_57 = ATgetFirst((ATermList) t);
      v_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_57;
  t = last_0_0(t);
  t_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_57), u_57), v_57);
  t = genzip_4_0(u_6, w_6, x_6, z_6, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      w_57 = ATgetArgument(t, 0);
      x_57 = ATgetArgument(t, 1);
      y_57 = ATgetArgument(t, 2);
      b_58 = ATgetArgument(t, 3);
      c_58 = ATgetArgument(t, 4);
      d_58 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_58), y_57), v_57);
  t = concat_0_0(t);
  e_58 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, g_57, term_h_27), x_57, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(e_58), u_57), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_e_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, u_57)), (ATerm) ATmakeAppl(sym_Op_2, g_57, b_58))), (ATerm)ATmakeAppl(sym_Op_2, term_e_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, t_57)), (ATerm) ATmakeAppl(sym_Op_2, g_57, d_58))), (ATerm) ATmakeAppl(sym_Seqs_1, w_57)))));
  return(t);
}
ATerm d_60 (ATerm v_58, ATerm w_58, ATerm x_58, ATerm y_58, ATerm t)
{
  ATerm c_59 = NULL,d_59 = NULL,e_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL;
  t = y_58;
  t = new_0_0(t);
  c_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_58, (ATerm) ATmakeAppl(sym_Var_1, c_59));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      d_59 = ATgetArgument(t, 0);
      e_59 = ATgetArgument(t, 1);
      h_59 = ATgetArgument(t, 2);
      i_59 = ATgetArgument(t, 3);
      j_59 = ATgetArgument(t, 4);
      k_59 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_59, j_59);
  t = conc_0_0(t);
  l_59 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, v_58, term_i_27), e_59, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(l_59), c_59), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_e_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, c_59)), (ATerm) ATmakeAppl(sym_Op_2, v_58, i_59))), (ATerm)ATmakeAppl(sym_Op_2, v_58, k_59), (ATerm) ATmakeAppl(sym_Seqs_1, d_59)))));
  return(t);
}
ATerm u_6 (ATerm t)
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
ATerm w_6 (ATerm t)
{
  ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL,o_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_27 = ATgetArgument(t, 0);
      if(((ATgetType(l_27) == AT_LIST) && !(ATisEmpty(l_27))))
        {
          j_58 = ATgetFirst((ATermList) l_27);
          k_58 = (ATerm) ATgetNext((ATermList) l_27);
        }
      else
        _fail(t);
      {
        ATerm m_27 = ATgetArgument(t, 1);
        if(((ATgetType(m_27) == AT_LIST) && !(ATisEmpty(m_27))))
          {
            l_58 = ATgetFirst((ATermList) m_27);
            o_58 = (ATerm) ATgetNext((ATermList) m_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_58, l_58), (ATerm) ATmakeAppl(sym__2, k_58, o_58));
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm p_58 = NULL,q_58 = NULL;
  if(match_cons(t, sym__2))
    {
      p_58 = ATgetArgument(t, 0);
      q_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_58), p_58);
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm s_58 = NULL,t_58 = NULL;
  if(match_cons(t, sym__2))
    {
      s_58 = ATgetArgument(t, 0);
      t_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_8(s_58, t_58, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL,s_59 = NULL,t_59 = NULL;
  n_59 = t;
  if(match_cons(t, sym__3))
    {
      o_59 = ATgetArgument(t, 0);
      p_59 = ATgetArgument(t, 1);
      q_59 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = p_59;
  if(match_string(t, "T"))
    {
      t = q_59;
      if(match_cons(t, sym__2))
        {
          s_59 = ATgetArgument(t, 0);
          t_59 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_59;
      if(match_int(t, 0))
        {
          ATerm n_27 = t;
          int o_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_60(o_59, s_59, t_59, n_59, t);
              ;
              LocalPopChoice(o_27);
            }
          else
            {
              t = n_27;
              {
                ATerm v_59 = NULL;
                t = n_59;
                t = new_0_0(t);
                v_59 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, o_59, term_h_27), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_59), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_e_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_59)), (ATerm) ATmakeAppl(sym_Op_2, o_59, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_e_18, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_59)), (ATerm) ATmakeAppl(sym_Op_2, o_59, (ATerm) ATempty))), term_l_19))));
              }
            }
        }
      else
        {
          t = c_60(o_59, s_59, t_59, n_59, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = q_59;
      if(match_cons(t, sym__2))
        {
          s_59 = ATgetArgument(t, 0);
          t_59 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_60(o_59, s_59, t_59, n_59, t);
    }
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = term_j_19;
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,k_12 = NULL;
  x_16 = t;
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
            y_16 = ATgetFirst((ATermList) q_27);
            {
              ATerm r_27 = (ATerm) ATgetNext((ATermList) q_27);
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
                k_12 = ATgetFirst((ATermList) v_27);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, y_16, k_12);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(b_7, c_7, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL,r_17 = NULL,u_17 = NULL,w_17 = NULL,c_18 = NULL;
  n_17 = t;
  if(match_cons(t, sym__2))
    {
      r_17 = ATgetArgument(t, 0);
      u_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_17;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_17 = ATgetFirst((ATermList) t);
      c_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_17;
  if(match_cons(t, sym__2))
    {
      l_17 = ATgetArgument(t, 0);
      m_17 = ATgetArgument(t, 1);
      {
        ATerm x_27 = t;
        int y_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_17;
            if((r_17 != t))
              {
                _fail(t);
              }
            t = m_17;
            ;
            LocalPopChoice(y_27);
          }
        else
          {
            t = x_27;
            t = (ATerm) ATmakeAppl(sym__2, r_17, c_18);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, r_17, c_18);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm j_113 (ATerm), ATerm t)
{
  ATerm k_19 (ATerm t)
  {
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_113(t);
        ;
        LocalPopChoice(a_28);
      }
    else
      {
        t = z_27;
        t = SRTS_all(k_19, t);
      }
    return(t);
  }
  t = k_19(t);
  return(t);
}
ATerm d_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_28 = ATgetArgument(t, 0);
      if(((ATgetType(b_28) != AT_LIST) || !(ATisEmpty(b_28))))
        _fail(t);
      {
        ATerm c_28 = ATgetArgument(t, 1);
        if(((ATgetType(c_28) != AT_LIST) || !(ATisEmpty(c_28))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_28 = ATgetArgument(t, 0);
      if(((ATgetType(d_28) == AT_LIST) && !(ATisEmpty(d_28))))
        {
          f_20 = ATgetFirst((ATermList) d_28);
          g_20 = (ATerm) ATgetNext((ATermList) d_28);
        }
      else
        _fail(t);
      {
        ATerm e_28 = ATgetArgument(t, 1);
        if(((ATgetType(e_28) == AT_LIST) && !(ATisEmpty(e_28))))
          {
            h_20 = ATgetFirst((ATermList) e_28);
            i_20 = (ATerm) ATgetNext((ATermList) e_28);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_20, h_20), (ATerm) ATmakeAppl(sym__2, g_20, i_20));
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL;
  if(match_cons(t, sym__2))
    {
      j_20 = ATgetArgument(t, 0);
      k_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_20), j_20);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL;
  r_19 = t;
  {
    ATerm f_28 = t;
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
        t = r_19;
      }
    else
      {
        t = f_28;
        {
          ATerm y_19 = NULL;
          if(match_cons(t, sym__3))
            {
              s_19 = ATgetArgument(t, 0);
              t_19 = ATgetArgument(t, 1);
              u_19 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, s_19, t_19);
          t = genzip_4_0(d_7, f_7, g_7, _id, t);
          y_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_19, u_19);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm a_111 (ATerm), ATerm b_111 (ATerm), ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL;
  ATerm i_7 (ATerm t)
  {
    ATerm n_12 = NULL;
    t = a_111(t);
    n_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_12, not_null(n_20));
    t = lookup_0_0(t);
    t = b_111(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((n_20 != NULL) && (n_20 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_20 = ATgetArgument(t, 0);
      if(((m_20 != NULL) && (m_20 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(m_20);
  t = alltd_1_0(i_7, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm t_21 = NULL,v_21 = NULL,w_21 = NULL,b_22 = NULL,c_22 = NULL,t_6 = NULL;
  c_22 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      v_21 = ATgetArgument(t, 0);
      w_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_22);
  t_21 = t;
  t = v_21;
  t = new_0_0(t);
  b_22 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, b_22, w_21);
  t_6 = t;
  t = SSLsetAnnotations(t_6, t_21);
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,v_6 = NULL;
  h_22 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      e_22 = ATgetArgument(t, 0);
      f_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_22);
  d_22 = t;
  t = e_22;
  t = new_0_0(t);
  g_22 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, g_22, f_22);
  v_6 = t;
  t = SSLsetAnnotations(v_6, d_22);
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm i_22 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      i_22 = ATgetArgument(t, 0);
      {
        ATerm k_28 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_22), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm l_22 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      l_22 = ATgetArgument(t, 0);
      {
        ATerm l_28 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, l_22);
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm b_23 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      b_23 = ATgetArgument(t, 0);
      {
        ATerm m_28 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = b_23;
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm c_23 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      c_23 = ATgetArgument(t, 0);
      {
        ATerm n_28 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = c_23;
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm d_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      f_23 = ATgetArgument(t, 0);
      h_23 = ATgetArgument(t, 1);
      d_23 = ATgetArgument(t, 2);
      t = f_23;
      if(match_cons(t, sym_SVar_1))
        {
          g_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_23;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_23;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_23;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          f_23 = ATgetArgument(t, 0);
          h_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_23;
      if(match_cons(t, sym_SVar_1))
        {
          g_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_23;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_23;
    }
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm p_23 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_23;
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,m_21 = NULL,p_21 = NULL;
  if(((i_21 != NULL) && (i_21 != t)))
    _fail(t);
  else
    i_21 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_28 = ATgetFirst((ATermList) t);
      if(match_cons(o_28, sym_SDefT_4))
        {
          if(((d_21 != NULL) && (d_21 != ATgetArgument(o_28, 0))))
            _fail(ATgetArgument(o_28, 0));
          else
            d_21 = ATgetArgument(o_28, 0);
          if(((e_21 != NULL) && (e_21 != ATgetArgument(o_28, 1))))
            _fail(ATgetArgument(o_28, 1));
          else
            e_21 = ATgetArgument(o_28, 1);
          if(((f_21 != NULL) && (f_21 != ATgetArgument(o_28, 2))))
            _fail(ATgetArgument(o_28, 2));
          else
            f_21 = ATgetArgument(o_28, 2);
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
  t = not_null(e_21);
  t = map_1_0(m_7, t);
  if(((g_21 != NULL) && (g_21 != t)))
    _fail(t);
  else
    g_21 = t;
  t = not_null(f_21);
  t = map_1_0(n_7, t);
  if(((h_21 != NULL) && (h_21 != t)))
    _fail(t);
  else
    h_21 = t;
  t = not_null(g_21);
  t = map_1_0(o_7, t);
  if(((m_21 != NULL) && (m_21 != t)))
    _fail(t);
  else
    m_21 = t;
  t = not_null(h_21);
  t = map_1_0(q_7, t);
  if(((j_21 != NULL) && (j_21 != t)))
    _fail(t);
  else
    j_21 = t;
  t = not_null(i_21);
  {
    ATerm s_7 (ATerm t)
    {
      ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm r_28 = ATgetArgument(t, 0);
          m_22 = ATgetArgument(t, 1);
          n_22 = ATgetArgument(t, 2);
          o_22 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = n_22;
      t = map_1_0(t_7, t);
      u_22 = t;
      t = m_22;
      t = map_1_0(u_7, t);
      w_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, w_22, not_null(m_21), o_22);
      t = substitute_2_0(z_7, _id, t);
      v_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, u_22, not_null(j_21), v_22);
      t = substitute_2_0(b_8, _id, t);
      return(t);
    }
    t = map_1_0(s_7, t);
    t = choices_0_0(t);
    if(((p_21 != NULL) && (p_21 != t)))
      _fail(t);
    else
      p_21 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(d_21), not_null(g_21), not_null(h_21), not_null(p_21));
  }
  return(t);
}
ATerm b_62 (ATerm m_60, ATerm n_60, ATerm q_60, ATerm r_60, ATerm t)
{
  ATerm v_60 = NULL,w_60 = NULL,y_60 = NULL,z_60 = NULL,y_6 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_60, n_60);
  t = Definitions_0_0(t);
  v_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_60, q_60);
  z_60 = t;
  if(match_cons(t, sym__2))
    {
      ATerm s_28 = ATgetArgument(t, 0);
      ATerm t_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_60);
  w_60 = t;
  t = v_60;
  {
    ATerm u_28 = t;
    int v_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_61 = NULL,c_61 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_61 = ATgetFirst((ATermList) t);
            c_61 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_61;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_61;
        ;
        LocalPopChoice(v_28);
      }
    else
      {
        t = u_28;
        t = JoinDefs2_0_0(t);
      }
    y_60 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_60, q_60);
    y_6 = t;
    t = SSLsetAnnotations(y_6, w_60);
  }
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL,l_61 = NULL,o_61 = NULL;
  g_61 = t;
  if(match_cons(t, sym__2))
    {
      h_61 = ATgetArgument(t, 0);
      o_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_61;
  if(match_cons(t, sym__2))
    {
      i_61 = ATgetArgument(t, 0);
      l_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_61;
  if(match_cons(t, sym_Mod_2))
    {
      e_61 = ATgetArgument(t, 0);
      f_61 = ATgetArgument(t, 1);
      {
        ATerm w_28 = t;
        int x_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_61 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, e_61, f_61, l_61);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            y_61 = t;
            t = (ATerm) ATmakeAppl(sym__2, y_61, o_61);
            ;
            LocalPopChoice(x_28);
          }
        else
          {
            t = w_28;
            t = b_62(i_61, l_61, o_61, g_61, t);
          }
      }
    }
  else
    {
      t = b_62(i_61, l_61, o_61, g_61, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm i_118 (ATerm), ATerm t)
{
  ATerm i_63 (ATerm t)
  {
    ATerm f_63 = NULL,g_63 = NULL,h_63 = NULL;
    h_63 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_63 = ATgetFirst((ATermList) t);
        g_63 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm p_30 = NULL,s_30 = NULL,a_7 = NULL;
          t = SSLgetAnnotations(h_63);
          p_30 = t;
          t = g_63;
          t = i_63(t);
          s_30 = t;
          t = (ATerm) ATinsert(CheckATermList(s_30), f_63);
          a_7 = t;
          t = SSLsetAnnotations(a_7, p_30);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_63;
        t = i_118(t);
      }
    return(t);
  }
  t = i_63(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm f_62 = NULL,g_62 = NULL,h_62 = NULL;
  f_62 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_62;
    }
  else
    {
      ATerm c_8 (ATerm t)
      {
        t = not_null(h_62);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((g_62 != NULL) && (g_62 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            g_62 = ATgetFirst((ATermList) t);
          if(((h_62 != NULL) && (h_62 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            h_62 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(g_62);
      t = at_end_1_0(c_8, t);
    }
  return(t);
}
ATerm j_65 (ATerm e_64, ATerm t)
{
  ATerm c_65 = NULL;
  t = SSL_explode_term(e_64);
  if(match_cons(t, sym__2))
    {
      ATerm y_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      c_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_65;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm e_65 = NULL,f_65 = NULL,g_65 = NULL;
  if(((g_65 != NULL) && (g_65 != t)))
    _fail(t);
  else
    g_65 = t;
  if(match_cons(t, sym__2))
    {
      e_65 = ATgetArgument(t, 0);
      f_65 = ATgetArgument(t, 1);
      {
        ATerm z_28 = t;
        int a_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_8 (ATerm t)
            {
              t = not_null(f_65);
              return(t);
            }
            t = not_null(e_65);
            t = at_end_1_0(e_8, t);
            ;
            LocalPopChoice(a_29);
          }
        else
          {
            t = z_28;
            t = j_65(not_null(g_65), t);
          }
      }
    }
  else
    {
      t = j_65(not_null(g_65), t);
    }
  return(t);
}
ATerm a_9 (ATerm p_119 (ATerm), ATerm t_48, ATerm s_48, ATerm t)
{
  ATerm u_66 (ATerm t)
  {
    ATerm x_65 = NULL,y_65 = NULL,z_65 = NULL;
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
            z_65 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm c_29 = t;
          int d_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_65;
              {
                ATerm f_8 (ATerm t)
                {
                  t = not_null(s_48);
                  return(t);
                }
                t = k_9(p_119, f_8, not_null(y_65), not_null(z_65), t);
                t = u_66(t);
              }
              ;
              LocalPopChoice(d_29);
            }
          else
            {
              t = c_29;
              {
                ATerm m_31 = NULL,t_31 = NULL,e_7 = NULL;
                t = SSLgetAnnotations(x_65);
                m_31 = t;
                t = z_65;
                t = u_66(t);
                t_31 = t;
                t = (ATerm) ATinsert(CheckATermList(t_31), y_65);
                e_7 = t;
                t = SSLsetAnnotations(e_7, m_31);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(t_48);
  t = u_66(t);
  return(t);
}
ATerm genzip_4_0 (ATerm d_116 (ATerm), ATerm e_116 (ATerm), ATerm f_116 (ATerm), ATerm g_116 (ATerm), ATerm t)
{
  ATerm q_67 (ATerm t)
  {
    ATerm e_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_116(t);
        ;
        LocalPopChoice(f_29);
      }
    else
      {
        t = e_29;
        {
          ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL,e_67 = NULL,h_67 = NULL,n_67 = NULL,h_7 = NULL;
          t = e_116(t);
          n_67 = t;
          if(match_cons(t, sym__2))
            {
              z_66 = ATgetArgument(t, 0);
              a_67 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_67);
          y_66 = t;
          t = z_66;
          t = g_116(t);
          e_67 = t;
          t = a_67;
          t = q_67(t);
          h_67 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_67, h_67);
          h_7 = t;
          t = SSLsetAnnotations(h_7, y_66);
          t = f_116(t);
        }
      }
    return(t);
  }
  t = q_67(t);
  return(t);
}
ATerm g_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_29 = ATgetArgument(t, 0);
      if(((ATgetType(g_29) != AT_LIST) || !(ATisEmpty(g_29))))
        _fail(t);
      {
        ATerm h_29 = ATgetArgument(t, 1);
        if(((ATgetType(h_29) != AT_LIST) || !(ATisEmpty(h_29))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm d_68 = NULL,g_68 = NULL,h_68 = NULL,j_68 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_29 = ATgetArgument(t, 0);
      if(((ATgetType(i_29) == AT_LIST) && !(ATisEmpty(i_29))))
        {
          d_68 = ATgetFirst((ATermList) i_29);
          g_68 = (ATerm) ATgetNext((ATermList) i_29);
        }
      else
        _fail(t);
      {
        ATerm j_29 = ATgetArgument(t, 1);
        if(((ATgetType(j_29) == AT_LIST) && !(ATisEmpty(j_29))))
          {
            h_68 = ATgetFirst((ATermList) j_29);
            j_68 = (ATerm) ATgetNext((ATermList) j_29);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_68, h_68), (ATerm) ATmakeAppl(sym__2, g_68, j_68));
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm k_68 = NULL,l_68 = NULL;
  if(match_cons(t, sym__2))
    {
      k_68 = ATgetArgument(t, 0);
      l_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_68), k_68);
  return(t);
}
ATerm e_9 (ATerm n_689, ATerm s_689, ATerm u_80, ATerm t)
{
  ATerm s_67 = NULL,v_67 = NULL,y_67 = NULL,b_68 = NULL;
  t = SSL_explode_term(s_689);
  if(match_cons(t, sym__2))
    {
      s_67 = ATgetArgument(t, 0);
      y_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(n_689);
  if(match_cons(t, sym__2))
    {
      if((s_67 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      v_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_67, y_67);
  t = genzip_4_0(g_8, i_8, j_8, _id, t);
  b_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_68, u_80);
  t = conc_0_0(t);
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm t_68 = NULL;
  t_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, t_68);
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm u_68 = NULL,v_68 = NULL,w_68 = NULL,x_68 = NULL,k_7 = NULL;
  x_68 = t;
  if(match_cons(t, sym__2))
    {
      v_68 = ATgetArgument(t, 0);
      w_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_68);
  u_68 = t;
  t = w_68;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_68, w_68);
  k_7 = t;
  t = SSLsetAnnotations(k_7, u_68);
  return(t);
}
ATerm o_8 (ATerm t)
{
  ATerm s_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL,w_69 = NULL;
  s_69 = t;
  if(match_cons(t, sym__2))
    {
      t_69 = ATgetArgument(t, 0);
      u_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_69;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_69 = ATgetFirst((ATermList) t);
      w_69 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_29 = t;
        int l_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_70(t_69, u_69, s_69, t);
            ;
            LocalPopChoice(l_29);
          }
        else
          {
            t = k_29;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_69), v_69), w_69);
          }
      }
    }
  else
    {
      t = m_70(t_69, u_69, s_69, t);
    }
  return(t);
}
ATerm m_70 (ATerm y_68, ATerm z_68, ATerm a_69, ATerm t)
{
  ATerm b_69 = NULL,e_69 = NULL,l_7 = NULL,h_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL;
  t = SSLgetAnnotations(a_69);
  b_69 = t;
  t = z_68;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_69 = ATgetFirst((ATermList) t);
      k_69 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_69;
  if(match_cons(t, sym__2))
    {
      i_69 = ATgetArgument(t, 0);
      j_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_29 = t;
    int n_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_69;
        if((i_69 != t))
          {
            _fail(t);
          }
        t = k_69;
        ;
        LocalPopChoice(n_29);
      }
    else
      {
        t = m_29;
        t = z_68;
        t = e_9(i_69, j_69, k_69, t);
      }
    e_69 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_68, e_69);
    l_7 = t;
    t = SSLsetAnnotations(l_7, b_69);
  }
  return(t);
}
ATerm p_8 (ATerm t)
{
  ATerm l_70 = NULL;
  if(match_cons(t, sym__2))
    {
      l_70 = ATgetArgument(t, 0);
      if((l_70 != ATgetArgument(t, 1)))
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
  ATerm p_29 = t;
  int q_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(k_8, l_8, o_8, t);
      ;
      LocalPopChoice(q_29);
    }
  else
    {
      t = p_29;
      {
        ATerm a_70 = NULL,b_70 = NULL,i_70 = NULL;
        a_70 = t;
        if(match_cons(t, sym__2))
          {
            b_70 = ATgetArgument(t, 0);
            i_70 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_70;
        t = a_9(p_8, b_70, i_70, t);
      }
    }
  return(t);
}
ATerm g_9 (ATerm u_140 (ATerm), ATerm v_140 (ATerm), ATerm w_140 (ATerm), ATerm r_81, ATerm o_81, ATerm w_81, ATerm s_81, ATerm p_81, ATerm q_81, ATerm t)
{
  ATerm n_70 = NULL,o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL,t_70 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_81, s_81);
  t = u_140(t);
  if(match_cons(t, sym__2))
    {
      o_70 = ATgetArgument(t, 0);
      n_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_70;
  t = v_140(t);
  p_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_70, w_81);
  t = diff_0_0(t);
  q_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_70, o_81);
  t = conc_0_0(t);
  r_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_70, w_81);
  t = conc_0_0(t);
  s_70 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_81, o_70, p_81);
  t = w_140(t);
  t_70 = t;
  t = (ATerm) ATmakeAppl(sym__5, r_70, s_70, n_70, t_70, q_81);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm u_140 (ATerm), ATerm v_140 (ATerm), ATerm w_140 (ATerm), ATerm t)
{
  ATerm v_70 = NULL,w_70 = NULL,x_70 = NULL,y_70 = NULL,z_70 = NULL,a_71 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm r_29 = ATgetArgument(t, 0);
      if(((ATgetType(r_29) == AT_LIST) && !(ATisEmpty(r_29))))
        {
          v_70 = ATgetFirst((ATermList) r_29);
          w_70 = (ATerm) ATgetNext((ATermList) r_29);
        }
      else
        _fail(t);
      x_70 = ATgetArgument(t, 1);
      y_70 = ATgetArgument(t, 2);
      z_70 = ATgetArgument(t, 3);
      a_71 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = g_9(u_140, v_140, w_140, v_70, w_70, x_70, y_70, z_70, a_71, t);
  return(t);
}
ATerm while_not_2_0 (ATerm s_128 (ATerm), ATerm t_128 (ATerm), ATerm t)
{
  ATerm b_71 (ATerm t)
  {
    ATerm s_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_128(t);
        ;
        LocalPopChoice(t_29);
      }
    else
      {
        t = s_29;
        t = t_128(t);
        t = b_71(t);
      }
    return(t);
  }
  t = b_71(t);
  return(t);
}
ATerm for_3_0 (ATerm v_128 (ATerm), ATerm w_128 (ATerm), ATerm x_128 (ATerm), ATerm t)
{
  t = v_128(t);
  t = while_not_2_0(w_128, x_128, t);
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm l_71 = NULL,m_71 = NULL,n_71 = NULL;
  if(match_cons(t, sym__3))
    {
      l_71 = ATgetArgument(t, 0);
      m_71 = ATgetArgument(t, 1);
      n_71 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, l_71, l_71, m_71, n_71, (ATerm) ATempty);
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm q_71 = NULL,r_71 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm u_29 = ATgetArgument(t, 0);
      if(((ATgetType(u_29) != AT_LIST) || !(ATisEmpty(u_29))))
        _fail(t);
      {
        ATerm v_29 = ATgetArgument(t, 1);
      }
      {
        ATerm w_29 = ATgetArgument(t, 2);
      }
      q_71 = ATgetArgument(t, 3);
      r_71 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_71, r_71);
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm z_29 = t;
  int a_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, c_9, f_9, t);
      ;
      LocalPopChoice(a_30);
    }
  else
    {
      t = z_29;
      {
        ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL,a_72 = NULL,b_72 = NULL,c_72 = NULL,d_72 = NULL;
        if(match_cons(t, sym__5))
          {
            x_71 = ATgetArgument(t, 0);
            a_72 = ATgetArgument(t, 1);
            b_72 = ATgetArgument(t, 2);
            c_72 = ATgetArgument(t, 3);
            d_72 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = x_71;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_71 = ATgetFirst((ATermList) t);
            z_71 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, z_71, a_72, b_72, c_72, (ATerm) ATinsert(CheckATermList(d_72), y_71));
      }
    }
  return(t);
}
ATerm c_9 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(h_9, t);
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm u_71 = NULL,v_71 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm f_30 = ATgetArgument(t, 0);
      u_71 = ATgetArgument(t, 1);
      v_71 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_71), u_71);
  return(t);
}
ATerm h_9 (ATerm t)
{
  ATerm g_30 = t;
  int i_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      ;
      LocalPopChoice(i_30);
    }
  else
    {
      t = g_30;
    }
  return(t);
}
ATerm i_9 (ATerm t)
{
  ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL;
  x_32 = t;
  if(match_cons(t, sym__2))
    {
      y_32 = ATgetArgument(t, 0);
      z_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_32;
  if(match_cons(t, sym_Mod_2))
    {
      v_32 = ATgetArgument(t, 0);
      w_32 = ATgetArgument(t, 1);
      {
        ATerm j_30 = t;
        int k_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_32;
            t = a_8(v_32, w_32, z_32, t);
            ;
            LocalPopChoice(k_30);
          }
        else
          {
            t = j_30;
            t = j_33(y_32, z_32, t);
          }
      }
    }
  else
    {
      t = j_33(y_32, z_32, t);
    }
  return(t);
}
ATerm j_33 (ATerm m_32, ATerm n_32, ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL;
  t = term_x_14;
  r_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_15), n_32), term_w_15), m_32), term_t_15);
  s_32 = t;
  t = SSL_printnl(r_32, s_32);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_15), n_32), term_w_15), m_32), term_t_15);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL;
  t = for_3_0(r_8, s_8, b_9, t);
  g_73 = t;
  if(match_cons(t, sym__2))
    {
      h_73 = ATgetArgument(t, 0);
      i_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_73;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_73;
    }
  else
    {
      ATerm g_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_73 = ATgetFirst((ATermList) t);
          k_73 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(k_73), j_73);
      t = map_1_0(i_9, t);
      t = term_a_15;
      g_32 = t;
      t = SSL_exit(g_32);
    }
  return(t);
}
ATerm j_9 (ATerm t_123 (ATerm), ATerm w_53, ATerm u_53, ATerm t)
{
  ATerm v_73 = NULL,w_73 = NULL,x_73 = NULL,y_73 = NULL,z_73 = NULL,a_74 = NULL;
  y_73 = t;
  t = t_123(t);
  v_73 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_73, w_53, u_53);
  t = z_9(v_73, w_53, u_53, t);
  {
    ATerm l_30 = t;
    int m_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_74 = NULL;
        t = term_n_30;
        b_74 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_73, term_n_30);
        t = y_9(v_73, b_74, t);
        ;
        LocalPopChoice(m_30);
      }
    else
      {
        t = l_30;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_73 = ATgetFirst((ATermList) t);
        x_73 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_n_30;
    z_73 = t;
    t = (ATerm) ATinsert(CheckATermList(x_73), (ATerm) ATinsert(CheckATermList(w_73), w_53));
    a_74 = t;
    t = SSL_table_put(v_73, z_73, a_74);
    t = y_73;
  }
  return(t);
}
ATerm k_9 (ATerm x_119 (ATerm), ATerm y_119 (ATerm), ATerm z_48, ATerm y_48, ATerm t)
{
  t = y_119(t);
  {
    ATerm m_9 (ATerm t)
    {
      ATerm c_74 = NULL;
      c_74 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_48), c_74);
      t = x_119(t);
      return(t);
    }
    t = fetch_1_0(m_9, t);
    t = not_null(y_48);
  }
  return(t);
}
ATerm l_9 (ATerm u_119 (ATerm), ATerm v_48, ATerm u_48, ATerm t)
{
  ATerm s_74 (ATerm t)
  {
    ATerm n_74 = NULL,o_74 = NULL,p_74 = NULL;
    n_74 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(u_48);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_74 = ATgetFirst((ATermList) t);
            p_74 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm o_30 = t;
          int q_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_74;
              {
                ATerm o_9 (ATerm t)
                {
                  t = not_null(u_48);
                  return(t);
                }
                t = k_9(u_119, o_9, not_null(o_74), not_null(p_74), t);
                t = s_74(t);
              }
              ;
              LocalPopChoice(q_30);
            }
          else
            {
              t = o_30;
              {
                ATerm u_33 = NULL,z_33 = NULL,p_7 = NULL;
                t = SSLgetAnnotations(n_74);
                u_33 = t;
                t = p_74;
                t = s_74(t);
                z_33 = t;
                t = (ATerm) ATinsert(CheckATermList(z_33), o_74);
                p_7 = t;
                t = SSLsetAnnotations(p_7, u_33);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(v_48);
  t = s_74(t);
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm j_75 = NULL;
  j_75 = t;
  {
    ATerm r_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_34 = NULL,x_34 = NULL;
        t = term_y_30;
        x_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_y_30, j_75);
        t = n_9(x_34, j_75, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm c_31 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_31) != ATmakeSymbol("r_0", 0, ATtrue)))
              _fail(t);
            u_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_34;
        ;
        LocalPopChoice(t_30);
      }
    else
      {
        t = r_30;
        {
          ATerm b_35 = NULL,h_35 = NULL;
          t = term_y_30;
          h_35 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_y_30, j_75);
          t = n_9(h_35, j_75, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm d_31 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) d_31) != ATmakeSymbol("l_0", 0, ATtrue)))
                _fail(t);
              b_35 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_35;
        }
      }
  }
  return(t);
}
ATerm n_9 (ATerm p_54, ATerm q_54, ATerm t)
{
  ATerm m_75 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_54, q_54);
  t = y_9(p_54, q_54, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_75 = ATgetFirst((ATermList) t);
      {
        ATerm e_31 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = m_75;
  return(t);
}
ATerm g_76 (ATerm w_75, ATerm t)
{
  ATerm y_75 = NULL,z_75 = NULL,u_35 = NULL;
  t = term_f_31;
  u_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_31, w_75);
  t = n_9(u_35, w_75, t);
  if(match_cons(t, sym_Defined_3))
    {
      ATerm g_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_31) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
      y_75 = ATgetArgument(t, 1);
      z_75 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_75), y_75);
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm c_76 = NULL,e_76 = NULL;
  c_76 = t;
  if(match_cons(t, sym__2))
    {
      ATerm k_31 = ATgetArgument(t, 0);
      e_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_76;
  {
    ATerm l_31 = t;
    int n_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_31 = ATgetArgument(t, 0);
            ATerm s_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(n_31);
        {
          ATerm u_31 = t;
          int v_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_36 = NULL,n_36 = NULL;
              t = term_f_31;
              n_36 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_f_31, c_76);
              t = n_9(n_36, c_76, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm w_31 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) w_31) != ATmakeSymbol("o_0", 0, ATtrue)))
                    _fail(t);
                  h_36 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = h_36;
              ;
              LocalPopChoice(v_31);
            }
          else
            {
              t = u_31;
              t = g_76(c_76, t);
            }
        }
      }
    else
      {
        t = l_31;
        t = g_76(c_76, t);
      }
  }
  return(t);
}
ATerm foldr_3_0 (ATerm k_122 (ATerm), ATerm l_122 (ATerm), ATerm m_122 (ATerm), ATerm t)
{
  ATerm i_76 = NULL,j_76 = NULL,o_76 = NULL;
  i_76 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_76;
      t = k_122(t);
    }
  else
    {
      ATerm r_76 = NULL,s_76 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_76 = ATgetFirst((ATermList) t);
          o_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_76;
      t = m_122(t);
      r_76 = t;
      t = o_76;
      t = foldr_3_0(k_122, l_122, m_122, t);
      s_76 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_76, s_76);
      t = l_122(t);
    }
  return(t);
}
ATerm x_9 (ATerm t)
{
  t = term_j_17;
  return(t);
}
ATerm c_10 (ATerm t)
{
  ATerm h_77 = NULL,i_77 = NULL;
  if(match_cons(t, sym__2))
    {
      h_77 = ATgetArgument(t, 0);
      i_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9(h_77, i_77, t);
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
ATerm g_10 (ATerm t)
{
  ATerm j_77 = NULL,k_77 = NULL;
  if(match_cons(t, sym__2))
    {
      j_77 = ATgetArgument(t, 0);
      k_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9(j_77, k_77, t);
  return(t);
}
ATerm h_10 (ATerm t)
{
  t = term_a_15;
  return(t);
}
ATerm i_10 (ATerm t)
{
  ATerm l_77 = NULL;
  if(match_cons(t, sym__2))
    {
      l_77 = ATgetArgument(t, 0);
      if((l_77 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm j_10 (ATerm t)
{
  t = term_f_31;
  return(t);
}
ATerm m_10 (ATerm t)
{
  t = term_y_30;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm t_76 = NULL,u_76 = NULL,v_76 = NULL,w_76 = NULL,x_76 = NULL,y_76 = NULL,z_76 = NULL,a_77 = NULL,b_77 = NULL,c_77 = NULL,d_77 = NULL,e_77 = NULL,f_77 = NULL,g_77 = NULL;
  v_76 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      y_76 = ATgetArgument(t, 0);
      t_76 = ATgetArgument(t, 1);
      u_76 = ATgetArgument(t, 2);
      {
        ATerm x_31 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  a_77 = t;
  t = t_76;
  t = foldr_3_0(x_9, c_10, d_10, t);
  w_76 = t;
  t = u_76;
  t = foldr_3_0(e_10, g_10, h_10, t);
  x_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_76, (ATerm) ATmakeAppl(sym__2, w_76, x_76));
  {
    ATerm y_31 = t;
    int z_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        ;
        LocalPopChoice(z_31);
      }
    else
      {
        t = y_31;
        t = (ATerm) ATempty;
      }
    c_77 = t;
    t = y_76;
    {
      ATerm a_32 = t;
      int b_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Arities_0_0(t);
          ;
          LocalPopChoice(b_32);
        }
      else
        {
          t = a_32;
          t = (ATerm) ATempty;
        }
      b_77 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, w_76, x_76));
      g_77 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, w_76, x_76)), b_77);
      t = l_9(i_10, g_77, b_77, t);
      z_76 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_76, (ATerm) ATmakeAppl(sym__2, w_76, x_76));
      e_77 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_32, (ATerm) ATinsert(CheckATermList(c_77), v_76));
      f_77 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_76, (ATerm) ATmakeAppl(sym__2, w_76, x_76)), (ATerm) ATmakeAppl(sym_Defined_2, term_c_32, (ATerm) ATinsert(CheckATermList(c_77), v_76)));
      t = j_9(j_10, e_77, f_77, t);
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_32, z_76);
      d_77 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_76, (ATerm) ATmakeAppl(sym_Defined_2, term_d_32, z_76));
      t = j_9(m_10, y_76, d_77, t);
      t = a_77;
    }
  }
  return(t);
}
ATerm needed_defs_0_0 (ATerm t)
{
  ATerm m_77 = NULL;
  t = map_1_0(RegisterSDefT_0_0, t);
  m_77 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_h_32), m_77, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm b_96 (ATerm), ATerm c_96 (ATerm), ATerm t)
{
  ATerm n_77 = NULL,o_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL,r_7 = NULL;
  s_77 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_77 = ATgetFirst((ATermList) t);
      p_77 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_77);
  n_77 = t;
  t = o_77;
  t = b_96(t);
  q_77 = t;
  t = p_77;
  t = c_96(t);
  r_77 = t;
  t = (ATerm) ATinsert(CheckATermList(r_77), q_77);
  r_7 = t;
  t = SSLsetAnnotations(r_7, n_77);
  return(t);
}
ATerm q_9 (ATerm c_70, ATerm d_70, ATerm t)
{
  ATerm t_77 = NULL;
  t = SSL_fputc(c_70, d_70);
  t_77 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_77);
  return(t);
}
ATerm r_9 (ATerm q_73, ATerm r_73, ATerm t)
{
  ATerm u_77 = NULL;
  t = SSL_write_term_to_stream_text(q_73, r_73);
  u_77 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_77);
  return(t);
}
ATerm t_9 (ATerm l_133 (ATerm), ATerm p_562, ATerm u_73, ATerm t)
{
  ATerm v_77 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_562, term_i_32);
  t = open_stream_0_0(t);
  v_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_77, u_73);
  t = l_133(t);
  t = fclose_0_0(t);
  t = u_73;
  return(t);
}
ATerm s_9 (ATerm m_73, ATerm n_73, ATerm t)
{
  ATerm w_77 = NULL;
  t = SSL_write_term_to_stream_baf(m_73, n_73);
  w_77 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_77);
  return(t);
}
ATerm r_10 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm t_10 (ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_32 = ATgetArgument(t, 0);
      if(match_cons(j_32, sym_Stream_1))
        {
          n_37 = ATgetArgument(j_32, 0);
        }
      else
        _fail(t);
      o_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_9(n_37, o_37, t);
  return(t);
}
ATerm v_10 (ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_32 = ATgetArgument(t, 0);
      if(match_cons(k_32, sym_Stream_1))
        {
          r_38 = ATgetArgument(k_32, 0);
        }
      else
        _fail(t);
      s_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_9(r_38, s_38, t);
  o_38 = t;
  t = term_l_32;
  p_38 = t;
  t = o_38;
  if(match_cons(t, sym_Stream_1))
    {
      q_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_l_32, o_38);
  t = q_9(p_38, q_38, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm a_78 = NULL,b_78 = NULL,c_78 = NULL,d_78 = NULL,e_78 = NULL,g_78 = NULL,h_78 = NULL,i_78 = NULL,j_78 = NULL,k_78 = NULL,q_79 = NULL,r_79 = NULL,n_8 = NULL,d_8 = NULL;
  if(((b_78 != NULL) && (b_78 != t)))
    _fail(t);
  else
    b_78 = t;
  if(match_cons(t, sym__2))
    {
      if(((i_78 != NULL) && (i_78 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_78 = ATgetArgument(t, 0);
      if(((j_78 != NULL) && (j_78 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(b_78));
  if(((h_78 != NULL) && (h_78 != t)))
    _fail(t);
  else
    h_78 = t;
  t = not_null(i_78);
  {
    ATerm o_32 = t;
    int p_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_10 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((a_78 != NULL) && (a_78 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                a_78 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(q_10, t);
        ;
        LocalPopChoice(p_32);
      }
    else
      {
        t = o_32;
        t = term_q_32;
        if(((a_78 != NULL) && (a_78 != t)))
          _fail(t);
        else
          a_78 = t;
      }
    if(((k_78 != NULL) && (k_78 != t)))
      _fail(t);
    else
      k_78 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_78), not_null(j_78));
    if(((d_8 != NULL) && (d_8 != t)))
      _fail(t);
    else
      d_8 = t;
    t = SSLsetAnnotations(not_null(d_8), not_null(h_78));
    t = not_null(b_78);
    if(match_cons(t, sym__2))
      {
        if(((d_78 != NULL) && (d_78 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          d_78 = ATgetArgument(t, 0);
        if(((e_78 != NULL) && (e_78 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          e_78 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(b_78));
    if(((c_78 != NULL) && (c_78 != t)))
      _fail(t);
    else
      c_78 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_78), (ATerm) ATmakeAppl(sym__2, not_null(a_78), not_null(e_78)));
    if(((n_8 != NULL) && (n_8 != t)))
      _fail(t);
    else
      n_8 = t;
    t = SSLsetAnnotations(not_null(n_8), not_null(c_78));
    if(((g_78 != NULL) && (g_78 != t)))
      _fail(t);
    else
      g_78 = t;
    if(match_cons(t, sym__2))
      {
        if(((q_79 != NULL) && (q_79 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          q_79 = ATgetArgument(t, 0);
        if(((r_79 != NULL) && (r_79 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          r_79 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm t_32 = t;
      int u_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_37 = NULL,e_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,d_9 = NULL;
          t = SSLgetAnnotations(not_null(g_78));
          a_37 = t;
          t = not_null(q_79);
          t = fetch_1_0(r_10, t);
          e_37 = t;
          t = not_null(r_79);
          if(match_cons(t, sym__2))
            {
              l_37 = ATgetArgument(t, 0);
              m_37 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_9(t_10, l_37, m_37, t);
          k_37 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_37, k_37);
          d_9 = t;
          t = SSLsetAnnotations(d_9, a_37);
          ;
          LocalPopChoice(u_32);
        }
      else
        {
          t = t_32;
          {
            ATerm v_37 = NULL,h_38 = NULL,i_38 = NULL,k_38 = NULL,a_10 = NULL;
            t = SSLgetAnnotations(not_null(g_78));
            v_37 = t;
            t = not_null(r_79);
            if(match_cons(t, sym__2))
              {
                i_38 = ATgetArgument(t, 0);
                k_38 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = t_9(v_10, i_38, k_38, t);
            h_38 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_79), h_38);
            a_10 = t;
            t = SSLsetAnnotations(a_10, v_37);
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
ATerm apply_strategy_1_0 (ATerm n_136 (ATerm), ATerm t)
{
  ATerm u_79 = NULL,v_79 = NULL,w_79 = NULL,x_79 = NULL,y_79 = NULL;
  y_79 = t;
  t = dtime_0_0(t);
  t = y_79;
  t = n_136(t);
  x_79 = t;
  t = dtime_0_0(t);
  u_79 = t;
  t = x_79;
  if(match_cons(t, sym__2))
    {
      v_79 = ATgetArgument(t, 0);
      w_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_79), (ATerm) ATmakeAppl(sym_Runtime_1, u_79)), w_79);
  return(t);
}
ATerm m_80 (ATerm g_80, ATerm t)
{
  t = SSL_fclose(g_80);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_80 = NULL,k_80 = NULL;
  k_80 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_80 = ATgetArgument(t, 0);
      {
        ATerm a_33 = t;
        int b_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_80);
            ;
            LocalPopChoice(b_33);
          }
        else
          {
            t = a_33;
            t = m_80(k_80, t);
          }
      }
    }
  else
    {
      t = m_80(k_80, t);
    }
  return(t);
}
ATerm u_9 (ATerm s_73, ATerm t)
{
  t = SSL_read_term_from_stream(s_73);
  return(t);
}
ATerm v_9 (ATerm e_70, ATerm f_70, ATerm t)
{
  ATerm n_80 = NULL;
  t = SSL_fopen(e_70, f_70);
  n_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_80);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_80 = NULL;
  t = SSL_stdin_stream();
  p_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_80);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_80 = NULL;
  t = SSL_stdout_stream();
  q_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_80);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_80 = NULL;
  t = SSL_stderr_stream();
  v_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_80);
  return(t);
}
ATerm w_82 (ATerm b_81, ATerm t)
{
  ATerm c_81 = NULL;
  t = SSL_explode_term(b_81);
  if(match_cons(t, sym__2))
    {
      ATerm c_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_33 = ATgetArgument(t, 1);
        if(((ATgetType(d_33) == AT_LIST) && !(ATisEmpty(d_33))))
          {
            c_81 = ATgetFirst((ATermList) d_33);
            {
              ATerm e_33 = (ATerm) ATgetNext((ATermList) d_33);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_81;
  if(match_cons(t, sym_stderr_0))
    {
      t = c_81;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = c_81;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_81;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm x_82 (ATerm f_81, ATerm g_81, ATerm h_81, ATerm t)
{
  ATerm i_81 = NULL,j_81 = NULL,k_81 = NULL,n_81 = NULL,k_10 = NULL;
  t = SSLgetAnnotations(h_81);
  k_81 = t;
  t = f_81;
  if(match_cons(t, sym_Path_1))
    {
      n_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_81, g_81);
  k_10 = t;
  t = SSLsetAnnotations(k_10, k_81);
  if(match_cons(t, sym__2))
    {
      i_81 = ATgetArgument(t, 0);
      j_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_9(i_81, j_81, t);
  return(t);
}
ATerm y_82 (ATerm z_81, ATerm a_82, ATerm b_82, ATerm t)
{
  ATerm c_82 = NULL,d_82 = NULL,e_82 = NULL,h_82 = NULL,l_10 = NULL;
  t = SSLgetAnnotations(b_82);
  e_82 = t;
  t = SSL_is_string(z_81);
  h_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_82, a_82);
  l_10 = t;
  t = SSLsetAnnotations(l_10, e_82);
  if(match_cons(t, sym__2))
    {
      c_82 = ATgetArgument(t, 0);
      d_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_9(c_82, d_82, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm t_82 = NULL,u_82 = NULL,v_82 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_33 = ATgetArgument(t, 0);
      ATerm g_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t_82 = t;
  if(match_cons(t, sym__2))
    {
      u_82 = ATgetArgument(t, 0);
      v_82 = ATgetArgument(t, 1);
      {
        ATerm h_33 = t;
        int i_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_82(t_82, t);
            ;
            LocalPopChoice(i_33);
          }
        else
          {
            t = h_33;
            {
              ATerm k_33 = t;
              int l_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_82(u_82, v_82, t_82, t);
                  ;
                  LocalPopChoice(l_33);
                }
              else
                {
                  t = k_33;
                  t = y_82(u_82, v_82, t_82, t);
                }
            }
          }
      }
    }
  else
    {
      t = w_82(t_82, t);
    }
  return(t);
}
ATerm x_10 (ATerm t)
{
  t = term_m_33;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm z_82 = NULL,a_83 = NULL,b_83 = NULL;
  ATerm n_33 = t;
  int o_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_83 = NULL;
      c_83 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_83, term_p_33);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(o_33);
    }
  else
    {
      t = n_33;
      t = debug_1_0(x_10, t);
      _fail(t);
    }
  a_83 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(b_83, t);
  z_82 = t;
  t = a_83;
  t = fclose_0_0(t);
  t = z_82;
  return(t);
}
ATerm fetch_1_0 (ATerm c_118 (ATerm), ATerm t)
{
  ATerm l_85 (ATerm t)
  {
    ATerm z_84 = NULL,a_85 = NULL,b_85 = NULL;
    z_84 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_85 = ATgetFirst((ATermList) t);
        b_85 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm q_33 = t;
      int r_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_39 = NULL,c_40 = NULL,c_11 = NULL;
          t = SSLgetAnnotations(z_84);
          z_39 = t;
          t = a_85;
          t = c_118(t);
          c_40 = t;
          t = (ATerm) ATinsert(CheckATermList(b_85), c_40);
          c_11 = t;
          t = SSLsetAnnotations(c_11, z_39);
          ;
          LocalPopChoice(r_33);
        }
      else
        {
          t = q_33;
          {
            ATerm o_40 = NULL,r_40 = NULL,d_11 = NULL;
            t = SSLgetAnnotations(z_84);
            o_40 = t;
            t = b_85;
            t = l_85(t);
            r_40 = t;
            t = (ATerm) ATinsert(CheckATermList(r_40), a_85);
            d_11 = t;
            t = SSLsetAnnotations(d_11, o_40);
          }
        }
    }
    return(t);
  }
  t = l_85(t);
  return(t);
}
ATerm p_9 (ATerm l_62, ATerm m_62, ATerm t)
{
  t = SSL_strcat(l_62, m_62);
  return(t);
}
ATerm debug_1_0 (ATerm j_133 (ATerm), ATerm t)
{
  ATerm o_85 = NULL,p_85 = NULL,q_85 = NULL,w_85 = NULL;
  o_85 = t;
  t = j_133(t);
  p_85 = t;
  t = term_x_14;
  q_85 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_85), p_85);
  w_85 = t;
  t = SSL_printnl(q_85, w_85);
  t = o_85;
  return(t);
}
ATerm y_10 (ATerm t)
{
  ATerm s_33 = t;
  int t_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(t_33);
    }
  else
    {
      t = s_33;
    }
  return(t);
}
ATerm a_11 (ATerm t)
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
      ATerm s_88 = NULL;
      s_88 = t;
      t = SSL_is_string(s_88);
      ;
      LocalPopChoice(x_33);
    }
  else
    {
      t = w_33;
      {
        ATerm y_33 = t;
        int a_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(y_10, t);
            ;
            LocalPopChoice(a_34);
          }
        else
          {
            t = y_33;
            {
              ATerm y_88 = NULL,z_88 = NULL,a_89 = NULL;
              y_88 = t;
              if(match_cons(t, sym_Path_1))
                {
                  z_88 = ATgetArgument(t, 0);
                  t = z_88;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      z_88 = ATgetArgument(t, 0);
                      t = z_88;
                      {
                        ATerm b_34 = t;
                        int c_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(c_34);
                          }
                        else
                          {
                            t = b_34;
                            t = debug_1_0(a_11, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm e_89 = NULL,f_89 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          z_88 = ATgetArgument(t, 0);
                          a_89 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = z_88;
                      t = eval_config_0_0(t);
                      e_89 = t;
                      t = a_89;
                      t = eval_config_0_0(t);
                      f_89 = t;
                      t = (ATerm) ATmakeAppl(sym__2, e_89, f_89);
                      t = p_9(e_89, f_89, t);
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
  ATerm j_89 = NULL,k_89 = NULL;
  j_89 = t;
  t = term_d_34;
  k_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_34, j_89);
  t = y_9(k_89, j_89, t);
  {
    ATerm e_34 = t;
    int f_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_89 = NULL,m_89 = NULL;
        t = eval_config_0_0(t);
        l_89 = t;
        t = term_d_34;
        m_89 = t;
        t = SSL_table_put(m_89, j_89, l_89);
        t = l_89;
        ;
        LocalPopChoice(f_34);
      }
    else
      {
        t = e_34;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm w_134 (ATerm), ATerm t)
{
  ATerm q_89 = NULL;
  q_89 = t;
  {
    ATerm g_34 = t;
    int j_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_89 = NULL;
        t = term_l_34;
        t = get_config_0_0(t);
        s_89 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_89, term_m_34);
        t = geq_0_0(t);
        t = q_89;
        t = w_134(t);
        ;
        LocalPopChoice(j_34);
      }
    else
      {
        t = g_34;
        t = q_89;
      }
  }
  return(t);
}
ATerm e_11 (ATerm t)
{
  ATerm v_89 = NULL;
  v_89 = t;
  if(match_string(t, "-k"))
    {
      t = v_89;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = v_89;
    }
  return(t);
}
ATerm f_11 (ATerm t)
{
  ATerm w_89 = NULL,x_89 = NULL,y_89 = NULL;
  w_89 = t;
  t = SSL_string_to_int(w_89);
  x_89 = t;
  t = term_n_34;
  y_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_34, x_89);
  t = b_10(y_89, x_89, t);
  t = w_89;
  return(t);
}
ATerm j_11 (ATerm t)
{
  t = term_o_34;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_11, f_11, j_11, t);
  return(t);
}
ATerm l_11 (ATerm t)
{
  ATerm a_90 = NULL;
  a_90 = t;
  if(match_string(t, "-S"))
    {
      t = a_90;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = a_90;
    }
  return(t);
}
ATerm m_11 (ATerm t)
{
  ATerm b_90 = NULL,c_90 = NULL;
  t = term_l_34;
  b_90 = t;
  t = term_j_17;
  c_90 = t;
  t = term_p_34;
  t = b_10(b_90, c_90, t);
  t = term_q_34;
  return(t);
}
ATerm q_11 (ATerm t)
{
  t = term_r_34;
  return(t);
}
ATerm r_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_11 (ATerm t)
{
  ATerm d_90 = NULL,e_90 = NULL,f_90 = NULL;
  d_90 = t;
  t = SSL_string_to_int(d_90);
  e_90 = t;
  t = term_l_34;
  f_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_34, e_90);
  t = b_10(f_90, e_90, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, d_90);
  return(t);
}
ATerm t_11 (ATerm t)
{
  t = term_s_34;
  return(t);
}
ATerm v_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_11 (ATerm t)
{
  ATerm g_90 = NULL,h_90 = NULL;
  t = term_t_34;
  g_90 = t;
  t = term_u_14;
  h_90 = t;
  t = term_v_34;
  t = b_10(g_90, h_90, t);
  t = term_w_34;
  return(t);
}
ATerm y_11 (ATerm t)
{
  t = term_y_34;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_34 = t;
  int a_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_11, m_11, q_11, t);
      ;
      LocalPopChoice(a_35);
    }
  else
    {
      t = z_34;
      {
        ATerm c_35 = t;
        int d_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_11, s_11, t_11, t);
            ;
            LocalPopChoice(d_35);
          }
        else
          {
            t = c_35;
            t = Option_3_0(v_11, w_11, y_11, t);
          }
      }
    }
  return(t);
}
ATerm b_10 (ATerm t_74, ATerm u_74, ATerm t)
{
  ATerm i_90 = NULL;
  t = term_d_34;
  i_90 = t;
  t = SSL_table_put(i_90, t_74, u_74);
  t = (ATerm) ATmakeAppl(sym__3, term_d_34, t_74, u_74);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm l_90 = NULL,m_90 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_90 = NULL,o_90 = NULL,p_90 = NULL;
      t = term_u_14;
      t = d_0(t);
      n_90 = t;
      t = term_i_35;
      o_90 = t;
      t = term_k_35;
      p_90 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_35, term_k_35, n_90);
      t = z_9(o_90, p_90, n_90, t);
      _fail(t);
    }
  else
    {
      ATerm s_90 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_90 = ATgetFirst((ATermList) t);
          m_90 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_90;
      t = a_0(t);
      t = term_u_14;
      t = b_0(t);
      s_90 = t;
      t = (ATerm) ATinsert(CheckATermList(m_90), s_90);
    }
  return(t);
}
ATerm b_12 (ATerm t)
{
  ATerm u_90 = NULL;
  u_90 = t;
  if(match_string(t, "-o"))
    {
      t = u_90;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_90;
    }
  return(t);
}
ATerm c_12 (ATerm t)
{
  ATerm v_90 = NULL,w_90 = NULL;
  v_90 = t;
  t = term_n_35;
  w_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_35, v_90);
  t = b_10(w_90, v_90, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_90);
  return(t);
}
ATerm e_12 (ATerm t)
{
  t = term_o_35;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_12, c_12, e_12, t);
  return(t);
}
ATerm z_9 (ATerm e_54, ATerm f_54, ATerm d_54, ATerm t)
{
  ATerm y_90 = NULL,z_90 = NULL,c_91 = NULL;
  y_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_54, f_54);
  {
    ATerm p_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_35 = ATgetArgument(t, 0);
            ATerm s_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_54, f_54);
        t = y_9(e_54, f_54, t);
        ;
        LocalPopChoice(q_35);
      }
    else
      {
        t = p_35;
        t = (ATerm) ATempty;
      }
    z_90 = t;
    t = (ATerm) ATinsert(CheckATermList(z_90), d_54);
    c_91 = t;
    t = SSL_table_put(e_54, f_54, c_91);
    t = y_90;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm p_91 = NULL,q_91 = NULL,r_91 = NULL,s_91 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_91 = NULL,u_91 = NULL,v_91 = NULL;
      t = term_u_14;
      t = m_0(t);
      t_91 = t;
      t = term_i_35;
      u_91 = t;
      t = term_k_35;
      v_91 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_35, term_k_35, t_91);
      t = z_9(u_91, v_91, t_91, t);
      _fail(t);
    }
  else
    {
      ATerm z_91 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_91 = ATgetFirst((ATermList) t);
          q_91 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_91;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_91 = ATgetFirst((ATermList) t);
          s_91 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_91;
      t = i_0(t);
      t = r_91;
      t = k_0(t);
      z_91 = t;
      t = (ATerm) ATinsert(CheckATermList(s_91), z_91);
    }
  return(t);
}
ATerm l_12 (ATerm t)
{
  ATerm b_92 = NULL;
  b_92 = t;
  if(match_string(t, "-i"))
    {
      t = b_92;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_92;
    }
  return(t);
}
ATerm m_12 (ATerm t)
{
  ATerm c_92 = NULL,d_92 = NULL;
  c_92 = t;
  t = term_t_35;
  d_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_35, c_92);
  t = b_10(d_92, c_92, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_92);
  return(t);
}
ATerm o_12 (ATerm t)
{
  t = term_v_35;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_12, m_12, o_12, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_92 = NULL,f_92 = NULL,g_92 = NULL,h_92 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_14;
  t = whoami_0_0(t);
  e_92 = t;
  t = term_x_14;
  g_92 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_w_35), e_92);
  h_92 = t;
  t = SSL_printnl(g_92, h_92);
  t = term_a_15;
  f_92 = t;
  t = SSL_exit(f_92);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_x_35;
  t = get_config_0_0(t);
  return(t);
}
ATerm w_9 (ATerm i_52, ATerm j_52, ATerm t)
{
  ATerm y_35 = t;
  int z_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_52, j_52);
      ;
      LocalPopChoice(z_35);
    }
  else
    {
      t = y_35;
      t = SSL_addr(i_52, j_52);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_122 (ATerm), ATerm j_122 (ATerm), ATerm t)
{
  ATerm j_92 = NULL,k_92 = NULL,l_92 = NULL;
  j_92 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_92;
      t = i_122(t);
    }
  else
    {
      ATerm o_92 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_92 = ATgetFirst((ATermList) t);
          l_92 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_92;
      t = foldr_2_0(i_122, j_122, t);
      o_92 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_92, o_92);
      t = j_122(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm u_12 (ATerm t)
{
  t = term_j_17;
  return(t);
}
ATerm v_12 (ATerm t)
{
  ATerm a_42 = NULL,c_42 = NULL;
  if(match_cons(t, sym__2))
    {
      a_42 = ATgetArgument(t, 0);
      c_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9(a_42, c_42, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_92 = NULL,v_41 = NULL,w_41 = NULL;
  t = times_0_0(t);
  w_41 = t;
  t = SSL_explode_term(w_41);
  if(match_cons(t, sym__2))
    {
      ATerm a_36 = ATgetArgument(t, 0);
      v_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_41;
  t = foldr_2_0(u_12, v_12, t);
  r_92 = t;
  t = SSL_TicksToSeconds(r_92);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_93 = NULL,d_93 = NULL,e_93 = NULL;
  c_93 = t;
  if(match_cons(t, sym__2))
    {
      d_93 = ATgetArgument(t, 0);
      e_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_36 = t;
    int c_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_93;
        if((d_93 != t))
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
        t = (ATerm) ATmakeAppl(sym__2, d_93, e_93);
        {
          ATerm d_36 = t;
          int e_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_93, e_93);
              ;
              LocalPopChoice(e_36);
            }
          else
            {
              t = d_36;
              t = SSL_gtr(d_93, e_93);
            }
          t = (ATerm) ATmakeAppl(sym__2, d_93, e_93);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_134 (ATerm), ATerm t)
{
  ATerm i_93 = NULL;
  i_93 = t;
  {
    ATerm f_36 = t;
    int i_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_93 = NULL;
        t = term_l_34;
        t = get_config_0_0(t);
        k_93 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_93, term_a_15);
        t = geq_0_0(t);
        t = i_93;
        t = v_134(t);
        ;
        LocalPopChoice(i_36);
      }
    else
      {
        t = f_36;
        t = i_93;
      }
  }
  return(t);
}
ATerm w_12 (ATerm t)
{
  ATerm m_93 = NULL,n_93 = NULL,p_93 = NULL,q_93 = NULL;
  t = run_time_0_0(t);
  m_93 = t;
  t = term_u_14;
  t = whoami_0_0(t);
  n_93 = t;
  t = term_x_14;
  p_93 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_36), m_93), term_j_36), n_93);
  q_93 = t;
  t = SSL_printnl(p_93, q_93);
  t = (ATerm) ATmakeAppl(sym__2, term_x_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_36), m_93), term_j_36), n_93));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm r_93 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_17;
  r_93 = t;
  t = SSL_exit(r_93);
  return(t);
}
ATerm z_12 (ATerm t)
{
  ATerm z_93 = NULL,a_94 = NULL;
  a_94 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = a_94;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          z_93 = ATgetArgument(t, 0);
          {
            ATerm s_42 = NULL,g_11 = NULL;
            t = SSLgetAnnotations(a_94);
            s_42 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, z_93);
            g_11 = t;
            t = SSLsetAnnotations(g_11, s_42);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = a_94;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm l_137 (ATerm), ATerm t)
{
  ATerm q_36 = t;
  int r_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_36;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(r_36);
    }
  else
    {
      t = q_36;
      t = fetch_1_0(z_12, t);
    }
  t = l_137(t);
  return(t);
}
ATerm map_1_0 (ATerm s_117 (ATerm), ATerm t)
{
  ATerm q_94 (ATerm t)
  {
    ATerm n_94 = NULL,o_94 = NULL,p_94 = NULL;
    n_94 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_94;
      }
    else
      {
        ATerm a_43 = NULL,b_44 = NULL,s_44 = NULL,k_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_94 = ATgetFirst((ATermList) t);
            p_94 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_94);
        a_43 = t;
        t = o_94;
        t = s_117(t);
        b_44 = t;
        t = p_94;
        t = q_94(t);
        s_44 = t;
        t = (ATerm) ATinsert(CheckATermList(s_44), b_44);
        k_11 = t;
        t = SSLsetAnnotations(k_11, a_43);
      }
    return(t);
  }
  t = q_94(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm t_94 = NULL,u_94 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_94 = ATgetFirst((ATermList) t);
      u_94 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_94 = NULL,z_94 = NULL;
        ATerm a_13 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_94)), not_null(z_94));
          return(t);
        }
        t = not_null(u_94);
        t = g_0(t);
        if(((y_94 != NULL) && (y_94 != t)))
          _fail(t);
        else
          y_94 = t;
        t = not_null(t_94);
        t = f_0(t);
        if(((z_94 != NULL) && (z_94 != t)))
          _fail(t);
        else
          z_94 = t;
        t = not_null(u_94);
        t = reverse_acc_2_0(f_0, a_13, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_14;
      t = g_0(t);
    }
  return(t);
}
ATerm y_9 (ATerm v_55, ATerm w_55, ATerm t)
{
  t = SSL_table_get(v_55, w_55);
  return(t);
}
ATerm b_13 (ATerm t)
{
  ATerm d_95 = NULL,e_95 = NULL,f_95 = NULL,x_11 = NULL;
  f_95 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_95);
  d_95 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_95);
  x_11 = t;
  t = SSLsetAnnotations(x_11, d_95);
  return(t);
}
ATerm c_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_13 (ATerm t)
{
  ATerm h_95 = NULL;
  h_95 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_95), term_t_36);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_95 = NULL,c_95 = NULL;
  ATerm u_36 = t;
  int v_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_35;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_36);
    }
  else
    {
      t = u_36;
      t = fetch_1_0(b_13, t);
    }
  t = term_w_36;
  t = echo_0_0(t);
  t = term_i_35;
  b_95 = t;
  t = term_k_35;
  c_95 = t;
  t = term_x_36;
  t = y_9(b_95, c_95, t);
  t = reverse_acc_2_0(_id, c_13, t);
  t = map_1_0(e_13, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_95 = NULL,k_95 = NULL,l_95 = NULL;
  j_95 = t;
  {
    ATerm z_36 = t;
    int b_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_95;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_37 = ATgetFirst((ATermList) t);
                ATerm d_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_95;
          }
        ;
        LocalPopChoice(b_37);
      }
    else
      {
        t = z_36;
        t = (ATerm) ATinsert(ATempty, j_95);
      }
    k_95 = t;
    t = term_q_32;
    l_95 = t;
    t = SSL_printnl(l_95, k_95);
    t = j_95;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_x_35;
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
  ATerm p_95 = NULL,q_95 = NULL;
  t = term_j_37;
  p_95 = t;
  t = term_u_14;
  q_95 = t;
  t = term_p_37;
  t = b_10(p_95, q_95, t);
  return(t);
}
ATerm h_13 (ATerm t)
{
  t = term_q_37;
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
  ATerm r_95 = NULL,s_95 = NULL,t_95 = NULL,u_95 = NULL;
  t = term_j_37;
  t_95 = t;
  t = term_u_14;
  u_95 = t;
  t = term_p_37;
  t = b_10(t_95, u_95, t);
  t = term_r_37;
  r_95 = t;
  t = term_u_14;
  s_95 = t;
  t = term_s_37;
  t = b_10(r_95, s_95, t);
  t = term_t_37;
  return(t);
}
ATerm k_13 (ATerm t)
{
  t = term_u_37;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_37 = t;
  int x_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_13, g_13, h_13, t);
      ;
      LocalPopChoice(x_37);
    }
  else
    {
      t = w_37;
      t = Option_3_0(i_13, j_13, k_13, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_139 (ATerm), ATerm t)
{
  ATerm z_95 = NULL,a_96 = NULL,d_96 = NULL,e_96 = NULL,g_96 = NULL,h_96 = NULL,a_12 = NULL;
  if(((z_95 != NULL) && (z_95 != t)))
    _fail(t);
  else
    z_95 = t;
  {
    ATerm y_37 = t;
    int z_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_38;
        t = o_139(t);
        ;
        LocalPopChoice(z_37);
      }
    else
      {
        t = y_37;
      }
    t = not_null(z_95);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((d_96 != NULL) && (d_96 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          d_96 = ATgetFirst((ATermList) t);
        if(((e_96 != NULL) && (e_96 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          e_96 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(z_95));
    if(((a_96 != NULL) && (a_96 != t)))
      _fail(t);
    else
      a_96 = t;
    t = term_x_35;
    if(((h_96 != NULL) && (h_96 != t)))
      _fail(t);
    else
      h_96 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_x_35, not_null(d_96));
    t = b_10(not_null(h_96), not_null(d_96), t);
    t = not_null(e_96);
    {
      ATerm r_96 (ATerm t)
      {
        ATerm c_38 = t;
        int j_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_38 = t;
            int m_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_96 = NULL;
                k_96 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = k_96;
                ;
                LocalPopChoice(m_38);
              }
            else
              {
                t = l_38;
                t = o_139(t);
                t = Cons_2_0(_id, r_96, t);
              }
            ;
            LocalPopChoice(j_38);
          }
        else
          {
            t = c_38;
            {
              ATerm n_96 = NULL,o_96 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_96 = ATgetFirst((ATermList) t);
                  o_96 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(o_96), (ATerm) ATmakeAppl(sym_Undefined_1, n_96));
            }
          }
        return(t);
      }
      t = r_96(t);
      if(((g_96 != NULL) && (g_96 != t)))
        _fail(t);
      else
        g_96 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(g_96)), (ATerm) ATmakeAppl(sym_Program_1, not_null(d_96)));
      if(((a_12 != NULL) && (a_12 != t)))
        _fail(t);
      else
        a_12 = t;
      t = SSLsetAnnotations(not_null(a_12), not_null(a_96));
    }
  }
  return(t);
}
ATerm m_13 (ATerm t)
{
  ATerm d_97 = NULL;
  d_97 = t;
  if(match_string(t, "--help"))
    {
      t = d_97;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_97;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_97;
        }
    }
  return(t);
}
ATerm n_13 (ATerm t)
{
  ATerm e_97 = NULL,f_97 = NULL;
  t = term_s_36;
  e_97 = t;
  t = term_u_14;
  f_97 = t;
  t = term_n_38;
  t = b_10(e_97, f_97, t);
  t = term_t_38;
  return(t);
}
ATerm o_13 (ATerm t)
{
  t = term_u_38;
  return(t);
}
ATerm r_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_139 (ATerm), ATerm t)
{
  ATerm w_96 = NULL,x_96 = NULL,y_96 = NULL,z_96 = NULL,a_97 = NULL,b_97 = NULL,c_97 = NULL;
  if(((y_96 != NULL) && (y_96 != t)))
    _fail(t);
  else
    y_96 = t;
  t = term_i_35;
  if(((a_97 != NULL) && (a_97 != t)))
    _fail(t);
  else
    a_97 = t;
  t = term_k_35;
  if(((b_97 != NULL) && (b_97 != t)))
    _fail(t);
  else
    b_97 = t;
  t = (ATerm) ATempty;
  if(((c_97 != NULL) && (c_97 != t)))
    _fail(t);
  else
    c_97 = t;
  t = SSL_table_put(not_null(a_97), not_null(b_97), not_null(c_97));
  t = not_null(y_96);
  {
    ATerm l_13 (ATerm t)
    {
      ATerm v_38 = t;
      int w_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_139(t);
          ;
          LocalPopChoice(w_38);
        }
      else
        {
          t = v_38;
          {
            ATerm x_38 = t;
            int y_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_13, n_13, o_13, t);
                ;
                LocalPopChoice(y_38);
              }
            else
              {
                t = x_38;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_13, t);
    {
      ATerm z_38 = t;
      int a_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_97 = NULL;
          m_97 = t;
          {
            ATerm b_39 = t;
            int c_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_45 = NULL;
                t = m_97;
                {
                  ATerm d_39 = t;
                  int e_39 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_s_36;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(e_39);
                    }
                  else
                    {
                      t = d_39;
                      t = fetch_1_0(r_13, t);
                    }
                  t = m_97;
                  t = default_system_usage_0_0(t);
                  t = term_j_17;
                  f_45 = t;
                  t = SSL_exit(f_45);
                }
                ;
                LocalPopChoice(c_39);
              }
            else
              {
                t = b_39;
                {
                  ATerm s_45 = NULL;
                  t = term_j_37;
                  t = get_config_0_0(t);
                  t = m_97;
                  t = default_system_about_0_0(t);
                  t = term_j_17;
                  s_45 = t;
                  t = SSL_exit(s_45);
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
            ATerm f_39 = t;
            int g_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_97 = NULL,o_97 = NULL,p_97 = NULL;
                ATerm s_13 (ATerm t)
                {
                  ATerm q_97 = NULL,r_97 = NULL,s_97 = NULL,d_12 = NULL;
                  s_97 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      r_97 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(s_97);
                  q_97 = t;
                  t = r_97;
                  if(((w_96 != NULL) && (w_96 != t)))
                    _fail(t);
                  else
                    w_96 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, r_97);
                  d_12 = t;
                  t = SSLsetAnnotations(d_12, q_97);
                  return(t);
                }
                t = fetch_1_0(s_13, t);
                t = term_x_14;
                if(((o_97 != NULL) && (o_97 != t)))
                  _fail(t);
                else
                  o_97 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_96)), term_h_39);
                if(((p_97 != NULL) && (p_97 != t)))
                  _fail(t);
                else
                  p_97 = t;
                t = SSL_printnl(not_null(o_97), not_null(p_97));
                t = (ATerm) ATmakeAppl(sym__2, term_x_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_96)), term_h_39));
                t = default_system_usage_0_0(t);
                t = term_a_15;
                if(((n_97 != NULL) && (n_97 != t)))
                  _fail(t);
                else
                  n_97 = t;
                t = SSL_exit(not_null(n_97));
                ;
                LocalPopChoice(g_39);
              }
            else
              {
                t = f_39;
              }
          }
        }
      if(((x_96 != NULL) && (x_96 != t)))
        _fail(t);
      else
        x_96 = t;
      t = term_i_35;
      if(((z_96 != NULL) && (z_96 != t)))
        _fail(t);
      else
        z_96 = t;
      t = SSL_table_destroy(not_null(z_96));
      t = not_null(x_96);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_137 (ATerm), ATerm o_137 (ATerm), ATerm p_137 (ATerm), ATerm q_137 (ATerm), ATerm t)
{
  ATerm x_97 = NULL,y_97 = NULL,z_97 = NULL,a_98 = NULL;
  t = parse_options_1_0(n_137, t);
  x_97 = t;
  t = term_i_39;
  a_98 = t;
  t = SSL_table_create(a_98);
  t = term_i_39;
  y_97 = t;
  t = term_j_39;
  z_97 = t;
  t = SSL_table_put(y_97, z_97, x_97);
  t = x_97;
  t = p_137(t);
  {
    ATerm k_39 = t;
    int l_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_137, t);
        ;
        LocalPopChoice(l_39);
      }
    else
      {
        t = k_39;
        {
          ATerm m_39 = t;
          int q_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_137(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(q_39);
            }
          else
            {
              t = m_39;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm w_13 (ATerm t)
{
  t = if_verbose2_1_0(d_14, t);
  return(t);
}
ATerm z_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_14 (ATerm t)
{
  ATerm b_98 = NULL,c_98 = NULL;
  t = term_r_39;
  b_98 = t;
  t = term_u_14;
  c_98 = t;
  t = term_a_40;
  t = b_10(b_98, c_98, t);
  t = term_b_40;
  return(t);
}
ATerm c_14 (ATerm t)
{
  t = term_d_40;
  return(t);
}
ATerm d_14 (ATerm t)
{
  ATerm d_98 = NULL,e_98 = NULL,f_98 = NULL,g_98 = NULL;
  d_98 = t;
  t = term_x_35;
  t = get_config_0_0(t);
  e_98 = t;
  t = term_x_14;
  f_98 = t;
  t = (ATerm) ATinsert(ATempty, e_98);
  g_98 = t;
  t = SSL_printnl(f_98, g_98);
  t = d_98;
  return(t);
}
ATerm iowrap_3_0 (ATerm w_136 (ATerm), ATerm x_136 (ATerm), ATerm y_136 (ATerm), ATerm t)
{
  ATerm t_13 (ATerm t)
  {
    ATerm e_40 = t;
    int f_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_136(t);
        ;
        LocalPopChoice(f_40);
      }
    else
      {
        t = e_40;
        {
          ATerm k_40 = t;
          int l_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(l_40);
            }
          else
            {
              t = k_40;
              {
                ATerm m_40 = t;
                int n_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(n_40);
                  }
                else
                  {
                    t = m_40;
                    {
                      ATerm p_40 = t;
                      int q_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(z_13, b_14, c_14, t);
                          ;
                          LocalPopChoice(q_40);
                        }
                      else
                        {
                          t = p_40;
                          {
                            ATerm s_40 = t;
                            int t_40 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(t_40);
                              }
                            else
                              {
                                t = s_40;
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
  ATerm x_13 (ATerm t)
  {
    ATerm h_98 = NULL,i_98 = NULL,j_98 = NULL;
    if(((i_98 != NULL) && (i_98 != t)))
      _fail(t);
    else
      i_98 = t;
    {
      ATerm a_41 = t;
      int b_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_14 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((h_98 != NULL) && (h_98 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_98 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(e_14, t);
          ;
          LocalPopChoice(b_41);
        }
      else
        {
          t = a_41;
          t = term_d_41;
          if(((h_98 != NULL) && (h_98 != t)))
            _fail(t);
          else
            h_98 = t;
        }
      t = not_null(h_98);
      t = ReadFromFile_0_0(t);
      if(((j_98 != NULL) && (j_98 != t)))
        _fail(t);
      else
        j_98 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_98), not_null(j_98));
      t = apply_strategy_1_0(w_136, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(t_13, y_136, w_13, x_13, t);
  return(t);
}
ATerm f_14 (ATerm t)
{
  ATerm k_98 = NULL,l_98 = NULL,m_98 = NULL,n_98 = NULL,o_98 = NULL,p_98 = NULL,q_98 = NULL,r_98 = NULL,s_98 = NULL,t_98 = NULL,u_98 = NULL,v_98 = NULL,w_98 = NULL,x_98 = NULL,s_12 = NULL,r_12 = NULL,i_12 = NULL;
  x_98 = t;
  if(match_cons(t, sym__2))
    {
      l_98 = ATgetArgument(t, 0);
      m_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_98);
  k_98 = t;
  t = m_98;
  if(match_cons(t, sym_Specification_1))
    {
      r_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_98);
  q_98 = t;
  t = r_98;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_98 = ATgetFirst((ATermList) t);
      u_98 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_98);
  s_98 = t;
  t = u_98;
  t = Cons_2_0(h_14, q_14, t);
  v_98 = t;
  t = (ATerm) ATinsert(CheckATermList(v_98), t_98);
  i_12 = t;
  t = SSLsetAnnotations(i_12, s_98);
  w_98 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, w_98);
  r_12 = t;
  t = SSLsetAnnotations(r_12, q_98);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm j_41 = ATgetArgument(t, 0);
      if(((ATgetType(j_41) == AT_LIST) && !(ATisEmpty(j_41))))
        {
          o_98 = ATgetFirst((ATermList) j_41);
          {
            ATerm k_41 = (ATerm) ATgetNext((ATermList) j_41);
            if(((ATgetType(k_41) == AT_LIST) && !(ATisEmpty(k_41))))
              {
                ATerm l_41 = ATgetFirst((ATermList) k_41);
                if(match_cons(l_41, sym_Strategies_1))
                  {
                    p_98 = ATgetArgument(l_41, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm m_41 = (ATerm) ATgetNext((ATermList) k_41);
                  if(((ATgetType(m_41) != AT_LIST) || !(ATisEmpty(m_41))))
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
  t = y_7(o_98, p_98, t);
  n_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_98, n_98);
  s_12 = t;
  t = SSLsetAnnotations(s_12, k_98);
  return(t);
}
ATerm h_14 (ATerm t)
{
  ATerm y_98 = NULL,z_98 = NULL,a_99 = NULL,b_99 = NULL,f_12 = NULL;
  b_99 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      z_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_99);
  y_98 = t;
  t = z_98;
  t = needed_defs_0_0(t);
  a_99 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, a_99);
  f_12 = t;
  t = SSLsetAnnotations(f_12, y_98);
  return(t);
}
ATerm q_14 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(f_14, _fail, default_usage_0_0, t);
  return(t);
}
