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
ATerm term_r_51;
ATerm term_h_51;
ATerm term_c_51;
ATerm term_b_50;
ATerm term_j_49;
ATerm term_x_48;
ATerm term_m_48;
ATerm term_b_48;
ATerm term_a_48;
ATerm term_x_47;
ATerm term_w_47;
ATerm term_r_47;
ATerm term_q_47;
ATerm term_k_46;
ATerm term_e_46;
ATerm term_g_45;
ATerm term_f_45;
ATerm term_e_45;
ATerm term_f_44;
ATerm term_y_43;
ATerm term_x_43;
ATerm term_w_43;
ATerm term_v_43;
ATerm term_n_43;
ATerm term_m_43;
ATerm term_c_43;
ATerm term_b_43;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_b_41;
ATerm term_p_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_a_39;
ATerm term_m_30;
ATerm term_g_30;
ATerm term_g_27;
ATerm term_l_26;
ATerm term_i_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_j_25;
ATerm term_r_23;
ATerm term_k_23;
ATerm term_i_23;
ATerm term_g_23;
ATerm term_q_22;
ATerm term_o_18;
ATerm term_f_18;
ATerm term_y_16;
ATerm term_n_16;
ATerm term_i_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_t_14;
void init_constant_terms (void)
{
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("z_1", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ConstructorNeeded", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w_1", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Defined_1, term_s_15);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym_Op_2, term_g_26, (ATerm) ATempty);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym_ConstType_1, term_i_26);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(sym__2, term_f_18, term_f_18);
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(sym__2, term_h_39, term_i_39);
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_18);
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(sym__3, term_q_47, term_r_47, term_t_14);
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_51));
  term_c_51 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_51));
  term_r_51 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm ConstructorNeeded_0_0 (ATerm);
