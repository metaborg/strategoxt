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
ATerm term_u_66;
ATerm term_f_66;
ATerm term_e_66;
ATerm term_d_66;
ATerm term_y_65;
ATerm term_x_65;
ATerm term_w_65;
ATerm term_f_65;
ATerm term_e_65;
ATerm term_z_64;
ATerm term_u_64;
ATerm term_t_64;
ATerm term_s_64;
ATerm term_r_64;
ATerm term_q_64;
ATerm term_p_64;
ATerm term_i_64;
ATerm term_d_64;
ATerm term_y_63;
ATerm term_r_63;
ATerm term_q_63;
ATerm term_a_63;
ATerm term_z_62;
ATerm term_y_62;
ATerm term_x_62;
ATerm term_s_62;
ATerm term_r_62;
ATerm term_q_62;
ATerm term_p_62;
ATerm term_k_62;
ATerm term_j_62;
ATerm term_i_62;
ATerm term_h_62;
ATerm term_g_62;
ATerm term_f_62;
ATerm term_e_62;
ATerm term_d_62;
ATerm term_c_62;
ATerm term_z_61;
ATerm term_w_61;
ATerm term_t_61;
ATerm term_i_61;
ATerm term_h_61;
ATerm term_r_60;
ATerm term_o_60;
ATerm term_l_60;
ATerm term_k_60;
ATerm term_j_60;
ATerm term_i_60;
ATerm term_h_60;
ATerm term_g_60;
ATerm term_j_59;
ATerm term_e_59;
ATerm term_x_58;
ATerm term_f_55;
ATerm term_c_55;
ATerm term_z_49;
ATerm term_e_49;
ATerm term_r_48;
ATerm term_q_48;
ATerm term_p_48;
ATerm term_y_47;
ATerm term_e_46;
ATerm term_a_46;
ATerm term_z_45;
ATerm term_y_45;
ATerm term_k_45;
ATerm term_s_42;
ATerm term_a_38;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_f_37;
ATerm term_b_36;
ATerm term_z_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_o_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_z_17;
void init_constant_terms (void)
{
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorNeeded", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("z_1", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(sym_Defined_1, term_v_35);
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("w_1", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(sym_Defined_1, term_z_35);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(sym_Op_2, term_p_48, (ATerm) ATempty);
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(sym_ConstType_1, term_q_48);
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_f_55));
  term_f_55 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_x_58));
  term_x_58 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_e_59));
  term_e_59 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_j_59));
  term_j_59 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_g_60));
  term_g_60 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_h_60));
  term_h_60 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_i_60));
  term_i_60 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_j_60));
  term_j_60 = (ATerm) ATmakeAppl(sym__2, term_s_42, term_s_42);
  ATprotect(&(term_k_60));
  term_k_60 = (ATerm) ATmakeAppl(sym__2, term_i_60, term_j_60);
  ATprotect(&(term_l_60));
  term_l_60 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_60));
  term_o_60 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_60));
  term_r_60 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_61));
  term_h_61 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_61));
  term_i_61 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_t_61));
  term_t_61 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_61));
  term_w_61 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_61));
  term_z_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_62));
  term_c_62 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_62));
  term_d_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_62));
  term_e_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_62));
  term_f_62 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_42);
  ATprotect(&(term_g_62));
  term_g_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_62));
  term_h_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_62));
  term_i_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_62));
  term_j_62 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_62));
  term_k_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_62));
  term_p_62 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_62));
  term_q_62 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_62));
  term_r_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_62));
  term_s_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_62));
  term_x_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_62));
  term_y_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_62));
  term_z_62 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_63));
  term_a_63 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_63));
  term_q_63 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_63));
  term_r_63 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_63));
  term_y_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_64));
  term_d_64 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_64));
  term_i_64 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_64));
  term_p_64 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_64));
  term_q_64 = (ATerm) ATmakeAppl(sym__3, term_t_61, term_p_64, term_z_17);
  ATprotect(&(term_r_64));
  term_r_64 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_64));
  term_s_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_64));
  term_t_64 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_64));
  term_u_64 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_64));
  term_z_64 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_65));
  term_e_65 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_65));
  term_f_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_65));
  term_w_65 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_65));
  term_x_65 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_65));
  term_y_65 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_66));
  term_d_66 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_66));
  term_e_66 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_66));
  term_f_66 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_66));
  term_u_66 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm ConstructorNeeded_0_0 (ATerm);
