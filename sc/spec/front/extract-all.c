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
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_k_40;
ATerm term_v_39;
ATerm term_u_39;
ATerm term_r_39;
ATerm term_q_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_h_38;
ATerm term_e_38;
ATerm term_d_38;
ATerm term_u_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_l_37;
ATerm term_k_37;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_b_37;
ATerm term_z_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_t_34;
ATerm term_m_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_w_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_f_33;
ATerm term_t_32;
ATerm term_n_32;
ATerm term_g_32;
ATerm term_n_31;
ATerm term_j_31;
ATerm term_f_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_e_30;
ATerm term_t_29;
ATerm term_l_29;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_m_22;
ATerm term_y_20;
ATerm term_u_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_u_19;
ATerm term_u_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_k_17;
ATerm term_v_16;
ATerm term_i_15;
ATerm term_n_14;
ATerm term_l_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
void init_constant_terms (void)
{
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_Sort_2, term_n_20, (ATerm) ATempty);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_ConstType_1, term_o_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym__2, term_m_33, term_v_16);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_16);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym__2, term_z_33, term_a_14);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(sym__2, term_i_34, term_j_34);
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(sym__2, term_g_37, term_a_14);
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(sym__2, term_l_37, term_a_14);
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(sym__2, term_u_36, term_a_14);
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(sym__2, term_q_39, term_a_14);
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm v_7 (ATerm v_38, ATerm w_38, ATerm x_38, ATerm);
ATerm giving_up_0_0 (ATerm);
ATerm l_0 (ATerm);
ATerm DefinitionExists_0_0 (ATerm);
ATerm sboundin_3_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm);
ATerm p_0 (ATerm);
ATerm c_8 (ATerm w_52, ATerm v_52, ATerm);
ATerm u_0 (ATerm);
ATerm w_0 (ATerm);
ATerm a_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm free_vars2_4_0 (ATerm l_118 (ATerm), ATerm m_118 (ATerm), ATerm n_118 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm o_118 (ATerm), ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm p_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm svars_arity_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm pat_td_1_0 (ATerm r_105 (ATerm), ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm r_3 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm w_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm l_8 (ATerm p_45, ATerm q_45, ATerm r_45, ATerm);
ATerm e_39 (ATerm j_37, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm c_4 (ATerm);
ATerm e_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm l_4 (ATerm);
ATerm p_4 (ATerm);
ATerm t_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm b_5 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm repeat_1_0 (ATerm k_120 (ATerm), ATerm);
ATerm c_5 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm d_5 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm h_111 (ATerm), ATerm);
ATerm o_8 (ATerm e_41, ATerm f_41, ATerm g_41, ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm d_110 (ATerm), ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm u_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm tuple_unzip_1_0 (ATerm f_114 (ATerm), ATerm);
ATerm MkDistApplication_0_0 (ATerm);
ATerm p_8 (ATerm i_69, ATerm j_69, ATerm);
ATerm y_5 (ATerm);
ATerm a_6 (ATerm);
ATerm copy_1_0 (ATerm k_124 (ATerm), ATerm);
ATerm q_8 (ATerm y_37, ATerm z_37, ATerm);
ATerm last_0_0 (ATerm);
ATerm k_61 (ATerm v_58, ATerm w_58, ATerm x_58, ATerm y_58, ATerm);
ATerm l_61 (ATerm i_60, ATerm j_60, ATerm l_60, ATerm m_60, ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm DefineCongruence_0_0 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm choices_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm alltd_1_0 (ATerm v_111 (ATerm), ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm m_6 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm o_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm x_6 (ATerm);
ATerm a_7 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm f_7 (ATerm);
ATerm JoinDefs2_0_0 (ATerm);
ATerm o_63 (ATerm s_61, ATerm t_61, ATerm u_61, ATerm v_61, ATerm);
ATerm get_definition_0_0 (ATerm);
ATerm at_end_1_0 (ATerm a_107 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm q_65 (ATerm e_65, ATerm);
ATerm conc_0_0 (ATerm);
ATerm v_8 (ATerm i_121 (ATerm), ATerm w_65, ATerm v_65, ATerm);
ATerm genzip_4_0 (ATerm p_114 (ATerm), ATerm q_114 (ATerm), ATerm r_114 (ATerm), ATerm s_114 (ATerm), ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm r_7 (ATerm);
ATerm z_8 (ATerm f_707, ATerm k_707, ATerm e_85, ATerm);
ATerm s_7 (ATerm);
ATerm e_8 (ATerm);
ATerm g_8 (ATerm);
ATerm z_70 (ATerm y_68, ATerm z_68, ATerm a_69, ATerm);
ATerm i_8 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm b_9 (ATerm l_136 (ATerm), ATerm m_136 (ATerm), ATerm n_136 (ATerm), ATerm b_86, ATerm y_85, ATerm g_86, ATerm c_86, ATerm z_85, ATerm a_86, ATerm);
ATerm GnNextChangeGraph_3_0 (ATerm l_136 (ATerm), ATerm m_136 (ATerm), ATerm n_136 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm z_120 (ATerm), ATerm a_121 (ATerm), ATerm);
ATerm for_3_0 (ATerm c_121 (ATerm), ATerm d_121 (ATerm), ATerm e_121 (ATerm), ATerm);
ATerm k_8 (ATerm);
ATerm d_9 (ATerm);
ATerm f_9 (ATerm);
ATerm w_9 (ATerm);
ATerm a_10 (ATerm);
ATerm b_10 (ATerm);
ATerm d_10 (ATerm);
ATerm f_30 (ATerm r_29, ATerm s_29, ATerm);
ATerm extract_needed_defs_0_0 (ATerm);
ATerm e_9 (ATerm u_136 (ATerm), ATerm z_86, ATerm x_86, ATerm);
ATerm Arities_0_0 (ATerm);
ATerm g_9 (ATerm n_82, ATerm o_82, ATerm);
ATerm p_76 (ATerm a_76, ATerm);
ATerm Definitions_0_0 (ATerm);
ATerm e_10 (ATerm);
ATerm h_10 (ATerm);
ATerm i_10 (ATerm);
ATerm k_10 (ATerm);
ATerm l_10 (ATerm);
ATerm m_10 (ATerm);
ATerm n_10 (ATerm);
ATerm o_10 (ATerm);
ATerm p_10 (ATerm);
ATerm RegisterSDefT_0_0 (ATerm);
ATerm q_10 (ATerm);
ATerm r_10 (ATerm);
ATerm s_10 (ATerm);
ATerm t_10 (ATerm);
ATerm u_10 (ATerm);
ATerm v_10 (ATerm);
ATerm h_9 (ATerm y_38, ATerm z_38, ATerm a_39, ATerm);
ATerm i_9 (ATerm q_121 (ATerm), ATerm r_121 (ATerm), ATerm c_66, ATerm b_66, ATerm);
ATerm j_9 (ATerm n_121 (ATerm), ATerm y_65, ATerm x_65, ATerm);
ATerm foldr_3_0 (ATerm x_123 (ATerm), ATerm y_123 (ATerm), ATerm z_123 (ATerm), ATerm);
ATerm z_10 (ATerm);
ATerm b_11 (ATerm);
ATerm c_11 (ATerm);
ATerm d_11 (ATerm);
ATerm all_defs_0_0 (ATerm);
ATerm Cons_2_0 (ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm);
ATerm m_9 (ATerm n_72, ATerm o_72, ATerm);
ATerm n_9 (ATerm b_76, ATerm c_76, ATerm);
ATerm p_9 (ATerm b_129 (ATerm), ATerm z_564, ATerm f_76, ATerm);
ATerm o_9 (ATerm x_75, ATerm y_75, ATerm);
ATerm g_11 (ATerm);
ATerm h_11 (ATerm);
ATerm i_11 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm d_132 (ATerm), ATerm);
ATerm m_82 (ATerm g_82, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm q_9 (ATerm d_76, ATerm);
ATerm r_9 (ATerm p_72, ATerm q_72, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm b_84 (ATerm y_82, ATerm);
ATerm c_84 (ATerm c_83, ATerm d_83, ATerm e_83, ATerm);
ATerm d_84 (ATerm m_83, ATerm n_83, ATerm o_83, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm j_11 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm u_106 (ATerm), ATerm);
ATerm l_9 (ATerm n_65, ATerm o_65, ATerm);
ATerm debug_1_0 (ATerm z_128 (ATerm), ATerm);
ATerm k_11 (ATerm);
ATerm l_11 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm m_130 (ATerm), ATerm);
ATerm m_11 (ATerm);
ATerm n_11 (ATerm);
ATerm o_11 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm p_11 (ATerm);
ATerm q_11 (ATerm);
ATerm r_11 (ATerm);
ATerm s_11 (ATerm);
ATerm u_11 (ATerm);
ATerm v_11 (ATerm);
ATerm x_11 (ATerm);
ATerm y_11 (ATerm);
ATerm z_11 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm x_9 (ATerm e_77, ATerm f_77, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm a_12 (ATerm);
ATerm b_12 (ATerm);
ATerm c_12 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm v_9 (ATerm c_82, ATerm d_82, ATerm b_82, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm d_12 (ATerm);
ATerm e_12 (ATerm);
ATerm g_12 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm s_9 (ATerm c_69, ATerm d_69, ATerm);
ATerm foldr_2_0 (ATerm v_123 (ATerm), ATerm w_123 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm h_12 (ATerm);
ATerm i_12 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm l_130 (ATerm), ATerm);
ATerm k_12 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm l_12 (ATerm);
ATerm need_help_1_0 (ATerm b_133 (ATerm), ATerm);
ATerm map_1_0 (ATerm k_106 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm u_9 (ATerm t_83, ATerm u_83, ATerm);
ATerm o_12 (ATerm);
ATerm p_12 (ATerm);
ATerm q_12 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm r_12 (ATerm);
ATerm s_12 (ATerm);
ATerm t_12 (ATerm);
ATerm v_12 (ATerm);
ATerm x_12 (ATerm);
ATerm y_12 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm e_135 (ATerm), ATerm);
ATerm d_13 (ATerm);
ATerm e_13 (ATerm);
ATerm f_13 (ATerm);
ATerm m_13 (ATerm);
ATerm parse_options_1_0 (ATerm d_135 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm d_133 (ATerm), ATerm e_133 (ATerm), ATerm f_133 (ATerm), ATerm g_133 (ATerm), ATerm);
ATerm q_13 (ATerm);
ATerm s_13 (ATerm);
ATerm t_13 (ATerm);
ATerm u_13 (ATerm);
ATerm v_13 (ATerm);
ATerm iowrap_3_0 (ATerm m_132 (ATerm), ATerm n_132 (ATerm), ATerm o_132 (ATerm), ATerm);
ATerm x_13 (ATerm);
ATerm y_13 (ATerm);
ATerm z_13 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_0 = NULL,t_0 = NULL,v_0 = NULL,x_0 = NULL,y_0 = NULL;
  o_0 = t;
  t = term_a_14;
  t = whoami_0_0(t);
  t_0 = t;
  t = term_b_14;
  x_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_14), t_0), term_c_14);
  y_0 = t;
  t = SSL_printnl(x_0, y_0);
  t = term_f_14;
  v_0 = t;
  t = SSL_exit(v_0);
  t = o_0;
  return(t);
}
ATerm v_7 (ATerm v_38, ATerm w_38, ATerm x_38, ATerm t)
{
  ATerm z_0 = NULL,b_1 = NULL;
  t = term_b_14;
  z_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_14), x_38), term_j_14), w_38), term_i_14), v_38), term_g_14);
  b_1 = t;
  t = SSL_printnl(z_0, b_1);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_14), x_38), term_j_14), w_38), term_i_14), v_38), term_g_14);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL,g_1 = NULL;
  t = term_b_14;
  d_1 = t;
  t = (ATerm) ATinsert(ATempty, term_n_14);
  g_1 = t;
  t = SSL_printnl(d_1, g_1);
  t = term_f_14;
  c_1 = t;
  t = SSL_exit(c_1);
  t = (ATerm) ATinsert(ATempty, term_n_14);
  return(t);
}
ATerm l_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_14 = ATgetArgument(t, 0);
      if(((ATgetType(o_14) != AT_INT) || (ATgetInt((ATermInt) o_14) != 0)))
        _fail(t);
      {
        ATerm q_14 = ATgetArgument(t, 1);
        if(((ATgetType(q_14) != AT_INT) || (ATgetInt((ATermInt) q_14) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm b_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL;
  b_2 = t;
  if(match_cons(t, sym__2))
    {
      c_2 = ATgetArgument(t, 0);
      d_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_2;
  if(match_cons(t, sym__2))
    {
      e_2 = ATgetArgument(t, 0);
      f_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_2;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = f_2;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm r_14 = t;
    int v_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_0 = NULL,s_0 = NULL;
        t = c_2;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_14 = ATgetFirst((ATermList) t);
            ATerm x_14 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(x_14) == AT_LIST) && !(ATisEmpty(x_14))))
              {
                ATerm b_15 = ATgetFirst((ATermList) x_14);
                ATerm c_15 = (ATerm) ATgetNext((ATermList) x_14);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm e_15 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(l_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = e_15;
            }
          t = term_b_14;
          r_0 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, c_2), term_i_15);
          s_0 = t;
          t = SSL_printnl(r_0, s_0);
          t = (ATerm) ATinsert(ATinsert(ATempty, c_2), term_i_15);
          t = giving_up_0_0(t);
        }
        ;
        LocalPopChoice(v_14);
      }
    else
      {
        t = r_14;
        {
          ATerm h_1 = NULL,i_1 = NULL;
          t = c_2;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm m_15 = ATgetFirst((ATermList) t);
              if(match_cons(m_15, sym__2))
                {
                  h_1 = ATgetArgument(m_15, 0);
                  i_1 = ATgetArgument(m_15, 1);
                }
              else
                _fail(t);
              {
                ATerm n_15 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(n_15) != AT_LIST) || !(ATisEmpty(n_15))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, c_2, (ATerm) ATmakeAppl(sym__2, h_1, i_1));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, c_2, (ATerm) ATmakeAppl(sym__2, h_1, i_1));
        }
      }
  }
  return(t);
}
ATerm sboundin_3_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm t)
{
  ATerm r_4 = NULL,u_4 = NULL,a_5 = NULL,f_5 = NULL,g_5 = NULL;
  a_5 = t;
  if(match_cons(t, sym_Let_2))
    {
      f_5 = ATgetArgument(t, 0);
      g_5 = ATgetArgument(t, 1);
      {
        ATerm o_1 = NULL,i_2 = NULL,j_2 = NULL,q_1 = NULL;
        t = SSLgetAnnotations(a_5);
        o_1 = t;
        t = f_5;
        t = i_109(t);
        i_2 = t;
        t = g_5;
        t = i_109(t);
        j_2 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, i_2, j_2);
        q_1 = t;
        t = SSLsetAnnotations(q_1, o_1);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          f_5 = ATgetArgument(t, 0);
          g_5 = ATgetArgument(t, 1);
          r_4 = ATgetArgument(t, 2);
          {
            ATerm p_3 = NULL,m_4 = NULL,n_4 = NULL,s_4 = NULL,r_1 = NULL;
            t = SSLgetAnnotations(a_5);
            p_3 = t;
            t = f_5;
            t = k_109(t);
            m_4 = t;
            t = g_5;
            t = k_109(t);
            n_4 = t;
            t = r_4;
            t = i_109(t);
            s_4 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, m_4, n_4, s_4);
            r_1 = t;
            t = SSLsetAnnotations(r_1, p_3);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              f_5 = ATgetArgument(t, 0);
              g_5 = ATgetArgument(t, 1);
              r_4 = ATgetArgument(t, 2);
              u_4 = ATgetArgument(t, 3);
              {
                ATerm h_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,s_1 = NULL;
                t = SSLgetAnnotations(a_5);
                h_5 = t;
                t = f_5;
                t = k_109(t);
                m_5 = t;
                t = g_5;
                t = k_109(t);
                n_5 = t;
                t = r_4;
                t = k_109(t);
                o_5 = t;
                t = u_4;
                t = i_109(t);
                p_5 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, m_5, n_5, o_5, p_5);
                s_1 = t;
                t = SSLsetAnnotations(s_1, h_5);
              }
            }
          else
            {
              ATerm p_6 = NULL,s_6 = NULL,y_6 = NULL,t_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  f_5 = ATgetArgument(t, 0);
                  g_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(a_5);
              p_6 = t;
              t = f_5;
              t = k_109(t);
              s_6 = t;
              t = g_5;
              t = i_109(t);
              y_6 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, s_6, y_6);
              t_1 = t;
              t = SSLsetAnnotations(t_1, p_6);
            }
        }
    }
  return(t);
}
ATerm p_0 (ATerm t)
{
  ATerm z_5 = NULL;
  ATerm p_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          z_5 = ATgetArgument(t, 0);
          {
            ATerm r_15 = ATgetArgument(t, 1);
          }
          {
            ATerm s_15 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_15);
      t = z_5;
    }
  else
    {
      t = p_15;
      if(match_cons(t, sym_SDefT_4))
        {
          z_5 = ATgetArgument(t, 0);
          {
            ATerm t_15 = ATgetArgument(t, 1);
          }
          {
            ATerm u_15 = ATgetArgument(t, 2);
          }
          {
            ATerm v_15 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = z_5;
    }
  return(t);
}
ATerm c_8 (ATerm w_52, ATerm v_52, ATerm t)
{
  t = w_52;
  t = map_1_0(p_0, t);
  return(t);
}
ATerm u_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL;
  if(match_cons(t, sym__2))
    {
      y_7 = ATgetArgument(t, 0);
      z_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_9(e_1, y_7, z_7, t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm d_8 = NULL;
  if(match_cons(t, sym__2))
    {
      d_8 = ATgetArgument(t, 0);
      if((d_8 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm n_8 = NULL,r_8 = NULL;
  if(match_cons(t, sym__2))
    {
      n_8 = ATgetArgument(t, 0);
      r_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_9(k_1, n_8, r_8, t);
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm t_8 = NULL;
  if(match_cons(t, sym__2))
    {
      t_8 = ATgetArgument(t, 0);
      if((t_8 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm l_1 (ATerm t)
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
ATerm free_vars2_4_0 (ATerm l_118 (ATerm), ATerm m_118 (ATerm), ATerm n_118 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm o_118 (ATerm), ATerm t)
{
  ATerm u_7 (ATerm t)
  {
    ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL;
    if(((v_6 != NULL) && (v_6 != t)))
      _fail(t);
    else
      v_6 = t;
    {
      ATerm b_16 = t;
      int c_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_118(t);
          ;
          LocalPopChoice(c_16);
        }
      else
        {
          t = b_16;
          t = (ATerm) ATempty;
        }
      if(((t_6 != NULL) && (t_6 != t)))
        _fail(t);
      else
        t_6 = t;
      t = not_null(v_6);
      {
        ATerm f_16 = t;
        int g_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_6 = NULL,p_7 = NULL,q_7 = NULL;
            t = m_118(t);
            if(((w_6 != NULL) && (w_6 != t)))
              _fail(t);
            else
              w_6 = t;
            t = not_null(v_6);
            {
              ATerm q_0 (ATerm t)
              {
                ATerm k_7 = NULL;
                t = u_7(t);
                k_7 = t;
                t = (ATerm) ATmakeAppl(sym__2, k_7, not_null(w_6));
                t = v_8(o_118, k_7, not_null(w_6), t);
                return(t);
              }
              t = n_118(q_0, u_7, u_0, t);
              if(((q_7 != NULL) && (q_7 != t)))
                _fail(t);
              else
                q_7 = t;
              t = SSL_explode_term(not_null(q_7));
              if(match_cons(t, sym__2))
                {
                  ATerm h_16 = ATgetArgument(t, 0);
                  if(((p_7 != NULL) && (p_7 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    p_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = not_null(p_7);
              t = foldr_3_0(w_0, a_1, _id, t);
            }
            ;
            LocalPopChoice(g_16);
          }
        else
          {
            t = f_16;
            {
              ATerm f_8 = NULL;
              t = SSL_explode_term(not_null(v_6));
              if(match_cons(t, sym__2))
                {
                  ATerm i_16 = ATgetArgument(t, 0);
                  f_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = f_8;
              t = foldr_3_0(f_1, j_1, u_7, t);
            }
          }
        if(((u_6 != NULL) && (u_6 != t)))
          _fail(t);
        else
          u_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_6), not_null(u_6));
        t = j_9(l_1, not_null(t_6), not_null(u_6), t);
      }
    }
    return(t);
  }
  t = u_7(t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm a_8 = NULL,b_8 = NULL,h_8 = NULL,j_8 = NULL,s_8 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm j_16 = ATgetArgument(t, 0);
      if(match_cons(j_16, sym_SVar_1))
        {
          a_8 = ATgetArgument(j_16, 0);
        }
      else
        _fail(t);
      b_8 = ATgetArgument(t, 1);
      h_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_8;
  t = foldr_3_0(u_1, v_1, w_1, t);
  j_8 = t;
  t = h_8;
  t = foldr_3_0(x_1, y_1, k_2, t);
  s_8 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, a_8, (ATerm) ATmakeAppl(sym__2, j_8, s_8)));
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm a_9 = NULL,k_9 = NULL,y_9 = NULL,c_10 = NULL,f_10 = NULL;
  a_9 = t;
  if(match_cons(t, sym_Let_2))
    {
      k_9 = ATgetArgument(t, 0);
      y_9 = ATgetArgument(t, 1);
      t = a_9;
      t = c_8(k_9, y_9, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          k_9 = ATgetArgument(t, 0);
          y_9 = ATgetArgument(t, 1);
          c_10 = ATgetArgument(t, 2);
          t = y_9;
          t = map_1_0(l_2, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              k_9 = ATgetArgument(t, 0);
              y_9 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, k_9);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  k_9 = ATgetArgument(t, 0);
                  y_9 = ATgetArgument(t, 1);
                  c_10 = ATgetArgument(t, 2);
                  f_10 = ATgetArgument(t, 3);
                  t = y_9;
                  t = map_1_0(m_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      k_9 = ATgetArgument(t, 0);
                      y_9 = ATgetArgument(t, 1);
                      c_10 = ATgetArgument(t, 2);
                      f_10 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_9;
                  t = map_1_0(n_2, t);
                }
            }
        }
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm m_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_16 = ATgetArgument(t, 0);
      if(match_cons(k_16, sym__2))
        {
          m_12 = ATgetArgument(k_16, 0);
          {
            ATerm t_16 = ATgetArgument(k_16, 1);
          }
        }
      else
        _fail(t);
      if((m_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_v_16;
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm u_8 = NULL,w_8 = NULL;
  if(match_cons(t, sym__2))
    {
      u_8 = ATgetArgument(t, 0);
      w_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_9(u_8, w_8, t);
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_v_16;
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL;
  if(match_cons(t, sym__2))
    {
      x_8 = ATgetArgument(t, 0);
      y_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_9(x_8, y_8, t);
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm a_11 = NULL;
  ATerm x_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_11 = ATgetArgument(t, 0);
          {
            ATerm z_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_16);
      t = a_11;
    }
  else
    {
      t = x_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_11;
    }
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm w_11 = NULL;
  ATerm c_17 = t;
  int d_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_11 = ATgetArgument(t, 0);
          {
            ATerm g_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_17);
      t = w_11;
    }
  else
    {
      t = c_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_11;
    }
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm f_12 = NULL;
  ATerm h_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_12 = ATgetArgument(t, 0);
          {
            ATerm j_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_17);
      t = f_12;
    }
  else
    {
      t = h_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_12;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(m_1, n_1, sboundin_3_0, p_1, t);
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL;
  r_19 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      s_19 = ATgetArgument(t, 0);
      q_19 = ATgetArgument(t, 1);
      {
        ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL,a_20 = NULL;
        t = r_19;
        t = new_0_0(t);
        v_19 = t;
        t = new_0_0(t);
        w_19 = t;
        t = new_0_0(t);
        x_19 = t;
        t = new_0_0(t);
        a_20 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_20), x_19), w_19), v_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, v_19), (ATerm) ATmakeAppl(sym_Var_1, x_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, s_19, (ATerm)ATmakeAppl(sym_Var_1, v_19), (ATerm) ATmakeAppl(sym_Var_1, w_19)), (ATerm) ATmakeAppl(sym_BAM_3, q_19, (ATerm)ATmakeAppl(sym_Var_1, x_19), (ATerm) ATmakeAppl(sym_Var_1, a_20)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_k_17, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, a_20)), (ATerm) ATmakeAppl(sym_Var_1, w_19))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          s_19 = ATgetArgument(t, 0);
          {
            ATerm c_20 = NULL,d_20 = NULL,g_20 = NULL,h_20 = NULL;
            t = not_null(r_19);
            t = new_0_0(t);
            if(((g_20 != NULL) && (g_20 != t)))
              _fail(t);
            else
              g_20 = t;
            t = not_null(s_19);
            {
              ATerm o_2 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((c_20 != NULL) && (c_20 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      c_20 = ATgetArgument(t, 0);
                    if(((d_20 != NULL) && (d_20 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      d_20 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_20));
                return(t);
              }
              t = oncetd_1_0(o_2, t);
              if(((h_20 != NULL) && (h_20 != t)))
                _fail(t);
              else
                h_20 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(g_20)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_k_17, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_20)), not_null(c_20))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_20))), (ATerm) ATmakeAppl(sym_Build_1, not_null(h_20)))));
            }
          }
        }
      else
        {
          ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL,q_20 = NULL,r_20 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              if(((s_19 != NULL) && (s_19 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                s_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(r_19);
          t = new_0_0(t);
          if(((l_20 != NULL) && (l_20 != t)))
            _fail(t);
          else
            l_20 = t;
          t = new_0_0(t);
          if(((q_20 != NULL) && (q_20 != t)))
            _fail(t);
          else
            q_20 = t;
          t = not_null(s_19);
          {
            ATerm r_2 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((j_20 != NULL) && (j_20 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    j_20 = ATgetArgument(t, 0);
                  if(((k_20 != NULL) && (k_20 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    k_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_20));
              return(t);
            }
            t = oncetd_1_0(r_2, t);
            if(((r_20 != NULL) && (r_20 != t)))
              _fail(t);
            else
              r_20 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(l_20)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_20)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_20)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_20))), (ATerm) ATmakeAppl(sym_PrimT_3, term_m_17, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_20)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(l_20)), (ATerm) ATmakeAppl(sym_Op_2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_20)), not_null(j_20)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL;
  if(((v_20 != NULL) && (v_20 != t)))
    _fail(t);
  else
    v_20 = t;
  if(match_cons(t, sym_Match_1))
    {
      if(((w_20 != NULL) && (w_20 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_21 = NULL,c_21 = NULL,e_21 = NULL,k_21 = NULL;
        t = not_null(v_20);
        t = new_0_0(t);
        if(((e_21 != NULL) && (e_21 != t)))
          _fail(t);
        else
          e_21 = t;
        t = not_null(w_20);
        {
          ATerm s_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((b_21 != NULL) && (b_21 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  b_21 = ATgetArgument(t, 0);
                if(((c_21 != NULL) && (c_21 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  c_21 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_21)), not_null(b_21));
            return(t);
          }
          t = pat_td_1_0(s_2, t);
          if(((k_21 != NULL) && (k_21 != t)))
            _fail(t);
          else
            k_21 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_21)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(k_21)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_u_17, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_21)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(c_21))))));
        }
        ;
        LocalPopChoice(q_17);
      }
    else
      {
        t = o_17;
        {
          ATerm v_17 = t;
          int l_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL;
              t = not_null(v_20);
              t = new_0_0(t);
              if(((n_21 != NULL) && (n_21 != t)))
                _fail(t);
              else
                n_21 = t;
              t = not_null(w_20);
              {
                ATerm t_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((m_21 != NULL) && (m_21 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        m_21 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_21));
                  return(t);
                }
                t = pat_td_1_0(t_2, t);
                if(((o_21 != NULL) && (o_21 != t)))
                  _fail(t);
                else
                  o_21 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_21)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_21)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_21))), not_null(m_21))));
              }
              ;
              LocalPopChoice(l_18);
            }
          else
            {
              t = v_17;
              {
                ATerm q_21 = NULL,r_21 = NULL,u_21 = NULL,v_21 = NULL;
                t = not_null(v_20);
                t = new_0_0(t);
                if(((u_21 != NULL) && (u_21 != t)))
                  _fail(t);
                else
                  u_21 = t;
                t = not_null(w_20);
                {
                  ATerm u_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((r_21 != NULL) && (r_21 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          r_21 = ATgetArgument(t, 0);
                        if(((q_21 != NULL) && (q_21 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          q_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_21));
                    return(t);
                  }
                  t = pat_td_1_0(u_2, t);
                  if(((v_21 != NULL) && (v_21 != t)))
                    _fail(t);
                  else
                    v_21 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_21)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_21)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_21))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_21)), not_null(r_21)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm r_105 (ATerm), ATerm t)
{
  ATerm a_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_105(t);
      ;
      LocalPopChoice(e_19);
    }
  else
    {
      t = a_19;
      {
        ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL;
        if(((y_25 != NULL) && (y_25 != t)))
          _fail(t);
        else
          y_25 = t;
        if(match_cons(t, sym_Op_2))
          {
            z_25 = ATgetArgument(t, 0);
            a_26 = ATgetArgument(t, 1);
            {
              ATerm g_10 = NULL,j_10 = NULL,z_1 = NULL;
              t = SSLgetAnnotations(not_null(y_25));
              if(((g_10 != NULL) && (g_10 != t)))
                _fail(t);
              else
                g_10 = t;
              t = not_null(a_26);
              {
                ATerm v_2 (ATerm t)
                {
                  t = pat_td_1_0(r_105, t);
                  return(t);
                }
                t = fetch_1_0(v_2, t);
                if(((j_10 != NULL) && (j_10 != t)))
                  _fail(t);
                else
                  j_10 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, not_null(z_25), not_null(j_10));
                if(((z_1 != NULL) && (z_1 != t)))
                  _fail(t);
                else
                  z_1 = t;
                t = SSLsetAnnotations(not_null(z_1), not_null(g_10));
              }
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                z_25 = ATgetArgument(t, 0);
                a_26 = ATgetArgument(t, 1);
                {
                  ATerm f_19 = t;
                  int g_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_10 = NULL,e_11 = NULL,a_2 = NULL;
                      t = SSLgetAnnotations(not_null(y_25));
                      w_10 = t;
                      t = not_null(a_26);
                      t = pat_td_1_0(r_105, t);
                      e_11 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, not_null(z_25), e_11);
                      a_2 = t;
                      t = SSLsetAnnotations(a_2, w_10);
                      ;
                      LocalPopChoice(g_19);
                    }
                  else
                    {
                      t = f_19;
                      {
                        ATerm t_11 = NULL,j_12 = NULL,g_2 = NULL;
                        t = SSLgetAnnotations(not_null(y_25));
                        t_11 = t;
                        t = not_null(z_25);
                        t = pat_td_1_0(r_105, t);
                        j_12 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, j_12, not_null(a_26));
                        g_2 = t;
                        t = SSLsetAnnotations(g_2, t_11);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    z_25 = ATgetArgument(t, 0);
                    a_26 = ATgetArgument(t, 1);
                    x_25 = ATgetArgument(t, 2);
                    {
                      ATerm w_12 = NULL,b_13 = NULL,h_2 = NULL;
                      t = SSLgetAnnotations(not_null(y_25));
                      if(((w_12 != NULL) && (w_12 != t)))
                        _fail(t);
                      else
                        w_12 = t;
                      t = not_null(x_25);
                      {
                        ATerm w_2 (ATerm t)
                        {
                          t = pat_td_1_0(r_105, t);
                          return(t);
                        }
                        t = fetch_1_0(w_2, t);
                        if(((b_13 != NULL) && (b_13 != t)))
                          _fail(t);
                        else
                          b_13 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, not_null(z_25), not_null(a_26), not_null(b_13));
                        if(((h_2 != NULL) && (h_2 != t)))
                          _fail(t);
                        else
                          h_2 = t;
                        t = SSLsetAnnotations(not_null(h_2), not_null(w_12));
                      }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        z_25 = ATgetArgument(t, 0);
                        a_26 = ATgetArgument(t, 1);
                        x_25 = ATgetArgument(t, 2);
                        {
                          ATerm d_14 = NULL,h_14 = NULL,p_2 = NULL;
                          t = SSLgetAnnotations(not_null(y_25));
                          if(((d_14 != NULL) && (d_14 != t)))
                            _fail(t);
                          else
                            d_14 = t;
                          t = not_null(x_25);
                          {
                            ATerm a_3 (ATerm t)
                            {
                              t = pat_td_1_0(r_105, t);
                              return(t);
                            }
                            t = fetch_1_0(a_3, t);
                            if(((h_14 != NULL) && (h_14 != t)))
                              _fail(t);
                            else
                              h_14 = t;
                            t = (ATerm) ATmakeAppl(sym_CallT_3, not_null(z_25), not_null(a_26), not_null(h_14));
                            if(((p_2 != NULL) && (p_2 != t)))
                              _fail(t);
                            else
                              p_2 = t;
                            t = SSLsetAnnotations(not_null(p_2), not_null(d_14));
                          }
                        }
                      }
                    else
                      {
                        ATerm l_15 = NULL,o_15 = NULL,q_2 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            if(((z_25 != NULL) && (z_25 != ATgetArgument(t, 0))))
                              _fail(ATgetArgument(t, 0));
                            else
                              z_25 = ATgetArgument(t, 0);
                            if(((a_26 != NULL) && (a_26 != ATgetArgument(t, 1))))
                              _fail(ATgetArgument(t, 1));
                            else
                              a_26 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(not_null(y_25));
                        l_15 = t;
                        t = not_null(a_26);
                        t = pat_td_1_0(r_105, t);
                        o_15 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, not_null(z_25), o_15);
                        q_2 = t;
                        t = SSLsetAnnotations(q_2, l_15);
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
  ATerm p_26 = NULL,q_26 = NULL;
  if(((p_26 != NULL) && (p_26 != t)))
    _fail(t);
  else
    p_26 = t;
  if(match_cons(t, sym_Build_1))
    {
      if(((q_26 != NULL) && (q_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_26 = NULL,s_26 = NULL,u_26 = NULL,v_26 = NULL;
        t = not_null(p_26);
        t = new_0_0(t);
        if(((u_26 != NULL) && (u_26 != t)))
          _fail(t);
        else
          u_26 = t;
        t = not_null(q_26);
        {
          ATerm b_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((r_26 != NULL) && (r_26 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_26 = ATgetArgument(t, 0);
                if(((s_26 != NULL) && (s_26 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  s_26 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_26));
            return(t);
          }
          t = pat_td_1_0(b_3, t);
          if(((v_26 != NULL) && (v_26 != t)))
            _fail(t);
          else
            v_26 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_u_19, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_26)), not_null(r_26))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_26))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(v_26))));
        }
        ;
        LocalPopChoice(t_19);
      }
    else
      {
        t = o_19;
        {
          ATerm z_19 = t;
          int b_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_26 = NULL,d_27 = NULL,e_27 = NULL;
              t = not_null(p_26);
              t = new_0_0(t);
              if(((d_27 != NULL) && (d_27 != t)))
                _fail(t);
              else
                d_27 = t;
              t = not_null(q_26);
              {
                ATerm c_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((w_26 != NULL) && (w_26 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        w_26 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_27));
                  return(t);
                }
                t = pat_td_1_0(c_3, t);
                if(((e_27 != NULL) && (e_27 != t)))
                  _fail(t);
                else
                  e_27 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_26), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_27))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(e_27))));
              }
              ;
              LocalPopChoice(b_20);
            }
          else
            {
              t = z_19;
              {
                ATerm f_27 = NULL,g_27 = NULL,l_27 = NULL,o_27 = NULL;
                t = not_null(p_26);
                t = new_0_0(t);
                if(((l_27 != NULL) && (l_27 != t)))
                  _fail(t);
                else
                  l_27 = t;
                t = not_null(q_26);
                {
                  ATerm d_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((f_27 != NULL) && (f_27 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          f_27 = ATgetArgument(t, 0);
                        if(((g_27 != NULL) && (g_27 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          g_27 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_27));
                    return(t);
                  }
                  t = pat_td_1_0(d_3, t);
                  if(((o_27 != NULL) && (o_27 != t)))
                    _fail(t);
                  else
                    o_27 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(l_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(f_27), not_null(g_27), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_27)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(o_27))));
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
  ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL;
  m_29 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_29 = ATgetFirst((ATermList) t);
      o_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm e_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,d_16 = NULL,e_16 = NULL,y_2 = NULL,x_2 = NULL;
        t = SSLgetAnnotations(m_29);
        a_16 = t;
        t = n_29;
        t = n_0(t);
        d_16 = t;
        t = (ATerm) ATinsert(CheckATermList(o_29), d_16);
        x_2 = t;
        t = SSLsetAnnotations(x_2, a_16);
        e_16 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_15 = ATgetFirst((ATermList) t);
            y_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_16);
        w_15 = t;
        t = y_15;
        {
          ATerm i_20 = t;
          int m_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(m_20);
            }
          else
            {
              t = i_20;
            }
          z_15 = t;
          t = (ATerm) ATinsert(CheckATermList(z_15), x_15);
          y_2 = t;
          t = SSLsetAnnotations(y_2, w_15);
        }
        ;
        LocalPopChoice(f_20);
      }
    else
      {
        t = e_20;
        {
          ATerm b_17 = NULL,e_17 = NULL,z_2 = NULL;
          t = SSLgetAnnotations(m_29);
          b_17 = t;
          t = o_29;
          t = map1_1_0(n_0, t);
          e_17 = t;
          t = (ATerm) ATinsert(CheckATermList(e_17), n_29);
          z_2 = t;
          t = SSLsetAnnotations(z_2, b_17);
        }
      }
  }
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm h_32 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, h_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_20), term_p_20));
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL;
  k_32 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      j_32 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, j_32, term_p_20);
    }
  else
    {
      t = k_32;
    }
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm x_32 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      x_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, x_32, term_p_20);
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL;
  z_32 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      y_32 = ATgetArgument(t, 0);
      {
        ATerm s_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, y_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_20), term_p_20));
            ;
            LocalPopChoice(t_20);
          }
        else
          {
            t = s_20;
            t = z_32;
          }
      }
    }
  else
    {
      t = z_32;
    }
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm u_33 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      u_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, u_33, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_20), term_p_20));
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm v_33 = NULL,x_33 = NULL;
  x_33 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      v_33 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, v_33, term_p_20);
    }
  else
    {
      t = x_33;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,m_30 = NULL,p_30 = NULL,r_30 = NULL,s_30 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      r_30 = ATgetArgument(t, 0);
      s_30 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, r_30, s_30);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          r_30 = ATgetArgument(t, 0);
          t = r_30;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_30 = ATgetFirst((ATermList) t);
              j_30 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, i_30, (ATerm) ATmakeAppl(sym_LChoices_1, j_30));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_u_20;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              r_30 = ATgetArgument(t, 0);
              t = r_30;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  i_30 = ATgetFirst((ATermList) t);
                  j_30 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, i_30, (ATerm) ATmakeAppl(sym_Choices_1, j_30));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_u_20;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  r_30 = ATgetArgument(t, 0);
                  t = r_30;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      i_30 = ATgetFirst((ATermList) t);
                      j_30 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_30, (ATerm) ATmakeAppl(sym_Seqs_1, j_30));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_y_20;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      r_30 = ATgetArgument(t, 0);
                      s_30 = ATgetArgument(t, 1);
                      p_30 = ATgetArgument(t, 2);
                      m_30 = ATgetArgument(t, 3);
                      {
                        ATerm z_31 = NULL,d_32 = NULL;
                        t = s_30;
                        t = map1_1_0(g_3, t);
                        z_31 = t;
                        t = p_30;
                        t = map1_1_0(h_3, t);
                        d_32 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, r_30, z_31, d_32, m_30);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          r_30 = ATgetArgument(t, 0);
                          s_30 = ATgetArgument(t, 1);
                          p_30 = ATgetArgument(t, 2);
                          m_30 = ATgetArgument(t, 3);
                          {
                            ATerm l_21 = t;
                            int p_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm u_32 = NULL,w_32 = NULL;
                                t = p_30;
                                t = map1_1_0(i_3, t);
                                u_32 = t;
                                t = s_30;
                                t = map_1_0(k_3, t);
                                w_32 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, r_30, w_32, u_32, m_30);
                                ;
                                LocalPopChoice(p_21);
                              }
                            else
                              {
                                t = l_21;
                                {
                                  ATerm q_33 = NULL,t_33 = NULL;
                                  t = s_30;
                                  t = map1_1_0(l_3, t);
                                  q_33 = t;
                                  t = p_30;
                                  t = map_1_0(r_3, t);
                                  t_33 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, r_30, q_33, t_33, m_30);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              r_30 = ATgetArgument(t, 0);
                              s_30 = ATgetArgument(t, 1);
                              p_30 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, s_30, (ATerm) ATmakeAppl(sym_Op_2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, p_30), r_30)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  r_30 = ATgetArgument(t, 0);
                                  s_30 = ATgetArgument(t, 1);
                                  p_30 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, p_30)), r_30), (ATerm) ATmakeAppl(sym_Build_1, s_30)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      r_30 = ATgetArgument(t, 0);
                                      s_30 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, r_30, (ATerm) ATmakeAppl(sym_Match_1, s_30));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          r_30 = ATgetArgument(t, 0);
                                          s_30 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_30), s_30);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              r_30 = ATgetArgument(t, 0);
                                              s_30 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_30), r_30);
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
ATerm s_3 (ATerm t)
{
  ATerm k_22 = t;
  if((PushChoice() == 0))
    {
      ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL,e_3 = NULL;
      v_35 = t;
      if(match_cons(t, sym_Var_1))
        {
          u_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_35);
      t_35 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, u_35);
      e_3 = t;
      t = SSLsetAnnotations(e_3, t_35);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_22;
    }
  return(t);
}
ATerm t_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_22;
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_35 = ATgetFirst((ATermList) t);
      y_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_35, y_35);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL,e_36 = NULL,f_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_22 = ATgetArgument(t, 0);
      if(match_cons(n_22, sym__2))
        {
          z_35 = ATgetArgument(n_22, 0);
          a_36 = ATgetArgument(n_22, 1);
        }
      else
        _fail(t);
      {
        ATerm p_22 = ATgetArgument(t, 1);
        if(match_cons(p_22, sym__2))
          {
            e_36 = ATgetArgument(p_22, 0);
            f_36 = ATgetArgument(p_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_36), z_35), (ATerm) ATinsert(CheckATermList(f_36), a_36));
  return(t);
}
ATerm z_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_22;
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm g_36 = NULL,j_36 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_36 = ATgetFirst((ATermList) t);
      j_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_36, j_36);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_22 = ATgetArgument(t, 0);
      if(match_cons(s_22, sym__2))
        {
          k_36 = ATgetArgument(s_22, 0);
          l_36 = ATgetArgument(s_22, 1);
        }
      else
        _fail(t);
      {
        ATerm t_22 = ATgetArgument(t, 1);
        if(match_cons(t_22, sym__2))
          {
            m_36 = ATgetArgument(t_22, 0);
            n_36 = ATgetArgument(t_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_36), k_36), (ATerm) ATinsert(CheckATermList(n_36), l_36));
  return(t);
}
ATerm l_8 (ATerm p_45, ATerm q_45, ATerm r_45, ATerm t)
{
  ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,f_3 = NULL;
  t = r_45;
  t = fetch_1_0(s_3, t);
  t = r_45;
  t = genzip_4_0(t_3, u_3, w_3, LiftPrimArg_0_0, t);
  p_35 = t;
  if(match_cons(t, sym__2))
    {
      l_35 = ATgetArgument(t, 0);
      m_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_35);
  j_35 = t;
  t = l_35;
  t = concat_0_0(t);
  n_35 = t;
  t = m_35;
  t = genzip_4_0(z_3, a_4, b_4, _id, t);
  o_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_35, o_35);
  f_3 = t;
  t = SSLsetAnnotations(f_3, j_35);
  if(match_cons(t, sym__2))
    {
      g_35 = ATgetArgument(t, 0);
      {
        ATerm u_22 = ATgetArgument(t, 1);
        if(match_cons(u_22, sym__2))
          {
            h_35 = ATgetArgument(u_22, 0);
            i_35 = ATgetArgument(u_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, g_35, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, h_35), (ATerm) ATmakeAppl(sym_CallT_3, p_45, q_45, i_35)));
  return(t);
}
ATerm e_39 (ATerm j_37, ATerm t)
{
  ATerm l_38 = NULL;
  t = j_37;
  {
    ATerm w_22 = t;
    if((PushChoice() == 0))
      {
        ATerm m_38 = NULL,n_38 = NULL,u_38 = NULL,j_3 = NULL;
        u_38 = t;
        if(match_cons(t, sym_Var_1))
          {
            n_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_38);
        m_38 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, n_38);
        j_3 = t;
        t = SSLsetAnnotations(j_3, m_38);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_22;
      }
    t = new_0_0(t);
    l_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, l_38), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_37), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, l_38)))), (ATerm) ATmakeAppl(sym_Var_1, l_38)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm b_39 = NULL,c_39 = NULL;
  b_39 = t;
  if(match_cons(t, sym_Var_1))
    {
      c_39 = ATgetArgument(t, 0);
      {
        ATerm x_22 = t;
        int z_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_39(b_39, t);
            ;
            LocalPopChoice(z_22);
          }
        else
          {
            t = x_22;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_y_20, (ATerm) ATmakeAppl(sym_Var_1, c_39)));
          }
      }
    }
  else
    {
      t = e_39(b_39, t);
    }
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm a_23 = t;
  if((PushChoice() == 0))
    {
      ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL,m_3 = NULL;
      p_18 = t;
      if(match_cons(t, sym_Var_1))
        {
          o_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_18);
      n_18 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, o_18);
      m_3 = t;
      t = SSLsetAnnotations(m_3, n_18);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_23;
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_22;
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_18 = ATgetFirst((ATermList) t);
      v_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_18, v_18);
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL,i_19 = NULL,j_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_23 = ATgetArgument(t, 0);
      if(match_cons(b_23, sym__2))
        {
          w_18 = ATgetArgument(b_23, 0);
          x_18 = ATgetArgument(b_23, 1);
        }
      else
        _fail(t);
      {
        ATerm c_23 = ATgetArgument(t, 1);
        if(match_cons(c_23, sym__2))
          {
            i_19 = ATgetArgument(c_23, 0);
            j_19 = ATgetArgument(c_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_19), w_18), (ATerm) ATinsert(CheckATermList(j_19), x_18));
  return(t);
}
ATerm j_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_22;
  return(t);
}
ATerm l_4 (ATerm t)
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
ATerm p_4 (ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL,p_19 = NULL,y_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_23 = ATgetArgument(t, 0);
      if(match_cons(d_23, sym__2))
        {
          m_19 = ATgetArgument(d_23, 0);
          n_19 = ATgetArgument(d_23, 1);
        }
      else
        _fail(t);
      {
        ATerm e_23 = ATgetArgument(t, 1);
        if(match_cons(e_23, sym__2))
          {
            p_19 = ATgetArgument(e_23, 0);
            y_19 = ATgetArgument(e_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_19), m_19), (ATerm) ATinsert(CheckATermList(y_19), n_19));
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm f_23 = t;
  if((PushChoice() == 0))
    {
      ATerm s_21 = NULL,t_21 = NULL,w_21 = NULL,o_3 = NULL;
      w_21 = t;
      if(match_cons(t, sym_Var_1))
        {
          t_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_21);
      s_21 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, t_21);
      o_3 = t;
      t = SSLsetAnnotations(o_3, s_21);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_23;
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_22;
  return(t);
}
ATerm w_4 (ATerm t)
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
ATerm x_4 (ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_23 = ATgetArgument(t, 0);
      if(match_cons(h_23, sym__2))
        {
          z_21 = ATgetArgument(h_23, 0);
          a_22 = ATgetArgument(h_23, 1);
        }
      else
        _fail(t);
      {
        ATerm i_23 = ATgetArgument(t, 1);
        if(match_cons(i_23, sym__2))
          {
            b_22 = ATgetArgument(i_23, 0);
            c_22 = ATgetArgument(i_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_22), z_21), (ATerm) ATinsert(CheckATermList(c_22), a_22));
  return(t);
}
ATerm y_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_22;
  return(t);
}
ATerm z_4 (ATerm t)
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
ATerm b_5 (ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL,j_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_23 = ATgetArgument(t, 0);
      if(match_cons(j_23, sym__2))
        {
          f_22 = ATgetArgument(j_23, 0);
          g_22 = ATgetArgument(j_23, 1);
        }
      else
        _fail(t);
      {
        ATerm k_23 = ATgetArgument(t, 1);
        if(match_cons(k_23, sym__2))
          {
            h_22 = ATgetArgument(k_23, 0);
            j_22 = ATgetArgument(k_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_22), f_22), (ATerm) ATinsert(CheckATermList(j_22), g_22));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm n_49 = NULL,o_49 = NULL,p_49 = NULL,q_49 = NULL;
  o_49 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      p_49 = ATgetArgument(t, 0);
      q_49 = ATgetArgument(t, 1);
      n_49 = ATgetArgument(t, 2);
      {
        ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,m_18 = NULL,n_3 = NULL;
        t = n_49;
        t = fetch_1_0(c_4, t);
        t = n_49;
        t = genzip_4_0(e_4, h_4, i_4, LiftPrimArg_0_0, t);
        m_18 = t;
        if(match_cons(t, sym__2))
          {
            a_18 = ATgetArgument(t, 0);
            b_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_18);
        z_17 = t;
        t = a_18;
        t = concat_0_0(t);
        c_18 = t;
        t = b_18;
        t = genzip_4_0(j_4, l_4, p_4, _id, t);
        d_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_18, d_18);
        n_3 = t;
        t = SSLsetAnnotations(n_3, z_17);
        if(match_cons(t, sym__2))
          {
            w_17 = ATgetArgument(t, 0);
            {
              ATerm l_23 = ATgetArgument(t, 1);
              if(match_cons(l_23, sym__2))
                {
                  x_17 = ATgetArgument(l_23, 0);
                  y_17 = ATgetArgument(l_23, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, w_17, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_17), (ATerm) ATmakeAppl(sym_PrimT_3, p_49, q_49, y_17)));
      }
    }
  else
    {
      ATerm x_20 = NULL,z_20 = NULL,a_21 = NULL,d_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,q_3 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          p_49 = ATgetArgument(t, 0);
          q_49 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = q_49;
      t = fetch_1_0(t_4, t);
      t = q_49;
      t = genzip_4_0(v_4, w_4, x_4, LiftPrimArg_0_0, t);
      j_21 = t;
      if(match_cons(t, sym__2))
        {
          f_21 = ATgetArgument(t, 0);
          g_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_21);
      d_21 = t;
      t = f_21;
      t = concat_0_0(t);
      h_21 = t;
      t = g_21;
      t = genzip_4_0(y_4, z_4, b_5, _id, t);
      i_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_21, i_21);
      q_3 = t;
      t = SSLsetAnnotations(q_3, d_21);
      if(match_cons(t, sym__2))
        {
          x_20 = ATgetArgument(t, 0);
          {
            ATerm m_23 = ATgetArgument(t, 1);
            if(match_cons(m_23, sym__2))
              {
                z_20 = ATgetArgument(m_23, 0);
                a_21 = ATgetArgument(m_23, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, x_20, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, z_20), (ATerm) ATmakeAppl(sym_PrimT_3, p_49, (ATerm)ATempty, a_21)));
    }
  return(t);
}
ATerm repeat_1_0 (ATerm k_120 (ATerm), ATerm t)
{
  ATerm z_49 (ATerm t)
  {
    ATerm n_23 = t;
    int o_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_120(t);
        t = z_49(t);
        ;
        LocalPopChoice(o_23);
      }
    else
      {
        t = n_23;
      }
    return(t);
  }
  t = z_49(t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL;
  o_50 = t;
  if(match_cons(t, sym_Con_3))
    {
      l_50 = ATgetArgument(t, 0);
      m_50 = ATgetArgument(t, 1);
      n_50 = ATgetArgument(t, 2);
      {
        ATerm g_23 = NULL,v_3 = NULL;
        t = SSLgetAnnotations(o_50);
        g_23 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, l_50, m_50, n_50);
        v_3 = t;
        t = SSLsetAnnotations(v_3, g_23);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = o_50;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm p_23 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(c_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_23;
    }
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL;
  k_51 = t;
  if(match_cons(t, sym_Con_3))
    {
      l_51 = ATgetArgument(t, 0);
      m_51 = ATgetArgument(t, 1);
      j_51 = ATgetArgument(t, 2);
      {
        ATerm e_24 = NULL,x_3 = NULL;
        t = SSLgetAnnotations(k_51);
        e_24 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, l_51, m_51, j_51);
        x_3 = t;
        t = SSLsetAnnotations(x_3, e_24);
      }
    }
  else
    {
      ATerm i_25 = NULL,y_3 = NULL;
      if(match_cons(t, sym_App_2))
        {
          l_51 = ATgetArgument(t, 0);
          m_51 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_51);
      i_25 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, l_51, m_51);
      y_3 = t;
      t = SSLsetAnnotations(y_3, i_25);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm q_23 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(d_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_23;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      s_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_51;
  if(match_cons(t, sym_StratRule_3))
    {
      t_51 = ATgetArgument(t, 0);
      u_51 = ATgetArgument(t, 1);
      v_51 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_51), (ATerm) ATmakeAppl(sym_Where_1, v_51)), t_51));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          t_51 = ATgetArgument(t, 0);
          u_51 = ATgetArgument(t, 1);
          v_51 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = t_51;
      t = pureterm_0_0(t);
      t = u_51;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, u_51)), (ATerm) ATmakeAppl(sym_Where_1, v_51)), (ATerm) ATmakeAppl(sym_Match_1, t_51)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm h_111 (ATerm), ATerm t)
{
  ATerm l_52 (ATerm t)
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_111(t);
        ;
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        t = SRTS_one(l_52, t);
      }
    return(t);
  }
  t = l_52(t);
  return(t);
}
ATerm o_8 (ATerm e_41, ATerm f_41, ATerm g_41, ATerm t)
{
  ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL,u_52 = NULL,x_52 = NULL,y_52 = NULL;
  t = new_0_0(t);
  if(((u_52 != NULL) && (u_52 != t)))
    _fail(t);
  else
    u_52 = t;
  t = not_null(e_41);
  {
    ATerm e_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm t_23 = ATgetArgument(t, 0);
          if(match_cons(t_23, sym_Var_1))
            {
              if(((p_52 != NULL) && (p_52 != ATgetArgument(t_23, 0))))
                _fail(ATgetArgument(t_23, 0));
              else
                p_52 = ATgetArgument(t_23, 0);
            }
          else
            _fail(t);
          if(((n_52 != NULL) && (n_52 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            n_52 = ATgetArgument(t, 1);
          {
            ATerm u_23 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_52));
      return(t);
    }
    t = oncetd_1_0(e_5, t);
    if(((x_52 != NULL) && (x_52 != t)))
      _fail(t);
    else
      x_52 = t;
    t = not_null(f_41);
    {
      ATerm i_5 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm v_23 = ATgetArgument(t, 0);
            if(match_cons(v_23, sym_Var_1))
              {
                if(((p_52 != NULL) && (p_52 != ATgetArgument(v_23, 0))))
                  _fail(ATgetArgument(v_23, 0));
                else
                  p_52 = ATgetArgument(v_23, 0);
              }
            else
              _fail(t);
            if(((o_52 != NULL) && (o_52 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              o_52 = ATgetArgument(t, 1);
            {
              ATerm w_23 = ATgetArgument(t, 2);
              if(match_cons(w_23, sym_CallT_3))
                {
                  if(((m_52 != NULL) && (m_52 != ATgetArgument(w_23, 0))))
                    _fail(ATgetArgument(w_23, 0));
                  else
                    m_52 = ATgetArgument(w_23, 0);
                  {
                    ATerm x_23 = ATgetArgument(w_23, 1);
                    if(((ATgetType(x_23) != AT_LIST) || !(ATisEmpty(x_23))))
                      _fail(t);
                  }
                  {
                    ATerm y_23 = ATgetArgument(w_23, 2);
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
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_52));
        return(t);
      }
      t = oncetd_1_0(i_5, t);
      if(((y_52 != NULL) && (y_52 != t)))
        _fail(t);
      else
        y_52 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_52)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(x_52), not_null(y_52), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_41), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(m_52), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(n_52), not_null(o_52), term_y_20))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(p_52)), (ATerm) ATmakeAppl(sym_Var_1, not_null(u_52)))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm z_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_24 = t;
      int c_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL;
          o_53 = t;
          if(match_cons(t, sym_SRule_1))
            {
              p_53 = ATgetArgument(t, 0);
              t = p_53;
              if(match_cons(t, sym_Rule_3))
                {
                  l_53 = ATgetArgument(t, 0);
                  m_53 = ATgetArgument(t, 1);
                  n_53 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = o_53;
              t = o_8(l_53, m_53, n_53, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm k_26 = NULL,n_26 = NULL,d_4 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  p_53 = ATgetArgument(t, 0);
                  q_53 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(o_53);
              k_26 = t;
              t = q_53;
              t = desugarRule_0_0(t);
              n_26 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, p_53, n_26);
              d_4 = t;
              t = SSLsetAnnotations(d_4, k_26);
            }
          ;
          LocalPopChoice(c_24);
        }
      else
        {
          t = b_24;
          t = RtoS_0_0(t);
        }
      ;
      LocalPopChoice(a_24);
    }
  else
    {
      t = z_23;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm d_110 (ATerm), ATerm t)
{
  ATerm j_5 (ATerm t)
  {
    t = topdown_1_0(d_110, t);
    return(t);
  }
  t = d_110(t);
  t = SRTS_all(j_5, t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm d_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(f_24);
    }
  else
    {
      t = d_24;
    }
  t = repeat_1_0(l_5, t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm g_24 = t;
  int h_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
      LocalPopChoice(h_24);
    }
  else
    {
      t = g_24;
      {
        ATerm i_24 = t;
        int j_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_54 = NULL,t_54 = NULL,u_54 = NULL,v_54 = NULL;
            s_54 = t;
            if(match_cons(t, sym_CallT_3))
              {
                t_54 = ATgetArgument(t, 0);
                u_54 = ATgetArgument(t, 1);
                v_54 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = s_54;
            t = l_8(t_54, u_54, v_54, t);
            ;
            LocalPopChoice(j_24);
          }
        else
          {
            t = i_24;
            {
              ATerm k_24 = t;
              int l_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(l_24);
                }
              else
                {
                  t = k_24;
                  {
                    ATerm m_24 = t;
                    int n_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(n_24);
                      }
                    else
                      {
                        t = m_24;
                        {
                          ATerm o_24 = t;
                          int p_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm q_24 = t;
                              int r_24 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm d_55 = NULL,e_55 = NULL,f_55 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      if(((d_55 != NULL) && (d_55 != ATgetArgument(t, 0))))
                                        _fail(ATgetArgument(t, 0));
                                      else
                                        d_55 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = not_null(d_55);
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      e_55 = ATgetArgument(t, 0);
                                      {
                                        ATerm s_24 = t;
                                        int t_24 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm j_55 = NULL,k_55 = NULL;
                                            t = not_null(d_55);
                                            {
                                              ATerm q_5 (ATerm t)
                                              {
                                                if(match_cons(t, sym_RootApp_1))
                                                  {
                                                    ATerm u_24 = ATgetArgument(t, 0);
                                                    if(match_cons(u_24, sym_Match_1))
                                                      {
                                                        if(((j_55 != NULL) && (j_55 != ATgetArgument(u_24, 0))))
                                                          _fail(ATgetArgument(u_24, 0));
                                                        else
                                                          j_55 = ATgetArgument(u_24, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = not_null(j_55);
                                                return(t);
                                              }
                                              t = pat_td_1_0(q_5, t);
                                              if(((k_55 != NULL) && (k_55 != t)))
                                                _fail(t);
                                              else
                                                k_55 = t;
                                              t = (ATerm) ATmakeAppl(sym_Match_1, not_null(k_55));
                                            }
                                            ;
                                            LocalPopChoice(t_24);
                                          }
                                        else
                                          {
                                            t = s_24;
                                            t = not_null(e_55);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          e_55 = ATgetArgument(t, 0);
                                          f_55 = ATgetArgument(t, 1);
                                          {
                                            ATerm v_24 = t;
                                            int w_24 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm n_55 = NULL,o_55 = NULL;
                                                t = not_null(d_55);
                                                {
                                                  ATerm r_5 (ATerm t)
                                                  {
                                                    if(match_cons(t, sym_RootApp_1))
                                                      {
                                                        ATerm x_24 = ATgetArgument(t, 0);
                                                        if(match_cons(x_24, sym_Match_1))
                                                          {
                                                            if(((n_55 != NULL) && (n_55 != ATgetArgument(x_24, 0))))
                                                              _fail(ATgetArgument(x_24, 0));
                                                            else
                                                              n_55 = ATgetArgument(x_24, 0);
                                                          }
                                                        else
                                                          _fail(t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = not_null(n_55);
                                                    return(t);
                                                  }
                                                  t = pat_td_1_0(r_5, t);
                                                  if(((o_55 != NULL) && (o_55 != t)))
                                                    _fail(t);
                                                  else
                                                    o_55 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, not_null(o_55));
                                                }
                                                ;
                                                LocalPopChoice(w_24);
                                              }
                                            else
                                              {
                                                t = v_24;
                                                t = (ATerm) ATmakeAppl(sym_BA_2, not_null(e_55), not_null(f_55));
                                              }
                                          }
                                        }
                                      else
                                        {
                                          ATerm y_55 = NULL,z_55 = NULL;
                                          t = not_null(d_55);
                                          {
                                            ATerm t_5 (ATerm t)
                                            {
                                              if(match_cons(t, sym_RootApp_1))
                                                {
                                                  ATerm y_24 = ATgetArgument(t, 0);
                                                  if(match_cons(y_24, sym_Match_1))
                                                    {
                                                      if(((y_55 != NULL) && (y_55 != ATgetArgument(y_24, 0))))
                                                        _fail(ATgetArgument(y_24, 0));
                                                      else
                                                        y_55 = ATgetArgument(y_24, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                _fail(t);
                                              t = not_null(y_55);
                                              return(t);
                                            }
                                            t = pat_td_1_0(t_5, t);
                                            if(((z_55 != NULL) && (z_55 != t)))
                                              _fail(t);
                                            else
                                              z_55 = t;
                                            t = (ATerm) ATmakeAppl(sym_Match_1, not_null(z_55));
                                          }
                                        }
                                    }
                                  ;
                                  LocalPopChoice(r_24);
                                }
                              else
                                {
                                  t = q_24;
                                  t = Mapp2_0_0(t);
                                }
                              ;
                              LocalPopChoice(p_24);
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
  t = topdown_1_0(k_5, t);
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm l_56 = NULL,m_56 = NULL;
  m_56 = t;
  t = SSL_explode_term(m_56);
  if(match_cons(t, sym__2))
    {
      ATerm z_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_25 = ATgetArgument(t, 1);
        if(((ATgetType(a_25) == AT_LIST) && !(ATisEmpty(a_25))))
          {
            l_56 = ATgetFirst((ATermList) a_25);
            {
              ATerm b_25 = (ATerm) ATgetNext((ATermList) a_25);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_56;
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL,i_27 = NULL;
  i_27 = t;
  t = SSL_explode_term(i_27);
  if(match_cons(t, sym__2))
    {
      ATerm c_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_25 = ATgetArgument(t, 1);
        if(((ATgetType(d_25) == AT_LIST) && !(ATisEmpty(d_25))))
          {
            ATerm e_25 = ATgetFirst((ATermList) d_25);
            b_27 = (ATerm) ATgetNext((ATermList) d_25);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_n_17;
  c_27 = t;
  t = SSL_mkterm(c_27, b_27);
  return(t);
}
ATerm x_5 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm f_114 (ATerm), ATerm t)
{
  ATerm d_56 = NULL,e_56 = NULL;
  ATerm o_56 (ATerm t)
  {
    ATerm f_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL;
        f_56 = t;
        t = map_1_0(u_5, t);
        t = f_114(t);
        g_56 = t;
        t = f_56;
        t = map_1_0(w_5, t);
        t = o_56(t);
        h_56 = t;
        t = (ATerm) ATinsert(CheckATermList(h_56), g_56);
        ;
        LocalPopChoice(g_25);
      }
    else
      {
        t = f_25;
        t = map_1_0(x_5, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = o_56(t);
  if(((e_56 != NULL) && (e_56 != t)))
    _fail(t);
  else
    e_56 = t;
  t = term_n_17;
  if(((d_56 != NULL) && (d_56 != t)))
    _fail(t);
  else
    d_56 = t;
  t = SSL_mkterm(not_null(d_56), not_null(e_56));
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm p_56 = NULL;
  p_56 = t;
  {
    ATerm h_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_56 = NULL,t_56 = NULL,w_56 = NULL;
        t = p_56;
        t = new_0_0(t);
        r_56 = t;
        t = new_0_0(t);
        t_56 = t;
        t = new_0_0(t);
        w_56 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_56), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, p_56), (ATerm) ATmakeAppl(sym_Var_1, t_56))), (ATerm) ATmakeAppl(sym_Var_1, w_56)), (ATerm)ATmakeAppl(sym_VarDec_2, r_56, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_20), term_p_20)), t_56, (ATerm)ATmakeAppl(sym_Var_1, t_56), w_56, (ATerm) ATmakeAppl(sym_Var_1, w_56));
        ;
        LocalPopChoice(j_25);
      }
    else
      {
        t = h_25;
        {
          ATerm y_56 = NULL,z_56 = NULL,a_57 = NULL;
          t = p_56;
          t = new_0_0(t);
          y_56 = t;
          t = new_0_0(t);
          z_56 = t;
          t = new_0_0(t);
          a_57 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_56), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, p_56), (ATerm) ATmakeAppl(sym_Var_1, z_56))), (ATerm) ATmakeAppl(sym_Var_1, a_57)), (ATerm)ATmakeAppl(sym_VarDec_2, y_56, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_20), term_p_20)), z_56, (ATerm)ATmakeAppl(sym_Var_1, z_56), a_57, (ATerm) ATmakeAppl(sym_Var_1, a_57));
        }
      }
  }
  return(t);
}
ATerm p_8 (ATerm i_69, ATerm j_69, ATerm t)
{
  ATerm k_25 = t;
  int l_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(i_69, j_69);
      ;
      LocalPopChoice(l_25);
    }
  else
    {
      t = k_25;
      t = SSL_subtr(i_69, j_69);
    }
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL;
  if(match_cons(t, sym__2))
    {
      c_57 = ATgetArgument(t, 0);
      d_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, c_57, d_57, (ATerm) ATempty);
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm e_57 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm m_25 = ATgetArgument(t, 0);
      if(((ATgetType(m_25) != AT_INT) || (ATgetInt((ATermInt) m_25) != 0)))
        _fail(t);
      {
        ATerm n_25 = ATgetArgument(t, 1);
      }
      e_57 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = e_57;
  return(t);
}
ATerm copy_1_0 (ATerm k_124 (ATerm), ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm f_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL,n_57 = NULL,p_57 = NULL;
    if(match_cons(t, sym__3))
      {
        f_57 = ATgetArgument(t, 0);
        k_57 = ATgetArgument(t, 1);
        l_57 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, f_57, term_f_14);
    t = geq_0_0(t);
    t = term_f_14;
    p_57 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_57, term_f_14);
    t = p_8(f_57, p_57, t);
    m_57 = t;
    t = k_57;
    t = k_124(t);
    n_57 = t;
    t = (ATerm) ATmakeAppl(sym__3, m_57, k_57, (ATerm) ATinsert(CheckATermList(l_57), n_57));
    return(t);
  }
  t = for_3_0(y_5, a_6, b_6, t);
  return(t);
}
ATerm q_8 (ATerm y_37, ATerm z_37, ATerm t)
{
  ATerm q_57 = NULL,u_57 = NULL,v_57 = NULL;
  t = new_0_0(t);
  q_57 = t;
  t = new_0_0(t);
  u_57 = t;
  t = new_0_0(t);
  v_57 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, q_57), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_37)), (ATerm) ATmakeAppl(sym_Var_1, u_57))), (ATerm) ATmakeAppl(sym_Op_2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, z_37)), (ATerm) ATmakeAppl(sym_Var_1, v_57)))), (ATerm)ATmakeAppl(sym_VarDec_2, q_57, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_20), term_p_20)), u_57, (ATerm)ATmakeAppl(sym_Var_1, u_57), v_57, (ATerm) ATmakeAppl(sym_Var_1, v_57));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm z_57 = NULL,a_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_57 = ATgetFirst((ATermList) t);
      a_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_58;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_57;
    }
  else
    {
      t = a_58;
      t = last_0_0(t);
    }
  return(t);
}
ATerm k_61 (ATerm v_58, ATerm w_58, ATerm x_58, ATerm y_58, ATerm t)
{
  ATerm c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,j_59 = NULL,o_59 = NULL,p_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL,w_59 = NULL;
  t = term_f_14;
  w_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_58, term_f_14);
  t = s_9(w_58, w_59, t);
  u_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_59, term_a_14);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_59 = ATgetFirst((ATermList) t);
      e_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_59;
  t = last_0_0(t);
  c_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_59), d_59), e_59);
  t = genzip_4_0(c_6, d_6, e_6, f_6, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      f_59 = ATgetArgument(t, 0);
      g_59 = ATgetArgument(t, 1);
      j_59 = ATgetArgument(t, 2);
      o_59 = ATgetArgument(t, 3);
      p_59 = ATgetArgument(t, 4);
      s_59 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_59), j_59), e_59);
  t = concat_0_0(t);
  t_59 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, v_58, term_o_25), g_59, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(t_59), d_59), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, d_59)), (ATerm) ATmakeAppl(sym_Op_2, v_58, o_59))), (ATerm)ATmakeAppl(sym_Op_2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, c_59)), (ATerm) ATmakeAppl(sym_Op_2, v_58, s_59))), (ATerm) ATmakeAppl(sym_Seqs_1, f_59)))));
  return(t);
}
ATerm l_61 (ATerm i_60, ATerm j_60, ATerm l_60, ATerm m_60, ATerm t)
{
  ATerm r_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL;
  t = m_60;
  t = new_0_0(t);
  r_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_60, (ATerm) ATmakeAppl(sym_Var_1, r_60));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      u_60 = ATgetArgument(t, 0);
      v_60 = ATgetArgument(t, 1);
      w_60 = ATgetArgument(t, 2);
      x_60 = ATgetArgument(t, 3);
      y_60 = ATgetArgument(t, 4);
      z_60 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_60, y_60);
  t = conc_0_0(t);
  a_61 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, i_60, term_p_25), v_60, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(a_61), r_60), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, r_60)), (ATerm) ATmakeAppl(sym_Op_2, i_60, x_60))), (ATerm)ATmakeAppl(sym_Op_2, i_60, z_60), (ATerm) ATmakeAppl(sym_Seqs_1, u_60)))));
  return(t);
}
ATerm c_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_25 = ATgetArgument(t, 0);
      ATerm r_25 = ATgetArgument(t, 1);
      if(((ATgetType(r_25) != AT_LIST) || !(ATisEmpty(r_25))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_25 = ATgetArgument(t, 0);
      if(((ATgetType(s_25) == AT_LIST) && !(ATisEmpty(s_25))))
        {
          x_59 = ATgetFirst((ATermList) s_25);
          y_59 = (ATerm) ATgetNext((ATermList) s_25);
        }
      else
        _fail(t);
      {
        ATerm t_25 = ATgetArgument(t, 1);
        if(((ATgetType(t_25) == AT_LIST) && !(ATisEmpty(t_25))))
          {
            z_59 = ATgetFirst((ATermList) t_25);
            a_60 = (ATerm) ATgetNext((ATermList) t_25);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_59, z_59), (ATerm) ATmakeAppl(sym__2, y_59, a_60));
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm b_60 = NULL,c_60 = NULL;
  if(match_cons(t, sym__2))
    {
      b_60 = ATgetArgument(t, 0);
      c_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_60), b_60);
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm e_60 = NULL,f_60 = NULL;
  if(match_cons(t, sym__2))
    {
      e_60 = ATgetArgument(t, 0);
      f_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_8(e_60, f_60, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm c_61 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL;
  c_61 = t;
  if(match_cons(t, sym__3))
    {
      d_61 = ATgetArgument(t, 0);
      e_61 = ATgetArgument(t, 1);
      f_61 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = e_61;
  if(match_string(t, "T"))
    {
      t = f_61;
      if(match_cons(t, sym__2))
        {
          g_61 = ATgetArgument(t, 0);
          h_61 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_61;
      if(match_int(t, 0))
        {
          ATerm u_25 = t;
          int v_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_61(d_61, g_61, h_61, c_61, t);
              ;
              LocalPopChoice(v_25);
            }
          else
            {
              t = u_25;
              {
                ATerm j_61 = NULL;
                t = c_61;
                t = new_0_0(t);
                j_61 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, d_61, term_o_25), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_61), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, j_61)), (ATerm) ATmakeAppl(sym_Op_2, d_61, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, j_61)), (ATerm) ATmakeAppl(sym_Op_2, d_61, (ATerm) ATempty))), term_y_20))));
              }
            }
        }
      else
        {
          t = k_61(d_61, g_61, h_61, c_61, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = f_61;
      if(match_cons(t, sym__2))
        {
          g_61 = ATgetArgument(t, 0);
          h_61 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_61(d_61, g_61, h_61, c_61, t);
    }
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = term_u_20;
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm z_12 = NULL,c_13 = NULL,c_9 = NULL;
  z_12 = t;
  t = SSL_explode_term(z_12);
  if(match_cons(t, sym__2))
    {
      ATerm w_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_26 = ATgetArgument(t, 1);
        if(((ATgetType(b_26) == AT_LIST) && !(ATisEmpty(b_26))))
          {
            c_13 = ATgetFirst((ATermList) b_26);
            {
              ATerm c_26 = (ATerm) ATgetNext((ATermList) b_26);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(z_12);
  if(match_cons(t, sym__2))
    {
      ATerm d_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_26 = ATgetArgument(t, 1);
        if(((ATgetType(e_26) == AT_LIST) && !(ATisEmpty(e_26))))
          {
            ATerm f_26 = ATgetFirst((ATermList) e_26);
            ATerm g_26 = (ATerm) ATgetNext((ATermList) e_26);
            if(((ATgetType(g_26) == AT_LIST) && !(ATisEmpty(g_26))))
              {
                c_9 = ATgetFirst((ATermList) g_26);
                {
                  ATerm h_26 = (ATerm) ATgetNext((ATermList) g_26);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, c_13, c_9);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(g_6, h_6, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,o_13 = NULL;
  i_13 = t;
  if(match_cons(t, sym__2))
    {
      j_13 = ATgetArgument(t, 0);
      k_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_13;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_13 = ATgetFirst((ATermList) t);
      o_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_13;
  if(match_cons(t, sym__2))
    {
      g_13 = ATgetArgument(t, 0);
      h_13 = ATgetArgument(t, 1);
      {
        ATerm i_26 = t;
        int j_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_13;
            if((j_13 != t))
              {
                _fail(t);
              }
            t = h_13;
            ;
            LocalPopChoice(j_26);
          }
        else
          {
            t = i_26;
            t = (ATerm) ATmakeAppl(sym__2, j_13, o_13);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, j_13, o_13);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm v_111 (ATerm), ATerm t)
{
  ATerm m_14 (ATerm t)
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_111(t);
        ;
        LocalPopChoice(m_26);
      }
    else
      {
        t = l_26;
        t = SRTS_all(m_14, t);
      }
    return(t);
  }
  t = m_14(t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_26 = ATgetArgument(t, 0);
      if(((ATgetType(o_26) != AT_LIST) || !(ATisEmpty(o_26))))
        _fail(t);
      {
        ATerm t_26 = ATgetArgument(t, 1);
        if(((ATgetType(t_26) != AT_LIST) || !(ATisEmpty(t_26))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL,d_15 = NULL,f_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_26 = ATgetArgument(t, 0);
      if(((ATgetType(x_26) == AT_LIST) && !(ATisEmpty(x_26))))
        {
          z_14 = ATgetFirst((ATermList) x_26);
          a_15 = (ATerm) ATgetNext((ATermList) x_26);
        }
      else
        _fail(t);
      {
        ATerm y_26 = ATgetArgument(t, 1);
        if(((ATgetType(y_26) == AT_LIST) && !(ATisEmpty(y_26))))
          {
            d_15 = ATgetFirst((ATermList) y_26);
            f_15 = (ATerm) ATgetNext((ATermList) y_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_14, d_15), (ATerm) ATmakeAppl(sym__2, a_15, f_15));
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL;
  if(match_cons(t, sym__2))
    {
      g_15 = ATgetArgument(t, 0);
      h_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_15), g_15);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm p_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL;
  p_14 = t;
  {
    ATerm z_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_27 = ATgetArgument(t, 0);
            ATerm j_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(a_27);
        t = p_14;
      }
    else
      {
        t = z_26;
        {
          ATerm y_14 = NULL;
          if(match_cons(t, sym__3))
            {
              s_14 = ATgetArgument(t, 0);
              t_14 = ATgetArgument(t, 1);
              u_14 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, s_14, t_14);
          t = genzip_4_0(j_6, k_6, m_6, _id, t);
          y_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_14, u_14);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL;
  ATerm n_6 (ATerm t)
  {
    ATerm t_9 = NULL;
    t = m_109(t);
    t_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_9, not_null(k_15));
    t = lookup_0_0(t);
    t = n_109(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((k_15 != NULL) && (k_15 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_15 = ATgetArgument(t, 0);
      if(((j_15 != NULL) && (j_15 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(j_15);
  t = alltd_1_0(n_6, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm w_16 = NULL,a_17 = NULL,f_17 = NULL,l_17 = NULL,p_17 = NULL,f_4 = NULL;
  p_17 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      a_17 = ATgetArgument(t, 0);
      f_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_17);
  w_16 = t;
  t = a_17;
  t = new_0_0(t);
  l_17 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, l_17, f_17);
  f_4 = t;
  t = SSLsetAnnotations(f_4, w_16);
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL,e_18 = NULL,f_18 = NULL,g_4 = NULL;
  f_18 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      s_17 = ATgetArgument(t, 0);
      t_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_18);
  r_17 = t;
  t = s_17;
  t = new_0_0(t);
  e_18 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, e_18, t_17);
  g_4 = t;
  t = SSLsetAnnotations(g_4, r_17);
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm g_18 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      g_18 = ATgetArgument(t, 0);
      {
        ATerm k_27 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_18), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm h_18 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      h_18 = ATgetArgument(t, 0);
      {
        ATerm m_27 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, h_18);
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm t_18 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      t_18 = ATgetArgument(t, 0);
      {
        ATerm p_27 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = t_18;
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm y_18 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      y_18 = ATgetArgument(t, 0);
      {
        ATerm q_27 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = y_18;
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm z_18 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      b_19 = ATgetArgument(t, 0);
      d_19 = ATgetArgument(t, 1);
      z_18 = ATgetArgument(t, 2);
      t = b_19;
      if(match_cons(t, sym_SVar_1))
        {
          c_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_19;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_18;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_19;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          b_19 = ATgetArgument(t, 0);
          d_19 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_19;
      if(match_cons(t, sym_SVar_1))
        {
          c_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_19;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_19;
    }
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm h_19 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_19;
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,u_16 = NULL;
  if(((q_16 != NULL) && (q_16 != t)))
    _fail(t);
  else
    q_16 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_27 = ATgetFirst((ATermList) t);
      if(match_cons(s_27, sym_SDefT_4))
        {
          if(((l_16 != NULL) && (l_16 != ATgetArgument(s_27, 0))))
            _fail(ATgetArgument(s_27, 0));
          else
            l_16 = ATgetArgument(s_27, 0);
          if(((m_16 != NULL) && (m_16 != ATgetArgument(s_27, 1))))
            _fail(ATgetArgument(s_27, 1));
          else
            m_16 = ATgetArgument(s_27, 1);
          if(((n_16 != NULL) && (n_16 != ATgetArgument(s_27, 2))))
            _fail(ATgetArgument(s_27, 2));
          else
            n_16 = ATgetArgument(s_27, 2);
          {
            ATerm u_27 = ATgetArgument(s_27, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm t_27 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = not_null(m_16);
  t = map_1_0(o_6, t);
  if(((o_16 != NULL) && (o_16 != t)))
    _fail(t);
  else
    o_16 = t;
  t = not_null(n_16);
  t = map_1_0(q_6, t);
  if(((p_16 != NULL) && (p_16 != t)))
    _fail(t);
  else
    p_16 = t;
  t = not_null(o_16);
  t = map_1_0(r_6, t);
  if(((s_16 != NULL) && (s_16 != t)))
    _fail(t);
  else
    s_16 = t;
  t = not_null(p_16);
  t = map_1_0(x_6, t);
  if(((r_16 != NULL) && (r_16 != t)))
    _fail(t);
  else
    r_16 = t;
  t = not_null(q_16);
  {
    ATerm z_6 (ATerm t)
    {
      ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm v_27 = ATgetArgument(t, 0);
          i_18 = ATgetArgument(t, 1);
          j_18 = ATgetArgument(t, 2);
          k_18 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = j_18;
      t = map_1_0(a_7, t);
      q_18 = t;
      t = i_18;
      t = map_1_0(c_7, t);
      s_18 = t;
      t = (ATerm) ATmakeAppl(sym__3, s_18, not_null(s_16), k_18);
      t = substitute_2_0(d_7, _id, t);
      r_18 = t;
      t = (ATerm) ATmakeAppl(sym__3, q_18, not_null(r_16), r_18);
      t = substitute_2_0(f_7, _id, t);
      return(t);
    }
    t = map_1_0(z_6, t);
    t = choices_0_0(t);
    if(((u_16 != NULL) && (u_16 != t)))
      _fail(t);
    else
      u_16 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(l_16), not_null(o_16), not_null(p_16), not_null(u_16));
  }
  return(t);
}
ATerm o_63 (ATerm s_61, ATerm t_61, ATerm u_61, ATerm v_61, ATerm t)
{
  ATerm d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL,k_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_61, t_61);
  t = Definitions_0_0(t);
  d_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_62, u_61);
  g_62 = t;
  if(match_cons(t, sym__2))
    {
      ATerm w_27 = ATgetArgument(t, 0);
      ATerm x_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_62);
  e_62 = t;
  t = d_62;
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_62 = NULL,q_62 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_62 = ATgetFirst((ATermList) t);
            q_62 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_62;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_62;
        ;
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
        t = JoinDefs2_0_0(t);
      }
    f_62 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_62, u_61);
    k_4 = t;
    t = SSLsetAnnotations(k_4, e_62);
  }
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL;
  w_62 = t;
  if(match_cons(t, sym__2))
    {
      x_62 = ATgetArgument(t, 0);
      c_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_62;
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
      u_62 = ATgetArgument(t, 0);
      v_62 = ATgetArgument(t, 1);
      {
        ATerm b_28 = t;
        int c_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_63 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, u_62, v_62, b_63);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            n_63 = t;
            t = (ATerm) ATmakeAppl(sym__2, n_63, c_63);
            ;
            LocalPopChoice(c_28);
          }
        else
          {
            t = b_28;
            t = o_63(a_63, b_63, c_63, w_62, t);
          }
      }
    }
  else
    {
      t = o_63(a_63, b_63, c_63, w_62, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm a_107 (ATerm), ATerm t)
{
  ATerm u_64 (ATerm t)
  {
    ATerm r_64 = NULL,s_64 = NULL,t_64 = NULL;
    t_64 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_64 = ATgetFirst((ATermList) t);
        s_64 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm n_27 = NULL,r_27 = NULL,o_4 = NULL;
          t = SSLgetAnnotations(t_64);
          n_27 = t;
          t = s_64;
          t = u_64(t);
          r_27 = t;
          t = (ATerm) ATinsert(CheckATermList(r_27), r_64);
          o_4 = t;
          t = SSLsetAnnotations(o_4, n_27);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_64;
        t = a_107(t);
      }
    return(t);
  }
  t = u_64(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_63 = NULL,r_63 = NULL,s_63 = NULL;
  q_63 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_63;
    }
  else
    {
      ATerm j_7 (ATerm t)
      {
        t = not_null(s_63);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((r_63 != NULL) && (r_63 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            r_63 = ATgetFirst((ATermList) t);
          if(((s_63 != NULL) && (s_63 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            s_63 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(r_63);
      t = at_end_1_0(j_7, t);
    }
  return(t);
}
ATerm q_65 (ATerm e_65, ATerm t)
{
  ATerm f_65 = NULL;
  t = SSL_explode_term(e_65);
  if(match_cons(t, sym__2))
    {
      ATerm e_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_65;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm h_65 = NULL,i_65 = NULL,l_65 = NULL;
  if(((l_65 != NULL) && (l_65 != t)))
    _fail(t);
  else
    l_65 = t;
  if(match_cons(t, sym__2))
    {
      h_65 = ATgetArgument(t, 0);
      i_65 = ATgetArgument(t, 1);
      {
        ATerm f_28 = t;
        int g_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_7 (ATerm t)
            {
              t = not_null(i_65);
              return(t);
            }
            t = not_null(h_65);
            t = at_end_1_0(l_7, t);
            ;
            LocalPopChoice(g_28);
          }
        else
          {
            t = f_28;
            t = q_65(not_null(l_65), t);
          }
      }
    }
  else
    {
      t = q_65(not_null(l_65), t);
    }
  return(t);
}
ATerm v_8 (ATerm i_121 (ATerm), ATerm w_65, ATerm v_65, ATerm t)
{
  ATerm u_66 (ATerm t)
  {
    ATerm p_66 = NULL,q_66 = NULL,r_66 = NULL;
    p_66 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_66;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_66 = ATgetFirst((ATermList) t);
            r_66 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_28 = t;
          int i_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_66;
              {
                ATerm m_7 (ATerm t)
                {
                  t = not_null(v_65);
                  return(t);
                }
                t = i_9(i_121, m_7, not_null(q_66), not_null(r_66), t);
                t = u_66(t);
              }
              ;
              LocalPopChoice(i_28);
            }
          else
            {
              t = h_28;
              {
                ATerm a_28 = NULL,d_28 = NULL,q_4 = NULL;
                t = SSLgetAnnotations(p_66);
                a_28 = t;
                t = r_66;
                t = u_66(t);
                d_28 = t;
                t = (ATerm) ATinsert(CheckATermList(d_28), q_66);
                q_4 = t;
                t = SSLsetAnnotations(q_4, a_28);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(w_65);
  t = u_66(t);
  return(t);
}
ATerm genzip_4_0 (ATerm p_114 (ATerm), ATerm q_114 (ATerm), ATerm r_114 (ATerm), ATerm s_114 (ATerm), ATerm t)
{
  ATerm i_67 (ATerm t)
  {
    ATerm j_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_114(t);
        ;
        LocalPopChoice(k_28);
      }
    else
      {
        t = j_28;
        {
          ATerm w_66 = NULL,x_66 = NULL,c_67 = NULL,d_67 = NULL,e_67 = NULL,h_67 = NULL,s_5 = NULL;
          t = q_114(t);
          h_67 = t;
          if(match_cons(t, sym__2))
            {
              x_66 = ATgetArgument(t, 0);
              c_67 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_67);
          w_66 = t;
          t = x_66;
          t = s_114(t);
          d_67 = t;
          t = c_67;
          t = i_67(t);
          e_67 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_67, e_67);
          s_5 = t;
          t = SSLsetAnnotations(s_5, w_66);
          t = r_114(t);
        }
      }
    return(t);
  }
  t = i_67(t);
  return(t);
}
ATerm n_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_28 = ATgetArgument(t, 0);
      if(((ATgetType(l_28) != AT_LIST) || !(ATisEmpty(l_28))))
        _fail(t);
      {
        ATerm m_28 = ATgetArgument(t, 1);
        if(((ATgetType(m_28) != AT_LIST) || !(ATisEmpty(m_28))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm v_67 = NULL,w_67 = NULL,x_67 = NULL,z_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_28 = ATgetArgument(t, 0);
      if(((ATgetType(n_28) == AT_LIST) && !(ATisEmpty(n_28))))
        {
          v_67 = ATgetFirst((ATermList) n_28);
          w_67 = (ATerm) ATgetNext((ATermList) n_28);
        }
      else
        _fail(t);
      {
        ATerm o_28 = ATgetArgument(t, 1);
        if(((ATgetType(o_28) == AT_LIST) && !(ATisEmpty(o_28))))
          {
            x_67 = ATgetFirst((ATermList) o_28);
            z_67 = (ATerm) ATgetNext((ATermList) o_28);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_67, x_67), (ATerm) ATmakeAppl(sym__2, w_67, z_67));
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm a_68 = NULL,b_68 = NULL;
  if(match_cons(t, sym__2))
    {
      a_68 = ATgetArgument(t, 0);
      b_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_68), a_68);
  return(t);
}
ATerm z_8 (ATerm f_707, ATerm k_707, ATerm e_85, ATerm t)
{
  ATerm k_67 = NULL,l_67 = NULL,o_67 = NULL,t_67 = NULL;
  t = SSL_explode_term(k_707);
  if(match_cons(t, sym__2))
    {
      k_67 = ATgetArgument(t, 0);
      o_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(f_707);
  if(match_cons(t, sym__2))
    {
      if((k_67 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      l_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_67, o_67);
  t = genzip_4_0(n_7, o_7, r_7, _id, t);
  t_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_67, e_85);
  t = conc_0_0(t);
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm q_68 = NULL;
  q_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, q_68);
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm r_68 = NULL,t_68 = NULL,u_68 = NULL,x_68 = NULL,v_5 = NULL;
  x_68 = t;
  if(match_cons(t, sym__2))
    {
      t_68 = ATgetArgument(t, 0);
      u_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_68);
  r_68 = t;
  t = u_68;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_68, u_68);
  v_5 = t;
  t = SSLsetAnnotations(v_5, r_68);
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm x_69 = NULL,a_70 = NULL,b_70 = NULL,c_70 = NULL,d_70 = NULL;
  x_69 = t;
  if(match_cons(t, sym__2))
    {
      a_70 = ATgetArgument(t, 0);
      b_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_70;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_70 = ATgetFirst((ATermList) t);
      d_70 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_28 = t;
        int q_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_70(a_70, b_70, x_69, t);
            ;
            LocalPopChoice(q_28);
          }
        else
          {
            t = p_28;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_70), c_70), d_70);
          }
      }
    }
  else
    {
      t = z_70(a_70, b_70, x_69, t);
    }
  return(t);
}
ATerm z_70 (ATerm y_68, ATerm z_68, ATerm a_69, ATerm t)
{
  ATerm b_69 = NULL,g_69 = NULL,i_6 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL,p_69 = NULL;
  t = SSLgetAnnotations(a_69);
  b_69 = t;
  t = z_68;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_69 = ATgetFirst((ATermList) t);
      p_69 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_69;
  if(match_cons(t, sym__2))
    {
      n_69 = ATgetArgument(t, 0);
      o_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_69;
        if((n_69 != t))
          {
            _fail(t);
          }
        t = p_69;
        ;
        LocalPopChoice(s_28);
      }
    else
      {
        t = r_28;
        t = z_68;
        t = z_8(n_69, o_69, p_69, t);
      }
    g_69 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_68, g_69);
    i_6 = t;
    t = SSLsetAnnotations(i_6, b_69);
  }
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm w_70 = NULL;
  if(match_cons(t, sym__2))
    {
      w_70 = ATgetArgument(t, 0);
      if((w_70 != ATgetArgument(t, 1)))
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
  ATerm t_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(s_7, e_8, g_8, t);
      ;
      LocalPopChoice(u_28);
    }
  else
    {
      t = t_28;
      {
        ATerm n_70 = NULL,q_70 = NULL,t_70 = NULL;
        n_70 = t;
        if(match_cons(t, sym__2))
          {
            q_70 = ATgetArgument(t, 0);
            t_70 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_70;
        t = v_8(i_8, q_70, t_70, t);
      }
    }
  return(t);
}
ATerm b_9 (ATerm l_136 (ATerm), ATerm m_136 (ATerm), ATerm n_136 (ATerm), ATerm b_86, ATerm y_85, ATerm g_86, ATerm c_86, ATerm z_85, ATerm a_86, ATerm t)
{
  ATerm a_71 = NULL,b_71 = NULL,f_71 = NULL,j_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_86, c_86);
  t = l_136(t);
  if(match_cons(t, sym__2))
    {
      b_71 = ATgetArgument(t, 0);
      a_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_71;
  t = m_136(t);
  f_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_71, g_86);
  t = diff_0_0(t);
  j_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_71, y_85);
  t = conc_0_0(t);
  k_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_71, g_86);
  t = conc_0_0(t);
  l_71 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_86, b_71, z_85);
  t = n_136(t);
  m_71 = t;
  t = (ATerm) ATmakeAppl(sym__5, k_71, l_71, a_71, m_71, a_86);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm l_136 (ATerm), ATerm m_136 (ATerm), ATerm n_136 (ATerm), ATerm t)
{
  ATerm o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL,t_71 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm v_28 = ATgetArgument(t, 0);
      if(((ATgetType(v_28) == AT_LIST) && !(ATisEmpty(v_28))))
        {
          o_71 = ATgetFirst((ATermList) v_28);
          p_71 = (ATerm) ATgetNext((ATermList) v_28);
        }
      else
        _fail(t);
      q_71 = ATgetArgument(t, 1);
      r_71 = ATgetArgument(t, 2);
      s_71 = ATgetArgument(t, 3);
      t_71 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = b_9(l_136, m_136, n_136, o_71, p_71, q_71, r_71, s_71, t_71, t);
  return(t);
}
ATerm while_not_2_0 (ATerm z_120 (ATerm), ATerm a_121 (ATerm), ATerm t)
{
  ATerm u_71 (ATerm t)
  {
    ATerm w_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_120(t);
        ;
        LocalPopChoice(x_28);
      }
    else
      {
        t = w_28;
        t = a_121(t);
        t = u_71(t);
      }
    return(t);
  }
  t = u_71(t);
  return(t);
}
ATerm for_3_0 (ATerm c_121 (ATerm), ATerm d_121 (ATerm), ATerm e_121 (ATerm), ATerm t)
{
  t = c_121(t);
  t = while_not_2_0(d_121, e_121, t);
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm i_72 = NULL,l_72 = NULL,m_72 = NULL;
  if(match_cons(t, sym__3))
    {
      i_72 = ATgetArgument(t, 0);
      l_72 = ATgetArgument(t, 1);
      m_72 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, i_72, i_72, l_72, m_72, (ATerm) ATempty);
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm x_72 = NULL,z_72 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm y_28 = ATgetArgument(t, 0);
      if(((ATgetType(y_28) != AT_LIST) || !(ATisEmpty(y_28))))
        _fail(t);
      {
        ATerm z_28 = ATgetArgument(t, 1);
      }
      {
        ATerm a_29 = ATgetArgument(t, 2);
      }
      x_72 = ATgetArgument(t, 3);
      z_72 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_72, z_72);
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm b_29 = t;
  int c_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, w_9, a_10, t);
      ;
      LocalPopChoice(c_29);
    }
  else
    {
      t = b_29;
      {
        ATerm f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL;
        if(match_cons(t, sym__5))
          {
            f_73 = ATgetArgument(t, 0);
            i_73 = ATgetArgument(t, 1);
            j_73 = ATgetArgument(t, 2);
            k_73 = ATgetArgument(t, 3);
            l_73 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = f_73;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_73 = ATgetFirst((ATermList) t);
            h_73 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, h_73, i_73, j_73, k_73, (ATerm) ATinsert(CheckATermList(l_73), g_73));
      }
    }
  return(t);
}
ATerm w_9 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(b_10, t);
  return(t);
}
ATerm a_10 (ATerm t)
{
  ATerm c_73 = NULL,d_73 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm d_29 = ATgetArgument(t, 0);
      c_73 = ATgetArgument(t, 1);
      d_73 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_73), c_73);
  return(t);
}
ATerm b_10 (ATerm t)
{
  ATerm f_29 = t;
  int g_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      ;
      LocalPopChoice(g_29);
    }
  else
    {
      t = f_29;
    }
  return(t);
}
ATerm d_10 (ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL;
  z_29 = t;
  if(match_cons(t, sym__2))
    {
      a_30 = ATgetArgument(t, 0);
      b_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_30;
  if(match_cons(t, sym_Mod_2))
    {
      x_29 = ATgetArgument(t, 0);
      y_29 = ATgetArgument(t, 1);
      {
        ATerm h_29 = t;
        int i_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_29;
            t = v_7(x_29, y_29, b_30, t);
            ;
            LocalPopChoice(i_29);
          }
        else
          {
            t = h_29;
            t = f_30(a_30, b_30, t);
          }
      }
    }
  else
    {
      t = f_30(a_30, b_30, t);
    }
  return(t);
}
ATerm f_30 (ATerm r_29, ATerm s_29, ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL;
  t = term_b_14;
  v_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_14), s_29), term_j_14), r_29), term_g_14);
  w_29 = t;
  t = SSL_printnl(v_29, w_29);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_14), s_29), term_j_14), r_29), term_g_14);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm o_74 = NULL,p_74 = NULL,q_74 = NULL,r_74 = NULL,s_74 = NULL;
  t = for_3_0(k_8, d_9, f_9, t);
  o_74 = t;
  if(match_cons(t, sym__2))
    {
      p_74 = ATgetArgument(t, 0);
      q_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_74;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_74;
    }
  else
    {
      ATerm e_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_74 = ATgetFirst((ATermList) t);
          s_74 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(s_74), r_74);
      t = map_1_0(d_10, t);
      t = term_f_14;
      e_29 = t;
      t = SSL_exit(e_29);
    }
  return(t);
}
ATerm e_9 (ATerm u_136 (ATerm), ATerm z_86, ATerm x_86, ATerm t)
{
  ATerm w_74 = NULL,x_74 = NULL,y_74 = NULL,z_74 = NULL,a_75 = NULL,b_75 = NULL;
  z_74 = t;
  t = u_136(t);
  w_74 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_74, z_86, x_86);
  t = v_9(w_74, z_86, x_86, t);
  {
    ATerm j_29 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_75 = NULL;
        t = term_l_29;
        c_75 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_74, term_l_29);
        t = u_9(w_74, c_75, t);
        ;
        LocalPopChoice(k_29);
      }
    else
      {
        t = j_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_74 = ATgetFirst((ATermList) t);
        y_74 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_l_29;
    a_75 = t;
    t = (ATerm) ATinsert(CheckATermList(y_74), (ATerm) ATinsert(CheckATermList(x_74), z_86));
    b_75 = t;
    t = SSL_table_put(w_74, a_75, b_75);
    t = z_74;
  }
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm l_75 = NULL;
  l_75 = t;
  {
    ATerm p_29 = t;
    int q_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_31 = NULL,l_31 = NULL;
        t = term_t_29;
        l_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_29, l_75);
        t = g_9(l_31, l_75, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm u_29 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_29) != ATmakeSymbol("j_0", 0, ATtrue)))
              _fail(t);
            i_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_31;
        ;
        LocalPopChoice(q_29);
      }
    else
      {
        t = p_29;
        {
          ATerm r_31 = NULL,u_31 = NULL;
          t = term_t_29;
          u_31 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_t_29, l_75);
          t = g_9(u_31, l_75, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm c_30 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) c_30) != ATmakeSymbol("e_0", 0, ATtrue)))
                _fail(t);
              r_31 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_31;
        }
      }
  }
  return(t);
}
ATerm g_9 (ATerm n_82, ATerm o_82, ATerm t)
{
  ATerm o_75 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_82, o_82);
  t = u_9(n_82, o_82, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_75 = ATgetFirst((ATermList) t);
      {
        ATerm d_30 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = o_75;
  return(t);
}
ATerm p_76 (ATerm a_76, ATerm t)
{
  ATerm h_76 = NULL,i_76 = NULL,b_32 = NULL;
  t = term_e_30;
  b_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_30, a_76);
  t = g_9(b_32, a_76, t);
  if(match_cons(t, sym_Defined_3))
    {
      ATerm g_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_30) != ATmakeSymbol("c_0", 0, ATtrue)))
        _fail(t);
      h_76 = ATgetArgument(t, 1);
      i_76 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_76), h_76);
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm l_76 = NULL,n_76 = NULL;
  l_76 = t;
  if(match_cons(t, sym__2))
    {
      ATerm h_30 = ATgetArgument(t, 0);
      n_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_76;
  {
    ATerm k_30 = t;
    int l_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_30 = ATgetArgument(t, 0);
            ATerm o_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(l_30);
        {
          ATerm q_30 = t;
          int t_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_32 = NULL,s_32 = NULL;
              t = term_e_30;
              s_32 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_e_30, l_76);
              t = g_9(s_32, l_76, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm u_30 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) u_30) != ATmakeSymbol("h_0", 0, ATtrue)))
                    _fail(t);
                  i_32 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = i_32;
              ;
              LocalPopChoice(t_30);
            }
          else
            {
              t = q_30;
              t = p_76(l_76, t);
            }
        }
      }
    else
      {
        t = k_30;
        t = p_76(l_76, t);
      }
  }
  return(t);
}
ATerm e_10 (ATerm t)
{
  t = term_v_16;
  return(t);
}
ATerm h_10 (ATerm t)
{
  ATerm g_77 = NULL,h_77 = NULL;
  if(match_cons(t, sym__2))
    {
      g_77 = ATgetArgument(t, 0);
      h_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_9(g_77, h_77, t);
  return(t);
}
ATerm i_10 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm k_10 (ATerm t)
{
  t = term_v_16;
  return(t);
}
ATerm l_10 (ATerm t)
{
  ATerm i_77 = NULL,j_77 = NULL;
  if(match_cons(t, sym__2))
    {
      i_77 = ATgetArgument(t, 0);
      j_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_9(i_77, j_77, t);
  return(t);
}
ATerm m_10 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm n_10 (ATerm t)
{
  ATerm k_77 = NULL;
  if(match_cons(t, sym__2))
    {
      k_77 = ATgetArgument(t, 0);
      if((k_77 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm o_10 (ATerm t)
{
  t = term_e_30;
  return(t);
}
ATerm p_10 (ATerm t)
{
  t = term_t_29;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm q_76 = NULL,r_76 = NULL,s_76 = NULL,t_76 = NULL,u_76 = NULL,v_76 = NULL,w_76 = NULL,x_76 = NULL,y_76 = NULL,z_76 = NULL,a_77 = NULL,b_77 = NULL,c_77 = NULL,d_77 = NULL;
  s_76 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      v_76 = ATgetArgument(t, 0);
      q_76 = ATgetArgument(t, 1);
      r_76 = ATgetArgument(t, 2);
      {
        ATerm v_30 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  x_76 = t;
  t = q_76;
  t = foldr_3_0(e_10, h_10, i_10, t);
  t_76 = t;
  t = r_76;
  t = foldr_3_0(k_10, l_10, m_10, t);
  u_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_76, (ATerm) ATmakeAppl(sym__2, t_76, u_76));
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        ;
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
        t = (ATerm) ATempty;
      }
    z_76 = t;
    t = v_76;
    {
      ATerm y_30 = t;
      int z_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Arities_0_0(t);
          ;
          LocalPopChoice(z_30);
        }
      else
        {
          t = y_30;
          t = (ATerm) ATempty;
        }
      y_76 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_76, u_76));
      d_77 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_76, u_76)), y_76);
      t = j_9(n_10, d_77, y_76, t);
      w_76 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_76, (ATerm) ATmakeAppl(sym__2, t_76, u_76));
      b_77 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_a_31, (ATerm) ATinsert(CheckATermList(z_76), s_76));
      c_77 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_76, (ATerm) ATmakeAppl(sym__2, t_76, u_76)), (ATerm) ATmakeAppl(sym_Defined_2, term_a_31, (ATerm) ATinsert(CheckATermList(z_76), s_76)));
      t = e_9(o_10, b_77, c_77, t);
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_b_31, w_76);
      a_77 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_76, (ATerm) ATmakeAppl(sym_Defined_2, term_b_31, w_76));
      t = e_9(p_10, v_76, a_77, t);
      t = x_76;
    }
  }
  return(t);
}
ATerm q_10 (ATerm t)
{
  t = term_v_16;
  return(t);
}
ATerm r_10 (ATerm t)
{
  ATerm t_77 = NULL,u_77 = NULL;
  if(match_cons(t, sym__2))
    {
      t_77 = ATgetArgument(t, 0);
      u_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_9(t_77, u_77, t);
  return(t);
}
ATerm s_10 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm t_10 (ATerm t)
{
  t = term_v_16;
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm v_77 = NULL,w_77 = NULL;
  if(match_cons(t, sym__2))
    {
      v_77 = ATgetArgument(t, 0);
      w_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_9(v_77, w_77, t);
  return(t);
}
ATerm v_10 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm h_9 (ATerm y_38, ATerm z_38, ATerm a_39, ATerm t)
{
  ATerm l_77 = NULL,m_77 = NULL;
  t = z_38;
  t = foldr_3_0(q_10, r_10, s_10, t);
  l_77 = t;
  t = a_39;
  t = foldr_3_0(t_10, u_10, v_10, t);
  m_77 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, y_38, (ATerm) ATmakeAppl(sym__2, l_77, m_77)));
  return(t);
}
ATerm i_9 (ATerm q_121 (ATerm), ATerm r_121 (ATerm), ATerm c_66, ATerm b_66, ATerm t)
{
  t = r_121(t);
  {
    ATerm x_10 (ATerm t)
    {
      ATerm x_77 = NULL;
      x_77 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_66), x_77);
      t = q_121(t);
      return(t);
    }
    t = fetch_1_0(x_10, t);
    t = not_null(b_66);
  }
  return(t);
}
ATerm j_9 (ATerm n_121 (ATerm), ATerm y_65, ATerm x_65, ATerm t)
{
  ATerm n_78 (ATerm t)
  {
    ATerm i_78 = NULL,j_78 = NULL,k_78 = NULL;
    i_78 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(x_65);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_78 = ATgetFirst((ATermList) t);
            k_78 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm c_31 = t;
          int d_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_78;
              {
                ATerm y_10 (ATerm t)
                {
                  t = not_null(x_65);
                  return(t);
                }
                t = i_9(n_121, y_10, not_null(j_78), not_null(k_78), t);
                t = n_78(t);
              }
              ;
              LocalPopChoice(d_31);
            }
          else
            {
              t = c_31;
              {
                ATerm h_33 = NULL,k_33 = NULL,l_6 = NULL;
                t = SSLgetAnnotations(i_78);
                h_33 = t;
                t = k_78;
                t = n_78(t);
                k_33 = t;
                t = (ATerm) ATinsert(CheckATermList(k_33), j_78);
                l_6 = t;
                t = SSLsetAnnotations(l_6, h_33);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(y_65);
  t = n_78(t);
  return(t);
}
ATerm foldr_3_0 (ATerm x_123 (ATerm), ATerm y_123 (ATerm), ATerm z_123 (ATerm), ATerm t)
{
  ATerm q_78 = NULL,r_78 = NULL,s_78 = NULL;
  q_78 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_78;
      t = x_123(t);
    }
  else
    {
      ATerm z_78 = NULL,a_79 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_78 = ATgetFirst((ATermList) t);
          s_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_78;
      t = z_123(t);
      z_78 = t;
      t = s_78;
      t = foldr_3_0(x_123, y_123, z_123, t);
      a_79 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_78, a_79);
      t = y_123(t);
    }
  return(t);
}
ATerm z_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_11 (ATerm t)
{
  ATerm e_79 = NULL,f_79 = NULL;
  if(match_cons(t, sym__2))
    {
      e_79 = ATgetArgument(t, 0);
      f_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_9(d_11, e_79, f_79, t);
  return(t);
}
ATerm c_11 (ATerm t)
{
  ATerm h_79 = NULL,i_79 = NULL,j_79 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      h_79 = ATgetArgument(t, 0);
      i_79 = ATgetArgument(t, 1);
      j_79 = ATgetArgument(t, 2);
      {
        ATerm e_31 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = h_9(h_79, i_79, j_79, t);
  return(t);
}
ATerm d_11 (ATerm t)
{
  ATerm g_79 = NULL;
  if(match_cons(t, sym__2))
    {
      g_79 = ATgetArgument(t, 0);
      if((g_79 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm all_defs_0_0 (ATerm t)
{
  ATerm b_79 = NULL,c_79 = NULL,d_79 = NULL;
  d_79 = t;
  t = foldr_3_0(z_10, b_11, c_11, t);
  b_79 = t;
  t = d_79;
  t = map_1_0(RegisterSDefT_0_0, t);
  c_79 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_79, c_79, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm t)
{
  ATerm k_79 = NULL,l_79 = NULL,m_79 = NULL,n_79 = NULL,o_79 = NULL,p_79 = NULL,b_7 = NULL;
  p_79 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_79 = ATgetFirst((ATermList) t);
      m_79 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_79);
  k_79 = t;
  t = l_79;
  t = w_91(t);
  n_79 = t;
  t = m_79;
  t = x_91(t);
  o_79 = t;
  t = (ATerm) ATinsert(CheckATermList(o_79), n_79);
  b_7 = t;
  t = SSLsetAnnotations(b_7, k_79);
  return(t);
}
ATerm m_9 (ATerm n_72, ATerm o_72, ATerm t)
{
  ATerm q_79 = NULL;
  t = SSL_fputc(n_72, o_72);
  q_79 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_79);
  return(t);
}
ATerm n_9 (ATerm b_76, ATerm c_76, ATerm t)
{
  ATerm r_79 = NULL;
  t = SSL_write_term_to_stream_text(b_76, c_76);
  r_79 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_79);
  return(t);
}
ATerm p_9 (ATerm b_129 (ATerm), ATerm z_564, ATerm f_76, ATerm t)
{
  ATerm s_79 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_564, term_f_31);
  t = open_stream_0_0(t);
  s_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_79, f_76);
  t = b_129(t);
  t = fclose_0_0(t);
  t = f_76;
  return(t);
}
ATerm o_9 (ATerm x_75, ATerm y_75, ATerm t)
{
  ATerm t_79 = NULL;
  t = SSL_write_term_to_stream_baf(x_75, y_75);
  t_79 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_79);
  return(t);
}
ATerm g_11 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm h_11 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_31 = ATgetArgument(t, 0);
      if(match_cons(g_31, sym_Stream_1))
        {
          v_34 = ATgetArgument(g_31, 0);
        }
      else
        _fail(t);
      w_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_9(v_34, w_34, t);
  return(t);
}
ATerm i_11 (ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL,w_35 = NULL,b_36 = NULL,c_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_31 = ATgetArgument(t, 0);
      if(match_cons(h_31, sym_Stream_1))
        {
          b_36 = ATgetArgument(h_31, 0);
        }
      else
        _fail(t);
      c_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_9(b_36, c_36, t);
  r_35 = t;
  t = term_j_31;
  s_35 = t;
  t = r_35;
  if(match_cons(t, sym_Stream_1))
    {
      w_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_j_31, r_35);
  t = m_9(s_35, w_35, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm x_79 = NULL,y_79 = NULL,z_79 = NULL,a_80 = NULL,b_80 = NULL,d_80 = NULL,e_80 = NULL,f_80 = NULL,g_80 = NULL,h_80 = NULL,h_81 = NULL,i_81 = NULL,g_7 = NULL,e_7 = NULL;
  if(((y_79 != NULL) && (y_79 != t)))
    _fail(t);
  else
    y_79 = t;
  if(match_cons(t, sym__2))
    {
      if(((f_80 != NULL) && (f_80 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_80 = ATgetArgument(t, 0);
      if(((g_80 != NULL) && (g_80 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(y_79));
  if(((e_80 != NULL) && (e_80 != t)))
    _fail(t);
  else
    e_80 = t;
  t = not_null(f_80);
  {
    ATerm k_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_11 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((x_79 != NULL) && (x_79 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                x_79 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(f_11, t);
        ;
        LocalPopChoice(m_31);
      }
    else
      {
        t = k_31;
        t = term_n_31;
        if(((x_79 != NULL) && (x_79 != t)))
          _fail(t);
        else
          x_79 = t;
      }
    if(((h_80 != NULL) && (h_80 != t)))
      _fail(t);
    else
      h_80 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_80), not_null(g_80));
    if(((e_7 != NULL) && (e_7 != t)))
      _fail(t);
    else
      e_7 = t;
    t = SSLsetAnnotations(not_null(e_7), not_null(e_80));
    t = not_null(y_79);
    if(match_cons(t, sym__2))
      {
        if(((a_80 != NULL) && (a_80 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          a_80 = ATgetArgument(t, 0);
        if(((b_80 != NULL) && (b_80 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          b_80 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(y_79));
    if(((z_79 != NULL) && (z_79 != t)))
      _fail(t);
    else
      z_79 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_80), (ATerm) ATmakeAppl(sym__2, not_null(x_79), not_null(b_80)));
    if(((g_7 != NULL) && (g_7 != t)))
      _fail(t);
    else
      g_7 = t;
    t = SSLsetAnnotations(not_null(g_7), not_null(z_79));
    if(((d_80 != NULL) && (d_80 != t)))
      _fail(t);
    else
      d_80 = t;
    if(match_cons(t, sym__2))
      {
        if(((h_81 != NULL) && (h_81 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          h_81 = ATgetArgument(t, 0);
        if(((i_81 != NULL) && (i_81 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          i_81 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm o_31 = t;
      int p_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_34 = NULL,l_34 = NULL,q_34 = NULL,r_34 = NULL,u_34 = NULL,h_7 = NULL;
          t = SSLgetAnnotations(not_null(d_80));
          a_34 = t;
          t = not_null(h_81);
          t = fetch_1_0(g_11, t);
          l_34 = t;
          t = not_null(i_81);
          if(match_cons(t, sym__2))
            {
              r_34 = ATgetArgument(t, 0);
              u_34 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_9(h_11, r_34, u_34, t);
          q_34 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_34, q_34);
          h_7 = t;
          t = SSLsetAnnotations(h_7, a_34);
          ;
          LocalPopChoice(p_31);
        }
      else
        {
          t = o_31;
          {
            ATerm c_35 = NULL,f_35 = NULL,k_35 = NULL,q_35 = NULL,i_7 = NULL;
            t = SSLgetAnnotations(not_null(d_80));
            c_35 = t;
            t = not_null(i_81);
            if(match_cons(t, sym__2))
              {
                k_35 = ATgetArgument(t, 0);
                q_35 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = p_9(i_11, k_35, q_35, t);
            f_35 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_81), f_35);
            i_7 = t;
            t = SSLsetAnnotations(i_7, c_35);
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
ATerm apply_strategy_1_0 (ATerm d_132 (ATerm), ATerm t)
{
  ATerm q_81 = NULL,r_81 = NULL,s_81 = NULL,t_81 = NULL,u_81 = NULL;
  u_81 = t;
  t = dtime_0_0(t);
  t = u_81;
  t = d_132(t);
  t_81 = t;
  t = dtime_0_0(t);
  q_81 = t;
  t = t_81;
  if(match_cons(t, sym__2))
    {
      r_81 = ATgetArgument(t, 0);
      s_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_81), (ATerm) ATmakeAppl(sym_Runtime_1, q_81)), s_81);
  return(t);
}
ATerm m_82 (ATerm g_82, ATerm t)
{
  t = SSL_fclose(g_82);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_82 = NULL,k_82 = NULL;
  k_82 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_82 = ATgetArgument(t, 0);
      {
        ATerm q_31 = t;
        int s_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_82);
            ;
            LocalPopChoice(s_31);
          }
        else
          {
            t = q_31;
            t = m_82(k_82, t);
          }
      }
    }
  else
    {
      t = m_82(k_82, t);
    }
  return(t);
}
ATerm q_9 (ATerm d_76, ATerm t)
{
  t = SSL_read_term_from_stream(d_76);
  return(t);
}
ATerm r_9 (ATerm p_72, ATerm q_72, ATerm t)
{
  ATerm p_82 = NULL;
  t = SSL_fopen(p_72, q_72);
  p_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_82);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_82 = NULL;
  t = SSL_stdin_stream();
  q_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_82);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_82 = NULL;
  t = SSL_stdout_stream();
  r_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_82);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_82 = NULL;
  t = SSL_stderr_stream();
  s_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_82);
  return(t);
}
ATerm b_84 (ATerm y_82, ATerm t)
{
  ATerm z_82 = NULL;
  t = SSL_explode_term(y_82);
  if(match_cons(t, sym__2))
    {
      ATerm t_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_31 = ATgetArgument(t, 1);
        if(((ATgetType(v_31) == AT_LIST) && !(ATisEmpty(v_31))))
          {
            z_82 = ATgetFirst((ATermList) v_31);
            {
              ATerm w_31 = (ATerm) ATgetNext((ATermList) v_31);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_82;
  if(match_cons(t, sym_stderr_0))
    {
      t = z_82;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = z_82;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_82;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm c_84 (ATerm c_83, ATerm d_83, ATerm e_83, ATerm t)
{
  ATerm f_83 = NULL,g_83 = NULL,h_83 = NULL,k_83 = NULL,w_7 = NULL;
  t = SSLgetAnnotations(e_83);
  h_83 = t;
  t = c_83;
  if(match_cons(t, sym_Path_1))
    {
      k_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_83, d_83);
  w_7 = t;
  t = SSLsetAnnotations(w_7, h_83);
  if(match_cons(t, sym__2))
    {
      f_83 = ATgetArgument(t, 0);
      g_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_9(f_83, g_83, t);
  return(t);
}
ATerm d_84 (ATerm m_83, ATerm n_83, ATerm o_83, ATerm t)
{
  ATerm p_83 = NULL,q_83 = NULL,r_83 = NULL,w_83 = NULL,x_7 = NULL;
  t = SSLgetAnnotations(o_83);
  r_83 = t;
  t = SSL_is_string(m_83);
  w_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_83, n_83);
  x_7 = t;
  t = SSLsetAnnotations(x_7, r_83);
  if(match_cons(t, sym__2))
    {
      p_83 = ATgetArgument(t, 0);
      q_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_9(p_83, q_83, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm y_83 = NULL,z_83 = NULL,a_84 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_31 = ATgetArgument(t, 0);
      ATerm y_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  y_83 = t;
  if(match_cons(t, sym__2))
    {
      z_83 = ATgetArgument(t, 0);
      a_84 = ATgetArgument(t, 1);
      {
        ATerm a_32 = t;
        int c_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_84(y_83, t);
            ;
            LocalPopChoice(c_32);
          }
        else
          {
            t = a_32;
            {
              ATerm e_32 = t;
              int f_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_84(z_83, a_84, y_83, t);
                  ;
                  LocalPopChoice(f_32);
                }
              else
                {
                  t = e_32;
                  t = d_84(z_83, a_84, y_83, t);
                }
            }
          }
      }
    }
  else
    {
      t = b_84(y_83, t);
    }
  return(t);
}
ATerm j_11 (ATerm t)
{
  t = term_g_32;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_84 = NULL,f_84 = NULL,g_84 = NULL;
  ATerm l_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_84 = NULL;
      h_84 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_84, term_n_32);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(m_32);
    }
  else
    {
      t = l_32;
      t = debug_1_0(j_11, t);
      _fail(t);
    }
  f_84 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_9(g_84, t);
  e_84 = t;
  t = f_84;
  t = fclose_0_0(t);
  t = e_84;
  return(t);
}
ATerm fetch_1_0 (ATerm u_106 (ATerm), ATerm t)
{
  ATerm k_85 (ATerm t)
  {
    ATerm h_85 = NULL,i_85 = NULL,j_85 = NULL;
    h_85 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_85 = ATgetFirst((ATermList) t);
        j_85 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_32 = t;
      int p_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_36 = NULL,a_37 = NULL,m_8 = NULL;
          t = SSLgetAnnotations(h_85);
          x_36 = t;
          t = i_85;
          t = u_106(t);
          a_37 = t;
          t = (ATerm) ATinsert(CheckATermList(j_85), a_37);
          m_8 = t;
          t = SSLsetAnnotations(m_8, x_36);
          ;
          LocalPopChoice(p_32);
        }
      else
        {
          t = o_32;
          {
            ATerm i_37 = NULL,m_37 = NULL,z_9 = NULL;
            t = SSLgetAnnotations(h_85);
            i_37 = t;
            t = j_85;
            t = k_85(t);
            m_37 = t;
            t = (ATerm) ATinsert(CheckATermList(m_37), i_85);
            z_9 = t;
            t = SSLsetAnnotations(z_9, i_37);
          }
        }
    }
    return(t);
  }
  t = k_85(t);
  return(t);
}
ATerm l_9 (ATerm n_65, ATerm o_65, ATerm t)
{
  t = SSL_strcat(n_65, o_65);
  return(t);
}
ATerm debug_1_0 (ATerm z_128 (ATerm), ATerm t)
{
  ATerm n_85 = NULL,o_85 = NULL,p_85 = NULL,q_85 = NULL;
  n_85 = t;
  t = z_128(t);
  o_85 = t;
  t = term_b_14;
  p_85 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_85), o_85);
  q_85 = t;
  t = SSL_printnl(p_85, q_85);
  t = n_85;
  return(t);
}
ATerm k_11 (ATerm t)
{
  ATerm q_32 = t;
  int r_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(r_32);
    }
  else
    {
      t = q_32;
    }
  return(t);
}
ATerm l_11 (ATerm t)
{
  t = term_t_32;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm v_32 = t;
  int a_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_85 = NULL;
      x_85 = t;
      t = SSL_is_string(x_85);
      ;
      LocalPopChoice(a_33);
    }
  else
    {
      t = v_32;
      {
        ATerm b_33 = t;
        int c_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(k_11, t);
            ;
            LocalPopChoice(c_33);
          }
        else
          {
            t = b_33;
            {
              ATerm n_86 = NULL,o_86 = NULL,p_86 = NULL;
              n_86 = t;
              if(match_cons(t, sym_Path_1))
                {
                  o_86 = ATgetArgument(t, 0);
                  t = o_86;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      o_86 = ATgetArgument(t, 0);
                      t = o_86;
                      {
                        ATerm d_33 = t;
                        int e_33 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(e_33);
                          }
                        else
                          {
                            t = d_33;
                            t = debug_1_0(l_11, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm t_86 = NULL,u_86 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          o_86 = ATgetArgument(t, 0);
                          p_86 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = o_86;
                      t = eval_config_0_0(t);
                      t_86 = t;
                      t = p_86;
                      t = eval_config_0_0(t);
                      u_86 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_86, u_86);
                      t = l_9(t_86, u_86, t);
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
  ATerm d_87 = NULL,e_87 = NULL;
  d_87 = t;
  t = term_f_33;
  e_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_33, d_87);
  t = u_9(e_87, d_87, t);
  {
    ATerm g_33 = t;
    int i_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_87 = NULL,h_87 = NULL;
        t = eval_config_0_0(t);
        g_87 = t;
        t = term_f_33;
        h_87 = t;
        t = SSL_table_put(h_87, d_87, g_87);
        t = g_87;
        ;
        LocalPopChoice(i_33);
      }
    else
      {
        t = g_33;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm m_130 (ATerm), ATerm t)
{
  ATerm l_87 = NULL;
  l_87 = t;
  {
    ATerm j_33 = t;
    int l_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_87 = NULL;
        t = term_m_33;
        t = get_config_0_0(t);
        n_87 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_87, term_n_33);
        t = geq_0_0(t);
        t = l_87;
        t = m_130(t);
        ;
        LocalPopChoice(l_33);
      }
    else
      {
        t = j_33;
        t = l_87;
      }
  }
  return(t);
}
ATerm m_11 (ATerm t)
{
  ATerm q_87 = NULL;
  q_87 = t;
  if(match_string(t, "-k"))
    {
      t = q_87;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = q_87;
    }
  return(t);
}
ATerm n_11 (ATerm t)
{
  ATerm r_87 = NULL,s_87 = NULL,t_87 = NULL;
  r_87 = t;
  t = SSL_string_to_int(r_87);
  s_87 = t;
  t = term_o_33;
  t_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_33, s_87);
  t = x_9(t_87, s_87, t);
  t = r_87;
  return(t);
}
ATerm o_11 (ATerm t)
{
  t = term_p_33;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_11, n_11, o_11, t);
  return(t);
}
ATerm p_11 (ATerm t)
{
  ATerm v_87 = NULL;
  v_87 = t;
  if(match_string(t, "-S"))
    {
      t = v_87;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = v_87;
    }
  return(t);
}
ATerm q_11 (ATerm t)
{
  ATerm w_87 = NULL,x_87 = NULL;
  t = term_m_33;
  w_87 = t;
  t = term_v_16;
  x_87 = t;
  t = term_r_33;
  t = x_9(w_87, x_87, t);
  t = term_s_33;
  return(t);
}
ATerm r_11 (ATerm t)
{
  t = term_w_33;
  return(t);
}
ATerm s_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_11 (ATerm t)
{
  ATerm y_87 = NULL,z_87 = NULL,a_88 = NULL;
  y_87 = t;
  t = SSL_string_to_int(y_87);
  z_87 = t;
  t = term_m_33;
  a_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_33, z_87);
  t = x_9(a_88, z_87, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_87);
  return(t);
}
ATerm v_11 (ATerm t)
{
  t = term_y_33;
  return(t);
}
ATerm x_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_11 (ATerm t)
{
  ATerm b_88 = NULL,c_88 = NULL;
  t = term_z_33;
  b_88 = t;
  t = term_a_14;
  c_88 = t;
  t = term_b_34;
  t = x_9(b_88, c_88, t);
  t = term_c_34;
  return(t);
}
ATerm z_11 (ATerm t)
{
  t = term_d_34;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_34 = t;
  int f_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_11, q_11, r_11, t);
      ;
      LocalPopChoice(f_34);
    }
  else
    {
      t = e_34;
      {
        ATerm g_34 = t;
        int h_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_11, u_11, v_11, t);
            ;
            LocalPopChoice(h_34);
          }
        else
          {
            t = g_34;
            t = Option_3_0(x_11, y_11, z_11, t);
          }
      }
    }
  return(t);
}
ATerm x_9 (ATerm e_77, ATerm f_77, ATerm t)
{
  ATerm d_88 = NULL;
  t = term_f_33;
  d_88 = t;
  t = SSL_table_put(d_88, e_77, f_77);
  t = (ATerm) ATmakeAppl(sym__3, term_f_33, e_77, f_77);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm g_88 = NULL,h_88 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_88 = NULL,j_88 = NULL,k_88 = NULL;
      t = term_a_14;
      t = d_0(t);
      i_88 = t;
      t = term_i_34;
      j_88 = t;
      t = term_j_34;
      k_88 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_34, term_j_34, i_88);
      t = v_9(j_88, k_88, i_88, t);
      _fail(t);
    }
  else
    {
      ATerm n_88 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_88 = ATgetFirst((ATermList) t);
          h_88 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_88;
      t = a_0(t);
      t = term_a_14;
      t = b_0(t);
      n_88 = t;
      t = (ATerm) ATinsert(CheckATermList(h_88), n_88);
    }
  return(t);
}
ATerm a_12 (ATerm t)
{
  ATerm p_88 = NULL;
  p_88 = t;
  if(match_string(t, "-o"))
    {
      t = p_88;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_88;
    }
  return(t);
}
ATerm b_12 (ATerm t)
{
  ATerm q_88 = NULL,r_88 = NULL;
  q_88 = t;
  t = term_k_34;
  r_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_34, q_88);
  t = x_9(r_88, q_88, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_88);
  return(t);
}
ATerm c_12 (ATerm t)
{
  t = term_m_34;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_12, b_12, c_12, t);
  return(t);
}
ATerm v_9 (ATerm c_82, ATerm d_82, ATerm b_82, ATerm t)
{
  ATerm t_88 = NULL,u_88 = NULL,v_88 = NULL;
  t_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_82, d_82);
  {
    ATerm n_34 = t;
    int o_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_34 = ATgetArgument(t, 0);
            ATerm s_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_82, d_82);
        t = u_9(c_82, d_82, t);
        ;
        LocalPopChoice(o_34);
      }
    else
      {
        t = n_34;
        t = (ATerm) ATempty;
      }
    u_88 = t;
    t = (ATerm) ATinsert(CheckATermList(u_88), b_82);
    v_88 = t;
    t = SSL_table_put(c_82, d_82, v_88);
    t = t_88;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm c_89 = NULL,d_89 = NULL,e_89 = NULL,f_89 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_89 = NULL,h_89 = NULL,i_89 = NULL;
      t = term_a_14;
      t = m_0(t);
      g_89 = t;
      t = term_i_34;
      h_89 = t;
      t = term_j_34;
      i_89 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_34, term_j_34, g_89);
      t = v_9(h_89, i_89, g_89, t);
      _fail(t);
    }
  else
    {
      ATerm m_89 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_89 = ATgetFirst((ATermList) t);
          d_89 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_89;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_89 = ATgetFirst((ATermList) t);
          f_89 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_89;
      t = i_0(t);
      t = e_89;
      t = k_0(t);
      m_89 = t;
      t = (ATerm) ATinsert(CheckATermList(f_89), m_89);
    }
  return(t);
}
ATerm d_12 (ATerm t)
{
  ATerm o_89 = NULL;
  o_89 = t;
  if(match_string(t, "-i"))
    {
      t = o_89;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_89;
    }
  return(t);
}
ATerm e_12 (ATerm t)
{
  ATerm p_89 = NULL,q_89 = NULL;
  p_89 = t;
  t = term_t_34;
  q_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_34, p_89);
  t = x_9(q_89, p_89, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_89);
  return(t);
}
ATerm g_12 (ATerm t)
{
  t = term_x_34;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_12, e_12, g_12, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_89 = NULL,s_89 = NULL,t_89 = NULL,u_89 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_14;
  t = whoami_0_0(t);
  r_89 = t;
  t = term_b_14;
  t_89 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_34), r_89);
  u_89 = t;
  t = SSL_printnl(t_89, u_89);
  t = term_f_14;
  s_89 = t;
  t = SSL_exit(s_89);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_z_34;
  t = get_config_0_0(t);
  return(t);
}
ATerm s_9 (ATerm c_69, ATerm d_69, ATerm t)
{
  ATerm a_35 = t;
  int b_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_69, d_69);
      ;
      LocalPopChoice(b_35);
    }
  else
    {
      t = a_35;
      t = SSL_addr(c_69, d_69);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm v_123 (ATerm), ATerm w_123 (ATerm), ATerm t)
{
  ATerm w_89 = NULL,x_89 = NULL,y_89 = NULL;
  w_89 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_89;
      t = v_123(t);
    }
  else
    {
      ATerm b_90 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_89 = ATgetFirst((ATermList) t);
          y_89 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_89;
      t = foldr_2_0(v_123, w_123, t);
      b_90 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_89, b_90);
      t = w_123(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm h_12 (ATerm t)
{
  t = term_v_16;
  return(t);
}
ATerm i_12 (ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL;
  if(match_cons(t, sym__2))
    {
      f_38 = ATgetArgument(t, 0);
      g_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_9(f_38, g_38, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_90 = NULL,b_38 = NULL,c_38 = NULL;
  t = times_0_0(t);
  c_38 = t;
  t = SSL_explode_term(c_38);
  if(match_cons(t, sym__2))
    {
      ATerm d_35 = ATgetArgument(t, 0);
      b_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_38;
  t = foldr_2_0(h_12, i_12, t);
  e_90 = t;
  t = SSL_TicksToSeconds(e_90);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_90 = NULL,q_90 = NULL,r_90 = NULL;
  p_90 = t;
  if(match_cons(t, sym__2))
    {
      q_90 = ATgetArgument(t, 0);
      r_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_35 = t;
    int d_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_90;
        if((q_90 != t))
          {
            _fail(t);
          }
        t = p_90;
        ;
        LocalPopChoice(d_36);
      }
    else
      {
        t = e_35;
        t = (ATerm) ATmakeAppl(sym__2, q_90, r_90);
        {
          ATerm h_36 = t;
          int i_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_90, r_90);
              ;
              LocalPopChoice(i_36);
            }
          else
            {
              t = h_36;
              t = SSL_gtr(q_90, r_90);
            }
          t = (ATerm) ATmakeAppl(sym__2, q_90, r_90);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_130 (ATerm), ATerm t)
{
  ATerm v_90 = NULL;
  v_90 = t;
  {
    ATerm o_36 = t;
    int p_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_90 = NULL;
        t = term_m_33;
        t = get_config_0_0(t);
        x_90 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_90, term_f_14);
        t = geq_0_0(t);
        t = v_90;
        t = l_130(t);
        ;
        LocalPopChoice(p_36);
      }
    else
      {
        t = o_36;
        t = v_90;
      }
  }
  return(t);
}
ATerm k_12 (ATerm t)
{
  ATerm z_90 = NULL,a_91 = NULL,c_91 = NULL,d_91 = NULL;
  t = run_time_0_0(t);
  z_90 = t;
  t = term_a_14;
  t = whoami_0_0(t);
  a_91 = t;
  t = term_b_14;
  c_91 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_36), z_90), term_q_36), a_91);
  d_91 = t;
  t = SSL_printnl(c_91, d_91);
  t = (ATerm) ATmakeAppl(sym__2, term_b_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_36), z_90), term_q_36), a_91));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(k_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm e_91 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_16;
  e_91 = t;
  t = SSL_exit(e_91);
  return(t);
}
ATerm l_12 (ATerm t)
{
  ATerm m_91 = NULL,n_91 = NULL;
  n_91 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = n_91;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          m_91 = ATgetArgument(t, 0);
          {
            ATerm h_39 = NULL,u_12 = NULL;
            t = SSLgetAnnotations(n_91);
            h_39 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, m_91);
            u_12 = t;
            t = SSLsetAnnotations(u_12, h_39);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = n_91;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm b_133 (ATerm), ATerm t)
{
  ATerm s_36 = t;
  int t_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_36;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_36);
    }
  else
    {
      t = s_36;
      t = fetch_1_0(l_12, t);
    }
  t = b_133(t);
  return(t);
}
ATerm map_1_0 (ATerm k_106 (ATerm), ATerm t)
{
  ATerm f_92 (ATerm t)
  {
    ATerm c_92 = NULL,d_92 = NULL,e_92 = NULL;
    c_92 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_92;
      }
    else
      {
        ATerm p_39 = NULL,s_39 = NULL,t_39 = NULL,k_14 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_92 = ATgetFirst((ATermList) t);
            e_92 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_92);
        p_39 = t;
        t = d_92;
        t = k_106(t);
        s_39 = t;
        t = e_92;
        t = f_92(t);
        t_39 = t;
        t = (ATerm) ATinsert(CheckATermList(t_39), s_39);
        k_14 = t;
        t = SSLsetAnnotations(k_14, p_39);
      }
    return(t);
  }
  t = f_92(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm i_92 = NULL,j_92 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_92 = ATgetFirst((ATermList) t);
      j_92 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_92 = NULL,o_92 = NULL;
        ATerm n_12 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(n_92)), not_null(o_92));
          return(t);
        }
        t = not_null(j_92);
        t = g_0(t);
        if(((n_92 != NULL) && (n_92 != t)))
          _fail(t);
        else
          n_92 = t;
        t = not_null(i_92);
        t = f_0(t);
        if(((o_92 != NULL) && (o_92 != t)))
          _fail(t);
        else
          o_92 = t;
        t = not_null(j_92);
        t = reverse_acc_2_0(f_0, n_12, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_14;
      t = g_0(t);
    }
  return(t);
}
ATerm u_9 (ATerm t_83, ATerm u_83, ATerm t)
{
  t = SSL_table_get(t_83, u_83);
  return(t);
}
ATerm o_12 (ATerm t)
{
  ATerm s_92 = NULL,t_92 = NULL,u_92 = NULL,i_22 = NULL;
  u_92 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_92);
  s_92 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_92);
  i_22 = t;
  t = SSLsetAnnotations(i_22, s_92);
  return(t);
}
ATerm p_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_12 (ATerm t)
{
  ATerm w_92 = NULL;
  w_92 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_92), term_v_36);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_92 = NULL,r_92 = NULL;
  ATerm w_36 = t;
  int y_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_34;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_36);
    }
  else
    {
      t = w_36;
      t = fetch_1_0(o_12, t);
    }
  t = term_z_36;
  t = echo_0_0(t);
  t = term_i_34;
  q_92 = t;
  t = term_j_34;
  r_92 = t;
  t = term_b_37;
  t = u_9(q_92, r_92, t);
  t = reverse_acc_2_0(_id, p_12, t);
  t = map_1_0(q_12, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_92 = NULL,z_92 = NULL,a_93 = NULL;
  y_92 = t;
  {
    ATerm c_37 = t;
    int d_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_92;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_37 = ATgetFirst((ATermList) t);
                ATerm f_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_92;
          }
        ;
        LocalPopChoice(d_37);
      }
    else
      {
        t = c_37;
        t = (ATerm) ATinsert(ATempty, y_92);
      }
    z_92 = t;
    t = term_n_31;
    a_93 = t;
    t = SSL_printnl(a_93, z_92);
    t = y_92;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_z_34;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm r_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_12 (ATerm t)
{
  ATerm e_93 = NULL,f_93 = NULL;
  t = term_g_37;
  e_93 = t;
  t = term_a_14;
  f_93 = t;
  t = term_h_37;
  t = x_9(e_93, f_93, t);
  return(t);
}
ATerm t_12 (ATerm t)
{
  t = term_k_37;
  return(t);
}
ATerm v_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_12 (ATerm t)
{
  ATerm g_93 = NULL,h_93 = NULL,i_93 = NULL,j_93 = NULL;
  t = term_g_37;
  i_93 = t;
  t = term_a_14;
  j_93 = t;
  t = term_h_37;
  t = x_9(i_93, j_93, t);
  t = term_l_37;
  g_93 = t;
  t = term_a_14;
  h_93 = t;
  t = term_n_37;
  t = x_9(g_93, h_93, t);
  t = term_o_37;
  return(t);
}
ATerm y_12 (ATerm t)
{
  t = term_p_37;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_37 = t;
  int r_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_12, s_12, t_12, t);
      ;
      LocalPopChoice(r_37);
    }
  else
    {
      t = q_37;
      t = Option_3_0(v_12, x_12, y_12, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm e_135 (ATerm), ATerm t)
{
  ATerm o_93 = NULL,p_93 = NULL,q_93 = NULL,r_93 = NULL,t_93 = NULL,u_93 = NULL,l_22 = NULL;
  if(((o_93 != NULL) && (o_93 != t)))
    _fail(t);
  else
    o_93 = t;
  {
    ATerm s_37 = t;
    int t_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_37;
        t = e_135(t);
        ;
        LocalPopChoice(t_37);
      }
    else
      {
        t = s_37;
      }
    t = not_null(o_93);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((q_93 != NULL) && (q_93 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          q_93 = ATgetFirst((ATermList) t);
        if(((r_93 != NULL) && (r_93 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          r_93 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(o_93));
    if(((p_93 != NULL) && (p_93 != t)))
      _fail(t);
    else
      p_93 = t;
    t = term_z_34;
    if(((u_93 != NULL) && (u_93 != t)))
      _fail(t);
    else
      u_93 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_z_34, not_null(q_93));
    t = x_9(not_null(u_93), not_null(q_93), t);
    t = not_null(r_93);
    {
      ATerm e_94 (ATerm t)
      {
        ATerm v_37 = t;
        int w_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_37 = t;
            int a_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_93 = NULL;
                x_93 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = x_93;
                ;
                LocalPopChoice(a_38);
              }
            else
              {
                t = x_37;
                t = e_135(t);
                t = Cons_2_0(_id, e_94, t);
              }
            ;
            LocalPopChoice(w_37);
          }
        else
          {
            t = v_37;
            {
              ATerm a_94 = NULL,b_94 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_94 = ATgetFirst((ATermList) t);
                  b_94 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(b_94), (ATerm) ATmakeAppl(sym_Undefined_1, a_94));
            }
          }
        return(t);
      }
      t = e_94(t);
      if(((t_93 != NULL) && (t_93 != t)))
        _fail(t);
      else
        t_93 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(t_93)), (ATerm) ATmakeAppl(sym_Program_1, not_null(q_93)));
      if(((l_22 != NULL) && (l_22 != t)))
        _fail(t);
      else
        l_22 = t;
      t = SSLsetAnnotations(not_null(l_22), not_null(p_93));
    }
  }
  return(t);
}
ATerm d_13 (ATerm t)
{
  ATerm q_94 = NULL;
  q_94 = t;
  if(match_string(t, "--help"))
    {
      t = q_94;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_94;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_94;
        }
    }
  return(t);
}
ATerm e_13 (ATerm t)
{
  ATerm r_94 = NULL,s_94 = NULL;
  t = term_u_36;
  r_94 = t;
  t = term_a_14;
  s_94 = t;
  t = term_d_38;
  t = x_9(r_94, s_94, t);
  t = term_e_38;
  return(t);
}
ATerm f_13 (ATerm t)
{
  t = term_h_38;
  return(t);
}
ATerm m_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm d_135 (ATerm), ATerm t)
{
  ATerm j_94 = NULL,k_94 = NULL,l_94 = NULL,m_94 = NULL,n_94 = NULL,o_94 = NULL,p_94 = NULL;
  if(((l_94 != NULL) && (l_94 != t)))
    _fail(t);
  else
    l_94 = t;
  t = term_i_34;
  if(((n_94 != NULL) && (n_94 != t)))
    _fail(t);
  else
    n_94 = t;
  t = term_j_34;
  if(((o_94 != NULL) && (o_94 != t)))
    _fail(t);
  else
    o_94 = t;
  t = (ATerm) ATempty;
  if(((p_94 != NULL) && (p_94 != t)))
    _fail(t);
  else
    p_94 = t;
  t = SSL_table_put(not_null(n_94), not_null(o_94), not_null(p_94));
  t = not_null(l_94);
  {
    ATerm a_13 (ATerm t)
    {
      ATerm i_38 = t;
      int j_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_135(t);
          ;
          LocalPopChoice(j_38);
        }
      else
        {
          t = i_38;
          {
            ATerm k_38 = t;
            int o_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_13, e_13, f_13, t);
                ;
                LocalPopChoice(o_38);
              }
            else
              {
                t = k_38;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_13, t);
    {
      ATerm p_38 = t;
      int q_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_94 = NULL;
          z_94 = t;
          {
            ATerm r_38 = t;
            int s_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_40 = NULL;
                t = z_94;
                {
                  ATerm t_38 = t;
                  int d_39 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_u_36;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(d_39);
                    }
                  else
                    {
                      t = t_38;
                      t = fetch_1_0(m_13, t);
                    }
                  t = z_94;
                  t = default_system_usage_0_0(t);
                  t = term_v_16;
                  a_40 = t;
                  t = SSL_exit(a_40);
                }
                ;
                LocalPopChoice(s_38);
              }
            else
              {
                t = r_38;
                {
                  ATerm g_40 = NULL;
                  t = term_g_37;
                  t = get_config_0_0(t);
                  t = z_94;
                  t = default_system_about_0_0(t);
                  t = term_v_16;
                  g_40 = t;
                  t = SSL_exit(g_40);
                }
              }
          }
          ;
          LocalPopChoice(q_38);
        }
      else
        {
          t = p_38;
          {
            ATerm f_39 = t;
            int g_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_95 = NULL,b_95 = NULL,c_95 = NULL;
                ATerm n_13 (ATerm t)
                {
                  ATerm d_95 = NULL,e_95 = NULL,f_95 = NULL,o_22 = NULL;
                  f_95 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      e_95 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(f_95);
                  d_95 = t;
                  t = e_95;
                  if(((j_94 != NULL) && (j_94 != t)))
                    _fail(t);
                  else
                    j_94 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, e_95);
                  o_22 = t;
                  t = SSLsetAnnotations(o_22, d_95);
                  return(t);
                }
                t = fetch_1_0(n_13, t);
                t = term_b_14;
                if(((b_95 != NULL) && (b_95 != t)))
                  _fail(t);
                else
                  b_95 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_94)), term_i_39);
                if(((c_95 != NULL) && (c_95 != t)))
                  _fail(t);
                else
                  c_95 = t;
                t = SSL_printnl(not_null(b_95), not_null(c_95));
                t = (ATerm) ATmakeAppl(sym__2, term_b_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_94)), term_i_39));
                t = default_system_usage_0_0(t);
                t = term_f_14;
                if(((a_95 != NULL) && (a_95 != t)))
                  _fail(t);
                else
                  a_95 = t;
                t = SSL_exit(not_null(a_95));
                ;
                LocalPopChoice(g_39);
              }
            else
              {
                t = f_39;
              }
          }
        }
      if(((k_94 != NULL) && (k_94 != t)))
        _fail(t);
      else
        k_94 = t;
      t = term_i_34;
      if(((m_94 != NULL) && (m_94 != t)))
        _fail(t);
      else
        m_94 = t;
      t = SSL_table_destroy(not_null(m_94));
      t = not_null(k_94);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_133 (ATerm), ATerm e_133 (ATerm), ATerm f_133 (ATerm), ATerm g_133 (ATerm), ATerm t)
{
  ATerm k_95 = NULL,l_95 = NULL,m_95 = NULL,n_95 = NULL;
  t = parse_options_1_0(d_133, t);
  k_95 = t;
  t = term_j_39;
  n_95 = t;
  t = SSL_table_create(n_95);
  t = term_j_39;
  l_95 = t;
  t = term_k_39;
  m_95 = t;
  t = SSL_table_put(l_95, m_95, k_95);
  t = k_95;
  t = f_133(t);
  {
    ATerm l_39 = t;
    int m_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_133, t);
        ;
        LocalPopChoice(m_39);
      }
    else
      {
        t = l_39;
        {
          ATerm n_39 = t;
          int o_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_133(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(o_39);
            }
          else
            {
              t = n_39;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm q_13 (ATerm t)
{
  t = if_verbose2_1_0(v_13, t);
  return(t);
}
ATerm s_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_13 (ATerm t)
{
  ATerm o_95 = NULL,p_95 = NULL;
  t = term_q_39;
  o_95 = t;
  t = term_a_14;
  p_95 = t;
  t = term_r_39;
  t = x_9(o_95, p_95, t);
  t = term_u_39;
  return(t);
}
ATerm u_13 (ATerm t)
{
  t = term_v_39;
  return(t);
}
ATerm v_13 (ATerm t)
{
  ATerm q_95 = NULL,r_95 = NULL,s_95 = NULL,t_95 = NULL;
  q_95 = t;
  t = term_z_34;
  t = get_config_0_0(t);
  r_95 = t;
  t = term_b_14;
  s_95 = t;
  t = (ATerm) ATinsert(ATempty, r_95);
  t_95 = t;
  t = SSL_printnl(s_95, t_95);
  t = q_95;
  return(t);
}
ATerm iowrap_3_0 (ATerm m_132 (ATerm), ATerm n_132 (ATerm), ATerm o_132 (ATerm), ATerm t)
{
  ATerm p_13 (ATerm t)
  {
    ATerm w_39 = t;
    int x_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_132(t);
        ;
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
              t = input_option_0_0(t);
              ;
              LocalPopChoice(z_39);
            }
          else
            {
              t = y_39;
              {
                ATerm b_40 = t;
                int c_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(c_40);
                  }
                else
                  {
                    t = b_40;
                    {
                      ATerm d_40 = t;
                      int e_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(s_13, t_13, u_13, t);
                          ;
                          LocalPopChoice(e_40);
                        }
                      else
                        {
                          t = d_40;
                          {
                            ATerm f_40 = t;
                            int h_40 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(h_40);
                              }
                            else
                              {
                                t = f_40;
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
  ATerm r_13 (ATerm t)
  {
    ATerm u_95 = NULL,v_95 = NULL,w_95 = NULL;
    if(((v_95 != NULL) && (v_95 != t)))
      _fail(t);
    else
      v_95 = t;
    {
      ATerm i_40 = t;
      int j_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_13 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((u_95 != NULL) && (u_95 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  u_95 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(w_13, t);
          ;
          LocalPopChoice(j_40);
        }
      else
        {
          t = i_40;
          t = term_k_40;
          if(((u_95 != NULL) && (u_95 != t)))
            _fail(t);
          else
            u_95 = t;
        }
      t = not_null(u_95);
      t = ReadFromFile_0_0(t);
      if(((w_95 != NULL) && (w_95 != t)))
        _fail(t);
      else
        w_95 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_95), not_null(w_95));
      t = apply_strategy_1_0(m_132, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(p_13, o_132, q_13, r_13, t);
  return(t);
}
ATerm x_13 (ATerm t)
{
  ATerm x_95 = NULL,y_95 = NULL,z_95 = NULL,a_96 = NULL,b_96 = NULL,c_96 = NULL,d_96 = NULL,e_96 = NULL,f_96 = NULL,g_96 = NULL,h_96 = NULL,i_96 = NULL,y_22 = NULL,v_22 = NULL,r_22 = NULL;
  i_96 = t;
  if(match_cons(t, sym__2))
    {
      y_95 = ATgetArgument(t, 0);
      z_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_96);
  x_95 = t;
  t = z_95;
  if(match_cons(t, sym_Specification_1))
    {
      b_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_95);
  a_96 = t;
  t = b_96;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_96 = ATgetFirst((ATermList) t);
      f_96 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_96);
  d_96 = t;
  t = f_96;
  t = Cons_2_0(y_13, z_13, t);
  g_96 = t;
  t = (ATerm) ATinsert(CheckATermList(g_96), e_96);
  r_22 = t;
  t = SSLsetAnnotations(r_22, d_96);
  h_96 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, h_96);
  v_22 = t;
  t = SSLsetAnnotations(v_22, a_96);
  c_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_95, c_96);
  y_22 = t;
  t = SSLsetAnnotations(y_22, x_95);
  return(t);
}
ATerm y_13 (ATerm t)
{
  ATerm j_96 = NULL,k_96 = NULL,l_96 = NULL,m_96 = NULL,q_22 = NULL;
  m_96 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      k_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_96);
  j_96 = t;
  t = k_96;
  t = all_defs_0_0(t);
  l_96 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, l_96);
  q_22 = t;
  t = SSLsetAnnotations(q_22, j_96);
  return(t);
}
ATerm z_13 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(x_13, _fail, default_usage_0_0, t);
  return(t);
}