ATerm filter_1_0 (ATerm f_123 (ATerm), ATerm);
ATerm Constructors_1_0 (ATerm q_96 (ATerm), ATerm);
ATerm Signature_1_0 (ATerm u_95 (ATerm), ATerm);
ATerm DeclareConstructorNeeded_0_0 (ATerm);
ATerm needed_constructors_0_0 (ATerm);
ATerm MissingDefMod_0_0 (ATerm);
ATerm MissingDefs_0_0 (ATerm);
ATerm giving_up_0_0 (ATerm);
ATerm DefinitionExists_0_0 (ATerm);
ATerm Rec_2_0 (ATerm y_100 (ATerm), ATerm z_100 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm t_102 (ATerm), ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm q_102 (ATerm), ATerm r_102 (ATerm), ATerm s_102 (ATerm), ATerm);
ATerm Let_2_0 (ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm f_110 (ATerm), ATerm g_110 (ATerm), ATerm h_110 (ATerm), ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm split_2_0 (ATerm m_114 (ATerm), ATerm n_114 (ATerm), ATerm);
ATerm free_vars2_4_0 (ATerm m_125 (ATerm), ATerm n_125 (ATerm), ATerm o_125 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm p_125 (ATerm), ATerm);
ATerm svars_arity_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm alltd_1_0 (ATerm s_112 (ATerm), ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm j_110 (ATerm), ATerm k_110 (ATerm), ATerm);
ATerm VarDec_2_0 (ATerm m_102 (ATerm), ATerm n_102 (ATerm), ATerm);
ATerm JoinDefs2_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm As_2_0 (ATerm i_97 (ATerm), ATerm j_97 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm h_101 (ATerm), ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm b_97 (ATerm), ATerm c_97 (ATerm), ATerm);
ATerm Op_2_0 (ATerm x_96 (ATerm), ATerm y_96 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm g_140 (ATerm), ATerm);
ATerm Bapp2_0_0 (ATerm);
ATerm Bapp0_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm Var_1_0 (ATerm r_96 (ATerm), ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm repeat_1_0 (ATerm l_127 (ATerm), ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm App_2_0 (ATerm f_97 (ATerm), ATerm g_97 (ATerm), ATerm);
ATerm Con_3_0 (ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm Scope_2_0 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm e_112 (ATerm), ATerm);
ATerm Rcon_0_0 (ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm a_111 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm tuple_unzip_1_0 (ATerm c_115 (ATerm), ATerm);
ATerm MkDistApplication_0_0 (ATerm);
ATerm copy_1_0 (ATerm f_122 (ATerm), ATerm);
ATerm MkThreadApplication_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm DefineCongruence_0_0 (ATerm);
ATerm CongruenceDef_0_0 (ATerm);
ATerm get_definition_0_0 (ATerm);
ATerm diff_1_0 (ATerm z_118 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm m_115 (ATerm), ATerm n_115 (ATerm), ATerm o_115 (ATerm), ATerm p_115 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm GnNextChangeGraph_3_0 (ATerm c_140 (ATerm), ATerm d_140 (ATerm), ATerm e_140 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm a_128 (ATerm), ATerm b_128 (ATerm), ATerm);
ATerm for_3_0 (ATerm d_128 (ATerm), ATerm e_128 (ATerm), ATerm f_128 (ATerm), ATerm);
ATerm extract_needed_defs_0_0 (ATerm);
ATerm assert_1_0 (ATerm b_123 (ATerm), ATerm);
ATerm union_1_0 (ATerm d_119 (ATerm), ATerm);
ATerm Arities_0_0 (ATerm);
ATerm Definitions_0_0 (ATerm);
ATerm foldr_3_0 (ATerm s_121 (ATerm), ATerm t_121 (ATerm), ATerm u_121 (ATerm), ATerm);
ATerm RegisterSDefT_0_0 (ATerm);
ATerm needed_defs_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm t_95 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm p_95 (ATerm), ATerm q_95 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm y_95 (ATerm), ATerm);
ATerm _2_0 (ATerm a_91 (ATerm), ATerm b_91 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm t_132 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm v_135 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm m_117 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm s_117 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm x_133 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm q_121 (ATerm), ATerm r_121 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm w_133 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm t_136 (ATerm), ATerm);
ATerm map_1_0 (ATerm b_117 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm h_108 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm i_108 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm w_138 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm v_138 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm v_136 (ATerm), ATerm w_136 (ATerm), ATerm x_136 (ATerm), ATerm y_136 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm e_136 (ATerm), ATerm f_136 (ATerm), ATerm g_136 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL;
  c_0 = t;
  t = term_t_14;
  t = whoami_0_0(t);
  e_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), e_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = c_0;
  return(t);
}
ATerm ConstructorNeeded_0_0 (ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL;
  o_1 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      p_1 = ATgetArgument(t, 0);
      q_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_14 = t;
    int v_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_0 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ConstructorNeeded", 0, ATtrue)), (ATerm) ATmakeAppl(sym_OpDecl_2, p_1, (ATerm) ATempty));
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_0 = ATgetFirst((ATermList) t);
            {
              ATerm w_14 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = u_0;
        if(match_cons(t, sym_Defined_1))
          {
            ATerm y_14 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_14) != ATmakeSymbol("z_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_OpDecl_2, p_1, q_1);
        ;
        LocalPopChoice(v_14);
      }
    else
      {
        t = u_14;
        {
          ATerm g_1 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("ConstructorNeeded", 0, ATtrue)), (ATerm) ATmakeAppl(sym_OpDecl_2, p_1, (ATerm) ATempty));
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_1 = ATgetFirst((ATermList) t);
              {
                ATerm z_14 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = g_1;
          if(match_cons(t, sym_Defined_1))
            {
              ATerm a_15 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) a_15) != ATmakeSymbol("w_1", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_OpDecl_2, p_1, q_1);
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm f_123 (ATerm), ATerm t)
{
  ATerm b_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(f_15);
    }
  else
    {
      t = b_15;
      {
        ATerm g_15 = t;
        int j_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_0 (ATerm t)
            {
              t = filter_1_0(f_123, t);
              return(t);
            }
            t = Cons_2_0(f_123, h_0, t);
            ;
            LocalPopChoice(j_15);
          }
        else
          {
            t = g_15;
            {
              ATerm x_1 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm k_15 = ATgetFirst((ATermList) t);
                  x_1 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = x_1;
              t = filter_1_0(f_123, t);
            }
          }
      }
    }
  return(t);
}
ATerm Constructors_1_0 (ATerm q_96 (ATerm), ATerm t)
{
  ATerm a_2 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL;
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
  t = q_96(t);
  c_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Constructors_1, c_2), a_2);
  return(t);
}
ATerm Signature_1_0 (ATerm u_95 (ATerm), ATerm t)
{
  ATerm g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL;
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
  t = u_95(t);
  i_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, i_2), g_2);
  return(t);
}
ATerm DeclareConstructorNeeded_0_0 (ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL;
  p_2 = t;
  {
    ATerm l_15 = t;
    int m_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Cong_2))
          {
            q_2 = ATgetArgument(t, 0);
            {
              ATerm n_15 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(m_15);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, q_2, (ATerm) ATempty), term_p_15);
        {
          ATerm p_0 (ATerm t)
          {
            t = term_q_15;
            return(t);
          }
          t = assert_1_0(p_0, t);
          t = p_2;
        }
      }
    else
      {
        t = l_15;
        if(match_cons(t, sym_Op_2))
          {
            q_2 = ATgetArgument(t, 0);
            {
              ATerm r_15 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_OpDecl_2, q_2, (ATerm) ATempty), term_t_15);
        {
          ATerm q_0 (ATerm t)
          {
            t = term_q_15;
            return(t);
          }
          t = assert_1_0(q_0, t);
          t = p_2;
        }
      }
  }
  return(t);
}
ATerm needed_constructors_0_0 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,y_2 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm v_15 = ATgetArgument(t, 0);
      if(((ATgetType(v_15) == AT_LIST) && !(ATisEmpty(v_15))))
        {
          w_2 = ATgetFirst((ATermList) v_15);
          {
            ATerm w_15 = (ATerm) ATgetNext((ATermList) v_15);
            if(((ATgetType(w_15) == AT_LIST) && !(ATisEmpty(w_15))))
              {
                ATerm x_15 = ATgetFirst((ATermList) w_15);
                if(match_cons(x_15, sym_Strategies_1))
                  {
                    x_2 = ATgetArgument(x_15, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm z_15 = (ATerm) ATgetNext((ATermList) w_15);
                  if(((ATgetType(z_15) != AT_LIST) || !(ATisEmpty(z_15))))
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
  {
    ATerm s_0 (ATerm t)
    {
      ATerm a_16 = t;
      int b_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DeclareConstructorNeeded_0_0(t);
          ;
          LocalPopChoice(b_16);
        }
      else
        {
          t = a_16;
        }
      return(t);
    }
    t = topdown_1_0(s_0, t);
    t = w_2;
    {
      ATerm t_0 (ATerm t)
      {
        ATerm v_0 (ATerm t)
        {
          ATerm x_0 (ATerm t)
          {
            t = filter_1_0(ConstructorNeeded_0_0, t);
            return(t);
          }
          t = Constructors_1_0(x_0, t);
          return(t);
        }
        ATerm w_0 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(v_0, w_0, t);
        return(t);
      }
      t = Signature_1_0(t_0, t);
      y_2 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, x_2)), y_2));
    }
  }
  return(t);
}
ATerm MissingDefMod_0_0 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL,b_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_16 = ATgetArgument(t, 0);
      if(match_cons(c_16, sym_Mod_2))
        {
          z_2 = ATgetArgument(c_16, 0);
          a_3 = ATgetArgument(c_16, 1);
        }
      else
        _fail(t);
      b_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue))), b_3), (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue))), a_3), (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue))), z_2), (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue))));
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_16), b_3), term_g_16), a_3), term_f_16), z_2), term_e_16);
  return(t);
}
ATerm MissingDefs_0_0 (ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL,g_3 = NULL;
  if(match_cons(t, sym__2))
    {
      e_3 = ATgetArgument(t, 0);
      {
        ATerm j_16 = ATgetArgument(t, 1);
        if(((ATgetType(j_16) == AT_LIST) && !(ATisEmpty(j_16))))
          {
            f_3 = ATgetFirst((ATermList) j_16);
            g_3 = (ATerm) ATgetNext((ATermList) j_16);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_3), f_3);
  {
    ATerm y_0 (ATerm t)
    {
      ATerm k_16 = t;
      int l_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = MissingDefMod_0_0(t);
          ;
          LocalPopChoice(l_16);
        }
      else
        {
          t = k_16;
          {
            ATerm n_3 = NULL,o_3 = NULL;
            if(match_cons(t, sym__2))
              {
                n_3 = ATgetArgument(t, 0);
                o_3 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue))), o_3), (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue))), n_3), (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue))));
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_16), o_3), term_g_16), n_3), term_e_16);
          }
        }
      return(t);
    }
    t = map_1_0(y_0, t);
    t = e_3;
  }
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = (ATerm) ATinsert(ATempty, term_n_16);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm t_4 = NULL,x_4 = NULL,b_5 = NULL,e_5 = NULL,f_5 = NULL;
  t_4 = t;
  if(match_cons(t, sym__2))
    {
      x_4 = ATgetArgument(t, 0);
      b_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5;
  if(match_cons(t, sym__2))
    {
      e_5 = ATgetArgument(t, 0);
      f_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_5;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = f_5;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm o_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_4;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_16 = ATgetFirst((ATermList) t);
            ATerm s_16 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(s_16) == AT_LIST) && !(ATisEmpty(s_16))))
              {
                ATerm t_16 = ATgetFirst((ATermList) s_16);
                ATerm u_16 = (ATerm) ATgetNext((ATermList) s_16);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm v_16 = t;
          if((PushChoice() == 0))
            {
              ATerm z_0 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    ATerm w_16 = ATgetArgument(t, 0);
                    if(((ATgetType(w_16) != AT_INT) || (ATgetInt((ATermInt) w_16) != 0)))
                      _fail(t);
                    {
                      ATerm x_16 = ATgetArgument(t, 1);
                      if(((ATgetType(x_16) != AT_INT) || (ATgetInt((ATermInt) x_16) != 0)))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(z_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = v_16;
            }
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, x_4), (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue))));
          t = (ATerm) ATinsert(ATinsert(ATempty, x_4), term_y_16);
          t = giving_up_0_0(t);
        }
        ;
        LocalPopChoice(p_16);
      }
    else
      {
        t = o_16;
        {
          ATerm s_3 = NULL,t_3 = NULL;
          t = x_4;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm b_17 = ATgetFirst((ATermList) t);
              if(match_cons(b_17, sym__2))
                {
                  s_3 = ATgetArgument(b_17, 0);
                  t_3 = ATgetArgument(b_17, 1);
                }
              else
                _fail(t);
              {
                ATerm e_17 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(e_17) != AT_LIST) || !(ATisEmpty(e_17))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, x_4, (ATerm) ATmakeAppl(sym__2, s_3, t_3));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, x_4, (ATerm) ATmakeAppl(sym__2, s_3, t_3));
        }
      }
  }
  return(t);
}
ATerm Rec_2_0 (ATerm y_100 (ATerm), ATerm z_100 (ATerm), ATerm t)
{
  ATerm j_5 = NULL,l_5 = NULL,m_5 = NULL,o_5 = NULL,p_5 = NULL,r_5 = NULL;
  r_5 = t;
  if(match_cons(t, sym_Rec_2))
    {
      l_5 = ATgetArgument(t, 0);
      m_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_5);
  j_5 = t;
  t = l_5;
  t = y_100(t);
  o_5 = t;
  t = m_5;
  t = z_100(t);
  p_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, o_5, p_5), j_5);
  return(t);
}
ATerm SDefT_4_0 (ATerm t_102 (ATerm), ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL,a_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL;
  l_6 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      v_5 = ATgetArgument(t, 0);
      a_6 = ATgetArgument(t, 1);
      c_6 = ATgetArgument(t, 2);
      d_6 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_6);
  u_5 = t;
  t = v_5;
  t = t_102(t);
  e_6 = t;
  t = a_6;
  t = u_102(t);
  i_6 = t;
  t = c_6;
  t = v_102(t);
  j_6 = t;
  t = d_6;
  t = w_102(t);
  k_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, e_6, i_6, j_6, k_6), u_5);
  return(t);
}
ATerm SDef_3_0 (ATerm q_102 (ATerm), ATerm r_102 (ATerm), ATerm s_102 (ATerm), ATerm t)
{
  ATerm p_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,h_7 = NULL;
  h_7 = t;
  if(match_cons(t, sym_SDef_3))
    {
      s_6 = ATgetArgument(t, 0);
      t_6 = ATgetArgument(t, 1);
      u_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_7);
  p_6 = t;
  t = s_6;
  t = q_102(t);
  b_7 = t;
  t = t_6;
  t = r_102(t);
  c_7 = t;
  t = u_6;
  t = s_102(t);
  d_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, b_7, c_7, d_7), p_6);
  return(t);
}
ATerm Let_2_0 (ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm t)
{
  ATerm m_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL,u_7 = NULL,v_7 = NULL;
  v_7 = t;
  if(match_cons(t, sym_Let_2))
    {
      p_7 = ATgetArgument(t, 0);
      q_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_7);
  m_7 = t;
  t = p_7;
  t = b_100(t);
  r_7 = t;
  t = q_7;
  t = c_100(t);
  u_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, r_7, u_7), m_7);
  return(t);
}
ATerm sboundin_3_0 (ATerm f_110 (ATerm), ATerm g_110 (ATerm), ATerm h_110 (ATerm), ATerm t)
{
  ATerm f_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(f_110, f_110, t);
      ;
      LocalPopChoice(i_17);
    }
  else
    {
      t = f_17;
      {
        ATerm j_17 = t;
        int k_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(h_110, h_110, f_110, t);
            ;
            LocalPopChoice(k_17);
          }
        else
          {
            t = j_17;
            {
              ATerm l_17 = t;
              int m_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(h_110, h_110, h_110, f_110, t);
                  ;
                  LocalPopChoice(m_17);
                }
              else
                {
                  t = l_17;
                  t = Rec_2_0(h_110, f_110, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm k_8 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      k_8 = ATgetArgument(t, 0);
      {
        ATerm o_17 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = k_8;
  {
    ATerm a_1 (ATerm t)
    {
      ATerm u_8 = NULL;
      ATerm p_17 = t;
      int q_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_SDef_3))
            {
              u_8 = ATgetArgument(t, 0);
              {
                ATerm r_17 = ATgetArgument(t, 1);
              }
              {
                ATerm s_17 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          LocalPopChoice(q_17);
          t = u_8;
        }
      else
        {
          t = p_17;
          if(match_cons(t, sym_SDefT_4))
            {
              u_8 = ATgetArgument(t, 0);
              {
                ATerm t_17 = ATgetArgument(t, 1);
              }
              {
                ATerm u_17 = ATgetArgument(t, 2);
              }
              {
                ATerm v_17 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = u_8;
        }
      return(t);
    }
    t = map_1_0(a_1, t);
  }
  return(t);
}
ATerm split_2_0 (ATerm m_114 (ATerm), ATerm n_114 (ATerm), ATerm t)
{
  ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL;
  d_51 = t;
  t = m_114(t);
  e_51 = t;
  t = d_51;
  t = n_114(t);
  f_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_51, f_51);
  return(t);
}
ATerm free_vars2_4_0 (ATerm m_125 (ATerm), ATerm n_125 (ATerm), ATerm o_125 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm p_125 (ATerm), ATerm t)
{
  ATerm h_10 (ATerm t)
  {
    ATerm u_3 = NULL,v_3 = NULL,w_3 = NULL;
    u_3 = t;
    {
      ATerm w_17 = t;
      int x_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_125(t);
          ;
          LocalPopChoice(x_17);
        }
      else
        {
          t = w_17;
          t = (ATerm) ATempty;
        }
      v_3 = t;
      t = u_3;
      {
        ATerm y_17 = t;
        int z_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_4 = NULL,j_4 = NULL,k_4 = NULL;
            t = u_3;
            t = n_125(t);
            g_4 = t;
            t = u_3;
            {
              ATerm b_1 (ATerm t)
              {
                ATerm d_1 (ATerm t)
                {
                  t = g_4;
                  return(t);
                }
                t = split_2_0(h_10, d_1, t);
                t = diff_1_0(p_125, t);
                return(t);
              }
              ATerm c_1 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = o_125(b_1, h_10, c_1, t);
              j_4 = t;
              t = SSL_explode_term(j_4);
              if(match_cons(t, sym__2))
                {
                  ATerm b_18 = ATgetArgument(t, 0);
                  k_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = k_4;
              {
                ATerm e_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                ATerm f_1 (ATerm t)
                {
                  ATerm h_1 (ATerm t)
                  {
                    ATerm p_4 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        p_4 = ATgetArgument(t, 0);
                        if((p_4 != ATgetArgument(t, 1)))
                          {
                            _fail(ATgetArgument(t, 1));
                          }
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = union_1_0(h_1, t);
                  return(t);
                }
                t = foldr_3_0(e_1, f_1, _id, t);
              }
            }
            ;
            LocalPopChoice(z_17);
          }
        else
          {
            t = y_17;
            {
              ATerm u_4 = NULL;
              t = SSL_explode_term(u_3);
              if(match_cons(t, sym__2))
                {
                  ATerm d_18 = ATgetArgument(t, 0);
                  u_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = u_4;
              {
                ATerm i_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                ATerm j_1 (ATerm t)
                {
                  ATerm k_1 (ATerm t)
                  {
                    ATerm z_4 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        z_4 = ATgetArgument(t, 0);
                        if((z_4 != ATgetArgument(t, 1)))
                          {
                            _fail(ATgetArgument(t, 1));
                          }
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = union_1_0(k_1, t);
                  return(t);
                }
                t = foldr_3_0(i_1, j_1, h_10, t);
              }
            }
          }
        w_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_3, w_3);
        {
          ATerm l_1 (ATerm t)
          {
            ATerm z_9 = NULL;
            if(match_cons(t, sym__2))
              {
                z_9 = ATgetArgument(t, 0);
                if((z_9 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
              }
            else
              _fail(t);
            return(t);
          }
          t = union_1_0(l_1, t);
        }
      }
    }
    return(t);
  }
  t = h_10(t);
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL,v_10 = NULL,b_11 = NULL;
    if(match_cons(t, sym_CallT_3))
      {
        ATerm e_18 = ATgetArgument(t, 0);
        if(match_cons(e_18, sym_SVar_1))
          {
            r_10 = ATgetArgument(e_18, 0);
          }
        else
          _fail(t);
        s_10 = ATgetArgument(t, 1);
        t_10 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = s_10;
    {
      ATerm s_1 (ATerm t)
      {
        t = term_f_18;
        return(t);
      }
      ATerm t_1 (ATerm t)
      {
        ATerm f_11 = NULL,g_11 = NULL;
        if(match_cons(t, sym__2))
          {
            f_11 = ATgetArgument(t, 0);
            g_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        {
          ATerm l_18 = t;
          int m_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_addi(f_11, g_11);
              ;
              LocalPopChoice(m_18);
            }
          else
            {
              t = l_18;
              t = SSL_addr(f_11, g_11);
            }
        }
        return(t);
      }
      ATerm u_1 (ATerm t)
      {
        t = term_o_18;
        return(t);
      }
      t = foldr_3_0(s_1, t_1, u_1, t);
      v_10 = t;
      t = t_10;
      {
        ATerm v_1 (ATerm t)
        {
          t = term_f_18;
          return(t);
        }
        ATerm y_1 (ATerm t)
        {
          ATerm h_11 = NULL,l_11 = NULL;
          if(match_cons(t, sym__2))
            {
              h_11 = ATgetArgument(t, 0);
              l_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          {
            ATerm p_18 = t;
            int q_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_addi(h_11, l_11);
                ;
                LocalPopChoice(q_18);
              }
            else
              {
                t = p_18;
                t = SSL_addr(h_11, l_11);
              }
          }
          return(t);
        }
        ATerm e_2 (ATerm t)
        {
          t = term_o_18;
          return(t);
        }
        t = foldr_3_0(v_1, y_1, e_2, t);
        b_11 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, r_10, (ATerm) ATmakeAppl(sym__2, v_10, b_11)));
      }
    }
    return(t);
  }
  ATerm n_1 (ATerm t)
  {
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0_0(t);
        ;
        LocalPopChoice(s_18);
      }
    else
      {
        t = r_18;
        {
          ATerm n_11 = NULL,q_11 = NULL;
          ATerm x_18 = t;
          int y_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_SDef_3))
                {
                  ATerm z_18 = ATgetArgument(t, 0);
                  q_11 = ATgetArgument(t, 1);
                  {
                    ATerm a_19 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(y_18);
              t = q_11;
              {
                ATerm f_2 (ATerm t)
                {
                  ATerm f_13 = NULL;
                  ATerm m_19 = t;
                  int n_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_VarDec_2))
                        {
                          f_13 = ATgetArgument(t, 0);
                          {
                            ATerm o_19 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      LocalPopChoice(n_19);
                      t = f_13;
                    }
                  else
                    {
                      t = m_19;
                      if(match_cons(t, sym_DefaultVarDec_1))
                        {
                          f_13 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = f_13;
                    }
                  return(t);
                }
                t = map_1_0(f_2, t);
              }
            }
          else
            {
              t = x_18;
              {
                ATerm p_19 = t;
                int q_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Rec_2))
                      {
                        n_11 = ATgetArgument(t, 0);
                        {
                          ATerm r_19 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(q_19);
                    t = (ATerm) ATinsert(ATempty, n_11);
                  }
                else
                  {
                    t = p_19;
                    {
                      ATerm s_19 = t;
                      int t_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_SDefT_4))
                            {
                              ATerm y_19 = ATgetArgument(t, 0);
                              q_11 = ATgetArgument(t, 1);
                              {
                                ATerm d_20 = ATgetArgument(t, 2);
                              }
                              {
                                ATerm h_20 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(t_19);
                          t = q_11;
                          {
                            ATerm k_2 (ATerm t)
                            {
                              ATerm a_14 = NULL;
                              ATerm j_20 = t;
                              int m_20 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      a_14 = ATgetArgument(t, 0);
                                      {
                                        ATerm t_20 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(m_20);
                                  t = a_14;
                                }
                              else
                                {
                                  t = j_20;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      a_14 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = a_14;
                                }
                              return(t);
                            }
                            t = map_1_0(k_2, t);
                          }
                        }
                      else
                        {
                          t = s_19;
                          if(match_cons(t, sym_RDefT_4))
                            {
                              ATerm u_20 = ATgetArgument(t, 0);
                              q_11 = ATgetArgument(t, 1);
                              {
                                ATerm v_20 = ATgetArgument(t, 2);
                              }
                              {
                                ATerm w_20 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          t = q_11;
                          {
                            ATerm l_2 (ATerm t)
                            {
                              ATerm m_16 = NULL;
                              ATerm x_20 = t;
                              int z_20 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      m_16 = ATgetArgument(t, 0);
                                      {
                                        ATerm a_21 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(z_20);
                                  t = m_16;
                                }
                              else
                                {
                                  t = x_20;
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
                            t = map_1_0(l_2, t);
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
  ATerm r_1 (ATerm t)
  {
    ATerm q_16 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm d_21 = ATgetArgument(t, 0);
        if(match_cons(d_21, sym__2))
          {
            q_16 = ATgetArgument(d_21, 0);
            {
              ATerm e_21 = ATgetArgument(d_21, 1);
            }
          }
        else
          _fail(t);
        if((q_16 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = free_vars2_4_0(m_1, n_1, sboundin_3_0, r_1, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL,c_17 = NULL,d_17 = NULL,g_17 = NULL,h_17 = NULL;
  if(match_cons(t, sym__2))
    {
      c_17 = ATgetArgument(t, 0);
      d_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_17;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_17 = ATgetFirst((ATermList) t);
      h_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_17;
  if(match_cons(t, sym__2))
    {
      z_16 = ATgetArgument(t, 0);
      a_17 = ATgetArgument(t, 1);
      {
        ATerm g_21 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_16;
            if((c_17 != t))
              {
                _fail(t);
              }
            t = a_17;
            ;
            LocalPopChoice(h_21);
          }
        else
          {
            t = g_21;
            t = (ATerm) ATmakeAppl(sym__2, c_17, h_17);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, c_17, h_17);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm s_112 (ATerm), ATerm t)
{
  ATerm c_18 (ATerm t)
  {
    ATerm i_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_112(t);
        ;
        LocalPopChoice(j_21);
      }
    else
      {
        t = i_21;
        t = SRTS_all(c_18, t);
      }
    return(t);
  }
  t = c_18(t);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL;
  g_18 = t;
  {
    ATerm k_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_21 = ATgetArgument(t, 0);
            ATerm n_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(l_21);
        t = g_18;
      }
    else
      {
        t = k_21;
        {
          ATerm t_18 = NULL;
          if(match_cons(t, sym__3))
            {
              h_18 = ATgetArgument(t, 0);
              i_18 = ATgetArgument(t, 1);
              j_18 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, h_18, i_18);
          {
            ATerm m_2 (ATerm t)
            {
              if(match_cons(t, sym__2))
                {
                  ATerm p_21 = ATgetArgument(t, 0);
                  if(((ATgetType(p_21) != AT_LIST) || !(ATisEmpty(p_21))))
                    _fail(t);
                  {
                    ATerm q_21 = ATgetArgument(t, 1);
                    if(((ATgetType(q_21) != AT_LIST) || !(ATisEmpty(q_21))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATempty;
              return(t);
            }
            ATerm n_2 (ATerm t)
            {
              ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL,b_19 = NULL;
              if(match_cons(t, sym__2))
                {
                  ATerm r_21 = ATgetArgument(t, 0);
                  if(((ATgetType(r_21) == AT_LIST) && !(ATisEmpty(r_21))))
                    {
                      u_18 = ATgetFirst((ATermList) r_21);
                      w_18 = (ATerm) ATgetNext((ATermList) r_21);
                    }
                  else
                    _fail(t);
                  {
                    ATerm t_21 = ATgetArgument(t, 1);
                    if(((ATgetType(t_21) == AT_LIST) && !(ATisEmpty(t_21))))
                      {
                        v_18 = ATgetFirst((ATermList) t_21);
                        b_19 = (ATerm) ATgetNext((ATermList) t_21);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_18, v_18), (ATerm) ATmakeAppl(sym__2, w_18, b_19));
              return(t);
            }
            ATerm o_2 (ATerm t)
            {
              ATerm c_19 = NULL,d_19 = NULL;
              if(match_cons(t, sym__2))
                {
                  c_19 = ATgetArgument(t, 0);
                  d_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(d_19), c_19);
              return(t);
            }
            t = genzip_4_0(m_2, n_2, o_2, _id, t);
            t_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, t_18, j_18);
          }
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm j_110 (ATerm), ATerm k_110 (ATerm), ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL;
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      f_19 = ATgetArgument(t, 0);
      e_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_19;
  {
    ATerm r_2 (ATerm t)
    {
      ATerm y_5 = NULL;
      t = j_110(t);
      y_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_5, f_19);
      t = lookup_0_0(t);
      t = k_110(t);
      return(t);
    }
    t = alltd_1_0(r_2, t);
  }
  return(t);
}
ATerm VarDec_2_0 (ATerm m_102 (ATerm), ATerm n_102 (ATerm), ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL;
  l_19 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      h_19 = ATgetArgument(t, 0);
      i_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_19);
  g_19 = t;
  t = h_19;
  t = m_102(t);
  j_19 = t;
  t = i_19;
  t = n_102(t);
  k_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, j_19, k_19), g_19);
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL,e_20 = NULL;
  u_19 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_21 = ATgetFirst((ATermList) t);
      if(match_cons(v_21, sym_SDefT_4))
        {
          v_19 = ATgetArgument(v_21, 0);
          w_19 = ATgetArgument(v_21, 1);
          x_19 = ATgetArgument(v_21, 2);
          {
            ATerm b_22 = ATgetArgument(v_21, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm w_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = w_19;
  {
    ATerm s_2 (ATerm t)
    {
      t = VarDec_2_0(new_0_0, _id, t);
      return(t);
    }
    t = map_1_0(s_2, t);
    z_19 = t;
    t = x_19;
    {
      ATerm t_2 (ATerm t)
      {
        t = VarDec_2_0(new_0_0, _id, t);
        return(t);
      }
      t = map_1_0(t_2, t);
      a_20 = t;
      t = z_19;
      {
        ATerm u_2 (ATerm t)
        {
          ATerm f_20 = NULL;
          if(match_cons(t, sym_VarDec_2))
            {
              f_20 = ATgetArgument(t, 0);
              {
                ATerm g_22 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_20), (ATerm)ATempty, (ATerm) ATempty);
          return(t);
        }
        t = map_1_0(u_2, t);
        b_20 = t;
        t = a_20;
        {
          ATerm v_2 (ATerm t)
          {
            ATerm g_20 = NULL;
            if(match_cons(t, sym_VarDec_2))
              {
                g_20 = ATgetArgument(t, 0);
                {
                  ATerm l_22 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, g_20);
            return(t);
          }
          t = map_1_0(v_2, t);
          c_20 = t;
          t = u_19;
          {
            ATerm c_3 (ATerm t)
            {
              ATerm i_20 = NULL,k_20 = NULL,l_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  ATerm m_22 = ATgetArgument(t, 0);
                  i_20 = ATgetArgument(t, 1);
                  k_20 = ATgetArgument(t, 2);
                  l_20 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = k_20;
              {
                ATerm d_3 (ATerm t)
                {
                  ATerm q_20 = NULL;
                  if(match_cons(t, sym_VarDec_2))
                    {
                      q_20 = ATgetArgument(t, 0);
                      {
                        ATerm n_22 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  t = q_20;
                  return(t);
                }
                t = map_1_0(d_3, t);
                n_20 = t;
                t = i_20;
                {
                  ATerm h_3 (ATerm t)
                  {
                    ATerm r_20 = NULL;
                    if(match_cons(t, sym_VarDec_2))
                      {
                        r_20 = ATgetArgument(t, 0);
                        {
                          ATerm o_22 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = r_20;
                    return(t);
                  }
                  t = map_1_0(h_3, t);
                  o_20 = t;
                  t = (ATerm) ATmakeAppl(sym__3, o_20, b_20, l_20);
                  {
                    ATerm i_3 (ATerm t)
                    {
                      ATerm s_20 = NULL,y_20 = NULL,b_21 = NULL,c_21 = NULL;
                      if(match_cons(t, sym_CallT_3))
                        {
                          y_20 = ATgetArgument(t, 0);
                          c_21 = ATgetArgument(t, 1);
                          s_20 = ATgetArgument(t, 2);
                          t = y_20;
                          if(match_cons(t, sym_SVar_1))
                            {
                              b_21 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = c_21;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = s_20;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = b_21;
                        }
                      else
                        {
                          if(match_cons(t, sym_Call_2))
                            {
                              y_20 = ATgetArgument(t, 0);
                              c_21 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = y_20;
                          if(match_cons(t, sym_SVar_1))
                            {
                              b_21 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = c_21;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = b_21;
                        }
                      return(t);
                    }
                    t = substitute_2_0(i_3, _id, t);
                    p_20 = t;
                    t = (ATerm) ATmakeAppl(sym__3, n_20, c_20, p_20);
                    {
                      ATerm j_3 (ATerm t)
                      {
                        ATerm f_21 = NULL;
                        if(match_cons(t, sym_Var_1))
                          {
                            f_21 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = f_21;
                        return(t);
                      }
                      t = substitute_2_0(j_3, _id, t);
                    }
                  }
                }
              }
              return(t);
            }
            t = map_1_0(c_3, t);
            {
              ATerm k_3 (ATerm t)
              {
                t = term_q_22;
                return(t);
              }
              ATerm l_3 (ATerm t)
              {
                ATerm q_6 = NULL,z_6 = NULL,g_7 = NULL;
                q_6 = t;
                t = SSL_explode_term(q_6);
                if(match_cons(t, sym__2))
                  {
                    ATerm r_22 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) r_22) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm s_22 = ATgetArgument(t, 1);
                      if(((ATgetType(s_22) == AT_LIST) && !(ATisEmpty(s_22))))
                        {
                          z_6 = ATgetFirst((ATermList) s_22);
                          {
                            ATerm v_22 = (ATerm) ATgetNext((ATermList) s_22);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(q_6);
                if(match_cons(t, sym__2))
                  {
                    ATerm z_22 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) z_22) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm a_23 = ATgetArgument(t, 1);
                      if(((ATgetType(a_23) == AT_LIST) && !(ATisEmpty(a_23))))
                        {
                          ATerm c_23 = ATgetFirst((ATermList) a_23);
                          ATerm e_23 = (ATerm) ATgetNext((ATermList) a_23);
                          if(((ATgetType(e_23) == AT_LIST) && !(ATisEmpty(e_23))))
                            {
                              g_7 = ATgetFirst((ATermList) e_23);
                              {
                                ATerm f_23 = (ATerm) ATgetNext((ATermList) e_23);
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
                t = (ATerm) ATmakeAppl(sym_Choice_2, z_6, g_7);
                return(t);
              }
              t = foldr_2_0(k_3, l_3, t);
              e_20 = t;
              t = (ATerm) ATmakeAppl(sym_SDefT_4, v_19, z_19, a_20, e_20);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm o_21 = NULL,s_21 = NULL,u_21 = NULL;
  s_21 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      u_21 = ATgetArgument(t, 0);
      o_21 = ATgetArgument(t, 1);
      {
        ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL;
        t = s_21;
        t = new_0_0(t);
        x_21 = t;
        t = new_0_0(t);
        y_21 = t;
        t = new_0_0(t);
        z_21 = t;
        t = new_0_0(t);
        a_22 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_22), z_21), y_21), x_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, x_21), (ATerm) ATmakeAppl(sym_Var_1, z_21))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, u_21, (ATerm)ATmakeAppl(sym_Var_1, x_21), (ATerm) ATmakeAppl(sym_Var_1, y_21)), (ATerm) ATmakeAppl(sym_BAM_3, o_21, (ATerm)ATmakeAppl(sym_Var_1, z_21), (ATerm) ATmakeAppl(sym_Var_1, a_22)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_g_23, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, a_22)), (ATerm) ATmakeAppl(sym_Var_1, y_21))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          u_21 = ATgetArgument(t, 0);
          {
            ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL;
            t = s_21;
            t = new_0_0(t);
            c_22 = t;
            t = u_21;
            {
              ATerm m_3 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((d_22 != NULL) && (d_22 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      d_22 = ATgetArgument(t, 0);
                    if(((e_22 != NULL) && (e_22 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      e_22 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, c_22);
                return(t);
              }
              t = oncetd_1_0(m_3, t);
              f_22 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_g_23, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_22)), not_null(d_22))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, c_22)), (ATerm) ATmakeAppl(sym_Build_1, f_22))));
            }
          }
        }
      else
        {
          ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,p_22 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              u_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_21;
          t = new_0_0(t);
          h_22 = t;
          t = new_0_0(t);
          i_22 = t;
          t = u_21;
          {
            ATerm p_3 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((j_22 != NULL) && (j_22 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    j_22 = ATgetArgument(t, 0);
                  if(((k_22 != NULL) && (k_22 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    k_22 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, h_22);
              return(t);
            }
            t = oncetd_1_0(p_3, t);
            p_22 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_22), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, i_22)), (ATerm) ATmakeAppl(sym_PrimT_3, term_i_23, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, i_22))))), (ATerm)ATmakeAppl(sym_Var_1, h_22), (ATerm) ATmakeAppl(sym_Op_2, term_k_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_22)), not_null(j_22)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm t_22 = NULL,u_22 = NULL;
  t_22 = t;
  if(match_cons(t, sym_Match_1))
    {
      u_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL,b_23 = NULL;
        t = t_22;
        t = new_0_0(t);
        w_22 = t;
        t = u_22;
        {
          ATerm q_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((y_22 != NULL) && (y_22 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_22 = ATgetArgument(t, 0);
                if(((x_22 != NULL) && (x_22 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  x_22 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, w_22), not_null(y_22));
            return(t);
          }
          t = pat_td_1_0(q_3, t);
          b_23 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_23), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_r_23, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, w_22))), (ATerm) ATmakeAppl(sym_Match_1, not_null(x_22))))));
        }
        ;
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        {
          ATerm s_23 = t;
          int v_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_23 = NULL,h_23 = NULL,j_23 = NULL;
              t = t_22;
              t = new_0_0(t);
              d_23 = t;
              t = u_22;
              {
                ATerm r_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((h_23 != NULL) && (h_23 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        h_23 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, d_23);
                  return(t);
                }
                t = pat_td_1_0(r_3, t);
                j_23 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, j_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, d_23)), not_null(h_23))));
              }
              ;
              LocalPopChoice(v_23);
            }
          else
            {
              t = s_23;
              {
                ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL;
                t = t_22;
                t = new_0_0(t);
                l_23 = t;
                t = u_22;
                {
                  ATerm x_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((m_23 != NULL) && (m_23 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          m_23 = ATgetArgument(t, 0);
                        if(((n_23 != NULL) && (n_23 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          n_23 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, l_23);
                    return(t);
                  }
                  t = pat_td_1_0(x_3, t);
                  o_23 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, o_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, l_23)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_23)), not_null(m_23)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm As_2_0 (ATerm i_97 (ATerm), ATerm j_97 (ATerm), ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL;
  o_24 = t;
  if(match_cons(t, sym_As_2))
    {
      k_24 = ATgetArgument(t, 0);
      l_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_24);
  j_24 = t;
  t = k_24;
  t = i_97(t);
  m_24 = t;
  t = l_24;
  t = j_97(t);
  n_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, m_24, n_24), j_24);
  return(t);
}
ATerm PrimT_3_0 (ATerm h_101 (ATerm), ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,c_25 = NULL,d_25 = NULL;
  d_25 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      s_24 = ATgetArgument(t, 0);
      t_24 = ATgetArgument(t, 1);
      w_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_25);
  r_24 = t;
  t = s_24;
  t = h_101(t);
  x_24 = t;
  t = t_24;
  t = i_101(t);
  y_24 = t;
  t = w_24;
  t = j_101(t);
  c_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, x_24, y_24, c_25), r_24);
  return(t);
}
ATerm Explode_2_0 (ATerm b_97 (ATerm), ATerm c_97 (ATerm), ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL;
  n_25 = t;
  if(match_cons(t, sym_Explode_2))
    {
      h_25 = ATgetArgument(t, 0);
      k_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_25);
  g_25 = t;
  t = h_25;
  t = b_97(t);
  l_25 = t;
  t = k_25;
  t = c_97(t);
  m_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, l_25, m_25), g_25);
  return(t);
}
ATerm Op_2_0 (ATerm x_96 (ATerm), ATerm y_96 (ATerm), ATerm t)
{
  ATerm q_25 = NULL,x_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL;
  c_26 = t;
  if(match_cons(t, sym_Op_2))
    {
      x_25 = ATgetArgument(t, 0);
      z_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_26);
  q_25 = t;
  t = x_25;
  t = x_96(t);
  a_26 = t;
  t = z_25;
  t = y_96(t);
  b_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, a_26, b_26), q_25);
  return(t);
}
ATerm pat_td_1_0 (ATerm g_140 (ATerm), ATerm t)
{
  ATerm a_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_140(t);
      ;
      LocalPopChoice(e_24);
    }
  else
    {
      t = a_24;
      {
        ATerm p_24 = t;
        int q_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_3 (ATerm t)
            {
              ATerm z_3 (ATerm t)
              {
                t = pat_td_1_0(g_140, t);
                return(t);
              }
              t = fetch_1_0(z_3, t);
              return(t);
            }
            t = Op_2_0(_id, y_3, t);
            ;
            LocalPopChoice(q_24);
          }
        else
          {
            t = p_24;
            {
              ATerm u_24 = t;
              int v_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_4 (ATerm t)
                  {
                    t = pat_td_1_0(g_140, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, a_4, t);
                  ;
                  LocalPopChoice(v_24);
                }
              else
                {
                  t = u_24;
                  {
                    ATerm z_24 = t;
                    int a_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm b_4 (ATerm t)
                        {
                          t = pat_td_1_0(g_140, t);
                          return(t);
                        }
                        t = Explode_2_0(b_4, _id, t);
                        ;
                        LocalPopChoice(a_25);
                      }
                    else
                      {
                        t = z_24;
                        {
                          ATerm b_25 = t;
                          int e_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm c_4 (ATerm t)
                              {
                                ATerm d_4 (ATerm t)
                                {
                                  t = pat_td_1_0(g_140, t);
                                  return(t);
                                }
                                t = fetch_1_0(d_4, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, c_4, t);
                              ;
                              LocalPopChoice(e_25);
                            }
                          else
                            {
                              t = b_25;
                              {
                                ATerm e_4 (ATerm t)
                                {
                                  t = pat_td_1_0(g_140, t);
                                  return(t);
                                }
                                t = As_2_0(_id, e_4, t);
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
ATerm Bapp2_0_0 (ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL;
  t_23 = t;
  if(match_cons(t, sym_Build_1))
    {
      u_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_25 = t;
    int i_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL;
        t = t_23;
        t = new_0_0(t);
        w_23 = t;
        t = u_23;
        {
          ATerm f_4 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((x_23 != NULL) && (x_23 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_23 = ATgetArgument(t, 0);
                if(((y_23 != NULL) && (y_23 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  y_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, w_23);
            return(t);
          }
          t = pat_td_1_0(f_4, t);
          z_23 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_j_25, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_23)), not_null(x_23))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, w_23)))), (ATerm) ATmakeAppl(sym_Build_1, z_23)));
        }
        ;
        LocalPopChoice(i_25);
      }
    else
      {
        t = f_25;
        {
          ATerm o_25 = t;
          int p_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL;
              t = t_23;
              t = new_0_0(t);
              b_24 = t;
              t = u_23;
              {
                ATerm h_4 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((c_24 != NULL) && (c_24 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        c_24 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, b_24);
                  return(t);
                }
                t = pat_td_1_0(h_4, t);
                d_24 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_24), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_24)))), (ATerm) ATmakeAppl(sym_Build_1, d_24)));
              }
              ;
              LocalPopChoice(p_25);
            }
          else
            {
              t = o_25;
              {
                ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL;
                t = t_23;
                t = new_0_0(t);
                f_24 = t;
                t = u_23;
                {
                  ATerm i_4 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((g_24 != NULL) && (g_24 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          g_24 = ATgetArgument(t, 0);
                        if(((h_24 != NULL) && (h_24 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          h_24 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, f_24);
                    return(t);
                  }
                  t = pat_td_1_0(i_4, t);
                  i_24 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(g_24), not_null(h_24), (ATerm) ATmakeAppl(sym_Var_1, f_24))), (ATerm) ATmakeAppl(sym_Build_1, i_24)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm Bapp0_0_0 (ATerm t)
{
  ATerm h_26 = NULL;
  if(match_cons(t, sym_Build_1))
    {
      h_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_26 = NULL,k_26 = NULL;
        t = h_26;
        {
          ATerm l_4 (ATerm t)
          {
            if(match_cons(t, sym_RootApp_1))
              {
                ATerm t_25 = ATgetArgument(t, 0);
                if(match_cons(t_25, sym_Build_1))
                  {
                    if(((j_26 != NULL) && (j_26 != ATgetArgument(t_25, 0))))
                      _fail(ATgetArgument(t_25, 0));
                    else
                      j_26 = ATgetArgument(t_25, 0);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            t = not_null(j_26);
            return(t);
          }
          t = pat_td_1_0(l_4, t);
          k_26 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, k_26);
        }
        ;
        LocalPopChoice(s_25);
      }
    else
      {
        t = r_25;
        {
          ATerm m_26 = NULL,n_26 = NULL;
          t = h_26;
          {
            ATerm m_4 (ATerm t)
            {
              if(match_cons(t, sym_App_2))
                {
                  ATerm u_25 = ATgetArgument(t, 0);
                  if(match_cons(u_25, sym_Build_1))
                    {
                      if(((m_26 != NULL) && (m_26 != ATgetArgument(u_25, 0))))
                        _fail(ATgetArgument(u_25, 0));
                      else
                        m_26 = ATgetArgument(u_25, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm v_25 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = not_null(m_26);
              return(t);
            }
            t = pat_td_1_0(m_4, t);
            n_26 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, n_26);
          }
        }
      }
  }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm w_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm n_4 (ATerm t)
        {
          ATerm d_26 = t;
          int e_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(e_26);
            }
          else
            {
              t = d_26;
            }
          return(t);
        }
        t = Cons_2_0(_id, n_4, t);
      }
      ;
      LocalPopChoice(y_25);
    }
  else
    {
      t = w_25;
      {
        ATerm o_4 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, o_4, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,a_27 = NULL,b_27 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      a_27 = ATgetArgument(t, 0);
      b_27 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, a_27, b_27);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          a_27 = ATgetArgument(t, 0);
          t = a_27;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_26 = ATgetFirst((ATermList) t);
              w_26 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, v_26, (ATerm) ATmakeAppl(sym_LChoices_1, w_26));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_q_22;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              a_27 = ATgetArgument(t, 0);
              t = a_27;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_26 = ATgetFirst((ATermList) t);
                  w_26 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, v_26, (ATerm) ATmakeAppl(sym_Choices_1, w_26));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_q_22;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  a_27 = ATgetArgument(t, 0);
                  t = a_27;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      v_26 = ATgetFirst((ATermList) t);
                      w_26 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_26, (ATerm) ATmakeAppl(sym_Seqs_1, w_26));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_f_26;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      a_27 = ATgetArgument(t, 0);
                      b_27 = ATgetArgument(t, 1);
                      y_26 = ATgetArgument(t, 2);
                      x_26 = ATgetArgument(t, 3);
                      {
                        ATerm p_27 = NULL,r_27 = NULL;
                        t = b_27;
                        {
                          ATerm q_4 (ATerm t)
                          {
                            ATerm s_27 = NULL;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                s_27 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_VarDec_2, s_27, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_l_26), term_l_26));
                            return(t);
                          }
                          t = map1_1_0(q_4, t);
                          p_27 = t;
                          t = y_26;
                          {
                            ATerm r_4 (ATerm t)
                            {
                              ATerm o_26 = t;
                              int p_26 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm u_27 = NULL;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      u_27 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_VarDec_2, u_27, term_l_26);
                                  ;
                                  LocalPopChoice(p_26);
                                }
                              else
                                {
                                  t = o_26;
                                }
                              return(t);
                            }
                            t = map1_1_0(r_4, t);
                            r_27 = t;
                            t = (ATerm) ATmakeAppl(sym_RDefT_4, a_27, p_27, r_27, x_26);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          a_27 = ATgetArgument(t, 0);
                          b_27 = ATgetArgument(t, 1);
                          y_26 = ATgetArgument(t, 2);
                          x_26 = ATgetArgument(t, 3);
                          {
                            ATerm q_26 = t;
                            int r_26 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm a_28 = NULL,b_28 = NULL;
                                t = y_26;
                                {
                                  ATerm s_4 (ATerm t)
                                  {
                                    ATerm c_28 = NULL;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        c_28 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, c_28, term_l_26);
                                    return(t);
                                  }
                                  t = map1_1_0(s_4, t);
                                  a_28 = t;
                                  t = b_27;
                                  {
                                    ATerm v_4 (ATerm t)
                                    {
                                      ATerm s_26 = t;
                                      int t_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm e_28 = NULL;
                                          if(match_cons(t, sym_DefaultVarDec_1))
                                            {
                                              e_28 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_VarDec_2, e_28, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_l_26), term_l_26));
                                          ;
                                          LocalPopChoice(t_26);
                                        }
                                      else
                                        {
                                          t = s_26;
                                        }
                                      return(t);
                                    }
                                    t = map_1_0(v_4, t);
                                    b_28 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, a_27, b_28, a_28, x_26);
                                  }
                                }
                                ;
                                LocalPopChoice(r_26);
                              }
                            else
                              {
                                t = q_26;
                                {
                                  ATerm k_28 = NULL,l_28 = NULL;
                                  t = b_27;
                                  {
                                    ATerm w_4 (ATerm t)
                                    {
                                      ATerm m_28 = NULL;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          m_28 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_VarDec_2, m_28, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_l_26), term_l_26));
                                      return(t);
                                    }
                                    t = map1_1_0(w_4, t);
                                    k_28 = t;
                                    t = y_26;
                                    {
                                      ATerm y_4 (ATerm t)
                                      {
                                        ATerm u_26 = t;
                                        int z_26 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm o_28 = NULL;
                                            if(match_cons(t, sym_DefaultVarDec_1))
                                              {
                                                o_28 = ATgetArgument(t, 0);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym_VarDec_2, o_28, term_l_26);
                                            ;
                                            LocalPopChoice(z_26);
                                          }
                                        else
                                          {
                                            t = u_26;
                                          }
                                        return(t);
                                      }
                                      t = map_1_0(y_4, t);
                                      l_28 = t;
                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, a_27, k_28, l_28, x_26);
                                    }
                                  }
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              a_27 = ATgetArgument(t, 0);
                              b_27 = ATgetArgument(t, 1);
                              y_26 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, b_27, (ATerm) ATmakeAppl(sym_Op_2, term_k_23, (ATerm) ATinsert(ATinsert(ATempty, y_26), a_27)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  a_27 = ATgetArgument(t, 0);
                                  b_27 = ATgetArgument(t, 1);
                                  y_26 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, y_26)), a_27), (ATerm) ATmakeAppl(sym_Build_1, b_27)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      a_27 = ATgetArgument(t, 0);
                                      b_27 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_27, (ATerm) ATmakeAppl(sym_Match_1, b_27));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          a_27 = ATgetArgument(t, 0);
                                          b_27 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_27), b_27);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              a_27 = ATgetArgument(t, 0);
                                              b_27 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_27), a_27);
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
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm m_29 (ATerm f_29, ATerm t)
  {
    ATerm h_29 = NULL;
    t = f_29;
    {
      ATerm c_27 = t;
      if((PushChoice() == 0))
        {
          t = Var_1_0(_id, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = c_27;
        }
      t = new_0_0(t);
      h_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, h_29), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_29), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_29)))), (ATerm) ATmakeAppl(sym_Var_1, h_29)));
    }
    return(t);
  }
  ATerm j_29 = NULL,k_29 = NULL;
  j_29 = t;
  if(match_cons(t, sym_Var_1))
    {
      k_29 = ATgetArgument(t, 0);
      {
        ATerm d_27 = t;
        int e_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_29(j_29, t);
            ;
            LocalPopChoice(e_27);
          }
        else
          {
            t = d_27;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_f_26, (ATerm) ATmakeAppl(sym_Var_1, k_29)));
          }
      }
    }
  else
    {
      t = m_29(j_29, t);
    }
  return(t);
}
ATerm Var_1_0 (ATerm r_96 (ATerm), ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL,r_29 = NULL,s_29 = NULL;
  s_29 = t;
  if(match_cons(t, sym_Var_1))
    {
      o_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_29);
  n_29 = t;
  t = o_29;
  t = r_96(t);
  r_29 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, r_29), n_29);
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL;
  b_32 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      c_32 = ATgetArgument(t, 0);
      d_32 = ATgetArgument(t, 1);
      a_32 = ATgetArgument(t, 2);
      {
        ATerm y_7 = NULL,a_8 = NULL,b_8 = NULL;
        t = a_32;
        {
          ATerm a_5 (ATerm t)
          {
            ATerm f_27 = t;
            if((PushChoice() == 0))
              {
                t = Var_1_0(_id, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = f_27;
              }
            return(t);
          }
          t = fetch_1_0(a_5, t);
          t = a_32;
          {
            ATerm c_5 (ATerm t)
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_g_27;
              return(t);
            }
            ATerm d_5 (ATerm t)
            {
              ATerm c_8 = NULL,d_8 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_8 = ATgetFirst((ATermList) t);
                  d_8 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, c_8, d_8);
              return(t);
            }
            ATerm g_5 (ATerm t)
            {
              ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL;
              if(match_cons(t, sym__2))
                {
                  ATerm h_27 = ATgetArgument(t, 0);
                  if(match_cons(h_27, sym__2))
                    {
                      e_8 = ATgetArgument(h_27, 0);
                      g_8 = ATgetArgument(h_27, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm i_27 = ATgetArgument(t, 1);
                    if(match_cons(i_27, sym__2))
                      {
                        f_8 = ATgetArgument(i_27, 0);
                        h_8 = ATgetArgument(i_27, 1);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_8), e_8), (ATerm) ATinsert(CheckATermList(h_8), g_8));
              return(t);
            }
            t = genzip_4_0(c_5, d_5, g_5, LiftPrimArg_0_0, t);
            {
              ATerm h_5 (ATerm t)
              {
                ATerm i_5 (ATerm t)
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_g_27;
                  return(t);
                }
                ATerm k_5 (ATerm t)
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
                ATerm n_5 (ATerm t)
                {
                  ATerm l_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm j_27 = ATgetArgument(t, 0);
                      if(match_cons(j_27, sym__2))
                        {
                          l_8 = ATgetArgument(j_27, 0);
                          n_8 = ATgetArgument(j_27, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm k_27 = ATgetArgument(t, 1);
                        if(match_cons(k_27, sym__2))
                          {
                            m_8 = ATgetArgument(k_27, 0);
                            o_8 = ATgetArgument(k_27, 1);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_8), l_8), (ATerm) ATinsert(CheckATermList(o_8), n_8));
                  return(t);
                }
                t = genzip_4_0(i_5, k_5, n_5, _id, t);
                return(t);
              }
              t = _2_0(concat_0_0, h_5, t);
              if(match_cons(t, sym__2))
                {
                  y_7 = ATgetArgument(t, 0);
                  {
                    ATerm l_27 = ATgetArgument(t, 1);
                    if(match_cons(l_27, sym__2))
                      {
                        a_8 = ATgetArgument(l_27, 0);
                        b_8 = ATgetArgument(l_27, 1);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Scope_2, y_7, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, a_8), (ATerm) ATmakeAppl(sym_PrimT_3, c_32, d_32, b_8)));
            }
          }
        }
      }
    }
  else
    {
      ATerm y_8 = NULL,c_9 = NULL,d_9 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          c_32 = ATgetArgument(t, 0);
          d_32 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_32;
      {
        ATerm q_5 (ATerm t)
        {
          ATerm m_27 = t;
          if((PushChoice() == 0))
            {
              t = Var_1_0(_id, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = m_27;
            }
          return(t);
        }
        t = fetch_1_0(q_5, t);
        t = d_32;
        {
          ATerm s_5 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = term_g_27;
            return(t);
          }
          ATerm t_5 (ATerm t)
          {
            ATerm e_9 = NULL,f_9 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_9 = ATgetFirst((ATermList) t);
                f_9 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, e_9, f_9);
            return(t);
          }
          ATerm w_5 (ATerm t)
          {
            ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL,m_9 = NULL;
            if(match_cons(t, sym__2))
              {
                ATerm n_27 = ATgetArgument(t, 0);
                if(match_cons(n_27, sym__2))
                  {
                    g_9 = ATgetArgument(n_27, 0);
                    i_9 = ATgetArgument(n_27, 1);
                  }
                else
                  _fail(t);
                {
                  ATerm o_27 = ATgetArgument(t, 1);
                  if(match_cons(o_27, sym__2))
                    {
                      h_9 = ATgetArgument(o_27, 0);
                      m_9 = ATgetArgument(o_27, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_9), g_9), (ATerm) ATinsert(CheckATermList(m_9), i_9));
            return(t);
          }
          t = genzip_4_0(s_5, t_5, w_5, LiftPrimArg_0_0, t);
          {
            ATerm x_5 (ATerm t)
            {
              ATerm z_5 (ATerm t)
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = term_g_27;
                return(t);
              }
              ATerm b_6 (ATerm t)
              {
                ATerm o_9 = NULL,s_9 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    o_9 = ATgetFirst((ATermList) t);
                    s_9 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, o_9, s_9);
                return(t);
              }
              ATerm f_6 (ATerm t)
              {
                ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm q_27 = ATgetArgument(t, 0);
                    if(match_cons(q_27, sym__2))
                      {
                        t_9 = ATgetArgument(q_27, 0);
                        v_9 = ATgetArgument(q_27, 1);
                      }
                    else
                      _fail(t);
                    {
                      ATerm t_27 = ATgetArgument(t, 1);
                      if(match_cons(t_27, sym__2))
                        {
                          u_9 = ATgetArgument(t_27, 0);
                          w_9 = ATgetArgument(t_27, 1);
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_9), t_9), (ATerm) ATinsert(CheckATermList(w_9), v_9));
                return(t);
              }
              t = genzip_4_0(z_5, b_6, f_6, _id, t);
              return(t);
            }
            t = _2_0(concat_0_0, x_5, t);
            if(match_cons(t, sym__2))
              {
                y_8 = ATgetArgument(t, 0);
                {
                  ATerm v_27 = ATgetArgument(t, 1);
                  if(match_cons(v_27, sym__2))
                    {
                      c_9 = ATgetArgument(v_27, 0);
                      d_9 = ATgetArgument(v_27, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, y_8, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_9), (ATerm) ATmakeAppl(sym_PrimT_3, c_32, (ATerm)ATempty, d_9)));
          }
        }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm l_127 (ATerm), ATerm t)
{
  ATerm g_32 (ATerm t)
  {
    ATerm w_27 = t;
    int x_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_127(t);
        t = g_32(t);
        ;
        LocalPopChoice(x_27);
      }
    else
      {
        t = w_27;
      }
    return(t);
  }
  t = g_32(t);
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm y_27 = t;
  if((PushChoice() == 0))
    {
      ATerm g_6 (ATerm t)
      {
        ATerm z_27 = t;
        int d_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(d_28);
          }
        else
          {
            t = z_27;
            if(!(match_cons(t, sym_Wld_0)))
              _fail(t);
          }
        return(t);
      }
      t = topdown_1_0(g_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_27;
    }
  return(t);
}
ATerm App_2_0 (ATerm f_97 (ATerm), ATerm g_97 (ATerm), ATerm t)
{
  ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL;
  m_32 = t;
  if(match_cons(t, sym_App_2))
    {
      i_32 = ATgetArgument(t, 0);
      j_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_32);
  h_32 = t;
  t = i_32;
  t = f_97(t);
  k_32 = t;
  t = j_32;
  t = g_97(t);
  l_32 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, k_32, l_32), h_32);
  return(t);
}
ATerm Con_3_0 (ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL;
  z_32 = t;
  if(match_cons(t, sym_Con_3))
    {
      q_32 = ATgetArgument(t, 0);
      r_32 = ATgetArgument(t, 1);
      s_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_32);
  p_32 = t;
  t = q_32;
  t = r_97(t);
  t_32 = t;
  t = r_32;
  t = s_97(t);
  x_32 = t;
  t = s_32;
  t = t_97(t);
  y_32 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, t_32, x_32, y_32), p_32);
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm f_28 = t;
  if((PushChoice() == 0))
    {
      ATerm h_6 (ATerm t)
      {
        ATerm g_28 = t;
        int h_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(h_28);
          }
        else
          {
            t = g_28;
            t = App_2_0(_id, _id, t);
          }
        return(t);
      }
      t = topdown_1_0(h_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_28;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm f_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      f_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_33;
  if(match_cons(t, sym_StratRule_3))
    {
      j_33 = ATgetArgument(t, 0);
      k_33 = ATgetArgument(t, 1);
      l_33 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_33), (ATerm) ATmakeAppl(sym_Where_1, l_33)), j_33));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          j_33 = ATgetArgument(t, 0);
          k_33 = ATgetArgument(t, 1);
          l_33 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = j_33;
      t = pureterm_0_0(t);
      t = k_33;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, k_33)), (ATerm) ATmakeAppl(sym_Where_1, l_33)), (ATerm) ATmakeAppl(sym_Match_1, j_33)));
    }
  return(t);
}
ATerm Scope_2_0 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL;
  y_33 = t;
  if(match_cons(t, sym_Scope_2))
    {
      u_33 = ATgetArgument(t, 0);
      v_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_33);
  t_33 = t;
  t = u_33;
  t = l_100(t);
  w_33 = t;
  t = v_33;
  t = m_100(t);
  x_33 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, w_33, x_33), t_33);
  return(t);
}
ATerm oncetd_1_0 (ATerm e_112 (ATerm), ATerm t)
{
  ATerm b_34 (ATerm t)
  {
    ATerm i_28 = t;
    int j_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_112(t);
        ;
        LocalPopChoice(j_28);
      }
    else
      {
        t = i_28;
        t = SRTS_one(b_34, t);
      }
    return(t);
  }
  t = b_34(t);
  return(t);
}
ATerm Rcon_0_0 (ATerm t)
{
  ATerm f_34 = NULL,g_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL,p_34 = NULL,q_34 = NULL,s_34 = NULL,t_34 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      ATerm n_28 = ATgetArgument(t, 0);
      if(match_cons(n_28, sym_Rule_3))
        {
          f_34 = ATgetArgument(n_28, 0);
          g_34 = ATgetArgument(n_28, 1);
          i_34 = ATgetArgument(n_28, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = new_0_0(t);
  j_34 = t;
  t = f_34;
  {
    ATerm m_6 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm p_28 = ATgetArgument(t, 0);
          if(match_cons(p_28, sym_Var_1))
            {
              if(((l_34 != NULL) && (l_34 != ATgetArgument(p_28, 0))))
                _fail(ATgetArgument(p_28, 0));
              else
                l_34 = ATgetArgument(p_28, 0);
            }
          else
            _fail(t);
          if(((k_34 != NULL) && (k_34 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            k_34 = ATgetArgument(t, 1);
          {
            ATerm q_28 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_34));
      return(t);
    }
    t = oncetd_1_0(m_6, t);
    p_34 = t;
    t = g_34;
    {
      ATerm n_6 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm r_28 = ATgetArgument(t, 0);
            if(match_cons(r_28, sym_Var_1))
              {
                if(((l_34 != NULL) && (l_34 != ATgetArgument(r_28, 0))))
                  _fail(ATgetArgument(r_28, 0));
                else
                  l_34 = ATgetArgument(r_28, 0);
              }
            else
              _fail(t);
            if(((q_34 != NULL) && (q_34 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              q_34 = ATgetArgument(t, 1);
            {
              ATerm s_28 = ATgetArgument(t, 2);
              if(match_cons(s_28, sym_CallT_3))
                {
                  if(((s_34 != NULL) && (s_34 != ATgetArgument(s_28, 0))))
                    _fail(ATgetArgument(s_28, 0));
                  else
                    s_34 = ATgetArgument(s_28, 0);
                  {
                    ATerm t_28 = ATgetArgument(s_28, 1);
                    if(((ATgetType(t_28) != AT_LIST) || !(ATisEmpty(t_28))))
                      _fail(t);
                  }
                  {
                    ATerm u_28 = ATgetArgument(s_28, 2);
                    if(((ATgetType(u_28) != AT_LIST) || !(ATisEmpty(u_28))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, j_34);
        return(t);
      }
      t = oncetd_1_0(n_6, t);
      t_34 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_34), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, p_34, t_34, (ATerm) ATmakeAppl(sym_Seq_2, i_34, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(s_34), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(k_34), not_null(q_34), term_f_26))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(l_34)), (ATerm) ATmakeAppl(sym_Var_1, j_34))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm v_28 = t;
  int w_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_28 = t;
      int y_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Rcon_0_0(t);
          t = desugarRule_0_0(t);
          ;
          LocalPopChoice(y_28);
        }
      else
        {
          t = x_28;
          {
            ATerm z_28 = t;
            int a_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Scope_2_0(_id, desugarRule_0_0, t);
                ;
                LocalPopChoice(a_29);
              }
            else
              {
                t = z_28;
                t = RtoS_0_0(t);
              }
          }
        }
      ;
      LocalPopChoice(w_28);
    }
  else
    {
      t = v_28;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm a_111 (ATerm), ATerm t)
{
  t = a_111(t);
  {
    ATerm o_6 (ATerm t)
    {
      t = topdown_1_0(a_111, t);
      return(t);
    }
    t = SRTS_all(o_6, t);
  }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm c_115 (ATerm), ATerm t)
{
  ATerm x_34 = NULL;
  ATerm c_35 (ATerm t)
  {
    ATerm b_29 = t;
    int c_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_34 = NULL,a_35 = NULL,b_35 = NULL;
        y_34 = t;
        {
          ATerm r_6 (ATerm t)
          {
            ATerm a_10 = NULL,b_10 = NULL;
            a_10 = t;
            t = SSL_explode_term(a_10);
            if(match_cons(t, sym__2))
              {
                ATerm d_29 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) d_29) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm e_29 = ATgetArgument(t, 1);
                  if(((ATgetType(e_29) == AT_LIST) && !(ATisEmpty(e_29))))
                    {
                      b_10 = ATgetFirst((ATermList) e_29);
                      {
                        ATerm g_29 = (ATerm) ATgetNext((ATermList) e_29);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = b_10;
            return(t);
          }
          t = map_1_0(r_6, t);
          t = c_115(t);
          a_35 = t;
          t = y_34;
          {
            ATerm v_6 (ATerm t)
            {
              ATerm e_10 = NULL,f_10 = NULL;
              e_10 = t;
              t = SSL_explode_term(e_10);
              if(match_cons(t, sym__2))
                {
                  ATerm i_29 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) i_29) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm l_29 = ATgetArgument(t, 1);
                    if(((ATgetType(l_29) == AT_LIST) && !(ATisEmpty(l_29))))
                      {
                        ATerm p_29 = ATgetFirst((ATermList) l_29);
                        f_10 = (ATerm) ATgetNext((ATermList) l_29);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), f_10);
              return(t);
            }
            t = map_1_0(v_6, t);
            t = c_35(t);
            b_35 = t;
            t = (ATerm) ATinsert(CheckATermList(b_35), a_35);
          }
        }
        ;
        LocalPopChoice(c_29);
      }
    else
      {
        t = b_29;
        {
          ATerm w_6 (ATerm t)
          {
            if(!(match_cons(t, sym__0)))
              _fail(t);
            return(t);
          }
          t = map_1_0(w_6, t);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = c_35(t);
  x_34 = t;
  t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), x_34);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm d_35 = NULL;
  d_35 = t;
  {
    ATerm q_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL;
        t = d_35;
        t = new_0_0(t);
        f_35 = t;
        t = new_0_0(t);
        g_35 = t;
        t = new_0_0(t);
        h_35 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_35), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_k_23, (ATerm) ATinsert(ATinsert(ATempty, d_35), (ATerm) ATmakeAppl(sym_Var_1, g_35))), (ATerm) ATmakeAppl(sym_Var_1, h_35)), (ATerm)ATmakeAppl(sym_VarDec_2, f_35, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_l_26), term_l_26)), g_35, (ATerm)ATmakeAppl(sym_Var_1, g_35), h_35, (ATerm) ATmakeAppl(sym_Var_1, h_35));
        ;
        LocalPopChoice(t_29);
      }
    else
      {
        t = q_29;
        {
          ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL;
          t = d_35;
          t = new_0_0(t);
          j_35 = t;
          t = new_0_0(t);
          k_35 = t;
          t = new_0_0(t);
          l_35 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_35), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_k_23, (ATerm) ATinsert(ATinsert(ATempty, d_35), (ATerm) ATmakeAppl(sym_Var_1, k_35))), (ATerm) ATmakeAppl(sym_Var_1, l_35)), (ATerm)ATmakeAppl(sym_VarDec_2, j_35, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_l_26), term_l_26)), k_35, (ATerm)ATmakeAppl(sym_Var_1, k_35), l_35, (ATerm) ATmakeAppl(sym_Var_1, l_35));
        }
      }
  }
  return(t);
}
ATerm copy_1_0 (ATerm f_122 (ATerm), ATerm t)
{
  ATerm x_6 (ATerm t)
  {
    ATerm m_35 = NULL,n_35 = NULL;
    if(match_cons(t, sym__2))
      {
        m_35 = ATgetArgument(t, 0);
        n_35 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, m_35, n_35, (ATerm) ATempty);
    return(t);
  }
  ATerm y_6 (ATerm t)
  {
    ATerm o_35 = NULL;
    if(match_cons(t, sym__3))
      {
        ATerm u_29 = ATgetArgument(t, 0);
        if(((ATgetType(u_29) != AT_INT) || (ATgetInt((ATermInt) u_29) != 0)))
          _fail(t);
        {
          ATerm v_29 = ATgetArgument(t, 1);
        }
        o_35 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = o_35;
    return(t);
  }
  ATerm a_7 (ATerm t)
  {
    ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL;
    if(match_cons(t, sym__3))
      {
        p_35 = ATgetArgument(t, 0);
        q_35 = ATgetArgument(t, 1);
        r_35 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, p_35, term_o_18);
    t = geq_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, p_35, term_o_18);
    {
      ATerm w_29 = t;
      int x_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(p_35, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(x_29);
        }
      else
        {
          t = w_29;
          t = SSL_subtr(p_35, (ATerm) ATmakeInt(1));
        }
      s_35 = t;
      t = q_35;
      t = f_122(t);
      t_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, s_35, q_35, (ATerm) ATinsert(CheckATermList(r_35), t_35));
    }
    return(t);
  }
  t = for_3_0(x_6, y_6, a_7, t);
  return(t);
}
ATerm MkThreadApplication_0_0 (ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL;
  if(match_cons(t, sym__2))
    {
      u_35 = ATgetArgument(t, 0);
      v_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = new_0_0(t);
  w_35 = t;
  t = new_0_0(t);
  x_35 = t;
  t = new_0_0(t);
  y_35 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, w_35), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_k_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, u_35)), (ATerm) ATmakeAppl(sym_Var_1, x_35))), (ATerm) ATmakeAppl(sym_Op_2, term_k_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_35)), (ATerm) ATmakeAppl(sym_Var_1, y_35)))), (ATerm)ATmakeAppl(sym_VarDec_2, w_35, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_l_26), term_l_26)), x_35, (ATerm)ATmakeAppl(sym_Var_1, x_35), y_35, (ATerm) ATmakeAppl(sym_Var_1, y_35));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_36 = ATgetFirst((ATermList) t);
      d_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = d_36;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm y_29 = t;
      int z_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_36;
          ;
          LocalPopChoice(z_29);
        }
      else
        {
          t = y_29;
          t = d_36;
          t = last_0_0(t);
        }
    }
  else
    {
      t = d_36;
      t = last_0_0(t);
    }
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm p_38 (ATerm q_36, ATerm r_36, ATerm s_36, ATerm t_36, ATerm t)
  {
    ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, r_36, term_o_18);
    {
      ATerm a_30 = t;
      int b_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(r_36, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(b_30);
        }
      else
        {
          t = a_30;
          t = SSL_addr(r_36, (ATerm) ATmakeInt(1));
        }
      x_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_36, term_t_14);
      t = copy_1_0(new_0_0, t);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_36 = ATgetFirst((ATermList) t);
          z_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_36;
      t = last_0_0(t);
      a_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_36), y_36), z_36);
      {
        ATerm e_7 (ATerm t)
        {
          if(match_cons(t, sym__2))
            {
              ATerm c_30 = ATgetArgument(t, 0);
              ATerm d_30 = ATgetArgument(t, 1);
              if(((ATgetType(d_30) != AT_LIST) || !(ATisEmpty(d_30))))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATempty;
          return(t);
        }
        ATerm f_7 (ATerm t)
        {
          ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL;
          if(match_cons(t, sym__2))
            {
              ATerm e_30 = ATgetArgument(t, 0);
              if(((ATgetType(e_30) == AT_LIST) && !(ATisEmpty(e_30))))
                {
                  i_37 = ATgetFirst((ATermList) e_30);
                  k_37 = (ATerm) ATgetNext((ATermList) e_30);
                }
              else
                _fail(t);
              {
                ATerm f_30 = ATgetArgument(t, 1);
                if(((ATgetType(f_30) == AT_LIST) && !(ATisEmpty(f_30))))
                  {
                    j_37 = ATgetFirst((ATermList) f_30);
                    l_37 = (ATerm) ATgetNext((ATermList) f_30);
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_37, j_37), (ATerm) ATmakeAppl(sym__2, k_37, l_37));
          return(t);
        }
        ATerm i_7 (ATerm t)
        {
          ATerm m_37 = NULL,n_37 = NULL;
          if(match_cons(t, sym__2))
            {
              m_37 = ATgetArgument(t, 0);
              n_37 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(n_37), m_37);
          return(t);
        }
        t = genzip_4_0(e_7, f_7, i_7, MkThreadApplication_0_0, t);
        t = tuple_unzip_1_0(_id, t);
        if(match_cons(t, sym__6))
          {
            b_37 = ATgetArgument(t, 0);
            c_37 = ATgetArgument(t, 1);
            d_37 = ATgetArgument(t, 2);
            e_37 = ATgetArgument(t, 3);
            f_37 = ATgetArgument(t, 4);
            g_37 = ATgetArgument(t, 5);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, f_37), d_37), z_36);
        t = concat_0_0(t);
        h_37 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, q_36, term_g_30), c_37, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(h_37), y_36), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_36)), (ATerm) ATmakeAppl(sym_Op_2, q_36, e_37))), (ATerm)ATmakeAppl(sym_Op_2, term_k_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, a_37)), (ATerm) ATmakeAppl(sym_Op_2, q_36, g_37))), (ATerm) ATmakeAppl(sym_Seqs_1, b_37)))));
      }
    }
    return(t);
  }
  ATerm q_38 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm r_37, ATerm t)
  {
    ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL;
    t = r_37;
    t = new_0_0(t);
    w_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_37, (ATerm) ATmakeAppl(sym_Var_1, w_37));
    t = copy_1_0(MkDistApplication_0_0, t);
    t = tuple_unzip_1_0(_id, t);
    if(match_cons(t, sym__6))
      {
        x_37 = ATgetArgument(t, 0);
        y_37 = ATgetArgument(t, 1);
        z_37 = ATgetArgument(t, 2);
        a_38 = ATgetArgument(t, 3);
        b_38 = ATgetArgument(t, 4);
        c_38 = ATgetArgument(t, 5);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, z_37, b_38);
    {
      ATerm h_30 = t;
      int i_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm j_30 = ATgetArgument(t, 0);
              ATerm k_30 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_37;
          {
            ATerm j_7 (ATerm t)
            {
              t = b_38;
              return(t);
            }
            t = at_end_1_0(j_7, t);
          }
          ;
          LocalPopChoice(i_30);
        }
      else
        {
          t = h_30;
          {
            ATerm k_10 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, z_37, b_38));
            if(match_cons(t, sym__2))
              {
                ATerm l_30 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) l_30) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                k_10 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = k_10;
            t = concat_0_0(t);
          }
        }
      d_38 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, o_37, term_m_30), y_37, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(d_38), w_37), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, w_37)), (ATerm) ATmakeAppl(sym_Op_2, o_37, a_38))), (ATerm)ATmakeAppl(sym_Op_2, o_37, c_38), (ATerm) ATmakeAppl(sym_Seqs_1, x_37)))));
    }
    return(t);
  }
  ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL;
  h_38 = t;
  if(match_cons(t, sym__3))
    {
      i_38 = ATgetArgument(t, 0);
      j_38 = ATgetArgument(t, 1);
      k_38 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_38;
  if(match_string(t, "T"))
    {
      t = k_38;
      if(match_cons(t, sym__2))
        {
          l_38 = ATgetArgument(t, 0);
          m_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_38;
      if(match_int(t, 0))
        {
          ATerm n_30 = t;
          int o_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_38(i_38, l_38, m_38, h_38, t);
              ;
              LocalPopChoice(o_30);
            }
          else
            {
              t = n_30;
              {
                ATerm o_38 = NULL;
                t = h_38;
                t = new_0_0(t);
                o_38 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, i_38, term_g_30), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_38), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_k_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, o_38)), (ATerm) ATmakeAppl(sym_Op_2, i_38, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_k_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, o_38)), (ATerm) ATmakeAppl(sym_Op_2, i_38, (ATerm) ATempty))), term_f_26))));
              }
            }
        }
      else
        {
          t = p_38(i_38, l_38, m_38, h_38, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = k_38;
      if(match_cons(t, sym__2))
        {
          l_38 = ATgetArgument(t, 0);
          m_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = q_38(i_38, l_38, m_38, h_38, t);
    }
  return(t);
}
ATerm CongruenceDef_0_0 (ATerm t)
{
  ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_30 = ATgetArgument(t, 0);
      if(match_cons(p_30, sym__2))
        {
          ATerm q_30 = ATgetArgument(p_30, 0);
          if(match_cons(q_30, sym_Mod_2))
            {
              v_38 = ATgetArgument(q_30, 0);
              w_38 = ATgetArgument(q_30, 1);
            }
          else
            _fail(t);
          x_38 = ATgetArgument(p_30, 1);
        }
      else
        _fail(t);
      y_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, v_38, w_38, x_38);
  t = DefineCongruence_0_0(t);
  {
    ATerm k_7 (ATerm t)
    {
      ATerm r_30 = t;
      int s_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = desugarRule_0_0(t);
          ;
          LocalPopChoice(s_30);
        }
      else
        {
          t = r_30;
        }
      {
        ATerm l_7 (ATerm t)
        {
          ATerm t_30 = t;
          int u_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = LiftPrimArgs_0_0(t);
              ;
              LocalPopChoice(u_30);
            }
          else
            {
              t = t_30;
              {
                ATerm v_30 = t;
                int w_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = HL_0_0(t);
                    ;
                    LocalPopChoice(w_30);
                  }
                else
                  {
                    t = v_30;
                    {
                      ATerm x_30 = t;
                      int y_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm z_30 = t;
                          int a_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Bapp0_0_0(t);
                              ;
                              LocalPopChoice(a_31);
                            }
                          else
                            {
                              t = z_30;
                              {
                                ATerm b_31 = t;
                                int c_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL;
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        b_39 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = b_39;
                                    if(match_cons(t, sym_RootApp_1))
                                      {
                                        c_39 = ATgetArgument(t, 0);
                                        t = c_39;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_App_2))
                                          {
                                            c_39 = ATgetArgument(t, 0);
                                            d_39 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_39), c_39);
                                      }
                                    ;
                                    LocalPopChoice(c_31);
                                  }
                                else
                                  {
                                    t = b_31;
                                    t = Bapp2_0_0(t);
                                  }
                              }
                            }
                          ;
                          LocalPopChoice(y_30);
                        }
                      else
                        {
                          t = x_30;
                          {
                            ATerm d_31 = t;
                            int e_31 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm f_31 = t;
                                int g_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
                                    if(match_cons(t, sym_Match_1))
                                      {
                                        o_10 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = o_10;
                                    {
                                      ATerm n_7 (ATerm t)
                                      {
                                        if(match_cons(t, sym_RootApp_1))
                                          {
                                            ATerm h_31 = ATgetArgument(t, 0);
                                            if(match_cons(h_31, sym_Match_1))
                                              {
                                                if(((p_10 != NULL) && (p_10 != ATgetArgument(h_31, 0))))
                                                  _fail(ATgetArgument(h_31, 0));
                                                else
                                                  p_10 = ATgetArgument(h_31, 0);
                                              }
                                            else
                                              _fail(t);
                                          }
                                        else
                                          _fail(t);
                                        t = not_null(p_10);
                                        return(t);
                                      }
                                      t = pat_td_1_0(n_7, t);
                                      q_10 = t;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, q_10);
                                    }
                                    ;
                                    LocalPopChoice(g_31);
                                  }
                                else
                                  {
                                    t = f_31;
                                    {
                                      ATerm i_31 = t;
                                      int j_31 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm n_39 = NULL,o_39 = NULL,q_39 = NULL;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              n_39 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = n_39;
                                          if(match_cons(t, sym_RootApp_1))
                                            {
                                              o_39 = ATgetArgument(t, 0);
                                              t = o_39;
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_App_2))
                                                {
                                                  o_39 = ATgetArgument(t, 0);
                                                  q_39 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = (ATerm) ATmakeAppl(sym_BA_2, o_39, q_39);
                                            }
                                          ;
                                          LocalPopChoice(j_31);
                                        }
                                      else
                                        {
                                          t = i_31;
                                          t = Mapp2_0_0(t);
                                        }
                                    }
                                  }
                                ;
                                LocalPopChoice(e_31);
                              }
                            else
                              {
                                t = d_31;
                                t = Expl_0_0(t);
                              }
                          }
                        }
                    }
                  }
              }
            }
          return(t);
        }
        t = repeat_1_0(l_7, t);
      }
      return(t);
    }
    t = topdown_1_0(k_7, t);
    z_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_38, y_38);
  }
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm k_31 = t;
  int l_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0_0(t);
      ;
      LocalPopChoice(l_31);
    }
  else
    {
      t = k_31;
      {
        ATerm z_10 = NULL,a_11 = NULL,c_11 = NULL,d_11 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm m_31 = ATgetArgument(t, 0);
            if(match_cons(m_31, sym__2))
              {
                z_10 = ATgetArgument(m_31, 0);
                a_11 = ATgetArgument(m_31, 1);
              }
            else
              _fail(t);
            c_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_10, a_11);
        t = Definitions_0_0(t);
        d_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_11, c_11);
        {
          ATerm o_7 (ATerm t)
          {
            ATerm n_31 = t;
            int o_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_39 = NULL,z_39 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    y_39 = ATgetFirst((ATermList) t);
                    z_39 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = z_39;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = y_39;
                ;
                LocalPopChoice(o_31);
              }
            else
              {
                t = n_31;
                t = JoinDefs2_0_0(t);
              }
            return(t);
          }
          t = _2_0(o_7, _id, t);
        }
      }
    }
  return(t);
}
ATerm diff_1_0 (ATerm z_118 (ATerm), ATerm t)
{
  ATerm b_40 = NULL,c_40 = NULL;
  if(match_cons(t, sym__2))
    {
      c_40 = ATgetArgument(t, 0);
      b_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_40;
  {
    ATerm d_40 (ATerm t)
    {
      ATerm p_31 = t;
      int q_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(q_31);
        }
      else
        {
          t = p_31;
          {
            ATerm r_31 = t;
            int s_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_11 = NULL,i_11 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    e_11 = ATgetFirst((ATermList) t);
                    i_11 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = b_40;
                {
                  ATerm s_7 (ATerm t)
                  {
                    ATerm j_11 = NULL;
                    j_11 = t;
                    t = (ATerm) ATmakeAppl(sym__2, e_11, j_11);
                    t = z_118(t);
                    return(t);
                  }
                  t = fetch_1_0(s_7, t);
                  t = i_11;
                  t = d_40(t);
                }
                ;
                LocalPopChoice(s_31);
              }
            else
              {
                t = r_31;
                t = Cons_2_0(_id, d_40, t);
              }
          }
        }
      return(t);
    }
    t = d_40(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm m_115 (ATerm), ATerm n_115 (ATerm), ATerm o_115 (ATerm), ATerm p_115 (ATerm), ATerm t)
{
  ATerm e_40 (ATerm t)
  {
    ATerm t_31 = t;
    int u_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_115(t);
        ;
        LocalPopChoice(u_31);
      }
    else
      {
        t = t_31;
        t = n_115(t);
        t = _2_0(p_115, e_40, t);
        t = o_115(t);
      }
    return(t);
  }
  t = e_40(t);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_31 = ATgetFirst((ATermList) t);
      if(match_cons(v_31, sym__2))
        {
          k_40 = ATgetArgument(v_31, 0);
          l_40 = ATgetArgument(v_31, 1);
        }
      else
        _fail(t);
      m_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(l_40);
  if(match_cons(t, sym__2))
    {
      n_40 = ATgetArgument(t, 0);
      o_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(k_40);
  if(match_cons(t, sym__2))
    {
      if((n_40 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      p_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_40, o_40);
  {
    ATerm t_7 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          ATerm w_31 = ATgetArgument(t, 0);
          if(((ATgetType(w_31) != AT_LIST) || !(ATisEmpty(w_31))))
            _fail(t);
          {
            ATerm x_31 = ATgetArgument(t, 1);
            if(((ATgetType(x_31) != AT_LIST) || !(ATisEmpty(x_31))))
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    ATerm w_7 (ATerm t)
    {
      ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm y_31 = ATgetArgument(t, 0);
          if(((ATgetType(y_31) == AT_LIST) && !(ATisEmpty(y_31))))
            {
              r_40 = ATgetFirst((ATermList) y_31);
              t_40 = (ATerm) ATgetNext((ATermList) y_31);
            }
          else
            _fail(t);
          {
            ATerm z_31 = ATgetArgument(t, 1);
            if(((ATgetType(z_31) == AT_LIST) && !(ATisEmpty(z_31))))
              {
                s_40 = ATgetFirst((ATermList) z_31);
                u_40 = (ATerm) ATgetNext((ATermList) z_31);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_40, s_40), (ATerm) ATmakeAppl(sym__2, t_40, u_40));
      return(t);
    }
    ATerm x_7 (ATerm t)
    {
      ATerm v_40 = NULL,w_40 = NULL;
      if(match_cons(t, sym__2))
        {
          v_40 = ATgetArgument(t, 0);
          w_40 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(w_40), v_40);
      return(t);
    }
    t = genzip_4_0(t_7, w_7, x_7, _id, t);
    q_40 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_40, m_40);
    {
      ATerm e_32 = t;
      int f_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm n_32 = ATgetArgument(t, 0);
              ATerm o_32 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_40;
          {
            ATerm z_7 (ATerm t)
            {
              t = m_40;
              return(t);
            }
            t = at_end_1_0(z_7, t);
          }
          ;
          LocalPopChoice(f_32);
        }
      else
        {
          t = e_32;
          {
            ATerm t_11 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, q_40, m_40));
            if(match_cons(t, sym__2))
              {
                ATerm u_32 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) u_32) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                t_11 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = t_11;
            t = concat_0_0(t);
          }
        }
    }
  }
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm v_32 = t;
  int w_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_8 (ATerm t)
      {
        ATerm f_41 = NULL;
        f_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, f_41);
        return(t);
      }
      ATerm q_8 (ATerm t)
      {
        ATerm s_8 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, s_8, t);
        return(t);
      }
      ATerm r_8 (ATerm t)
      {
        ATerm a_33 = t;
        int b_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_8 (ATerm t)
            {
              ATerm c_33 = t;
              int d_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      h_41 = ATgetFirst((ATermList) t);
                      k_41 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = h_41;
                  if(match_cons(t, sym__2))
                    {
                      i_41 = ATgetArgument(t, 0);
                      j_41 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = j_41;
                  if((i_41 != t))
                    {
                      _fail(t);
                    }
                  t = k_41;
                  ;
                  LocalPopChoice(d_33);
                }
              else
                {
                  t = c_33;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, t_8, t);
            ;
            LocalPopChoice(b_33);
          }
        else
          {
            t = a_33;
            {
              ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL;
              if(match_cons(t, sym__2))
                {
                  o_41 = ATgetArgument(t, 0);
                  p_41 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = p_41;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_41 = ATgetFirst((ATermList) t);
                  r_41 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_41), q_41), r_41);
            }
          }
        return(t);
      }
      t = for_3_0(p_8, q_8, r_8, t);
      ;
      LocalPopChoice(w_32);
    }
  else
    {
      t = v_32;
      {
        ATerm v_8 (ATerm t)
        {
          ATerm v_41 = NULL;
          if(match_cons(t, sym__2))
            {
              v_41 = ATgetArgument(t, 0);
              if((v_41 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = diff_1_0(v_8, t);
      }
    }
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm c_140 (ATerm), ATerm d_140 (ATerm), ATerm e_140 (ATerm), ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,i_42 = NULL,j_42 = NULL,n_42 = NULL,o_42 = NULL,s_42 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm e_33 = ATgetArgument(t, 0);
      if(((ATgetType(e_33) == AT_LIST) && !(ATisEmpty(e_33))))
        {
          y_41 = ATgetFirst((ATermList) e_33);
          z_41 = (ATerm) ATgetNext((ATermList) e_33);
        }
      else
        _fail(t);
      a_42 = ATgetArgument(t, 1);
      b_42 = ATgetArgument(t, 2);
      c_42 = ATgetArgument(t, 3);
      d_42 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_41, b_42);
  t = c_140(t);
  if(match_cons(t, sym__2))
    {
      e_42 = ATgetArgument(t, 0);
      f_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_42;
  t = d_140(t);
  i_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_42, a_42);
  t = diff_0_0(t);
  j_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_42, z_41);
  {
    ATerm g_33 = t;
    int h_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_33 = ATgetArgument(t, 0);
            ATerm m_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_42;
        {
          ATerm w_8 (ATerm t)
          {
            t = z_41;
            return(t);
          }
          t = at_end_1_0(w_8, t);
        }
        ;
        LocalPopChoice(h_33);
      }
    else
      {
        t = g_33;
        {
          ATerm y_11 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, j_42, z_41));
          if(match_cons(t, sym__2))
            {
              ATerm n_33 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) n_33) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              y_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_11;
          t = concat_0_0(t);
        }
      }
    n_42 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_42, a_42);
    {
      ATerm o_33 = t;
      int p_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm q_33 = ATgetArgument(t, 0);
              ATerm r_33 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_42;
          {
            ATerm x_8 (ATerm t)
            {
              t = a_42;
              return(t);
            }
            t = at_end_1_0(x_8, t);
          }
          ;
          LocalPopChoice(p_33);
        }
      else
        {
          t = o_33;
          {
            ATerm c_12 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, j_42, a_42));
            if(match_cons(t, sym__2))
              {
                ATerm s_33 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) s_33) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                c_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = c_12;
            t = concat_0_0(t);
          }
        }
      o_42 = t;
      t = (ATerm) ATmakeAppl(sym__3, y_41, e_42, c_42);
      t = e_140(t);
      s_42 = t;
      t = (ATerm) ATmakeAppl(sym__5, n_42, o_42, f_42, s_42, d_42);
    }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm a_128 (ATerm), ATerm b_128 (ATerm), ATerm t)
{
  ATerm z_42 (ATerm t)
  {
    ATerm z_33 = t;
    int a_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_128(t);
        ;
        LocalPopChoice(a_34);
      }
    else
      {
        t = z_33;
        t = b_128(t);
        t = z_42(t);
      }
    return(t);
  }
  t = z_42(t);
  return(t);
}
ATerm for_3_0 (ATerm d_128 (ATerm), ATerm e_128 (ATerm), ATerm f_128 (ATerm), ATerm t)
{
  t = d_128(t);
  t = while_not_2_0(e_128, f_128, t);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm z_8 (ATerm t)
  {
    ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL;
    if(match_cons(t, sym__3))
      {
        e_43 = ATgetArgument(t, 0);
        f_43 = ATgetArgument(t, 1);
        g_43 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__5, e_43, e_43, f_43, g_43, (ATerm) ATempty);
    return(t);
  }
  ATerm a_9 (ATerm t)
  {
    ATerm h_43 = NULL,i_43 = NULL;
    if(match_cons(t, sym__5))
      {
        ATerm c_34 = ATgetArgument(t, 0);
        if(((ATgetType(c_34) != AT_LIST) || !(ATisEmpty(c_34))))
          _fail(t);
        {
          ATerm d_34 = ATgetArgument(t, 1);
        }
        {
          ATerm e_34 = ATgetArgument(t, 2);
        }
        h_43 = ATgetArgument(t, 3);
        i_43 = ATgetArgument(t, 4);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, h_43, i_43);
    return(t);
  }
  ATerm b_9 (ATerm t)
  {
    ATerm h_34 = t;
    int m_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_9 (ATerm t)
        {
          t = svars_arity_0_0(t);
          {
            ATerm l_9 (ATerm t)
            {
              ATerm n_34 = t;
              int o_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = DefinitionExists_0_0(t);
                  ;
                  LocalPopChoice(o_34);
                }
              else
                {
                  t = n_34;
                }
              return(t);
            }
            t = map_1_0(l_9, t);
          }
          return(t);
        }
        ATerm k_9 (ATerm t)
        {
          ATerm k_43 = NULL,l_43 = NULL;
          if(match_cons(t, sym__3))
            {
              ATerm r_34 = ATgetArgument(t, 0);
              k_43 = ATgetArgument(t, 1);
              l_43 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(l_43), k_43);
          return(t);
        }
        t = GnNextChangeGraph_3_0(get_definition_0_0, j_9, k_9, t);
        ;
        LocalPopChoice(m_34);
      }
    else
      {
        t = h_34;
        {
          ATerm o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL;
          if(match_cons(t, sym__5))
            {
              o_43 = ATgetArgument(t, 0);
              r_43 = ATgetArgument(t, 1);
              s_43 = ATgetArgument(t, 2);
              t_43 = ATgetArgument(t, 3);
              u_43 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = o_43;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              p_43 = ATgetFirst((ATermList) t);
              q_43 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, q_43, r_43, s_43, t_43, (ATerm) ATinsert(CheckATermList(u_43), p_43));
        }
      }
    return(t);
  }
  t = for_3_0(z_8, a_9, b_9, t);
  {
    ATerm u_34 = t;
    int v_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_44 = NULL,e_44 = NULL;
        if(match_cons(t, sym__2))
          {
            d_44 = ATgetArgument(t, 0);
            e_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_44;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_44;
        ;
        LocalPopChoice(v_34);
      }
    else
      {
        t = u_34;
        t = MissingDefs_0_0(t);
        t = SSL_exit((ATerm) ATmakeInt(1));
      }
  }
  return(t);
}
ATerm assert_1_0 (ATerm b_123 (ATerm), ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL;
  if(match_cons(t, sym__2))
    {
      g_44 = ATgetArgument(t, 0);
      h_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_123(t);
  i_44 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_44, g_44, h_44);
  t = table_push_0_0(t);
  {
    ATerm w_34 = t;
    int z_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(i_44, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(z_34);
      }
    else
      {
        t = w_34;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_44 = ATgetFirst((ATermList) t);
        k_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(i_44, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(k_44), (ATerm) ATinsert(CheckATermList(j_44), g_44)));
    t = (ATerm) ATmakeAppl(sym__2, g_44, h_44);
  }
  return(t);
}
ATerm union_1_0 (ATerm d_119 (ATerm), ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL;
  if(match_cons(t, sym__2))
    {
      q_44 = ATgetArgument(t, 0);
      p_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_44;
  {
    ATerm r_44 (ATerm t)
    {
      ATerm e_35 = t;
      int i_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = p_44;
          ;
          LocalPopChoice(i_35);
        }
      else
        {
          t = e_35;
          {
            ATerm z_35 = t;
            int a_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_12 = NULL,e_12 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    d_12 = ATgetFirst((ATermList) t);
                    e_12 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = p_44;
                {
                  ATerm n_9 (ATerm t)
                  {
                    ATerm f_12 = NULL;
                    f_12 = t;
                    t = (ATerm) ATmakeAppl(sym__2, d_12, f_12);
                    t = d_119(t);
                    return(t);
                  }
                  t = fetch_1_0(n_9, t);
                  t = e_12;
                  t = r_44(t);
                }
                ;
                LocalPopChoice(a_36);
              }
            else
              {
                t = z_35;
                t = Cons_2_0(_id, r_44, t);
              }
          }
        }
      return(t);
    }
    t = r_44(t);
  }
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm c_45 = NULL;
  c_45 = t;
  {
    ATerm b_36 = t;
    int e_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_12 = NULL,m_12 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue)), c_45);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_12 = ATgetFirst((ATermList) t);
            {
              ATerm f_36 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = m_12;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm g_36 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_36) != ATmakeSymbol("r_0", 0, ATtrue)))
              _fail(t);
            k_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_12;
        ;
        LocalPopChoice(e_36);
      }
    else
      {
        t = b_36;
        {
          ATerm p_12 = NULL,q_12 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue)), c_45);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_12 = ATgetFirst((ATermList) t);
              {
                ATerm h_36 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = q_12;
          if(match_cons(t, sym_Defined_2))
            {
              ATerm i_36 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) i_36) != ATmakeSymbol("l_0", 0, ATtrue)))
                _fail(t);
              p_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_12;
        }
      }
  }
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm y_45 (ATerm n_45, ATerm t)
  {
    ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL;
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue)), n_45);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_45 = ATgetFirst((ATermList) t);
        {
          ATerm j_36 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = r_45;
    if(match_cons(t, sym_Defined_3))
      {
        ATerm k_36 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) k_36) != ATmakeSymbol("j_0", 0, ATtrue)))
          _fail(t);
        p_45 = ATgetArgument(t, 1);
        q_45 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(q_45), p_45);
    return(t);
  }
  ATerm u_45 = NULL,w_45 = NULL;
  u_45 = t;
  if(match_cons(t, sym__2))
    {
      ATerm l_36 = ATgetArgument(t, 0);
      w_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_45;
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
          ATerm u_36 = t;
          int v_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_12 = NULL,w_12 = NULL;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue)), u_45);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_12 = ATgetFirst((ATermList) t);
                  {
                    ATerm w_36 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = w_12;
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm s_37 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) s_37) != ATmakeSymbol("o_0", 0, ATtrue)))
                    _fail(t);
                  v_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = v_12;
              ;
              LocalPopChoice(v_36);
            }
          else
            {
              t = u_36;
              t = y_45(u_45, t);
            }
        }
      }
    else
      {
        t = m_36;
        t = y_45(u_45, t);
      }
  }
  return(t);
}
ATerm foldr_3_0 (ATerm s_121 (ATerm), ATerm t_121 (ATerm), ATerm u_121 (ATerm), ATerm t)
{
  ATerm t_37 = t;
  int u_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_121(t);
      ;
      LocalPopChoice(u_37);
    }
  else
    {
      t = t_37;
      {
        ATerm b_46 = NULL,c_46 = NULL,f_46 = NULL,g_46 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_46 = ATgetFirst((ATermList) t);
            c_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_46;
        t = u_121(t);
        f_46 = t;
        t = c_46;
        t = foldr_3_0(s_121, t_121, u_121, t);
        g_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_46, g_46);
        t = t_121(t);
      }
    }
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL;
  h_46 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      i_46 = ATgetArgument(t, 0);
      j_46 = ATgetArgument(t, 1);
      m_46 = ATgetArgument(t, 2);
      {
        ATerm v_37 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  n_46 = t;
  t = j_46;
  {
    ATerm p_9 (ATerm t)
    {
      t = term_f_18;
      return(t);
    }
    ATerm q_9 (ATerm t)
    {
      ATerm t_46 = NULL,u_46 = NULL;
      if(match_cons(t, sym__2))
        {
          t_46 = ATgetArgument(t, 0);
          u_46 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm e_38 = t;
        int f_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(t_46, u_46);
            ;
            LocalPopChoice(f_38);
          }
        else
          {
            t = e_38;
            t = SSL_addr(t_46, u_46);
          }
      }
      return(t);
    }
    ATerm r_9 (ATerm t)
    {
      t = term_o_18;
      return(t);
    }
    t = foldr_3_0(p_9, q_9, r_9, t);
    o_46 = t;
    t = m_46;
    {
      ATerm x_9 (ATerm t)
      {
        t = term_f_18;
        return(t);
      }
      ATerm y_9 (ATerm t)
      {
        ATerm v_46 = NULL,w_46 = NULL;
        if(match_cons(t, sym__2))
          {
            v_46 = ATgetArgument(t, 0);
            w_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        {
          ATerm g_38 = t;
          int n_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_addi(v_46, w_46);
              ;
              LocalPopChoice(n_38);
            }
          else
            {
              t = g_38;
              t = SSL_addr(v_46, w_46);
            }
        }
        return(t);
      }
      ATerm c_10 (ATerm t)
      {
        t = term_o_18;
        return(t);
      }
      t = foldr_3_0(x_9, y_9, c_10, t);
      p_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_46, (ATerm) ATmakeAppl(sym__2, o_46, p_46));
      {
        ATerm r_38 = t;
        int s_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Definitions_0_0(t);
            ;
            LocalPopChoice(s_38);
          }
        else
          {
            t = r_38;
            t = (ATerm) ATempty;
          }
        q_46 = t;
        t = i_46;
        {
          ATerm t_38 = t;
          int u_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Arities_0_0(t);
              ;
              LocalPopChoice(u_38);
            }
          else
            {
              t = t_38;
              t = (ATerm) ATempty;
            }
          r_46 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, o_46, p_46)), r_46);
          {
            ATerm d_10 (ATerm t)
            {
              ATerm x_46 = NULL;
              if(match_cons(t, sym__2))
                {
                  x_46 = ATgetArgument(t, 0);
                  if((x_46 != ATgetArgument(t, 1)))
                    {
                      _fail(ATgetArgument(t, 1));
                    }
                }
              else
                _fail(t);
              return(t);
            }
            t = union_1_0(d_10, t);
            s_46 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_46, (ATerm) ATmakeAppl(sym__2, o_46, p_46)), (ATerm) ATmakeAppl(sym_Defined_2, term_a_39, (ATerm) ATinsert(CheckATermList(q_46), h_46)));
            {
              ATerm g_10 (ATerm t)
              {
                t = term_e_39;
                return(t);
              }
              t = assert_1_0(g_10, t);
              t = (ATerm) ATmakeAppl(sym__2, i_46, (ATerm) ATmakeAppl(sym_Defined_2, term_f_39, s_46));
              {
                ATerm i_10 (ATerm t)
                {
                  t = term_g_39;
                  return(t);
                }
                t = assert_1_0(i_10, t);
                t = n_46;
              }
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm needed_defs_0_0 (ATerm t)
{
  ATerm y_46 = NULL;
  t = map_1_0(RegisterSDefT_0_0, t);
  y_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_j_39), y_46, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm t_95 (ATerm), ATerm t)
{
  ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL;
  c_47 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      a_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_47);
  z_46 = t;
  t = a_47;
  t = t_95(t);
  b_47 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, b_47), z_46);
  return(t);
}
ATerm Cons_2_0 (ATerm p_95 (ATerm), ATerm q_95 (ATerm), ATerm t)
{
  ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,o_47 = NULL,p_47 = NULL;
  p_47 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_47 = ATgetFirst((ATermList) t);
      h_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_47);
  f_47 = t;
  t = g_47;
  t = p_95(t);
  i_47 = t;
  t = h_47;
  t = q_95(t);
  o_47 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(o_47), i_47), f_47);
  return(t);
}
ATerm Specification_1_0 (ATerm y_95 (ATerm), ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL;
  v_47 = t;
  if(match_cons(t, sym_Specification_1))
    {
      t_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_47);
  s_47 = t;
  t = t_47;
  t = y_95(t);
  u_47 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, u_47), s_47);
  return(t);
}
ATerm _2_0 (ATerm a_91 (ATerm), ATerm b_91 (ATerm), ATerm t)
{
  ATerm y_47 = NULL,z_47 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL;
  f_48 = t;
  if(match_cons(t, sym__2))
    {
      z_47 = ATgetArgument(t, 0);
      c_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_48);
  y_47 = t;
  t = z_47;
  t = a_91(t);
  d_48 = t;
  t = c_48;
  t = b_91(t);
  e_48 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, d_48, e_48), y_47);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm t_132 (ATerm), ATerm t)
{
  ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL;
  if(match_cons(t, sym__2))
    {
      i_48 = ATgetArgument(t, 0);
      j_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_48, term_k_39);
  t = open_stream_0_0(t);
  k_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_48, j_48);
  t = t_132(t);
  t = fclose_0_0(t);
  t = j_48;
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm l_48 = NULL,r_48 = NULL;
  l_48 = t;
  {
    ATerm j_10 (ATerm t)
    {
      ATerm l_39 = t;
      int m_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_10 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((r_48 != NULL) && (r_48 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_48 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(l_10, t);
          ;
          LocalPopChoice(m_39);
        }
      else
        {
          t = l_39;
          t = term_p_39;
          if(((r_48 != NULL) && (r_48 != t)))
            _fail(t);
          else
            r_48 = t;
        }
      return(t);
    }
    t = _2_0(j_10, _id, t);
    t = l_48;
    {
      ATerm m_10 (ATerm t)
      {
        ATerm x_12 = NULL;
        x_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_48), x_12);
        return(t);
      }
      t = _2_0(_id, m_10, t);
      {
        ATerm r_39 = t;
        int s_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_10 (ATerm t)
            {
              ATerm w_10 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(w_10, t);
              return(t);
            }
            ATerm u_10 (ATerm t)
            {
              ATerm x_10 (ATerm t)
              {
                ATerm v_48 = NULL,y_48 = NULL,z_48 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm t_39 = ATgetArgument(t, 0);
                    if(match_cons(t_39, sym_Stream_1))
                      {
                        v_48 = ATgetArgument(t_39, 0);
                      }
                    else
                      _fail(t);
                    y_48 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_write_term_to_stream_baf(v_48, y_48);
                z_48 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, z_48);
                return(t);
              }
              t = WriteToFile_1_0(x_10, t);
              return(t);
            }
            t = _2_0(n_10, u_10, t);
            ;
            LocalPopChoice(s_39);
          }
        else
          {
            t = r_39;
            {
              ATerm y_10 (ATerm t)
              {
                ATerm k_11 (ATerm t)
                {
                  ATerm a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm u_39 = ATgetArgument(t, 0);
                      if(match_cons(u_39, sym_Stream_1))
                        {
                          a_49 = ATgetArgument(u_39, 0);
                        }
                      else
                        _fail(t);
                      b_49 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(a_49, b_49);
                  c_49 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), c_49);
                  d_49 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, d_49);
                  return(t);
                }
                t = WriteToFile_1_0(k_11, t);
                return(t);
              }
              t = _2_0(_id, y_10, t);
            }
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
ATerm apply_strategy_1_0 (ATerm v_135 (ATerm), ATerm t)
{
  ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL;
  e_49 = t;
  t = dtime_0_0(t);
  t = e_49;
  t = v_135(t);
  f_49 = t;
  t = dtime_0_0(t);
  g_49 = t;
  t = f_49;
  if(match_cons(t, sym__2))
    {
      h_49 = ATgetArgument(t, 0);
      i_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_49), (ATerm) ATmakeAppl(sym_Runtime_1, g_49)), i_49);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_49 (ATerm q_49, ATerm t)
  {
    t = SSL_fclose(q_49);
    return(t);
  }
  ATerm t_49 = NULL,u_49 = NULL;
  u_49 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_49 = ATgetArgument(t, 0);
      {
        ATerm v_39 = t;
        int w_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_49);
            ;
            LocalPopChoice(w_39);
          }
        else
          {
            t = v_39;
            t = w_49(u_49, t);
          }
      }
    }
  else
    {
      t = w_49(u_49, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_49 = NULL;
  t = SSL_stdin_stream();
  x_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_49);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm c_50 = NULL;
  t = SSL_stdout_stream();
  c_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_50);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_50 = NULL;
  t = SSL_stderr_stream();
  d_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_50);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_39 = ATgetArgument(t, 0);
      ATerm a_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_40 = t;
    int g_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_13 = NULL,o_13 = NULL;
        n_13 = t;
        t = SSL_explode_term(n_13);
        if(match_cons(t, sym__2))
          {
            ATerm h_40 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) h_40) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm i_40 = ATgetArgument(t, 1);
              if(((ATgetType(i_40) == AT_LIST) && !(ATisEmpty(i_40))))
                {
                  o_13 = ATgetFirst((ATermList) i_40);
                  {
                    ATerm j_40 = (ATerm) ATgetNext((ATermList) i_40);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = o_13;
        if(match_cons(t, sym_stderr_0))
          {
            t = o_13;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = o_13;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = o_13;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(g_40);
      }
    else
      {
        t = f_40;
        {
          ATerm x_40 = t;
          int y_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL;
              ATerm m_11 (ATerm t)
              {
                ATerm l_50 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    l_50 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = l_50;
                return(t);
              }
              t = _2_0(m_11, _id, t);
              if(match_cons(t, sym__2))
                {
                  i_50 = ATgetArgument(t, 0);
                  j_50 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(i_50, j_50);
              k_50 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, k_50);
              ;
              LocalPopChoice(y_40);
            }
          else
            {
              t = x_40;
              {
                ATerm o_50 = NULL,u_50 = NULL,w_50 = NULL;
                ATerm o_11 (ATerm t)
                {
                  ATerm x_50 = NULL;
                  x_50 = t;
                  t = SSL_is_string(x_50);
                  return(t);
                }
                t = _2_0(o_11, _id, t);
                if(match_cons(t, sym__2))
                  {
                    o_50 = ATgetArgument(t, 0);
                    u_50 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(o_50, u_50);
                w_50 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, w_50);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_50 = NULL,z_50 = NULL,a_51 = NULL;
  ATerm z_40 = t;
  int a_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_51 = NULL;
      b_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_51, term_b_41);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(a_41);
    }
  else
    {
      t = z_40;
      {
        ATerm p_13 = NULL;
        p_13 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_13), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = p_13;
        _fail(t);
      }
    }
  y_50 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(a_51);
  z_50 = t;
  t = y_50;
  t = fclose_0_0(t);
  t = z_50;
  return(t);
}
ATerm fetch_1_0 (ATerm m_117 (ATerm), ATerm t)
{
  ATerm g_51 (ATerm t)
  {
    ATerm c_41 = t;
    int d_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(m_117, _id, t);
        ;
        LocalPopChoice(d_41);
      }
    else
      {
        t = c_41;
        t = Cons_2_0(_id, g_51, t);
      }
    return(t);
  }
  t = g_51(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_41 = t;
  int g_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(g_41);
    }
  else
    {
      t = e_41;
      {
        ATerm j_51 = NULL,k_51 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_51 = ATgetFirst((ATermList) t);
            k_51 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_51;
        {
          ATerm p_11 (ATerm t)
          {
            t = k_51;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(p_11, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm s_117 (ATerm), ATerm t)
{
  ATerm q_51 (ATerm t)
  {
    ATerm l_41 = t;
    int m_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, q_51, t);
        ;
        LocalPopChoice(m_41);
      }
    else
      {
        t = l_41;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_117(t);
      }
    return(t);
  }
  t = q_51(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm u_51 = NULL;
  ATerm r_11 (ATerm t)
  {
    ATerm v_51 = NULL;
    v_51 = t;
    t = SSL_explode_string(v_51);
    return(t);
  }
  ATerm s_11 (ATerm t)
  {
    ATerm w_51 = NULL;
    w_51 = t;
    t = SSL_explode_string(w_51);
    return(t);
  }
  t = _2_0(r_11, s_11, t);
  {
    ATerm n_41 = t;
    int s_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_51 = NULL,z_51 = NULL;
        if(match_cons(t, sym__2))
          {
            y_51 = ATgetArgument(t, 0);
            z_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_51;
        {
          ATerm u_11 (ATerm t)
          {
            t = z_51;
            return(t);
          }
          t = at_end_1_0(u_11, t);
        }
        ;
        LocalPopChoice(s_41);
      }
    else
      {
        t = n_41;
        {
          ATerm x_13 = NULL,y_13 = NULL;
          x_13 = t;
          t = SSL_explode_term(x_13);
          if(match_cons(t, sym__2))
            {
              ATerm t_41 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) t_41) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              y_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_13;
          t = concat_0_0(t);
        }
      }
    u_51 = t;
    t = SSL_implode_string(u_51);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm u_41 = t;
  int w_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_52 = NULL;
      j_52 = t;
      t = SSL_is_string(j_52);
      ;
      LocalPopChoice(w_41);
    }
  else
    {
      t = u_41;
      {
        ATerm x_41 = t;
        int g_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_11 (ATerm t)
            {
              ATerm h_42 = t;
              int k_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(k_42);
                }
              else
                {
                  t = h_42;
                }
              return(t);
            }
            t = map_1_0(v_11, t);
            ;
            LocalPopChoice(g_42);
          }
        else
          {
            t = x_41;
            {
              ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL;
              n_52 = t;
              if(match_cons(t, sym_Path_1))
                {
                  o_52 = ATgetArgument(t, 0);
                  t = o_52;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      o_52 = ATgetArgument(t, 0);
                      t = o_52;
                      {
                        ATerm l_42 = t;
                        int m_42 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), o_52);
                            {
                              ATerm p_42 = t;
                              int q_42 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm q_14 = NULL;
                                  t = eval_config_0_0(t);
                                  q_14 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), o_52, q_14);
                                  t = q_14;
                                  ;
                                  LocalPopChoice(q_42);
                                }
                              else
                                {
                                  t = p_42;
                                }
                            }
                            ;
                            LocalPopChoice(m_42);
                          }
                        else
                          {
                            t = l_42;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, o_52), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = o_52;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm t_52 = NULL,u_52 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          o_52 = ATgetArgument(t, 0);
                          p_52 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = o_52;
                      t = eval_config_0_0(t);
                      t_52 = t;
                      t = p_52;
                      t = eval_config_0_0(t);
                      u_52 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_52, u_52);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm x_133 (ATerm), ATerm t)
{
  ATerm r_42 = t;
  int t_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_52 = NULL,b_53 = NULL;
      z_52 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm u_42 = t;
        int v_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_14 = NULL;
            t = eval_config_0_0(t);
            x_14 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), x_14);
            t = x_14;
            ;
            LocalPopChoice(v_42);
          }
        else
          {
            t = u_42;
          }
        b_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_53, term_w_42);
        t = geq_0_0(t);
        t = z_52;
        t = x_133(t);
      }
      ;
      LocalPopChoice(t_42);
    }
  else
    {
      t = r_42;
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm w_11 (ATerm t)
  {
    ATerm d_53 = NULL;
    d_53 = t;
    if(match_string(t, "-k"))
      {
        t = d_53;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = d_53;
      }
    return(t);
  }
  ATerm x_11 (ATerm t)
  {
    ATerm e_53 = NULL,f_53 = NULL;
    e_53 = t;
    t = SSL_string_to_int(e_53);
    f_53 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), f_53);
    t = e_53;
    return(t);
  }
  ATerm z_11 (ATerm t)
  {
    t = term_x_42;
    return(t);
  }
  t = ArgOption_3_0(w_11, x_11, z_11, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_42 = t;
  int a_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_12 (ATerm t)
      {
        ATerm h_53 = NULL;
        h_53 = t;
        if(match_string(t, "-S"))
          {
            t = h_53;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = h_53;
          }
        return(t);
      }
      ATerm b_12 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_b_43;
        return(t);
      }
      ATerm g_12 (ATerm t)
      {
        t = term_c_43;
        return(t);
      }
      t = Option_3_0(a_12, b_12, g_12, t);
      ;
      LocalPopChoice(a_43);
    }
  else
    {
      t = y_42;
      {
        ATerm d_43 = t;
        int j_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_12 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm i_12 (ATerm t)
            {
              ATerm i_53 = NULL,k_53 = NULL;
              i_53 = t;
              t = SSL_string_to_int(i_53);
              k_53 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_53);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, i_53);
              return(t);
            }
            ATerm j_12 (ATerm t)
            {
              t = term_m_43;
              return(t);
            }
            t = ArgOption_3_0(h_12, i_12, j_12, t);
            ;
            LocalPopChoice(j_43);
          }
        else
          {
            t = d_43;
            {
              ATerm l_12 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm n_12 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_n_43;
                return(t);
              }
              ATerm o_12 (ATerm t)
              {
                t = term_v_43;
                return(t);
              }
              t = Option_3_0(l_12, n_12, o_12, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm n_53 = NULL,o_53 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_53 = NULL;
      t = term_t_14;
      t = d_0(t);
      u_53 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_43, term_x_43, u_53);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm x_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_53 = ATgetFirst((ATermList) t);
          o_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_53;
      t = a_0(t);
      t = term_t_14;
      t = b_0(t);
      x_53 = t;
      t = (ATerm) ATinsert(CheckATermList(o_53), x_53);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm r_12 (ATerm t)
  {
    ATerm c_54 = NULL;
    c_54 = t;
    if(match_string(t, "-o"))
      {
        t = c_54;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = c_54;
      }
    return(t);
  }
  ATerm s_12 (ATerm t)
  {
    ATerm d_54 = NULL;
    d_54 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), d_54);
    t = (ATerm) ATmakeAppl(sym_Output_1, d_54);
    return(t);
  }
  ATerm t_12 (ATerm t)
  {
    t = term_y_43;
    return(t);
  }
  t = ArgOption_3_0(r_12, s_12, t_12, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL;
  if(match_cons(t, sym__3))
    {
      g_54 = ATgetArgument(t, 0);
      h_54 = ATgetArgument(t, 1);
      i_54 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_54, h_54);
  {
    ATerm z_43 = t;
    int a_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_44 = ATgetArgument(t, 0);
            ATerm c_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(g_54, h_54);
        ;
        LocalPopChoice(a_44);
      }
    else
      {
        t = z_43;
        t = (ATerm) ATempty;
      }
    j_54 = t;
    t = SSL_table_put(g_54, h_54, (ATerm) ATinsert(CheckATermList(j_54), i_54));
    t = (ATerm) ATmakeAppl(sym__3, g_54, h_54, i_54);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_54 = NULL;
      t = term_t_14;
      t = m_0(t);
      v_54 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_43, term_x_43, v_54);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm z_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_54 = ATgetFirst((ATermList) t);
          s_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_54;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_54 = ATgetFirst((ATermList) t);
          u_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_54;
      t = i_0(t);
      t = t_54;
      t = k_0(t);
      z_54 = t;
      t = (ATerm) ATinsert(CheckATermList(u_54), z_54);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm u_12 (ATerm t)
  {
    ATerm b_55 = NULL;
    b_55 = t;
    if(match_string(t, "-i"))
      {
        t = b_55;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = b_55;
      }
    return(t);
  }
  ATerm y_12 (ATerm t)
  {
    ATerm c_55 = NULL;
    c_55 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), c_55);
    t = (ATerm) ATmakeAppl(sym_Input_1, c_55);
    return(t);
  }
  ATerm z_12 (ATerm t)
  {
    t = term_f_44;
    return(t);
  }
  t = ArgOption_3_0(u_12, y_12, z_12, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_55 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_14;
  t = whoami_0_0(t);
  d_55 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), d_55));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm l_44 = t;
    int m_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_15 = NULL;
        t = eval_config_0_0(t);
        c_15 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), c_15);
        t = c_15;
        ;
        LocalPopChoice(m_44);
      }
    else
      {
        t = l_44;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm q_121 (ATerm), ATerm r_121 (ATerm), ATerm t)
{
  ATerm n_44 = t;
  int o_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_121(t);
      ;
      LocalPopChoice(o_44);
    }
  else
    {
      t = n_44;
      {
        ATerm g_55 = NULL,h_55 = NULL,k_55 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_55 = ATgetFirst((ATermList) t);
            h_55 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_55;
        t = foldr_2_0(q_121, r_121, t);
        k_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_55, k_55);
        t = r_121(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_55 = NULL,d_15 = NULL,e_15 = NULL;
  t = times_0_0(t);
  d_15 = t;
  t = SSL_explode_term(d_15);
  if(match_cons(t, sym__2))
    {
      ATerm s_44 = ATgetArgument(t, 0);
      e_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_15;
  {
    ATerm a_13 (ATerm t)
    {
      t = term_f_18;
      return(t);
    }
    ATerm b_13 (ATerm t)
    {
      ATerm h_15 = NULL,i_15 = NULL;
      if(match_cons(t, sym__2))
        {
          h_15 = ATgetArgument(t, 0);
          i_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm t_44 = t;
        int u_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(h_15, i_15);
            ;
            LocalPopChoice(u_44);
          }
        else
          {
            t = t_44;
            t = SSL_addr(h_15, i_15);
          }
      }
      return(t);
    }
    t = foldr_2_0(a_13, b_13, t);
    n_55 = t;
    t = SSL_TicksToSeconds(n_55);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_55 = NULL,z_55 = NULL,a_56 = NULL;
  y_55 = t;
  if(match_cons(t, sym__2))
    {
      z_55 = ATgetArgument(t, 0);
      a_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_44 = t;
    int w_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_56;
        if((z_55 != t))
          {
            _fail(t);
          }
        t = y_55;
        ;
        LocalPopChoice(w_44);
      }
    else
      {
        t = v_44;
        t = y_55;
        {
          ATerm x_44 = t;
          int y_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(z_55, a_56);
              ;
              LocalPopChoice(y_44);
            }
          else
            {
              t = x_44;
              t = SSL_gtr(z_55, a_56);
            }
          t = (ATerm) ATmakeAppl(sym__2, z_55, a_56);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_133 (ATerm), ATerm t)
{
  ATerm z_44 = t;
  int a_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_56 = NULL,f_56 = NULL;
      d_56 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm b_45 = t;
        int d_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_15 = NULL;
            t = eval_config_0_0(t);
            u_15 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), u_15);
            t = u_15;
            ;
            LocalPopChoice(d_45);
          }
        else
          {
            t = b_45;
          }
        f_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_56, term_o_18);
        t = geq_0_0(t);
        t = d_56;
        t = w_133(t);
      }
      ;
      LocalPopChoice(a_45);
    }
  else
    {
      t = z_44;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm c_13 (ATerm t)
  {
    ATerm h_56 = NULL,i_56 = NULL;
    t = run_time_0_0(t);
    h_56 = t;
    t = term_t_14;
    t = whoami_0_0(t);
    i_56 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), h_56), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), i_56));
    t = (ATerm) ATmakeAppl(sym__2, term_e_45, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_45), h_56), term_f_45), i_56));
    return(t);
  }
  t = if_verbose1_1_0(c_13, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm t_136 (ATerm), ATerm t)
{
  ATerm h_45 = t;
  int i_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm j_45 = t;
        int k_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_15 = NULL;
            t = eval_config_0_0(t);
            y_15 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), y_15);
            t = y_15;
            ;
            LocalPopChoice(k_45);
          }
        else
          {
            t = j_45;
          }
      }
      ;
      LocalPopChoice(i_45);
    }
  else
    {
      t = h_45;
      {
        ATerm d_13 (ATerm t)
        {
          ATerm l_45 = t;
          int m_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(m_45);
            }
          else
            {
              t = l_45;
              {
                ATerm o_45 = t;
                int s_45 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(s_45);
                  }
                else
                  {
                    t = o_45;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(d_13, t);
      }
    }
  t = t_136(t);
  return(t);
}
ATerm map_1_0 (ATerm b_117 (ATerm), ATerm t)
{
  ATerm j_56 (ATerm t)
  {
    ATerm t_45 = t;
    int v_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(v_45);
      }
    else
      {
        t = t_45;
        t = Cons_2_0(b_117, j_56, t);
      }
    return(t);
  }
  t = j_56(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm l_56 = NULL,m_56 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_56 = ATgetFirst((ATermList) t);
      m_56 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_56 = NULL,r_56 = NULL;
        t = m_56;
        t = g_0(t);
        q_56 = t;
        t = l_56;
        t = f_0(t);
        r_56 = t;
        t = m_56;
        {
          ATerm e_13 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(q_56), r_56);
            return(t);
          }
          t = reverse_acc_2_0(f_0, e_13, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_14;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm h_108 (ATerm), ATerm t)
{
  ATerm s_56 = NULL,t_56 = NULL,u_56 = NULL,v_56 = NULL;
  v_56 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_56);
  s_56 = t;
  t = t_56;
  t = h_108(t);
  u_56 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, u_56), s_56);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm x_45 = t;
  int z_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm a_46 = t;
        int d_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_16 = NULL;
            t = eval_config_0_0(t);
            d_16 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_16);
            t = d_16;
            ;
            LocalPopChoice(d_46);
          }
        else
          {
            t = a_46;
          }
      }
      ;
      LocalPopChoice(z_45);
    }
  else
    {
      t = x_45;
      {
        ATerm g_13 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(g_13, t);
      }
    }
  t = term_e_46;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm h_13 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, h_13, t);
    {
      ATerm i_13 (ATerm t)
      {
        ATerm y_56 = NULL;
        y_56 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, y_56), term_k_46);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(i_13, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm i_108 (ATerm), ATerm t)
{
  ATerm z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL;
  c_57 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      a_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_57);
  z_56 = t;
  t = a_57;
  t = i_108(t);
  b_57 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, b_57), z_56);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_57 = NULL,h_57 = NULL;
  g_57 = t;
  {
    ATerm l_46 = t;
    int d_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_57;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_47 = ATgetFirst((ATermList) t);
                ATerm j_47 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_57;
          }
        ;
        LocalPopChoice(d_47);
      }
    else
      {
        t = l_46;
        t = (ATerm) ATinsert(ATempty, g_57);
      }
    h_57 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), h_57);
    t = g_57;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm k_47 = t;
    int l_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_16 = NULL;
        t = eval_config_0_0(t);
        h_16 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), h_16);
        t = h_16;
        ;
        LocalPopChoice(l_47);
      }
    else
      {
        t = k_47;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_47 = t;
  int n_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_13 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm k_13 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_w_47;
        return(t);
      }
      ATerm l_13 (ATerm t)
      {
        t = term_x_47;
        return(t);
      }
      t = Option_3_0(j_13, k_13, l_13, t);
      ;
      LocalPopChoice(n_47);
    }
  else
    {
      t = m_47;
      {
        ATerm m_13 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm q_13 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_a_48;
          return(t);
        }
        ATerm r_13 (ATerm t)
        {
          t = term_b_48;
          return(t);
        }
        t = Option_3_0(m_13, q_13, r_13, t);
      }
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_138 (ATerm), ATerm t)
{
  ATerm m_57 = NULL;
  m_57 = t;
  {
    ATerm g_48 = t;
    int h_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_48;
        t = w_138(t);
        ;
        LocalPopChoice(h_48);
      }
    else
      {
        t = g_48;
      }
    t = m_57;
    {
      ATerm s_13 (ATerm t)
      {
        ATerm o_57 = NULL;
        o_57 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), o_57);
        t = (ATerm) ATmakeAppl(sym_Program_1, o_57);
        return(t);
      }
      ATerm t_13 (ATerm t)
      {
        ATerm n_48 = t;
        int o_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_48 = t;
            int q_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(q_48);
              }
            else
              {
                t = p_48;
                t = w_138(t);
                t = Cons_2_0(_id, t_13, t);
              }
            ;
            LocalPopChoice(o_48);
          }
        else
          {
            t = n_48;
            {
              ATerm q_57 = NULL,r_57 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_57 = ATgetFirst((ATermList) t);
                  r_57 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_57), (ATerm) ATmakeAppl(sym_Undefined_1, q_57));
            }
          }
        return(t);
      }
      t = Cons_2_0(s_13, t_13, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm v_138 (ATerm), ATerm t)
{
  ATerm y_57 = NULL,z_57 = NULL,a_58 = NULL;
  y_57 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = y_57;
  {
    ATerm u_13 (ATerm t)
    {
      ATerm s_48 = t;
      int t_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_138(t);
          ;
          LocalPopChoice(t_48);
        }
      else
        {
          t = s_48;
          {
            ATerm u_48 = t;
            int w_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_13 (ATerm t)
                {
                  ATerm b_58 = NULL;
                  b_58 = t;
                  if(match_string(t, "--help"))
                    {
                      t = b_58;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = b_58;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = b_58;
                        }
                    }
                  return(t);
                }
                ATerm w_13 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_x_48;
                  return(t);
                }
                ATerm z_13 (ATerm t)
                {
                  t = term_j_49;
                  return(t);
                }
                t = Option_3_0(v_13, w_13, z_13, t);
                ;
                LocalPopChoice(w_48);
              }
            else
              {
                t = u_48;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_13, t);
    {
      ATerm k_49 = t;
      int l_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_58 = NULL;
          g_58 = t;
          {
            ATerm m_49 = t;
            int n_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = g_58;
                {
                  ATerm o_49 = t;
                  int p_49 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm r_49 = t;
                        int s_49 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm n_17 = NULL;
                            t = eval_config_0_0(t);
                            n_17 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), n_17);
                            t = n_17;
                            ;
                            LocalPopChoice(s_49);
                          }
                        else
                          {
                            t = r_49;
                          }
                      }
                      ;
                      LocalPopChoice(p_49);
                    }
                  else
                    {
                      t = o_49;
                      {
                        ATerm b_14 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(b_14, t);
                      }
                    }
                  t = g_58;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(n_49);
              }
            else
              {
                t = m_49;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm v_49 = t;
                  int y_49 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_18 = NULL;
                      t = eval_config_0_0(t);
                      a_18 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), a_18);
                      t = a_18;
                      ;
                      LocalPopChoice(y_49);
                    }
                  else
                    {
                      t = v_49;
                    }
                  t = g_58;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(l_49);
        }
      else
        {
          t = k_49;
          {
            ATerm z_49 = t;
            int a_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_14 (ATerm t)
                {
                  ATerm d_14 (ATerm t)
                  {
                    if(((z_57 != NULL) && (z_57 != t)))
                      _fail(t);
                    else
                      z_57 = t;
                    return(t);
                  }
                  t = Undefined_1_0(d_14, t);
                  return(t);
                }
                t = fetch_1_0(c_14, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(z_57)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_e_45, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_57)), term_b_50));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(a_50);
              }
            else
              {
                t = z_49;
              }
          }
        }
      a_58 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = a_58;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm v_136 (ATerm), ATerm w_136 (ATerm), ATerm x_136 (ATerm), ATerm y_136 (ATerm), ATerm t)
{
  ATerm j_58 = NULL;
  t = parse_options_1_0(v_136, t);
  j_58 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), j_58);
  t = j_58;
  t = x_136(t);
  {
    ATerm e_50 = t;
    int f_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(w_136, t);
        ;
        LocalPopChoice(f_50);
      }
    else
      {
        t = e_50;
        {
          ATerm g_50 = t;
          int h_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_136(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(h_50);
            }
          else
            {
              t = g_50;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm e_136 (ATerm), ATerm f_136 (ATerm), ATerm g_136 (ATerm), ATerm t)
{
  ATerm e_14 (ATerm t)
  {
    ATerm m_50 = t;
    int n_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_136(t);
        ;
        LocalPopChoice(n_50);
      }
    else
      {
        t = m_50;
        {
          ATerm p_50 = t;
          int q_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(q_50);
            }
          else
            {
              t = p_50;
              {
                ATerm r_50 = t;
                int s_50 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(s_50);
                  }
                else
                  {
                    t = r_50;
                    {
                      ATerm t_50 = t;
                      int v_50 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm h_14 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm i_14 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_c_51;
                            return(t);
                          }
                          ATerm j_14 (ATerm t)
                          {
                            t = term_h_51;
                            return(t);
                          }
                          t = Option_3_0(h_14, i_14, j_14, t);
                          ;
                          LocalPopChoice(v_50);
                        }
                      else
                        {
                          t = t_50;
                          {
                            ATerm i_51 = t;
                            int l_51 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(l_51);
                              }
                            else
                              {
                                t = i_51;
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
  ATerm f_14 (ATerm t)
  {
    ATerm k_14 (ATerm t)
    {
      ATerm k_58 = NULL,l_58 = NULL;
      k_58 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm m_51 = t;
        int n_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_18 = NULL;
            t = eval_config_0_0(t);
            k_18 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), k_18);
            t = k_18;
            ;
            LocalPopChoice(n_51);
          }
        else
          {
            t = m_51;
          }
        l_58 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, l_58));
        t = k_58;
      }
      return(t);
    }
    t = if_verbose2_1_0(k_14, t);
    return(t);
  }
  ATerm g_14 (ATerm t)
  {
    ATerm m_58 = NULL,n_58 = NULL,n_18 = NULL;
    m_58 = t;
    {
      ATerm o_51 = t;
      int p_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_14 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((n_58 != NULL) && (n_58 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  n_58 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(l_14, t);
          ;
          LocalPopChoice(p_51);
        }
      else
        {
          t = o_51;
          t = term_r_51;
          n_58 = t;
        }
      t = not_null(n_58);
      t = ReadFromFile_0_0(t);
      n_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_58, n_18);
      t = apply_strategy_1_0(e_136, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(e_14, g_136, f_14, g_14, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm m_14 (ATerm t)
  {
    ATerm n_14 (ATerm t)
    {
      ATerm o_14 (ATerm t)
      {
        ATerm p_14 (ATerm t)
        {
          ATerm r_14 (ATerm t)
          {
            t = Strategies_1_0(needed_defs_0_0, t);
            return(t);
          }
          ATerm s_14 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            return(t);
          }
          t = Cons_2_0(r_14, s_14, t);
          return(t);
        }
        t = Cons_2_0(_id, p_14, t);
        return(t);
      }
      t = Specification_1_0(o_14, t);
      t = needed_constructors_0_0(t);
      return(t);
    }
    t = _2_0(_id, n_14, t);
    return(t);
  }
  t = iowrap_3_0(m_14, _fail, default_usage_0_0, t);
  return(t);
}