ATerm filter_1_0 (ATerm m_123 (ATerm), ATerm);
ATerm Constructors_1_0 (ATerm w_96 (ATerm), ATerm);
ATerm Signature_1_0 (ATerm a_96 (ATerm), ATerm);
ATerm c_19 (ATerm);
ATerm d_19 (ATerm);
ATerm DeclareConstructorNeeded_0_0 (ATerm);
ATerm i_19 (ATerm);
ATerm j_19 (ATerm);
ATerm l_19 (ATerm);
ATerm s_19 (ATerm);
ATerm t_19 (ATerm);
ATerm needed_constructors_0_0 (ATerm);
ATerm MissingDef_0_0 (ATerm);
ATerm MissingDefMod_0_0 (ATerm);
ATerm giving_up_0_0 (ATerm);
ATerm w_19 (ATerm);
ATerm DefinitionExists_0_0 (ATerm);
ATerm Rec_2_0 (ATerm e_101 (ATerm), ATerm f_101 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm z_102 (ATerm), ATerm a_103 (ATerm), ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm);
ATerm Let_2_0 (ATerm h_100 (ATerm), ATerm i_100 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm l_110 (ATerm), ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm);
ATerm x_19 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm split_2_0 (ATerm s_114 (ATerm), ATerm t_114 (ATerm), ATerm);
ATerm z_19 (ATerm);
ATerm c_20 (ATerm);
ATerm d_20 (ATerm);
ATerm i_20 (ATerm);
ATerm m_20 (ATerm);
ATerm p_20 (ATerm);
ATerm w_20 (ATerm);
ATerm y_20 (ATerm);
ATerm free_vars2_4_0 (ATerm t_125 (ATerm), ATerm u_125 (ATerm), ATerm v_125 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm w_125 (ATerm), ATerm);
ATerm z_20 (ATerm);
ATerm a_21 (ATerm);
ATerm b_21 (ATerm);
ATerm e_21 (ATerm);
ATerm f_21 (ATerm);
ATerm h_21 (ATerm);
ATerm k_21 (ATerm);
ATerm o_21 (ATerm);
ATerm p_21 (ATerm);
ATerm r_21 (ATerm);
ATerm s_21 (ATerm);
ATerm t_21 (ATerm);
ATerm svars_arity_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm alltd_1_0 (ATerm y_112 (ATerm), ATerm);
ATerm u_21 (ATerm);
ATerm v_21 (ATerm);
ATerm z_21 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm p_110 (ATerm), ATerm q_110 (ATerm), ATerm);
ATerm VarDec_2_0 (ATerm s_102 (ATerm), ATerm t_102 (ATerm), ATerm);
ATerm b_22 (ATerm);
ATerm c_22 (ATerm);
ATerm d_22 (ATerm);
ATerm e_22 (ATerm);
ATerm g_22 (ATerm);
ATerm k_22 (ATerm);
ATerm n_22 (ATerm);
ATerm o_22 (ATerm);
ATerm p_22 (ATerm);
ATerm q_22 (ATerm);
ATerm JoinDefs2_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm As_2_0 (ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm n_100 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm h_97 (ATerm), ATerm i_97 (ATerm), ATerm);
ATerm Op_2_0 (ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm n_140 (ATerm), ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm x_24 (ATerm);
ATerm y_24 (ATerm);
ATerm z_24 (ATerm);
ATerm a_25 (ATerm);
ATerm b_25 (ATerm);
ATerm k_25 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm l_25 (ATerm);
ATerm s_25 (ATerm);
ATerm t_25 (ATerm);
ATerm a_26 (ATerm);
ATerm b_26 (ATerm);
ATerm c_26 (ATerm);
ATerm f_26 (ATerm);
ATerm g_26 (ATerm);
ATerm LiftCallArgs_0_0 (ATerm);
ATerm a_31 (ATerm q_30, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm Var_1_0 (ATerm x_96 (ATerm), ATerm);
ATerm l_26 (ATerm);
ATerm n_26 (ATerm);
ATerm o_26 (ATerm);
ATerm r_26 (ATerm);
ATerm s_26 (ATerm);
ATerm t_26 (ATerm);
ATerm u_26 (ATerm);
ATerm z_26 (ATerm);
ATerm a_27 (ATerm);
ATerm b_27 (ATerm);
ATerm c_27 (ATerm);
ATerm d_27 (ATerm);
ATerm e_27 (ATerm);
ATerm f_27 (ATerm);
ATerm i_27 (ATerm);
ATerm l_27 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm repeat_1_0 (ATerm s_127 (ATerm), ATerm);
ATerm o_27 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm App_2_0 (ATerm l_97 (ATerm), ATerm m_97 (ATerm), ATerm);
ATerm Con_3_0 (ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm);
ATerm p_27 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm Scope_2_0 (ATerm r_100 (ATerm), ATerm s_100 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm k_112 (ATerm), ATerm);
ATerm Rcon_0_0 (ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm g_111 (ATerm), ATerm);
ATerm t_27 (ATerm);
ATerm u_27 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm w_27 (ATerm);
ATerm x_27 (ATerm);
ATerm y_27 (ATerm);
ATerm tuple_unzip_1_0 (ATerm i_115 (ATerm), ATerm);
ATerm MkDistApplication_0_0 (ATerm);
ATerm z_27 (ATerm);
ATerm a_28 (ATerm);
ATerm copy_1_0 (ATerm m_122 (ATerm), ATerm);
ATerm MkThreadApplication_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm q_39 (ATerm v_37, ATerm w_37, ATerm x_37, ATerm y_37, ATerm);
ATerm s_39 (ATerm t_38, ATerm u_38, ATerm v_38, ATerm w_38, ATerm);
ATerm f_28 (ATerm);
ATerm h_28 (ATerm);
ATerm i_28 (ATerm);
ATerm DefineCongruence_0_0 (ATerm);
ATerm CongruenceDef_0_0 (ATerm);
ATerm j_28 (ATerm);
ATerm get_definition_0_0 (ATerm);
ATerm at_end_1_0 (ATerm x_117 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm a_41 (ATerm s_40, ATerm);
ATerm conc_0_0 (ATerm);
ATerm diff_1_0 (ATerm e_119 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm s_115 (ATerm), ATerm t_115 (ATerm), ATerm u_115 (ATerm), ATerm v_115 (ATerm), ATerm);
ATerm q_28 (ATerm);
ATerm s_28 (ATerm);
ATerm t_28 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm u_28 (ATerm);
ATerm v_28 (ATerm);
ATerm w_28 (ATerm);
ATerm a_29 (ATerm);
ATerm c_29 (ATerm);
ATerm d_29 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm GnNextChangeGraph_3_0 (ATerm j_140 (ATerm), ATerm k_140 (ATerm), ATerm l_140 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm h_128 (ATerm), ATerm i_128 (ATerm), ATerm);
ATerm for_3_0 (ATerm k_128 (ATerm), ATerm l_128 (ATerm), ATerm m_128 (ATerm), ATerm);
ATerm e_29 (ATerm);
ATerm f_29 (ATerm);
ATerm g_29 (ATerm);
ATerm h_29 (ATerm);
ATerm i_29 (ATerm);
ATerm j_29 (ATerm);
ATerm k_29 (ATerm);
ATerm extract_needed_defs_0_0 (ATerm);
ATerm assert_1_0 (ATerm i_123 (ATerm), ATerm);
ATerm union_1_0 (ATerm j_119 (ATerm), ATerm);
ATerm Arities_0_0 (ATerm);
ATerm n_46 (ATerm d_46, ATerm);
ATerm Definitions_0_0 (ATerm);
ATerm foldr_3_0 (ATerm z_121 (ATerm), ATerm a_122 (ATerm), ATerm b_122 (ATerm), ATerm);
ATerm m_29 (ATerm);
ATerm n_29 (ATerm);
ATerm o_29 (ATerm);
ATerm p_29 (ATerm);
ATerm q_29 (ATerm);
ATerm r_29 (ATerm);
ATerm y_29 (ATerm);
ATerm z_29 (ATerm);
ATerm a_30 (ATerm);
ATerm RegisterSDefT_0_0 (ATerm);
ATerm needed_defs_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm z_95 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm v_95 (ATerm), ATerm w_95 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm e_96 (ATerm), ATerm);
ATerm _2_0 (ATerm g_91 (ATerm), ATerm h_91 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm a_133 (ATerm), ATerm);
ATerm r_30 (ATerm);
ATerm u_30 (ATerm);
ATerm v_30 (ATerm);
ATerm w_30 (ATerm);
ATerm y_30 (ATerm);
ATerm z_30 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm c_136 (ATerm), ATerm);
ATerm u_50 (ATerm i_50, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm e_31 (ATerm);
ATerm f_31 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm r_117 (ATerm), ATerm);
ATerm g_31 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm l_134 (ATerm), ATerm);
ATerm i_31 (ATerm);
ATerm j_31 (ATerm);
ATerm k_31 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm l_31 (ATerm);
ATerm m_31 (ATerm);
ATerm n_31 (ATerm);
ATerm o_31 (ATerm);
ATerm p_31 (ATerm);
ATerm q_31 (ATerm);
ATerm r_31 (ATerm);
ATerm s_31 (ATerm);
ATerm t_31 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm u_31 (ATerm);
ATerm v_31 (ATerm);
ATerm w_31 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm x_31 (ATerm);
ATerm y_31 (ATerm);
ATerm z_31 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm x_121 (ATerm), ATerm y_121 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm a_32 (ATerm);
ATerm b_32 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm k_134 (ATerm), ATerm);
ATerm c_32 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm d_32 (ATerm);
ATerm need_help_1_0 (ATerm a_137 (ATerm), ATerm);
ATerm map_1_0 (ATerm h_117 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm n_108 (ATerm), ATerm);
ATerm f_32 (ATerm);
ATerm g_32 (ATerm);
ATerm h_32 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm o_108 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm i_32 (ATerm);
ATerm j_32 (ATerm);
ATerm k_32 (ATerm);
ATerm l_32 (ATerm);
ATerm m_32 (ATerm);
ATerm n_32 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm o_32 (ATerm);
ATerm parse_options_p__1_0 (ATerm d_139 (ATerm), ATerm);
ATerm r_32 (ATerm);
ATerm s_32 (ATerm);
ATerm t_32 (ATerm);
ATerm u_32 (ATerm);
ATerm parse_options_1_0 (ATerm c_139 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm c_137 (ATerm), ATerm d_137 (ATerm), ATerm e_137 (ATerm), ATerm f_137 (ATerm), ATerm);
ATerm y_32 (ATerm);
ATerm a_33 (ATerm);
ATerm b_33 (ATerm);
ATerm c_33 (ATerm);
ATerm d_33 (ATerm);
ATerm iowrap_3_0 (ATerm l_136 (ATerm), ATerm m_136 (ATerm), ATerm n_136 (ATerm), ATerm);
ATerm j_33 (ATerm);
ATerm r_33 (ATerm);
ATerm s_33 (ATerm);
ATerm b_34 (ATerm);
ATerm c_34 (ATerm);
ATerm d_34 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL,h_0 = NULL,p_0 = NULL,q_0 = NULL,s_0 = NULL,t_0 = NULL,u_0 = NULL;
  c_0 = t;
  t = term_z_17;
  t = whoami_0_0(t);
  e_0 = t;
  q_0 = t;
  t = term_e_34;
  h_0 = t;
  t = q_0;
  s_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_34), e_0), term_f_34);
  p_0 = t;
  t = SSL_printnl(h_0, p_0);
  u_0 = t;
  t = term_l_34;
  t_0 = t;
  t = SSL_exit(t_0);
  t = c_0;
  return(t);
}
ATerm ConstructorNeeded_0_0 (ATerm t)
{
  ATerm m_1 = NULL,n_1 = NULL,q_1 = NULL;
  m_1 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      n_1 = ATgetArgument(t, 0);
      q_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_34 = t;
    int n_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_2 = NULL,v_0 = NULL,w_0 = NULL,x_0 = NULL,y_0 = NULL;
        t = term_o_34;
        x_0 = t;
        t = term_o_34;
        v_0 = t;
        t = x_0;
        y_0 = t;
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, n_1, (ATerm) ATempty);
        w_0 = t;
        t = SSL_table_get(v_0, w_0);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_2 = ATgetFirst((ATermList) t);
            {
              ATerm p_34 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = u_2;
        if(match_cons(t, sym_Defined_1))
          {
            ATerm q_34 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_34) != ATmakeSymbol("z_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, n_1, q_1);
        ;
        LocalPopChoice(n_34);
      }
    else
      {
        t = m_34;
        {
          ATerm z_4 = NULL,z_0 = NULL,a_1 = NULL,b_1 = NULL,c_1 = NULL;
          t = term_o_34;
          b_1 = t;
          t = term_o_34;
          z_0 = t;
          t = b_1;
          c_1 = t;
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, n_1, (ATerm) ATempty);
          a_1 = t;
          t = SSL_table_get(z_0, a_1);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_4 = ATgetFirst((ATermList) t);
              {
                ATerm x_34 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = z_4;
          if(match_cons(t, sym_Defined_1))
            {
              ATerm y_34 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) y_34) != ATmakeSymbol("w_1", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, n_1, q_1);
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm m_123 (ATerm), ATerm t)
{
  ATerm k_35 = t;
  int l_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(l_35);
    }
  else
    {
      t = k_35;
      {
        ATerm m_35 = t;
        int n_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_18 (ATerm t)
            {
              t = filter_1_0(m_123, t);
              return(t);
            }
            t = Cons_2_0(m_123, y_18, t);
            ;
            LocalPopChoice(n_35);
          }
        else
          {
            t = m_35;
            {
              ATerm x_1 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm r_35 = ATgetFirst((ATermList) t);
                  x_1 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = x_1;
              t = filter_1_0(m_123, t);
            }
          }
      }
    }
  return(t);
}
ATerm Constructors_1_0 (ATerm w_96 (ATerm), ATerm t)
{
  ATerm a_2 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL,d_1 = NULL,e_1 = NULL;
  d_2 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      b_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_2);
  a_2 = t;
  t = b_2;
  t = w_96(t);
  c_2 = t;
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym_Constructors_1, c_2);
  d_1 = t;
  t = SSLsetAnnotations(d_1, a_2);
  return(t);
}
ATerm Signature_1_0 (ATerm a_96 (ATerm), ATerm t)
{
  ATerm g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL,f_1 = NULL,g_1 = NULL;
  j_2 = t;
  if(match_cons(t, sym_Signature_1))
    {
      h_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_2);
  g_2 = t;
  t = h_2;
  t = a_96(t);
  i_2 = t;
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, i_2);
  f_1 = t;
  t = SSLsetAnnotations(f_1, g_2);
  return(t);
}
ATerm c_19 (ATerm t)
{
  t = term_o_34;
  return(t);
}
ATerm d_19 (ATerm t)
{
  t = term_o_34;
  return(t);
}
ATerm DeclareConstructorNeeded_0_0 (ATerm t)
{
  ATerm n_2 = NULL,o_2 = NULL;
  n_2 = t;
  {
    ATerm s_35 = t;
    int t_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Cong_2))
          {
            o_2 = ATgetArgument(t, 0);
            {
              ATerm u_35 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(t_35);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, o_2, (ATerm) ATempty), term_w_35);
        t = assert_1_0(c_19, t);
        t = n_2;
      }
    else
      {
        t = s_35;
        if(match_cons(t, sym_Op_2))
          {
            o_2 = ATgetArgument(t, 0);
            {
              ATerm x_35 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, o_2, (ATerm) ATempty), term_b_36);
        t = assert_1_0(d_19, t);
        t = n_2;
      }
  }
  return(t);
}
ATerm i_19 (ATerm t)
{
  ATerm d_36 = t;
  int e_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareConstructorNeeded_0_0(t);
      ;
      LocalPopChoice(e_36);
    }
  else
    {
      t = d_36;
    }
  return(t);
}
ATerm j_19 (ATerm t)
{
  t = Cons_2_0(l_19, s_19, t);
  return(t);
}
ATerm l_19 (ATerm t)
{
  t = Constructors_1_0(t_19, t);
  return(t);
}
ATerm s_19 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm t_19 (ATerm t)
{
  t = filter_1_0(ConstructorNeeded_0_0, t);
  return(t);
}
ATerm needed_constructors_0_0 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,y_2 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm h_36 = ATgetArgument(t, 0);
      if(((ATgetType(h_36) == AT_LIST) && !(ATisEmpty(h_36))))
        {
          w_2 = ATgetFirst((ATermList) h_36);
          {
            ATerm j_36 = (ATerm) ATgetNext((ATermList) h_36);
            if(((ATgetType(j_36) == AT_LIST) && !(ATisEmpty(j_36))))
              {
                ATerm k_36 = ATgetFirst((ATermList) j_36);
                if(match_cons(k_36, sym_Strategies_1))
                  {
                    x_2 = ATgetArgument(k_36, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm o_36 = (ATerm) ATgetNext((ATermList) j_36);
                  if(((ATgetType(o_36) != AT_LIST) || !(ATisEmpty(o_36))))
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
  t = x_2;
  t = topdown_1_0(i_19, t);
  t = w_2;
  t = Signature_1_0(j_19, t);
  y_2 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, x_2)), y_2));
  return(t);
}
ATerm MissingDef_0_0 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL,k_1 = NULL;
  if(match_cons(t, sym__2))
    {
      z_2 = ATgetArgument(t, 0);
      a_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  j_1 = t;
  t = term_e_34;
  h_1 = t;
  t = j_1;
  k_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_37), a_3), term_g_37), z_2), term_f_37);
  i_1 = t;
  t = SSL_printnl(h_1, i_1);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_37), a_3), term_g_37), z_2), term_f_37);
  return(t);
}
ATerm MissingDefMod_0_0 (ATerm t)
{
  ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL,l_1 = NULL,o_1 = NULL,p_1 = NULL,r_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_37 = ATgetArgument(t, 0);
      if(match_cons(k_37, sym_Mod_2))
        {
          b_3 = ATgetArgument(k_37, 0);
          c_3 = ATgetArgument(k_37, 1);
        }
      else
        _fail(t);
      d_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  p_1 = t;
  t = term_e_34;
  l_1 = t;
  t = p_1;
  r_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_37), d_3), term_g_37), c_3), term_l_37), b_3), term_f_37);
  o_1 = t;
  t = SSL_printnl(l_1, o_1);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_37), d_3), term_g_37), c_3), term_l_37), b_3), term_f_37);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL,y_1 = NULL,e_2 = NULL;
  u_1 = t;
  t = term_e_34;
  s_1 = t;
  t = u_1;
  v_1 = t;
  t = (ATerm) ATinsert(ATempty, term_m_37);
  t_1 = t;
  t = SSL_printnl(s_1, t_1);
  e_2 = t;
  t = term_l_34;
  y_1 = t;
  t = SSL_exit(y_1);
  t = (ATerm) ATinsert(ATempty, term_m_37);
  return(t);
}
ATerm w_19 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_37 = ATgetArgument(t, 0);
      if(((ATgetType(n_37) != AT_INT) || (ATgetInt((ATermInt) n_37) != 0)))
        _fail(t);
      {
        ATerm o_37 = ATgetArgument(t, 1);
        if(((ATgetType(o_37) != AT_INT) || (ATgetInt((ATermInt) o_37) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL;
  v_3 = t;
  if(match_cons(t, sym__2))
    {
      w_3 = ATgetArgument(t, 0);
      x_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_3;
  if(match_cons(t, sym__2))
    {
      y_3 = ATgetArgument(t, 0);
      z_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = z_3;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm p_37 = t;
    int q_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL;
        t = w_3;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_37 = ATgetFirst((ATermList) t);
            ATerm s_37 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(s_37) == AT_LIST) && !(ATisEmpty(s_37))))
              {
                ATerm t_37 = ATgetFirst((ATermList) s_37);
                ATerm u_37 = (ATerm) ATgetNext((ATermList) s_37);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm z_37 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(w_19, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = z_37;
            }
          l_2 = t;
          t = term_e_34;
          f_2 = t;
          t = l_2;
          m_2 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, w_3), term_a_38);
          k_2 = t;
          t = SSL_printnl(f_2, k_2);
          t = (ATerm) ATinsert(ATinsert(ATempty, w_3), term_a_38);
          t = giving_up_0_0(t);
        }
        ;
        LocalPopChoice(q_37);
      }
    else
      {
        t = p_37;
        {
          ATerm n_5 = NULL,o_5 = NULL;
          t = w_3;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm b_38 = ATgetFirst((ATermList) t);
              if(match_cons(b_38, sym__2))
                {
                  n_5 = ATgetArgument(b_38, 0);
                  o_5 = ATgetArgument(b_38, 1);
                }
              else
                _fail(t);
              {
                ATerm x_38 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(x_38) != AT_LIST) || !(ATisEmpty(x_38))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, w_3, (ATerm) ATmakeAppl(sym__2, n_5, o_5));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, w_3, (ATerm) ATmakeAppl(sym__2, n_5, o_5));
        }
      }
  }
  return(t);
}
ATerm Rec_2_0 (ATerm e_101 (ATerm), ATerm f_101 (ATerm), ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,p_2 = NULL,q_2 = NULL;
  h_4 = t;
  if(match_cons(t, sym_Rec_2))
    {
      d_4 = ATgetArgument(t, 0);
      e_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_4);
  c_4 = t;
  t = d_4;
  t = e_101(t);
  f_4 = t;
  t = e_4;
  t = f_101(t);
  g_4 = t;
  q_2 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, f_4, g_4);
  p_2 = t;
  t = SSLsetAnnotations(p_2, c_4);
  return(t);
}
ATerm SDefT_4_0 (ATerm z_102 (ATerm), ATerm a_103 (ATerm), ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm t)
{
  ATerm l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,r_2 = NULL,s_2 = NULL;
  v_4 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      m_4 = ATgetArgument(t, 0);
      n_4 = ATgetArgument(t, 1);
      o_4 = ATgetArgument(t, 2);
      q_4 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_4);
  l_4 = t;
  t = m_4;
  t = z_102(t);
  r_4 = t;
  t = n_4;
  t = a_103(t);
  s_4 = t;
  t = o_4;
  t = b_103(t);
  t_4 = t;
  t = q_4;
  t = c_103(t);
  u_4 = t;
  s_2 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, r_4, s_4, t_4, u_4);
  r_2 = t;
  t = SSLsetAnnotations(r_2, l_4);
  return(t);
}
ATerm SDef_3_0 (ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm t)
{
  ATerm k_5 = NULL,l_5 = NULL,q_5 = NULL,u_5 = NULL,x_5 = NULL,y_5 = NULL,a_6 = NULL,b_6 = NULL,t_2 = NULL,v_2 = NULL;
  b_6 = t;
  if(match_cons(t, sym_SDef_3))
    {
      l_5 = ATgetArgument(t, 0);
      q_5 = ATgetArgument(t, 1);
      u_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_6);
  k_5 = t;
  t = l_5;
  t = w_102(t);
  x_5 = t;
  t = q_5;
  t = x_102(t);
  y_5 = t;
  t = u_5;
  t = y_102(t);
  a_6 = t;
  v_2 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, x_5, y_5, a_6);
  t_2 = t;
  t = SSLsetAnnotations(t_2, k_5);
  return(t);
}
ATerm Let_2_0 (ATerm h_100 (ATerm), ATerm i_100 (ATerm), ATerm t)
{
  ATerm f_6 = NULL,h_6 = NULL,i_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL,e_3 = NULL,f_3 = NULL;
  m_6 = t;
  if(match_cons(t, sym_Let_2))
    {
      h_6 = ATgetArgument(t, 0);
      i_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_6);
  f_6 = t;
  t = h_6;
  t = h_100(t);
  k_6 = t;
  t = i_6;
  t = i_100(t);
  l_6 = t;
  f_3 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, k_6, l_6);
  e_3 = t;
  t = SSLsetAnnotations(e_3, f_6);
  return(t);
}
ATerm sboundin_3_0 (ATerm l_110 (ATerm), ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm t)
{
  ATerm y_38 = t;
  int z_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(l_110, l_110, t);
      ;
      LocalPopChoice(z_38);
    }
  else
    {
      t = y_38;
      {
        ATerm o_39 = t;
        int r_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(n_110, n_110, l_110, t);
            ;
            LocalPopChoice(r_39);
          }
        else
          {
            t = o_39;
            {
              ATerm y_39 = t;
              int z_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(n_110, n_110, n_110, l_110, t);
                  ;
                  LocalPopChoice(z_39);
                }
              else
                {
                  t = y_39;
                  t = Rec_2_0(n_110, l_110, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm x_19 (ATerm t)
{
  ATerm x_6 = NULL;
  ATerm a_40 = t;
  int d_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          x_6 = ATgetArgument(t, 0);
          {
            ATerm e_40 = ATgetArgument(t, 1);
          }
          {
            ATerm f_40 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_40);
      t = x_6;
    }
  else
    {
      t = a_40;
      if(match_cons(t, sym_SDefT_4))
        {
          x_6 = ATgetArgument(t, 0);
          {
            ATerm g_40 = ATgetArgument(t, 1);
          }
          {
            ATerm h_40 = ATgetArgument(t, 2);
          }
          {
            ATerm i_40 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = x_6;
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm q_6 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      q_6 = ATgetArgument(t, 0);
      {
        ATerm j_40 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = q_6;
  t = map_1_0(x_19, t);
  return(t);
}
ATerm split_2_0 (ATerm s_114 (ATerm), ATerm t_114 (ATerm), ATerm t)
{
  ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL;
  p_51 = t;
  t = s_114(t);
  q_51 = t;
  t = p_51;
  t = t_114(t);
  r_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_51, r_51);
  return(t);
}
ATerm z_19 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_20 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_20 (ATerm t)
{
  t = union_1_0(i_20, t);
  return(t);
}
ATerm i_20 (ATerm t)
{
  ATerm e_7 = NULL;
  if(match_cons(t, sym__2))
    {
      e_7 = ATgetArgument(t, 0);
      if((e_7 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm m_20 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_20 (ATerm t)
{
  t = union_1_0(w_20, t);
  return(t);
}
ATerm w_20 (ATerm t)
{
  ATerm t_7 = NULL;
  if(match_cons(t, sym__2))
    {
      t_7 = ATgetArgument(t, 0);
      if((t_7 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm y_20 (ATerm t)
{
  ATerm p_7 = NULL;
  if(match_cons(t, sym__2))
    {
      p_7 = ATgetArgument(t, 0);
      if((p_7 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm t_125 (ATerm), ATerm u_125 (ATerm), ATerm v_125 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm w_125 (ATerm), ATerm t)
{
  ATerm q_7 (ATerm t)
  {
    ATerm s_5 = NULL,t_5 = NULL,v_5 = NULL;
    s_5 = t;
    {
      ATerm m_40 = t;
      int n_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_125(t);
          ;
          LocalPopChoice(n_40);
        }
      else
        {
          t = m_40;
          t = (ATerm) ATempty;
        }
      t_5 = t;
      t = s_5;
      {
        ATerm o_40 = t;
        int q_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_6 = NULL,s_6 = NULL,t_6 = NULL;
            t = s_5;
            t = u_125(t);
            j_6 = t;
            t = s_5;
            {
              ATerm y_19 (ATerm t)
              {
                ATerm a_20 (ATerm t)
                {
                  t = j_6;
                  return(t);
                }
                t = split_2_0(q_7, a_20, t);
                t = diff_1_0(w_125, t);
                return(t);
              }
              t = v_125(y_19, q_7, z_19, t);
              s_6 = t;
              t = SSL_explode_term(s_6);
              if(match_cons(t, sym__2))
                {
                  ATerm r_40 = ATgetArgument(t, 0);
                  t_6 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = t_6;
              t = foldr_3_0(c_20, d_20, _id, t);
            }
            ;
            LocalPopChoice(q_40);
          }
        else
          {
            t = o_40;
            {
              ATerm n_7 = NULL;
              t = SSL_explode_term(s_5);
              if(match_cons(t, sym__2))
                {
                  ATerm t_40 = ATgetArgument(t, 0);
                  n_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_7;
              t = foldr_3_0(m_20, p_20, q_7, t);
            }
          }
        v_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_5, v_5);
        t = union_1_0(y_20, t);
      }
    }
    return(t);
  }
  t = q_7(t);
  return(t);
}
ATerm z_20 (ATerm t)
{
  ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL,o_8 = NULL,p_8 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm y_40 = ATgetArgument(t, 0);
      if(match_cons(y_40, sym_SVar_1))
        {
          i_8 = ATgetArgument(y_40, 0);
        }
      else
        _fail(t);
      j_8 = ATgetArgument(t, 1);
      k_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_8;
  t = foldr_3_0(e_21, f_21, h_21, t);
  o_8 = t;
  t = k_8;
  t = foldr_3_0(k_21, o_21, p_21, t);
  p_8 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, i_8, (ATerm) ATmakeAppl(sym__2, o_8, p_8)));
  return(t);
}
ATerm a_21 (ATerm t)
{
  ATerm z_40 = t;
  int c_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind1_0_0(t);
      ;
      LocalPopChoice(c_41);
    }
  else
    {
      t = z_40;
      {
        ATerm k_9 = NULL,m_9 = NULL;
        ATerm t_41 = t;
        int u_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDef_3))
              {
                ATerm v_41 = ATgetArgument(t, 0);
                m_9 = ATgetArgument(t, 1);
                {
                  ATerm w_41 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(u_41);
            t = m_9;
            t = map_1_0(r_21, t);
          }
        else
          {
            t = t_41;
            {
              ATerm x_41 = t;
              int y_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      k_9 = ATgetArgument(t, 0);
                      {
                        ATerm a_42 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(y_41);
                  t = (ATerm) ATinsert(ATempty, k_9);
                }
              else
                {
                  t = x_41;
                  {
                    ATerm f_42 = t;
                    int g_42 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm h_42 = ATgetArgument(t, 0);
                            m_9 = ATgetArgument(t, 1);
                            {
                              ATerm i_42 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm j_42 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(g_42);
                        t = m_9;
                        t = map_1_0(s_21, t);
                      }
                    else
                      {
                        t = f_42;
                        if(match_cons(t, sym_RDefT_4))
                          {
                            ATerm l_42 = ATgetArgument(t, 0);
                            m_9 = ATgetArgument(t, 1);
                            {
                              ATerm m_42 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm n_42 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = m_9;
                        t = map_1_0(t_21, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm b_21 (ATerm t)
{
  ATerm j_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_42 = ATgetArgument(t, 0);
      if(match_cons(q_42, sym__2))
        {
          j_12 = ATgetArgument(q_42, 0);
          {
            ATerm r_42 = ATgetArgument(q_42, 1);
          }
        }
      else
        _fail(t);
      if((j_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm e_21 (ATerm t)
{
  t = term_s_42;
  return(t);
}
ATerm f_21 (ATerm t)
{
  ATerm q_8 = NULL,u_8 = NULL;
  if(match_cons(t, sym__2))
    {
      q_8 = ATgetArgument(t, 0);
      u_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_42 = t;
    int v_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(q_8, u_8);
        ;
        LocalPopChoice(v_42);
      }
    else
      {
        t = u_42;
        t = SSL_addr(q_8, u_8);
      }
  }
  return(t);
}
ATerm h_21 (ATerm t)
{
  t = term_l_34;
  return(t);
}
ATerm k_21 (ATerm t)
{
  t = term_s_42;
  return(t);
}
ATerm o_21 (ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL;
  if(match_cons(t, sym__2))
    {
      v_8 = ATgetArgument(t, 0);
      w_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_42 = t;
    int g_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(v_8, w_8);
        ;
        LocalPopChoice(g_43);
      }
    else
      {
        t = w_42;
        t = SSL_addr(v_8, w_8);
      }
  }
  return(t);
}
ATerm p_21 (ATerm t)
{
  t = term_l_34;
  return(t);
}
ATerm r_21 (ATerm t)
{
  ATerm y_9 = NULL;
  ATerm h_43 = t;
  int k_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_9 = ATgetArgument(t, 0);
          {
            ATerm n_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_43);
      t = y_9;
    }
  else
    {
      t = h_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_9;
    }
  return(t);
}
ATerm s_21 (ATerm t)
{
  ATerm q_10 = NULL;
  ATerm q_43 = t;
  int r_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_10 = ATgetArgument(t, 0);
          {
            ATerm s_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_43);
      t = q_10;
    }
  else
    {
      t = q_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_10;
    }
  return(t);
}
ATerm t_21 (ATerm t)
{
  ATerm a_12 = NULL;
  ATerm t_43 = t;
  int w_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_12 = ATgetArgument(t, 0);
          {
            ATerm c_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_43);
      t = a_12;
    }
  else
    {
      t = t_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_12;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(z_20, a_21, sboundin_3_0, b_21, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL,m_13 = NULL,r_13 = NULL,e_14 = NULL,v_14 = NULL;
  if(match_cons(t, sym__2))
    {
      m_13 = ATgetArgument(t, 0);
      r_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_13;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_14 = ATgetFirst((ATermList) t);
      v_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_14;
  if(match_cons(t, sym__2))
    {
      j_13 = ATgetArgument(t, 0);
      k_13 = ATgetArgument(t, 1);
      {
        ATerm h_44 = t;
        int l_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_13;
            if((m_13 != t))
              {
                _fail(t);
              }
            t = k_13;
            ;
            LocalPopChoice(l_44);
          }
        else
          {
            t = h_44;
            t = (ATerm) ATmakeAppl(sym__2, m_13, v_14);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, m_13, v_14);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm y_112 (ATerm), ATerm t)
{
  ATerm f_18 (ATerm t)
  {
    ATerm m_44 = t;
    int n_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_112(t);
        ;
        LocalPopChoice(n_44);
      }
    else
      {
        t = m_44;
        t = SRTS_all(f_18, t);
      }
    return(t);
  }
  t = f_18(t);
  return(t);
}
ATerm u_21 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_44 = ATgetArgument(t, 0);
      if(((ATgetType(o_44) != AT_LIST) || !(ATisEmpty(o_44))))
        _fail(t);
      {
        ATerm p_44 = ATgetArgument(t, 1);
        if(((ATgetType(p_44) != AT_LIST) || !(ATisEmpty(p_44))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_21 (ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL,e_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_44 = ATgetArgument(t, 0);
      if(((ATgetType(q_44) == AT_LIST) && !(ATisEmpty(q_44))))
        {
          z_18 = ATgetFirst((ATermList) q_44);
          b_19 = (ATerm) ATgetNext((ATermList) q_44);
        }
      else
        _fail(t);
      {
        ATerm r_44 = ATgetArgument(t, 1);
        if(((ATgetType(r_44) == AT_LIST) && !(ATisEmpty(r_44))))
          {
            a_19 = ATgetFirst((ATermList) r_44);
            e_19 = (ATerm) ATgetNext((ATermList) r_44);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_18, a_19), (ATerm) ATmakeAppl(sym__2, b_19, e_19));
  return(t);
}
ATerm z_21 (ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL;
  if(match_cons(t, sym__2))
    {
      f_19 = ATgetArgument(t, 0);
      g_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_19), f_19);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm h_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL;
  h_18 = t;
  {
    ATerm u_44 = t;
    int a_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_45 = ATgetArgument(t, 0);
            ATerm c_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(a_45);
        t = h_18;
      }
    else
      {
        t = u_44;
        {
          ATerm u_18 = NULL;
          if(match_cons(t, sym__3))
            {
              m_18 = ATgetArgument(t, 0);
              n_18 = ATgetArgument(t, 1);
              o_18 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, m_18, n_18);
          t = genzip_4_0(u_21, v_21, z_21, _id, t);
          u_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_18, o_18);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm p_110 (ATerm), ATerm q_110 (ATerm), ATerm t)
{
  ATerm h_19 = NULL,m_19 = NULL;
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      m_19 = ATgetArgument(t, 0);
      h_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_19;
  {
    ATerm a_22 (ATerm t)
    {
      ATerm d_8 = NULL;
      t = p_110(t);
      d_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_8, m_19);
      t = lookup_0_0(t);
      t = q_110(t);
      return(t);
    }
    t = alltd_1_0(a_22, t);
  }
  return(t);
}
ATerm VarDec_2_0 (ATerm s_102 (ATerm), ATerm t_102 (ATerm), ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,v_19 = NULL,g_3 = NULL,h_3 = NULL;
  v_19 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      o_19 = ATgetArgument(t, 0);
      p_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_19);
  n_19 = t;
  t = o_19;
  t = s_102(t);
  q_19 = t;
  t = p_19;
  t = t_102(t);
  r_19 = t;
  h_3 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, q_19, r_19);
  g_3 = t;
  t = SSLsetAnnotations(g_3, n_19);
  return(t);
}
ATerm b_22 (ATerm t)
{
  t = VarDec_2_0(new_0_0, _id, t);
  return(t);
}
ATerm c_22 (ATerm t)
{
  t = VarDec_2_0(new_0_0, _id, t);
  return(t);
}
ATerm d_22 (ATerm t)
{
  ATerm r_20 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      r_20 = ATgetArgument(t, 0);
      {
        ATerm g_45 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_20), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
ATerm e_22 (ATerm t)
{
  ATerm s_20 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      s_20 = ATgetArgument(t, 0);
      {
        ATerm h_45 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, s_20);
  return(t);
}
ATerm g_22 (ATerm t)
{
  ATerm g_21 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      g_21 = ATgetArgument(t, 0);
      {
        ATerm i_45 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = g_21;
  return(t);
}
ATerm k_22 (ATerm t)
{
  ATerm i_21 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      i_21 = ATgetArgument(t, 0);
      {
        ATerm j_45 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = i_21;
  return(t);
}
ATerm n_22 (ATerm t)
{
  ATerm j_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      l_21 = ATgetArgument(t, 0);
      n_21 = ATgetArgument(t, 1);
      j_21 = ATgetArgument(t, 2);
      t = l_21;
      if(match_cons(t, sym_SVar_1))
        {
          m_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_21;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_21;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_21;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          l_21 = ATgetArgument(t, 0);
          n_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_21;
      if(match_cons(t, sym_SVar_1))
        {
          m_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_21;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_21;
    }
  return(t);
}
ATerm o_22 (ATerm t)
{
  ATerm q_21 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_21;
  return(t);
}
ATerm p_22 (ATerm t)
{
  t = term_k_45;
  return(t);
}
ATerm q_22 (ATerm t)
{
  ATerm n_8 = NULL,z_8 = NULL,e_9 = NULL;
  n_8 = t;
  t = SSL_explode_term(n_8);
  if(match_cons(t, sym__2))
    {
      ATerm l_45 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_45) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_45 = ATgetArgument(t, 1);
        if(((ATgetType(m_45) == AT_LIST) && !(ATisEmpty(m_45))))
          {
            z_8 = ATgetFirst((ATermList) m_45);
            {
              ATerm n_45 = (ATerm) ATgetNext((ATermList) m_45);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(n_8);
  if(match_cons(t, sym__2))
    {
      ATerm p_45 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_45) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_45 = ATgetArgument(t, 1);
        if(((ATgetType(q_45) == AT_LIST) && !(ATisEmpty(q_45))))
          {
            ATerm r_45 = ATgetFirst((ATermList) q_45);
            ATerm s_45 = (ATerm) ATgetNext((ATermList) q_45);
            if(((ATgetType(s_45) == AT_LIST) && !(ATisEmpty(s_45))))
              {
                e_9 = ATgetFirst((ATermList) s_45);
                {
                  ATerm t_45 = (ATerm) ATgetNext((ATermList) s_45);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, z_8, e_9);
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL,n_20 = NULL,q_20 = NULL;
  e_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_45 = ATgetFirst((ATermList) t);
      if(match_cons(u_45, sym_SDefT_4))
        {
          f_20 = ATgetArgument(u_45, 0);
          g_20 = ATgetArgument(u_45, 1);
          h_20 = ATgetArgument(u_45, 2);
          {
            ATerm w_45 = ATgetArgument(u_45, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm v_45 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = g_20;
  t = map_1_0(b_22, t);
  j_20 = t;
  t = h_20;
  t = map_1_0(c_22, t);
  k_20 = t;
  t = j_20;
  t = map_1_0(d_22, t);
  l_20 = t;
  t = k_20;
  t = map_1_0(e_22, t);
  n_20 = t;
  t = e_20;
  {
    ATerm f_22 (ATerm t)
    {
      ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL,x_20 = NULL,c_21 = NULL,d_21 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm x_45 = ATgetArgument(t, 0);
          t_20 = ATgetArgument(t, 1);
          u_20 = ATgetArgument(t, 2);
          v_20 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = u_20;
      t = map_1_0(g_22, t);
      x_20 = t;
      t = t_20;
      t = map_1_0(k_22, t);
      c_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, c_21, l_20, v_20);
      t = substitute_2_0(n_22, _id, t);
      d_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, x_20, n_20, d_21);
      t = substitute_2_0(o_22, _id, t);
      return(t);
    }
    t = map_1_0(f_22, t);
    t = foldr_2_0(p_22, q_22, t);
    q_20 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, f_20, j_20, k_20, q_20);
  }
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
  x_21 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      y_21 = ATgetArgument(t, 0);
      w_21 = ATgetArgument(t, 1);
      {
        ATerm h_22 = NULL,i_22 = NULL,l_22 = NULL,m_22 = NULL;
        t = x_21;
        t = new_0_0(t);
        h_22 = t;
        t = new_0_0(t);
        i_22 = t;
        t = new_0_0(t);
        l_22 = t;
        t = new_0_0(t);
        m_22 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_22), l_22), i_22), h_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, h_22), (ATerm) ATmakeAppl(sym_Var_1, l_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, y_21, (ATerm)ATmakeAppl(sym_Var_1, h_22), (ATerm) ATmakeAppl(sym_Var_1, i_22)), (ATerm) ATmakeAppl(sym_BAM_3, w_21, (ATerm)ATmakeAppl(sym_Var_1, l_22), (ATerm) ATmakeAppl(sym_Var_1, m_22)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_y_45, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, m_22)), (ATerm) ATmakeAppl(sym_Var_1, i_22))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          y_21 = ATgetArgument(t, 0);
          {
            ATerm r_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL;
            t = x_21;
            t = new_0_0(t);
            r_22 = t;
            t = y_21;
            {
              ATerm s_22 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((t_22 != NULL) && (t_22 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      t_22 = ATgetArgument(t, 0);
                    if(((u_22 != NULL) && (u_22 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      u_22 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, r_22);
                return(t);
              }
              t = oncetd_1_0(s_22, t);
              v_22 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_y_45, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_22)), not_null(t_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_22)), (ATerm) ATmakeAppl(sym_Build_1, v_22))));
            }
          }
        }
      else
        {
          ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              y_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_21;
          t = new_0_0(t);
          x_22 = t;
          t = new_0_0(t);
          y_22 = t;
          t = y_21;
          {
            ATerm w_22 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((z_22 != NULL) && (z_22 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    z_22 = ATgetArgument(t, 0);
                  if(((a_23 != NULL) && (a_23 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    a_23 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, x_22);
              return(t);
            }
            t = oncetd_1_0(w_22, t);
            b_23 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_23), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, y_22)), (ATerm) ATmakeAppl(sym_PrimT_3, term_z_45, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_22))))), (ATerm)ATmakeAppl(sym_Var_1, x_22), (ATerm) ATmakeAppl(sym_Op_2, term_a_46, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_23)), not_null(z_22)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL;
  d_23 = t;
  if(match_cons(t, sym_Match_1))
    {
      e_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_46 = t;
    int c_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL;
        t = d_23;
        t = new_0_0(t);
        g_23 = t;
        t = e_23;
        {
          ATerm c_23 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((i_23 != NULL) && (i_23 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_23 = ATgetArgument(t, 0);
                if(((h_23 != NULL) && (h_23 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  h_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, g_23), not_null(i_23));
            return(t);
          }
          t = pat_td_1_0(c_23, t);
          j_23 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, j_23), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_e_46, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_23))), (ATerm) ATmakeAppl(sym_Match_1, not_null(h_23))))));
        }
        ;
        LocalPopChoice(c_46);
      }
    else
      {
        t = b_46;
        {
          ATerm h_46 = t;
          int i_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL;
              t = d_23;
              t = new_0_0(t);
              l_23 = t;
              t = e_23;
              {
                ATerm f_23 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((m_23 != NULL) && (m_23 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        m_23 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, l_23);
                  return(t);
                }
                t = pat_td_1_0(f_23, t);
                n_23 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, l_23)), not_null(m_23))));
              }
              ;
              LocalPopChoice(i_46);
            }
          else
            {
              t = h_46;
              {
                ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL;
                t = d_23;
                t = new_0_0(t);
                p_23 = t;
                t = e_23;
                {
                  ATerm k_23 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((q_23 != NULL) && (q_23 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          q_23 = ATgetArgument(t, 0);
                        if(((r_23 != NULL) && (r_23 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          r_23 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, p_23);
                    return(t);
                  }
                  t = pat_td_1_0(k_23, t);
                  s_23 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, s_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, p_23)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(r_23)), not_null(q_23)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm As_2_0 (ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,i_3 = NULL,j_3 = NULL;
  g_24 = t;
  if(match_cons(t, sym_As_2))
    {
      z_23 = ATgetArgument(t, 0);
      a_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_24);
  y_23 = t;
  t = z_23;
  t = o_97(t);
  e_24 = t;
  t = a_24;
  t = p_97(t);
  f_24 = t;
  j_3 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, e_24, f_24);
  i_3 = t;
  t = SSLsetAnnotations(i_3, y_23);
  return(t);
}
ATerm CallT_3_0 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm n_100 (ATerm), ATerm t)
{
  ATerm j_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,k_3 = NULL,l_3 = NULL;
  s_24 = t;
  if(match_cons(t, sym_CallT_3))
    {
      m_24 = ATgetArgument(t, 0);
      n_24 = ATgetArgument(t, 1);
      o_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_24);
  j_24 = t;
  t = m_24;
  t = l_100(t);
  p_24 = t;
  t = n_24;
  t = m_100(t);
  q_24 = t;
  t = o_24;
  t = n_100(t);
  r_24 = t;
  l_3 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, p_24, q_24, r_24);
  k_3 = t;
  t = SSLsetAnnotations(k_3, j_24);
  return(t);
}
ATerm PrimT_3_0 (ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,m_3 = NULL,n_3 = NULL;
  j_25 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      d_25 = ATgetArgument(t, 0);
      e_25 = ATgetArgument(t, 1);
      f_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_25);
  c_25 = t;
  t = d_25;
  t = n_101(t);
  g_25 = t;
  t = e_25;
  t = o_101(t);
  h_25 = t;
  t = f_25;
  t = p_101(t);
  i_25 = t;
  n_3 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, g_25, h_25, i_25);
  m_3 = t;
  t = SSLsetAnnotations(m_3, c_25);
  return(t);
}
ATerm Explode_2_0 (ATerm h_97 (ATerm), ATerm i_97 (ATerm), ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,o_3 = NULL,p_3 = NULL;
  r_25 = t;
  if(match_cons(t, sym_Explode_2))
    {
      n_25 = ATgetArgument(t, 0);
      o_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_25);
  m_25 = t;
  t = n_25;
  t = h_97(t);
  p_25 = t;
  t = o_25;
  t = i_97(t);
  q_25 = t;
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym_Explode_2, p_25, q_25);
  o_3 = t;
  t = SSLsetAnnotations(o_3, m_25);
  return(t);
}
ATerm Op_2_0 (ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,q_3 = NULL,r_3 = NULL;
  z_25 = t;
  if(match_cons(t, sym_Op_2))
    {
      v_25 = ATgetArgument(t, 0);
      w_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_25);
  u_25 = t;
  t = v_25;
  t = d_97(t);
  x_25 = t;
  t = w_25;
  t = e_97(t);
  y_25 = t;
  r_3 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, x_25, y_25);
  q_3 = t;
  t = SSLsetAnnotations(q_3, u_25);
  return(t);
}
ATerm pat_td_1_0 (ATerm n_140 (ATerm), ATerm t)
{
  ATerm k_46 = t;
  int m_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_140(t);
      ;
      LocalPopChoice(m_46);
    }
  else
    {
      t = k_46;
      {
        ATerm o_46 = t;
        int p_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_23 (ATerm t)
            {
              ATerm t_23 (ATerm t)
              {
                t = pat_td_1_0(n_140, t);
                return(t);
              }
              t = fetch_1_0(t_23, t);
              return(t);
            }
            t = Op_2_0(_id, o_23, t);
            ;
            LocalPopChoice(p_46);
          }
        else
          {
            t = o_46;
            {
              ATerm s_46 = t;
              int t_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_23 (ATerm t)
                  {
                    t = pat_td_1_0(n_140, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, u_23, t);
                  ;
                  LocalPopChoice(t_46);
                }
              else
                {
                  t = s_46;
                  {
                    ATerm b_47 = t;
                    int c_47 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_23 (ATerm t)
                        {
                          t = pat_td_1_0(n_140, t);
                          return(t);
                        }
                        t = Explode_2_0(v_23, _id, t);
                        ;
                        LocalPopChoice(c_47);
                      }
                    else
                      {
                        t = b_47;
                        {
                          ATerm i_47 = t;
                          int j_47 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm x_23 (ATerm t)
                              {
                                ATerm b_24 (ATerm t)
                                {
                                  t = pat_td_1_0(n_140, t);
                                  return(t);
                                }
                                t = fetch_1_0(b_24, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, x_23, t);
                              ;
                              LocalPopChoice(j_47);
                            }
                          else
                            {
                              t = i_47;
                              {
                                ATerm k_47 = t;
                                int l_47 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm c_24 (ATerm t)
                                    {
                                      ATerm h_24 (ATerm t)
                                      {
                                        t = pat_td_1_0(n_140, t);
                                        return(t);
                                      }
                                      t = fetch_1_0(h_24, t);
                                      return(t);
                                    }
                                    t = CallT_3_0(_id, _id, c_24, t);
                                    ;
                                    LocalPopChoice(l_47);
                                  }
                                else
                                  {
                                    t = k_47;
                                    {
                                      ATerm i_24 (ATerm t)
                                      {
                                        t = pat_td_1_0(n_140, t);
                                        return(t);
                                      }
                                      t = As_2_0(_id, i_24, t);
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
  ATerm d_26 = NULL,e_26 = NULL;
  d_26 = t;
  if(match_cons(t, sym_Build_1))
    {
      e_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_47 = t;
    int x_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL;
        t = d_26;
        t = new_0_0(t);
        h_26 = t;
        t = e_26;
        {
          ATerm k_24 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((i_26 != NULL) && (i_26 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_26 = ATgetArgument(t, 0);
                if(((j_26 != NULL) && (j_26 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  j_26 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, h_26);
            return(t);
          }
          t = pat_td_1_0(k_24, t);
          k_26 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_y_47, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_26)), not_null(i_26))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_26)))), (ATerm) ATmakeAppl(sym_Build_1, k_26)));
        }
        ;
        LocalPopChoice(x_47);
      }
    else
      {
        t = m_47;
        {
          ATerm b_48 = t;
          int c_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_26 = NULL,p_26 = NULL,q_26 = NULL;
              t = d_26;
              t = new_0_0(t);
              m_26 = t;
              t = e_26;
              {
                ATerm l_24 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((p_26 != NULL) && (p_26 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        p_26 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, m_26);
                  return(t);
                }
                t = pat_td_1_0(l_24, t);
                q_26 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_26), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_26)))), (ATerm) ATmakeAppl(sym_Build_1, q_26)));
              }
              ;
              LocalPopChoice(c_48);
            }
          else
            {
              t = b_48;
              {
                ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL;
                t = d_26;
                t = new_0_0(t);
                v_26 = t;
                t = e_26;
                {
                  ATerm u_24 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((w_26 != NULL) && (w_26 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          w_26 = ATgetArgument(t, 0);
                        if(((x_26 != NULL) && (x_26 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          x_26 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, v_26);
                    return(t);
                  }
                  t = pat_td_1_0(u_24, t);
                  y_26 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(w_26), not_null(x_26), (ATerm) ATmakeAppl(sym_Var_1, v_26))), (ATerm) ATmakeAppl(sym_Build_1, y_26)));
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
  ATerm h_48 = t;
  int i_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm v_24 (ATerm t)
        {
          ATerm n_48 = t;
          int o_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(o_48);
            }
          else
            {
              t = n_48;
            }
          return(t);
        }
        t = Cons_2_0(_id, v_24, t);
      }
      ;
      LocalPopChoice(i_48);
    }
  else
    {
      t = h_48;
      {
        ATerm w_24 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, w_24, t);
      }
    }
  return(t);
}
ATerm x_24 (ATerm t)
{
  ATerm d_28 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      d_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, d_28, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_48), term_r_48));
  return(t);
}
ATerm y_24 (ATerm t)
{
  ATerm s_48 = t;
  int t_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_28 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, g_28, term_r_48);
      ;
      LocalPopChoice(t_48);
    }
  else
    {
      t = s_48;
    }
  return(t);
}
ATerm z_24 (ATerm t)
{
  ATerm p_28 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      p_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, p_28, term_r_48);
  return(t);
}
ATerm a_25 (ATerm t)
{
  ATerm u_48 = t;
  int v_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_28 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, r_28, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_48), term_r_48));
      ;
      LocalPopChoice(v_48);
    }
  else
    {
      t = u_48;
    }
  return(t);
}
ATerm b_25 (ATerm t)
{
  ATerm z_28 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      z_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_28, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_48), term_r_48));
  return(t);
}
ATerm k_25 (ATerm t)
{
  ATerm x_48 = t;
  int y_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_29 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, b_29, term_r_48);
      ;
      LocalPopChoice(y_48);
    }
  else
    {
      t = x_48;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL,j_27 = NULL,k_27 = NULL,m_27 = NULL,n_27 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      m_27 = ATgetArgument(t, 0);
      n_27 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, m_27, n_27);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          m_27 = ATgetArgument(t, 0);
          t = m_27;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_27 = ATgetFirst((ATermList) t);
              h_27 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, g_27, (ATerm) ATmakeAppl(sym_LChoices_1, h_27));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_k_45;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              m_27 = ATgetArgument(t, 0);
              t = m_27;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_27 = ATgetFirst((ATermList) t);
                  h_27 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, g_27, (ATerm) ATmakeAppl(sym_Choices_1, h_27));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_k_45;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  m_27 = ATgetArgument(t, 0);
                  t = m_27;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      g_27 = ATgetFirst((ATermList) t);
                      h_27 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_27, (ATerm) ATmakeAppl(sym_Seqs_1, h_27));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_e_49;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      m_27 = ATgetArgument(t, 0);
                      n_27 = ATgetArgument(t, 1);
                      k_27 = ATgetArgument(t, 2);
                      j_27 = ATgetArgument(t, 3);
                      {
                        ATerm b_28 = NULL,c_28 = NULL;
                        t = n_27;
                        t = map1_1_0(x_24, t);
                        b_28 = t;
                        t = k_27;
                        t = map1_1_0(y_24, t);
                        c_28 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, m_27, b_28, c_28, j_27);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          m_27 = ATgetArgument(t, 0);
                          n_27 = ATgetArgument(t, 1);
                          k_27 = ATgetArgument(t, 2);
                          j_27 = ATgetArgument(t, 3);
                          {
                            ATerm f_49 = t;
                            int x_49 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm n_28 = NULL,o_28 = NULL;
                                t = k_27;
                                t = map1_1_0(z_24, t);
                                n_28 = t;
                                t = n_27;
                                t = map_1_0(a_25, t);
                                o_28 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, m_27, o_28, n_28, j_27);
                                ;
                                LocalPopChoice(x_49);
                              }
                            else
                              {
                                t = f_49;
                                {
                                  ATerm x_28 = NULL,y_28 = NULL;
                                  t = n_27;
                                  t = map1_1_0(b_25, t);
                                  x_28 = t;
                                  t = k_27;
                                  t = map_1_0(k_25, t);
                                  y_28 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, m_27, x_28, y_28, j_27);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              m_27 = ATgetArgument(t, 0);
                              n_27 = ATgetArgument(t, 1);
                              k_27 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, n_27, (ATerm) ATmakeAppl(sym_Op_2, term_a_46, (ATerm) ATinsert(ATinsert(ATempty, k_27), m_27)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  m_27 = ATgetArgument(t, 0);
                                  n_27 = ATgetArgument(t, 1);
                                  k_27 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, k_27)), m_27), (ATerm) ATmakeAppl(sym_Build_1, n_27)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      m_27 = ATgetArgument(t, 0);
                                      n_27 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_27, (ATerm) ATmakeAppl(sym_Match_1, n_27));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          m_27 = ATgetArgument(t, 0);
                                          n_27 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, m_27), n_27);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              m_27 = ATgetArgument(t, 0);
                                              n_27 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_27), m_27);
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
ATerm l_25 (ATerm t)
{
  ATerm y_49 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_49;
    }
  return(t);
}
ATerm s_25 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_49;
  return(t);
}
ATerm t_25 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_30 = ATgetFirst((ATermList) t);
      c_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_30, c_30);
  return(t);
}
ATerm a_26 (ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_50 = ATgetArgument(t, 0);
      if(match_cons(a_50, sym__2))
        {
          d_30 = ATgetArgument(a_50, 0);
          f_30 = ATgetArgument(a_50, 1);
        }
      else
        _fail(t);
      {
        ATerm b_50 = ATgetArgument(t, 1);
        if(match_cons(b_50, sym__2))
          {
            e_30 = ATgetArgument(b_50, 0);
            g_30 = ATgetArgument(b_50, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_30), d_30), (ATerm) ATinsert(CheckATermList(g_30), f_30));
  return(t);
}
ATerm b_26 (ATerm t)
{
  t = genzip_4_0(c_26, f_26, g_26, _id, t);
  return(t);
}
ATerm c_26 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_49;
  return(t);
}
ATerm f_26 (ATerm t)
{
  ATerm h_30 = NULL,j_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_30 = ATgetFirst((ATermList) t);
      j_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_30, j_30);
  return(t);
}
ATerm g_26 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_50 = ATgetArgument(t, 0);
      if(match_cons(c_50, sym__2))
        {
          k_30 = ATgetArgument(c_50, 0);
          m_30 = ATgetArgument(c_50, 1);
        }
      else
        _fail(t);
      {
        ATerm d_50 = ATgetArgument(t, 1);
        if(match_cons(d_50, sym__2))
          {
            l_30 = ATgetArgument(d_50, 0);
            n_30 = ATgetArgument(d_50, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_30), k_30), (ATerm) ATinsert(CheckATermList(n_30), m_30));
  return(t);
}
ATerm LiftCallArgs_0_0 (ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      s_29 = ATgetArgument(t, 0);
      t_29 = ATgetArgument(t, 1);
      u_29 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_29;
  t = fetch_1_0(l_25, t);
  t = u_29;
  t = genzip_4_0(s_25, t_25, a_26, LiftPrimArg_0_0, t);
  t = _2_0(concat_0_0, b_26, t);
  if(match_cons(t, sym__2))
    {
      v_29 = ATgetArgument(t, 0);
      {
        ATerm e_50 = ATgetArgument(t, 1);
        if(match_cons(e_50, sym__2))
          {
            w_29 = ATgetArgument(e_50, 0);
            x_29 = ATgetArgument(e_50, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, v_29, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, w_29), (ATerm) ATmakeAppl(sym_CallT_3, s_29, t_29, x_29)));
  return(t);
}
ATerm a_31 (ATerm q_30, ATerm t)
{
  ATerm s_30 = NULL;
  t = q_30;
  {
    ATerm f_50 = t;
    if((PushChoice() == 0))
      {
        t = Var_1_0(_id, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_50;
      }
    t = new_0_0(t);
    s_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, s_30), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, q_30), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, s_30)))), (ATerm) ATmakeAppl(sym_Var_1, s_30)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm t_30 = NULL,x_30 = NULL;
  t_30 = t;
  if(match_cons(t, sym_Var_1))
    {
      x_30 = ATgetArgument(t, 0);
      {
        ATerm g_50 = t;
        int h_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_31(t_30, t);
            ;
            LocalPopChoice(h_50);
          }
        else
          {
            t = g_50;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_e_49, (ATerm) ATmakeAppl(sym_Var_1, x_30)));
          }
      }
    }
  else
    {
      t = a_31(t_30, t);
    }
  return(t);
}
ATerm Var_1_0 (ATerm x_96 (ATerm), ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL,h_31 = NULL,s_3 = NULL,t_3 = NULL;
  h_31 = t;
  if(match_cons(t, sym_Var_1))
    {
      c_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_31);
  b_31 = t;
  t = c_31;
  t = x_96(t);
  d_31 = t;
  t_3 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, d_31);
  s_3 = t;
  t = SSLsetAnnotations(s_3, b_31);
  return(t);
}
ATerm l_26 (ATerm t)
{
  ATerm j_50 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_50;
    }
  return(t);
}
ATerm n_26 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_49;
  return(t);
}
ATerm o_26 (ATerm t)
{
  ATerm u_9 = NULL,v_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_9 = ATgetFirst((ATermList) t);
      v_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_9, v_9);
  return(t);
}
ATerm r_26 (ATerm t)
{
  ATerm z_9 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_50 = ATgetArgument(t, 0);
      if(match_cons(k_50, sym__2))
        {
          z_9 = ATgetArgument(k_50, 0);
          d_10 = ATgetArgument(k_50, 1);
        }
      else
        _fail(t);
      {
        ATerm n_50 = ATgetArgument(t, 1);
        if(match_cons(n_50, sym__2))
          {
            c_10 = ATgetArgument(n_50, 0);
            e_10 = ATgetArgument(n_50, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_10), z_9), (ATerm) ATinsert(CheckATermList(e_10), d_10));
  return(t);
}
ATerm s_26 (ATerm t)
{
  t = genzip_4_0(t_26, u_26, z_26, _id, t);
  return(t);
}
ATerm t_26 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_49;
  return(t);
}
ATerm u_26 (ATerm t)
{
  ATerm f_10 = NULL,g_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_10 = ATgetFirst((ATermList) t);
      g_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_10, g_10);
  return(t);
}
ATerm z_26 (ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL,o_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_50 = ATgetArgument(t, 0);
      if(match_cons(o_50, sym__2))
        {
          h_10 = ATgetArgument(o_50, 0);
          j_10 = ATgetArgument(o_50, 1);
        }
      else
        _fail(t);
      {
        ATerm p_50 = ATgetArgument(t, 1);
        if(match_cons(p_50, sym__2))
          {
            i_10 = ATgetArgument(p_50, 0);
            o_10 = ATgetArgument(p_50, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_10), h_10), (ATerm) ATinsert(CheckATermList(o_10), j_10));
  return(t);
}
ATerm a_27 (ATerm t)
{
  ATerm q_50 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_50;
    }
  return(t);
}
ATerm b_27 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_49;
  return(t);
}
ATerm c_27 (ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_11 = ATgetFirst((ATermList) t);
      g_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_11, g_11);
  return(t);
}
ATerm d_27 (ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_50 = ATgetArgument(t, 0);
      if(match_cons(r_50, sym__2))
        {
          h_11 = ATgetArgument(r_50, 0);
          j_11 = ATgetArgument(r_50, 1);
        }
      else
        _fail(t);
      {
        ATerm s_50 = ATgetArgument(t, 1);
        if(match_cons(s_50, sym__2))
          {
            i_11 = ATgetArgument(s_50, 0);
            k_11 = ATgetArgument(s_50, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_11), h_11), (ATerm) ATinsert(CheckATermList(k_11), j_11));
  return(t);
}
ATerm e_27 (ATerm t)
{
  t = genzip_4_0(f_27, i_27, l_27, _id, t);
  return(t);
}
ATerm f_27 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_49;
  return(t);
}
ATerm i_27 (ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_11 = ATgetFirst((ATermList) t);
      m_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_11, m_11);
  return(t);
}
ATerm l_27 (ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_50 = ATgetArgument(t, 0);
      if(match_cons(t_50, sym__2))
        {
          n_11 = ATgetArgument(t_50, 0);
          p_11 = ATgetArgument(t_50, 1);
        }
      else
        _fail(t);
      {
        ATerm y_50 = ATgetArgument(t, 1);
        if(match_cons(y_50, sym__2))
          {
            o_11 = ATgetArgument(y_50, 0);
            q_11 = ATgetArgument(y_50, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_11), n_11), (ATerm) ATinsert(CheckATermList(q_11), p_11));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL;
  f_33 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      g_33 = ATgetArgument(t, 0);
      h_33 = ATgetArgument(t, 1);
      e_33 = ATgetArgument(t, 2);
      {
        ATerm o_9 = NULL,p_9 = NULL,t_9 = NULL;
        t = e_33;
        t = fetch_1_0(l_26, t);
        t = e_33;
        t = genzip_4_0(n_26, o_26, r_26, LiftPrimArg_0_0, t);
        t = _2_0(concat_0_0, s_26, t);
        if(match_cons(t, sym__2))
          {
            o_9 = ATgetArgument(t, 0);
            {
              ATerm z_50 = ATgetArgument(t, 1);
              if(match_cons(z_50, sym__2))
                {
                  p_9 = ATgetArgument(z_50, 0);
                  t_9 = ATgetArgument(z_50, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, o_9, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_9), (ATerm) ATmakeAppl(sym_PrimT_3, g_33, h_33, t_9)));
      }
    }
  else
    {
      ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          g_33 = ATgetArgument(t, 0);
          h_33 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_33;
      t = fetch_1_0(a_27, t);
      t = h_33;
      t = genzip_4_0(b_27, c_27, d_27, LiftPrimArg_0_0, t);
      t = _2_0(concat_0_0, e_27, t);
      if(match_cons(t, sym__2))
        {
          c_11 = ATgetArgument(t, 0);
          {
            ATerm a_51 = ATgetArgument(t, 1);
            if(match_cons(a_51, sym__2))
              {
                d_11 = ATgetArgument(a_51, 0);
                e_11 = ATgetArgument(a_51, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, c_11, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, d_11), (ATerm) ATmakeAppl(sym_PrimT_3, g_33, (ATerm)ATempty, e_11)));
    }
  return(t);
}
ATerm repeat_1_0 (ATerm s_127 (ATerm), ATerm t)
{
  ATerm k_33 (ATerm t)
  {
    ATerm b_51 = t;
    int o_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_127(t);
        t = k_33(t);
        ;
        LocalPopChoice(o_51);
      }
    else
      {
        t = b_51;
      }
    return(t);
  }
  t = k_33(t);
  return(t);
}
ATerm o_27 (ATerm t)
{
  ATerm t_51 = t;
  int u_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Con_3_0(_id, _id, _id, t);
      ;
      LocalPopChoice(u_51);
    }
  else
    {
      t = t_51;
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm v_51 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(o_27, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_51;
    }
  return(t);
}
ATerm App_2_0 (ATerm l_97 (ATerm), ATerm m_97 (ATerm), ATerm t)
{
  ATerm l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,u_3 = NULL,a_4 = NULL;
  q_33 = t;
  if(match_cons(t, sym_App_2))
    {
      m_33 = ATgetArgument(t, 0);
      n_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_33);
  l_33 = t;
  t = m_33;
  t = l_97(t);
  o_33 = t;
  t = n_33;
  t = m_97(t);
  p_33 = t;
  a_4 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, o_33, p_33);
  u_3 = t;
  t = SSLsetAnnotations(u_3, l_33);
  return(t);
}
ATerm Con_3_0 (ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL,b_4 = NULL,i_4 = NULL;
  a_34 = t;
  if(match_cons(t, sym_Con_3))
    {
      u_33 = ATgetArgument(t, 0);
      v_33 = ATgetArgument(t, 1);
      w_33 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_34);
  t_33 = t;
  t = u_33;
  t = x_97(t);
  x_33 = t;
  t = v_33;
  t = y_97(t);
  y_33 = t;
  t = w_33;
  t = z_97(t);
  z_33 = t;
  i_4 = t;
  t = (ATerm) ATmakeAppl(sym_Con_3, x_33, y_33, z_33);
  b_4 = t;
  t = SSLsetAnnotations(b_4, t_33);
  return(t);
}
ATerm p_27 (ATerm t)
{
  ATerm w_51 = t;
  int x_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Con_3_0(_id, _id, _id, t);
      ;
      LocalPopChoice(x_51);
    }
  else
    {
      t = w_51;
      t = App_2_0(_id, _id, t);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm y_51 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(p_27, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_51;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      g_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_34;
  if(match_cons(t, sym_StratRule_3))
    {
      h_34 = ATgetArgument(t, 0);
      i_34 = ATgetArgument(t, 1);
      j_34 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, i_34), (ATerm) ATmakeAppl(sym_Where_1, j_34)), h_34));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          h_34 = ATgetArgument(t, 0);
          i_34 = ATgetArgument(t, 1);
          j_34 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = h_34;
      t = pureterm_0_0(t);
      t = i_34;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, i_34)), (ATerm) ATmakeAppl(sym_Where_1, j_34)), (ATerm) ATmakeAppl(sym_Match_1, h_34)));
    }
  return(t);
}
ATerm Scope_2_0 (ATerm r_100 (ATerm), ATerm s_100 (ATerm), ATerm t)
{
  ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,j_4 = NULL,k_4 = NULL;
  w_34 = t;
  if(match_cons(t, sym_Scope_2))
    {
      s_34 = ATgetArgument(t, 0);
      t_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_34);
  r_34 = t;
  t = s_34;
  t = r_100(t);
  u_34 = t;
  t = t_34;
  t = s_100(t);
  v_34 = t;
  k_4 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, u_34, v_34);
  j_4 = t;
  t = SSLsetAnnotations(j_4, r_34);
  return(t);
}
ATerm oncetd_1_0 (ATerm k_112 (ATerm), ATerm t)
{
  ATerm z_34 (ATerm t)
  {
    ATerm z_51 = t;
    int a_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_112(t);
        ;
        LocalPopChoice(a_52);
      }
    else
      {
        t = z_51;
        t = SRTS_one(z_34, t);
      }
    return(t);
  }
  t = z_34(t);
  return(t);
}
ATerm Rcon_0_0 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      ATerm c_52 = ATgetArgument(t, 0);
      if(match_cons(c_52, sym_Rule_3))
        {
          a_35 = ATgetArgument(c_52, 0);
          b_35 = ATgetArgument(c_52, 1);
          c_35 = ATgetArgument(c_52, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = new_0_0(t);
  d_35 = t;
  t = a_35;
  {
    ATerm q_27 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm d_52 = ATgetArgument(t, 0);
          if(match_cons(d_52, sym_Var_1))
            {
              if(((f_35 != NULL) && (f_35 != ATgetArgument(d_52, 0))))
                _fail(ATgetArgument(d_52, 0));
              else
                f_35 = ATgetArgument(d_52, 0);
            }
          else
            _fail(t);
          if(((e_35 != NULL) && (e_35 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            e_35 = ATgetArgument(t, 1);
          {
            ATerm e_52 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_35));
      return(t);
    }
    t = oncetd_1_0(q_27, t);
    g_35 = t;
    t = b_35;
    {
      ATerm r_27 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm f_52 = ATgetArgument(t, 0);
            if(match_cons(f_52, sym_Var_1))
              {
                if(((f_35 != NULL) && (f_35 != ATgetArgument(f_52, 0))))
                  _fail(ATgetArgument(f_52, 0));
                else
                  f_35 = ATgetArgument(f_52, 0);
              }
            else
              _fail(t);
            if(((h_35 != NULL) && (h_35 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              h_35 = ATgetArgument(t, 1);
            {
              ATerm g_52 = ATgetArgument(t, 2);
              if(match_cons(g_52, sym_CallT_3))
                {
                  if(((i_35 != NULL) && (i_35 != ATgetArgument(g_52, 0))))
                    _fail(ATgetArgument(g_52, 0));
                  else
                    i_35 = ATgetArgument(g_52, 0);
                  {
                    ATerm h_52 = ATgetArgument(g_52, 1);
                    if(((ATgetType(h_52) != AT_LIST) || !(ATisEmpty(h_52))))
                      _fail(t);
                  }
                  {
                    ATerm i_52 = ATgetArgument(g_52, 2);
                    if(((ATgetType(i_52) != AT_LIST) || !(ATisEmpty(i_52))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, d_35);
        return(t);
      }
      t = oncetd_1_0(r_27, t);
      j_35 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_35), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, g_35, j_35, (ATerm) ATmakeAppl(sym_Seq_2, c_35, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(i_35), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(e_35), not_null(h_35), term_e_49))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(f_35)), (ATerm) ATmakeAppl(sym_Var_1, d_35))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm j_52 = t;
  int k_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_52 = t;
      int p_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Rcon_0_0(t);
          t = desugarRule_0_0(t);
          ;
          LocalPopChoice(p_52);
        }
      else
        {
          t = l_52;
          {
            ATerm q_52 = t;
            int r_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Scope_2_0(_id, desugarRule_0_0, t);
                ;
                LocalPopChoice(r_52);
              }
            else
              {
                t = q_52;
                t = RtoS_0_0(t);
              }
          }
        }
      ;
      LocalPopChoice(k_52);
    }
  else
    {
      t = j_52;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm g_111 (ATerm), ATerm t)
{
  t = g_111(t);
  {
    ATerm s_27 (ATerm t)
    {
      t = topdown_1_0(g_111, t);
      return(t);
    }
    t = SRTS_all(s_27, t);
  }
  return(t);
}
ATerm t_27 (ATerm t)
{
  ATerm s_52 = t;
  int t_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(t_52);
    }
  else
    {
      t = s_52;
    }
  t = repeat_1_0(u_27, t);
  return(t);
}
ATerm u_27 (ATerm t)
{
  ATerm u_52 = t;
  int w_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
      LocalPopChoice(w_52);
    }
  else
    {
      t = u_52;
      {
        ATerm y_52 = t;
        int c_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftCallArgs_0_0(t);
            ;
            LocalPopChoice(c_53);
          }
        else
          {
            t = y_52;
            {
              ATerm g_53 = t;
              int h_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(h_53);
                }
              else
                {
                  t = g_53;
                  {
                    ATerm j_53 = t;
                    int m_53 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(m_53);
                      }
                    else
                      {
                        t = j_53;
                        {
                          ATerm n_53 = t;
                          int p_53 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm q_53 = t;
                              int r_53 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm z_11 = NULL,d_12 = NULL,e_12 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      z_11 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = z_11;
                                  {
                                    ATerm v_27 (ATerm t)
                                    {
                                      if(match_cons(t, sym_RootApp_1))
                                        {
                                          ATerm s_53 = ATgetArgument(t, 0);
                                          if(match_cons(s_53, sym_Match_1))
                                            {
                                              if(((d_12 != NULL) && (d_12 != ATgetArgument(s_53, 0))))
                                                _fail(ATgetArgument(s_53, 0));
                                              else
                                                d_12 = ATgetArgument(s_53, 0);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                      t = not_null(d_12);
                                      return(t);
                                    }
                                    t = pat_td_1_0(v_27, t);
                                    e_12 = t;
                                    t = (ATerm) ATmakeAppl(sym_Match_1, e_12);
                                  }
                                  ;
                                  LocalPopChoice(r_53);
                                }
                              else
                                {
                                  t = q_53;
                                  {
                                    ATerm t_53 = t;
                                    int u_53 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL;
                                        if(match_cons(t, sym_Match_1))
                                          {
                                            o_35 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = o_35;
                                        if(match_cons(t, sym_RootApp_1))
                                          {
                                            p_35 = ATgetArgument(t, 0);
                                            t = p_35;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_App_2))
                                              {
                                                p_35 = ATgetArgument(t, 0);
                                                q_35 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym_BA_2, p_35, q_35);
                                          }
                                        ;
                                        LocalPopChoice(u_53);
                                      }
                                    else
                                      {
                                        t = t_53;
                                        t = Mapp2_0_0(t);
                                      }
                                  }
                                }
                              ;
                              LocalPopChoice(p_53);
                            }
                          else
                            {
                              t = n_53;
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
  t = topdown_1_0(t_27, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm w_27 (ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL;
  h_12 = t;
  t = SSL_explode_term(h_12);
  if(match_cons(t, sym__2))
    {
      ATerm x_53 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_53) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_53 = ATgetArgument(t, 1);
        if(((ATgetType(y_53) == AT_LIST) && !(ATisEmpty(y_53))))
          {
            i_12 = ATgetFirst((ATermList) y_53);
            {
              ATerm z_53 = (ATerm) ATgetNext((ATermList) y_53);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_12;
  return(t);
}
ATerm x_27 (ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,p_4 = NULL,w_4 = NULL;
  n_12 = t;
  t = SSL_explode_term(n_12);
  if(match_cons(t, sym__2))
    {
      ATerm a_54 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_54) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_54 = ATgetArgument(t, 1);
        if(((ATgetType(b_54) == AT_LIST) && !(ATisEmpty(b_54))))
          {
            ATerm c_54 = ATgetFirst((ATermList) b_54);
            o_12 = (ATerm) ATgetNext((ATermList) b_54);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  w_4 = t;
  t = term_a_46;
  p_4 = t;
  t = SSL_mkterm(p_4, o_12);
  return(t);
}
ATerm y_27 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm i_115 (ATerm), ATerm t)
{
  ATerm y_35 = NULL,x_4 = NULL,y_4 = NULL;
  ATerm g_36 (ATerm t)
  {
    ATerm h_54 = t;
    int i_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_36 = NULL,c_36 = NULL,f_36 = NULL;
        a_36 = t;
        t = map_1_0(w_27, t);
        t = i_115(t);
        c_36 = t;
        t = a_36;
        t = map_1_0(x_27, t);
        t = g_36(t);
        f_36 = t;
        t = (ATerm) ATinsert(CheckATermList(f_36), c_36);
        ;
        LocalPopChoice(i_54);
      }
    else
      {
        t = h_54;
        t = map_1_0(y_27, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = g_36(t);
  y_35 = t;
  y_4 = t;
  t = term_a_46;
  x_4 = t;
  t = SSL_mkterm(x_4, y_35);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm i_36 = NULL;
  i_36 = t;
  {
    ATerm j_54 = t;
    int k_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL;
        t = i_36;
        t = new_0_0(t);
        l_36 = t;
        t = new_0_0(t);
        m_36 = t;
        t = new_0_0(t);
        n_36 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_36), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_a_46, (ATerm) ATinsert(ATinsert(ATempty, i_36), (ATerm) ATmakeAppl(sym_Var_1, m_36))), (ATerm) ATmakeAppl(sym_Var_1, n_36)), (ATerm)ATmakeAppl(sym_VarDec_2, l_36, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_48), term_r_48)), m_36, (ATerm)ATmakeAppl(sym_Var_1, m_36), n_36, (ATerm) ATmakeAppl(sym_Var_1, n_36));
        ;
        LocalPopChoice(k_54);
      }
    else
      {
        t = j_54;
        {
          ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL;
          t = i_36;
          t = new_0_0(t);
          p_36 = t;
          t = new_0_0(t);
          q_36 = t;
          t = new_0_0(t);
          r_36 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_36), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_a_46, (ATerm) ATinsert(ATinsert(ATempty, i_36), (ATerm) ATmakeAppl(sym_Var_1, q_36))), (ATerm) ATmakeAppl(sym_Var_1, r_36)), (ATerm)ATmakeAppl(sym_VarDec_2, p_36, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_48), term_r_48)), q_36, (ATerm)ATmakeAppl(sym_Var_1, q_36), r_36, (ATerm) ATmakeAppl(sym_Var_1, r_36));
        }
      }
  }
  return(t);
}
ATerm z_27 (ATerm t)
{
  ATerm s_36 = NULL,t_36 = NULL;
  if(match_cons(t, sym__2))
    {
      s_36 = ATgetArgument(t, 0);
      t_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, s_36, t_36, (ATerm) ATempty);
  return(t);
}
ATerm a_28 (ATerm t)
{
  ATerm u_36 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm l_54 = ATgetArgument(t, 0);
      if(((ATgetType(l_54) != AT_INT) || (ATgetInt((ATermInt) l_54) != 0)))
        _fail(t);
      {
        ATerm m_54 = ATgetArgument(t, 1);
      }
      u_36 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_36;
  return(t);
}
ATerm copy_1_0 (ATerm m_122 (ATerm), ATerm t)
{
  ATerm e_28 (ATerm t)
  {
    ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL;
    if(match_cons(t, sym__3))
      {
        v_36 = ATgetArgument(t, 0);
        w_36 = ATgetArgument(t, 1);
        x_36 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, v_36, term_l_34);
    t = geq_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, v_36, term_l_34);
    {
      ATerm n_54 = t;
      int t_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_5 = NULL,b_5 = NULL;
          b_5 = t;
          t = term_l_34;
          a_5 = t;
          t = SSL_subti(v_36, a_5);
          ;
          LocalPopChoice(t_54);
        }
      else
        {
          t = n_54;
          {
            ATerm c_5 = NULL,d_5 = NULL;
            d_5 = t;
            t = term_l_34;
            c_5 = t;
            t = SSL_subtr(v_36, c_5);
          }
        }
      y_36 = t;
      t = w_36;
      t = m_122(t);
      z_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, y_36, w_36, (ATerm) ATinsert(CheckATermList(x_36), z_36));
    }
    return(t);
  }
  t = for_3_0(z_27, a_28, e_28, t);
  return(t);
}
ATerm MkThreadApplication_0_0 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL;
  if(match_cons(t, sym__2))
    {
      a_37 = ATgetArgument(t, 0);
      b_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = new_0_0(t);
  c_37 = t;
  t = new_0_0(t);
  d_37 = t;
  t = new_0_0(t);
  e_37 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, c_37), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_a_46, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, a_37)), (ATerm) ATmakeAppl(sym_Var_1, d_37))), (ATerm) ATmakeAppl(sym_Op_2, term_a_46, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, b_37)), (ATerm) ATmakeAppl(sym_Var_1, e_37)))), (ATerm)ATmakeAppl(sym_VarDec_2, c_37, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_48), term_r_48)), d_37, (ATerm)ATmakeAppl(sym_Var_1, d_37), e_37, (ATerm) ATmakeAppl(sym_Var_1, e_37));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_37 = ATgetFirst((ATermList) t);
      j_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_37;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm u_54 = t;
      int v_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_37;
          ;
          LocalPopChoice(v_54);
        }
      else
        {
          t = u_54;
          t = j_37;
          t = last_0_0(t);
        }
    }
  else
    {
      t = j_37;
      t = last_0_0(t);
    }
  return(t);
}
ATerm q_39 (ATerm v_37, ATerm w_37, ATerm x_37, ATerm y_37, ATerm t)
{
  ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_37, term_l_34);
  {
    ATerm x_54 = t;
    int b_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_5 = NULL,f_5 = NULL;
        f_5 = t;
        t = term_l_34;
        e_5 = t;
        t = SSL_addi(w_37, e_5);
        ;
        LocalPopChoice(b_55);
      }
    else
      {
        t = x_54;
        {
          ATerm g_5 = NULL,h_5 = NULL;
          h_5 = t;
          t = term_l_34;
          g_5 = t;
          t = SSL_addr(w_37, g_5);
        }
      }
    c_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_38, term_z_17);
    t = copy_1_0(new_0_0, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_38 = ATgetFirst((ATermList) t);
        e_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = e_38;
    t = last_0_0(t);
    f_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_38), d_38), e_38);
    t = genzip_4_0(f_28, h_28, i_28, MkThreadApplication_0_0, t);
    t = tuple_unzip_1_0(_id, t);
    if(match_cons(t, sym__6))
      {
        g_38 = ATgetArgument(t, 0);
        h_38 = ATgetArgument(t, 1);
        i_38 = ATgetArgument(t, 2);
        j_38 = ATgetArgument(t, 3);
        k_38 = ATgetArgument(t, 4);
        l_38 = ATgetArgument(t, 5);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_38), i_38), e_38);
    t = concat_0_0(t);
    m_38 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, v_37, term_c_55), h_38, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(m_38), d_38), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_a_46, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, d_38)), (ATerm) ATmakeAppl(sym_Op_2, v_37, j_38))), (ATerm)ATmakeAppl(sym_Op_2, term_a_46, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, f_38)), (ATerm) ATmakeAppl(sym_Op_2, v_37, l_38))), (ATerm) ATmakeAppl(sym_Seqs_1, g_38)))));
  }
  return(t);
}
ATerm s_39 (ATerm t_38, ATerm u_38, ATerm v_38, ATerm w_38, ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL;
  t = w_38;
  t = new_0_0(t);
  a_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_38, (ATerm) ATmakeAppl(sym_Var_1, a_39));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      b_39 = ATgetArgument(t, 0);
      c_39 = ATgetArgument(t, 1);
      d_39 = ATgetArgument(t, 2);
      e_39 = ATgetArgument(t, 3);
      f_39 = ATgetArgument(t, 4);
      g_39 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_39, f_39);
  t = conc_0_0(t);
  h_39 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, t_38, term_f_55), c_39, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(h_39), a_39), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_a_46, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, a_39)), (ATerm) ATmakeAppl(sym_Op_2, t_38, e_39))), (ATerm)ATmakeAppl(sym_Op_2, t_38, g_39), (ATerm) ATmakeAppl(sym_Seqs_1, b_39)))));
  return(t);
}
ATerm f_28 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_55 = ATgetArgument(t, 0);
      ATerm i_55 = ATgetArgument(t, 1);
      if(((ATgetType(i_55) != AT_LIST) || !(ATisEmpty(i_55))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_28 (ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_55 = ATgetArgument(t, 0);
      if(((ATgetType(j_55) == AT_LIST) && !(ATisEmpty(j_55))))
        {
          n_38 = ATgetFirst((ATermList) j_55);
          p_38 = (ATerm) ATgetNext((ATermList) j_55);
        }
      else
        _fail(t);
      {
        ATerm l_55 = ATgetArgument(t, 1);
        if(((ATgetType(l_55) == AT_LIST) && !(ATisEmpty(l_55))))
          {
            o_38 = ATgetFirst((ATermList) l_55);
            q_38 = (ATerm) ATgetNext((ATermList) l_55);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_38, o_38), (ATerm) ATmakeAppl(sym__2, p_38, q_38));
  return(t);
}
ATerm i_28 (ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL;
  if(match_cons(t, sym__2))
    {
      r_38 = ATgetArgument(t, 0);
      s_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_38), r_38);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL;
  i_39 = t;
  if(match_cons(t, sym__3))
    {
      j_39 = ATgetArgument(t, 0);
      k_39 = ATgetArgument(t, 1);
      l_39 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = k_39;
  if(match_string(t, "T"))
    {
      t = l_39;
      if(match_cons(t, sym__2))
        {
          m_39 = ATgetArgument(t, 0);
          n_39 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_39;
      if(match_int(t, 0))
        {
          ATerm m_55 = t;
          int n_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_39(j_39, m_39, n_39, i_39, t);
              ;
              LocalPopChoice(n_55);
            }
          else
            {
              t = m_55;
              {
                ATerm p_39 = NULL;
                t = i_39;
                t = new_0_0(t);
                p_39 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, j_39, term_c_55), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_39), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_a_46, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, p_39)), (ATerm) ATmakeAppl(sym_Op_2, j_39, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_a_46, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, p_39)), (ATerm) ATmakeAppl(sym_Op_2, j_39, (ATerm) ATempty))), term_e_49))));
              }
            }
        }
      else
        {
          t = q_39(j_39, m_39, n_39, i_39, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = l_39;
      if(match_cons(t, sym__2))
        {
          m_39 = ATgetArgument(t, 0);
          n_39 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_39(j_39, m_39, n_39, i_39, t);
    }
  return(t);
}
ATerm CongruenceDef_0_0 (ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_55 = ATgetArgument(t, 0);
      if(match_cons(o_55, sym__2))
        {
          ATerm p_55 = ATgetArgument(o_55, 0);
          if(match_cons(p_55, sym_Mod_2))
            {
              t_39 = ATgetArgument(p_55, 0);
              u_39 = ATgetArgument(p_55, 1);
            }
          else
            _fail(t);
          v_39 = ATgetArgument(o_55, 1);
        }
      else
        _fail(t);
      w_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, t_39, u_39, v_39);
  t = DefineCongruence_0_0(t);
  t = desugar_0_0(t);
  x_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_39, w_39);
  return(t);
}
ATerm j_28 (ATerm t)
{
  ATerm q_55 = t;
  int r_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_40 = NULL,c_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_40 = ATgetFirst((ATermList) t);
          c_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_40;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_40;
      ;
      LocalPopChoice(r_55);
    }
  else
    {
      t = q_55;
      t = JoinDefs2_0_0(t);
    }
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm s_55 = t;
  int t_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0_0(t);
      ;
      LocalPopChoice(t_55);
    }
  else
    {
      t = s_55;
      {
        ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm u_55 = ATgetArgument(t, 0);
            if(match_cons(u_55, sym__2))
              {
                x_12 = ATgetArgument(u_55, 0);
                y_12 = ATgetArgument(u_55, 1);
              }
            else
              _fail(t);
            z_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, x_12, y_12);
        t = Definitions_0_0(t);
        a_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_13, z_12);
        t = _2_0(j_28, _id, t);
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm x_117 (ATerm), ATerm t)
{
  ATerm p_40 (ATerm t)
  {
    ATerm y_55 = t;
    int z_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, p_40, t);
        ;
        LocalPopChoice(z_55);
      }
    else
      {
        t = y_55;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_117(t);
      }
    return(t);
  }
  t = p_40(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_56 = t;
  int d_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(d_56);
    }
  else
    {
      t = b_56;
      {
        ATerm k_40 = NULL,l_40 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_40 = ATgetFirst((ATermList) t);
            l_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_40;
        {
          ATerm k_28 (ATerm t)
          {
            t = l_40;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(k_28, t);
        }
      }
    }
  return(t);
}
ATerm a_41 (ATerm s_40, ATerm t)
{
  ATerm u_40 = NULL;
  t = SSL_explode_term(s_40);
  if(match_cons(t, sym__2))
    {
      ATerm h_56 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_56) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      u_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_40;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL;
  x_40 = t;
  if(match_cons(t, sym__2))
    {
      v_40 = ATgetArgument(t, 0);
      w_40 = ATgetArgument(t, 1);
      {
        ATerm k_56 = t;
        int l_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_28 (ATerm t)
            {
              t = w_40;
              return(t);
            }
            t = v_40;
            t = at_end_1_0(l_28, t);
            ;
            LocalPopChoice(l_56);
          }
        else
          {
            t = k_56;
            t = a_41(x_40, t);
          }
      }
    }
  else
    {
      t = a_41(x_40, t);
    }
  return(t);
}
ATerm diff_1_0 (ATerm e_119 (ATerm), ATerm t)
{
  ATerm b_41 = NULL,d_41 = NULL;
  if(match_cons(t, sym__2))
    {
      b_41 = ATgetArgument(t, 0);
      d_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_41;
  {
    ATerm e_41 (ATerm t)
    {
      ATerm m_56 = t;
      int t_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(t_56);
        }
      else
        {
          t = m_56;
          {
            ATerm u_56 = t;
            int a_57 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_13 = NULL,c_13 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    b_13 = ATgetFirst((ATermList) t);
                    c_13 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = d_41;
                {
                  ATerm m_28 (ATerm t)
                  {
                    ATerm d_13 = NULL;
                    d_13 = t;
                    t = (ATerm) ATmakeAppl(sym__2, b_13, d_13);
                    t = e_119(t);
                    return(t);
                  }
                  t = fetch_1_0(m_28, t);
                  t = c_13;
                  t = e_41(t);
                }
                ;
                LocalPopChoice(a_57);
              }
            else
              {
                t = u_56;
                t = Cons_2_0(_id, e_41, t);
              }
          }
        }
      return(t);
    }
    t = e_41(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm s_115 (ATerm), ATerm t_115 (ATerm), ATerm u_115 (ATerm), ATerm v_115 (ATerm), ATerm t)
{
  ATerm f_41 (ATerm t)
  {
    ATerm b_57 = t;
    int c_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_115(t);
        ;
        LocalPopChoice(c_57);
      }
    else
      {
        t = b_57;
        t = t_115(t);
        t = _2_0(v_115, f_41, t);
        t = u_115(t);
      }
    return(t);
  }
  t = f_41(t);
  return(t);
}
ATerm q_28 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_57 = ATgetArgument(t, 0);
      if(((ATgetType(f_57) != AT_LIST) || !(ATisEmpty(f_57))))
        _fail(t);
      {
        ATerm g_57 = ATgetArgument(t, 1);
        if(((ATgetType(g_57) != AT_LIST) || !(ATisEmpty(g_57))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_28 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_57 = ATgetArgument(t, 0);
      if(((ATgetType(h_57) == AT_LIST) && !(ATisEmpty(h_57))))
        {
          n_41 = ATgetFirst((ATermList) h_57);
          p_41 = (ATerm) ATgetNext((ATermList) h_57);
        }
      else
        _fail(t);
      {
        ATerm i_57 = ATgetArgument(t, 1);
        if(((ATgetType(i_57) == AT_LIST) && !(ATisEmpty(i_57))))
          {
            o_41 = ATgetFirst((ATermList) i_57);
            q_41 = (ATerm) ATgetNext((ATermList) i_57);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_41, o_41), (ATerm) ATmakeAppl(sym__2, p_41, q_41));
  return(t);
}
ATerm t_28 (ATerm t)
{
  ATerm r_41 = NULL,s_41 = NULL;
  if(match_cons(t, sym__2))
    {
      r_41 = ATgetArgument(t, 0);
      s_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_41), r_41);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_57 = ATgetFirst((ATermList) t);
      if(match_cons(l_57, sym__2))
        {
          g_41 = ATgetArgument(l_57, 0);
          h_41 = ATgetArgument(l_57, 1);
        }
      else
        _fail(t);
      i_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(h_41);
  if(match_cons(t, sym__2))
    {
      j_41 = ATgetArgument(t, 0);
      k_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(g_41);
  if(match_cons(t, sym__2))
    {
      if((j_41 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      l_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_41, k_41);
  t = genzip_4_0(q_28, s_28, t_28, _id, t);
  m_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_41, i_41);
  t = conc_0_0(t);
  return(t);
}
ATerm u_28 (ATerm t)
{
  ATerm z_41 = NULL;
  z_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, z_41);
  return(t);
}
ATerm v_28 (ATerm t)
{
  t = _2_0(_id, a_29, t);
  return(t);
}
ATerm w_28 (ATerm t)
{
  ATerm n_57 = t;
  int p_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, c_29, t);
      ;
      LocalPopChoice(p_57);
    }
  else
    {
      t = n_57;
      {
        ATerm k_42 = NULL,o_42 = NULL,p_42 = NULL,t_42 = NULL;
        if(match_cons(t, sym__2))
          {
            k_42 = ATgetArgument(t, 0);
            o_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_42;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_42 = ATgetFirst((ATermList) t);
            t_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_42), p_42), t_42);
      }
    }
  return(t);
}
ATerm a_29 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm c_29 (ATerm t)
{
  ATerm q_57 = t;
  int r_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_42 = ATgetFirst((ATermList) t);
          e_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_42;
      if(match_cons(t, sym__2))
        {
          c_42 = ATgetArgument(t, 0);
          d_42 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_42;
      if((c_42 != t))
        {
          _fail(t);
        }
      t = e_42;
      ;
      LocalPopChoice(r_57);
    }
  else
    {
      t = q_57;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm d_29 (ATerm t)
{
  ATerm x_42 = NULL;
  if(match_cons(t, sym__2))
    {
      x_42 = ATgetArgument(t, 0);
      if((x_42 != ATgetArgument(t, 1)))
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
  ATerm s_57 = t;
  int t_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(u_28, v_28, w_28, t);
      ;
      LocalPopChoice(t_57);
    }
  else
    {
      t = s_57;
      t = diff_1_0(d_29, t);
    }
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm j_140 (ATerm), ATerm k_140 (ATerm), ATerm l_140 (ATerm), ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,i_43 = NULL,j_43 = NULL,l_43 = NULL,m_43 = NULL,o_43 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm u_57 = ATgetArgument(t, 0);
      if(((ATgetType(u_57) == AT_LIST) && !(ATisEmpty(u_57))))
        {
          y_42 = ATgetFirst((ATermList) u_57);
          z_42 = (ATerm) ATgetNext((ATermList) u_57);
        }
      else
        _fail(t);
      a_43 = ATgetArgument(t, 1);
      b_43 = ATgetArgument(t, 2);
      c_43 = ATgetArgument(t, 3);
      d_43 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_42, b_43);
  t = j_140(t);
  if(match_cons(t, sym__2))
    {
      e_43 = ATgetArgument(t, 0);
      f_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_43;
  t = k_140(t);
  i_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_43, a_43);
  t = diff_0_0(t);
  j_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_43, z_42);
  t = conc_0_0(t);
  l_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_43, a_43);
  t = conc_0_0(t);
  m_43 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_42, e_43, c_43);
  t = l_140(t);
  o_43 = t;
  t = (ATerm) ATmakeAppl(sym__5, l_43, m_43, f_43, o_43, d_43);
  return(t);
}
ATerm while_not_2_0 (ATerm h_128 (ATerm), ATerm i_128 (ATerm), ATerm t)
{
  ATerm p_43 (ATerm t)
  {
    ATerm z_57 = t;
    int a_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_128(t);
        ;
        LocalPopChoice(a_58);
      }
    else
      {
        t = z_57;
        t = i_128(t);
        t = p_43(t);
      }
    return(t);
  }
  t = p_43(t);
  return(t);
}
ATerm for_3_0 (ATerm k_128 (ATerm), ATerm l_128 (ATerm), ATerm m_128 (ATerm), ATerm t)
{
  t = k_128(t);
  t = while_not_2_0(l_128, m_128, t);
  return(t);
}
ATerm e_29 (ATerm t)
{
  ATerm u_43 = NULL,v_43 = NULL,x_43 = NULL;
  if(match_cons(t, sym__3))
    {
      u_43 = ATgetArgument(t, 0);
      v_43 = ATgetArgument(t, 1);
      x_43 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, u_43, u_43, v_43, x_43, (ATerm) ATempty);
  return(t);
}
ATerm f_29 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm b_58 = ATgetArgument(t, 0);
      if(((ATgetType(b_58) != AT_LIST) || !(ATisEmpty(b_58))))
        _fail(t);
      {
        ATerm c_58 = ATgetArgument(t, 1);
      }
      {
        ATerm e_58 = ATgetArgument(t, 2);
      }
      y_43 = ATgetArgument(t, 3);
      z_43 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_43, z_43);
  return(t);
}
ATerm g_29 (ATerm t)
{
  ATerm f_58 = t;
  int l_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, h_29, i_29, t);
      ;
      LocalPopChoice(l_58);
    }
  else
    {
      t = f_58;
      {
        ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL;
        if(match_cons(t, sym__5))
          {
            d_44 = ATgetArgument(t, 0);
            g_44 = ATgetArgument(t, 1);
            i_44 = ATgetArgument(t, 2);
            j_44 = ATgetArgument(t, 3);
            k_44 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = d_44;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_44 = ATgetFirst((ATermList) t);
            f_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, f_44, g_44, i_44, j_44, (ATerm) ATinsert(CheckATermList(k_44), e_44));
      }
    }
  return(t);
}
ATerm h_29 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(j_29, t);
  return(t);
}
ATerm i_29 (ATerm t)
{
  ATerm a_44 = NULL,b_44 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm m_58 = ATgetArgument(t, 0);
      a_44 = ATgetArgument(t, 1);
      b_44 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_44), a_44);
  return(t);
}
ATerm j_29 (ATerm t)
{
  ATerm n_58 = t;
  int o_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      ;
      LocalPopChoice(o_58);
    }
  else
    {
      t = n_58;
    }
  return(t);
}
ATerm k_29 (ATerm t)
{
  ATerm p_58 = t;
  int q_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MissingDefMod_0_0(t);
      ;
      LocalPopChoice(q_58);
    }
  else
    {
      t = p_58;
      t = MissingDef_0_0(t);
    }
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  t = for_3_0(e_29, f_29, g_29, t);
  {
    ATerm r_58 = t;
    int s_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_44 = NULL,t_44 = NULL;
        if(match_cons(t, sym__2))
          {
            s_44 = ATgetArgument(t, 0);
            t_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_44;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_44;
        ;
        LocalPopChoice(s_58);
      }
    else
      {
        t = r_58;
        {
          ATerm o_13 = NULL,p_13 = NULL,i_5 = NULL,j_5 = NULL;
          if(match_cons(t, sym__2))
            {
              ATerm t_58 = ATgetArgument(t, 0);
              ATerm u_58 = ATgetArgument(t, 1);
              if(((ATgetType(u_58) == AT_LIST) && !(ATisEmpty(u_58))))
                {
                  o_13 = ATgetFirst((ATermList) u_58);
                  p_13 = (ATerm) ATgetNext((ATermList) u_58);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(p_13), o_13);
          t = map_1_0(k_29, t);
          j_5 = t;
          t = term_l_34;
          i_5 = t;
          t = SSL_exit(i_5);
        }
      }
  }
  return(t);
}
ATerm assert_1_0 (ATerm i_123 (ATerm), ATerm t)
{
  ATerm v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,r_5 = NULL,w_5 = NULL,z_5 = NULL,c_6 = NULL;
  if(match_cons(t, sym__2))
    {
      v_44 = ATgetArgument(t, 0);
      w_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_123(t);
  x_44 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_44, v_44, w_44);
  t = table_push_0_0(t);
  {
    ATerm v_58 = t;
    int w_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_5 = NULL,p_5 = NULL;
        p_5 = t;
        t = term_x_58;
        m_5 = t;
        t = SSL_table_get(x_44, m_5);
        ;
        LocalPopChoice(w_58);
      }
    else
      {
        t = v_58;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_44 = ATgetFirst((ATermList) t);
        z_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    z_5 = t;
    t = term_x_58;
    r_5 = t;
    t = z_5;
    c_6 = t;
    t = (ATerm) ATinsert(CheckATermList(z_44), (ATerm) ATinsert(CheckATermList(y_44), v_44));
    w_5 = t;
    t = SSL_table_put(x_44, r_5, w_5);
    t = (ATerm) ATmakeAppl(sym__2, v_44, w_44);
  }
  return(t);
}
ATerm union_1_0 (ATerm j_119 (ATerm), ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL;
  if(match_cons(t, sym__2))
    {
      d_45 = ATgetArgument(t, 0);
      e_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_45;
  {
    ATerm f_45 (ATerm t)
    {
      ATerm y_58 = t;
      int z_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = e_45;
          ;
          LocalPopChoice(z_58);
        }
      else
        {
          t = y_58;
          {
            ATerm a_59 = t;
            int b_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_13 = NULL,s_13 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    q_13 = ATgetFirst((ATermList) t);
                    s_13 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = e_45;
                {
                  ATerm l_29 (ATerm t)
                  {
                    ATerm t_13 = NULL;
                    t_13 = t;
                    t = (ATerm) ATmakeAppl(sym__2, q_13, t_13);
                    t = j_119(t);
                    return(t);
                  }
                  t = fetch_1_0(l_29, t);
                  t = s_13;
                  t = f_45(t);
                }
                ;
                LocalPopChoice(b_59);
              }
            else
              {
                t = a_59;
                t = Cons_2_0(_id, f_45, t);
              }
          }
        }
      return(t);
    }
    t = f_45(t);
  }
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm o_45 = NULL;
  o_45 = t;
  {
    ATerm c_59 = t;
    int d_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_14 = NULL,l_14 = NULL,d_6 = NULL,e_6 = NULL;
        t = term_e_59;
        e_6 = t;
        t = term_e_59;
        d_6 = t;
        t = SSL_table_get(d_6, o_45);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_14 = ATgetFirst((ATermList) t);
            {
              ATerm f_59 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = l_14;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm g_59 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_59) != ATmakeSymbol("r_0", 0, ATtrue)))
              _fail(t);
            h_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_14;
        ;
        LocalPopChoice(d_59);
      }
    else
      {
        t = c_59;
        {
          ATerm p_14 = NULL,t_14 = NULL,g_6 = NULL,n_6 = NULL;
          t = term_e_59;
          n_6 = t;
          t = term_e_59;
          g_6 = t;
          t = SSL_table_get(g_6, o_45);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_14 = ATgetFirst((ATermList) t);
              {
                ATerm h_59 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = t_14;
          if(match_cons(t, sym_Defined_2))
            {
              ATerm i_59 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) i_59) != ATmakeSymbol("l_0", 0, ATtrue)))
                _fail(t);
              p_14 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_14;
        }
      }
  }
  return(t);
}
ATerm n_46 (ATerm d_46, ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL,c_15 = NULL,o_6 = NULL,p_6 = NULL;
  t = term_j_59;
  p_6 = t;
  t = term_j_59;
  o_6 = t;
  t = SSL_table_get(o_6, d_46);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_15 = ATgetFirst((ATermList) t);
      {
        ATerm k_59 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = c_15;
  if(match_cons(t, sym_Defined_3))
    {
      ATerm l_59 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_59) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
      f_46 = ATgetArgument(t, 1);
      g_46 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_46), f_46);
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm j_46 = NULL,l_46 = NULL;
  j_46 = t;
  if(match_cons(t, sym__2))
    {
      ATerm m_59 = ATgetArgument(t, 0);
      l_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_46;
  {
    ATerm n_59 = t;
    int o_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_59 = ATgetArgument(t, 0);
            ATerm q_59 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(o_59);
        {
          ATerm r_59 = t;
          int s_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_15 = NULL,l_15 = NULL,r_6 = NULL,u_6 = NULL;
              t = term_j_59;
              u_6 = t;
              t = term_j_59;
              r_6 = t;
              t = SSL_table_get(r_6, j_46);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_15 = ATgetFirst((ATermList) t);
                  {
                    ATerm t_59 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = l_15;
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm u_59 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) u_59) != ATmakeSymbol("o_0", 0, ATtrue)))
                    _fail(t);
                  g_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = g_15;
              ;
              LocalPopChoice(s_59);
            }
          else
            {
              t = r_59;
              t = n_46(j_46, t);
            }
        }
      }
    else
      {
        t = n_59;
        t = n_46(j_46, t);
      }
  }
  return(t);
}
ATerm foldr_3_0 (ATerm z_121 (ATerm), ATerm a_122 (ATerm), ATerm b_122 (ATerm), ATerm t)
{
  ATerm v_59 = t;
  int w_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_121(t);
      ;
      LocalPopChoice(w_59);
    }
  else
    {
      t = v_59;
      {
        ATerm q_46 = NULL,r_46 = NULL,u_46 = NULL,v_46 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_46 = ATgetFirst((ATermList) t);
            r_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_46;
        t = b_122(t);
        u_46 = t;
        t = r_46;
        t = foldr_3_0(z_121, a_122, b_122, t);
        v_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_46, v_46);
        t = a_122(t);
      }
    }
  return(t);
}
ATerm m_29 (ATerm t)
{
  t = term_s_42;
  return(t);
}
ATerm n_29 (ATerm t)
{
  ATerm n_47 = NULL,o_47 = NULL;
  if(match_cons(t, sym__2))
    {
      n_47 = ATgetArgument(t, 0);
      o_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_59 = t;
    int y_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(n_47, o_47);
        ;
        LocalPopChoice(y_59);
      }
    else
      {
        t = x_59;
        t = SSL_addr(n_47, o_47);
      }
  }
  return(t);
}
ATerm o_29 (ATerm t)
{
  t = term_l_34;
  return(t);
}
ATerm p_29 (ATerm t)
{
  t = term_s_42;
  return(t);
}
ATerm q_29 (ATerm t)
{
  ATerm p_47 = NULL,q_47 = NULL;
  if(match_cons(t, sym__2))
    {
      p_47 = ATgetArgument(t, 0);
      q_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_59 = t;
    int a_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(p_47, q_47);
        ;
        LocalPopChoice(a_60);
      }
    else
      {
        t = z_59;
        t = SSL_addr(p_47, q_47);
      }
  }
  return(t);
}
ATerm r_29 (ATerm t)
{
  t = term_l_34;
  return(t);
}
ATerm y_29 (ATerm t)
{
  ATerm r_47 = NULL;
  if(match_cons(t, sym__2))
    {
      r_47 = ATgetArgument(t, 0);
      if((r_47 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm z_29 (ATerm t)
{
  t = term_j_59;
  return(t);
}
ATerm a_30 (ATerm t)
{
  t = term_e_59;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL;
  w_46 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      x_46 = ATgetArgument(t, 0);
      y_46 = ATgetArgument(t, 1);
      z_46 = ATgetArgument(t, 2);
      {
        ATerm b_60 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  a_47 = t;
  t = y_46;
  t = foldr_3_0(m_29, n_29, o_29, t);
  d_47 = t;
  t = z_46;
  t = foldr_3_0(p_29, q_29, r_29, t);
  e_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_46, (ATerm) ATmakeAppl(sym__2, d_47, e_47));
  {
    ATerm c_60 = t;
    int d_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        ;
        LocalPopChoice(d_60);
      }
    else
      {
        t = c_60;
        t = (ATerm) ATempty;
      }
    f_47 = t;
    t = x_46;
    {
      ATerm e_60 = t;
      int f_60 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Arities_0_0(t);
          ;
          LocalPopChoice(f_60);
        }
      else
        {
          t = e_60;
          t = (ATerm) ATempty;
        }
      g_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, d_47, e_47)), g_47);
      t = union_1_0(y_29, t);
      h_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_46, (ATerm) ATmakeAppl(sym__2, d_47, e_47)), (ATerm) ATmakeAppl(sym_Defined_2, term_g_60, (ATerm) ATinsert(CheckATermList(f_47), w_46)));
      t = assert_1_0(z_29, t);
      t = (ATerm) ATmakeAppl(sym__2, x_46, (ATerm) ATmakeAppl(sym_Defined_2, term_h_60, h_47));
      t = assert_1_0(a_30, t);
      t = a_47;
    }
  }
  return(t);
}
ATerm needed_defs_0_0 (ATerm t)
{
  ATerm s_47 = NULL;
  t = map_1_0(RegisterSDefT_0_0, t);
  s_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_k_60), s_47, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm z_95 (ATerm), ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,v_6 = NULL,w_6 = NULL;
  w_47 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      u_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_47);
  t_47 = t;
  t = u_47;
  t = z_95(t);
  v_47 = t;
  w_6 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, v_47);
  v_6 = t;
  t = SSLsetAnnotations(v_6, t_47);
  return(t);
}
ATerm Cons_2_0 (ATerm v_95 (ATerm), ATerm w_95 (ATerm), ATerm t)
{
  ATerm z_47 = NULL,a_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL,y_6 = NULL,z_6 = NULL;
  g_48 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_48 = ATgetFirst((ATermList) t);
      d_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_48);
  z_47 = t;
  t = a_48;
  t = v_95(t);
  e_48 = t;
  t = d_48;
  t = w_95(t);
  f_48 = t;
  z_6 = t;
  t = (ATerm) ATinsert(CheckATermList(f_48), e_48);
  y_6 = t;
  t = SSLsetAnnotations(y_6, z_47);
  return(t);
}
ATerm Specification_1_0 (ATerm e_96 (ATerm), ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,a_7 = NULL,b_7 = NULL;
  m_48 = t;
  if(match_cons(t, sym_Specification_1))
    {
      k_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_48);
  j_48 = t;
  t = k_48;
  t = e_96(t);
  l_48 = t;
  b_7 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, l_48);
  a_7 = t;
  t = SSLsetAnnotations(a_7, j_48);
  return(t);
}
ATerm _2_0 (ATerm g_91 (ATerm), ATerm h_91 (ATerm), ATerm t)
{
  ATerm w_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,c_7 = NULL,d_7 = NULL;
  d_49 = t;
  if(match_cons(t, sym__2))
    {
      z_48 = ATgetArgument(t, 0);
      a_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_49);
  w_48 = t;
  t = z_48;
  t = g_91(t);
  b_49 = t;
  t = a_49;
  t = h_91(t);
  c_49 = t;
  d_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_49, c_49);
  c_7 = t;
  t = SSLsetAnnotations(c_7, w_48);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm a_133 (ATerm), ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL;
  if(match_cons(t, sym__2))
    {
      g_49 = ATgetArgument(t, 0);
      h_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_49, term_l_60);
  t = open_stream_0_0(t);
  i_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_49, h_49);
  t = a_133(t);
  t = fclose_0_0(t);
  t = h_49;
  return(t);
}
ATerm r_30 (ATerm t)
{
  t = fetch_1_0(v_30, t);
  return(t);
}
ATerm u_30 (ATerm t)
{
  t = WriteToFile_1_0(w_30, t);
  return(t);
}
ATerm v_30 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm w_30 (ATerm t)
{
  ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_60 = ATgetArgument(t, 0);
      if(match_cons(m_60, sym_Stream_1))
        {
          l_49 = ATgetArgument(m_60, 0);
        }
      else
        _fail(t);
      m_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(l_49, m_49);
  n_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_49);
  return(t);
}
ATerm y_30 (ATerm t)
{
  t = WriteToFile_1_0(z_30, t);
  return(t);
}
ATerm z_30 (ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL,f_7 = NULL,g_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_60 = ATgetArgument(t, 0);
      if(match_cons(n_60, sym_Stream_1))
        {
          o_49 = ATgetArgument(n_60, 0);
        }
      else
        _fail(t);
      p_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(o_49, p_49);
  q_49 = t;
  g_7 = t;
  t = term_o_60;
  f_7 = t;
  t = SSL_fputc(f_7, q_49);
  r_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_49);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL;
  j_49 = t;
  {
    ATerm i_30 (ATerm t)
    {
      ATerm p_60 = t;
      int q_60 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_30 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((k_49 != NULL) && (k_49 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_49 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(o_30, t);
          ;
          LocalPopChoice(q_60);
        }
      else
        {
          t = p_60;
          t = term_r_60;
          if(((k_49 != NULL) && (k_49 != t)))
            _fail(t);
          else
            k_49 = t;
        }
      return(t);
    }
    t = _2_0(i_30, _id, t);
    t = j_49;
    {
      ATerm p_30 (ATerm t)
      {
        ATerm n_15 = NULL;
        n_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_49), n_15);
        return(t);
      }
      t = _2_0(_id, p_30, t);
      {
        ATerm s_60 = t;
        int t_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(r_30, u_30, t);
            ;
            LocalPopChoice(t_60);
          }
        else
          {
            t = s_60;
            t = _2_0(_id, y_30, t);
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
ATerm apply_strategy_1_0 (ATerm c_136 (ATerm), ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL,w_49 = NULL;
  s_49 = t;
  t = dtime_0_0(t);
  t = s_49;
  t = c_136(t);
  t_49 = t;
  t = dtime_0_0(t);
  u_49 = t;
  t = t_49;
  if(match_cons(t, sym__2))
    {
      v_49 = ATgetArgument(t, 0);
      w_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_49), (ATerm) ATmakeAppl(sym_Runtime_1, u_49)), w_49);
  return(t);
}
ATerm u_50 (ATerm i_50, ATerm t)
{
  t = SSL_fclose(i_50);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_50 = NULL,m_50 = NULL;
  m_50 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_50 = ATgetArgument(t, 0);
      {
        ATerm u_60 = t;
        int v_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_50);
            ;
            LocalPopChoice(v_60);
          }
        else
          {
            t = u_60;
            t = u_50(m_50, t);
          }
      }
    }
  else
    {
      t = u_50(m_50, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm v_50 = NULL;
  t = SSL_stdin_stream();
  v_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_50);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm w_50 = NULL;
  t = SSL_stdout_stream();
  w_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_50);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm x_50 = NULL;
  t = SSL_stderr_stream();
  x_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_50);
  return(t);
}
ATerm e_31 (ATerm t)
{
  ATerm f_51 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      f_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_51;
  return(t);
}
ATerm f_31 (ATerm t)
{
  ATerm j_51 = NULL;
  j_51 = t;
  t = SSL_is_string(j_51);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_60 = ATgetArgument(t, 0);
      ATerm x_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_60 = t;
    int z_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_16 = NULL,c_16 = NULL;
        b_16 = t;
        t = SSL_explode_term(b_16);
        if(match_cons(t, sym__2))
          {
            ATerm a_61 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) a_61) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm b_61 = ATgetArgument(t, 1);
              if(((ATgetType(b_61) == AT_LIST) && !(ATisEmpty(b_61))))
                {
                  c_16 = ATgetFirst((ATermList) b_61);
                  {
                    ATerm c_61 = (ATerm) ATgetNext((ATermList) b_61);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = c_16;
        if(match_cons(t, sym_stderr_0))
          {
            t = c_16;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = c_16;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = c_16;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(z_60);
      }
    else
      {
        t = y_60;
        {
          ATerm d_61 = t;
          int e_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_51 = NULL,d_51 = NULL,e_51 = NULL;
              t = _2_0(e_31, _id, t);
              if(match_cons(t, sym__2))
                {
                  c_51 = ATgetArgument(t, 0);
                  d_51 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(c_51, d_51);
              e_51 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, e_51);
              ;
              LocalPopChoice(e_61);
            }
          else
            {
              t = d_61;
              {
                ATerm g_51 = NULL,h_51 = NULL,i_51 = NULL;
                t = _2_0(f_31, _id, t);
                if(match_cons(t, sym__2))
                  {
                    g_51 = ATgetArgument(t, 0);
                    h_51 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(g_51, h_51);
                i_51 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, i_51);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_51 = NULL,l_51 = NULL,m_51 = NULL;
  ATerm f_61 = t;
  int g_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_51 = NULL;
      n_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_51, term_h_61);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(g_61);
    }
  else
    {
      t = f_61;
      {
        ATerm d_16 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL;
        d_16 = t;
        t = term_i_61;
        j_7 = t;
        t = term_e_34;
        h_7 = t;
        t = j_7;
        k_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, d_16), term_i_61);
        i_7 = t;
        t = SSL_printnl(h_7, i_7);
        t = d_16;
        _fail(t);
      }
    }
  k_51 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(m_51);
  l_51 = t;
  t = k_51;
  t = fclose_0_0(t);
  t = l_51;
  return(t);
}
ATerm fetch_1_0 (ATerm r_117 (ATerm), ATerm t)
{
  ATerm s_51 (ATerm t)
  {
    ATerm j_61 = t;
    int k_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(r_117, _id, t);
        ;
        LocalPopChoice(k_61);
      }
    else
      {
        t = j_61;
        t = Cons_2_0(_id, s_51, t);
      }
    return(t);
  }
  t = s_51(t);
  return(t);
}
ATerm g_31 (ATerm t)
{
  ATerm l_61 = t;
  int m_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(m_61);
    }
  else
    {
      t = l_61;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm n_61 = t;
  int o_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_52 = NULL;
      b_52 = t;
      t = SSL_is_string(b_52);
      ;
      LocalPopChoice(o_61);
    }
  else
    {
      t = n_61;
      {
        ATerm p_61 = t;
        int q_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(g_31, t);
            ;
            LocalPopChoice(q_61);
          }
        else
          {
            t = p_61;
            {
              ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL;
              m_52 = t;
              if(match_cons(t, sym_Path_1))
                {
                  n_52 = ATgetArgument(t, 0);
                  t = n_52;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      n_52 = ATgetArgument(t, 0);
                      t = n_52;
                      {
                        ATerm r_61 = t;
                        int s_61 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm l_7 = NULL,m_7 = NULL;
                            m_7 = t;
                            t = term_t_61;
                            l_7 = t;
                            t = SSL_table_get(l_7, n_52);
                            {
                              ATerm u_61 = t;
                              int v_61 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm a_17 = NULL,o_7 = NULL,r_7 = NULL;
                                  t = eval_config_0_0(t);
                                  a_17 = t;
                                  r_7 = t;
                                  t = term_t_61;
                                  o_7 = t;
                                  t = SSL_table_put(o_7, n_52, a_17);
                                  t = a_17;
                                  ;
                                  LocalPopChoice(v_61);
                                }
                              else
                                {
                                  t = u_61;
                                }
                            }
                            ;
                            LocalPopChoice(s_61);
                          }
                        else
                          {
                            t = r_61;
                            {
                              ATerm s_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL;
                              t = term_w_61;
                              v_7 = t;
                              t = term_e_34;
                              s_7 = t;
                              t = v_7;
                              w_7 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, n_52), term_w_61);
                              u_7 = t;
                              t = SSL_printnl(s_7, u_7);
                              t = n_52;
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm k_17 = NULL,l_17 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          n_52 = ATgetArgument(t, 0);
                          o_52 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_52;
                      t = eval_config_0_0(t);
                      k_17 = t;
                      t = o_52;
                      t = eval_config_0_0(t);
                      l_17 = t;
                      t = SSL_strcat(k_17, l_17);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm l_134 (ATerm), ATerm t)
{
  ATerm x_61 = t;
  int y_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_52 = NULL,x_52 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL;
      v_52 = t;
      t = term_z_61;
      z_7 = t;
      t = term_t_61;
      x_7 = t;
      t = z_7;
      a_8 = t;
      t = term_z_61;
      y_7 = t;
      t = SSL_table_get(x_7, y_7);
      {
        ATerm a_62 = t;
        int b_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_17 = NULL,b_8 = NULL,c_8 = NULL,e_8 = NULL,f_8 = NULL;
            t = eval_config_0_0(t);
            t_17 = t;
            e_8 = t;
            t = term_t_61;
            b_8 = t;
            t = e_8;
            f_8 = t;
            t = term_z_61;
            c_8 = t;
            t = SSL_table_put(b_8, c_8, t_17);
            t = t_17;
            ;
            LocalPopChoice(b_62);
          }
        else
          {
            t = a_62;
          }
        x_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_52, term_c_62);
        t = geq_0_0(t);
        t = v_52;
        t = l_134(t);
      }
      ;
      LocalPopChoice(y_61);
    }
  else
    {
      t = x_61;
    }
  return(t);
}
ATerm i_31 (ATerm t)
{
  ATerm z_52 = NULL;
  z_52 = t;
  if(match_string(t, "-k"))
    {
      t = z_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = z_52;
    }
  return(t);
}
ATerm j_31 (ATerm t)
{
  ATerm a_53 = NULL,b_53 = NULL,g_8 = NULL,h_8 = NULL,l_8 = NULL,m_8 = NULL;
  a_53 = t;
  t = SSL_string_to_int(a_53);
  b_53 = t;
  l_8 = t;
  t = term_t_61;
  g_8 = t;
  t = l_8;
  m_8 = t;
  t = term_d_62;
  h_8 = t;
  t = SSL_table_put(g_8, h_8, b_53);
  t = a_53;
  return(t);
}
ATerm k_31 (ATerm t)
{
  t = term_e_62;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_31, j_31, k_31, t);
  return(t);
}
ATerm l_31 (ATerm t)
{
  ATerm d_53 = NULL;
  d_53 = t;
  if(match_string(t, "-S"))
    {
      t = d_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = d_53;
    }
  return(t);
}
ATerm m_31 (ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL,x_8 = NULL,y_8 = NULL,a_9 = NULL;
  x_8 = t;
  t = term_t_61;
  r_8 = t;
  t = x_8;
  y_8 = t;
  t = term_z_61;
  s_8 = t;
  t = y_8;
  a_9 = t;
  t = term_s_42;
  t_8 = t;
  t = SSL_table_put(r_8, s_8, t_8);
  t = term_f_62;
  return(t);
}
ATerm n_31 (ATerm t)
{
  t = term_g_62;
  return(t);
}
ATerm o_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_31 (ATerm t)
{
  ATerm e_53 = NULL,f_53 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL,f_9 = NULL;
  e_53 = t;
  t = SSL_string_to_int(e_53);
  f_53 = t;
  d_9 = t;
  t = term_t_61;
  b_9 = t;
  t = d_9;
  f_9 = t;
  t = term_z_61;
  c_9 = t;
  t = SSL_table_put(b_9, c_9, f_53);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_53);
  return(t);
}
ATerm q_31 (ATerm t)
{
  t = term_h_62;
  return(t);
}
ATerm r_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_31 (ATerm t)
{
  ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,l_9 = NULL,n_9 = NULL;
  j_9 = t;
  t = term_t_61;
  g_9 = t;
  t = j_9;
  l_9 = t;
  t = term_i_62;
  h_9 = t;
  t = l_9;
  n_9 = t;
  t = term_z_17;
  i_9 = t;
  t = SSL_table_put(g_9, h_9, i_9);
  t = term_j_62;
  return(t);
}
ATerm t_31 (ATerm t)
{
  t = term_k_62;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_62 = t;
  int m_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_31, m_31, n_31, t);
      ;
      LocalPopChoice(m_62);
    }
  else
    {
      t = l_62;
      {
        ATerm n_62 = t;
        int o_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_31, p_31, q_31, t);
            ;
            LocalPopChoice(o_62);
          }
        else
          {
            t = n_62;
            t = Option_3_0(r_31, s_31, t_31, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm i_53 = NULL,k_53 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_53 = NULL;
      t = term_z_17;
      t = d_0(t);
      l_53 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_62, term_q_62, l_53);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm o_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_53 = ATgetFirst((ATermList) t);
          k_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_53;
      t = a_0(t);
      t = term_z_17;
      t = b_0(t);
      o_53 = t;
      t = (ATerm) ATinsert(CheckATermList(k_53), o_53);
    }
  return(t);
}
ATerm u_31 (ATerm t)
{
  ATerm v_53 = NULL;
  v_53 = t;
  if(match_string(t, "-o"))
    {
      t = v_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_53;
    }
  return(t);
}
ATerm v_31 (ATerm t)
{
  ATerm w_53 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,w_9 = NULL;
  w_53 = t;
  s_9 = t;
  t = term_t_61;
  q_9 = t;
  t = s_9;
  w_9 = t;
  t = term_r_62;
  r_9 = t;
  t = SSL_table_put(q_9, r_9, w_53);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_53);
  return(t);
}
ATerm w_31 (ATerm t)
{
  t = term_s_62;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_31, v_31, w_31, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm d_54 = NULL,e_54 = NULL,f_54 = NULL,g_54 = NULL,x_9 = NULL,a_10 = NULL;
  if(match_cons(t, sym__3))
    {
      d_54 = ATgetArgument(t, 0);
      e_54 = ATgetArgument(t, 1);
      f_54 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_54, e_54);
  {
    ATerm t_62 = t;
    int u_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_62 = ATgetArgument(t, 0);
            ATerm w_62 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(d_54, e_54);
        ;
        LocalPopChoice(u_62);
      }
    else
      {
        t = t_62;
        t = (ATerm) ATempty;
      }
    g_54 = t;
    a_10 = t;
    t = (ATerm) ATinsert(CheckATermList(g_54), f_54);
    x_9 = t;
    t = SSL_table_put(d_54, e_54, x_9);
    t = (ATerm) ATmakeAppl(sym__3, d_54, e_54, f_54);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm o_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_54 = NULL;
      t = term_z_17;
      t = m_0(t);
      s_54 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_62, term_q_62, s_54);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm w_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_54 = ATgetFirst((ATermList) t);
          p_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_54;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_54 = ATgetFirst((ATermList) t);
          r_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_54;
      t = i_0(t);
      t = q_54;
      t = k_0(t);
      w_54 = t;
      t = (ATerm) ATinsert(CheckATermList(r_54), w_54);
    }
  return(t);
}
ATerm x_31 (ATerm t)
{
  ATerm y_54 = NULL;
  y_54 = t;
  if(match_string(t, "-i"))
    {
      t = y_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = y_54;
    }
  return(t);
}
ATerm y_31 (ATerm t)
{
  ATerm z_54 = NULL,b_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL;
  z_54 = t;
  l_10 = t;
  t = term_t_61;
  b_10 = t;
  t = l_10;
  m_10 = t;
  t = term_x_62;
  k_10 = t;
  t = SSL_table_put(b_10, k_10, z_54);
  t = (ATerm) ATmakeAppl(sym_Input_1, z_54);
  return(t);
}
ATerm z_31 (ATerm t)
{
  t = term_y_62;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_31, y_31, z_31, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_55 = NULL,t_10 = NULL,n_10 = NULL,p_10 = NULL,r_10 = NULL,s_10 = NULL,u_10 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_17;
  t = whoami_0_0(t);
  a_55 = t;
  r_10 = t;
  t = term_e_34;
  n_10 = t;
  t = r_10;
  s_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_62), a_55);
  p_10 = t;
  t = SSL_printnl(n_10, p_10);
  u_10 = t;
  t = term_l_34;
  t_10 = t;
  t = SSL_exit(t_10);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL;
  t = term_a_63;
  x_10 = t;
  t = term_t_61;
  v_10 = t;
  t = x_10;
  y_10 = t;
  t = term_a_63;
  w_10 = t;
  t = SSL_table_get(v_10, w_10);
  {
    ATerm b_63 = t;
    int c_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_17 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,r_11 = NULL;
        t = eval_config_0_0(t);
        x_17 = t;
        b_11 = t;
        t = term_t_61;
        z_10 = t;
        t = b_11;
        r_11 = t;
        t = term_a_63;
        a_11 = t;
        t = SSL_table_put(z_10, a_11, x_17);
        t = x_17;
        ;
        LocalPopChoice(c_63);
      }
    else
      {
        t = b_63;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm x_121 (ATerm), ATerm y_121 (ATerm), ATerm t)
{
  ATerm d_63 = t;
  int e_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_121(t);
      ;
      LocalPopChoice(e_63);
    }
  else
    {
      t = d_63;
      {
        ATerm d_55 = NULL,e_55 = NULL,h_55 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_55 = ATgetFirst((ATermList) t);
            e_55 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_55;
        t = foldr_2_0(x_121, y_121, t);
        h_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_55, h_55);
        t = y_121(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm a_32 (ATerm t)
{
  t = term_s_42;
  return(t);
}
ATerm b_32 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL;
  if(match_cons(t, sym__2))
    {
      i_18 = ATgetArgument(t, 0);
      j_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_63 = t;
    int g_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(i_18, j_18);
        ;
        LocalPopChoice(g_63);
      }
    else
      {
        t = f_63;
        t = SSL_addr(i_18, j_18);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_55 = NULL,y_17 = NULL,c_18 = NULL;
  t = times_0_0(t);
  y_17 = t;
  t = SSL_explode_term(y_17);
  if(match_cons(t, sym__2))
    {
      ATerm h_63 = ATgetArgument(t, 0);
      c_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_18;
  t = foldr_2_0(a_32, b_32, t);
  k_55 = t;
  t = SSL_TicksToSeconds(k_55);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_55 = NULL,w_55 = NULL,x_55 = NULL;
  v_55 = t;
  if(match_cons(t, sym__2))
    {
      w_55 = ATgetArgument(t, 0);
      x_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_63 = t;
    int j_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_55;
        if((w_55 != t))
          {
            _fail(t);
          }
        t = v_55;
        ;
        LocalPopChoice(j_63);
      }
    else
      {
        t = i_63;
        t = v_55;
        {
          ATerm k_63 = t;
          int l_63 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_55, x_55);
              ;
              LocalPopChoice(l_63);
            }
          else
            {
              t = k_63;
              t = SSL_gtr(w_55, x_55);
            }
          t = (ATerm) ATmakeAppl(sym__2, w_55, x_55);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_134 (ATerm), ATerm t)
{
  ATerm m_63 = t;
  int n_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_56 = NULL,c_56 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL;
      a_56 = t;
      t = term_z_61;
      u_11 = t;
      t = term_t_61;
      s_11 = t;
      t = u_11;
      v_11 = t;
      t = term_z_61;
      t_11 = t;
      t = SSL_table_get(s_11, t_11);
      {
        ATerm o_63 = t;
        int p_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_19 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,b_12 = NULL;
            t = eval_config_0_0(t);
            k_19 = t;
            y_11 = t;
            t = term_t_61;
            w_11 = t;
            t = y_11;
            b_12 = t;
            t = term_z_61;
            x_11 = t;
            t = SSL_table_put(w_11, x_11, k_19);
            t = k_19;
            ;
            LocalPopChoice(p_63);
          }
        else
          {
            t = o_63;
          }
        c_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_56, term_l_34);
        t = geq_0_0(t);
        t = a_56;
        t = k_134(t);
      }
      ;
      LocalPopChoice(n_63);
    }
  else
    {
      t = m_63;
    }
  return(t);
}
ATerm c_32 (ATerm t)
{
  ATerm e_56 = NULL,f_56 = NULL,c_12 = NULL,f_12 = NULL,g_12 = NULL,k_12 = NULL;
  t = run_time_0_0(t);
  e_56 = t;
  t = term_z_17;
  t = whoami_0_0(t);
  f_56 = t;
  g_12 = t;
  t = term_e_34;
  c_12 = t;
  t = g_12;
  k_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_63), e_56), term_q_63), f_56);
  f_12 = t;
  t = SSL_printnl(c_12, f_12);
  t = (ATerm) ATmakeAppl(sym__2, term_e_34, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_63), e_56), term_q_63), f_56));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_32, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL;
  t = report_run_time_0_0(t);
  m_12 = t;
  t = term_s_42;
  l_12 = t;
  t = SSL_exit(l_12);
  return(t);
}
ATerm d_32 (ATerm t)
{
  ATerm s_63 = t;
  int t_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(t_63);
    }
  else
    {
      t = s_63;
      {
        ATerm u_63 = t;
        int v_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(v_63);
          }
        else
          {
            t = u_63;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm a_137 (ATerm), ATerm t)
{
  ATerm w_63 = t;
  int x_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL;
      t = term_y_63;
      r_12 = t;
      t = term_t_61;
      p_12 = t;
      t = r_12;
      s_12 = t;
      t = term_y_63;
      q_12 = t;
      t = SSL_table_get(p_12, q_12);
      {
        ATerm z_63 = t;
        int a_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_19 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL;
            t = eval_config_0_0(t);
            u_19 = t;
            v_12 = t;
            t = term_t_61;
            t_12 = t;
            t = v_12;
            w_12 = t;
            t = term_y_63;
            u_12 = t;
            t = SSL_table_put(t_12, u_12, u_19);
            t = u_19;
            ;
            LocalPopChoice(a_64);
          }
        else
          {
            t = z_63;
          }
      }
      ;
      LocalPopChoice(x_63);
    }
  else
    {
      t = w_63;
      t = fetch_1_0(d_32, t);
    }
  t = a_137(t);
  return(t);
}
ATerm map_1_0 (ATerm h_117 (ATerm), ATerm t)
{
  ATerm g_56 (ATerm t)
  {
    ATerm b_64 = t;
    int c_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(c_64);
      }
    else
      {
        t = b_64;
        t = Cons_2_0(h_117, g_56, t);
      }
    return(t);
  }
  t = g_56(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm i_56 = NULL,j_56 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_56 = ATgetFirst((ATermList) t);
      j_56 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_56 = NULL,o_56 = NULL;
        t = j_56;
        t = g_0(t);
        n_56 = t;
        t = i_56;
        t = f_0(t);
        o_56 = t;
        t = j_56;
        {
          ATerm e_32 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(n_56), o_56);
            return(t);
          }
          t = reverse_acc_2_0(f_0, e_32, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_17;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm n_108 (ATerm), ATerm t)
{
  ATerm p_56 = NULL,q_56 = NULL,r_56 = NULL,s_56 = NULL,e_13 = NULL,f_13 = NULL;
  s_56 = t;
  if(match_cons(t, sym_Program_1))
    {
      q_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_56);
  p_56 = t;
  t = q_56;
  t = n_108(t);
  r_56 = t;
  f_13 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_56);
  e_13 = t;
  t = SSLsetAnnotations(e_13, p_56);
  return(t);
}
ATerm f_32 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm g_32 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_32 (ATerm t)
{
  ATerm v_56 = NULL;
  v_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_56), term_d_64);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL;
  ATerm e_64 = t;
  int f_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL,l_13 = NULL;
      t = term_a_63;
      i_13 = t;
      t = term_t_61;
      g_13 = t;
      t = i_13;
      l_13 = t;
      t = term_a_63;
      h_13 = t;
      t = SSL_table_get(g_13, h_13);
      {
        ATerm g_64 = t;
        int h_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_20 = NULL,n_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL;
            t = eval_config_0_0(t);
            b_20 = t;
            v_13 = t;
            t = term_t_61;
            n_13 = t;
            t = v_13;
            w_13 = t;
            t = term_a_63;
            u_13 = t;
            t = SSL_table_put(n_13, u_13, b_20);
            t = b_20;
            ;
            LocalPopChoice(h_64);
          }
        else
          {
            t = g_64;
          }
      }
      ;
      LocalPopChoice(f_64);
    }
  else
    {
      t = e_64;
      t = fetch_1_0(f_32, t);
    }
  t = term_i_64;
  t = echo_0_0(t);
  z_13 = t;
  t = term_p_62;
  x_13 = t;
  t = z_13;
  a_14 = t;
  t = term_q_62;
  y_13 = t;
  t = SSL_table_get(x_13, y_13);
  t = reverse_acc_2_0(_id, g_32, t);
  t = map_1_0(h_32, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm o_108 (ATerm), ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,b_14 = NULL,c_14 = NULL;
  z_56 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      x_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_56);
  w_56 = t;
  t = x_56;
  t = o_108(t);
  y_56 = t;
  c_14 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, y_56);
  b_14 = t;
  t = SSLsetAnnotations(b_14, w_56);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_57 = NULL,e_57 = NULL,d_14 = NULL,f_14 = NULL;
  d_57 = t;
  {
    ATerm j_64 = t;
    int k_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_57;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_64 = ATgetFirst((ATermList) t);
                ATerm m_64 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_57;
          }
        ;
        LocalPopChoice(k_64);
      }
    else
      {
        t = j_64;
        t = (ATerm) ATinsert(ATempty, d_57);
      }
    e_57 = t;
    f_14 = t;
    t = term_r_60;
    d_14 = t;
    t = SSL_printnl(d_14, e_57);
    t = d_57;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm g_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL;
  t = term_a_63;
  j_14 = t;
  t = term_t_61;
  g_14 = t;
  t = j_14;
  k_14 = t;
  t = term_a_63;
  i_14 = t;
  t = SSL_table_get(g_14, i_14);
  {
    ATerm n_64 = t;
    int o_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_20 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,q_14 = NULL;
        t = eval_config_0_0(t);
        o_20 = t;
        o_14 = t;
        t = term_t_61;
        m_14 = t;
        t = o_14;
        q_14 = t;
        t = term_a_63;
        n_14 = t;
        t = SSL_table_put(m_14, n_14, o_20);
        t = o_20;
        ;
        LocalPopChoice(o_64);
      }
    else
      {
        t = n_64;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm i_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_32 (ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL,u_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL;
  w_14 = t;
  t = term_t_61;
  r_14 = t;
  t = w_14;
  x_14 = t;
  t = term_p_64;
  s_14 = t;
  t = x_14;
  y_14 = t;
  t = term_z_17;
  u_14 = t;
  t = SSL_table_put(r_14, s_14, u_14);
  t = term_q_64;
  return(t);
}
ATerm k_32 (ATerm t)
{
  t = term_r_64;
  return(t);
}
ATerm l_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_32 (ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,m_15 = NULL,o_15 = NULL;
  d_15 = t;
  t = term_t_61;
  z_14 = t;
  t = d_15;
  e_15 = t;
  t = term_p_64;
  a_15 = t;
  t = e_15;
  f_15 = t;
  t = term_z_17;
  b_15 = t;
  t = SSL_table_put(z_14, a_15, b_15);
  k_15 = t;
  t = term_t_61;
  h_15 = t;
  t = k_15;
  m_15 = t;
  t = term_s_64;
  i_15 = t;
  t = m_15;
  o_15 = t;
  t = term_z_17;
  j_15 = t;
  t = SSL_table_put(h_15, i_15, j_15);
  t = term_t_64;
  return(t);
}
ATerm n_32 (ATerm t)
{
  t = term_u_64;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_64 = t;
  int w_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_32, j_32, k_32, t);
      ;
      LocalPopChoice(w_64);
    }
  else
    {
      t = v_64;
      t = Option_3_0(l_32, m_32, n_32, t);
    }
  return(t);
}
ATerm o_32 (ATerm t)
{
  ATerm k_57 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL;
  k_57 = t;
  r_15 = t;
  t = term_t_61;
  p_15 = t;
  t = r_15;
  s_15 = t;
  t = term_a_63;
  q_15 = t;
  t = SSL_table_put(p_15, q_15, k_57);
  t = (ATerm) ATmakeAppl(sym_Program_1, k_57);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_139 (ATerm), ATerm t)
{
  ATerm j_57 = NULL;
  j_57 = t;
  {
    ATerm x_64 = t;
    int y_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_64;
        t = d_139(t);
        ;
        LocalPopChoice(y_64);
      }
    else
      {
        t = x_64;
      }
    t = j_57;
    {
      ATerm p_32 (ATerm t)
      {
        ATerm a_65 = t;
        int b_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_65 = t;
            int d_65 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(d_65);
              }
            else
              {
                t = c_65;
                t = d_139(t);
                t = Cons_2_0(_id, p_32, t);
              }
            ;
            LocalPopChoice(b_65);
          }
        else
          {
            t = a_65;
            {
              ATerm m_57 = NULL,o_57 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_57 = ATgetFirst((ATermList) t);
                  o_57 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(o_57), (ATerm) ATmakeAppl(sym_Undefined_1, m_57));
            }
          }
        return(t);
      }
      t = Cons_2_0(o_32, p_32, t);
    }
  }
  return(t);
}
ATerm r_32 (ATerm t)
{
  ATerm y_57 = NULL;
  y_57 = t;
  if(match_string(t, "--help"))
    {
      t = y_57;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_57;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_57;
        }
    }
  return(t);
}
ATerm s_32 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL;
  f_16 = t;
  t = term_t_61;
  z_15 = t;
  t = f_16;
  g_16 = t;
  t = term_y_63;
  a_16 = t;
  t = g_16;
  h_16 = t;
  t = term_z_17;
  e_16 = t;
  t = SSL_table_put(z_15, a_16, e_16);
  t = term_e_65;
  return(t);
}
ATerm t_32 (ATerm t)
{
  t = term_f_65;
  return(t);
}
ATerm u_32 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_139 (ATerm), ATerm t)
{
  ATerm v_57 = NULL,w_57 = NULL,x_57 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,j_17 = NULL,m_17 = NULL;
  v_57 = t;
  w_15 = t;
  t = term_p_62;
  t_15 = t;
  t = w_15;
  x_15 = t;
  t = term_q_62;
  u_15 = t;
  t = x_15;
  y_15 = t;
  t = (ATerm) ATempty;
  v_15 = t;
  t = SSL_table_put(t_15, u_15, v_15);
  t = v_57;
  {
    ATerm q_32 (ATerm t)
    {
      ATerm g_65 = t;
      int h_65 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_139(t);
          ;
          LocalPopChoice(h_65);
        }
      else
        {
          t = g_65;
          {
            ATerm i_65 = t;
            int j_65 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(r_32, s_32, t_32, t);
                ;
                LocalPopChoice(j_65);
              }
            else
              {
                t = i_65;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_32, t);
    {
      ATerm k_65 = t;
      int l_65 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_58 = NULL;
          d_58 = t;
          {
            ATerm m_65 = t;
            int n_65 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_16 = NULL,r_16 = NULL;
                t = d_58;
                {
                  ATerm o_65 = t;
                  int p_65 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL;
                      t = term_y_63;
                      k_16 = t;
                      t = term_t_61;
                      i_16 = t;
                      t = k_16;
                      l_16 = t;
                      t = term_y_63;
                      j_16 = t;
                      t = SSL_table_get(i_16, j_16);
                      {
                        ATerm q_65 = t;
                        int r_65 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm j_22 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL;
                            t = eval_config_0_0(t);
                            j_22 = t;
                            o_16 = t;
                            t = term_t_61;
                            m_16 = t;
                            t = o_16;
                            p_16 = t;
                            t = term_y_63;
                            n_16 = t;
                            t = SSL_table_put(m_16, n_16, j_22);
                            t = j_22;
                            ;
                            LocalPopChoice(r_65);
                          }
                        else
                          {
                            t = q_65;
                          }
                      }
                      ;
                      LocalPopChoice(p_65);
                    }
                  else
                    {
                      t = o_65;
                      t = fetch_1_0(u_32, t);
                    }
                  t = d_58;
                  t = default_system_usage_0_0(t);
                  r_16 = t;
                  t = term_s_42;
                  q_16 = t;
                  t = SSL_exit(q_16);
                }
                ;
                LocalPopChoice(n_65);
              }
            else
              {
                t = m_65;
                {
                  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,b_17 = NULL,c_17 = NULL;
                  t = term_p_64;
                  u_16 = t;
                  t = term_t_61;
                  s_16 = t;
                  t = u_16;
                  v_16 = t;
                  t = term_p_64;
                  t_16 = t;
                  t = SSL_table_get(s_16, t_16);
                  {
                    ATerm s_65 = t;
                    int t_65 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_23 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL;
                        t = eval_config_0_0(t);
                        w_23 = t;
                        y_16 = t;
                        t = term_t_61;
                        w_16 = t;
                        t = y_16;
                        z_16 = t;
                        t = term_p_64;
                        x_16 = t;
                        t = SSL_table_put(w_16, x_16, w_23);
                        t = w_23;
                        ;
                        LocalPopChoice(t_65);
                      }
                    else
                      {
                        t = s_65;
                      }
                    t = d_58;
                    t = default_system_about_0_0(t);
                    c_17 = t;
                    t = term_s_42;
                    b_17 = t;
                    t = SSL_exit(b_17);
                  }
                }
              }
          }
          ;
          LocalPopChoice(l_65);
        }
      else
        {
          t = k_65;
          {
            ATerm u_65 = t;
            int v_65 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL;
                ATerm v_32 (ATerm t)
                {
                  ATerm w_32 (ATerm t)
                  {
                    if(((w_57 != NULL) && (w_57 != t)))
                      _fail(t);
                    else
                      w_57 = t;
                    return(t);
                  }
                  t = Undefined_1_0(w_32, t);
                  return(t);
                }
                t = fetch_1_0(v_32, t);
                f_17 = t;
                t = term_e_34;
                d_17 = t;
                t = f_17;
                g_17 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_57)), term_w_65);
                e_17 = t;
                t = SSL_printnl(d_17, e_17);
                t = (ATerm) ATmakeAppl(sym__2, term_e_34, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_57)), term_w_65));
                t = default_system_usage_0_0(t);
                i_17 = t;
                t = term_l_34;
                h_17 = t;
                t = SSL_exit(h_17);
                ;
                LocalPopChoice(v_65);
              }
            else
              {
                t = u_65;
              }
          }
        }
      x_57 = t;
      m_17 = t;
      t = term_p_62;
      j_17 = t;
      t = SSL_table_destroy(j_17);
      t = x_57;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_137 (ATerm), ATerm d_137 (ATerm), ATerm e_137 (ATerm), ATerm f_137 (ATerm), ATerm t)
{
  ATerm g_58 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL;
  t = parse_options_1_0(c_137, t);
  g_58 = t;
  o_17 = t;
  t = term_x_65;
  n_17 = t;
  t = SSL_table_create(n_17);
  r_17 = t;
  t = term_x_65;
  p_17 = t;
  t = r_17;
  s_17 = t;
  t = term_y_65;
  q_17 = t;
  t = SSL_table_put(p_17, q_17, g_58);
  t = g_58;
  t = e_137(t);
  {
    ATerm z_65 = t;
    int a_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_137, t);
        ;
        LocalPopChoice(a_66);
      }
    else
      {
        t = z_65;
        {
          ATerm b_66 = t;
          int c_66 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_137(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(c_66);
            }
          else
            {
              t = b_66;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm y_32 (ATerm t)
{
  t = if_verbose2_1_0(d_33, t);
  return(t);
}
ATerm a_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_33 (ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL,a_18 = NULL,b_18 = NULL,d_18 = NULL;
  a_18 = t;
  t = term_t_61;
  u_17 = t;
  t = a_18;
  b_18 = t;
  t = term_d_66;
  v_17 = t;
  t = b_18;
  d_18 = t;
  t = term_z_17;
  w_17 = t;
  t = SSL_table_put(u_17, v_17, w_17);
  t = term_e_66;
  return(t);
}
ATerm c_33 (ATerm t)
{
  t = term_f_66;
  return(t);
}
ATerm d_33 (ATerm t)
{
  ATerm h_58 = NULL,i_58 = NULL,e_18 = NULL,g_18 = NULL,k_18 = NULL,l_18 = NULL,t_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL;
  h_58 = t;
  t = term_a_63;
  k_18 = t;
  t = term_t_61;
  e_18 = t;
  t = k_18;
  l_18 = t;
  t = term_a_63;
  g_18 = t;
  t = SSL_table_get(e_18, g_18);
  {
    ATerm g_66 = t;
    int h_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_24 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL;
        t = eval_config_0_0(t);
        d_24 = t;
        r_18 = t;
        t = term_t_61;
        p_18 = t;
        t = r_18;
        s_18 = t;
        t = term_a_63;
        q_18 = t;
        t = SSL_table_put(p_18, q_18, d_24);
        t = d_24;
        ;
        LocalPopChoice(h_66);
      }
    else
      {
        t = g_66;
      }
    i_58 = t;
    w_18 = t;
    t = term_e_34;
    t_18 = t;
    t = w_18;
    x_18 = t;
    t = (ATerm) ATinsert(ATempty, i_58);
    v_18 = t;
    t = SSL_printnl(t_18, v_18);
    t = h_58;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm l_136 (ATerm), ATerm m_136 (ATerm), ATerm n_136 (ATerm), ATerm t)
{
  ATerm x_32 (ATerm t)
  {
    ATerm i_66 = t;
    int j_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_136(t);
        ;
        LocalPopChoice(j_66);
      }
    else
      {
        t = i_66;
        {
          ATerm k_66 = t;
          int l_66 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(l_66);
            }
          else
            {
              t = k_66;
              {
                ATerm m_66 = t;
                int n_66 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(n_66);
                  }
                else
                  {
                    t = m_66;
                    {
                      ATerm o_66 = t;
                      int p_66 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(a_33, b_33, c_33, t);
                          ;
                          LocalPopChoice(p_66);
                        }
                      else
                        {
                          t = o_66;
                          {
                            ATerm q_66 = t;
                            int r_66 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(r_66);
                              }
                            else
                              {
                                t = q_66;
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
  ATerm z_32 (ATerm t)
  {
    ATerm j_58 = NULL,k_58 = NULL,t_24 = NULL;
    j_58 = t;
    {
      ATerm s_66 = t;
      int t_66 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_33 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((k_58 != NULL) && (k_58 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_58 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(i_33, t);
          ;
          LocalPopChoice(t_66);
        }
      else
        {
          t = s_66;
          t = term_u_66;
          k_58 = t;
        }
      t = not_null(k_58);
      t = ReadFromFile_0_0(t);
      t_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_58, t_24);
      t = apply_strategy_1_0(l_136, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(x_32, n_136, y_32, z_32, t);
  return(t);
}
ATerm j_33 (ATerm t)
{
  t = _2_0(_id, r_33, t);
  return(t);
}
ATerm r_33 (ATerm t)
{
  t = Specification_1_0(s_33, t);
  t = needed_constructors_0_0(t);
  return(t);
}
ATerm s_33 (ATerm t)
{
  t = Cons_2_0(_id, b_34, t);
  return(t);
}
ATerm b_34 (ATerm t)
{
  t = Cons_2_0(c_34, d_34, t);
  return(t);
}
ATerm c_34 (ATerm t)
{
  t = Strategies_1_0(needed_defs_0_0, t);
  return(t);
}
ATerm d_34 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(j_33, _fail, default_usage_0_0, t);
  return(t);
}
