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
ATerm term_g_48;
ATerm term_n_47;
ATerm term_m_47;
ATerm term_k_47;
ATerm term_j_47;
ATerm term_c_47;
ATerm term_b_47;
ATerm term_a_47;
ATerm term_h_46;
ATerm term_g_46;
ATerm term_f_46;
ATerm term_z_45;
ATerm term_o_45;
ATerm term_n_45;
ATerm term_m_45;
ATerm term_l_45;
ATerm term_k_45;
ATerm term_j_45;
ATerm term_i_45;
ATerm term_a_45;
ATerm term_z_44;
ATerm term_q_44;
ATerm term_f_44;
ATerm term_s_43;
ATerm term_l_43;
ATerm term_n_42;
ATerm term_m_42;
ATerm term_l_42;
ATerm term_g_42;
ATerm term_b_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_t_41;
ATerm term_s_41;
ATerm term_r_41;
ATerm term_q_41;
ATerm term_n_41;
ATerm term_m_41;
ATerm term_l_41;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_z_40;
ATerm term_y_40;
ATerm term_r_40;
ATerm term_m_40;
ATerm term_r_39;
ATerm term_k_39;
ATerm term_d_39;
ATerm term_d_38;
ATerm term_u_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_k_37;
ATerm term_j_36;
ATerm term_q_35;
ATerm term_f_35;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_r_28;
ATerm term_j_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_i_27;
ATerm term_l_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_y_24;
ATerm term_c_22;
ATerm term_o_21;
ATerm term_v_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_e_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
void init_constant_terms (void)
{
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorNeeded", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("z_1", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Defined_1, term_r_18);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("w_1", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Defined_1, term_v_18);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym_Sort_2, term_z_27, (ATerm) ATempty);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym_ConstType_1, term_a_28);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(sym__2, term_o_21, term_o_21);
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_p_37);
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(sym__2, term_r_40, term_o_21);
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_21);
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(sym__2, term_q_41, term_x_17);
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(sym__2, term_y_41, term_z_41);
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(sym__2, term_i_45, term_x_17);
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(sym__2, term_l_45, term_x_17);
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(sym__2, term_f_44, term_x_17);
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(sym__2, term_j_47, term_x_17);
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm ConstructorNeeded_0_0 (ATerm);
ATerm filter_1_0 (ATerm x_123 (ATerm), ATerm);
ATerm Constructors_1_0 (ATerm h_97 (ATerm), ATerm);
ATerm Signature_1_0 (ATerm g_96 (ATerm), ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm DeclareConstructorNeeded_0_0 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm y_7 (ATerm b_91, ATerm a_91, ATerm);
ATerm a_8 (ATerm q_65, ATerm r_65, ATerm s_65, ATerm);
ATerm giving_up_0_0 (ATerm);
ATerm x_3 (ATerm);
ATerm DefinitionExists_0_0 (ATerm);
ATerm Rec_2_0 (ATerm p_101 (ATerm), ATerm q_101 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm k_103 (ATerm), ATerm l_103 (ATerm), ATerm m_103 (ATerm), ATerm n_103 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm);
ATerm Let_2_0 (ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm w_110 (ATerm), ATerm x_110 (ATerm), ATerm y_110 (ATerm), ATerm);
ATerm y_3 (ATerm);
ATerm h_8 (ATerm h_41, ATerm g_41, ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm free_vars2_4_0 (ATerm e_126 (ATerm), ATerm f_126 (ATerm), ATerm g_126 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm h_126 (ATerm), ATerm);
ATerm p_4 (ATerm);
ATerm r_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm svars_arity_0_0 (ATerm);
ATerm j_5 (ATerm);
ATerm o_5 (ATerm);
ATerm choices_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm alltd_1_0 (ATerm j_113 (ATerm), ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm v_5 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm a_111 (ATerm), ATerm b_111 (ATerm), ATerm);
ATerm VarDec_2_0 (ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm);
ATerm d_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm v_6 (ATerm);
ATerm x_6 (ATerm);
ATerm c_7 (ATerm);
ATerm e_7 (ATerm);
ATerm JoinDefs2_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm As_2_0 (ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm y_100 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm y_101 (ATerm), ATerm z_101 (ATerm), ATerm a_102 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm);
ATerm Op_2_0 (ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm y_140 (ATerm), ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm z_8 (ATerm);
ATerm b_9 (ATerm);
ATerm c_9 (ATerm);
ATerm d_9 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm h_10 (ATerm);
ATerm l_10 (ATerm);
ATerm m_10 (ATerm);
ATerm n_10 (ATerm);
ATerm q_10 (ATerm);
ATerm s_10 (ATerm);
ATerm t_10 (ATerm);
ATerm u_10 (ATerm);
ATerm q_8 (ATerm u_86, ATerm v_86, ATerm w_86, ATerm);
ATerm x_32 (ATerm p_32, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm Var_1_0 (ATerm i_97 (ATerm), ATerm);
ATerm v_10 (ATerm);
ATerm w_10 (ATerm);
ATerm x_10 (ATerm);
ATerm y_10 (ATerm);
ATerm b_11 (ATerm);
ATerm d_11 (ATerm);
ATerm e_11 (ATerm);
ATerm j_11 (ATerm);
ATerm k_11 (ATerm);
ATerm l_11 (ATerm);
ATerm s_11 (ATerm);
ATerm u_11 (ATerm);
ATerm v_11 (ATerm);
ATerm w_11 (ATerm);
ATerm x_11 (ATerm);
ATerm z_11 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm repeat_1_0 (ATerm d_128 (ATerm), ATerm);
ATerm a_12 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm App_2_0 (ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm);
ATerm Con_3_0 (ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm);
ATerm b_12 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm Scope_2_0 (ATerm c_101 (ATerm), ATerm d_101 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm v_112 (ATerm), ATerm);
ATerm t_8 (ATerm j_82, ATerm k_82, ATerm l_82, ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm r_111 (ATerm), ATerm);
ATerm f_12 (ATerm);
ATerm g_12 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm k_12 (ATerm);
ATerm l_12 (ATerm);
ATerm n_12 (ATerm);
ATerm tuple_unzip_1_0 (ATerm t_115 (ATerm), ATerm);
ATerm MkDistApplication_0_0 (ATerm);
ATerm u_8 (ATerm o_52, ATerm p_52, ATerm);
ATerm o_12 (ATerm);
ATerm p_12 (ATerm);
ATerm copy_1_0 (ATerm x_122 (ATerm), ATerm);
ATerm v_8 (ATerm t_64, ATerm u_64, ATerm);
ATerm last_0_0 (ATerm);
ATerm c_45 (ATerm h_42, ATerm i_42, ATerm j_42, ATerm k_42, ATerm);
ATerm h_45 (ATerm v_43, ATerm w_43, ATerm x_43, ATerm a_44, ATerm);
ATerm s_12 (ATerm);
ATerm t_12 (ATerm);
ATerm v_12 (ATerm);
ATerm w_12 (ATerm);
ATerm DefineCongruence_0_0 (ATerm);
ATerm x_12 (ATerm);
ATerm z_12 (ATerm);
ATerm get_definition_0_0 (ATerm);
ATerm at_end_1_0 (ATerm i_118 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm f_48 (ATerm u_47, ATerm);
ATerm conc_0_0 (ATerm);
ATerm a_9 (ATerm p_119 (ATerm), ATerm t_48, ATerm s_48, ATerm);
ATerm genzip_4_0 (ATerm d_116 (ATerm), ATerm e_116 (ATerm), ATerm f_116 (ATerm), ATerm g_116 (ATerm), ATerm);
ATerm d_13 (ATerm);
ATerm e_13 (ATerm);
ATerm g_13 (ATerm);
ATerm e_9 (ATerm n_689, ATerm s_689, ATerm u_80, ATerm);
ATerm h_13 (ATerm);
ATerm i_13 (ATerm);
ATerm k_13 (ATerm);
ATerm l_13 (ATerm);
ATerm n_13 (ATerm);
ATerm o_13 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm g_9 (ATerm u_140 (ATerm), ATerm v_140 (ATerm), ATerm w_140 (ATerm), ATerm r_81, ATerm o_81, ATerm w_81, ATerm s_81, ATerm p_81, ATerm q_81, ATerm);
ATerm GnNextChangeGraph_3_0 (ATerm u_140 (ATerm), ATerm v_140 (ATerm), ATerm w_140 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm s_128 (ATerm), ATerm t_128 (ATerm), ATerm);
ATerm for_3_0 (ATerm v_128 (ATerm), ATerm w_128 (ATerm), ATerm x_128 (ATerm), ATerm);
ATerm p_13 (ATerm);
ATerm q_13 (ATerm);
ATerm r_13 (ATerm);
ATerm s_13 (ATerm);
ATerm t_13 (ATerm);
ATerm u_13 (ATerm);
ATerm v_13 (ATerm);
ATerm y_11 (ATerm a_11, ATerm c_11, ATerm);
ATerm extract_needed_defs_0_0 (ATerm);
ATerm j_9 (ATerm t_123 (ATerm), ATerm w_53, ATerm u_53, ATerm);
ATerm k_9 (ATerm x_119 (ATerm), ATerm y_119 (ATerm), ATerm z_48, ATerm y_48, ATerm);
ATerm l_9 (ATerm u_119 (ATerm), ATerm v_48, ATerm u_48, ATerm);
ATerm Arities_0_0 (ATerm);
ATerm n_9 (ATerm p_54, ATerm q_54, ATerm);
ATerm o_59 (ATerm c_59, ATerm);
ATerm Definitions_0_0 (ATerm);
ATerm foldr_3_0 (ATerm k_122 (ATerm), ATerm l_122 (ATerm), ATerm m_122 (ATerm), ATerm);
ATerm z_13 (ATerm);
ATerm a_14 (ATerm);
ATerm b_14 (ATerm);
ATerm c_14 (ATerm);
ATerm f_14 (ATerm);
ATerm g_14 (ATerm);
ATerm h_14 (ATerm);
ATerm i_14 (ATerm);
ATerm j_14 (ATerm);
ATerm RegisterSDefT_0_0 (ATerm);
ATerm needed_defs_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm f_96 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm b_96 (ATerm), ATerm c_96 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm k_96 (ATerm), ATerm);
ATerm _2_0 (ATerm m_91 (ATerm), ATerm n_91 (ATerm), ATerm);
ATerm q_9 (ATerm c_70, ATerm d_70, ATerm);
ATerm r_9 (ATerm q_73, ATerm r_73, ATerm);
ATerm t_9 (ATerm l_133 (ATerm), ATerm p_562, ATerm u_73, ATerm);
ATerm s_9 (ATerm m_73, ATerm n_73, ATerm);
ATerm v_14 (ATerm);
ATerm b_15 (ATerm);
ATerm c_15 (ATerm);
ATerm g_15 (ATerm);
ATerm h_15 (ATerm);
ATerm i_15 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm n_136 (ATerm), ATerm);
ATerm d_65 (ATerm i_63, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm u_9 (ATerm s_73, ATerm);
ATerm v_9 (ATerm e_70, ATerm f_70, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm j_15 (ATerm);
ATerm l_15 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm m_15 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm c_118 (ATerm), ATerm);
ATerm p_9 (ATerm l_62, ATerm m_62, ATerm);
ATerm debug_1_0 (ATerm j_133 (ATerm), ATerm);
ATerm n_15 (ATerm);
ATerm o_15 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm w_134 (ATerm), ATerm);
ATerm q_15 (ATerm);
ATerm s_15 (ATerm);
ATerm t_15 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm v_15 (ATerm);
ATerm w_15 (ATerm);
ATerm x_15 (ATerm);
ATerm y_15 (ATerm);
ATerm z_15 (ATerm);
ATerm a_16 (ATerm);
ATerm b_16 (ATerm);
ATerm c_16 (ATerm);
ATerm d_16 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm b_10 (ATerm t_74, ATerm u_74, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm e_16 (ATerm);
ATerm f_16 (ATerm);
ATerm g_16 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm z_9 (ATerm e_54, ATerm f_54, ATerm d_54, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm h_16 (ATerm);
ATerm i_16 (ATerm);
ATerm j_16 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm w_9 (ATerm i_52, ATerm j_52, ATerm);
ATerm foldr_2_0 (ATerm i_122 (ATerm), ATerm j_122 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm k_16 (ATerm);
ATerm l_16 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm v_134 (ATerm), ATerm);
ATerm m_16 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm n_16 (ATerm);
ATerm need_help_1_0 (ATerm l_137 (ATerm), ATerm);
ATerm map_1_0 (ATerm s_117 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm y_9 (ATerm v_55, ATerm w_55, ATerm);
ATerm Program_1_0 (ATerm y_108 (ATerm), ATerm);
ATerm p_16 (ATerm);
ATerm q_16 (ATerm);
ATerm r_16 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm z_108 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm s_16 (ATerm);
ATerm u_16 (ATerm);
ATerm v_16 (ATerm);
ATerm w_16 (ATerm);
ATerm x_16 (ATerm);
ATerm y_16 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm z_16 (ATerm);
ATerm parse_options_p__1_0 (ATerm o_139 (ATerm), ATerm);
ATerm c_17 (ATerm);
ATerm d_17 (ATerm);
ATerm e_17 (ATerm);
ATerm f_17 (ATerm);
ATerm parse_options_1_0 (ATerm n_139 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm n_137 (ATerm), ATerm o_137 (ATerm), ATerm p_137 (ATerm), ATerm q_137 (ATerm), ATerm);
ATerm j_17 (ATerm);
ATerm l_17 (ATerm);
ATerm m_17 (ATerm);
ATerm n_17 (ATerm);
ATerm o_17 (ATerm);
ATerm iowrap_3_0 (ATerm w_136 (ATerm), ATerm x_136 (ATerm), ATerm y_136 (ATerm), ATerm);
ATerm r_17 (ATerm);
ATerm s_17 (ATerm);
ATerm t_17 (ATerm);
ATerm u_17 (ATerm);
ATerm v_17 (ATerm);
ATerm w_17 (ATerm);
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
  t = term_x_17;
  t = whoami_0_0(t);
  e_0 = t;
  t = term_y_17;
  q_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_18), e_0), term_z_17);
  t_0 = t;
  t = SSL_printnl(q_0, t_0);
  t = term_b_18;
  y_0 = t;
  t = SSL_exit(y_0);
  t = c_0;
  return(t);
}
ATerm ConstructorNeeded_0_0 (ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL,v_1 = NULL;
  s_1 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      t_1 = ATgetArgument(t, 0);
      v_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_18 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_1 = NULL,p_1 = NULL;
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, t_1, (ATerm) ATempty);
        o_1 = t;
        t = term_e_18;
        p_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_18, (ATerm) ATmakeAppl(sym_OpDecl_2, t_1, (ATerm) ATempty));
        t = n_9(p_1, o_1, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm f_18 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_18) != ATmakeSymbol("z_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, t_1, v_1);
        ;
        LocalPopChoice(d_18);
      }
    else
      {
        t = c_18;
        {
          ATerm p_3 = NULL,q_3 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, t_1, (ATerm) ATempty);
          p_3 = t;
          t = term_e_18;
          q_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_e_18, (ATerm) ATmakeAppl(sym_OpDecl_2, t_1, (ATerm) ATempty));
          t = n_9(q_3, p_3, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm g_18 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) g_18) != ATmakeSymbol("w_1", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, t_1, v_1);
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm x_123 (ATerm), ATerm t)
{
  ATerm h_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(i_18);
    }
  else
    {
      t = h_18;
      {
        ATerm k_18 = t;
        int l_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_3 (ATerm t)
            {
              t = filter_1_0(x_123, t);
              return(t);
            }
            t = Cons_2_0(x_123, i_3, t);
            ;
            LocalPopChoice(l_18);
          }
        else
          {
            t = k_18;
            {
              ATerm e_2 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm m_18 = ATgetFirst((ATermList) t);
                  e_2 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = e_2;
              t = filter_1_0(x_123, t);
            }
          }
      }
    }
  return(t);
}
ATerm Constructors_1_0 (ATerm h_97 (ATerm), ATerm t)
{
  ATerm g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL,h_0 = NULL,p_0 = NULL;
  j_2 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      h_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_2);
  g_2 = t;
  t = h_2;
  t = h_97(t);
  i_2 = t;
  p_0 = t;
  t = (ATerm) ATmakeAppl(sym_Constructors_1, i_2);
  h_0 = t;
  t = SSLsetAnnotations(h_0, g_2);
  return(t);
}
ATerm Signature_1_0 (ATerm g_96 (ATerm), ATerm t)
{
  ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL,s_0 = NULL,u_0 = NULL;
  p_2 = t;
  if(match_cons(t, sym_Signature_1))
    {
      n_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_2);
  m_2 = t;
  t = n_2;
  t = g_96(t);
  o_2 = t;
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, o_2);
  s_0 = t;
  t = SSLsetAnnotations(s_0, m_2);
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_e_18;
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_e_18;
  return(t);
}
ATerm DeclareConstructorNeeded_0_0 (ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL;
  v_2 = t;
  {
    ATerm n_18 = t;
    int o_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Cong_2))
          {
            w_2 = ATgetArgument(t, 0);
            {
              ATerm p_18 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(o_18);
        {
          ATerm a_3 = NULL,b_3 = NULL;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, w_2, (ATerm) ATempty);
          a_3 = t;
          t = term_s_18;
          b_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, w_2, (ATerm) ATempty), term_s_18);
          t = j_9(n_3, a_3, b_3, t);
          t = v_2;
        }
      }
    else
      {
        t = n_18;
        {
          ATerm e_3 = NULL,f_3 = NULL;
          if(match_cons(t, sym_Op_2))
            {
              w_2 = ATgetArgument(t, 0);
              {
                ATerm u_18 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, w_2, (ATerm) ATempty);
          e_3 = t;
          t = term_w_18;
          f_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, w_2, (ATerm) ATempty), term_w_18);
          t = j_9(o_3, e_3, f_3, t);
          t = v_2;
        }
      }
  }
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm x_18 = t;
  int y_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareConstructorNeeded_0_0(t);
      ;
      LocalPopChoice(y_18);
    }
  else
    {
      t = x_18;
    }
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = Cons_2_0(t_3, u_3, t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = Constructors_1_0(v_3, t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = filter_1_0(ConstructorNeeded_0_0, t);
  return(t);
}
ATerm y_7 (ATerm b_91, ATerm a_91, ATerm t)
{
  ATerm g_3 = NULL;
  t = a_91;
  t = topdown_1_0(r_3, t);
  t = b_91;
  t = Signature_1_0(s_3, t);
  g_3 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, a_91)), g_3));
  return(t);
}
ATerm a_8 (ATerm q_65, ATerm r_65, ATerm s_65, ATerm t)
{
  ATerm h_3 = NULL,j_3 = NULL;
  t = term_y_17;
  h_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_19), s_65), term_c_19), r_65), term_b_19), q_65), term_a_19);
  j_3 = t;
  t = SSL_printnl(h_3, j_3);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_19), s_65), term_c_19), r_65), term_b_19), q_65), term_a_19);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL;
  t = term_y_17;
  k_3 = t;
  t = (ATerm) ATinsert(ATempty, term_j_19);
  l_3 = t;
  t = SSL_printnl(k_3, l_3);
  t = term_b_18;
  m_3 = t;
  t = SSL_exit(m_3);
  t = (ATerm) ATinsert(ATempty, term_j_19);
  return(t);
}
ATerm x_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_19 = ATgetArgument(t, 0);
      if(((ATgetType(k_19) != AT_INT) || (ATgetInt((ATermInt) k_19) != 0)))
        _fail(t);
      {
        ATerm l_19 = ATgetArgument(t, 1);
        if(((ATgetType(l_19) != AT_INT) || (ATgetInt((ATermInt) l_19) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL,k_4 = NULL,l_4 = NULL;
  g_4 = t;
  if(match_cons(t, sym__2))
    {
      h_4 = ATgetArgument(t, 0);
      i_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_4;
  if(match_cons(t, sym__2))
    {
      k_4 = ATgetArgument(t, 0);
      l_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_4;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = l_4;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_3 = NULL,j_4 = NULL;
        t = h_4;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_19 = ATgetFirst((ATermList) t);
            ATerm r_19 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(r_19) == AT_LIST) && !(ATisEmpty(r_19))))
              {
                ATerm s_19 = ATgetFirst((ATermList) r_19);
                ATerm t_19 = (ATerm) ATgetNext((ATermList) r_19);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm u_19 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(x_3, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = u_19;
            }
          t = term_y_17;
          w_3 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, h_4), term_v_19);
          j_4 = t;
          t = SSL_printnl(w_3, j_4);
          t = (ATerm) ATinsert(ATinsert(ATempty, h_4), term_v_19);
          t = giving_up_0_0(t);
        }
        ;
        LocalPopChoice(n_19);
      }
    else
      {
        t = m_19;
        {
          ATerm a_5 = NULL,b_5 = NULL;
          t = h_4;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm w_19 = ATgetFirst((ATermList) t);
              if(match_cons(w_19, sym__2))
                {
                  a_5 = ATgetArgument(w_19, 0);
                  b_5 = ATgetArgument(w_19, 1);
                }
              else
                _fail(t);
              {
                ATerm x_19 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(x_19) != AT_LIST) || !(ATisEmpty(x_19))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, h_4, (ATerm) ATmakeAppl(sym__2, a_5, b_5));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, h_4, (ATerm) ATmakeAppl(sym__2, a_5, b_5));
        }
      }
  }
  return(t);
}
ATerm Rec_2_0 (ATerm p_101 (ATerm), ATerm q_101 (ATerm), ATerm t)
{
  ATerm o_4 = NULL,q_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,v_0 = NULL,w_0 = NULL;
  v_4 = t;
  if(match_cons(t, sym_Rec_2))
    {
      q_4 = ATgetArgument(t, 0);
      s_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_4);
  o_4 = t;
  t = q_4;
  t = p_101(t);
  t_4 = t;
  t = s_4;
  t = q_101(t);
  u_4 = t;
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, t_4, u_4);
  v_0 = t;
  t = SSLsetAnnotations(v_0, o_4);
  return(t);
}
ATerm SDefT_4_0 (ATerm k_103 (ATerm), ATerm l_103 (ATerm), ATerm m_103 (ATerm), ATerm n_103 (ATerm), ATerm t)
{
  ATerm k_5 = NULL,l_5 = NULL,u_5 = NULL,x_5 = NULL,y_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,e_6 = NULL,f_6 = NULL,x_0 = NULL,z_0 = NULL;
  f_6 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      l_5 = ATgetArgument(t, 0);
      u_5 = ATgetArgument(t, 1);
      x_5 = ATgetArgument(t, 2);
      y_5 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_6);
  k_5 = t;
  t = l_5;
  t = k_103(t);
  a_6 = t;
  t = u_5;
  t = l_103(t);
  b_6 = t;
  t = x_5;
  t = m_103(t);
  c_6 = t;
  t = y_5;
  t = n_103(t);
  e_6 = t;
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, a_6, b_6, c_6, e_6);
  x_0 = t;
  t = SSLsetAnnotations(x_0, k_5);
  return(t);
}
ATerm SDef_3_0 (ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm t)
{
  ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL,s_6 = NULL,a_1 = NULL,b_1 = NULL;
  s_6 = t;
  if(match_cons(t, sym_SDef_3))
    {
      l_6 = ATgetArgument(t, 0);
      m_6 = ATgetArgument(t, 1);
      n_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_6);
  k_6 = t;
  t = l_6;
  t = h_103(t);
  o_6 = t;
  t = m_6;
  t = i_103(t);
  p_6 = t;
  t = n_6;
  t = j_103(t);
  q_6 = t;
  b_1 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, o_6, p_6, q_6);
  a_1 = t;
  t = SSLsetAnnotations(a_1, k_6);
  return(t);
}
ATerm Let_2_0 (ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm t)
{
  ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL,f_7 = NULL,g_7 = NULL,c_1 = NULL,d_1 = NULL;
  g_7 = t;
  if(match_cons(t, sym_Let_2))
    {
      z_6 = ATgetArgument(t, 0);
      a_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_7);
  y_6 = t;
  t = z_6;
  t = s_100(t);
  b_7 = t;
  t = a_7;
  t = t_100(t);
  f_7 = t;
  d_1 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, b_7, f_7);
  c_1 = t;
  t = SSLsetAnnotations(c_1, y_6);
  return(t);
}
ATerm sboundin_3_0 (ATerm w_110 (ATerm), ATerm x_110 (ATerm), ATerm y_110 (ATerm), ATerm t)
{
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(w_110, w_110, t);
      ;
      LocalPopChoice(z_19);
    }
  else
    {
      t = y_19;
      {
        ATerm a_20 = t;
        int b_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(y_110, y_110, w_110, t);
            ;
            LocalPopChoice(b_20);
          }
        else
          {
            t = a_20;
            {
              ATerm c_20 = t;
              int d_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(y_110, y_110, y_110, w_110, t);
                  ;
                  LocalPopChoice(d_20);
                }
              else
                {
                  t = c_20;
                  t = Rec_2_0(y_110, w_110, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm p_7 = NULL;
  ATerm e_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          p_7 = ATgetArgument(t, 0);
          {
            ATerm h_20 = ATgetArgument(t, 1);
          }
          {
            ATerm m_20 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_20);
      t = p_7;
    }
  else
    {
      t = e_20;
      if(match_cons(t, sym_SDefT_4))
        {
          p_7 = ATgetArgument(t, 0);
          {
            ATerm n_20 = ATgetArgument(t, 1);
          }
          {
            ATerm o_20 = ATgetArgument(t, 2);
          }
          {
            ATerm t_20 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = p_7;
    }
  return(t);
}
ATerm h_8 (ATerm h_41, ATerm g_41, ATerm t)
{
  t = h_41;
  t = map_1_0(y_3, t);
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm r_5 = NULL,s_5 = NULL;
  if(match_cons(t, sym__2))
    {
      r_5 = ATgetArgument(t, 0);
      s_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_9(d_4, r_5, s_5, t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm t_5 = NULL;
  if(match_cons(t, sym__2))
    {
      t_5 = ATgetArgument(t, 0);
      if((t_5 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm j_6 = NULL,r_6 = NULL;
  if(match_cons(t, sym__2))
    {
      j_6 = ATgetArgument(t, 0);
      r_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_9(m_4, j_6, r_6, t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm t_6 = NULL;
  if(match_cons(t, sym__2))
    {
      t_6 = ATgetArgument(t, 0);
      if((t_6 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm d_14 = NULL;
  if(match_cons(t, sym__2))
    {
      d_14 = ATgetArgument(t, 0);
      if((d_14 != ATgetArgument(t, 1)))
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
  ATerm e_14 (ATerm t)
  {
    ATerm m_11 = NULL,n_11 = NULL,q_11 = NULL;
    m_11 = t;
    {
      ATerm u_20 = t;
      int x_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_126(t);
          ;
          LocalPopChoice(x_20);
        }
      else
        {
          t = u_20;
          t = (ATerm) ATempty;
        }
      n_11 = t;
      t = m_11;
      {
        ATerm z_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_11 = NULL,m_5 = NULL,n_5 = NULL;
            t = f_126(t);
            r_11 = t;
            t = m_11;
            {
              ATerm z_3 (ATerm t)
              {
                ATerm g_5 = NULL;
                t = e_14(t);
                g_5 = t;
                t = (ATerm) ATmakeAppl(sym__2, g_5, r_11);
                t = a_9(h_126, g_5, r_11, t);
                return(t);
              }
              t = g_126(z_3, e_14, a_4, t);
              m_5 = t;
              t = SSL_explode_term(m_5);
              if(match_cons(t, sym__2))
                {
                  ATerm d_21 = ATgetArgument(t, 0);
                  n_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_5;
              t = foldr_3_0(b_4, c_4, _id, t);
            }
            ;
            LocalPopChoice(a_21);
          }
        else
          {
            t = z_20;
            {
              ATerm w_5 = NULL;
              t = SSL_explode_term(m_11);
              if(match_cons(t, sym__2))
                {
                  ATerm g_21 = ATgetArgument(t, 0);
                  w_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = w_5;
              t = foldr_3_0(e_4, f_4, e_14, t);
            }
          }
        q_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_11, q_11);
        t = l_9(n_4, n_11, q_11, t);
      }
    }
    return(t);
  }
  t = e_14(t);
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL,r_14 = NULL,w_14 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm h_21 = ATgetArgument(t, 0);
      if(match_cons(h_21, sym_SVar_1))
        {
          l_14 = ATgetArgument(h_21, 0);
        }
      else
        _fail(t);
      m_14 = ATgetArgument(t, 1);
      n_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_14;
  t = foldr_3_0(x_4, y_4, z_4, t);
  r_14 = t;
  t = n_14;
  t = foldr_3_0(c_5, d_5, e_5, t);
  w_14 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, l_14, (ATerm) ATmakeAppl(sym__2, r_14, w_14)));
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL,k_15 = NULL,r_15 = NULL;
  d_15 = t;
  if(match_cons(t, sym_Let_2))
    {
      e_15 = ATgetArgument(t, 0);
      f_15 = ATgetArgument(t, 1);
      t = d_15;
      t = h_8(e_15, f_15, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          e_15 = ATgetArgument(t, 0);
          f_15 = ATgetArgument(t, 1);
          k_15 = ATgetArgument(t, 2);
          t = f_15;
          t = map_1_0(f_5, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              e_15 = ATgetArgument(t, 0);
              f_15 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, e_15);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  e_15 = ATgetArgument(t, 0);
                  f_15 = ATgetArgument(t, 1);
                  k_15 = ATgetArgument(t, 2);
                  r_15 = ATgetArgument(t, 3);
                  t = f_15;
                  t = map_1_0(h_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      e_15 = ATgetArgument(t, 0);
                      f_15 = ATgetArgument(t, 1);
                      k_15 = ATgetArgument(t, 2);
                      r_15 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_15;
                  t = map_1_0(i_5, t);
                }
            }
        }
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm q_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_21 = ATgetArgument(t, 0);
      if(match_cons(i_21, sym__2))
        {
          q_18 = ATgetArgument(i_21, 0);
          {
            ATerm j_21 = ATgetArgument(i_21, 1);
          }
        }
      else
        _fail(t);
      if((q_18 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = term_o_21;
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL;
  if(match_cons(t, sym__2))
    {
      x_14 = ATgetArgument(t, 0);
      y_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9(x_14, y_14, t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_b_18;
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_o_21;
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL;
  if(match_cons(t, sym__2))
    {
      z_14 = ATgetArgument(t, 0);
      a_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9(z_14, a_15, t);
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_b_18;
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm t_16 = NULL;
  ATerm p_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_16 = ATgetArgument(t, 0);
          {
            ATerm r_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_21);
      t = t_16;
    }
  else
    {
      t = p_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_16;
    }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm p_17 = NULL;
  ATerm s_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_17 = ATgetArgument(t, 0);
          {
            ATerm u_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_21);
      t = p_17;
    }
  else
    {
      t = s_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_17;
    }
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm j_18 = NULL;
  ATerm v_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_18 = ATgetArgument(t, 0);
          {
            ATerm x_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_21);
      t = j_18;
    }
  else
    {
      t = v_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_18;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(p_4, r_4, sboundin_3_0, w_4, t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = term_c_22;
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm t_18 = NULL,z_18 = NULL,w_6 = NULL;
  t_18 = t;
  t = SSL_explode_term(t_18);
  if(match_cons(t, sym__2))
    {
      ATerm d_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_22 = ATgetArgument(t, 1);
        if(((ATgetType(e_22) == AT_LIST) && !(ATisEmpty(e_22))))
          {
            z_18 = ATgetFirst((ATermList) e_22);
            {
              ATerm f_22 = (ATerm) ATgetNext((ATermList) e_22);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(t_18);
  if(match_cons(t, sym__2))
    {
      ATerm k_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_22 = ATgetArgument(t, 1);
        if(((ATgetType(r_22) == AT_LIST) && !(ATisEmpty(r_22))))
          {
            ATerm y_22 = ATgetFirst((ATermList) r_22);
            ATerm c_23 = (ATerm) ATgetNext((ATermList) r_22);
            if(((ATgetType(c_23) == AT_LIST) && !(ATisEmpty(c_23))))
              {
                w_6 = ATgetFirst((ATermList) c_23);
                {
                  ATerm d_23 = (ATerm) ATgetNext((ATermList) c_23);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, z_18, w_6);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(j_5, o_5, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,o_19 = NULL,p_19 = NULL;
  f_19 = t;
  if(match_cons(t, sym__2))
    {
      g_19 = ATgetArgument(t, 0);
      h_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_19;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_19 = ATgetFirst((ATermList) t);
      p_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_19;
  if(match_cons(t, sym__2))
    {
      d_19 = ATgetArgument(t, 0);
      e_19 = ATgetArgument(t, 1);
      {
        ATerm f_23 = t;
        int j_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_19;
            if((g_19 != t))
              {
                _fail(t);
              }
            t = e_19;
            ;
            LocalPopChoice(j_23);
          }
        else
          {
            t = f_23;
            t = (ATerm) ATmakeAppl(sym__2, g_19, p_19);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, g_19, p_19);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm j_113 (ATerm), ATerm t)
{
  ATerm g_20 (ATerm t)
  {
    ATerm k_23 = t;
    int o_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_113(t);
        ;
        LocalPopChoice(o_23);
      }
    else
      {
        t = k_23;
        t = SRTS_all(g_20, t);
      }
    return(t);
  }
  t = g_20(t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_23 = ATgetArgument(t, 0);
      if(((ATgetType(q_23) != AT_LIST) || !(ATisEmpty(q_23))))
        _fail(t);
      {
        ATerm s_23 = ATgetArgument(t, 1);
        if(((ATgetType(s_23) != AT_LIST) || !(ATisEmpty(s_23))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,v_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_23 = ATgetArgument(t, 0);
      if(((ATgetType(v_23) == AT_LIST) && !(ATisEmpty(v_23))))
        {
          q_20 = ATgetFirst((ATermList) v_23);
          r_20 = (ATerm) ATgetNext((ATermList) v_23);
        }
      else
        _fail(t);
      {
        ATerm x_23 = ATgetArgument(t, 1);
        if(((ATgetType(x_23) == AT_LIST) && !(ATisEmpty(x_23))))
          {
            s_20 = ATgetFirst((ATermList) x_23);
            v_20 = (ATerm) ATgetNext((ATermList) x_23);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_20, s_20), (ATerm) ATmakeAppl(sym__2, r_20, v_20));
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm w_20 = NULL,y_20 = NULL;
  if(match_cons(t, sym__2))
    {
      w_20 = ATgetArgument(t, 0);
      y_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_20), w_20);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL;
  i_20 = t;
  {
    ATerm z_23 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_24 = ATgetArgument(t, 0);
            ATerm g_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(c_24);
        t = i_20;
      }
    else
      {
        t = z_23;
        {
          ATerm p_20 = NULL;
          if(match_cons(t, sym__3))
            {
              j_20 = ATgetArgument(t, 0);
              k_20 = ATgetArgument(t, 1);
              l_20 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, j_20, k_20);
          t = genzip_4_0(p_5, q_5, v_5, _id, t);
          p_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_20, l_20);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm a_111 (ATerm), ATerm b_111 (ATerm), ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL;
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      c_21 = ATgetArgument(t, 0);
      b_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_21;
  {
    ATerm z_5 (ATerm t)
    {
      ATerm d_7 = NULL;
      t = a_111(t);
      d_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_7, c_21);
      t = lookup_0_0(t);
      t = b_111(t);
      return(t);
    }
    t = alltd_1_0(z_5, t);
  }
  return(t);
}
ATerm VarDec_2_0 (ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,e_1 = NULL,f_1 = NULL;
  n_21 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      f_21 = ATgetArgument(t, 0);
      k_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_21);
  e_21 = t;
  t = f_21;
  t = d_103(t);
  l_21 = t;
  t = k_21;
  t = e_103(t);
  m_21 = t;
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, l_21, m_21);
  e_1 = t;
  t = SSLsetAnnotations(e_1, e_21);
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = VarDec_2_0(new_0_0, _id, t);
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = VarDec_2_0(new_0_0, _id, t);
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm m_22 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      m_22 = ATgetArgument(t, 0);
      {
        ATerm j_24 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_22), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm n_22 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      n_22 = ATgetArgument(t, 0);
      {
        ATerm k_24 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, n_22);
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm v_22 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      v_22 = ATgetArgument(t, 0);
      {
        ATerm l_24 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = v_22;
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm w_22 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      w_22 = ATgetArgument(t, 0);
      {
        ATerm q_24 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = w_22;
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm x_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      z_22 = ATgetArgument(t, 0);
      b_23 = ATgetArgument(t, 1);
      x_22 = ATgetArgument(t, 2);
      t = z_22;
      if(match_cons(t, sym_SVar_1))
        {
          a_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_23;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_22;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_23;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          z_22 = ATgetArgument(t, 0);
          b_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_22;
      if(match_cons(t, sym_SVar_1))
        {
          a_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_23;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_23;
    }
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm e_23 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_23;
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,l_22 = NULL;
  y_21 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_24 = ATgetFirst((ATermList) t);
      if(match_cons(r_24, sym_SDefT_4))
        {
          z_21 = ATgetArgument(r_24, 0);
          a_22 = ATgetArgument(r_24, 1);
          b_22 = ATgetArgument(r_24, 2);
          {
            ATerm t_24 = ATgetArgument(r_24, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm s_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_22;
  t = map_1_0(d_6, t);
  g_22 = t;
  t = b_22;
  t = map_1_0(g_6, t);
  h_22 = t;
  t = g_22;
  t = map_1_0(h_6, t);
  i_22 = t;
  t = h_22;
  t = map_1_0(i_6, t);
  j_22 = t;
  t = y_21;
  {
    ATerm u_6 (ATerm t)
    {
      ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm u_24 = ATgetArgument(t, 0);
          o_22 = ATgetArgument(t, 1);
          p_22 = ATgetArgument(t, 2);
          q_22 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = p_22;
      t = map_1_0(v_6, t);
      s_22 = t;
      t = o_22;
      t = map_1_0(x_6, t);
      t_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, t_22, i_22, q_22);
      t = substitute_2_0(c_7, _id, t);
      u_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, s_22, j_22, u_22);
      t = substitute_2_0(e_7, _id, t);
      return(t);
    }
    t = map_1_0(u_6, t);
    t = choices_0_0(t);
    l_22 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, z_21, g_22, h_22, l_22);
  }
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL;
  h_23 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      i_23 = ATgetArgument(t, 0);
      g_23 = ATgetArgument(t, 1);
      {
        ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL,p_23 = NULL;
        t = h_23;
        t = new_0_0(t);
        l_23 = t;
        t = new_0_0(t);
        m_23 = t;
        t = new_0_0(t);
        n_23 = t;
        t = new_0_0(t);
        p_23 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_23), n_23), m_23), l_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, l_23), (ATerm) ATmakeAppl(sym_Var_1, n_23))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, i_23, (ATerm)ATmakeAppl(sym_Var_1, l_23), (ATerm) ATmakeAppl(sym_Var_1, m_23)), (ATerm) ATmakeAppl(sym_BAM_3, g_23, (ATerm)ATmakeAppl(sym_Var_1, n_23), (ATerm) ATmakeAppl(sym_Var_1, p_23)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_y_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, p_23)), (ATerm) ATmakeAppl(sym_Var_1, m_23))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          i_23 = ATgetArgument(t, 0);
          {
            ATerm r_23 = NULL,t_23 = NULL,u_23 = NULL,w_23 = NULL;
            t = h_23;
            t = new_0_0(t);
            r_23 = t;
            t = i_23;
            {
              ATerm h_7 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((t_23 != NULL) && (t_23 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      t_23 = ATgetArgument(t, 0);
                    if(((u_23 != NULL) && (u_23 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      u_23 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, r_23);
                return(t);
              }
              t = oncetd_1_0(h_7, t);
              w_23 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_y_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_23)), not_null(t_23))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_23)), (ATerm) ATmakeAppl(sym_Build_1, w_23))));
            }
          }
        }
      else
        {
          ATerm y_23 = NULL,a_24 = NULL,b_24 = NULL,d_24 = NULL,e_24 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              i_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_23;
          t = new_0_0(t);
          y_23 = t;
          t = new_0_0(t);
          a_24 = t;
          t = i_23;
          {
            ATerm i_7 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((b_24 != NULL) && (b_24 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    b_24 = ATgetArgument(t, 0);
                  if(((d_24 != NULL) && (d_24 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    d_24 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, y_23);
              return(t);
            }
            t = oncetd_1_0(i_7, t);
            e_24 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, e_24), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_24)), (ATerm) ATmakeAppl(sym_PrimT_3, term_d_25, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, a_24))))), (ATerm)ATmakeAppl(sym_Var_1, y_23), (ATerm) ATmakeAppl(sym_Op_2, term_e_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_24)), not_null(b_24)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL;
  h_24 = t;
  if(match_cons(t, sym_Match_1))
    {
      i_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm j_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL;
        t = h_24;
        t = new_0_0(t);
        m_24 = t;
        t = i_24;
        {
          ATerm j_7 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((o_24 != NULL) && (o_24 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  o_24 = ATgetArgument(t, 0);
                if(((n_24 != NULL) && (n_24 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  n_24 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, m_24), not_null(o_24));
            return(t);
          }
          t = pat_td_1_0(j_7, t);
          p_24 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_24), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_l_25, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, m_24))), (ATerm) ATmakeAppl(sym_Match_1, not_null(n_24))))));
        }
        ;
        LocalPopChoice(k_25);
      }
    else
      {
        t = j_25;
        {
          ATerm m_25 = t;
          int p_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL;
              t = h_24;
              t = new_0_0(t);
              v_24 = t;
              t = i_24;
              {
                ATerm k_7 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((w_24 != NULL) && (w_24 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        w_24 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, v_24);
                  return(t);
                }
                t = pat_td_1_0(k_7, t);
                x_24 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, x_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, v_24)), not_null(w_24))));
              }
              ;
              LocalPopChoice(p_25);
            }
          else
            {
              t = m_25;
              {
                ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL;
                t = h_24;
                t = new_0_0(t);
                z_24 = t;
                t = i_24;
                {
                  ATerm l_7 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((a_25 != NULL) && (a_25 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          a_25 = ATgetArgument(t, 0);
                        if(((b_25 != NULL) && (b_25 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          b_25 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, z_24);
                    return(t);
                  }
                  t = pat_td_1_0(l_7, t);
                  c_25 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_25), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, z_24)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(b_25)), not_null(a_25)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm As_2_0 (ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,n_25 = NULL,o_25 = NULL,g_1 = NULL,h_1 = NULL;
  o_25 = t;
  if(match_cons(t, sym_As_2))
    {
      g_25 = ATgetArgument(t, 0);
      h_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_25);
  f_25 = t;
  t = g_25;
  t = z_97(t);
  i_25 = t;
  t = h_25;
  t = a_98(t);
  n_25 = t;
  h_1 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, i_25, n_25);
  g_1 = t;
  t = SSLsetAnnotations(g_1, f_25);
  return(t);
}
ATerm CallT_3_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm y_100 (ATerm), ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,i_1 = NULL,j_1 = NULL;
  y_25 = t;
  if(match_cons(t, sym_CallT_3))
    {
      s_25 = ATgetArgument(t, 0);
      t_25 = ATgetArgument(t, 1);
      u_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_25);
  r_25 = t;
  t = s_25;
  t = w_100(t);
  v_25 = t;
  t = t_25;
  t = x_100(t);
  w_25 = t;
  t = u_25;
  t = y_100(t);
  x_25 = t;
  j_1 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, v_25, w_25, x_25);
  i_1 = t;
  t = SSLsetAnnotations(i_1, r_25);
  return(t);
}
ATerm PrimT_3_0 (ATerm y_101 (ATerm), ATerm z_101 (ATerm), ATerm a_102 (ATerm), ATerm t)
{
  ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,k_1 = NULL,l_1 = NULL;
  i_26 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      c_26 = ATgetArgument(t, 0);
      d_26 = ATgetArgument(t, 1);
      e_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_26);
  b_26 = t;
  t = c_26;
  t = y_101(t);
  f_26 = t;
  t = d_26;
  t = z_101(t);
  g_26 = t;
  t = e_26;
  t = a_102(t);
  h_26 = t;
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, f_26, g_26, h_26);
  k_1 = t;
  t = SSLsetAnnotations(k_1, b_26);
  return(t);
}
ATerm Explode_2_0 (ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,m_1 = NULL,n_1 = NULL;
  q_26 = t;
  if(match_cons(t, sym_Explode_2))
    {
      m_26 = ATgetArgument(t, 0);
      n_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_26);
  l_26 = t;
  t = m_26;
  t = s_97(t);
  o_26 = t;
  t = n_26;
  t = t_97(t);
  p_26 = t;
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym_Explode_2, o_26, p_26);
  m_1 = t;
  t = SSLsetAnnotations(m_1, l_26);
  return(t);
}
ATerm Op_2_0 (ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,q_1 = NULL,r_1 = NULL;
  y_26 = t;
  if(match_cons(t, sym_Op_2))
    {
      u_26 = ATgetArgument(t, 0);
      v_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_26);
  t_26 = t;
  t = u_26;
  t = o_97(t);
  w_26 = t;
  t = v_26;
  t = p_97(t);
  x_26 = t;
  r_1 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, w_26, x_26);
  q_1 = t;
  t = SSLsetAnnotations(q_1, t_26);
  return(t);
}
ATerm pat_td_1_0 (ATerm y_140 (ATerm), ATerm t)
{
  ATerm q_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_140(t);
      ;
      LocalPopChoice(z_25);
    }
  else
    {
      t = q_25;
      {
        ATerm a_26 = t;
        int j_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_7 (ATerm t)
            {
              ATerm n_7 (ATerm t)
              {
                t = pat_td_1_0(y_140, t);
                return(t);
              }
              t = fetch_1_0(n_7, t);
              return(t);
            }
            t = Op_2_0(_id, m_7, t);
            ;
            LocalPopChoice(j_26);
          }
        else
          {
            t = a_26;
            {
              ATerm k_26 = t;
              int r_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_7 (ATerm t)
                  {
                    t = pat_td_1_0(y_140, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, o_7, t);
                  ;
                  LocalPopChoice(r_26);
                }
              else
                {
                  t = k_26;
                  {
                    ATerm s_26 = t;
                    int z_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm q_7 (ATerm t)
                        {
                          t = pat_td_1_0(y_140, t);
                          return(t);
                        }
                        t = Explode_2_0(q_7, _id, t);
                        ;
                        LocalPopChoice(z_26);
                      }
                    else
                      {
                        t = s_26;
                        {
                          ATerm a_27 = t;
                          int b_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm r_7 (ATerm t)
                              {
                                ATerm s_7 (ATerm t)
                                {
                                  t = pat_td_1_0(y_140, t);
                                  return(t);
                                }
                                t = fetch_1_0(s_7, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, r_7, t);
                              ;
                              LocalPopChoice(b_27);
                            }
                          else
                            {
                              t = a_27;
                              {
                                ATerm c_27 = t;
                                int d_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm t_7 (ATerm t)
                                    {
                                      ATerm u_7 (ATerm t)
                                      {
                                        t = pat_td_1_0(y_140, t);
                                        return(t);
                                      }
                                      t = fetch_1_0(u_7, t);
                                      return(t);
                                    }
                                    t = CallT_3_0(_id, _id, t_7, t);
                                    ;
                                    LocalPopChoice(d_27);
                                  }
                                else
                                  {
                                    t = c_27;
                                    {
                                      ATerm d_8 (ATerm t)
                                      {
                                        t = pat_td_1_0(y_140, t);
                                        return(t);
                                      }
                                      t = As_2_0(_id, d_8, t);
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
      }
    }
  return(t);
}
ATerm Bapp_0_0 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL;
  e_27 = t;
  if(match_cons(t, sym_Build_1))
    {
      f_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL;
        t = e_27;
        t = new_0_0(t);
        l_27 = t;
        t = f_27;
        {
          ATerm o_8 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((m_27 != NULL) && (m_27 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_27 = ATgetArgument(t, 0);
                if(((n_27 != NULL) && (n_27 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  n_27 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, l_27);
            return(t);
          }
          t = pat_td_1_0(o_8, t);
          o_27 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_i_27, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_27)), not_null(m_27))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, l_27)))), (ATerm) ATmakeAppl(sym_Build_1, o_27)));
        }
        ;
        LocalPopChoice(h_27);
      }
    else
      {
        t = g_27;
        {
          ATerm j_27 = t;
          int k_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL;
              t = e_27;
              t = new_0_0(t);
              q_27 = t;
              t = f_27;
              {
                ATerm p_8 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((r_27 != NULL) && (r_27 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        r_27 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, q_27);
                  return(t);
                }
                t = pat_td_1_0(p_8, t);
                s_27 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_27), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_27)))), (ATerm) ATmakeAppl(sym_Build_1, s_27)));
              }
              ;
              LocalPopChoice(k_27);
            }
          else
            {
              t = j_27;
              {
                ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL,d_28 = NULL;
                t = e_27;
                t = new_0_0(t);
                w_27 = t;
                t = f_27;
                {
                  ATerm r_8 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((x_27 != NULL) && (x_27 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          x_27 = ATgetArgument(t, 0);
                        if(((y_27 != NULL) && (y_27 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          y_27 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, w_27);
                    return(t);
                  }
                  t = pat_td_1_0(r_8, t);
                  d_28 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(x_27), not_null(y_27), (ATerm) ATmakeAppl(sym_Var_1, w_27))), (ATerm) ATmakeAppl(sym_Build_1, d_28)));
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
  ATerm p_27 = t;
  int t_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm s_8 (ATerm t)
        {
          ATerm u_27 = t;
          int v_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(v_27);
            }
          else
            {
              t = u_27;
            }
          return(t);
        }
        t = Cons_2_0(_id, s_8, t);
      }
      ;
      LocalPopChoice(t_27);
    }
  else
    {
      t = p_27;
      {
        ATerm w_8 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, w_8, t);
      }
    }
  return(t);
}
ATerm x_8 (ATerm t)
{
  ATerm s_29 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      s_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, s_29, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_28), term_b_28));
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm c_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_29 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, u_29, term_b_28);
      ;
      LocalPopChoice(e_28);
    }
  else
    {
      t = c_28;
    }
  return(t);
}
ATerm z_8 (ATerm t)
{
  ATerm l_30 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      l_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, l_30, term_b_28);
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm f_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_30 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, q_30, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_28), term_b_28));
      ;
      LocalPopChoice(g_28);
    }
  else
    {
      t = f_28;
    }
  return(t);
}
ATerm c_9 (ATerm t)
{
  ATerm b_31 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      b_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, b_31, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_28), term_b_28));
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm h_28 = t;
  int i_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_31 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, d_31, term_b_28);
      ;
      LocalPopChoice(i_28);
    }
  else
    {
      t = h_28;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm l_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,w_28 = NULL,x_28 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      w_28 = ATgetArgument(t, 0);
      x_28 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, w_28, x_28);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          w_28 = ATgetArgument(t, 0);
          t = w_28;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_28 = ATgetFirst((ATermList) t);
              o_28 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, l_28, (ATerm) ATmakeAppl(sym_LChoices_1, o_28));
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
          if(match_cons(t, sym_Choices_1))
            {
              w_28 = ATgetArgument(t, 0);
              t = w_28;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_28 = ATgetFirst((ATermList) t);
                  o_28 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, l_28, (ATerm) ATmakeAppl(sym_Choices_1, o_28));
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
              if(match_cons(t, sym_Seqs_1))
                {
                  w_28 = ATgetArgument(t, 0);
                  t = w_28;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      l_28 = ATgetFirst((ATermList) t);
                      o_28 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_28, (ATerm) ATmakeAppl(sym_Seqs_1, o_28));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_j_28;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      w_28 = ATgetArgument(t, 0);
                      x_28 = ATgetArgument(t, 1);
                      q_28 = ATgetArgument(t, 2);
                      p_28 = ATgetArgument(t, 3);
                      {
                        ATerm q_29 = NULL,r_29 = NULL;
                        t = x_28;
                        t = map1_1_0(x_8, t);
                        q_29 = t;
                        t = q_28;
                        t = map1_1_0(y_8, t);
                        r_29 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, w_28, q_29, r_29, p_28);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          w_28 = ATgetArgument(t, 0);
                          x_28 = ATgetArgument(t, 1);
                          q_28 = ATgetArgument(t, 2);
                          p_28 = ATgetArgument(t, 3);
                          {
                            ATerm k_28 = t;
                            int m_28 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm h_30 = NULL,i_30 = NULL;
                                t = q_28;
                                t = map1_1_0(z_8, t);
                                h_30 = t;
                                t = x_28;
                                t = map_1_0(b_9, t);
                                i_30 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, w_28, i_30, h_30, p_28);
                                ;
                                LocalPopChoice(m_28);
                              }
                            else
                              {
                                t = k_28;
                                {
                                  ATerm x_30 = NULL,z_30 = NULL;
                                  t = x_28;
                                  t = map1_1_0(c_9, t);
                                  x_30 = t;
                                  t = q_28;
                                  t = map_1_0(d_9, t);
                                  z_30 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, w_28, x_30, z_30, p_28);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              w_28 = ATgetArgument(t, 0);
                              x_28 = ATgetArgument(t, 1);
                              q_28 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, x_28, (ATerm) ATmakeAppl(sym_Op_2, term_e_25, (ATerm) ATinsert(ATinsert(ATempty, q_28), w_28)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  w_28 = ATgetArgument(t, 0);
                                  x_28 = ATgetArgument(t, 1);
                                  q_28 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, q_28)), w_28), (ATerm) ATmakeAppl(sym_Build_1, x_28)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      w_28 = ATgetArgument(t, 0);
                                      x_28 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_28, (ATerm) ATmakeAppl(sym_Match_1, x_28));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          w_28 = ATgetArgument(t, 0);
                                          x_28 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, w_28), x_28);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              w_28 = ATgetArgument(t, 0);
                                              x_28 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, x_28), w_28);
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
ATerm h_10 (ATerm t)
{
  ATerm n_28 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_28;
    }
  return(t);
}
ATerm l_10 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_28;
  return(t);
}
ATerm m_10 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_31 = ATgetFirst((ATermList) t);
      v_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_31, v_31);
  return(t);
}
ATerm n_10 (ATerm t)
{
  ATerm w_31 = NULL,y_31 = NULL,z_31 = NULL,b_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_28 = ATgetArgument(t, 0);
      if(match_cons(s_28, sym__2))
        {
          w_31 = ATgetArgument(s_28, 0);
          y_31 = ATgetArgument(s_28, 1);
        }
      else
        _fail(t);
      {
        ATerm t_28 = ATgetArgument(t, 1);
        if(match_cons(t_28, sym__2))
          {
            z_31 = ATgetArgument(t_28, 0);
            b_32 = ATgetArgument(t_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_31), w_31), (ATerm) ATinsert(CheckATermList(b_32), y_31));
  return(t);
}
ATerm q_10 (ATerm t)
{
  t = genzip_4_0(s_10, t_10, u_10, _id, t);
  return(t);
}
ATerm s_10 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_28;
  return(t);
}
ATerm t_10 (ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_32 = ATgetFirst((ATermList) t);
      d_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_32, d_32);
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm f_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_28 = ATgetArgument(t, 0);
      if(match_cons(u_28, sym__2))
        {
          f_32 = ATgetArgument(u_28, 0);
          k_32 = ATgetArgument(u_28, 1);
        }
      else
        _fail(t);
      {
        ATerm v_28 = ATgetArgument(t, 1);
        if(match_cons(v_28, sym__2))
          {
            l_32 = ATgetArgument(v_28, 0);
            m_32 = ATgetArgument(v_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_32), f_32), (ATerm) ATinsert(CheckATermList(m_32), k_32));
  return(t);
}
ATerm q_8 (ATerm u_86, ATerm v_86, ATerm w_86, ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
  t = w_86;
  t = fetch_1_0(h_10, t);
  t = w_86;
  t = genzip_4_0(l_10, m_10, n_10, LiftPrimArg_0_0, t);
  t = _2_0(concat_0_0, q_10, t);
  if(match_cons(t, sym__2))
    {
      r_31 = ATgetArgument(t, 0);
      {
        ATerm y_28 = ATgetArgument(t, 1);
        if(match_cons(y_28, sym__2))
          {
            s_31 = ATgetArgument(y_28, 0);
            t_31 = ATgetArgument(y_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, r_31, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, s_31), (ATerm) ATmakeAppl(sym_CallT_3, u_86, v_86, t_31)));
  return(t);
}
ATerm x_32 (ATerm p_32, ATerm t)
{
  ATerm r_32 = NULL;
  t = p_32;
  {
    ATerm z_28 = t;
    if((PushChoice() == 0))
      {
        t = Var_1_0(_id, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_28;
      }
    t = new_0_0(t);
    r_32 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, r_32), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_32), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_32)))), (ATerm) ATmakeAppl(sym_Var_1, r_32)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL;
  u_32 = t;
  if(match_cons(t, sym_Var_1))
    {
      v_32 = ATgetArgument(t, 0);
      {
        ATerm a_29 = t;
        int b_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_32(u_32, t);
            ;
            LocalPopChoice(b_29);
          }
        else
          {
            t = a_29;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_j_28, (ATerm) ATmakeAppl(sym_Var_1, v_32)));
          }
      }
    }
  else
    {
      t = x_32(u_32, t);
    }
  return(t);
}
ATerm Var_1_0 (ATerm i_97 (ATerm), ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,u_1 = NULL,x_1 = NULL;
  d_33 = t;
  if(match_cons(t, sym_Var_1))
    {
      b_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_33);
  a_33 = t;
  t = b_33;
  t = i_97(t);
  c_33 = t;
  x_1 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, c_33);
  u_1 = t;
  t = SSLsetAnnotations(u_1, a_33);
  return(t);
}
ATerm v_10 (ATerm t)
{
  ATerm c_29 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_29;
    }
  return(t);
}
ATerm w_10 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_28;
  return(t);
}
ATerm x_10 (ATerm t)
{
  ATerm z_7 = NULL,b_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_7 = ATgetFirst((ATermList) t);
      b_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_7, b_8);
  return(t);
}
ATerm y_10 (ATerm t)
{
  ATerm c_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_29 = ATgetArgument(t, 0);
      if(match_cons(d_29, sym__2))
        {
          c_8 = ATgetArgument(d_29, 0);
          e_8 = ATgetArgument(d_29, 1);
        }
      else
        _fail(t);
      {
        ATerm e_29 = ATgetArgument(t, 1);
        if(match_cons(e_29, sym__2))
          {
            f_8 = ATgetArgument(e_29, 0);
            g_8 = ATgetArgument(e_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_8), c_8), (ATerm) ATinsert(CheckATermList(g_8), e_8));
  return(t);
}
ATerm b_11 (ATerm t)
{
  t = genzip_4_0(d_11, e_11, j_11, _id, t);
  return(t);
}
ATerm d_11 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_28;
  return(t);
}
ATerm e_11 (ATerm t)
{
  ATerm i_8 = NULL,j_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_8 = ATgetFirst((ATermList) t);
      j_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_8, j_8);
  return(t);
}
ATerm j_11 (ATerm t)
{
  ATerm k_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_29 = ATgetArgument(t, 0);
      if(match_cons(f_29, sym__2))
        {
          k_8 = ATgetArgument(f_29, 0);
          l_8 = ATgetArgument(f_29, 1);
        }
      else
        _fail(t);
      {
        ATerm g_29 = ATgetArgument(t, 1);
        if(match_cons(g_29, sym__2))
          {
            m_8 = ATgetArgument(g_29, 0);
            n_8 = ATgetArgument(g_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_8), k_8), (ATerm) ATinsert(CheckATermList(n_8), l_8));
  return(t);
}
ATerm k_11 (ATerm t)
{
  ATerm h_29 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_29;
    }
  return(t);
}
ATerm l_11 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_28;
  return(t);
}
ATerm s_11 (ATerm t)
{
  ATerm m_9 = NULL,o_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_9 = ATgetFirst((ATermList) t);
      o_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_9, o_9);
  return(t);
}
ATerm u_11 (ATerm t)
{
  ATerm x_9 = NULL,a_10 = NULL,c_10 = NULL,d_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_29 = ATgetArgument(t, 0);
      if(match_cons(i_29, sym__2))
        {
          x_9 = ATgetArgument(i_29, 0);
          a_10 = ATgetArgument(i_29, 1);
        }
      else
        _fail(t);
      {
        ATerm j_29 = ATgetArgument(t, 1);
        if(match_cons(j_29, sym__2))
          {
            c_10 = ATgetArgument(j_29, 0);
            d_10 = ATgetArgument(j_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_10), x_9), (ATerm) ATinsert(CheckATermList(d_10), a_10));
  return(t);
}
ATerm v_11 (ATerm t)
{
  t = genzip_4_0(w_11, x_11, z_11, _id, t);
  return(t);
}
ATerm w_11 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_28;
  return(t);
}
ATerm x_11 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_10 = ATgetFirst((ATermList) t);
      f_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_10, f_10);
  return(t);
}
ATerm z_11 (ATerm t)
{
  ATerm g_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_29 = ATgetArgument(t, 0);
      if(match_cons(k_29, sym__2))
        {
          g_10 = ATgetArgument(k_29, 0);
          i_10 = ATgetArgument(k_29, 1);
        }
      else
        _fail(t);
      {
        ATerm l_29 = ATgetArgument(t, 1);
        if(match_cons(l_29, sym__2))
          {
            j_10 = ATgetArgument(l_29, 0);
            k_10 = ATgetArgument(l_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_10), g_10), (ATerm) ATinsert(CheckATermList(k_10), i_10));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL;
  m_35 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      n_35 = ATgetArgument(t, 0);
      o_35 = ATgetArgument(t, 1);
      l_35 = ATgetArgument(t, 2);
      {
        ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL;
        t = l_35;
        t = fetch_1_0(v_10, t);
        t = l_35;
        t = genzip_4_0(w_10, x_10, y_10, LiftPrimArg_0_0, t);
        t = _2_0(concat_0_0, b_11, t);
        if(match_cons(t, sym__2))
          {
            v_7 = ATgetArgument(t, 0);
            {
              ATerm m_29 = ATgetArgument(t, 1);
              if(match_cons(m_29, sym__2))
                {
                  w_7 = ATgetArgument(m_29, 0);
                  x_7 = ATgetArgument(m_29, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, v_7, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, w_7), (ATerm) ATmakeAppl(sym_PrimT_3, n_35, o_35, x_7)));
      }
    }
  else
    {
      ATerm f_9 = NULL,h_9 = NULL,i_9 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          n_35 = ATgetArgument(t, 0);
          o_35 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = o_35;
      t = fetch_1_0(k_11, t);
      t = o_35;
      t = genzip_4_0(l_11, s_11, u_11, LiftPrimArg_0_0, t);
      t = _2_0(concat_0_0, v_11, t);
      if(match_cons(t, sym__2))
        {
          f_9 = ATgetArgument(t, 0);
          {
            ATerm n_29 = ATgetArgument(t, 1);
            if(match_cons(n_29, sym__2))
              {
                h_9 = ATgetArgument(n_29, 0);
                i_9 = ATgetArgument(n_29, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, f_9, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, h_9), (ATerm) ATmakeAppl(sym_PrimT_3, n_35, (ATerm)ATempty, i_9)));
    }
  return(t);
}
ATerm repeat_1_0 (ATerm d_128 (ATerm), ATerm t)
{
  ATerm r_35 (ATerm t)
  {
    ATerm o_29 = t;
    int p_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_128(t);
        t = r_35(t);
        ;
        LocalPopChoice(p_29);
      }
    else
      {
        t = o_29;
      }
    return(t);
  }
  t = r_35(t);
  return(t);
}
ATerm a_12 (ATerm t)
{
  ATerm t_29 = t;
  int v_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Con_3_0(_id, _id, _id, t);
      ;
      LocalPopChoice(v_29);
    }
  else
    {
      t = t_29;
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm w_29 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(a_12, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_29;
    }
  return(t);
}
ATerm App_2_0 (ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_1 = NULL,a_2 = NULL;
  x_35 = t;
  if(match_cons(t, sym_App_2))
    {
      t_35 = ATgetArgument(t, 0);
      u_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_35);
  s_35 = t;
  t = t_35;
  t = w_97(t);
  v_35 = t;
  t = u_35;
  t = x_97(t);
  w_35 = t;
  a_2 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, v_35, w_35);
  y_1 = t;
  t = SSLsetAnnotations(y_1, s_35);
  return(t);
}
ATerm Con_3_0 (ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL,b_2 = NULL,c_2 = NULL;
  h_36 = t;
  if(match_cons(t, sym_Con_3))
    {
      b_36 = ATgetArgument(t, 0);
      c_36 = ATgetArgument(t, 1);
      d_36 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_36);
  a_36 = t;
  t = b_36;
  t = i_98(t);
  e_36 = t;
  t = c_36;
  t = j_98(t);
  f_36 = t;
  t = d_36;
  t = k_98(t);
  g_36 = t;
  c_2 = t;
  t = (ATerm) ATmakeAppl(sym_Con_3, e_36, f_36, g_36);
  b_2 = t;
  t = SSLsetAnnotations(b_2, a_36);
  return(t);
}
ATerm b_12 (ATerm t)
{
  ATerm x_29 = t;
  int y_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Con_3_0(_id, _id, _id, t);
      ;
      LocalPopChoice(y_29);
    }
  else
    {
      t = x_29;
      t = App_2_0(_id, _id, t);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm z_29 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(b_12, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_29;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      r_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_36;
  if(match_cons(t, sym_StratRule_3))
    {
      s_36 = ATgetArgument(t, 0);
      t_36 = ATgetArgument(t, 1);
      u_36 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, t_36), (ATerm) ATmakeAppl(sym_Where_1, u_36)), s_36));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          s_36 = ATgetArgument(t, 0);
          t_36 = ATgetArgument(t, 1);
          u_36 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = s_36;
      t = pureterm_0_0(t);
      t = t_36;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, t_36)), (ATerm) ATmakeAppl(sym_Where_1, u_36)), (ATerm) ATmakeAppl(sym_Match_1, s_36)));
    }
  return(t);
}
ATerm Scope_2_0 (ATerm c_101 (ATerm), ATerm d_101 (ATerm), ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL,d_2 = NULL,f_2 = NULL;
  i_37 = t;
  if(match_cons(t, sym_Scope_2))
    {
      e_37 = ATgetArgument(t, 0);
      f_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_37);
  d_37 = t;
  t = e_37;
  t = c_101(t);
  g_37 = t;
  t = f_37;
  t = d_101(t);
  h_37 = t;
  f_2 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, g_37, h_37);
  d_2 = t;
  t = SSLsetAnnotations(d_2, d_37);
  return(t);
}
ATerm oncetd_1_0 (ATerm v_112 (ATerm), ATerm t)
{
  ATerm n_37 (ATerm t)
  {
    ATerm a_30 = t;
    int b_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_112(t);
        ;
        LocalPopChoice(b_30);
      }
    else
      {
        t = a_30;
        t = SRTS_one(n_37, t);
      }
    return(t);
  }
  t = n_37(t);
  return(t);
}
ATerm t_8 (ATerm j_82, ATerm k_82, ATerm l_82, ATerm t)
{
  ATerm o_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL;
  t = new_0_0(t);
  o_37 = t;
  t = j_82;
  {
    ATerm c_12 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm c_30 = ATgetArgument(t, 0);
          if(match_cons(c_30, sym_Var_1))
            {
              if(((w_37 != NULL) && (w_37 != ATgetArgument(c_30, 0))))
                _fail(ATgetArgument(c_30, 0));
              else
                w_37 = ATgetArgument(c_30, 0);
            }
          else
            _fail(t);
          if(((v_37 != NULL) && (v_37 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            v_37 = ATgetArgument(t, 1);
          {
            ATerm d_30 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_37));
      return(t);
    }
    t = oncetd_1_0(c_12, t);
    x_37 = t;
    t = k_82;
    {
      ATerm d_12 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm e_30 = ATgetArgument(t, 0);
            if(match_cons(e_30, sym_Var_1))
              {
                if(((w_37 != NULL) && (w_37 != ATgetArgument(e_30, 0))))
                  _fail(ATgetArgument(e_30, 0));
                else
                  w_37 = ATgetArgument(e_30, 0);
              }
            else
              _fail(t);
            if(((y_37 != NULL) && (y_37 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              y_37 = ATgetArgument(t, 1);
            {
              ATerm f_30 = ATgetArgument(t, 2);
              if(match_cons(f_30, sym_CallT_3))
                {
                  if(((z_37 != NULL) && (z_37 != ATgetArgument(f_30, 0))))
                    _fail(ATgetArgument(f_30, 0));
                  else
                    z_37 = ATgetArgument(f_30, 0);
                  {
                    ATerm g_30 = ATgetArgument(f_30, 1);
                    if(((ATgetType(g_30) != AT_LIST) || !(ATisEmpty(g_30))))
                      _fail(t);
                  }
                  {
                    ATerm j_30 = ATgetArgument(f_30, 2);
                    if(((ATgetType(j_30) != AT_LIST) || !(ATisEmpty(j_30))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, o_37);
        return(t);
      }
      t = oncetd_1_0(d_12, t);
      a_38 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_37), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, x_37, a_38, (ATerm) ATmakeAppl(sym_Seq_2, l_82, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(z_37), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(v_37), not_null(y_37), term_j_28))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_37)), (ATerm) ATmakeAppl(sym_Var_1, o_37))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm k_30 = t;
  int m_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_30 = t;
      int o_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL;
          g_38 = t;
          if(match_cons(t, sym_SRule_1))
            {
              h_38 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_38;
          if(match_cons(t, sym_Rule_3))
            {
              i_38 = ATgetArgument(t, 0);
              j_38 = ATgetArgument(t, 1);
              k_38 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = g_38;
          t = t_8(i_38, j_38, k_38, t);
          t = desugarRule_0_0(t);
          ;
          LocalPopChoice(o_30);
        }
      else
        {
          t = n_30;
          {
            ATerm p_30 = t;
            int r_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Scope_2_0(_id, desugarRule_0_0, t);
                ;
                LocalPopChoice(r_30);
              }
            else
              {
                t = p_30;
                t = RtoS_0_0(t);
              }
          }
        }
      ;
      LocalPopChoice(m_30);
    }
  else
    {
      t = k_30;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm r_111 (ATerm), ATerm t)
{
  t = r_111(t);
  {
    ATerm e_12 (ATerm t)
    {
      t = topdown_1_0(r_111, t);
      return(t);
    }
    t = SRTS_all(e_12, t);
  }
  return(t);
}
ATerm f_12 (ATerm t)
{
  ATerm s_30 = t;
  int t_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(t_30);
    }
  else
    {
      t = s_30;
    }
  t = repeat_1_0(g_12, t);
  return(t);
}
ATerm g_12 (ATerm t)
{
  ATerm u_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
      LocalPopChoice(v_30);
    }
  else
    {
      t = u_30;
      {
        ATerm w_30 = t;
        int y_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL;
            s_38 = t;
            if(match_cons(t, sym_CallT_3))
              {
                t_38 = ATgetArgument(t, 0);
                u_38 = ATgetArgument(t, 1);
                v_38 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = s_38;
            t = q_8(t_38, u_38, v_38, t);
            ;
            LocalPopChoice(y_30);
          }
        else
          {
            t = w_30;
            {
              ATerm a_31 = t;
              int c_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(c_31);
                }
              else
                {
                  t = a_31;
                  {
                    ATerm e_31 = t;
                    int f_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(f_31);
                      }
                    else
                      {
                        t = e_31;
                        {
                          ATerm g_31 = t;
                          int h_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm i_31 = t;
                              int j_31 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      a_39 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = a_39;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      b_39 = ATgetArgument(t, 0);
                                      {
                                        ATerm k_31 = t;
                                        int l_31 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm e_39 = NULL,f_39 = NULL;
                                            t = a_39;
                                            {
                                              ATerm h_12 (ATerm t)
                                              {
                                                if(match_cons(t, sym_RootApp_1))
                                                  {
                                                    ATerm m_31 = ATgetArgument(t, 0);
                                                    if(match_cons(m_31, sym_Match_1))
                                                      {
                                                        if(((e_39 != NULL) && (e_39 != ATgetArgument(m_31, 0))))
                                                          _fail(ATgetArgument(m_31, 0));
                                                        else
                                                          e_39 = ATgetArgument(m_31, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = not_null(e_39);
                                                return(t);
                                              }
                                              t = pat_td_1_0(h_12, t);
                                              f_39 = t;
                                              t = (ATerm) ATmakeAppl(sym_Match_1, f_39);
                                            }
                                            ;
                                            LocalPopChoice(l_31);
                                          }
                                        else
                                          {
                                            t = k_31;
                                            t = b_39;
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          b_39 = ATgetArgument(t, 0);
                                          c_39 = ATgetArgument(t, 1);
                                          {
                                            ATerm n_31 = t;
                                            int o_31 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm i_39 = NULL,j_39 = NULL;
                                                t = a_39;
                                                {
                                                  ATerm i_12 (ATerm t)
                                                  {
                                                    if(match_cons(t, sym_RootApp_1))
                                                      {
                                                        ATerm p_31 = ATgetArgument(t, 0);
                                                        if(match_cons(p_31, sym_Match_1))
                                                          {
                                                            if(((i_39 != NULL) && (i_39 != ATgetArgument(p_31, 0))))
                                                              _fail(ATgetArgument(p_31, 0));
                                                            else
                                                              i_39 = ATgetArgument(p_31, 0);
                                                          }
                                                        else
                                                          _fail(t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = not_null(i_39);
                                                    return(t);
                                                  }
                                                  t = pat_td_1_0(i_12, t);
                                                  j_39 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, j_39);
                                                }
                                                ;
                                                LocalPopChoice(o_31);
                                              }
                                            else
                                              {
                                                t = n_31;
                                                t = (ATerm) ATmakeAppl(sym_BA_2, b_39, c_39);
                                              }
                                          }
                                        }
                                      else
                                        {
                                          ATerm n_39 = NULL,o_39 = NULL;
                                          t = a_39;
                                          {
                                            ATerm j_12 (ATerm t)
                                            {
                                              if(match_cons(t, sym_RootApp_1))
                                                {
                                                  ATerm q_31 = ATgetArgument(t, 0);
                                                  if(match_cons(q_31, sym_Match_1))
                                                    {
                                                      if(((n_39 != NULL) && (n_39 != ATgetArgument(q_31, 0))))
                                                        _fail(ATgetArgument(q_31, 0));
                                                      else
                                                        n_39 = ATgetArgument(q_31, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                _fail(t);
                                              t = not_null(n_39);
                                              return(t);
                                            }
                                            t = pat_td_1_0(j_12, t);
                                            o_39 = t;
                                            t = (ATerm) ATmakeAppl(sym_Match_1, o_39);
                                          }
                                        }
                                    }
                                  ;
                                  LocalPopChoice(j_31);
                                }
                              else
                                {
                                  t = i_31;
                                  t = Mapp2_0_0(t);
                                }
                              ;
                              LocalPopChoice(h_31);
                            }
                          else
                            {
                              t = g_31;
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
  t = topdown_1_0(f_12, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm k_12 (ATerm t)
{
  ATerm y_39 = NULL,z_39 = NULL;
  y_39 = t;
  t = SSL_explode_term(y_39);
  if(match_cons(t, sym__2))
    {
      ATerm x_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_32 = ATgetArgument(t, 1);
        if(((ATgetType(a_32) == AT_LIST) && !(ATisEmpty(a_32))))
          {
            z_39 = ATgetFirst((ATermList) a_32);
            {
              ATerm e_32 = (ATerm) ATgetNext((ATermList) a_32);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_39;
  return(t);
}
ATerm l_12 (ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL,r_10 = NULL;
  o_10 = t;
  t = SSL_explode_term(o_10);
  if(match_cons(t, sym__2))
    {
      ATerm g_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_32 = ATgetArgument(t, 1);
        if(((ATgetType(h_32) == AT_LIST) && !(ATisEmpty(h_32))))
          {
            ATerm i_32 = ATgetFirst((ATermList) h_32);
            p_10 = (ATerm) ATgetNext((ATermList) h_32);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_e_25;
  r_10 = t;
  t = SSL_mkterm(r_10, p_10);
  return(t);
}
ATerm n_12 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm t_115 (ATerm), ATerm t)
{
  ATerm s_39 = NULL,t_39 = NULL;
  ATerm a_40 (ATerm t)
  {
    ATerm j_32 = t;
    int n_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_39 = NULL,w_39 = NULL,x_39 = NULL;
        u_39 = t;
        t = map_1_0(k_12, t);
        t = t_115(t);
        w_39 = t;
        t = u_39;
        t = map_1_0(l_12, t);
        t = a_40(t);
        x_39 = t;
        t = (ATerm) ATinsert(CheckATermList(x_39), w_39);
        ;
        LocalPopChoice(n_32);
      }
    else
      {
        t = j_32;
        t = map_1_0(n_12, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = a_40(t);
  s_39 = t;
  t = term_e_25;
  t_39 = t;
  t = SSL_mkterm(t_39, s_39);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm b_40 = NULL;
  b_40 = t;
  {
    ATerm o_32 = t;
    int q_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL;
        t = b_40;
        t = new_0_0(t);
        d_40 = t;
        t = new_0_0(t);
        e_40 = t;
        t = new_0_0(t);
        f_40 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_40), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_e_25, (ATerm) ATinsert(ATinsert(ATempty, b_40), (ATerm) ATmakeAppl(sym_Var_1, e_40))), (ATerm) ATmakeAppl(sym_Var_1, f_40)), (ATerm)ATmakeAppl(sym_VarDec_2, d_40, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_28), term_b_28)), e_40, (ATerm)ATmakeAppl(sym_Var_1, e_40), f_40, (ATerm) ATmakeAppl(sym_Var_1, f_40));
        ;
        LocalPopChoice(q_32);
      }
    else
      {
        t = o_32;
        {
          ATerm h_40 = NULL,i_40 = NULL,s_40 = NULL;
          t = b_40;
          t = new_0_0(t);
          h_40 = t;
          t = new_0_0(t);
          i_40 = t;
          t = new_0_0(t);
          s_40 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_40), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_e_25, (ATerm) ATinsert(ATinsert(ATempty, b_40), (ATerm) ATmakeAppl(sym_Var_1, i_40))), (ATerm) ATmakeAppl(sym_Var_1, s_40)), (ATerm)ATmakeAppl(sym_VarDec_2, h_40, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_28), term_b_28)), i_40, (ATerm)ATmakeAppl(sym_Var_1, i_40), s_40, (ATerm) ATmakeAppl(sym_Var_1, s_40));
        }
      }
  }
  return(t);
}
ATerm u_8 (ATerm o_52, ATerm p_52, ATerm t)
{
  ATerm s_32 = t;
  int t_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(o_52, p_52);
      ;
      LocalPopChoice(t_32);
    }
  else
    {
      t = s_32;
      t = SSL_subtr(o_52, p_52);
    }
  return(t);
}
ATerm o_12 (ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL;
  if(match_cons(t, sym__2))
    {
      t_40 = ATgetArgument(t, 0);
      u_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, t_40, u_40, (ATerm) ATempty);
  return(t);
}
ATerm p_12 (ATerm t)
{
  ATerm v_40 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm w_32 = ATgetArgument(t, 0);
      if(((ATgetType(w_32) != AT_INT) || (ATgetInt((ATermInt) w_32) != 0)))
        _fail(t);
      {
        ATerm y_32 = ATgetArgument(t, 1);
      }
      v_40 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_40;
  return(t);
}
ATerm copy_1_0 (ATerm x_122 (ATerm), ATerm t)
{
  ATerm r_12 (ATerm t)
  {
    ATerm w_40 = NULL,x_40 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL;
    if(match_cons(t, sym__3))
      {
        w_40 = ATgetArgument(t, 0);
        x_40 = ATgetArgument(t, 1);
        c_41 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, w_40, term_b_18);
    t = geq_0_0(t);
    t = term_b_18;
    f_41 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_40, term_b_18);
    t = u_8(w_40, f_41, t);
    d_41 = t;
    t = x_40;
    t = x_122(t);
    e_41 = t;
    t = (ATerm) ATmakeAppl(sym__3, d_41, x_40, (ATerm) ATinsert(CheckATermList(c_41), e_41));
    return(t);
  }
  t = for_3_0(o_12, p_12, r_12, t);
  return(t);
}
ATerm v_8 (ATerm t_64, ATerm u_64, ATerm t)
{
  ATerm i_41 = NULL,j_41 = NULL,k_41 = NULL;
  t = new_0_0(t);
  i_41 = t;
  t = new_0_0(t);
  j_41 = t;
  t = new_0_0(t);
  k_41 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_41), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_e_25, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, t_64)), (ATerm) ATmakeAppl(sym_Var_1, j_41))), (ATerm) ATmakeAppl(sym_Op_2, term_e_25, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, u_64)), (ATerm) ATmakeAppl(sym_Var_1, k_41)))), (ATerm)ATmakeAppl(sym_VarDec_2, i_41, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_28), term_b_28)), j_41, (ATerm)ATmakeAppl(sym_Var_1, j_41), k_41, (ATerm) ATmakeAppl(sym_Var_1, k_41));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_41 = ATgetFirst((ATermList) t);
      p_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_41;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm z_32 = t;
      int e_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_41;
          ;
          LocalPopChoice(e_33);
        }
      else
        {
          t = z_32;
          t = p_41;
          t = last_0_0(t);
        }
    }
  else
    {
      t = p_41;
      t = last_0_0(t);
    }
  return(t);
}
ATerm c_45 (ATerm h_42, ATerm i_42, ATerm j_42, ATerm k_42, ATerm t)
{
  ATerm t_42 = NULL,u_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,h_43 = NULL,i_43 = NULL;
  t = term_b_18;
  i_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_42, term_b_18);
  t = w_9(i_42, i_43, t);
  t_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_42, term_x_17);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_42 = ATgetFirst((ATermList) t);
      y_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_42;
  t = last_0_0(t);
  z_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_42), u_42), y_42);
  t = genzip_4_0(s_12, t_12, v_12, w_12, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      a_43 = ATgetArgument(t, 0);
      b_43 = ATgetArgument(t, 1);
      c_43 = ATgetArgument(t, 2);
      d_43 = ATgetArgument(t, 3);
      e_43 = ATgetArgument(t, 4);
      f_43 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_43), c_43), y_42);
  t = concat_0_0(t);
  h_43 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, h_42, term_f_33), b_43, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(h_43), u_42), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_e_25, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, u_42)), (ATerm) ATmakeAppl(sym_Op_2, h_42, d_43))), (ATerm)ATmakeAppl(sym_Op_2, term_e_25, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, z_42)), (ATerm) ATmakeAppl(sym_Op_2, h_42, f_43))), (ATerm) ATmakeAppl(sym_Seqs_1, a_43)))));
  return(t);
}
ATerm h_45 (ATerm v_43, ATerm w_43, ATerm x_43, ATerm a_44, ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL;
  t = a_44;
  t = new_0_0(t);
  i_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_43, (ATerm) ATmakeAppl(sym_Var_1, i_44));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      j_44 = ATgetArgument(t, 0);
      k_44 = ATgetArgument(t, 1);
      l_44 = ATgetArgument(t, 2);
      m_44 = ATgetArgument(t, 3);
      n_44 = ATgetArgument(t, 4);
      o_44 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_44, n_44);
  t = conc_0_0(t);
  p_44 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, v_43, term_g_33), k_44, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(p_44), i_44), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_e_25, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, i_44)), (ATerm) ATmakeAppl(sym_Op_2, v_43, m_44))), (ATerm)ATmakeAppl(sym_Op_2, v_43, o_44), (ATerm) ATmakeAppl(sym_Seqs_1, j_44)))));
  return(t);
}
ATerm s_12 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_33 = ATgetArgument(t, 0);
      ATerm i_33 = ATgetArgument(t, 1);
      if(((ATgetType(i_33) != AT_LIST) || !(ATisEmpty(i_33))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_12 (ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_33 = ATgetArgument(t, 0);
      if(((ATgetType(j_33) == AT_LIST) && !(ATisEmpty(j_33))))
        {
          m_43 = ATgetFirst((ATermList) j_33);
          n_43 = (ATerm) ATgetNext((ATermList) j_33);
        }
      else
        _fail(t);
      {
        ATerm k_33 = ATgetArgument(t, 1);
        if(((ATgetType(k_33) == AT_LIST) && !(ATisEmpty(k_33))))
          {
            o_43 = ATgetFirst((ATermList) k_33);
            p_43 = (ATerm) ATgetNext((ATermList) k_33);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_43, o_43), (ATerm) ATmakeAppl(sym__2, n_43, p_43));
  return(t);
}
ATerm v_12 (ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL;
  if(match_cons(t, sym__2))
    {
      q_43 = ATgetArgument(t, 0);
      r_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_43), q_43);
  return(t);
}
ATerm w_12 (ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL;
  if(match_cons(t, sym__2))
    {
      t_43 = ATgetArgument(t, 0);
      u_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_8(t_43, u_43, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL;
  s_44 = t;
  if(match_cons(t, sym__3))
    {
      t_44 = ATgetArgument(t, 0);
      u_44 = ATgetArgument(t, 1);
      w_44 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_44;
  if(match_string(t, "T"))
    {
      t = w_44;
      if(match_cons(t, sym__2))
        {
          x_44 = ATgetArgument(t, 0);
          y_44 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_44;
      if(match_int(t, 0))
        {
          ATerm l_33 = t;
          int m_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_45(t_44, x_44, y_44, s_44, t);
              ;
              LocalPopChoice(m_33);
            }
          else
            {
              t = l_33;
              {
                ATerm b_45 = NULL;
                t = s_44;
                t = new_0_0(t);
                b_45 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, t_44, term_f_33), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_45), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_e_25, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, b_45)), (ATerm) ATmakeAppl(sym_Op_2, t_44, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_e_25, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, b_45)), (ATerm) ATmakeAppl(sym_Op_2, t_44, (ATerm) ATempty))), term_j_28))));
              }
            }
        }
      else
        {
          t = c_45(t_44, x_44, y_44, s_44, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = w_44;
      if(match_cons(t, sym__2))
        {
          x_44 = ATgetArgument(t, 0);
          y_44 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_45(t_44, x_44, y_44, s_44, t);
    }
  return(t);
}
ATerm x_12 (ATerm t)
{
  ATerm n_33 = t;
  int o_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_46 = NULL,l_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_46 = ATgetFirst((ATermList) t);
          l_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_46;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_46;
      ;
      LocalPopChoice(o_33);
    }
  else
    {
      t = n_33;
      t = JoinDefs2_0_0(t);
    }
  return(t);
}
ATerm z_12 (ATerm t)
{
  ATerm p_33 = t;
  int q_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_46 = NULL,z_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_46 = ATgetFirst((ATermList) t);
          z_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_46;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_46;
      ;
      LocalPopChoice(q_33);
    }
  else
    {
      t = p_33;
      t = JoinDefs2_0_0(t);
    }
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm p_45 = NULL,q_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL;
  if(match_cons(t, sym__2))
    {
      t_45 = ATgetArgument(t, 0);
      w_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_45;
  if(match_cons(t, sym__2))
    {
      u_45 = ATgetArgument(t, 0);
      v_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_45;
  if(match_cons(t, sym_Mod_2))
    {
      p_45 = ATgetArgument(t, 0);
      q_45 = ATgetArgument(t, 1);
      {
        ATerm r_33 = t;
        int s_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_46 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, p_45, q_45, v_45);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            b_46 = t;
            t = (ATerm) ATmakeAppl(sym__2, b_46, w_45);
            ;
            LocalPopChoice(s_33);
          }
        else
          {
            t = r_33;
            {
              ATerm i_46 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, u_45, v_45);
              t = Definitions_0_0(t);
              i_46 = t;
              t = (ATerm) ATmakeAppl(sym__2, i_46, w_45);
              t = _2_0(x_12, _id, t);
            }
          }
      }
    }
  else
    {
      ATerm v_46 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, u_45, v_45);
      t = Definitions_0_0(t);
      v_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_46, w_45);
      t = _2_0(z_12, _id, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm i_118 (ATerm), ATerm t)
{
  ATerm l_47 (ATerm t)
  {
    ATerm t_33 = t;
    int u_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, l_47, t);
        ;
        LocalPopChoice(u_33);
      }
    else
      {
        t = t_33;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_118(t);
      }
    return(t);
  }
  t = l_47(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_33 = t;
  int w_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(w_33);
    }
  else
    {
      t = v_33;
      {
        ATerm g_47 = NULL,h_47 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_47 = ATgetFirst((ATermList) t);
            h_47 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = g_47;
        {
          ATerm a_13 (ATerm t)
          {
            t = h_47;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(a_13, t);
        }
      }
    }
  return(t);
}
ATerm f_48 (ATerm u_47, ATerm t)
{
  ATerm x_47 = NULL;
  t = SSL_explode_term(u_47);
  if(match_cons(t, sym__2))
    {
      ATerm x_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_47;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm y_47 = NULL,a_48 = NULL,b_48 = NULL;
  b_48 = t;
  if(match_cons(t, sym__2))
    {
      y_47 = ATgetArgument(t, 0);
      a_48 = ATgetArgument(t, 1);
      {
        ATerm y_33 = t;
        int z_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_13 (ATerm t)
            {
              t = a_48;
              return(t);
            }
            t = y_47;
            t = at_end_1_0(b_13, t);
            ;
            LocalPopChoice(z_33);
          }
        else
          {
            t = y_33;
            t = f_48(b_48, t);
          }
      }
    }
  else
    {
      t = f_48(b_48, t);
    }
  return(t);
}
ATerm a_9 (ATerm p_119 (ATerm), ATerm t_48, ATerm s_48, ATerm t)
{
  t = t_48;
  {
    ATerm q_48 (ATerm t)
    {
      ATerm a_34 = t;
      int b_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(b_34);
        }
      else
        {
          t = a_34;
          {
            ATerm c_34 = t;
            int d_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL;
                j_48 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    k_48 = ATgetFirst((ATermList) t);
                    l_48 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = j_48;
                {
                  ATerm c_13 (ATerm t)
                  {
                    t = s_48;
                    return(t);
                  }
                  t = k_9(p_119, c_13, k_48, l_48, t);
                  t = q_48(t);
                }
                ;
                LocalPopChoice(d_34);
              }
            else
              {
                t = c_34;
                t = Cons_2_0(_id, q_48, t);
              }
          }
        }
      return(t);
    }
    t = q_48(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm d_116 (ATerm), ATerm e_116 (ATerm), ATerm f_116 (ATerm), ATerm g_116 (ATerm), ATerm t)
{
  ATerm r_48 (ATerm t)
  {
    ATerm e_34 = t;
    int f_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_116(t);
        ;
        LocalPopChoice(f_34);
      }
    else
      {
        t = e_34;
        t = e_116(t);
        t = _2_0(g_116, r_48, t);
        t = f_116(t);
      }
    return(t);
  }
  t = r_48(t);
  return(t);
}
ATerm d_13 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_34 = ATgetArgument(t, 0);
      if(((ATgetType(g_34) != AT_LIST) || !(ATisEmpty(g_34))))
        _fail(t);
      {
        ATerm h_34 = ATgetArgument(t, 1);
        if(((ATgetType(h_34) != AT_LIST) || !(ATisEmpty(h_34))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_13 (ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_34 = ATgetArgument(t, 0);
      if(((ATgetType(i_34) == AT_LIST) && !(ATisEmpty(i_34))))
        {
          g_49 = ATgetFirst((ATermList) i_34);
          h_49 = (ATerm) ATgetNext((ATermList) i_34);
        }
      else
        _fail(t);
      {
        ATerm j_34 = ATgetArgument(t, 1);
        if(((ATgetType(j_34) == AT_LIST) && !(ATisEmpty(j_34))))
          {
            i_49 = ATgetFirst((ATermList) j_34);
            j_49 = (ATerm) ATgetNext((ATermList) j_34);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_49, i_49), (ATerm) ATmakeAppl(sym__2, h_49, j_49));
  return(t);
}
ATerm g_13 (ATerm t)
{
  ATerm k_49 = NULL,l_49 = NULL;
  if(match_cons(t, sym__2))
    {
      k_49 = ATgetArgument(t, 0);
      l_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_49), k_49);
  return(t);
}
ATerm e_9 (ATerm n_689, ATerm s_689, ATerm u_80, ATerm t)
{
  ATerm x_48 = NULL,b_49 = NULL,e_49 = NULL,f_49 = NULL;
  t = SSL_explode_term(s_689);
  if(match_cons(t, sym__2))
    {
      x_48 = ATgetArgument(t, 0);
      b_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(n_689);
  if(match_cons(t, sym__2))
    {
      if((x_48 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      e_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_49, b_49);
  t = genzip_4_0(d_13, e_13, g_13, _id, t);
  f_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_49, u_80);
  t = conc_0_0(t);
  return(t);
}
ATerm h_13 (ATerm t)
{
  ATerm s_49 = NULL;
  s_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, s_49);
  return(t);
}
ATerm i_13 (ATerm t)
{
  t = _2_0(_id, l_13, t);
  return(t);
}
ATerm k_13 (ATerm t)
{
  ATerm k_34 = t;
  int l_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, n_13, t);
      ;
      LocalPopChoice(l_34);
    }
  else
    {
      t = k_34;
      {
        ATerm u_50 = NULL,a_51 = NULL,b_51 = NULL,e_51 = NULL;
        if(match_cons(t, sym__2))
          {
            u_50 = ATgetArgument(t, 0);
            a_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_51;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_51 = ATgetFirst((ATermList) t);
            e_51 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_50), b_51), e_51);
      }
    }
  return(t);
}
ATerm l_13 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm n_13 (ATerm t)
{
  ATerm t_49 = NULL,u_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL;
  t_49 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_49 = ATgetFirst((ATermList) t);
      x_49 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_49;
  if(match_cons(t, sym__2))
    {
      v_49 = ATgetArgument(t, 0);
      w_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_34 = t;
    int n_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_49;
        if((v_49 != t))
          {
            _fail(t);
          }
        t = x_49;
        ;
        LocalPopChoice(n_34);
      }
    else
      {
        t = m_34;
        t = t_49;
        t = e_9(v_49, w_49, x_49, t);
      }
  }
  return(t);
}
ATerm o_13 (ATerm t)
{
  ATerm v_51 = NULL;
  if(match_cons(t, sym__2))
    {
      v_51 = ATgetArgument(t, 0);
      if((v_51 != ATgetArgument(t, 1)))
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
  ATerm o_34 = t;
  int p_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(h_13, i_13, k_13, t);
      ;
      LocalPopChoice(p_34);
    }
  else
    {
      t = o_34;
      {
        ATerm j_51 = NULL,k_51 = NULL,s_51 = NULL;
        j_51 = t;
        if(match_cons(t, sym__2))
          {
            k_51 = ATgetArgument(t, 0);
            s_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_51;
        t = a_9(o_13, k_51, s_51, t);
      }
    }
  return(t);
}
ATerm g_9 (ATerm u_140 (ATerm), ATerm v_140 (ATerm), ATerm w_140 (ATerm), ATerm r_81, ATerm o_81, ATerm w_81, ATerm s_81, ATerm p_81, ATerm q_81, ATerm t)
{
  ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL,b_52 = NULL,d_52 = NULL,f_52 = NULL,h_52 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_81, s_81);
  t = u_140(t);
  if(match_cons(t, sym__2))
    {
      x_51 = ATgetArgument(t, 0);
      y_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_51;
  t = v_140(t);
  z_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_51, w_81);
  t = diff_0_0(t);
  b_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_52, o_81);
  t = conc_0_0(t);
  d_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_52, w_81);
  t = conc_0_0(t);
  f_52 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_81, x_51, p_81);
  t = w_140(t);
  h_52 = t;
  t = (ATerm) ATmakeAppl(sym__5, d_52, f_52, y_51, h_52, q_81);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm u_140 (ATerm), ATerm v_140 (ATerm), ATerm w_140 (ATerm), ATerm t)
{
  ATerm n_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL,u_52 = NULL,x_52 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm q_34 = ATgetArgument(t, 0);
      if(((ATgetType(q_34) == AT_LIST) && !(ATisEmpty(q_34))))
        {
          n_52 = ATgetFirst((ATermList) q_34);
          q_52 = (ATerm) ATgetNext((ATermList) q_34);
        }
      else
        _fail(t);
      r_52 = ATgetArgument(t, 1);
      s_52 = ATgetArgument(t, 2);
      u_52 = ATgetArgument(t, 3);
      x_52 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = g_9(u_140, v_140, w_140, n_52, q_52, r_52, s_52, u_52, x_52, t);
  return(t);
}
ATerm while_not_2_0 (ATerm s_128 (ATerm), ATerm t_128 (ATerm), ATerm t)
{
  ATerm z_52 (ATerm t)
  {
    ATerm r_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_128(t);
        ;
        LocalPopChoice(s_34);
      }
    else
      {
        t = r_34;
        t = t_128(t);
        t = z_52(t);
      }
    return(t);
  }
  t = z_52(t);
  return(t);
}
ATerm for_3_0 (ATerm v_128 (ATerm), ATerm w_128 (ATerm), ATerm x_128 (ATerm), ATerm t)
{
  t = v_128(t);
  t = while_not_2_0(w_128, x_128, t);
  return(t);
}
ATerm p_13 (ATerm t)
{
  ATerm k_53 = NULL,l_53 = NULL,r_53 = NULL;
  if(match_cons(t, sym__3))
    {
      k_53 = ATgetArgument(t, 0);
      l_53 = ATgetArgument(t, 1);
      r_53 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, k_53, k_53, l_53, r_53, (ATerm) ATempty);
  return(t);
}
ATerm q_13 (ATerm t)
{
  ATerm z_53 = NULL,a_54 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm t_34 = ATgetArgument(t, 0);
      if(((ATgetType(t_34) != AT_LIST) || !(ATisEmpty(t_34))))
        _fail(t);
      {
        ATerm u_34 = ATgetArgument(t, 1);
      }
      {
        ATerm v_34 = ATgetArgument(t, 2);
      }
      z_53 = ATgetArgument(t, 3);
      a_54 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_53, a_54);
  return(t);
}
ATerm r_13 (ATerm t)
{
  ATerm w_34 = t;
  int x_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, s_13, t_13, t);
      ;
      LocalPopChoice(x_34);
    }
  else
    {
      t = w_34;
      {
        ATerm k_54 = NULL,l_54 = NULL,m_54 = NULL,o_54 = NULL,s_54 = NULL,t_54 = NULL,w_54 = NULL;
        if(match_cons(t, sym__5))
          {
            k_54 = ATgetArgument(t, 0);
            o_54 = ATgetArgument(t, 1);
            s_54 = ATgetArgument(t, 2);
            t_54 = ATgetArgument(t, 3);
            w_54 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = k_54;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_54 = ATgetFirst((ATermList) t);
            m_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, m_54, o_54, s_54, t_54, (ATerm) ATinsert(CheckATermList(w_54), l_54));
      }
    }
  return(t);
}
ATerm s_13 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(u_13, t);
  return(t);
}
ATerm t_13 (ATerm t)
{
  ATerm h_54 = NULL,i_54 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm y_34 = ATgetArgument(t, 0);
      h_54 = ATgetArgument(t, 1);
      i_54 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_54), h_54);
  return(t);
}
ATerm u_13 (ATerm t)
{
  ATerm z_34 = t;
  int a_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      ;
      LocalPopChoice(a_35);
    }
  else
    {
      t = z_34;
    }
  return(t);
}
ATerm v_13 (ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL,o_11 = NULL,p_11 = NULL,t_11 = NULL;
  o_11 = t;
  if(match_cons(t, sym__2))
    {
      p_11 = ATgetArgument(t, 0);
      t_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_11;
  if(match_cons(t, sym_Mod_2))
    {
      h_11 = ATgetArgument(t, 0);
      i_11 = ATgetArgument(t, 1);
      {
        ATerm b_35 = t;
        int c_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_11;
            t = a_8(h_11, i_11, t_11, t);
            ;
            LocalPopChoice(c_35);
          }
        else
          {
            t = b_35;
            t = y_11(p_11, t_11, t);
          }
      }
    }
  else
    {
      t = y_11(p_11, t_11, t);
    }
  return(t);
}
ATerm y_11 (ATerm a_11, ATerm c_11, ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL;
  t = term_y_17;
  f_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_19), c_11), term_c_19), a_11), term_a_19);
  g_11 = t;
  t = SSL_printnl(f_11, g_11);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_19), c_11), term_c_19), a_11), term_a_19);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm l_56 = NULL,m_56 = NULL,n_56 = NULL,p_56 = NULL,q_56 = NULL;
  t = for_3_0(p_13, q_13, r_13, t);
  l_56 = t;
  if(match_cons(t, sym__2))
    {
      m_56 = ATgetArgument(t, 0);
      n_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_56;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_56;
    }
  else
    {
      ATerm z_10 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_56 = ATgetFirst((ATermList) t);
          q_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(q_56), p_56);
      t = map_1_0(v_13, t);
      t = term_b_18;
      z_10 = t;
      t = SSL_exit(z_10);
    }
  return(t);
}
ATerm j_9 (ATerm t_123 (ATerm), ATerm w_53, ATerm u_53, ATerm t)
{
  ATerm x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL;
  x_56 = t;
  t = t_123(t);
  y_56 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_56, w_53, u_53);
  t = z_9(y_56, w_53, u_53, t);
  {
    ATerm d_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_57 = NULL;
        t = term_f_35;
        d_57 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_56, term_f_35);
        t = y_9(y_56, d_57, t);
        ;
        LocalPopChoice(e_35);
      }
    else
      {
        t = d_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_56 = ATgetFirst((ATermList) t);
        a_57 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_f_35;
    b_57 = t;
    t = (ATerm) ATinsert(CheckATermList(a_57), (ATerm) ATinsert(CheckATermList(z_56), w_53));
    c_57 = t;
    t = SSL_table_put(y_56, b_57, c_57);
    t = x_56;
  }
  return(t);
}
ATerm k_9 (ATerm x_119 (ATerm), ATerm y_119 (ATerm), ATerm z_48, ATerm y_48, ATerm t)
{
  t = y_119(t);
  {
    ATerm w_13 (ATerm t)
    {
      ATerm e_57 = NULL;
      e_57 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_48, e_57);
      t = x_119(t);
      return(t);
    }
    t = fetch_1_0(w_13, t);
    t = y_48;
  }
  return(t);
}
ATerm l_9 (ATerm u_119 (ATerm), ATerm v_48, ATerm u_48, ATerm t)
{
  t = v_48;
  {
    ATerm p_57 (ATerm t)
    {
      ATerm g_35 = t;
      int h_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = u_48;
          ;
          LocalPopChoice(h_35);
        }
      else
        {
          t = g_35;
          {
            ATerm i_35 = t;
            int j_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_57 = NULL,i_57 = NULL,k_57 = NULL;
                h_57 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    i_57 = ATgetFirst((ATermList) t);
                    k_57 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = h_57;
                {
                  ATerm y_13 (ATerm t)
                  {
                    t = u_48;
                    return(t);
                  }
                  t = k_9(u_119, y_13, i_57, k_57, t);
                  t = p_57(t);
                }
                ;
                LocalPopChoice(j_35);
              }
            else
              {
                t = i_35;
                t = Cons_2_0(_id, p_57, t);
              }
          }
        }
      return(t);
    }
    t = p_57(t);
  }
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm j_58 = NULL;
  j_58 = t;
  {
    ATerm k_35 = t;
    int p_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_12 = NULL,q_12 = NULL;
        t = term_q_35;
        q_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_35, j_58);
        t = n_9(q_12, j_58, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm y_35 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_35) != ATmakeSymbol("r_0", 0, ATtrue)))
              _fail(t);
            m_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_12;
        ;
        LocalPopChoice(p_35);
      }
    else
      {
        t = k_35;
        {
          ATerm u_12 = NULL,y_12 = NULL;
          t = term_q_35;
          y_12 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_q_35, j_58);
          t = n_9(y_12, j_58, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm z_35 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) z_35) != ATmakeSymbol("l_0", 0, ATtrue)))
                _fail(t);
              u_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_12;
        }
      }
  }
  return(t);
}
ATerm n_9 (ATerm p_54, ATerm q_54, ATerm t)
{
  ATerm p_58 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_54, q_54);
  t = y_9(p_54, q_54, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_58 = ATgetFirst((ATermList) t);
      {
        ATerm i_36 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = p_58;
  return(t);
}
ATerm o_59 (ATerm c_59, ATerm t)
{
  ATerm e_59 = NULL,f_59 = NULL,f_13 = NULL;
  t = term_j_36;
  f_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_36, c_59);
  t = n_9(f_13, c_59, t);
  if(match_cons(t, sym_Defined_3))
    {
      ATerm k_36 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_36) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
      e_59 = ATgetArgument(t, 1);
      f_59 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_59), e_59);
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm i_59 = NULL,k_59 = NULL;
  i_59 = t;
  if(match_cons(t, sym__2))
    {
      ATerm l_36 = ATgetArgument(t, 0);
      k_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_59;
  {
    ATerm m_36 = t;
    int n_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_36 = ATgetArgument(t, 0);
            ATerm p_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(n_36);
        {
          ATerm q_36 = t;
          int v_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_13 = NULL,m_13 = NULL;
              t = term_j_36;
              m_13 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_j_36, i_59);
              t = n_9(m_13, i_59, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm w_36 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) w_36) != ATmakeSymbol("o_0", 0, ATtrue)))
                    _fail(t);
                  j_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = j_13;
              ;
              LocalPopChoice(v_36);
            }
          else
            {
              t = q_36;
              t = o_59(i_59, t);
            }
        }
      }
    else
      {
        t = m_36;
        t = o_59(i_59, t);
      }
  }
  return(t);
}
ATerm foldr_3_0 (ATerm k_122 (ATerm), ATerm l_122 (ATerm), ATerm m_122 (ATerm), ATerm t)
{
  ATerm x_36 = t;
  int y_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_122(t);
      ;
      LocalPopChoice(y_36);
    }
  else
    {
      t = x_36;
      {
        ATerm v_59 = NULL,w_59 = NULL,b_60 = NULL,c_60 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_59 = ATgetFirst((ATermList) t);
            w_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_59;
        t = m_122(t);
        b_60 = t;
        t = w_59;
        t = foldr_3_0(k_122, l_122, m_122, t);
        c_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_60, c_60);
        t = l_122(t);
      }
    }
  return(t);
}
ATerm z_13 (ATerm t)
{
  t = term_o_21;
  return(t);
}
ATerm a_14 (ATerm t)
{
  ATerm u_60 = NULL,v_60 = NULL;
  if(match_cons(t, sym__2))
    {
      u_60 = ATgetArgument(t, 0);
      v_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9(u_60, v_60, t);
  return(t);
}
ATerm b_14 (ATerm t)
{
  t = term_b_18;
  return(t);
}
ATerm c_14 (ATerm t)
{
  t = term_o_21;
  return(t);
}
ATerm f_14 (ATerm t)
{
  ATerm w_60 = NULL,x_60 = NULL;
  if(match_cons(t, sym__2))
    {
      w_60 = ATgetArgument(t, 0);
      x_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9(w_60, x_60, t);
  return(t);
}
ATerm g_14 (ATerm t)
{
  t = term_b_18;
  return(t);
}
ATerm h_14 (ATerm t)
{
  ATerm y_60 = NULL;
  if(match_cons(t, sym__2))
    {
      y_60 = ATgetArgument(t, 0);
      if((y_60 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm i_14 (ATerm t)
{
  t = term_j_36;
  return(t);
}
ATerm j_14 (ATerm t)
{
  t = term_q_35;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm d_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL,t_60 = NULL;
  d_60 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      f_60 = ATgetArgument(t, 0);
      g_60 = ATgetArgument(t, 1);
      h_60 = ATgetArgument(t, 2);
      {
        ATerm z_36 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  i_60 = t;
  t = g_60;
  t = foldr_3_0(z_13, a_14, b_14, t);
  j_60 = t;
  t = h_60;
  t = foldr_3_0(c_14, f_14, g_14, t);
  k_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_60, (ATerm) ATmakeAppl(sym__2, j_60, k_60));
  {
    ATerm a_37 = t;
    int b_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        ;
        LocalPopChoice(b_37);
      }
    else
      {
        t = a_37;
        t = (ATerm) ATempty;
      }
    l_60 = t;
    t = f_60;
    {
      ATerm c_37 = t;
      int j_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Arities_0_0(t);
          ;
          LocalPopChoice(j_37);
        }
      else
        {
          t = c_37;
          t = (ATerm) ATempty;
        }
      m_60 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_60, k_60));
      o_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_60, k_60)), m_60);
      t = l_9(h_14, o_60, m_60, t);
      n_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_60, (ATerm) ATmakeAppl(sym__2, j_60, k_60));
      p_60 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_k_37, (ATerm) ATinsert(CheckATermList(l_60), d_60));
      q_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_60, (ATerm) ATmakeAppl(sym__2, j_60, k_60)), (ATerm) ATmakeAppl(sym_Defined_2, term_k_37, (ATerm) ATinsert(CheckATermList(l_60), d_60)));
      t = j_9(i_14, p_60, q_60, t);
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_l_37, n_60);
      t_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_60, (ATerm) ATmakeAppl(sym_Defined_2, term_l_37, n_60));
      t = j_9(j_14, f_60, t_60, t);
      t = i_60;
    }
  }
  return(t);
}
ATerm needed_defs_0_0 (ATerm t)
{
  ATerm z_60 = NULL;
  t = map_1_0(RegisterSDefT_0_0, t);
  z_60 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_q_37), z_60, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm f_96 (ATerm), ATerm t)
{
  ATerm a_61 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL,k_2 = NULL,l_2 = NULL;
  d_61 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      b_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_61);
  a_61 = t;
  t = b_61;
  t = f_96(t);
  c_61 = t;
  l_2 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, c_61);
  k_2 = t;
  t = SSLsetAnnotations(k_2, a_61);
  return(t);
}
ATerm Cons_2_0 (ATerm b_96 (ATerm), ATerm c_96 (ATerm), ATerm t)
{
  ATerm g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL,q_2 = NULL,r_2 = NULL;
  l_61 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_61 = ATgetFirst((ATermList) t);
      i_61 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_61);
  g_61 = t;
  t = h_61;
  t = b_96(t);
  j_61 = t;
  t = i_61;
  t = c_96(t);
  k_61 = t;
  r_2 = t;
  t = (ATerm) ATinsert(CheckATermList(k_61), j_61);
  q_2 = t;
  t = SSLsetAnnotations(q_2, g_61);
  return(t);
}
ATerm Specification_1_0 (ATerm k_96 (ATerm), ATerm t)
{
  ATerm o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL,s_2 = NULL,t_2 = NULL;
  r_61 = t;
  if(match_cons(t, sym_Specification_1))
    {
      p_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_61);
  o_61 = t;
  t = p_61;
  t = k_96(t);
  q_61 = t;
  t_2 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, q_61);
  s_2 = t;
  t = SSLsetAnnotations(s_2, o_61);
  return(t);
}
ATerm _2_0 (ATerm m_91 (ATerm), ATerm n_91 (ATerm), ATerm t)
{
  ATerm u_61 = NULL,v_61 = NULL,w_61 = NULL,x_61 = NULL,y_61 = NULL,z_61 = NULL,u_2 = NULL,x_2 = NULL;
  z_61 = t;
  if(match_cons(t, sym__2))
    {
      v_61 = ATgetArgument(t, 0);
      w_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_61);
  u_61 = t;
  t = v_61;
  t = m_91(t);
  x_61 = t;
  t = w_61;
  t = n_91(t);
  y_61 = t;
  x_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_61, y_61);
  u_2 = t;
  t = SSLsetAnnotations(u_2, u_61);
  return(t);
}
ATerm q_9 (ATerm c_70, ATerm d_70, ATerm t)
{
  ATerm c_62 = NULL;
  t = SSL_fputc(c_70, d_70);
  c_62 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_62);
  return(t);
}
ATerm r_9 (ATerm q_73, ATerm r_73, ATerm t)
{
  ATerm d_62 = NULL;
  t = SSL_write_term_to_stream_text(q_73, r_73);
  d_62 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_62);
  return(t);
}
ATerm t_9 (ATerm l_133 (ATerm), ATerm p_562, ATerm u_73, ATerm t)
{
  ATerm e_62 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_562, term_r_37);
  t = open_stream_0_0(t);
  e_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_62, u_73);
  t = l_133(t);
  t = fclose_0_0(t);
  t = u_73;
  return(t);
}
ATerm s_9 (ATerm m_73, ATerm n_73, ATerm t)
{
  ATerm f_62 = NULL;
  t = SSL_write_term_to_stream_baf(m_73, n_73);
  f_62 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_62);
  return(t);
}
ATerm v_14 (ATerm t)
{
  t = fetch_1_0(c_15, t);
  return(t);
}
ATerm b_15 (ATerm t)
{
  ATerm j_62 = NULL,k_62 = NULL;
  if(match_cons(t, sym__2))
    {
      j_62 = ATgetArgument(t, 0);
      k_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_9(g_15, j_62, k_62, t);
  return(t);
}
ATerm c_15 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm g_15 (ATerm t)
{
  ATerm n_62 = NULL,o_62 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_37 = ATgetArgument(t, 0);
      if(match_cons(s_37, sym_Stream_1))
        {
          n_62 = ATgetArgument(s_37, 0);
        }
      else
        _fail(t);
      o_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_9(n_62, o_62, t);
  return(t);
}
ATerm h_15 (ATerm t)
{
  ATerm p_62 = NULL,q_62 = NULL;
  if(match_cons(t, sym__2))
    {
      p_62 = ATgetArgument(t, 0);
      q_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_9(i_15, p_62, q_62, t);
  return(t);
}
ATerm i_15 (ATerm t)
{
  ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_37 = ATgetArgument(t, 0);
      if(match_cons(t_37, sym_Stream_1))
        {
          s_62 = ATgetArgument(t_37, 0);
        }
      else
        _fail(t);
      t_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_9(s_62, t_62, t);
  r_62 = t;
  t = term_u_37;
  u_62 = t;
  t = r_62;
  if(match_cons(t, sym_Stream_1))
    {
      v_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_u_37, r_62);
  t = q_9(u_62, v_62, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm g_62 = NULL,h_62 = NULL;
  g_62 = t;
  {
    ATerm k_14 (ATerm t)
    {
      ATerm b_38 = t;
      int c_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_14 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((h_62 != NULL) && (h_62 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_62 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(q_14, t);
          ;
          LocalPopChoice(c_38);
        }
      else
        {
          t = b_38;
          t = term_d_38;
          if(((h_62 != NULL) && (h_62 != t)))
            _fail(t);
          else
            h_62 = t;
        }
      return(t);
    }
    t = _2_0(k_14, _id, t);
    t = g_62;
    {
      ATerm s_14 (ATerm t)
      {
        ATerm i_62 = NULL;
        i_62 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_62), i_62);
        return(t);
      }
      t = _2_0(_id, s_14, t);
      {
        ATerm e_38 = t;
        int f_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(v_14, b_15, t);
            ;
            LocalPopChoice(f_38);
          }
        else
          {
            t = e_38;
            t = _2_0(_id, h_15, t);
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
  ATerm w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL,a_63 = NULL;
  w_62 = t;
  t = dtime_0_0(t);
  t = w_62;
  t = n_136(t);
  x_62 = t;
  t = dtime_0_0(t);
  y_62 = t;
  t = x_62;
  if(match_cons(t, sym__2))
    {
      z_62 = ATgetArgument(t, 0);
      a_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_62), (ATerm) ATmakeAppl(sym_Runtime_1, y_62)), a_63);
  return(t);
}
ATerm d_65 (ATerm i_63, ATerm t)
{
  t = SSL_fclose(i_63);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_63 = NULL,e_64 = NULL;
  e_64 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_63 = ATgetArgument(t, 0);
      {
        ATerm l_38 = t;
        int m_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_63);
            ;
            LocalPopChoice(m_38);
          }
        else
          {
            t = l_38;
            t = d_65(e_64, t);
          }
      }
    }
  else
    {
      t = d_65(e_64, t);
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
  ATerm e_65 = NULL;
  t = SSL_fopen(e_70, f_70);
  e_65 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_65);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_65 = NULL;
  t = SSL_stdin_stream();
  f_65 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_65);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_65 = NULL;
  t = SSL_stdout_stream();
  g_65 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_65);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_65 = NULL;
  t = SSL_stderr_stream();
  h_65 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_65);
  return(t);
}
ATerm j_15 (ATerm t)
{
  ATerm u_65 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      u_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_65;
  return(t);
}
ATerm l_15 (ATerm t)
{
  ATerm x_65 = NULL;
  x_65 = t;
  t = SSL_is_string(x_65);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_38 = ATgetArgument(t, 0);
      ATerm o_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_38 = t;
    int q_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_65 = NULL,x_13 = NULL;
        o_65 = t;
        t = SSL_explode_term(o_65);
        if(match_cons(t, sym__2))
          {
            ATerm r_38 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) r_38) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm w_38 = ATgetArgument(t, 1);
              if(((ATgetType(w_38) == AT_LIST) && !(ATisEmpty(w_38))))
                {
                  x_13 = ATgetFirst((ATermList) w_38);
                  {
                    ATerm x_38 = (ATerm) ATgetNext((ATermList) w_38);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = x_13;
        if(match_cons(t, sym_stderr_0))
          {
            t = x_13;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = x_13;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = x_13;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(q_38);
      }
    else
      {
        t = p_38;
        {
          ATerm y_38 = t;
          int z_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_65 = NULL,t_65 = NULL;
              t = _2_0(j_15, _id, t);
              if(match_cons(t, sym__2))
                {
                  p_65 = ATgetArgument(t, 0);
                  t_65 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = v_9(p_65, t_65, t);
              ;
              LocalPopChoice(z_38);
            }
          else
            {
              t = y_38;
              {
                ATerm v_65 = NULL,w_65 = NULL;
                t = _2_0(l_15, _id, t);
                if(match_cons(t, sym__2))
                  {
                    v_65 = ATgetArgument(t, 0);
                    w_65 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = v_9(v_65, w_65, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm m_15 (ATerm t)
{
  t = term_d_39;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm z_65 = NULL,k_66 = NULL,m_66 = NULL;
  ATerm g_39 = t;
  int h_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_66 = NULL;
      s_66 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_66, term_k_39);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(h_39);
    }
  else
    {
      t = g_39;
      t = debug_1_0(m_15, t);
      _fail(t);
    }
  z_65 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(m_66, t);
  k_66 = t;
  t = z_65;
  t = fclose_0_0(t);
  t = k_66;
  return(t);
}
ATerm fetch_1_0 (ATerm c_118 (ATerm), ATerm t)
{
  ATerm u_66 (ATerm t)
  {
    ATerm l_39 = t;
    int m_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(c_118, _id, t);
        ;
        LocalPopChoice(m_39);
      }
    else
      {
        t = l_39;
        t = Cons_2_0(_id, u_66, t);
      }
    return(t);
  }
  t = u_66(t);
  return(t);
}
ATerm p_9 (ATerm l_62, ATerm m_62, ATerm t)
{
  t = SSL_strcat(l_62, m_62);
  return(t);
}
ATerm debug_1_0 (ATerm j_133 (ATerm), ATerm t)
{
  ATerm v_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL;
  v_66 = t;
  t = j_133(t);
  w_66 = t;
  t = term_y_17;
  x_66 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_66), w_66);
  y_66 = t;
  t = SSL_printnl(x_66, y_66);
  t = v_66;
  return(t);
}
ATerm n_15 (ATerm t)
{
  ATerm p_39 = t;
  int q_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(q_39);
    }
  else
    {
      t = p_39;
    }
  return(t);
}
ATerm o_15 (ATerm t)
{
  t = term_r_39;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm v_39 = t;
  int c_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_67 = NULL;
      q_67 = t;
      t = SSL_is_string(q_67);
      ;
      LocalPopChoice(c_40);
    }
  else
    {
      t = v_39;
      {
        ATerm g_40 = t;
        int j_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(n_15, t);
            ;
            LocalPopChoice(j_40);
          }
        else
          {
            t = g_40;
            {
              ATerm y_67 = NULL,z_67 = NULL,a_68 = NULL;
              y_67 = t;
              if(match_cons(t, sym_Path_1))
                {
                  z_67 = ATgetArgument(t, 0);
                  t = z_67;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      z_67 = ATgetArgument(t, 0);
                      t = z_67;
                      {
                        ATerm k_40 = t;
                        int l_40 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(l_40);
                          }
                        else
                          {
                            t = k_40;
                            t = debug_1_0(o_15, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm e_68 = NULL,f_68 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          z_67 = ATgetArgument(t, 0);
                          a_68 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = z_67;
                      t = eval_config_0_0(t);
                      e_68 = t;
                      t = a_68;
                      t = eval_config_0_0(t);
                      f_68 = t;
                      t = (ATerm) ATmakeAppl(sym__2, e_68, f_68);
                      t = p_9(e_68, f_68, t);
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
  ATerm i_68 = NULL,j_68 = NULL;
  i_68 = t;
  t = term_m_40;
  j_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_40, i_68);
  t = y_9(j_68, i_68, t);
  {
    ATerm n_40 = t;
    int o_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_68 = NULL,l_68 = NULL;
        t = eval_config_0_0(t);
        k_68 = t;
        t = term_m_40;
        l_68 = t;
        t = SSL_table_put(l_68, i_68, k_68);
        t = k_68;
        ;
        LocalPopChoice(o_40);
      }
    else
      {
        t = n_40;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm w_134 (ATerm), ATerm t)
{
  ATerm p_40 = t;
  int q_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_68 = NULL,o_68 = NULL;
      m_68 = t;
      t = term_r_40;
      t = get_config_0_0(t);
      o_68 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_68, term_y_40);
      t = geq_0_0(t);
      t = m_68;
      t = w_134(t);
      ;
      LocalPopChoice(q_40);
    }
  else
    {
      t = p_40;
    }
  return(t);
}
ATerm q_15 (ATerm t)
{
  ATerm q_68 = NULL;
  q_68 = t;
  if(match_string(t, "-k"))
    {
      t = q_68;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = q_68;
    }
  return(t);
}
ATerm s_15 (ATerm t)
{
  ATerm r_68 = NULL,s_68 = NULL,t_68 = NULL;
  r_68 = t;
  t = SSL_string_to_int(r_68);
  s_68 = t;
  t = term_z_40;
  t_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_40, s_68);
  t = b_10(t_68, s_68, t);
  t = r_68;
  return(t);
}
ATerm t_15 (ATerm t)
{
  t = term_a_41;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_15, s_15, t_15, t);
  return(t);
}
ATerm v_15 (ATerm t)
{
  ATerm v_68 = NULL;
  v_68 = t;
  if(match_string(t, "-S"))
    {
      t = v_68;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = v_68;
    }
  return(t);
}
ATerm w_15 (ATerm t)
{
  ATerm w_68 = NULL,x_68 = NULL;
  t = term_r_40;
  w_68 = t;
  t = term_o_21;
  x_68 = t;
  t = term_b_41;
  t = b_10(w_68, x_68, t);
  t = term_l_41;
  return(t);
}
ATerm x_15 (ATerm t)
{
  t = term_m_41;
  return(t);
}
ATerm y_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_15 (ATerm t)
{
  ATerm y_68 = NULL,z_68 = NULL,a_69 = NULL;
  y_68 = t;
  t = SSL_string_to_int(y_68);
  z_68 = t;
  t = term_r_40;
  a_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_40, z_68);
  t = b_10(a_69, z_68, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_68);
  return(t);
}
ATerm a_16 (ATerm t)
{
  t = term_n_41;
  return(t);
}
ATerm b_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_16 (ATerm t)
{
  ATerm b_69 = NULL,c_69 = NULL;
  t = term_q_41;
  b_69 = t;
  t = term_x_17;
  c_69 = t;
  t = term_r_41;
  t = b_10(b_69, c_69, t);
  t = term_s_41;
  return(t);
}
ATerm d_16 (ATerm t)
{
  t = term_t_41;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_41 = t;
  int v_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_15, w_15, x_15, t);
      ;
      LocalPopChoice(v_41);
    }
  else
    {
      t = u_41;
      {
        ATerm w_41 = t;
        int x_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_15, z_15, a_16, t);
            ;
            LocalPopChoice(x_41);
          }
        else
          {
            t = w_41;
            t = Option_3_0(b_16, c_16, d_16, t);
          }
      }
    }
  return(t);
}
ATerm b_10 (ATerm t_74, ATerm u_74, ATerm t)
{
  ATerm d_69 = NULL;
  t = term_m_40;
  d_69 = t;
  t = SSL_table_put(d_69, t_74, u_74);
  t = (ATerm) ATmakeAppl(sym__3, term_m_40, t_74, u_74);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm g_69 = NULL,h_69 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_69 = NULL,j_69 = NULL,k_69 = NULL;
      t = term_x_17;
      t = d_0(t);
      i_69 = t;
      t = term_y_41;
      j_69 = t;
      t = term_z_41;
      k_69 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_41, term_z_41, i_69);
      t = z_9(j_69, k_69, i_69, t);
      _fail(t);
    }
  else
    {
      ATerm n_69 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_69 = ATgetFirst((ATermList) t);
          h_69 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_69;
      t = a_0(t);
      t = term_x_17;
      t = b_0(t);
      n_69 = t;
      t = (ATerm) ATinsert(CheckATermList(h_69), n_69);
    }
  return(t);
}
ATerm e_16 (ATerm t)
{
  ATerm p_69 = NULL;
  p_69 = t;
  if(match_string(t, "-o"))
    {
      t = p_69;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_69;
    }
  return(t);
}
ATerm f_16 (ATerm t)
{
  ATerm q_69 = NULL,r_69 = NULL;
  q_69 = t;
  t = term_a_42;
  r_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_42, q_69);
  t = b_10(r_69, q_69, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_69);
  return(t);
}
ATerm g_16 (ATerm t)
{
  t = term_b_42;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_16, f_16, g_16, t);
  return(t);
}
ATerm z_9 (ATerm e_54, ATerm f_54, ATerm d_54, ATerm t)
{
  ATerm t_69 = NULL,u_69 = NULL,v_69 = NULL;
  t_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_54, f_54);
  {
    ATerm c_42 = t;
    int d_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_42 = ATgetArgument(t, 0);
            ATerm f_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_54, f_54);
        t = y_9(e_54, f_54, t);
        ;
        LocalPopChoice(d_42);
      }
    else
      {
        t = c_42;
        t = (ATerm) ATempty;
      }
    u_69 = t;
    t = (ATerm) ATinsert(CheckATermList(u_69), d_54);
    v_69 = t;
    t = SSL_table_put(e_54, f_54, v_69);
    t = t_69;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_70 = NULL,n_70 = NULL,o_70 = NULL;
      t = term_x_17;
      t = m_0(t);
      m_70 = t;
      t = term_y_41;
      n_70 = t;
      t = term_z_41;
      o_70 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_41, term_z_41, m_70);
      t = z_9(n_70, o_70, m_70, t);
      _fail(t);
    }
  else
    {
      ATerm s_70 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_70 = ATgetFirst((ATermList) t);
          j_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_70;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_70 = ATgetFirst((ATermList) t);
          l_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_70;
      t = i_0(t);
      t = k_70;
      t = k_0(t);
      s_70 = t;
      t = (ATerm) ATinsert(CheckATermList(l_70), s_70);
    }
  return(t);
}
ATerm h_16 (ATerm t)
{
  ATerm u_70 = NULL;
  u_70 = t;
  if(match_string(t, "-i"))
    {
      t = u_70;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_70;
    }
  return(t);
}
ATerm i_16 (ATerm t)
{
  ATerm v_70 = NULL,w_70 = NULL;
  v_70 = t;
  t = term_g_42;
  w_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_42, v_70);
  t = b_10(w_70, v_70, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_70);
  return(t);
}
ATerm j_16 (ATerm t)
{
  t = term_l_42;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_16, i_16, j_16, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm x_70 = NULL,y_70 = NULL,z_70 = NULL,a_71 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_17;
  t = whoami_0_0(t);
  x_70 = t;
  t = term_y_17;
  y_70 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_42), x_70);
  z_70 = t;
  t = SSL_printnl(y_70, z_70);
  t = term_b_18;
  a_71 = t;
  t = SSL_exit(a_71);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_n_42;
  t = get_config_0_0(t);
  return(t);
}
ATerm w_9 (ATerm i_52, ATerm j_52, ATerm t)
{
  ATerm o_42 = t;
  int p_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_52, j_52);
      ;
      LocalPopChoice(p_42);
    }
  else
    {
      t = o_42;
      t = SSL_addr(i_52, j_52);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_122 (ATerm), ATerm j_122 (ATerm), ATerm t)
{
  ATerm q_42 = t;
  int r_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_122(t);
      ;
      LocalPopChoice(r_42);
    }
  else
    {
      t = q_42;
      {
        ATerm d_71 = NULL,e_71 = NULL,h_71 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_71 = ATgetFirst((ATermList) t);
            e_71 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_71;
        t = foldr_2_0(i_122, j_122, t);
        h_71 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_71, h_71);
        t = j_122(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm k_16 (ATerm t)
{
  t = term_o_21;
  return(t);
}
ATerm l_16 (ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL;
  if(match_cons(t, sym__2))
    {
      t_14 = ATgetArgument(t, 0);
      u_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9(t_14, u_14, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_71 = NULL,o_14 = NULL,p_14 = NULL;
  t = times_0_0(t);
  o_14 = t;
  t = SSL_explode_term(o_14);
  if(match_cons(t, sym__2))
    {
      ATerm s_42 = ATgetArgument(t, 0);
      p_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_14;
  t = foldr_2_0(k_16, l_16, t);
  k_71 = t;
  t = SSL_TicksToSeconds(k_71);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_71 = NULL,w_71 = NULL,x_71 = NULL;
  v_71 = t;
  if(match_cons(t, sym__2))
    {
      w_71 = ATgetArgument(t, 0);
      x_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_42 = t;
    int w_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_71;
        if((w_71 != t))
          {
            _fail(t);
          }
        t = v_71;
        ;
        LocalPopChoice(w_42);
      }
    else
      {
        t = v_42;
        t = (ATerm) ATmakeAppl(sym__2, w_71, x_71);
        {
          ATerm x_42 = t;
          int g_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_71, x_71);
              ;
              LocalPopChoice(g_43);
            }
          else
            {
              t = x_42;
              t = SSL_gtr(w_71, x_71);
            }
          t = (ATerm) ATmakeAppl(sym__2, w_71, x_71);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_134 (ATerm), ATerm t)
{
  ATerm j_43 = t;
  int k_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_72 = NULL,c_72 = NULL;
      a_72 = t;
      t = term_r_40;
      t = get_config_0_0(t);
      c_72 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_72, term_b_18);
      t = geq_0_0(t);
      t = a_72;
      t = v_134(t);
      ;
      LocalPopChoice(k_43);
    }
  else
    {
      t = j_43;
    }
  return(t);
}
ATerm m_16 (ATerm t)
{
  ATerm e_72 = NULL,f_72 = NULL,g_72 = NULL,h_72 = NULL;
  t = run_time_0_0(t);
  e_72 = t;
  t = term_x_17;
  t = whoami_0_0(t);
  f_72 = t;
  t = term_y_17;
  g_72 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_43), e_72), term_l_43), f_72);
  h_72 = t;
  t = SSL_printnl(g_72, h_72);
  t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_43), e_72), term_l_43), f_72));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_16, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm i_72 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_21;
  i_72 = t;
  t = SSL_exit(i_72);
  return(t);
}
ATerm n_16 (ATerm t)
{
  ATerm y_43 = t;
  int z_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(z_43);
    }
  else
    {
      t = y_43;
      {
        ATerm b_44 = t;
        int c_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(c_44);
          }
        else
          {
            t = b_44;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm l_137 (ATerm), ATerm t)
{
  ATerm d_44 = t;
  int e_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_44;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_44);
    }
  else
    {
      t = d_44;
      t = fetch_1_0(n_16, t);
    }
  t = l_137(t);
  return(t);
}
ATerm map_1_0 (ATerm s_117 (ATerm), ATerm t)
{
  ATerm j_72 (ATerm t)
  {
    ATerm g_44 = t;
    int h_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(h_44);
      }
    else
      {
        t = g_44;
        t = Cons_2_0(s_117, j_72, t);
      }
    return(t);
  }
  t = j_72(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm l_72 = NULL,m_72 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_72 = ATgetFirst((ATermList) t);
      m_72 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_72 = NULL,r_72 = NULL;
        t = m_72;
        t = g_0(t);
        q_72 = t;
        t = l_72;
        t = f_0(t);
        r_72 = t;
        t = m_72;
        {
          ATerm o_16 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(q_72), r_72);
            return(t);
          }
          t = reverse_acc_2_0(f_0, o_16, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_17;
      t = g_0(t);
    }
  return(t);
}
ATerm y_9 (ATerm v_55, ATerm w_55, ATerm t)
{
  t = SSL_table_get(v_55, w_55);
  return(t);
}
ATerm Program_1_0 (ATerm y_108 (ATerm), ATerm t)
{
  ATerm s_72 = NULL,t_72 = NULL,u_72 = NULL,v_72 = NULL,y_2 = NULL,z_2 = NULL;
  v_72 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_72);
  s_72 = t;
  t = t_72;
  t = y_108(t);
  u_72 = t;
  z_2 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_72);
  y_2 = t;
  t = SSLsetAnnotations(y_2, s_72);
  return(t);
}
ATerm p_16 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm q_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_16 (ATerm t)
{
  ATerm a_73 = NULL;
  a_73 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_73), term_q_44);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_72 = NULL,z_72 = NULL;
  ATerm r_44 = t;
  int v_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_42;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_44);
    }
  else
    {
      t = r_44;
      t = fetch_1_0(p_16, t);
    }
  t = term_z_44;
  t = echo_0_0(t);
  t = term_y_41;
  y_72 = t;
  t = term_z_41;
  z_72 = t;
  t = term_a_45;
  t = y_9(y_72, z_72, t);
  t = reverse_acc_2_0(_id, q_16, t);
  t = map_1_0(r_16, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm z_108 (ATerm), ATerm t)
{
  ATerm b_73 = NULL,c_73 = NULL,d_73 = NULL,e_73 = NULL,c_3 = NULL,d_3 = NULL;
  e_73 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      c_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_73);
  b_73 = t;
  t = c_73;
  t = z_108(t);
  d_73 = t;
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, d_73);
  c_3 = t;
  t = SSLsetAnnotations(c_3, b_73);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_73 = NULL,j_73 = NULL,k_73 = NULL;
  i_73 = t;
  {
    ATerm d_45 = t;
    int e_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_73;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_45 = ATgetFirst((ATermList) t);
                ATerm g_45 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_73;
          }
        ;
        LocalPopChoice(e_45);
      }
    else
      {
        t = d_45;
        t = (ATerm) ATinsert(ATempty, i_73);
      }
    j_73 = t;
    t = term_d_38;
    k_73 = t;
    t = SSL_printnl(k_73, j_73);
    t = i_73;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_n_42;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm s_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_16 (ATerm t)
{
  ATerm v_73 = NULL,w_73 = NULL;
  t = term_i_45;
  v_73 = t;
  t = term_x_17;
  w_73 = t;
  t = term_j_45;
  t = b_10(v_73, w_73, t);
  return(t);
}
ATerm v_16 (ATerm t)
{
  t = term_k_45;
  return(t);
}
ATerm w_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_16 (ATerm t)
{
  ATerm x_73 = NULL,y_73 = NULL,z_73 = NULL,a_74 = NULL;
  t = term_i_45;
  x_73 = t;
  t = term_x_17;
  y_73 = t;
  t = term_j_45;
  t = b_10(x_73, y_73, t);
  t = term_l_45;
  z_73 = t;
  t = term_x_17;
  a_74 = t;
  t = term_m_45;
  t = b_10(z_73, a_74, t);
  t = term_n_45;
  return(t);
}
ATerm y_16 (ATerm t)
{
  t = term_o_45;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_45 = t;
  int s_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_16, u_16, v_16, t);
      ;
      LocalPopChoice(s_45);
    }
  else
    {
      t = r_45;
      t = Option_3_0(w_16, x_16, y_16, t);
    }
  return(t);
}
ATerm z_16 (ATerm t)
{
  ATerm d_74 = NULL,e_74 = NULL;
  d_74 = t;
  t = term_n_42;
  e_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_42, d_74);
  t = b_10(e_74, d_74, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, d_74);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_139 (ATerm), ATerm t)
{
  ATerm c_74 = NULL;
  c_74 = t;
  {
    ATerm x_45 = t;
    int y_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_45;
        t = o_139(t);
        ;
        LocalPopChoice(y_45);
      }
    else
      {
        t = x_45;
      }
    t = c_74;
    {
      ATerm a_17 (ATerm t)
      {
        ATerm a_46 = t;
        int c_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_46 = t;
            int e_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(e_46);
              }
            else
              {
                t = d_46;
                t = o_139(t);
                t = Cons_2_0(_id, a_17, t);
              }
            ;
            LocalPopChoice(c_46);
          }
        else
          {
            t = a_46;
            {
              ATerm g_74 = NULL,h_74 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_74 = ATgetFirst((ATermList) t);
                  h_74 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(h_74), (ATerm) ATmakeAppl(sym_Undefined_1, g_74));
            }
          }
        return(t);
      }
      t = Cons_2_0(z_16, a_17, t);
    }
  }
  return(t);
}
ATerm c_17 (ATerm t)
{
  ATerm x_74 = NULL;
  x_74 = t;
  if(match_string(t, "--help"))
    {
      t = x_74;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_74;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_74;
        }
    }
  return(t);
}
ATerm d_17 (ATerm t)
{
  ATerm y_74 = NULL,z_74 = NULL;
  t = term_f_44;
  y_74 = t;
  t = term_x_17;
  z_74 = t;
  t = term_f_46;
  t = b_10(y_74, z_74, t);
  t = term_g_46;
  return(t);
}
ATerm e_17 (ATerm t)
{
  t = term_h_46;
  return(t);
}
ATerm f_17 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_139 (ATerm), ATerm t)
{
  ATerm o_74 = NULL,p_74 = NULL,q_74 = NULL,r_74 = NULL,s_74 = NULL,v_74 = NULL,w_74 = NULL;
  o_74 = t;
  t = term_y_41;
  r_74 = t;
  t = term_z_41;
  s_74 = t;
  t = (ATerm) ATempty;
  v_74 = t;
  t = SSL_table_put(r_74, s_74, v_74);
  t = o_74;
  {
    ATerm b_17 (ATerm t)
    {
      ATerm j_46 = t;
      int m_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_139(t);
          ;
          LocalPopChoice(m_46);
        }
      else
        {
          t = j_46;
          {
            ATerm n_46 = t;
            int o_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_17, d_17, e_17, t);
                ;
                LocalPopChoice(o_46);
              }
            else
              {
                t = n_46;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_17, t);
    {
      ATerm p_46 = t;
      int q_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_75 = NULL;
          l_75 = t;
          {
            ATerm r_46 = t;
            int s_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_15 = NULL;
                t = l_75;
                {
                  ATerm t_46 = t;
                  int u_46 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_f_44;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(u_46);
                    }
                  else
                    {
                      t = t_46;
                      t = fetch_1_0(f_17, t);
                    }
                  t = l_75;
                  t = default_system_usage_0_0(t);
                  t = term_o_21;
                  p_15 = t;
                  t = SSL_exit(p_15);
                }
                ;
                LocalPopChoice(s_46);
              }
            else
              {
                t = r_46;
                {
                  ATerm u_15 = NULL;
                  t = term_i_45;
                  t = get_config_0_0(t);
                  t = l_75;
                  t = default_system_about_0_0(t);
                  t = term_o_21;
                  u_15 = t;
                  t = SSL_exit(u_15);
                }
              }
          }
          ;
          LocalPopChoice(q_46);
        }
      else
        {
          t = p_46;
          {
            ATerm w_46 = t;
            int x_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_75 = NULL,n_75 = NULL,o_75 = NULL;
                ATerm g_17 (ATerm t)
                {
                  ATerm h_17 (ATerm t)
                  {
                    if(((p_74 != NULL) && (p_74 != t)))
                      _fail(t);
                    else
                      p_74 = t;
                    return(t);
                  }
                  t = Undefined_1_0(h_17, t);
                  return(t);
                }
                t = fetch_1_0(g_17, t);
                t = term_y_17;
                m_75 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_74)), term_a_47);
                n_75 = t;
                t = SSL_printnl(m_75, n_75);
                t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_74)), term_a_47));
                t = default_system_usage_0_0(t);
                t = term_b_18;
                o_75 = t;
                t = SSL_exit(o_75);
                ;
                LocalPopChoice(x_46);
              }
            else
              {
                t = w_46;
              }
          }
        }
      q_74 = t;
      t = term_y_41;
      w_74 = t;
      t = SSL_table_destroy(w_74);
      t = q_74;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_137 (ATerm), ATerm o_137 (ATerm), ATerm p_137 (ATerm), ATerm q_137 (ATerm), ATerm t)
{
  ATerm r_75 = NULL,s_75 = NULL,t_75 = NULL,u_75 = NULL;
  t = parse_options_1_0(n_137, t);
  r_75 = t;
  t = term_b_47;
  s_75 = t;
  t = SSL_table_create(s_75);
  t = term_b_47;
  t_75 = t;
  t = term_c_47;
  u_75 = t;
  t = SSL_table_put(t_75, u_75, r_75);
  t = r_75;
  t = p_137(t);
  {
    ATerm d_47 = t;
    int e_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_137, t);
        ;
        LocalPopChoice(e_47);
      }
    else
      {
        t = d_47;
        {
          ATerm f_47 = t;
          int i_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_137(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(i_47);
            }
          else
            {
              t = f_47;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm j_17 (ATerm t)
{
  t = if_verbose2_1_0(o_17, t);
  return(t);
}
ATerm l_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_17 (ATerm t)
{
  ATerm v_75 = NULL,w_75 = NULL;
  t = term_j_47;
  v_75 = t;
  t = term_x_17;
  w_75 = t;
  t = term_k_47;
  t = b_10(v_75, w_75, t);
  t = term_m_47;
  return(t);
}
ATerm n_17 (ATerm t)
{
  t = term_n_47;
  return(t);
}
ATerm o_17 (ATerm t)
{
  ATerm x_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL;
  x_75 = t;
  t = term_n_42;
  t = get_config_0_0(t);
  y_75 = t;
  t = term_y_17;
  z_75 = t;
  t = (ATerm) ATinsert(ATempty, y_75);
  a_76 = t;
  t = SSL_printnl(z_75, a_76);
  t = x_75;
  return(t);
}
ATerm iowrap_3_0 (ATerm w_136 (ATerm), ATerm x_136 (ATerm), ATerm y_136 (ATerm), ATerm t)
{
  ATerm i_17 (ATerm t)
  {
    ATerm o_47 = t;
    int p_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_136(t);
        ;
        LocalPopChoice(p_47);
      }
    else
      {
        t = o_47;
        {
          ATerm q_47 = t;
          int r_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(r_47);
            }
          else
            {
              t = q_47;
              {
                ATerm s_47 = t;
                int t_47 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(t_47);
                  }
                else
                  {
                    t = s_47;
                    {
                      ATerm v_47 = t;
                      int w_47 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(l_17, m_17, n_17, t);
                          ;
                          LocalPopChoice(w_47);
                        }
                      else
                        {
                          t = v_47;
                          {
                            ATerm z_47 = t;
                            int c_48 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(c_48);
                              }
                            else
                              {
                                t = z_47;
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
  ATerm k_17 (ATerm t)
  {
    ATerm b_76 = NULL,c_76 = NULL,d_76 = NULL;
    b_76 = t;
    {
      ATerm d_48 = t;
      int e_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_17 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((c_76 != NULL) && (c_76 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_76 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(q_17, t);
          ;
          LocalPopChoice(e_48);
        }
      else
        {
          t = d_48;
          t = term_g_48;
          c_76 = t;
        }
      t = not_null(c_76);
      t = ReadFromFile_0_0(t);
      d_76 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_76, d_76);
      t = apply_strategy_1_0(w_136, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(i_17, y_136, j_17, k_17, t);
  return(t);
}
ATerm r_17 (ATerm t)
{
  t = _2_0(_id, s_17, t);
  return(t);
}
ATerm s_17 (ATerm t)
{
  ATerm e_76 = NULL,f_76 = NULL;
  t = Specification_1_0(t_17, t);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm h_48 = ATgetArgument(t, 0);
      if(((ATgetType(h_48) == AT_LIST) && !(ATisEmpty(h_48))))
        {
          e_76 = ATgetFirst((ATermList) h_48);
          {
            ATerm i_48 = (ATerm) ATgetNext((ATermList) h_48);
            if(((ATgetType(i_48) == AT_LIST) && !(ATisEmpty(i_48))))
              {
                ATerm m_48 = ATgetFirst((ATermList) i_48);
                if(match_cons(m_48, sym_Strategies_1))
                  {
                    f_76 = ATgetArgument(m_48, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm n_48 = (ATerm) ATgetNext((ATermList) i_48);
                  if(((ATgetType(n_48) != AT_LIST) || !(ATisEmpty(n_48))))
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
  t = y_7(e_76, f_76, t);
  return(t);
}
ATerm t_17 (ATerm t)
{
  t = Cons_2_0(_id, u_17, t);
  return(t);
}
ATerm u_17 (ATerm t)
{
  t = Cons_2_0(v_17, w_17, t);
  return(t);
}
ATerm v_17 (ATerm t)
{
  t = Strategies_1_0(needed_defs_0_0, t);
  return(t);
}
ATerm w_17 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(r_17, _fail, default_usage_0_0, t);
  return(t);
}
