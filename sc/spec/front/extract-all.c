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
ATerm term_w_44;
ATerm term_z_43;
ATerm term_y_43;
ATerm term_t_43;
ATerm term_s_43;
ATerm term_m_43;
ATerm term_l_43;
ATerm term_g_43;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_r_42;
ATerm term_m_42;
ATerm term_h_42;
ATerm term_g_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_c_42;
ATerm term_b_42;
ATerm term_w_41;
ATerm term_v_41;
ATerm term_s_41;
ATerm term_p_41;
ATerm term_i_41;
ATerm term_d_41;
ATerm term_p_40;
ATerm term_o_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_x_39;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_u_39;
ATerm term_n_39;
ATerm term_m_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_d_39;
ATerm term_t_38;
ATerm term_m_38;
ATerm term_i_38;
ATerm term_d_38;
ATerm term_u_37;
ATerm term_p_37;
ATerm term_m_37;
ATerm term_y_36;
ATerm term_v_36;
ATerm term_s_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_h_35;
ATerm term_q_34;
ATerm term_h_34;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_27;
ATerm term_c_27;
ATerm term_u_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_e_26;
ATerm term_h_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_k_22;
ATerm term_c_21;
ATerm term_a_19;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_c_16;
void init_constant_terms (void)
{
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym_Sort_2, term_p_26, (ATerm) ATempty);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_ConstType_1, term_q_26);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(sym__2, term_i_38, term_c_21);
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_21);
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(sym__2, term_k_39, term_c_16);
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(sym__2, term_u_39, term_v_39);
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(sym__2, term_b_42, term_c_16);
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(sym__2, term_e_42, term_c_16);
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(sym__2, term_p_41, term_c_16);
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(sym__2, term_s_43, term_c_16);
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm v_7 (ATerm w_38, ATerm x_38, ATerm y_38, ATerm);
ATerm giving_up_0_0 (ATerm);
ATerm g_4 (ATerm);
ATerm DefinitionExists_0_0 (ATerm);
ATerm Rec_2_0 (ATerm l_97 (ATerm), ATerm m_97 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm g_99 (ATerm), ATerm h_99 (ATerm), ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm);
ATerm Let_2_0 (ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm l_109 (ATerm), ATerm);
ATerm h_4 (ATerm);
ATerm c_8 (ATerm x_52, ATerm w_52, ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm free_vars2_4_0 (ATerm m_118 (ATerm), ATerm n_118 (ATerm), ATerm o_118 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm p_118 (ATerm), ATerm);
ATerm r_4 (ATerm);
ATerm v_4 (ATerm);
ATerm x_4 (ATerm);
ATerm z_4 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm svars_arity_0_0 (ATerm);
ATerm l_5 (ATerm);
ATerm t_5 (ATerm);
ATerm choices_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm alltd_1_0 (ATerm w_111 (ATerm), ATerm);
ATerm u_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm n_109 (ATerm), ATerm o_109 (ATerm), ATerm);
ATerm VarDec_2_0 (ATerm z_98 (ATerm), ATerm a_99 (ATerm), ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm d_6 (ATerm);
ATerm p_6 (ATerm);
ATerm s_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm JoinDefs2_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm As_2_0 (ATerm v_93 (ATerm), ATerm w_93 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm s_96 (ATerm), ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm);
ATerm Op_2_0 (ATerm k_93 (ATerm), ATerm l_93 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm s_105 (ATerm), ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm d_9 (ATerm);
ATerm f_9 (ATerm);
ATerm k_9 (ATerm);
ATerm d_10 (ATerm);
ATerm e_10 (ATerm);
ATerm g_10 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm i_10 (ATerm);
ATerm j_10 (ATerm);
ATerm k_10 (ATerm);
ATerm l_10 (ATerm);
ATerm m_10 (ATerm);
ATerm n_10 (ATerm);
ATerm o_10 (ATerm);
ATerm p_10 (ATerm);
ATerm l_8 (ATerm q_45, ATerm r_45, ATerm s_45, ATerm);
ATerm m_29 (ATerm g_29, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm Var_1_0 (ATerm e_93 (ATerm), ATerm);
ATerm q_10 (ATerm);
ATerm r_10 (ATerm);
ATerm s_10 (ATerm);
ATerm t_10 (ATerm);
ATerm u_10 (ATerm);
ATerm w_10 (ATerm);
ATerm x_10 (ATerm);
ATerm y_10 (ATerm);
ATerm z_10 (ATerm);
ATerm a_11 (ATerm);
ATerm b_11 (ATerm);
ATerm c_11 (ATerm);
ATerm e_11 (ATerm);
ATerm f_11 (ATerm);
ATerm g_11 (ATerm);
ATerm h_11 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm repeat_1_0 (ATerm l_120 (ATerm), ATerm);
ATerm i_11 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm App_2_0 (ATerm s_93 (ATerm), ATerm t_93 (ATerm), ATerm);
ATerm Con_3_0 (ATerm e_94 (ATerm), ATerm f_94 (ATerm), ATerm g_94 (ATerm), ATerm);
ATerm j_11 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm Scope_2_0 (ATerm y_96 (ATerm), ATerm z_96 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm i_111 (ATerm), ATerm);
ATerm o_8 (ATerm f_41, ATerm g_41, ATerm h_41, ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm e_110 (ATerm), ATerm);
ATerm p_11 (ATerm);
ATerm q_11 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm w_11 (ATerm);
ATerm x_11 (ATerm);
ATerm y_11 (ATerm);
ATerm tuple_unzip_1_0 (ATerm g_114 (ATerm), ATerm);
ATerm MkDistApplication_0_0 (ATerm);
ATerm p_8 (ATerm j_69, ATerm k_69, ATerm);
ATerm z_11 (ATerm);
ATerm b_12 (ATerm);
ATerm copy_1_0 (ATerm l_124 (ATerm), ATerm);
ATerm q_8 (ATerm z_37, ATerm a_38, ATerm);
ATerm last_0_0 (ATerm);
ATerm n_48 (ATerm h_43, ATerm i_43, ATerm j_43, ATerm k_43, ATerm);
ATerm o_48 (ATerm q_47, ATerm r_47, ATerm s_47, ATerm t_47, ATerm);
ATerm e_12 (ATerm);
ATerm f_12 (ATerm);
ATerm g_12 (ATerm);
ATerm h_12 (ATerm);
ATerm DefineCongruence_0_0 (ATerm);
ATerm i_12 (ATerm);
ATerm j_12 (ATerm);
ATerm get_definition_0_0 (ATerm);
ATerm at_end_1_0 (ATerm b_107 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm v_51 (ATerm i_51, ATerm);
ATerm conc_0_0 (ATerm);
ATerm v_8 (ATerm j_121 (ATerm), ATerm x_65, ATerm w_65, ATerm);
ATerm genzip_4_0 (ATerm q_114 (ATerm), ATerm r_114 (ATerm), ATerm s_114 (ATerm), ATerm t_114 (ATerm), ATerm);
ATerm n_12 (ATerm);
ATerm p_12 (ATerm);
ATerm q_12 (ATerm);
ATerm z_8 (ATerm g_707, ATerm l_707, ATerm f_85, ATerm);
ATerm r_12 (ATerm);
ATerm s_12 (ATerm);
ATerm t_12 (ATerm);
ATerm u_12 (ATerm);
ATerm v_12 (ATerm);
ATerm w_12 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm b_9 (ATerm m_136 (ATerm), ATerm n_136 (ATerm), ATerm o_136 (ATerm), ATerm c_86, ATerm z_85, ATerm h_86, ATerm d_86, ATerm a_86, ATerm b_86, ATerm);
ATerm GnNextChangeGraph_3_0 (ATerm m_136 (ATerm), ATerm n_136 (ATerm), ATerm o_136 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm a_121 (ATerm), ATerm b_121 (ATerm), ATerm);
ATerm for_3_0 (ATerm d_121 (ATerm), ATerm e_121 (ATerm), ATerm f_121 (ATerm), ATerm);
ATerm x_12 (ATerm);
ATerm y_12 (ATerm);
ATerm z_12 (ATerm);
ATerm c_13 (ATerm);
ATerm d_13 (ATerm);
ATerm e_13 (ATerm);
ATerm h_13 (ATerm);
ATerm h_10 (ATerm a_9, ATerm c_9, ATerm);
ATerm extract_needed_defs_0_0 (ATerm);
ATerm e_9 (ATerm v_136 (ATerm), ATerm a_87, ATerm y_86, ATerm);
ATerm Arities_0_0 (ATerm);
ATerm g_9 (ATerm o_82, ATerm p_82, ATerm);
ATerm l_61 (ATerm r_60, ATerm);
ATerm Definitions_0_0 (ATerm);
ATerm i_13 (ATerm);
ATerm j_13 (ATerm);
ATerm k_13 (ATerm);
ATerm l_13 (ATerm);
ATerm m_13 (ATerm);
ATerm n_13 (ATerm);
ATerm o_13 (ATerm);
ATerm p_13 (ATerm);
ATerm q_13 (ATerm);
ATerm RegisterSDefT_0_0 (ATerm);
ATerm r_13 (ATerm);
ATerm s_13 (ATerm);
ATerm t_13 (ATerm);
ATerm u_13 (ATerm);
ATerm w_13 (ATerm);
ATerm x_13 (ATerm);
ATerm h_9 (ATerm z_38, ATerm a_39, ATerm b_39, ATerm);
ATerm i_9 (ATerm r_121 (ATerm), ATerm s_121 (ATerm), ATerm d_66, ATerm c_66, ATerm);
ATerm j_9 (ATerm o_121 (ATerm), ATerm z_65, ATerm y_65, ATerm);
ATerm foldr_3_0 (ATerm y_123 (ATerm), ATerm z_123 (ATerm), ATerm a_124 (ATerm), ATerm);
ATerm c_14 (ATerm);
ATerm d_14 (ATerm);
ATerm f_14 (ATerm);
ATerm g_14 (ATerm);
ATerm all_defs_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm b_92 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm x_91 (ATerm), ATerm y_91 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm g_92 (ATerm), ATerm);
ATerm _2_0 (ATerm i_87 (ATerm), ATerm j_87 (ATerm), ATerm);
ATerm m_9 (ATerm o_72, ATerm p_72, ATerm);
ATerm n_9 (ATerm c_76, ATerm d_76, ATerm);
ATerm p_9 (ATerm c_129 (ATerm), ATerm a_565, ATerm g_76, ATerm);
ATerm o_9 (ATerm y_75, ATerm z_75, ATerm);
ATerm l_14 (ATerm);
ATerm n_14 (ATerm);
ATerm o_14 (ATerm);
ATerm p_14 (ATerm);
ATerm q_14 (ATerm);
ATerm r_14 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm e_132 (ATerm), ATerm);
ATerm w_68 (ATerm p_68, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm q_9 (ATerm e_76, ATerm);
ATerm r_9 (ATerm q_72, ATerm r_72, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm w_14 (ATerm);
ATerm x_14 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm y_14 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm v_106 (ATerm), ATerm);
ATerm l_9 (ATerm o_65, ATerm p_65, ATerm);
ATerm debug_1_0 (ATerm a_129 (ATerm), ATerm);
ATerm z_14 (ATerm);
ATerm a_15 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm n_130 (ATerm), ATerm);
ATerm b_15 (ATerm);
ATerm c_15 (ATerm);
ATerm d_15 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm f_15 (ATerm);
ATerm g_15 (ATerm);
ATerm h_15 (ATerm);
ATerm i_15 (ATerm);
ATerm j_15 (ATerm);
ATerm k_15 (ATerm);
ATerm m_15 (ATerm);
ATerm n_15 (ATerm);
ATerm o_15 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm x_9 (ATerm f_77, ATerm g_77, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm p_15 (ATerm);
ATerm q_15 (ATerm);
ATerm r_15 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm v_9 (ATerm d_82, ATerm e_82, ATerm c_82, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm t_15 (ATerm);
ATerm u_15 (ATerm);
ATerm v_15 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm s_9 (ATerm d_69, ATerm e_69, ATerm);
ATerm foldr_2_0 (ATerm w_123 (ATerm), ATerm x_123 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm w_15 (ATerm);
ATerm x_15 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm m_130 (ATerm), ATerm);
ATerm y_15 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm z_15 (ATerm);
ATerm need_help_1_0 (ATerm c_133 (ATerm), ATerm);
ATerm map_1_0 (ATerm l_106 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm u_9 (ATerm u_83, ATerm v_83, ATerm);
ATerm Program_1_0 (ATerm d_101 (ATerm), ATerm);
ATerm b_16 (ATerm);
ATerm d_16 (ATerm);
ATerm e_16 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm e_101 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm f_16 (ATerm);
ATerm h_16 (ATerm);
ATerm m_16 (ATerm);
ATerm n_16 (ATerm);
ATerm o_16 (ATerm);
ATerm p_16 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm q_16 (ATerm);
ATerm parse_options_p__1_0 (ATerm f_135 (ATerm), ATerm);
ATerm v_16 (ATerm);
ATerm w_16 (ATerm);
ATerm y_16 (ATerm);
ATerm z_16 (ATerm);
ATerm parse_options_1_0 (ATerm e_135 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm e_133 (ATerm), ATerm f_133 (ATerm), ATerm g_133 (ATerm), ATerm h_133 (ATerm), ATerm);
ATerm f_17 (ATerm);
ATerm k_17 (ATerm);
ATerm l_17 (ATerm);
ATerm m_17 (ATerm);
ATerm n_17 (ATerm);
ATerm iowrap_3_0 (ATerm n_132 (ATerm), ATerm o_132 (ATerm), ATerm p_132 (ATerm), ATerm);
ATerm p_17 (ATerm);
ATerm q_17 (ATerm);
ATerm r_17 (ATerm);
ATerm s_17 (ATerm);
ATerm a_18 (ATerm);
ATerm b_18 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_0 = NULL,t_0 = NULL,x_0 = NULL,y_0 = NULL,z_0 = NULL;
  o_0 = t;
  t = term_c_16;
  t = whoami_0_0(t);
  t_0 = t;
  t = term_c_18;
  x_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_18), t_0), term_d_18);
  y_0 = t;
  t = SSL_printnl(x_0, y_0);
  t = term_f_18;
  z_0 = t;
  t = SSL_exit(z_0);
  t = o_0;
  return(t);
}
ATerm v_7 (ATerm w_38, ATerm x_38, ATerm y_38, ATerm t)
{
  ATerm a_1 = NULL,b_1 = NULL;
  t = term_c_18;
  a_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_18), y_38), term_i_18), x_38), term_h_18), w_38), term_g_18);
  b_1 = t;
  t = SSL_printnl(a_1, b_1);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_18), y_38), term_i_18), x_38), term_h_18), w_38), term_g_18);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL,g_1 = NULL;
  t = term_c_18;
  c_1 = t;
  t = (ATerm) ATinsert(ATempty, term_k_18);
  d_1 = t;
  t = SSL_printnl(c_1, d_1);
  t = term_f_18;
  g_1 = t;
  t = SSL_exit(g_1);
  t = (ATerm) ATinsert(ATempty, term_k_18);
  return(t);
}
ATerm g_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_18 = ATgetArgument(t, 0);
      if(((ATgetType(l_18) != AT_INT) || (ATgetInt((ATermInt) l_18) != 0)))
        _fail(t);
      {
        ATerm m_18 = ATgetArgument(t, 1);
        if(((ATgetType(m_18) != AT_INT) || (ATgetInt((ATermInt) m_18) != 0)))
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
    ATerm n_18 = t;
    int o_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_0 = NULL,s_0 = NULL;
        t = c_2;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm p_18 = ATgetFirst((ATermList) t);
            ATerm u_18 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(u_18) == AT_LIST) && !(ATisEmpty(u_18))))
              {
                ATerm x_18 = ATgetFirst((ATermList) u_18);
                ATerm y_18 = (ATerm) ATgetNext((ATermList) u_18);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm z_18 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(g_4, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = z_18;
            }
          t = term_c_18;
          r_0 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, c_2), term_a_19);
          s_0 = t;
          t = SSL_printnl(r_0, s_0);
          t = (ATerm) ATinsert(ATinsert(ATempty, c_2), term_a_19);
          t = giving_up_0_0(t);
        }
        ;
        LocalPopChoice(o_18);
      }
    else
      {
        t = n_18;
        {
          ATerm h_1 = NULL,i_1 = NULL;
          t = c_2;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm b_19 = ATgetFirst((ATermList) t);
              if(match_cons(b_19, sym__2))
                {
                  h_1 = ATgetArgument(b_19, 0);
                  i_1 = ATgetArgument(b_19, 1);
                }
              else
                _fail(t);
              {
                ATerm c_19 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(c_19) != AT_LIST) || !(ATisEmpty(c_19))))
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
ATerm Rec_2_0 (ATerm l_97 (ATerm), ATerm m_97 (ATerm), ATerm t)
{
  ATerm i_2 = NULL,j_2 = NULL,k_2 = NULL,m_2 = NULL,o_2 = NULL,p_2 = NULL,l_0 = NULL,p_0 = NULL;
  p_2 = t;
  if(match_cons(t, sym_Rec_2))
    {
      j_2 = ATgetArgument(t, 0);
      k_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_2);
  i_2 = t;
  t = j_2;
  t = l_97(t);
  m_2 = t;
  t = k_2;
  t = m_97(t);
  o_2 = t;
  p_0 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, m_2, o_2);
  l_0 = t;
  t = SSLsetAnnotations(l_0, i_2);
  return(t);
}
ATerm SDefT_4_0 (ATerm g_99 (ATerm), ATerm h_99 (ATerm), ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,c_3 = NULL,q_0 = NULL,u_0 = NULL;
  c_3 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      t_2 = ATgetArgument(t, 0);
      u_2 = ATgetArgument(t, 1);
      v_2 = ATgetArgument(t, 2);
      w_2 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_3);
  s_2 = t;
  t = t_2;
  t = g_99(t);
  x_2 = t;
  t = u_2;
  t = h_99(t);
  y_2 = t;
  t = v_2;
  t = i_99(t);
  z_2 = t;
  t = w_2;
  t = j_99(t);
  a_3 = t;
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, x_2, y_2, z_2, a_3);
  q_0 = t;
  t = SSLsetAnnotations(q_0, s_2);
  return(t);
}
ATerm SDef_3_0 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,v_0 = NULL,w_0 = NULL;
  o_3 = t;
  if(match_cons(t, sym_SDef_3))
    {
      g_3 = ATgetArgument(t, 0);
      i_3 = ATgetArgument(t, 1);
      j_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_3);
  f_3 = t;
  t = g_3;
  t = d_99(t);
  k_3 = t;
  t = i_3;
  t = e_99(t);
  m_3 = t;
  t = j_3;
  t = f_99(t);
  n_3 = t;
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, k_3, m_3, n_3);
  v_0 = t;
  t = SSLsetAnnotations(v_0, f_3);
  return(t);
}
ATerm Let_2_0 (ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,x_3 = NULL,y_3 = NULL,e_1 = NULL,f_1 = NULL;
  y_3 = t;
  if(match_cons(t, sym_Let_2))
    {
      t_3 = ATgetArgument(t, 0);
      u_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_3);
  s_3 = t;
  t = t_3;
  t = o_96(t);
  v_3 = t;
  t = u_3;
  t = p_96(t);
  x_3 = t;
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, v_3, x_3);
  e_1 = t;
  t = SSLsetAnnotations(e_1, s_3);
  return(t);
}
ATerm sboundin_3_0 (ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm l_109 (ATerm), ATerm t)
{
  ATerm f_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(j_109, j_109, t);
      ;
      LocalPopChoice(m_19);
    }
  else
    {
      t = f_19;
      {
        ATerm n_19 = t;
        int o_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(l_109, l_109, j_109, t);
            ;
            LocalPopChoice(o_19);
          }
        else
          {
            t = n_19;
            {
              ATerm t_19 = t;
              int w_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(l_109, l_109, l_109, j_109, t);
                  ;
                  LocalPopChoice(w_19);
                }
              else
                {
                  t = t_19;
                  t = Rec_2_0(l_109, j_109, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm e_4 = NULL;
  ATerm a_20 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          e_4 = ATgetArgument(t, 0);
          {
            ATerm d_20 = ATgetArgument(t, 1);
          }
          {
            ATerm h_20 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_20);
      t = e_4;
    }
  else
    {
      t = a_20;
      if(match_cons(t, sym_SDefT_4))
        {
          e_4 = ATgetArgument(t, 0);
          {
            ATerm i_20 = ATgetArgument(t, 1);
          }
          {
            ATerm j_20 = ATgetArgument(t, 2);
          }
          {
            ATerm k_20 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = e_4;
    }
  return(t);
}
ATerm c_8 (ATerm x_52, ATerm w_52, ATerm t)
{
  t = x_52;
  t = map_1_0(h_4, t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm l_3 = NULL,p_3 = NULL;
  if(match_cons(t, sym__2))
    {
      l_3 = ATgetArgument(t, 0);
      p_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_9(m_4, l_3, p_3, t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm w_3 = NULL;
  if(match_cons(t, sym__2))
    {
      w_3 = ATgetArgument(t, 0);
      if((w_3 != ATgetArgument(t, 1)))
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
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL;
  if(match_cons(t, sym__2))
    {
      s_4 = ATgetArgument(t, 0);
      t_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_9(p_4, s_4, t_4, t);
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm u_4 = NULL;
  if(match_cons(t, sym__2))
    {
      u_4 = ATgetArgument(t, 0);
      if((u_4 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm e_6 = NULL;
  if(match_cons(t, sym__2))
    {
      e_6 = ATgetArgument(t, 0);
      if((e_6 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm m_118 (ATerm), ATerm n_118 (ATerm), ATerm o_118 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm p_118 (ATerm), ATerm t)
{
  ATerm g_6 (ATerm t)
  {
    ATerm a_5 = NULL,g_5 = NULL,h_5 = NULL;
    a_5 = t;
    {
      ATerm m_20 = t;
      int o_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_118(t);
          ;
          LocalPopChoice(o_20);
        }
      else
        {
          t = m_20;
          t = (ATerm) ATempty;
        }
      g_5 = t;
      t = a_5;
      {
        ATerm p_20 = t;
        int s_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_5 = NULL,w_1 = NULL,l_2 = NULL;
            t = n_118(t);
            q_5 = t;
            t = a_5;
            {
              ATerm i_4 (ATerm t)
              {
                ATerm m_1 = NULL;
                t = g_6(t);
                m_1 = t;
                t = (ATerm) ATmakeAppl(sym__2, m_1, q_5);
                t = v_8(p_118, m_1, q_5, t);
                return(t);
              }
              t = o_118(i_4, g_6, j_4, t);
              w_1 = t;
              t = SSL_explode_term(w_1);
              if(match_cons(t, sym__2))
                {
                  ATerm t_20 = ATgetArgument(t, 0);
                  l_2 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = l_2;
              t = foldr_3_0(k_4, l_4, _id, t);
            }
            ;
            LocalPopChoice(s_20);
          }
        else
          {
            t = p_20;
            {
              ATerm c_4 = NULL;
              t = SSL_explode_term(a_5);
              if(match_cons(t, sym__2))
                {
                  ATerm v_20 = ATgetArgument(t, 0);
                  c_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = c_4;
              t = foldr_3_0(n_4, o_4, g_6, t);
            }
          }
        h_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_5, h_5);
        t = j_9(q_4, g_5, h_5, t);
      }
    }
    return(t);
  }
  t = g_6(t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm l_6 = NULL,m_6 = NULL,n_6 = NULL,r_6 = NULL,t_6 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm w_20 = ATgetArgument(t, 0);
      if(match_cons(w_20, sym_SVar_1))
        {
          l_6 = ATgetArgument(w_20, 0);
        }
      else
        _fail(t);
      m_6 = ATgetArgument(t, 1);
      n_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_6;
  t = foldr_3_0(z_4, b_5, c_5, t);
  r_6 = t;
  t = n_6;
  t = foldr_3_0(d_5, e_5, f_5, t);
  t_6 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, l_6, (ATerm) ATmakeAppl(sym__2, r_6, t_6)));
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL,f_7 = NULL,h_7 = NULL;
  b_7 = t;
  if(match_cons(t, sym_Let_2))
    {
      c_7 = ATgetArgument(t, 0);
      d_7 = ATgetArgument(t, 1);
      t = b_7;
      t = c_8(c_7, d_7, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          c_7 = ATgetArgument(t, 0);
          d_7 = ATgetArgument(t, 1);
          f_7 = ATgetArgument(t, 2);
          t = d_7;
          t = map_1_0(i_5, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              c_7 = ATgetArgument(t, 0);
              d_7 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, c_7);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  c_7 = ATgetArgument(t, 0);
                  d_7 = ATgetArgument(t, 1);
                  f_7 = ATgetArgument(t, 2);
                  h_7 = ATgetArgument(t, 3);
                  t = d_7;
                  t = map_1_0(j_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      c_7 = ATgetArgument(t, 0);
                      d_7 = ATgetArgument(t, 1);
                      f_7 = ATgetArgument(t, 2);
                      h_7 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_7;
                  t = map_1_0(k_5, t);
                }
            }
        }
    }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm a_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_20 = ATgetArgument(t, 0);
      if(match_cons(x_20, sym__2))
        {
          a_14 = ATgetArgument(x_20, 0);
          {
            ATerm y_20 = ATgetArgument(x_20, 1);
          }
        }
      else
        _fail(t);
      if((a_14 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_c_21;
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm u_6 = NULL,v_6 = NULL;
  if(match_cons(t, sym__2))
    {
      u_6 = ATgetArgument(t, 0);
      v_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_9(u_6, v_6, t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_f_18;
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = term_c_21;
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm w_6 = NULL,x_6 = NULL;
  if(match_cons(t, sym__2))
    {
      w_6 = ATgetArgument(t, 0);
      x_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_9(w_6, x_6, t);
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_f_18;
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm f_10 = NULL;
  ATerm h_21 = t;
  int i_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_10 = ATgetArgument(t, 0);
          {
            ATerm k_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_21);
      t = f_10;
    }
  else
    {
      t = h_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_10;
    }
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm s_11 = NULL;
  ATerm n_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_11 = ATgetArgument(t, 0);
          {
            ATerm s_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_21);
      t = s_11;
    }
  else
    {
      t = n_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_11;
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm v_13 = NULL;
  ATerm u_21 = t;
  int v_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_13 = ATgetArgument(t, 0);
          {
            ATerm z_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_21);
      t = v_13;
    }
  else
    {
      t = u_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_13;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(r_4, v_4, sboundin_3_0, x_4, t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_k_22;
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm e_14 = NULL,m_14 = NULL,w_4 = NULL;
  e_14 = t;
  t = SSL_explode_term(e_14);
  if(match_cons(t, sym__2))
    {
      ATerm l_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_22 = ATgetArgument(t, 1);
        if(((ATgetType(u_22) == AT_LIST) && !(ATisEmpty(u_22))))
          {
            m_14 = ATgetFirst((ATermList) u_22);
            {
              ATerm v_22 = (ATerm) ATgetNext((ATermList) u_22);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(e_14);
  if(match_cons(t, sym__2))
    {
      ATerm d_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_23 = ATgetArgument(t, 1);
        if(((ATgetType(f_23) == AT_LIST) && !(ATisEmpty(f_23))))
          {
            ATerm g_23 = ATgetFirst((ATermList) f_23);
            ATerm h_23 = (ATerm) ATgetNext((ATermList) f_23);
            if(((ATgetType(h_23) == AT_LIST) && !(ATisEmpty(h_23))))
              {
                w_4 = ATgetFirst((ATermList) h_23);
                {
                  ATerm k_23 = (ATerm) ATgetNext((ATermList) h_23);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, m_14, w_4);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(l_5, t_5, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL,e_15 = NULL,l_15 = NULL,s_15 = NULL;
  u_14 = t;
  if(match_cons(t, sym__2))
    {
      v_14 = ATgetArgument(t, 0);
      e_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_15;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_15 = ATgetFirst((ATermList) t);
      s_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_15;
  if(match_cons(t, sym__2))
    {
      s_14 = ATgetArgument(t, 0);
      t_14 = ATgetArgument(t, 1);
      {
        ATerm o_23 = t;
        int q_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_14;
            if((v_14 != t))
              {
                _fail(t);
              }
            t = t_14;
            ;
            LocalPopChoice(q_23);
          }
        else
          {
            t = o_23;
            t = (ATerm) ATmakeAppl(sym__2, v_14, s_15);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, v_14, s_15);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm w_111 (ATerm), ATerm t)
{
  ATerm g_16 (ATerm t)
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_111(t);
        ;
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        t = SRTS_all(g_16, t);
      }
    return(t);
  }
  t = g_16(t);
  return(t);
}
ATerm u_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_23 = ATgetArgument(t, 0);
      if(((ATgetType(v_23) != AT_LIST) || !(ATisEmpty(v_23))))
        _fail(t);
      {
        ATerm z_23 = ATgetArgument(t, 1);
        if(((ATgetType(z_23) != AT_LIST) || !(ATisEmpty(z_23))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm t_16 = NULL,x_16 = NULL,a_17 = NULL,e_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_24 = ATgetArgument(t, 0);
      if(((ATgetType(a_24) == AT_LIST) && !(ATisEmpty(a_24))))
        {
          t_16 = ATgetFirst((ATermList) a_24);
          x_16 = (ATerm) ATgetNext((ATermList) a_24);
        }
      else
        _fail(t);
      {
        ATerm c_24 = ATgetArgument(t, 1);
        if(((ATgetType(c_24) == AT_LIST) && !(ATisEmpty(c_24))))
          {
            a_17 = ATgetFirst((ATermList) c_24);
            e_17 = (ATerm) ATgetNext((ATermList) c_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_16, a_17), (ATerm) ATmakeAppl(sym__2, x_16, e_17));
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL;
  if(match_cons(t, sym__2))
    {
      g_17 = ATgetArgument(t, 0);
      h_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_17), g_17);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL;
  i_16 = t;
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_24 = ATgetArgument(t, 0);
            ATerm g_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(e_24);
        t = i_16;
      }
    else
      {
        t = d_24;
        {
          ATerm s_16 = NULL;
          if(match_cons(t, sym__3))
            {
              j_16 = ATgetArgument(t, 0);
              k_16 = ATgetArgument(t, 1);
              l_16 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, j_16, k_16);
          t = genzip_4_0(u_5, w_5, x_5, _id, t);
          s_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_16, l_16);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm n_109 (ATerm), ATerm o_109 (ATerm), ATerm t)
{
  ATerm i_17 = NULL,t_17 = NULL;
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      t_17 = ATgetArgument(t, 0);
      i_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_17;
  {
    ATerm y_5 (ATerm t)
    {
      ATerm y_4 = NULL;
      t = n_109(t);
      y_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_4, t_17);
      t = lookup_0_0(t);
      t = o_109(t);
      return(t);
    }
    t = alltd_1_0(y_5, t);
  }
  return(t);
}
ATerm VarDec_2_0 (ATerm z_98 (ATerm), ATerm a_99 (ATerm), ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,j_1 = NULL,k_1 = NULL;
  z_17 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      v_17 = ATgetArgument(t, 0);
      w_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_17);
  u_17 = t;
  t = v_17;
  t = z_98(t);
  x_17 = t;
  t = w_17;
  t = a_99(t);
  y_17 = t;
  k_1 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, x_17, y_17);
  j_1 = t;
  t = SSLsetAnnotations(j_1, u_17);
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = VarDec_2_0(new_0_0, _id, t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = VarDec_2_0(new_0_0, _id, t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm h_19 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      h_19 = ATgetArgument(t, 0);
      {
        ATerm h_24 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_19), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm i_19 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      i_19 = ATgetArgument(t, 0);
      {
        ATerm i_24 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, i_19);
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm s_19 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      s_19 = ATgetArgument(t, 0);
      {
        ATerm l_24 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = s_19;
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm u_19 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      u_19 = ATgetArgument(t, 0);
      {
        ATerm q_24 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = u_19;
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm v_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      x_19 = ATgetArgument(t, 0);
      z_19 = ATgetArgument(t, 1);
      v_19 = ATgetArgument(t, 2);
      t = x_19;
      if(match_cons(t, sym_SVar_1))
        {
          y_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_19;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_19;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_19;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          x_19 = ATgetArgument(t, 0);
          z_19 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_19;
      if(match_cons(t, sym_SVar_1))
        {
          y_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_19;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_19;
    }
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm c_20 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_20;
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,v_18 = NULL,w_18 = NULL,d_19 = NULL,e_19 = NULL,g_19 = NULL;
  q_18 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_24 = ATgetFirst((ATermList) t);
      if(match_cons(s_24, sym_SDefT_4))
        {
          r_18 = ATgetArgument(s_24, 0);
          s_18 = ATgetArgument(s_24, 1);
          t_18 = ATgetArgument(s_24, 2);
          {
            ATerm w_24 = ATgetArgument(s_24, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm t_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_18;
  t = map_1_0(a_6, t);
  v_18 = t;
  t = t_18;
  t = map_1_0(b_6, t);
  w_18 = t;
  t = v_18;
  t = map_1_0(d_6, t);
  d_19 = t;
  t = w_18;
  t = map_1_0(p_6, t);
  e_19 = t;
  t = q_18;
  {
    ATerm q_6 (ATerm t)
    {
      ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm y_24 = ATgetArgument(t, 0);
          j_19 = ATgetArgument(t, 1);
          k_19 = ATgetArgument(t, 2);
          l_19 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = k_19;
      t = map_1_0(s_6, t);
      p_19 = t;
      t = j_19;
      t = map_1_0(y_6, t);
      q_19 = t;
      t = (ATerm) ATmakeAppl(sym__3, q_19, d_19, l_19);
      t = substitute_2_0(z_6, _id, t);
      r_19 = t;
      t = (ATerm) ATmakeAppl(sym__3, p_19, e_19, r_19);
      t = substitute_2_0(a_7, _id, t);
      return(t);
    }
    t = map_1_0(q_6, t);
    t = choices_0_0(t);
    g_19 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, r_18, v_18, w_18, g_19);
  }
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL;
  f_20 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      g_20 = ATgetArgument(t, 0);
      e_20 = ATgetArgument(t, 1);
      {
        ATerm l_20 = NULL,n_20 = NULL,q_20 = NULL,r_20 = NULL;
        t = f_20;
        t = new_0_0(t);
        l_20 = t;
        t = new_0_0(t);
        n_20 = t;
        t = new_0_0(t);
        q_20 = t;
        t = new_0_0(t);
        r_20 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_20), q_20), n_20), l_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, l_20), (ATerm) ATmakeAppl(sym_Var_1, q_20))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, g_20, (ATerm)ATmakeAppl(sym_Var_1, l_20), (ATerm) ATmakeAppl(sym_Var_1, n_20)), (ATerm) ATmakeAppl(sym_BAM_3, e_20, (ATerm)ATmakeAppl(sym_Var_1, q_20), (ATerm) ATmakeAppl(sym_Var_1, r_20)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_z_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, r_20)), (ATerm) ATmakeAppl(sym_Var_1, n_20))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          g_20 = ATgetArgument(t, 0);
          {
            ATerm u_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL;
            t = f_20;
            t = new_0_0(t);
            u_20 = t;
            t = g_20;
            {
              ATerm e_7 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((z_20 != NULL) && (z_20 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      z_20 = ATgetArgument(t, 0);
                    if(((a_21 != NULL) && (a_21 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      a_21 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, u_20);
                return(t);
              }
              t = oncetd_1_0(e_7, t);
              b_21 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_z_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_21)), not_null(z_20))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_20)), (ATerm) ATmakeAppl(sym_Build_1, b_21))));
            }
          }
        }
      else
        {
          ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,j_21 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              g_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_20;
          t = new_0_0(t);
          d_21 = t;
          t = new_0_0(t);
          e_21 = t;
          t = g_20;
          {
            ATerm g_7 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((f_21 != NULL) && (f_21 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    f_21 = ATgetArgument(t, 0);
                  if(((g_21 != NULL) && (g_21 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    g_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, d_21);
              return(t);
            }
            t = oncetd_1_0(g_7, t);
            j_21 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, j_21), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, e_21)), (ATerm) ATmakeAppl(sym_PrimT_3, term_a_25, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, e_21))))), (ATerm)ATmakeAppl(sym_Var_1, d_21), (ATerm) ATmakeAppl(sym_Op_2, term_b_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_21)), not_null(f_21)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL;
  l_21 = t;
  if(match_cons(t, sym_Match_1))
    {
      m_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL,t_21 = NULL;
        t = l_21;
        t = new_0_0(t);
        o_21 = t;
        t = m_21;
        {
          ATerm i_7 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((q_21 != NULL) && (q_21 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  q_21 = ATgetArgument(t, 0);
                if(((p_21 != NULL) && (p_21 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  p_21 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, o_21), not_null(q_21));
            return(t);
          }
          t = pat_td_1_0(i_7, t);
          t_21 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, t_21), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_h_25, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, o_21))), (ATerm) ATmakeAppl(sym_Match_1, not_null(p_21))))));
        }
        ;
        LocalPopChoice(g_25);
      }
    else
      {
        t = f_25;
        {
          ATerm i_25 = t;
          int j_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
              t = l_21;
              t = new_0_0(t);
              w_21 = t;
              t = m_21;
              {
                ATerm j_7 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((x_21 != NULL) && (x_21 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        x_21 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, w_21);
                  return(t);
                }
                t = pat_td_1_0(j_7, t);
                y_21 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, y_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, w_21)), not_null(x_21))));
              }
              ;
              LocalPopChoice(j_25);
            }
          else
            {
              t = i_25;
              {
                ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL;
                t = l_21;
                t = new_0_0(t);
                a_22 = t;
                t = m_21;
                {
                  ATerm l_7 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((b_22 != NULL) && (b_22 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          b_22 = ATgetArgument(t, 0);
                        if(((c_22 != NULL) && (c_22 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          c_22 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, a_22);
                    return(t);
                  }
                  t = pat_td_1_0(l_7, t);
                  d_22 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, d_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, a_22)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_22)), not_null(b_22)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm As_2_0 (ATerm v_93 (ATerm), ATerm w_93 (ATerm), ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,l_1 = NULL,n_1 = NULL;
  j_22 = t;
  if(match_cons(t, sym_As_2))
    {
      f_22 = ATgetArgument(t, 0);
      g_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_22);
  e_22 = t;
  t = f_22;
  t = v_93(t);
  h_22 = t;
  t = g_22;
  t = w_93(t);
  i_22 = t;
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, h_22, i_22);
  l_1 = t;
  t = SSLsetAnnotations(l_1, e_22);
  return(t);
}
ATerm CallT_3_0 (ATerm s_96 (ATerm), ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,o_1 = NULL,p_1 = NULL;
  t_22 = t;
  if(match_cons(t, sym_CallT_3))
    {
      n_22 = ATgetArgument(t, 0);
      o_22 = ATgetArgument(t, 1);
      p_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_22);
  m_22 = t;
  t = n_22;
  t = s_96(t);
  q_22 = t;
  t = o_22;
  t = t_96(t);
  r_22 = t;
  t = p_22;
  t = u_96(t);
  s_22 = t;
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, q_22, r_22, s_22);
  o_1 = t;
  t = SSLsetAnnotations(o_1, m_22);
  return(t);
}
ATerm PrimT_3_0 (ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,e_23 = NULL,q_1 = NULL,r_1 = NULL;
  e_23 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      x_22 = ATgetArgument(t, 0);
      y_22 = ATgetArgument(t, 1);
      z_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_23);
  w_22 = t;
  t = x_22;
  t = u_97(t);
  a_23 = t;
  t = y_22;
  t = v_97(t);
  b_23 = t;
  t = z_22;
  t = w_97(t);
  c_23 = t;
  r_1 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, a_23, b_23, c_23);
  q_1 = t;
  t = SSLsetAnnotations(q_1, w_22);
  return(t);
}
ATerm Explode_2_0 (ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL,p_23 = NULL,s_1 = NULL,t_1 = NULL;
  p_23 = t;
  if(match_cons(t, sym_Explode_2))
    {
      j_23 = ATgetArgument(t, 0);
      l_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_23);
  i_23 = t;
  t = j_23;
  t = o_93(t);
  m_23 = t;
  t = l_23;
  t = p_93(t);
  n_23 = t;
  t_1 = t;
  t = (ATerm) ATmakeAppl(sym_Explode_2, m_23, n_23);
  s_1 = t;
  t = SSLsetAnnotations(s_1, i_23);
  return(t);
}
ATerm Op_2_0 (ATerm k_93 (ATerm), ATerm l_93 (ATerm), ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL,b_24 = NULL,u_1 = NULL,v_1 = NULL;
  b_24 = t;
  if(match_cons(t, sym_Op_2))
    {
      u_23 = ATgetArgument(t, 0);
      w_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_24);
  t_23 = t;
  t = u_23;
  t = k_93(t);
  x_23 = t;
  t = w_23;
  t = l_93(t);
  y_23 = t;
  v_1 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, x_23, y_23);
  u_1 = t;
  t = SSLsetAnnotations(u_1, t_23);
  return(t);
}
ATerm pat_td_1_0 (ATerm s_105 (ATerm), ATerm t)
{
  ATerm k_25 = t;
  int l_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_105(t);
      ;
      LocalPopChoice(l_25);
    }
  else
    {
      t = k_25;
      {
        ATerm q_25 = t;
        int t_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_7 (ATerm t)
            {
              ATerm u_7 (ATerm t)
              {
                t = pat_td_1_0(s_105, t);
                return(t);
              }
              t = fetch_1_0(u_7, t);
              return(t);
            }
            t = Op_2_0(_id, m_7, t);
            ;
            LocalPopChoice(t_25);
          }
        else
          {
            t = q_25;
            {
              ATerm u_25 = t;
              int v_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_8 (ATerm t)
                  {
                    t = pat_td_1_0(s_105, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, e_8, t);
                  ;
                  LocalPopChoice(v_25);
                }
              else
                {
                  t = u_25;
                  {
                    ATerm w_25 = t;
                    int x_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm f_8 (ATerm t)
                        {
                          t = pat_td_1_0(s_105, t);
                          return(t);
                        }
                        t = Explode_2_0(f_8, _id, t);
                        ;
                        LocalPopChoice(x_25);
                      }
                    else
                      {
                        t = w_25;
                        {
                          ATerm y_25 = t;
                          int z_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_8 (ATerm t)
                              {
                                ATerm h_8 (ATerm t)
                                {
                                  t = pat_td_1_0(s_105, t);
                                  return(t);
                                }
                                t = fetch_1_0(h_8, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, g_8, t);
                              ;
                              LocalPopChoice(z_25);
                            }
                          else
                            {
                              t = y_25;
                              {
                                ATerm a_26 = t;
                                int b_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm m_8 (ATerm t)
                                    {
                                      ATerm n_8 (ATerm t)
                                      {
                                        t = pat_td_1_0(s_105, t);
                                        return(t);
                                      }
                                      t = fetch_1_0(n_8, t);
                                      return(t);
                                    }
                                    t = CallT_3_0(_id, _id, m_8, t);
                                    ;
                                    LocalPopChoice(b_26);
                                  }
                                else
                                  {
                                    t = a_26;
                                    {
                                      ATerm r_8 (ATerm t)
                                      {
                                        t = pat_td_1_0(s_105, t);
                                        return(t);
                                      }
                                      t = As_2_0(_id, r_8, t);
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
  ATerm j_24 = NULL,k_24 = NULL;
  j_24 = t;
  if(match_cons(t, sym_Build_1))
    {
      k_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL;
        t = j_24;
        t = new_0_0(t);
        m_24 = t;
        t = k_24;
        {
          ATerm s_8 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((n_24 != NULL) && (n_24 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  n_24 = ATgetArgument(t, 0);
                if(((o_24 != NULL) && (o_24 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  o_24 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, m_24);
            return(t);
          }
          t = pat_td_1_0(s_8, t);
          p_24 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_e_26, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_24)), not_null(n_24))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_24)))), (ATerm) ATmakeAppl(sym_Build_1, p_24)));
        }
        ;
        LocalPopChoice(d_26);
      }
    else
      {
        t = c_26;
        {
          ATerm i_26 = t;
          int k_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_24 = NULL,u_24 = NULL,v_24 = NULL;
              t = j_24;
              t = new_0_0(t);
              r_24 = t;
              t = k_24;
              {
                ATerm t_8 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((u_24 != NULL) && (u_24 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        u_24 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, r_24);
                  return(t);
                }
                t = pat_td_1_0(t_8, t);
                v_24 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_24), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_24)))), (ATerm) ATmakeAppl(sym_Build_1, v_24)));
              }
              ;
              LocalPopChoice(k_26);
            }
          else
            {
              t = i_26;
              {
                ATerm x_24 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL;
                t = j_24;
                t = new_0_0(t);
                x_24 = t;
                t = k_24;
                {
                  ATerm u_8 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((c_25 != NULL) && (c_25 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          c_25 = ATgetArgument(t, 0);
                        if(((d_25 != NULL) && (d_25 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          d_25 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, x_24);
                    return(t);
                  }
                  t = pat_td_1_0(u_8, t);
                  e_25 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(c_25), not_null(d_25), (ATerm) ATmakeAppl(sym_Var_1, x_24))), (ATerm) ATmakeAppl(sym_Build_1, e_25)));
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
  ATerm l_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm w_8 (ATerm t)
        {
          ATerm n_26 = t;
          int o_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(o_26);
            }
          else
            {
              t = n_26;
            }
          return(t);
        }
        t = Cons_2_0(_id, w_8, t);
      }
      ;
      LocalPopChoice(m_26);
    }
  else
    {
      t = l_26;
      {
        ATerm x_8 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, x_8, t);
      }
    }
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm h_26 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, h_26, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_26), term_u_26));
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm v_26 = t;
  int w_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_26 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, j_26, term_u_26);
      ;
      LocalPopChoice(w_26);
    }
  else
    {
      t = v_26;
    }
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm t_26 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      t_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, t_26, term_u_26);
  return(t);
}
ATerm d_10 (ATerm t)
{
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_26 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, z_26, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_26), term_u_26));
      ;
      LocalPopChoice(y_26);
    }
  else
    {
      t = x_26;
    }
  return(t);
}
ATerm e_10 (ATerm t)
{
  ATerm h_27 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, h_27, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_26), term_u_26));
  return(t);
}
ATerm g_10 (ATerm t)
{
  ATerm a_27 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_27 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, l_27, term_u_26);
      ;
      LocalPopChoice(b_27);
    }
  else
    {
      t = a_27;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,r_25 = NULL,s_25 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      r_25 = ATgetArgument(t, 0);
      s_25 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, r_25, s_25);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          r_25 = ATgetArgument(t, 0);
          t = r_25;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_25 = ATgetFirst((ATermList) t);
              n_25 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, m_25, (ATerm) ATmakeAppl(sym_LChoices_1, n_25));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_k_22;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              r_25 = ATgetArgument(t, 0);
              t = r_25;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_25 = ATgetFirst((ATermList) t);
                  n_25 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, m_25, (ATerm) ATmakeAppl(sym_Choices_1, n_25));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_k_22;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  r_25 = ATgetArgument(t, 0);
                  t = r_25;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      m_25 = ATgetFirst((ATermList) t);
                      n_25 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_25, (ATerm) ATmakeAppl(sym_Seqs_1, n_25));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_c_27;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      r_25 = ATgetArgument(t, 0);
                      s_25 = ATgetArgument(t, 1);
                      p_25 = ATgetArgument(t, 2);
                      o_25 = ATgetArgument(t, 3);
                      {
                        ATerm f_26 = NULL,g_26 = NULL;
                        t = s_25;
                        t = map1_1_0(d_9, t);
                        f_26 = t;
                        t = p_25;
                        t = map1_1_0(f_9, t);
                        g_26 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, r_25, f_26, g_26, o_25);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          r_25 = ATgetArgument(t, 0);
                          s_25 = ATgetArgument(t, 1);
                          p_25 = ATgetArgument(t, 2);
                          o_25 = ATgetArgument(t, 3);
                          {
                            ATerm d_27 = t;
                            int e_27 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm r_26 = NULL,s_26 = NULL;
                                t = p_25;
                                t = map1_1_0(k_9, t);
                                r_26 = t;
                                t = s_25;
                                t = map_1_0(d_10, t);
                                s_26 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, r_25, s_26, r_26, o_25);
                                ;
                                LocalPopChoice(e_27);
                              }
                            else
                              {
                                t = d_27;
                                {
                                  ATerm f_27 = NULL,g_27 = NULL;
                                  t = s_25;
                                  t = map1_1_0(e_10, t);
                                  f_27 = t;
                                  t = p_25;
                                  t = map_1_0(g_10, t);
                                  g_27 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, r_25, f_27, g_27, o_25);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              r_25 = ATgetArgument(t, 0);
                              s_25 = ATgetArgument(t, 1);
                              p_25 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, s_25, (ATerm) ATmakeAppl(sym_Op_2, term_b_25, (ATerm) ATinsert(ATinsert(ATempty, p_25), r_25)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  r_25 = ATgetArgument(t, 0);
                                  s_25 = ATgetArgument(t, 1);
                                  p_25 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, p_25)), r_25), (ATerm) ATmakeAppl(sym_Build_1, s_25)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      r_25 = ATgetArgument(t, 0);
                                      s_25 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, r_25, (ATerm) ATmakeAppl(sym_Match_1, s_25));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          r_25 = ATgetArgument(t, 0);
                                          s_25 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_25), s_25);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              r_25 = ATgetArgument(t, 0);
                                              s_25 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_25), r_25);
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
ATerm i_10 (ATerm t)
{
  ATerm i_27 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_27;
    }
  return(t);
}
ATerm j_10 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_27;
  return(t);
}
ATerm k_10 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_28 = ATgetFirst((ATermList) t);
      n_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_28, n_28);
  return(t);
}
ATerm l_10 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_27 = ATgetArgument(t, 0);
      if(match_cons(k_27, sym__2))
        {
          o_28 = ATgetArgument(k_27, 0);
          p_28 = ATgetArgument(k_27, 1);
        }
      else
        _fail(t);
      {
        ATerm m_27 = ATgetArgument(t, 1);
        if(match_cons(m_27, sym__2))
          {
            q_28 = ATgetArgument(m_27, 0);
            r_28 = ATgetArgument(m_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_28), o_28), (ATerm) ATinsert(CheckATermList(r_28), p_28));
  return(t);
}
ATerm m_10 (ATerm t)
{
  t = genzip_4_0(n_10, o_10, p_10, _id, t);
  return(t);
}
ATerm n_10 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_27;
  return(t);
}
ATerm o_10 (ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_28 = ATgetFirst((ATermList) t);
      t_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_28, t_28);
  return(t);
}
ATerm p_10 (ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_27 = ATgetArgument(t, 0);
      if(match_cons(n_27, sym__2))
        {
          w_28 = ATgetArgument(n_27, 0);
          x_28 = ATgetArgument(n_27, 1);
        }
      else
        _fail(t);
      {
        ATerm o_27 = ATgetArgument(t, 1);
        if(match_cons(o_27, sym__2))
          {
            y_28 = ATgetArgument(o_27, 0);
            z_28 = ATgetArgument(o_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_28), w_28), (ATerm) ATinsert(CheckATermList(z_28), x_28));
  return(t);
}
ATerm l_8 (ATerm q_45, ATerm r_45, ATerm s_45, ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,l_28 = NULL;
  t = s_45;
  t = fetch_1_0(i_10, t);
  t = s_45;
  t = genzip_4_0(j_10, k_10, l_10, LiftPrimArg_0_0, t);
  t = _2_0(concat_0_0, m_10, t);
  if(match_cons(t, sym__2))
    {
      f_28 = ATgetArgument(t, 0);
      {
        ATerm p_27 = ATgetArgument(t, 1);
        if(match_cons(p_27, sym__2))
          {
            g_28 = ATgetArgument(p_27, 0);
            l_28 = ATgetArgument(p_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, f_28, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_28), (ATerm) ATmakeAppl(sym_CallT_3, q_45, r_45, l_28)));
  return(t);
}
ATerm m_29 (ATerm g_29, ATerm t)
{
  ATerm i_29 = NULL;
  t = g_29;
  {
    ATerm q_27 = t;
    if((PushChoice() == 0))
      {
        t = Var_1_0(_id, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_27;
      }
    t = new_0_0(t);
    i_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, i_29), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, g_29), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, i_29)))), (ATerm) ATmakeAppl(sym_Var_1, i_29)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL;
  j_29 = t;
  if(match_cons(t, sym_Var_1))
    {
      k_29 = ATgetArgument(t, 0);
      {
        ATerm r_27 = t;
        int s_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_29(j_29, t);
            ;
            LocalPopChoice(s_27);
          }
        else
          {
            t = r_27;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_c_27, (ATerm) ATmakeAppl(sym_Var_1, k_29)));
          }
      }
    }
  else
    {
      t = m_29(j_29, t);
    }
  return(t);
}
ATerm Var_1_0 (ATerm e_93 (ATerm), ATerm t)
{
  ATerm n_29 = NULL,r_29 = NULL,w_29 = NULL,x_29 = NULL,x_1 = NULL,y_1 = NULL;
  x_29 = t;
  if(match_cons(t, sym_Var_1))
    {
      r_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_29);
  n_29 = t;
  t = r_29;
  t = e_93(t);
  w_29 = t;
  y_1 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_29);
  x_1 = t;
  t = SSLsetAnnotations(x_1, n_29);
  return(t);
}
ATerm q_10 (ATerm t)
{
  ATerm t_27 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_27;
    }
  return(t);
}
ATerm r_10 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_27;
  return(t);
}
ATerm s_10 (ATerm t)
{
  ATerm p_5 = NULL,r_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_5 = ATgetFirst((ATermList) t);
      r_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_5, r_5);
  return(t);
}
ATerm t_10 (ATerm t)
{
  ATerm s_5 = NULL,v_5 = NULL,z_5 = NULL,c_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_27 = ATgetArgument(t, 0);
      if(match_cons(u_27, sym__2))
        {
          s_5 = ATgetArgument(u_27, 0);
          v_5 = ATgetArgument(u_27, 1);
        }
      else
        _fail(t);
      {
        ATerm v_27 = ATgetArgument(t, 1);
        if(match_cons(v_27, sym__2))
          {
            z_5 = ATgetArgument(v_27, 0);
            c_6 = ATgetArgument(v_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_5), s_5), (ATerm) ATinsert(CheckATermList(c_6), v_5));
  return(t);
}
ATerm u_10 (ATerm t)
{
  t = genzip_4_0(w_10, x_10, y_10, _id, t);
  return(t);
}
ATerm w_10 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_27;
  return(t);
}
ATerm x_10 (ATerm t)
{
  ATerm f_6 = NULL,h_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_6 = ATgetFirst((ATermList) t);
      h_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_6, h_6);
  return(t);
}
ATerm y_10 (ATerm t)
{
  ATerm i_6 = NULL,j_6 = NULL,k_6 = NULL,o_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_27 = ATgetArgument(t, 0);
      if(match_cons(w_27, sym__2))
        {
          i_6 = ATgetArgument(w_27, 0);
          j_6 = ATgetArgument(w_27, 1);
        }
      else
        _fail(t);
      {
        ATerm x_27 = ATgetArgument(t, 1);
        if(match_cons(x_27, sym__2))
          {
            k_6 = ATgetArgument(x_27, 0);
            o_6 = ATgetArgument(x_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_6), i_6), (ATerm) ATinsert(CheckATermList(o_6), j_6));
  return(t);
}
ATerm z_10 (ATerm t)
{
  ATerm y_27 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_27;
    }
  return(t);
}
ATerm a_11 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_27;
  return(t);
}
ATerm b_11 (ATerm t)
{
  ATerm p_7 = NULL,q_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_7 = ATgetFirst((ATermList) t);
      q_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_7, q_7);
  return(t);
}
ATerm c_11 (ATerm t)
{
  ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL,w_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_27 = ATgetArgument(t, 0);
      if(match_cons(z_27, sym__2))
        {
          r_7 = ATgetArgument(z_27, 0);
          s_7 = ATgetArgument(z_27, 1);
        }
      else
        _fail(t);
      {
        ATerm a_28 = ATgetArgument(t, 1);
        if(match_cons(a_28, sym__2))
          {
            t_7 = ATgetArgument(a_28, 0);
            w_7 = ATgetArgument(a_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_7), r_7), (ATerm) ATinsert(CheckATermList(w_7), s_7));
  return(t);
}
ATerm e_11 (ATerm t)
{
  t = genzip_4_0(f_11, g_11, h_11, _id, t);
  return(t);
}
ATerm f_11 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_27;
  return(t);
}
ATerm g_11 (ATerm t)
{
  ATerm x_7 = NULL,y_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_7 = ATgetFirst((ATermList) t);
      y_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_7, y_7);
  return(t);
}
ATerm h_11 (ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL,d_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_28 = ATgetArgument(t, 0);
      if(match_cons(b_28, sym__2))
        {
          z_7 = ATgetArgument(b_28, 0);
          a_8 = ATgetArgument(b_28, 1);
        }
      else
        _fail(t);
      {
        ATerm c_28 = ATgetArgument(t, 1);
        if(match_cons(c_28, sym__2))
          {
            b_8 = ATgetArgument(c_28, 0);
            d_8 = ATgetArgument(c_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_8), z_7), (ATerm) ATinsert(CheckATermList(d_8), a_8));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL,p_32 = NULL;
  l_32 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      m_32 = ATgetArgument(t, 0);
      p_32 = ATgetArgument(t, 1);
      k_32 = ATgetArgument(t, 2);
      {
        ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL;
        t = k_32;
        t = fetch_1_0(q_10, t);
        t = k_32;
        t = genzip_4_0(r_10, s_10, t_10, LiftPrimArg_0_0, t);
        t = _2_0(concat_0_0, u_10, t);
        if(match_cons(t, sym__2))
          {
            m_5 = ATgetArgument(t, 0);
            {
              ATerm d_28 = ATgetArgument(t, 1);
              if(match_cons(d_28, sym__2))
                {
                  n_5 = ATgetArgument(d_28, 0);
                  o_5 = ATgetArgument(d_28, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, m_5, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, n_5), (ATerm) ATmakeAppl(sym_PrimT_3, m_32, p_32, o_5)));
      }
    }
  else
    {
      ATerm k_7 = NULL,n_7 = NULL,o_7 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          m_32 = ATgetArgument(t, 0);
          p_32 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_32;
      t = fetch_1_0(z_10, t);
      t = p_32;
      t = genzip_4_0(a_11, b_11, c_11, LiftPrimArg_0_0, t);
      t = _2_0(concat_0_0, e_11, t);
      if(match_cons(t, sym__2))
        {
          k_7 = ATgetArgument(t, 0);
          {
            ATerm e_28 = ATgetArgument(t, 1);
            if(match_cons(e_28, sym__2))
              {
                n_7 = ATgetArgument(e_28, 0);
                o_7 = ATgetArgument(e_28, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, k_7, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, n_7), (ATerm) ATmakeAppl(sym_PrimT_3, m_32, (ATerm)ATempty, o_7)));
    }
  return(t);
}
ATerm repeat_1_0 (ATerm l_120 (ATerm), ATerm t)
{
  ATerm s_32 (ATerm t)
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_120(t);
        t = s_32(t);
        ;
        LocalPopChoice(i_28);
      }
    else
      {
        t = h_28;
      }
    return(t);
  }
  t = s_32(t);
  return(t);
}
ATerm i_11 (ATerm t)
{
  ATerm j_28 = t;
  int k_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Con_3_0(_id, _id, _id, t);
      ;
      LocalPopChoice(k_28);
    }
  else
    {
      t = j_28;
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm u_28 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(i_11, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_28;
    }
  return(t);
}
ATerm App_2_0 (ATerm s_93 (ATerm), ATerm t_93 (ATerm), ATerm t)
{
  ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL,y_32 = NULL,z_1 = NULL,a_2 = NULL;
  y_32 = t;
  if(match_cons(t, sym_App_2))
    {
      u_32 = ATgetArgument(t, 0);
      v_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_32);
  t_32 = t;
  t = u_32;
  t = s_93(t);
  w_32 = t;
  t = v_32;
  t = t_93(t);
  x_32 = t;
  a_2 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, w_32, x_32);
  z_1 = t;
  t = SSLsetAnnotations(z_1, t_32);
  return(t);
}
ATerm Con_3_0 (ATerm e_94 (ATerm), ATerm f_94 (ATerm), ATerm g_94 (ATerm), ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL,q_33 = NULL,g_2 = NULL,h_2 = NULL;
  q_33 = t;
  if(match_cons(t, sym_Con_3))
    {
      g_33 = ATgetArgument(t, 0);
      h_33 = ATgetArgument(t, 1);
      j_33 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_33);
  f_33 = t;
  t = g_33;
  t = e_94(t);
  k_33 = t;
  t = h_33;
  t = f_94(t);
  l_33 = t;
  t = j_33;
  t = g_94(t);
  m_33 = t;
  h_2 = t;
  t = (ATerm) ATmakeAppl(sym_Con_3, k_33, l_33, m_33);
  g_2 = t;
  t = SSLsetAnnotations(g_2, f_33);
  return(t);
}
ATerm j_11 (ATerm t)
{
  ATerm v_28 = t;
  int a_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Con_3_0(_id, _id, _id, t);
      ;
      LocalPopChoice(a_29);
    }
  else
    {
      t = v_28;
      t = App_2_0(_id, _id, t);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm b_29 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(j_11, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_29;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm x_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      x_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_33;
  if(match_cons(t, sym_StratRule_3))
    {
      z_33 = ATgetArgument(t, 0);
      a_34 = ATgetArgument(t, 1);
      b_34 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_34), (ATerm) ATmakeAppl(sym_Where_1, b_34)), z_33));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          z_33 = ATgetArgument(t, 0);
          a_34 = ATgetArgument(t, 1);
          b_34 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = z_33;
      t = pureterm_0_0(t);
      t = a_34;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, a_34)), (ATerm) ATmakeAppl(sym_Where_1, b_34)), (ATerm) ATmakeAppl(sym_Match_1, z_33)));
    }
  return(t);
}
ATerm Scope_2_0 (ATerm y_96 (ATerm), ATerm z_96 (ATerm), ATerm t)
{
  ATerm i_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,p_34 = NULL,n_2 = NULL,q_2 = NULL;
  p_34 = t;
  if(match_cons(t, sym_Scope_2))
    {
      j_34 = ATgetArgument(t, 0);
      k_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_34);
  i_34 = t;
  t = j_34;
  t = y_96(t);
  l_34 = t;
  t = k_34;
  t = z_96(t);
  m_34 = t;
  q_2 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, l_34, m_34);
  n_2 = t;
  t = SSLsetAnnotations(n_2, i_34);
  return(t);
}
ATerm oncetd_1_0 (ATerm i_111 (ATerm), ATerm t)
{
  ATerm s_34 (ATerm t)
  {
    ATerm c_29 = t;
    int d_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_111(t);
        ;
        LocalPopChoice(d_29);
      }
    else
      {
        t = c_29;
        t = SRTS_one(s_34, t);
      }
    return(t);
  }
  t = s_34(t);
  return(t);
}
ATerm o_8 (ATerm f_41, ATerm g_41, ATerm h_41, ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL;
  t = new_0_0(t);
  t_34 = t;
  t = f_41;
  {
    ATerm k_11 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm e_29 = ATgetArgument(t, 0);
          if(match_cons(e_29, sym_Var_1))
            {
              if(((v_34 != NULL) && (v_34 != ATgetArgument(e_29, 0))))
                _fail(ATgetArgument(e_29, 0));
              else
                v_34 = ATgetArgument(e_29, 0);
            }
          else
            _fail(t);
          if(((u_34 != NULL) && (u_34 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            u_34 = ATgetArgument(t, 1);
          {
            ATerm f_29 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_34));
      return(t);
    }
    t = oncetd_1_0(k_11, t);
    w_34 = t;
    t = g_41;
    {
      ATerm m_11 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm h_29 = ATgetArgument(t, 0);
            if(match_cons(h_29, sym_Var_1))
              {
                if(((v_34 != NULL) && (v_34 != ATgetArgument(h_29, 0))))
                  _fail(ATgetArgument(h_29, 0));
                else
                  v_34 = ATgetArgument(h_29, 0);
              }
            else
              _fail(t);
            if(((x_34 != NULL) && (x_34 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              x_34 = ATgetArgument(t, 1);
            {
              ATerm l_29 = ATgetArgument(t, 2);
              if(match_cons(l_29, sym_CallT_3))
                {
                  if(((y_34 != NULL) && (y_34 != ATgetArgument(l_29, 0))))
                    _fail(ATgetArgument(l_29, 0));
                  else
                    y_34 = ATgetArgument(l_29, 0);
                  {
                    ATerm o_29 = ATgetArgument(l_29, 1);
                    if(((ATgetType(o_29) != AT_LIST) || !(ATisEmpty(o_29))))
                      _fail(t);
                  }
                  {
                    ATerm p_29 = ATgetArgument(l_29, 2);
                    if(((ATgetType(p_29) != AT_LIST) || !(ATisEmpty(p_29))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, t_34);
        return(t);
      }
      t = oncetd_1_0(m_11, t);
      z_34 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_34), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, w_34, z_34, (ATerm) ATmakeAppl(sym_Seq_2, h_41, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(y_34), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(u_34), not_null(x_34), term_c_27))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(v_34)), (ATerm) ATmakeAppl(sym_Var_1, t_34))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm q_29 = t;
  int s_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_29 = t;
      int u_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL;
          c_35 = t;
          if(match_cons(t, sym_SRule_1))
            {
              d_35 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_35;
          if(match_cons(t, sym_Rule_3))
            {
              e_35 = ATgetArgument(t, 0);
              f_35 = ATgetArgument(t, 1);
              g_35 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = c_35;
          t = o_8(e_35, f_35, g_35, t);
          t = desugarRule_0_0(t);
          ;
          LocalPopChoice(u_29);
        }
      else
        {
          t = t_29;
          {
            ATerm v_29 = t;
            int y_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Scope_2_0(_id, desugarRule_0_0, t);
                ;
                LocalPopChoice(y_29);
              }
            else
              {
                t = v_29;
                t = RtoS_0_0(t);
              }
          }
        }
      ;
      LocalPopChoice(s_29);
    }
  else
    {
      t = q_29;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm e_110 (ATerm), ATerm t)
{
  t = e_110(t);
  {
    ATerm n_11 (ATerm t)
    {
      t = topdown_1_0(e_110, t);
      return(t);
    }
    t = SRTS_all(n_11, t);
  }
  return(t);
}
ATerm p_11 (ATerm t)
{
  ATerm z_29 = t;
  int a_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(a_30);
    }
  else
    {
      t = z_29;
    }
  t = repeat_1_0(q_11, t);
  return(t);
}
ATerm q_11 (ATerm t)
{
  ATerm b_30 = t;
  int c_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
      LocalPopChoice(c_30);
    }
  else
    {
      t = b_30;
      {
        ATerm d_30 = t;
        int e_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL;
            o_35 = t;
            if(match_cons(t, sym_CallT_3))
              {
                p_35 = ATgetArgument(t, 0);
                q_35 = ATgetArgument(t, 1);
                r_35 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = o_35;
            t = l_8(p_35, q_35, r_35, t);
            ;
            LocalPopChoice(e_30);
          }
        else
          {
            t = d_30;
            {
              ATerm f_30 = t;
              int g_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(g_30);
                }
              else
                {
                  t = f_30;
                  {
                    ATerm h_30 = t;
                    int i_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(i_30);
                      }
                    else
                      {
                        t = h_30;
                        {
                          ATerm j_30 = t;
                          int k_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm l_30 = t;
                              int m_30 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      w_35 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = w_35;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      x_35 = ATgetArgument(t, 0);
                                      {
                                        ATerm n_30 = t;
                                        int o_30 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm a_36 = NULL,b_36 = NULL;
                                            t = w_35;
                                            {
                                              ATerm r_11 (ATerm t)
                                              {
                                                if(match_cons(t, sym_RootApp_1))
                                                  {
                                                    ATerm p_30 = ATgetArgument(t, 0);
                                                    if(match_cons(p_30, sym_Match_1))
                                                      {
                                                        if(((a_36 != NULL) && (a_36 != ATgetArgument(p_30, 0))))
                                                          _fail(ATgetArgument(p_30, 0));
                                                        else
                                                          a_36 = ATgetArgument(p_30, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = not_null(a_36);
                                                return(t);
                                              }
                                              t = pat_td_1_0(r_11, t);
                                              b_36 = t;
                                              t = (ATerm) ATmakeAppl(sym_Match_1, b_36);
                                            }
                                            ;
                                            LocalPopChoice(o_30);
                                          }
                                        else
                                          {
                                            t = n_30;
                                            t = x_35;
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          x_35 = ATgetArgument(t, 0);
                                          y_35 = ATgetArgument(t, 1);
                                          {
                                            ATerm q_30 = t;
                                            int r_30 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm i_36 = NULL,j_36 = NULL;
                                                t = w_35;
                                                {
                                                  ATerm t_11 (ATerm t)
                                                  {
                                                    if(match_cons(t, sym_RootApp_1))
                                                      {
                                                        ATerm s_30 = ATgetArgument(t, 0);
                                                        if(match_cons(s_30, sym_Match_1))
                                                          {
                                                            if(((i_36 != NULL) && (i_36 != ATgetArgument(s_30, 0))))
                                                              _fail(ATgetArgument(s_30, 0));
                                                            else
                                                              i_36 = ATgetArgument(s_30, 0);
                                                          }
                                                        else
                                                          _fail(t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = not_null(i_36);
                                                    return(t);
                                                  }
                                                  t = pat_td_1_0(t_11, t);
                                                  j_36 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, j_36);
                                                }
                                                ;
                                                LocalPopChoice(r_30);
                                              }
                                            else
                                              {
                                                t = q_30;
                                                t = (ATerm) ATmakeAppl(sym_BA_2, x_35, y_35);
                                              }
                                          }
                                        }
                                      else
                                        {
                                          ATerm n_36 = NULL,q_36 = NULL;
                                          t = w_35;
                                          {
                                            ATerm u_11 (ATerm t)
                                            {
                                              if(match_cons(t, sym_RootApp_1))
                                                {
                                                  ATerm t_30 = ATgetArgument(t, 0);
                                                  if(match_cons(t_30, sym_Match_1))
                                                    {
                                                      if(((n_36 != NULL) && (n_36 != ATgetArgument(t_30, 0))))
                                                        _fail(ATgetArgument(t_30, 0));
                                                      else
                                                        n_36 = ATgetArgument(t_30, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                _fail(t);
                                              t = not_null(n_36);
                                              return(t);
                                            }
                                            t = pat_td_1_0(u_11, t);
                                            q_36 = t;
                                            t = (ATerm) ATmakeAppl(sym_Match_1, q_36);
                                          }
                                        }
                                    }
                                  ;
                                  LocalPopChoice(m_30);
                                }
                              else
                                {
                                  t = l_30;
                                  t = Mapp2_0_0(t);
                                }
                              ;
                              LocalPopChoice(k_30);
                            }
                          else
                            {
                              t = j_30;
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
  t = topdown_1_0(p_11, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm w_11 (ATerm t)
{
  ATerm p_38 = NULL,q_38 = NULL;
  p_38 = t;
  t = SSL_explode_term(p_38);
  if(match_cons(t, sym__2))
    {
      ATerm u_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_30 = ATgetArgument(t, 1);
        if(((ATgetType(v_30) == AT_LIST) && !(ATisEmpty(v_30))))
          {
            q_38 = ATgetFirst((ATermList) v_30);
            {
              ATerm w_30 = (ATerm) ATgetNext((ATermList) v_30);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_38;
  return(t);
}
ATerm x_11 (ATerm t)
{
  ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL;
  i_8 = t;
  t = SSL_explode_term(i_8);
  if(match_cons(t, sym__2))
    {
      ATerm x_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_30 = ATgetArgument(t, 1);
        if(((ATgetType(y_30) == AT_LIST) && !(ATisEmpty(y_30))))
          {
            ATerm z_30 = ATgetFirst((ATermList) y_30);
            j_8 = (ATerm) ATgetNext((ATermList) y_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_b_25;
  k_8 = t;
  t = SSL_mkterm(k_8, j_8);
  return(t);
}
ATerm y_11 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm g_114 (ATerm), ATerm t)
{
  ATerm j_38 = NULL,k_38 = NULL;
  ATerm r_38 (ATerm t)
  {
    ATerm a_31 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_38 = NULL,n_38 = NULL,o_38 = NULL;
        l_38 = t;
        t = map_1_0(w_11, t);
        t = g_114(t);
        n_38 = t;
        t = l_38;
        t = map_1_0(x_11, t);
        t = r_38(t);
        o_38 = t;
        t = (ATerm) ATinsert(CheckATermList(o_38), n_38);
        ;
        LocalPopChoice(b_31);
      }
    else
      {
        t = a_31;
        t = map_1_0(y_11, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = r_38(t);
  j_38 = t;
  t = term_b_25;
  k_38 = t;
  t = SSL_mkterm(k_38, j_38);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm s_38 = NULL;
  s_38 = t;
  {
    ATerm c_31 = t;
    int d_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_38 = NULL,v_38 = NULL,c_39 = NULL;
        t = s_38;
        t = new_0_0(t);
        u_38 = t;
        t = new_0_0(t);
        v_38 = t;
        t = new_0_0(t);
        c_39 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_38), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_b_25, (ATerm) ATinsert(ATinsert(ATempty, s_38), (ATerm) ATmakeAppl(sym_Var_1, v_38))), (ATerm) ATmakeAppl(sym_Var_1, c_39)), (ATerm)ATmakeAppl(sym_VarDec_2, u_38, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_26), term_u_26)), v_38, (ATerm)ATmakeAppl(sym_Var_1, v_38), c_39, (ATerm) ATmakeAppl(sym_Var_1, c_39));
        ;
        LocalPopChoice(d_31);
      }
    else
      {
        t = c_31;
        {
          ATerm e_39 = NULL,f_39 = NULL,q_39 = NULL;
          t = s_38;
          t = new_0_0(t);
          e_39 = t;
          t = new_0_0(t);
          f_39 = t;
          t = new_0_0(t);
          q_39 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_39), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_b_25, (ATerm) ATinsert(ATinsert(ATempty, s_38), (ATerm) ATmakeAppl(sym_Var_1, f_39))), (ATerm) ATmakeAppl(sym_Var_1, q_39)), (ATerm)ATmakeAppl(sym_VarDec_2, e_39, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_26), term_u_26)), f_39, (ATerm)ATmakeAppl(sym_Var_1, f_39), q_39, (ATerm) ATmakeAppl(sym_Var_1, q_39));
        }
      }
  }
  return(t);
}
ATerm p_8 (ATerm j_69, ATerm k_69, ATerm t)
{
  ATerm e_31 = t;
  int f_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(j_69, k_69);
      ;
      LocalPopChoice(f_31);
    }
  else
    {
      t = e_31;
      t = SSL_subtr(j_69, k_69);
    }
  return(t);
}
ATerm z_11 (ATerm t)
{
  ATerm s_39 = NULL,y_39 = NULL;
  if(match_cons(t, sym__2))
    {
      s_39 = ATgetArgument(t, 0);
      y_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, s_39, y_39, (ATerm) ATempty);
  return(t);
}
ATerm b_12 (ATerm t)
{
  ATerm z_39 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm g_31 = ATgetArgument(t, 0);
      if(((ATgetType(g_31) != AT_INT) || (ATgetInt((ATermInt) g_31) != 0)))
        _fail(t);
      {
        ATerm h_31 = ATgetArgument(t, 1);
      }
      z_39 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_39;
  return(t);
}
ATerm copy_1_0 (ATerm l_124 (ATerm), ATerm t)
{
  ATerm c_12 (ATerm t)
  {
    ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,f_40 = NULL,g_40 = NULL;
    if(match_cons(t, sym__3))
      {
        a_40 = ATgetArgument(t, 0);
        b_40 = ATgetArgument(t, 1);
        c_40 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, a_40, term_f_18);
    t = geq_0_0(t);
    t = term_f_18;
    g_40 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_40, term_f_18);
    t = p_8(a_40, g_40, t);
    d_40 = t;
    t = b_40;
    t = l_124(t);
    f_40 = t;
    t = (ATerm) ATmakeAppl(sym__3, d_40, b_40, (ATerm) ATinsert(CheckATermList(c_40), f_40));
    return(t);
  }
  t = for_3_0(z_11, b_12, c_12, t);
  return(t);
}
ATerm q_8 (ATerm z_37, ATerm a_38, ATerm t)
{
  ATerm k_40 = NULL,n_40 = NULL,t_40 = NULL;
  t = new_0_0(t);
  k_40 = t;
  t = new_0_0(t);
  n_40 = t;
  t = new_0_0(t);
  t_40 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_40), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_b_25, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, z_37)), (ATerm) ATmakeAppl(sym_Var_1, n_40))), (ATerm) ATmakeAppl(sym_Op_2, term_b_25, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, a_38)), (ATerm) ATmakeAppl(sym_Var_1, t_40)))), (ATerm)ATmakeAppl(sym_VarDec_2, k_40, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_26), term_u_26)), n_40, (ATerm)ATmakeAppl(sym_Var_1, n_40), t_40, (ATerm) ATmakeAppl(sym_Var_1, t_40));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm b_41 = NULL,e_41 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_41 = ATgetFirst((ATermList) t);
      e_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_41;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm i_31 = t;
      int j_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_41;
          ;
          LocalPopChoice(j_31);
        }
      else
        {
          t = i_31;
          t = e_41;
          t = last_0_0(t);
        }
    }
  else
    {
      t = e_41;
      t = last_0_0(t);
    }
  return(t);
}
ATerm n_48 (ATerm h_43, ATerm i_43, ATerm j_43, ATerm k_43, ATerm t)
{
  ATerm o_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL,s_44 = NULL;
  t = term_f_18;
  s_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_43, term_f_18);
  t = s_9(i_43, s_44, t);
  o_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_43, term_c_16);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_43 = ATgetFirst((ATermList) t);
      v_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_43;
  t = last_0_0(t);
  w_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_43), u_43), v_43);
  t = genzip_4_0(e_12, f_12, g_12, h_12, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      x_43 = ATgetArgument(t, 0);
      h_44 = ATgetArgument(t, 1);
      i_44 = ATgetArgument(t, 2);
      j_44 = ATgetArgument(t, 3);
      k_44 = ATgetArgument(t, 4);
      l_44 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_44), i_44), v_43);
  t = concat_0_0(t);
  m_44 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, h_43, term_k_31), h_44, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(m_44), u_43), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_b_25, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, u_43)), (ATerm) ATmakeAppl(sym_Op_2, h_43, j_44))), (ATerm)ATmakeAppl(sym_Op_2, term_b_25, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, w_43)), (ATerm) ATmakeAppl(sym_Op_2, h_43, l_44))), (ATerm) ATmakeAppl(sym_Seqs_1, x_43)))));
  return(t);
}
ATerm o_48 (ATerm q_47, ATerm r_47, ATerm s_47, ATerm t_47, ATerm t)
{
  ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL;
  t = t_47;
  t = new_0_0(t);
  x_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_47, (ATerm) ATmakeAppl(sym_Var_1, x_47));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      y_47 = ATgetArgument(t, 0);
      z_47 = ATgetArgument(t, 1);
      a_48 = ATgetArgument(t, 2);
      b_48 = ATgetArgument(t, 3);
      c_48 = ATgetArgument(t, 4);
      d_48 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_48, c_48);
  t = conc_0_0(t);
  e_48 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, q_47, term_l_31), z_47, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(e_48), x_47), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_b_25, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, x_47)), (ATerm) ATmakeAppl(sym_Op_2, q_47, b_48))), (ATerm)ATmakeAppl(sym_Op_2, q_47, d_48), (ATerm) ATmakeAppl(sym_Seqs_1, y_47)))));
  return(t);
}
ATerm e_12 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_31 = ATgetArgument(t, 0);
      ATerm n_31 = ATgetArgument(t, 1);
      if(((ATgetType(n_31) != AT_LIST) || !(ATisEmpty(n_31))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_12 (ATerm t)
{
  ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL,d_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_31 = ATgetArgument(t, 0);
      if(((ATgetType(o_31) == AT_LIST) && !(ATisEmpty(o_31))))
        {
          t_44 = ATgetFirst((ATermList) o_31);
          u_44 = (ATerm) ATgetNext((ATermList) o_31);
        }
      else
        _fail(t);
      {
        ATerm p_31 = ATgetArgument(t, 1);
        if(((ATgetType(p_31) == AT_LIST) && !(ATisEmpty(p_31))))
          {
            v_44 = ATgetFirst((ATermList) p_31);
            d_47 = (ATerm) ATgetNext((ATermList) p_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_44, v_44), (ATerm) ATmakeAppl(sym__2, u_44, d_47));
  return(t);
}
ATerm g_12 (ATerm t)
{
  ATerm e_47 = NULL,n_47 = NULL;
  if(match_cons(t, sym__2))
    {
      e_47 = ATgetArgument(t, 0);
      n_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_47), e_47);
  return(t);
}
ATerm h_12 (ATerm t)
{
  ATerm o_47 = NULL,p_47 = NULL;
  if(match_cons(t, sym__2))
    {
      o_47 = ATgetArgument(t, 0);
      p_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_8(o_47, p_47, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm f_48 = NULL,g_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL;
  f_48 = t;
  if(match_cons(t, sym__3))
    {
      g_48 = ATgetArgument(t, 0);
      h_48 = ATgetArgument(t, 1);
      i_48 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = h_48;
  if(match_string(t, "T"))
    {
      t = i_48;
      if(match_cons(t, sym__2))
        {
          j_48 = ATgetArgument(t, 0);
          k_48 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = j_48;
      if(match_int(t, 0))
        {
          ATerm q_31 = t;
          int r_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_48(g_48, j_48, k_48, f_48, t);
              ;
              LocalPopChoice(r_31);
            }
          else
            {
              t = q_31;
              {
                ATerm m_48 = NULL;
                t = f_48;
                t = new_0_0(t);
                m_48 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, g_48, term_k_31), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_48), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_b_25, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, m_48)), (ATerm) ATmakeAppl(sym_Op_2, g_48, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_b_25, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, m_48)), (ATerm) ATmakeAppl(sym_Op_2, g_48, (ATerm) ATempty))), term_c_27))));
              }
            }
        }
      else
        {
          t = n_48(g_48, j_48, k_48, f_48, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = i_48;
      if(match_cons(t, sym__2))
        {
          j_48 = ATgetArgument(t, 0);
          k_48 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = o_48(g_48, j_48, k_48, f_48, t);
    }
  return(t);
}
ATerm i_12 (ATerm t)
{
  ATerm s_31 = t;
  int t_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_50 = NULL,e_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_50 = ATgetFirst((ATermList) t);
          e_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_50;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_50;
      ;
      LocalPopChoice(t_31);
    }
  else
    {
      t = s_31;
      t = JoinDefs2_0_0(t);
    }
  return(t);
}
ATerm j_12 (ATerm t)
{
  ATerm u_31 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_50 = NULL,s_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_50 = ATgetFirst((ATermList) t);
          s_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_50;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_50;
      ;
      LocalPopChoice(v_31);
    }
  else
    {
      t = u_31;
      t = JoinDefs2_0_0(t);
    }
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm b_49 = NULL,c_49 = NULL,e_49 = NULL,f_49 = NULL,m_49 = NULL,n_49 = NULL;
  if(match_cons(t, sym__2))
    {
      e_49 = ATgetArgument(t, 0);
      n_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_49;
  if(match_cons(t, sym__2))
    {
      f_49 = ATgetArgument(t, 0);
      m_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_49;
  if(match_cons(t, sym_Mod_2))
    {
      b_49 = ATgetArgument(t, 0);
      c_49 = ATgetArgument(t, 1);
      {
        ATerm w_31 = t;
        int x_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_49 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, b_49, c_49, m_49);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            t_49 = t;
            t = (ATerm) ATmakeAppl(sym__2, t_49, n_49);
            ;
            LocalPopChoice(x_31);
          }
        else
          {
            t = w_31;
            {
              ATerm b_50 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, f_49, m_49);
              t = Definitions_0_0(t);
              b_50 = t;
              t = (ATerm) ATmakeAppl(sym__2, b_50, n_49);
              t = _2_0(i_12, _id, t);
            }
          }
      }
    }
  else
    {
      ATerm j_50 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, f_49, m_49);
      t = Definitions_0_0(t);
      j_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_50, n_49);
      t = _2_0(j_12, _id, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm b_107 (ATerm), ATerm t)
{
  ATerm b_51 (ATerm t)
  {
    ATerm y_31 = t;
    int z_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, b_51, t);
        ;
        LocalPopChoice(z_31);
      }
    else
      {
        t = y_31;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_107(t);
      }
    return(t);
  }
  t = b_51(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm a_32 = t;
  int b_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(b_32);
    }
  else
    {
      t = a_32;
      {
        ATerm w_50 = NULL,x_50 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_50 = ATgetFirst((ATermList) t);
            x_50 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_50;
        {
          ATerm k_12 (ATerm t)
          {
            t = x_50;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(k_12, t);
        }
      }
    }
  return(t);
}
ATerm v_51 (ATerm i_51, ATerm t)
{
  ATerm k_51 = NULL;
  t = SSL_explode_term(i_51);
  if(match_cons(t, sym__2))
    {
      ATerm c_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      k_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_51;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL;
  n_51 = t;
  if(match_cons(t, sym__2))
    {
      l_51 = ATgetArgument(t, 0);
      m_51 = ATgetArgument(t, 1);
      {
        ATerm d_32 = t;
        int e_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_12 (ATerm t)
            {
              t = m_51;
              return(t);
            }
            t = l_51;
            t = at_end_1_0(l_12, t);
            ;
            LocalPopChoice(e_32);
          }
        else
          {
            t = d_32;
            t = v_51(n_51, t);
          }
      }
    }
  else
    {
      t = v_51(n_51, t);
    }
  return(t);
}
ATerm v_8 (ATerm j_121 (ATerm), ATerm x_65, ATerm w_65, ATerm t)
{
  t = x_65;
  {
    ATerm g_52 (ATerm t)
    {
      ATerm f_32 = t;
      int g_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(g_32);
        }
      else
        {
          t = f_32;
          {
            ATerm h_32 = t;
            int i_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL;
                x_51 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    y_51 = ATgetFirst((ATermList) t);
                    z_51 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = x_51;
                {
                  ATerm m_12 (ATerm t)
                  {
                    t = w_65;
                    return(t);
                  }
                  t = i_9(j_121, m_12, y_51, z_51, t);
                  t = g_52(t);
                }
                ;
                LocalPopChoice(i_32);
              }
            else
              {
                t = h_32;
                t = Cons_2_0(_id, g_52, t);
              }
          }
        }
      return(t);
    }
    t = g_52(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm q_114 (ATerm), ATerm r_114 (ATerm), ATerm s_114 (ATerm), ATerm t_114 (ATerm), ATerm t)
{
  ATerm h_52 (ATerm t)
  {
    ATerm j_32 = t;
    int n_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_114(t);
        ;
        LocalPopChoice(n_32);
      }
    else
      {
        t = j_32;
        t = r_114(t);
        t = _2_0(t_114, h_52, t);
        t = s_114(t);
      }
    return(t);
  }
  t = h_52(t);
  return(t);
}
ATerm n_12 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_32 = ATgetArgument(t, 0);
      if(((ATgetType(o_32) != AT_LIST) || !(ATisEmpty(o_32))))
        _fail(t);
      {
        ATerm q_32 = ATgetArgument(t, 1);
        if(((ATgetType(q_32) != AT_LIST) || !(ATisEmpty(q_32))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_12 (ATerm t)
{
  ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL,u_52 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_32 = ATgetArgument(t, 0);
      if(((ATgetType(r_32) == AT_LIST) && !(ATisEmpty(r_32))))
        {
          q_52 = ATgetFirst((ATermList) r_32);
          r_52 = (ATerm) ATgetNext((ATermList) r_32);
        }
      else
        _fail(t);
      {
        ATerm z_32 = ATgetArgument(t, 1);
        if(((ATgetType(z_32) == AT_LIST) && !(ATisEmpty(z_32))))
          {
            s_52 = ATgetFirst((ATermList) z_32);
            u_52 = (ATerm) ATgetNext((ATermList) z_32);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_52, s_52), (ATerm) ATmakeAppl(sym__2, r_52, u_52));
  return(t);
}
ATerm q_12 (ATerm t)
{
  ATerm v_52 = NULL,y_52 = NULL;
  if(match_cons(t, sym__2))
    {
      v_52 = ATgetArgument(t, 0);
      y_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_52), v_52);
  return(t);
}
ATerm z_8 (ATerm g_707, ATerm l_707, ATerm f_85, ATerm t)
{
  ATerm l_52 = NULL,m_52 = NULL,n_52 = NULL,p_52 = NULL;
  t = SSL_explode_term(l_707);
  if(match_cons(t, sym__2))
    {
      l_52 = ATgetArgument(t, 0);
      m_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(g_707);
  if(match_cons(t, sym__2))
    {
      if((l_52 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      n_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_52, m_52);
  t = genzip_4_0(n_12, p_12, q_12, _id, t);
  p_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_52, f_85);
  t = conc_0_0(t);
  return(t);
}
ATerm r_12 (ATerm t)
{
  ATerm f_53 = NULL;
  f_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, f_53);
  return(t);
}
ATerm s_12 (ATerm t)
{
  t = _2_0(_id, u_12, t);
  return(t);
}
ATerm t_12 (ATerm t)
{
  ATerm a_33 = t;
  int b_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, v_12, t);
      ;
      LocalPopChoice(b_33);
    }
  else
    {
      t = a_33;
      {
        ATerm t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL;
        if(match_cons(t, sym__2))
          {
            t_53 = ATgetArgument(t, 0);
            u_53 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_53;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_53 = ATgetFirst((ATermList) t);
            w_53 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_53), v_53), w_53);
      }
    }
  return(t);
}
ATerm u_12 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm v_12 (ATerm t)
{
  ATerm g_53 = NULL,h_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL;
  g_53 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_53 = ATgetFirst((ATermList) t);
      l_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_53;
  if(match_cons(t, sym__2))
    {
      j_53 = ATgetArgument(t, 0);
      k_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_53;
        if((j_53 != t))
          {
            _fail(t);
          }
        t = l_53;
        ;
        LocalPopChoice(d_33);
      }
    else
      {
        t = c_33;
        t = g_53;
        t = z_8(j_53, k_53, l_53, t);
      }
  }
  return(t);
}
ATerm w_12 (ATerm t)
{
  ATerm v_54 = NULL;
  if(match_cons(t, sym__2))
    {
      v_54 = ATgetArgument(t, 0);
      if((v_54 != ATgetArgument(t, 1)))
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
  ATerm e_33 = t;
  int i_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(r_12, s_12, t_12, t);
      ;
      LocalPopChoice(i_33);
    }
  else
    {
      t = e_33;
      {
        ATerm k_54 = NULL,o_54 = NULL,p_54 = NULL;
        k_54 = t;
        if(match_cons(t, sym__2))
          {
            o_54 = ATgetArgument(t, 0);
            p_54 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_54;
        t = v_8(w_12, o_54, p_54, t);
      }
    }
  return(t);
}
ATerm b_9 (ATerm m_136 (ATerm), ATerm n_136 (ATerm), ATerm o_136 (ATerm), ATerm c_86, ATerm z_85, ATerm h_86, ATerm d_86, ATerm a_86, ATerm b_86, ATerm t)
{
  ATerm y_54 = NULL,z_54 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL,l_55 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_86, d_86);
  t = m_136(t);
  if(match_cons(t, sym__2))
    {
      y_54 = ATgetArgument(t, 0);
      z_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_54;
  t = n_136(t);
  e_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_55, h_86);
  t = diff_0_0(t);
  f_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_55, z_85);
  t = conc_0_0(t);
  g_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_55, h_86);
  t = conc_0_0(t);
  h_55 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_86, y_54, a_86);
  t = o_136(t);
  l_55 = t;
  t = (ATerm) ATmakeAppl(sym__5, g_55, h_55, z_54, l_55, b_86);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm m_136 (ATerm), ATerm n_136 (ATerm), ATerm o_136 (ATerm), ATerm t)
{
  ATerm m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL,q_55 = NULL,s_55 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm n_33 = ATgetArgument(t, 0);
      if(((ATgetType(n_33) == AT_LIST) && !(ATisEmpty(n_33))))
        {
          m_55 = ATgetFirst((ATermList) n_33);
          n_55 = (ATerm) ATgetNext((ATermList) n_33);
        }
      else
        _fail(t);
      o_55 = ATgetArgument(t, 1);
      p_55 = ATgetArgument(t, 2);
      q_55 = ATgetArgument(t, 3);
      s_55 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = b_9(m_136, n_136, o_136, m_55, n_55, o_55, p_55, q_55, s_55, t);
  return(t);
}
ATerm while_not_2_0 (ATerm a_121 (ATerm), ATerm b_121 (ATerm), ATerm t)
{
  ATerm t_55 (ATerm t)
  {
    ATerm o_33 = t;
    int p_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_121(t);
        ;
        LocalPopChoice(p_33);
      }
    else
      {
        t = o_33;
        t = b_121(t);
        t = t_55(t);
      }
    return(t);
  }
  t = t_55(t);
  return(t);
}
ATerm for_3_0 (ATerm d_121 (ATerm), ATerm e_121 (ATerm), ATerm f_121 (ATerm), ATerm t)
{
  t = d_121(t);
  t = while_not_2_0(e_121, f_121, t);
  return(t);
}
ATerm x_12 (ATerm t)
{
  ATerm i_56 = NULL,l_56 = NULL,m_56 = NULL;
  if(match_cons(t, sym__3))
    {
      i_56 = ATgetArgument(t, 0);
      l_56 = ATgetArgument(t, 1);
      m_56 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, i_56, i_56, l_56, m_56, (ATerm) ATempty);
  return(t);
}
ATerm y_12 (ATerm t)
{
  ATerm q_56 = NULL,r_56 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm r_33 = ATgetArgument(t, 0);
      if(((ATgetType(r_33) != AT_LIST) || !(ATisEmpty(r_33))))
        _fail(t);
      {
        ATerm s_33 = ATgetArgument(t, 1);
      }
      {
        ATerm t_33 = ATgetArgument(t, 2);
      }
      q_56 = ATgetArgument(t, 3);
      r_56 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_56, r_56);
  return(t);
}
ATerm z_12 (ATerm t)
{
  ATerm u_33 = t;
  int v_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, c_13, d_13, t);
      ;
      LocalPopChoice(v_33);
    }
  else
    {
      t = u_33;
      {
        ATerm v_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,b_57 = NULL,c_57 = NULL,e_57 = NULL;
        if(match_cons(t, sym__5))
          {
            v_56 = ATgetArgument(t, 0);
            z_56 = ATgetArgument(t, 1);
            b_57 = ATgetArgument(t, 2);
            c_57 = ATgetArgument(t, 3);
            e_57 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = v_56;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_56 = ATgetFirst((ATermList) t);
            y_56 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, y_56, z_56, b_57, c_57, (ATerm) ATinsert(CheckATermList(e_57), x_56));
      }
    }
  return(t);
}
ATerm c_13 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(e_13, t);
  return(t);
}
ATerm d_13 (ATerm t)
{
  ATerm s_56 = NULL,t_56 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm w_33 = ATgetArgument(t, 0);
      s_56 = ATgetArgument(t, 1);
      t_56 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_56), s_56);
  return(t);
}
ATerm e_13 (ATerm t)
{
  ATerm y_33 = t;
  int c_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      ;
      LocalPopChoice(c_34);
    }
  else
    {
      t = y_33;
    }
  return(t);
}
ATerm h_13 (ATerm t)
{
  ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL;
  a_10 = t;
  if(match_cons(t, sym__2))
    {
      b_10 = ATgetArgument(t, 0);
      c_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_10;
  if(match_cons(t, sym_Mod_2))
    {
      y_9 = ATgetArgument(t, 0);
      z_9 = ATgetArgument(t, 1);
      {
        ATerm d_34 = t;
        int e_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_10;
            t = v_7(y_9, z_9, c_10, t);
            ;
            LocalPopChoice(e_34);
          }
        else
          {
            t = d_34;
            t = h_10(b_10, c_10, t);
          }
      }
    }
  else
    {
      t = h_10(b_10, c_10, t);
    }
  return(t);
}
ATerm h_10 (ATerm a_9, ATerm c_9, ATerm t)
{
  ATerm t_9 = NULL,w_9 = NULL;
  t = term_c_18;
  t_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_18), c_9), term_i_18), a_9), term_g_18);
  w_9 = t;
  t = SSL_printnl(t_9, w_9);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_18), c_9), term_i_18), a_9), term_g_18);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL;
  t = for_3_0(x_12, y_12, z_12, t);
  k_58 = t;
  if(match_cons(t, sym__2))
    {
      l_58 = ATgetArgument(t, 0);
      m_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_58;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_58;
    }
  else
    {
      ATerm y_8 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_58 = ATgetFirst((ATermList) t);
          o_58 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(o_58), n_58);
      t = map_1_0(h_13, t);
      t = term_f_18;
      y_8 = t;
      t = SSL_exit(y_8);
    }
  return(t);
}
ATerm e_9 (ATerm v_136 (ATerm), ATerm a_87, ATerm y_86, ATerm t)
{
  ATerm t_58 = NULL,u_58 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL;
  t_58 = t;
  t = v_136(t);
  u_58 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_58, a_87, y_86);
  t = v_9(u_58, a_87, y_86, t);
  {
    ATerm f_34 = t;
    int g_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_58 = NULL;
        t = term_h_34;
        z_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_58, term_h_34);
        t = u_9(u_58, z_58, t);
        ;
        LocalPopChoice(g_34);
      }
    else
      {
        t = f_34;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_58 = ATgetFirst((ATermList) t);
        w_58 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_h_34;
    x_58 = t;
    t = (ATerm) ATinsert(CheckATermList(w_58), (ATerm) ATinsert(CheckATermList(v_58), a_87));
    y_58 = t;
    t = SSL_table_put(u_58, x_58, y_58);
    t = t_58;
  }
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm v_59 = NULL;
  v_59 = t;
  {
    ATerm n_34 = t;
    int o_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_10 = NULL,d_11 = NULL;
        t = term_q_34;
        d_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_34, v_59);
        t = g_9(d_11, v_59, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm r_34 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) r_34) != ATmakeSymbol("j_0", 0, ATtrue)))
              _fail(t);
            v_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_10;
        ;
        LocalPopChoice(o_34);
      }
    else
      {
        t = n_34;
        {
          ATerm l_11 = NULL,o_11 = NULL;
          t = term_q_34;
          o_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_q_34, v_59);
          t = g_9(o_11, v_59, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm a_35 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) a_35) != ATmakeSymbol("e_0", 0, ATtrue)))
                _fail(t);
              l_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_11;
        }
      }
  }
  return(t);
}
ATerm g_9 (ATerm o_82, ATerm p_82, ATerm t)
{
  ATerm z_59 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_82, p_82);
  t = u_9(o_82, p_82, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_59 = ATgetFirst((ATermList) t);
      {
        ATerm b_35 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_59;
  return(t);
}
ATerm l_61 (ATerm r_60, ATerm t)
{
  ATerm w_60 = NULL,y_60 = NULL,v_11 = NULL;
  t = term_h_35;
  v_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_35, r_60);
  t = g_9(v_11, r_60, t);
  if(match_cons(t, sym_Defined_3))
    {
      ATerm i_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_35) != ATmakeSymbol("c_0", 0, ATtrue)))
        _fail(t);
      w_60 = ATgetArgument(t, 1);
      y_60 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_60), w_60);
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm d_61 = NULL,g_61 = NULL;
  d_61 = t;
  if(match_cons(t, sym__2))
    {
      ATerm j_35 = ATgetArgument(t, 0);
      g_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_61;
  {
    ATerm k_35 = t;
    int l_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_35 = ATgetArgument(t, 0);
            ATerm n_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(l_35);
        {
          ATerm s_35 = t;
          int t_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_12 = NULL,d_12 = NULL;
              t = term_h_35;
              d_12 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_h_35, d_61);
              t = g_9(d_12, d_61, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm u_35 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) u_35) != ATmakeSymbol("h_0", 0, ATtrue)))
                    _fail(t);
                  a_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = a_12;
              ;
              LocalPopChoice(t_35);
            }
          else
            {
              t = s_35;
              t = l_61(d_61, t);
            }
        }
      }
    else
      {
        t = k_35;
        t = l_61(d_61, t);
      }
  }
  return(t);
}
ATerm i_13 (ATerm t)
{
  t = term_c_21;
  return(t);
}
ATerm j_13 (ATerm t)
{
  ATerm i_62 = NULL,j_62 = NULL;
  if(match_cons(t, sym__2))
    {
      i_62 = ATgetArgument(t, 0);
      j_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_9(i_62, j_62, t);
  return(t);
}
ATerm k_13 (ATerm t)
{
  t = term_f_18;
  return(t);
}
ATerm l_13 (ATerm t)
{
  t = term_c_21;
  return(t);
}
ATerm m_13 (ATerm t)
{
  ATerm k_62 = NULL,l_62 = NULL;
  if(match_cons(t, sym__2))
    {
      k_62 = ATgetArgument(t, 0);
      l_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_9(k_62, l_62, t);
  return(t);
}
ATerm n_13 (ATerm t)
{
  t = term_f_18;
  return(t);
}
ATerm o_13 (ATerm t)
{
  ATerm m_62 = NULL;
  if(match_cons(t, sym__2))
    {
      m_62 = ATgetArgument(t, 0);
      if((m_62 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm p_13 (ATerm t)
{
  t = term_h_35;
  return(t);
}
ATerm q_13 (ATerm t)
{
  t = term_q_34;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL,t_61 = NULL,u_61 = NULL,v_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL,h_62 = NULL;
  m_61 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      n_61 = ATgetArgument(t, 0);
      o_61 = ATgetArgument(t, 1);
      p_61 = ATgetArgument(t, 2);
      {
        ATerm v_35 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  q_61 = t;
  t = o_61;
  t = foldr_3_0(i_13, j_13, k_13, t);
  t_61 = t;
  t = p_61;
  t = foldr_3_0(l_13, m_13, n_13, t);
  u_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_61, (ATerm) ATmakeAppl(sym__2, t_61, u_61));
  {
    ATerm z_35 = t;
    int c_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        ;
        LocalPopChoice(c_36);
      }
    else
      {
        t = z_35;
        t = (ATerm) ATempty;
      }
    v_61 = t;
    t = n_61;
    {
      ATerm d_36 = t;
      int e_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Arities_0_0(t);
          ;
          LocalPopChoice(e_36);
        }
      else
        {
          t = d_36;
          t = (ATerm) ATempty;
        }
      a_62 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_61, u_61));
      c_62 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_61, u_61)), a_62);
      t = j_9(o_13, c_62, a_62, t);
      b_62 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_61, (ATerm) ATmakeAppl(sym__2, t_61, u_61));
      d_62 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_36, (ATerm) ATinsert(CheckATermList(v_61), m_61));
      e_62 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_61, (ATerm) ATmakeAppl(sym__2, t_61, u_61)), (ATerm) ATmakeAppl(sym_Defined_2, term_f_36, (ATerm) ATinsert(CheckATermList(v_61), m_61)));
      t = e_9(p_13, d_62, e_62, t);
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_36, b_62);
      h_62 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_61, (ATerm) ATmakeAppl(sym_Defined_2, term_g_36, b_62));
      t = e_9(q_13, n_61, h_62, t);
      t = q_61;
    }
  }
  return(t);
}
ATerm r_13 (ATerm t)
{
  t = term_c_21;
  return(t);
}
ATerm s_13 (ATerm t)
{
  ATerm u_62 = NULL,v_62 = NULL;
  if(match_cons(t, sym__2))
    {
      u_62 = ATgetArgument(t, 0);
      v_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_9(u_62, v_62, t);
  return(t);
}
ATerm t_13 (ATerm t)
{
  t = term_f_18;
  return(t);
}
ATerm u_13 (ATerm t)
{
  t = term_c_21;
  return(t);
}
ATerm w_13 (ATerm t)
{
  ATerm w_62 = NULL,y_62 = NULL;
  if(match_cons(t, sym__2))
    {
      w_62 = ATgetArgument(t, 0);
      y_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_9(w_62, y_62, t);
  return(t);
}
ATerm x_13 (ATerm t)
{
  t = term_f_18;
  return(t);
}
ATerm h_9 (ATerm z_38, ATerm a_39, ATerm b_39, ATerm t)
{
  ATerm q_62 = NULL,r_62 = NULL;
  t = a_39;
  t = foldr_3_0(r_13, s_13, t_13, t);
  q_62 = t;
  t = b_39;
  t = foldr_3_0(u_13, w_13, x_13, t);
  r_62 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, z_38, (ATerm) ATmakeAppl(sym__2, q_62, r_62)));
  return(t);
}
ATerm i_9 (ATerm r_121 (ATerm), ATerm s_121 (ATerm), ATerm d_66, ATerm c_66, ATerm t)
{
  t = s_121(t);
  {
    ATerm y_13 (ATerm t)
    {
      ATerm z_62 = NULL;
      z_62 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_66, z_62);
      t = r_121(t);
      return(t);
    }
    t = fetch_1_0(y_13, t);
    t = c_66;
  }
  return(t);
}
ATerm j_9 (ATerm o_121 (ATerm), ATerm z_65, ATerm y_65, ATerm t)
{
  t = z_65;
  {
    ATerm g_63 (ATerm t)
    {
      ATerm h_36 = t;
      int k_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = y_65;
          ;
          LocalPopChoice(k_36);
        }
      else
        {
          t = h_36;
          {
            ATerm l_36 = t;
            int m_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_63 = NULL,c_63 = NULL,d_63 = NULL;
                b_63 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    c_63 = ATgetFirst((ATermList) t);
                    d_63 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = b_63;
                {
                  ATerm b_14 (ATerm t)
                  {
                    t = y_65;
                    return(t);
                  }
                  t = i_9(o_121, b_14, c_63, d_63, t);
                  t = g_63(t);
                }
                ;
                LocalPopChoice(m_36);
              }
            else
              {
                t = l_36;
                t = Cons_2_0(_id, g_63, t);
              }
          }
        }
      return(t);
    }
    t = g_63(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm y_123 (ATerm), ATerm z_123 (ATerm), ATerm a_124 (ATerm), ATerm t)
{
  ATerm o_36 = t;
  int p_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_123(t);
      ;
      LocalPopChoice(p_36);
    }
  else
    {
      t = o_36;
      {
        ATerm l_63 = NULL,m_63 = NULL,q_63 = NULL,r_63 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_63 = ATgetFirst((ATermList) t);
            m_63 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_63;
        t = a_124(t);
        q_63 = t;
        t = m_63;
        t = foldr_3_0(y_123, z_123, a_124, t);
        r_63 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_63, r_63);
        t = z_123(t);
      }
    }
  return(t);
}
ATerm c_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_14 (ATerm t)
{
  ATerm b_64 = NULL,c_64 = NULL;
  if(match_cons(t, sym__2))
    {
      b_64 = ATgetArgument(t, 0);
      c_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_9(g_14, b_64, c_64, t);
  return(t);
}
ATerm f_14 (ATerm t)
{
  ATerm e_64 = NULL,g_64 = NULL,h_64 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      e_64 = ATgetArgument(t, 0);
      g_64 = ATgetArgument(t, 1);
      h_64 = ATgetArgument(t, 2);
      {
        ATerm r_36 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = h_9(e_64, g_64, h_64, t);
  return(t);
}
ATerm g_14 (ATerm t)
{
  ATerm d_64 = NULL;
  if(match_cons(t, sym__2))
    {
      d_64 = ATgetArgument(t, 0);
      if((d_64 != ATgetArgument(t, 1)))
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
  ATerm s_63 = NULL,t_63 = NULL,a_64 = NULL;
  s_63 = t;
  t = foldr_3_0(c_14, d_14, f_14, t);
  t_63 = t;
  t = s_63;
  t = map_1_0(RegisterSDefT_0_0, t);
  a_64 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_63, a_64, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm b_92 (ATerm), ATerm t)
{
  ATerm i_64 = NULL,j_64 = NULL,l_64 = NULL,o_64 = NULL,r_2 = NULL,b_3 = NULL;
  o_64 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      j_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_64);
  i_64 = t;
  t = j_64;
  t = b_92(t);
  l_64 = t;
  b_3 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, l_64);
  r_2 = t;
  t = SSLsetAnnotations(r_2, i_64);
  return(t);
}
ATerm Cons_2_0 (ATerm x_91 (ATerm), ATerm y_91 (ATerm), ATerm t)
{
  ATerm r_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL,x_64 = NULL,d_3 = NULL,e_3 = NULL;
  x_64 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_64 = ATgetFirst((ATermList) t);
      t_64 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_64);
  r_64 = t;
  t = s_64;
  t = x_91(t);
  u_64 = t;
  t = t_64;
  t = y_91(t);
  v_64 = t;
  e_3 = t;
  t = (ATerm) ATinsert(CheckATermList(v_64), u_64);
  d_3 = t;
  t = SSLsetAnnotations(d_3, r_64);
  return(t);
}
ATerm Specification_1_0 (ATerm g_92 (ATerm), ATerm t)
{
  ATerm b_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL,h_3 = NULL,q_3 = NULL;
  g_65 = t;
  if(match_cons(t, sym_Specification_1))
    {
      e_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_65);
  b_65 = t;
  t = e_65;
  t = g_92(t);
  f_65 = t;
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, f_65);
  h_3 = t;
  t = SSLsetAnnotations(h_3, b_65);
  return(t);
}
ATerm _2_0 (ATerm i_87 (ATerm), ATerm j_87 (ATerm), ATerm t)
{
  ATerm q_65 = NULL,r_65 = NULL,u_65 = NULL,b_66 = NULL,f_66 = NULL,i_66 = NULL,r_3 = NULL,z_3 = NULL;
  i_66 = t;
  if(match_cons(t, sym__2))
    {
      r_65 = ATgetArgument(t, 0);
      u_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_66);
  q_65 = t;
  t = r_65;
  t = i_87(t);
  b_66 = t;
  t = u_65;
  t = j_87(t);
  f_66 = t;
  z_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_66, f_66);
  r_3 = t;
  t = SSLsetAnnotations(r_3, q_65);
  return(t);
}
ATerm m_9 (ATerm o_72, ATerm p_72, ATerm t)
{
  ATerm n_66 = NULL;
  t = SSL_fputc(o_72, p_72);
  n_66 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_66);
  return(t);
}
ATerm n_9 (ATerm c_76, ATerm d_76, ATerm t)
{
  ATerm r_66 = NULL;
  t = SSL_write_term_to_stream_text(c_76, d_76);
  r_66 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_66);
  return(t);
}
ATerm p_9 (ATerm c_129 (ATerm), ATerm a_565, ATerm g_76, ATerm t)
{
  ATerm t_66 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_565, term_s_36);
  t = open_stream_0_0(t);
  t_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_66, g_76);
  t = c_129(t);
  t = fclose_0_0(t);
  t = g_76;
  return(t);
}
ATerm o_9 (ATerm y_75, ATerm z_75, ATerm t)
{
  ATerm w_66 = NULL;
  t = SSL_write_term_to_stream_baf(y_75, z_75);
  w_66 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_66);
  return(t);
}
ATerm l_14 (ATerm t)
{
  t = fetch_1_0(o_14, t);
  return(t);
}
ATerm n_14 (ATerm t)
{
  ATerm e_67 = NULL,f_67 = NULL;
  if(match_cons(t, sym__2))
    {
      e_67 = ATgetArgument(t, 0);
      f_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_9(p_14, e_67, f_67, t);
  return(t);
}
ATerm o_14 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm p_14 (ATerm t)
{
  ATerm g_67 = NULL,h_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_36 = ATgetArgument(t, 0);
      if(match_cons(t_36, sym_Stream_1))
        {
          g_67 = ATgetArgument(t_36, 0);
        }
      else
        _fail(t);
      h_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_9(g_67, h_67, t);
  return(t);
}
ATerm q_14 (ATerm t)
{
  ATerm i_67 = NULL,j_67 = NULL;
  if(match_cons(t, sym__2))
    {
      i_67 = ATgetArgument(t, 0);
      j_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_9(r_14, i_67, j_67, t);
  return(t);
}
ATerm r_14 (ATerm t)
{
  ATerm k_67 = NULL,l_67 = NULL,m_67 = NULL,p_67 = NULL,u_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_36 = ATgetArgument(t, 0);
      if(match_cons(u_36, sym_Stream_1))
        {
          l_67 = ATgetArgument(u_36, 0);
        }
      else
        _fail(t);
      m_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_9(l_67, m_67, t);
  k_67 = t;
  t = term_v_36;
  p_67 = t;
  t = k_67;
  if(match_cons(t, sym_Stream_1))
    {
      u_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_v_36, k_67);
  t = m_9(p_67, u_67, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm x_66 = NULL,y_66 = NULL;
  x_66 = t;
  {
    ATerm i_14 (ATerm t)
    {
      ATerm w_36 = t;
      int x_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_14 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((y_66 != NULL) && (y_66 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_66 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(j_14, t);
          ;
          LocalPopChoice(x_36);
        }
      else
        {
          t = w_36;
          t = term_y_36;
          if(((y_66 != NULL) && (y_66 != t)))
            _fail(t);
          else
            y_66 = t;
        }
      return(t);
    }
    t = _2_0(i_14, _id, t);
    t = x_66;
    {
      ATerm k_14 (ATerm t)
      {
        ATerm d_67 = NULL;
        d_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_66), d_67);
        return(t);
      }
      t = _2_0(_id, k_14, t);
      {
        ATerm z_36 = t;
        int a_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(l_14, n_14, t);
            ;
            LocalPopChoice(a_37);
          }
        else
          {
            t = z_36;
            t = _2_0(_id, q_14, t);
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
ATerm apply_strategy_1_0 (ATerm e_132 (ATerm), ATerm t)
{
  ATerm v_67 = NULL,w_67 = NULL,x_67 = NULL,z_67 = NULL,b_68 = NULL;
  v_67 = t;
  t = dtime_0_0(t);
  t = v_67;
  t = e_132(t);
  w_67 = t;
  t = dtime_0_0(t);
  x_67 = t;
  t = w_67;
  if(match_cons(t, sym__2))
    {
      z_67 = ATgetArgument(t, 0);
      b_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_67), (ATerm) ATmakeAppl(sym_Runtime_1, x_67)), b_68);
  return(t);
}
ATerm w_68 (ATerm p_68, ATerm t)
{
  t = SSL_fclose(p_68);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_68 = NULL,u_68 = NULL;
  u_68 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_68 = ATgetArgument(t, 0);
      {
        ATerm b_37 = t;
        int c_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_68);
            ;
            LocalPopChoice(c_37);
          }
        else
          {
            t = b_37;
            t = w_68(u_68, t);
          }
      }
    }
  else
    {
      t = w_68(u_68, t);
    }
  return(t);
}
ATerm q_9 (ATerm e_76, ATerm t)
{
  t = SSL_read_term_from_stream(e_76);
  return(t);
}
ATerm r_9 (ATerm q_72, ATerm r_72, ATerm t)
{
  ATerm x_68 = NULL;
  t = SSL_fopen(q_72, r_72);
  x_68 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_68);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_68 = NULL;
  t = SSL_stdin_stream();
  y_68 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_68);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_68 = NULL;
  t = SSL_stdout_stream();
  z_68 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_68);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_69 = NULL;
  t = SSL_stderr_stream();
  a_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_69);
  return(t);
}
ATerm w_14 (ATerm t)
{
  ATerm o_69 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      o_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_69;
  return(t);
}
ATerm x_14 (ATerm t)
{
  ATerm r_69 = NULL;
  r_69 = t;
  t = SSL_is_string(r_69);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_37 = ATgetArgument(t, 0);
      ATerm e_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_37 = t;
    int g_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_69 = NULL,o_12 = NULL;
        l_69 = t;
        t = SSL_explode_term(l_69);
        if(match_cons(t, sym__2))
          {
            ATerm h_37 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) h_37) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm i_37 = ATgetArgument(t, 1);
              if(((ATgetType(i_37) == AT_LIST) && !(ATisEmpty(i_37))))
                {
                  o_12 = ATgetFirst((ATermList) i_37);
                  {
                    ATerm j_37 = (ATerm) ATgetNext((ATermList) i_37);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = o_12;
        if(match_cons(t, sym_stderr_0))
          {
            t = o_12;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = o_12;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = o_12;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(g_37);
      }
    else
      {
        t = f_37;
        {
          ATerm k_37 = t;
          int l_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_69 = NULL,n_69 = NULL;
              t = _2_0(w_14, _id, t);
              if(match_cons(t, sym__2))
                {
                  m_69 = ATgetArgument(t, 0);
                  n_69 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_9(m_69, n_69, t);
              ;
              LocalPopChoice(l_37);
            }
          else
            {
              t = k_37;
              {
                ATerm p_69 = NULL,q_69 = NULL;
                t = _2_0(x_14, _id, t);
                if(match_cons(t, sym__2))
                  {
                    p_69 = ATgetArgument(t, 0);
                    q_69 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = r_9(p_69, q_69, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm y_14 (ATerm t)
{
  t = term_m_37;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_69 = NULL,u_69 = NULL,v_69 = NULL;
  ATerm n_37 = t;
  int o_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_69 = NULL;
      w_69 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_69, term_p_37);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(o_37);
    }
  else
    {
      t = n_37;
      t = debug_1_0(y_14, t);
      _fail(t);
    }
  t_69 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_9(v_69, t);
  u_69 = t;
  t = t_69;
  t = fclose_0_0(t);
  t = u_69;
  return(t);
}
ATerm fetch_1_0 (ATerm v_106 (ATerm), ATerm t)
{
  ATerm y_69 (ATerm t)
  {
    ATerm q_37 = t;
    int r_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(v_106, _id, t);
        ;
        LocalPopChoice(r_37);
      }
    else
      {
        t = q_37;
        t = Cons_2_0(_id, y_69, t);
      }
    return(t);
  }
  t = y_69(t);
  return(t);
}
ATerm l_9 (ATerm o_65, ATerm p_65, ATerm t)
{
  t = SSL_strcat(o_65, p_65);
  return(t);
}
ATerm debug_1_0 (ATerm a_129 (ATerm), ATerm t)
{
  ATerm z_69 = NULL,a_70 = NULL,b_70 = NULL,c_70 = NULL;
  z_69 = t;
  t = a_129(t);
  a_70 = t;
  t = term_c_18;
  b_70 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_69), a_70);
  c_70 = t;
  t = SSL_printnl(b_70, c_70);
  t = z_69;
  return(t);
}
ATerm z_14 (ATerm t)
{
  ATerm s_37 = t;
  int t_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(t_37);
    }
  else
    {
      t = s_37;
    }
  return(t);
}
ATerm a_15 (ATerm t)
{
  t = term_u_37;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm v_37 = t;
  int w_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_70 = NULL;
      i_70 = t;
      t = SSL_is_string(i_70);
      ;
      LocalPopChoice(w_37);
    }
  else
    {
      t = v_37;
      {
        ATerm x_37 = t;
        int y_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(z_14, t);
            ;
            LocalPopChoice(y_37);
          }
        else
          {
            t = x_37;
            {
              ATerm n_70 = NULL,o_70 = NULL,p_70 = NULL;
              n_70 = t;
              if(match_cons(t, sym_Path_1))
                {
                  o_70 = ATgetArgument(t, 0);
                  t = o_70;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      o_70 = ATgetArgument(t, 0);
                      t = o_70;
                      {
                        ATerm b_38 = t;
                        int c_38 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(c_38);
                          }
                        else
                          {
                            t = b_38;
                            t = debug_1_0(a_15, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm t_70 = NULL,u_70 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          o_70 = ATgetArgument(t, 0);
                          p_70 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = o_70;
                      t = eval_config_0_0(t);
                      t_70 = t;
                      t = p_70;
                      t = eval_config_0_0(t);
                      u_70 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_70, u_70);
                      t = l_9(t_70, u_70, t);
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
  ATerm x_70 = NULL,y_70 = NULL;
  x_70 = t;
  t = term_d_38;
  y_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_38, x_70);
  t = u_9(y_70, x_70, t);
  {
    ATerm e_38 = t;
    int f_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_70 = NULL,a_71 = NULL;
        t = eval_config_0_0(t);
        z_70 = t;
        t = term_d_38;
        a_71 = t;
        t = SSL_table_put(a_71, x_70, z_70);
        t = z_70;
        ;
        LocalPopChoice(f_38);
      }
    else
      {
        t = e_38;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm n_130 (ATerm), ATerm t)
{
  ATerm g_38 = t;
  int h_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_71 = NULL,d_71 = NULL;
      b_71 = t;
      t = term_i_38;
      t = get_config_0_0(t);
      d_71 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_71, term_m_38);
      t = geq_0_0(t);
      t = b_71;
      t = n_130(t);
      ;
      LocalPopChoice(h_38);
    }
  else
    {
      t = g_38;
    }
  return(t);
}
ATerm b_15 (ATerm t)
{
  ATerm f_71 = NULL;
  f_71 = t;
  if(match_string(t, "-k"))
    {
      t = f_71;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = f_71;
    }
  return(t);
}
ATerm c_15 (ATerm t)
{
  ATerm g_71 = NULL,h_71 = NULL,i_71 = NULL;
  g_71 = t;
  t = SSL_string_to_int(g_71);
  h_71 = t;
  t = term_t_38;
  i_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_38, h_71);
  t = x_9(i_71, h_71, t);
  t = g_71;
  return(t);
}
ATerm d_15 (ATerm t)
{
  t = term_d_39;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_15, c_15, d_15, t);
  return(t);
}
ATerm f_15 (ATerm t)
{
  ATerm k_71 = NULL;
  k_71 = t;
  if(match_string(t, "-S"))
    {
      t = k_71;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = k_71;
    }
  return(t);
}
ATerm g_15 (ATerm t)
{
  ATerm l_71 = NULL,m_71 = NULL;
  t = term_i_38;
  l_71 = t;
  t = term_c_21;
  m_71 = t;
  t = term_g_39;
  t = x_9(l_71, m_71, t);
  t = term_h_39;
  return(t);
}
ATerm h_15 (ATerm t)
{
  t = term_i_39;
  return(t);
}
ATerm i_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_15 (ATerm t)
{
  ATerm n_71 = NULL,o_71 = NULL,p_71 = NULL;
  n_71 = t;
  t = SSL_string_to_int(n_71);
  o_71 = t;
  t = term_i_38;
  p_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_38, o_71);
  t = x_9(p_71, o_71, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_71);
  return(t);
}
ATerm k_15 (ATerm t)
{
  t = term_j_39;
  return(t);
}
ATerm m_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_15 (ATerm t)
{
  ATerm q_71 = NULL,r_71 = NULL;
  t = term_k_39;
  q_71 = t;
  t = term_c_16;
  r_71 = t;
  t = term_l_39;
  t = x_9(q_71, r_71, t);
  t = term_m_39;
  return(t);
}
ATerm o_15 (ATerm t)
{
  t = term_n_39;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_39 = t;
  int p_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_15, g_15, h_15, t);
      ;
      LocalPopChoice(p_39);
    }
  else
    {
      t = o_39;
      {
        ATerm r_39 = t;
        int t_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(i_15, j_15, k_15, t);
            ;
            LocalPopChoice(t_39);
          }
        else
          {
            t = r_39;
            t = Option_3_0(m_15, n_15, o_15, t);
          }
      }
    }
  return(t);
}
ATerm x_9 (ATerm f_77, ATerm g_77, ATerm t)
{
  ATerm s_71 = NULL;
  t = term_d_38;
  s_71 = t;
  t = SSL_table_put(s_71, f_77, g_77);
  t = (ATerm) ATmakeAppl(sym__3, term_d_38, f_77, g_77);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm v_71 = NULL,w_71 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL;
      t = term_c_16;
      t = d_0(t);
      x_71 = t;
      t = term_u_39;
      y_71 = t;
      t = term_v_39;
      z_71 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_39, term_v_39, x_71);
      t = v_9(y_71, z_71, x_71, t);
      _fail(t);
    }
  else
    {
      ATerm c_72 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_71 = ATgetFirst((ATermList) t);
          w_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_71;
      t = a_0(t);
      t = term_c_16;
      t = b_0(t);
      c_72 = t;
      t = (ATerm) ATinsert(CheckATermList(w_71), c_72);
    }
  return(t);
}
ATerm p_15 (ATerm t)
{
  ATerm e_72 = NULL;
  e_72 = t;
  if(match_string(t, "-o"))
    {
      t = e_72;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_72;
    }
  return(t);
}
ATerm q_15 (ATerm t)
{
  ATerm f_72 = NULL,g_72 = NULL;
  f_72 = t;
  t = term_w_39;
  g_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_39, f_72);
  t = x_9(g_72, f_72, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_72);
  return(t);
}
ATerm r_15 (ATerm t)
{
  t = term_x_39;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_15, q_15, r_15, t);
  return(t);
}
ATerm v_9 (ATerm d_82, ATerm e_82, ATerm c_82, ATerm t)
{
  ATerm i_72 = NULL,j_72 = NULL,k_72 = NULL;
  i_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_82, e_82);
  {
    ATerm e_40 = t;
    int h_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_40 = ATgetArgument(t, 0);
            ATerm j_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, d_82, e_82);
        t = u_9(d_82, e_82, t);
        ;
        LocalPopChoice(h_40);
      }
    else
      {
        t = e_40;
        t = (ATerm) ATempty;
      }
    j_72 = t;
    t = (ATerm) ATinsert(CheckATermList(j_72), c_82);
    k_72 = t;
    t = SSL_table_put(d_82, e_82, k_72);
    t = i_72;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm x_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_73 = NULL,c_73 = NULL,d_73 = NULL;
      t = term_c_16;
      t = m_0(t);
      b_73 = t;
      t = term_u_39;
      c_73 = t;
      t = term_v_39;
      d_73 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_39, term_v_39, b_73);
      t = v_9(c_73, d_73, b_73, t);
      _fail(t);
    }
  else
    {
      ATerm h_73 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_72 = ATgetFirst((ATermList) t);
          y_72 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_72;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_72 = ATgetFirst((ATermList) t);
          a_73 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_72;
      t = i_0(t);
      t = z_72;
      t = k_0(t);
      h_73 = t;
      t = (ATerm) ATinsert(CheckATermList(a_73), h_73);
    }
  return(t);
}
ATerm t_15 (ATerm t)
{
  ATerm j_73 = NULL;
  j_73 = t;
  if(match_string(t, "-i"))
    {
      t = j_73;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_73;
    }
  return(t);
}
ATerm u_15 (ATerm t)
{
  ATerm k_73 = NULL,l_73 = NULL;
  k_73 = t;
  t = term_l_40;
  l_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_40, k_73);
  t = x_9(l_73, k_73, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_73);
  return(t);
}
ATerm v_15 (ATerm t)
{
  t = term_m_40;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_15, u_15, v_15, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_16;
  t = whoami_0_0(t);
  m_73 = t;
  t = term_c_18;
  n_73 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_40), m_73);
  o_73 = t;
  t = SSL_printnl(n_73, o_73);
  t = term_f_18;
  p_73 = t;
  t = SSL_exit(p_73);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_p_40;
  t = get_config_0_0(t);
  return(t);
}
ATerm s_9 (ATerm d_69, ATerm e_69, ATerm t)
{
  ATerm q_40 = t;
  int r_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(d_69, e_69);
      ;
      LocalPopChoice(r_40);
    }
  else
    {
      t = q_40;
      t = SSL_addr(d_69, e_69);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm w_123 (ATerm), ATerm x_123 (ATerm), ATerm t)
{
  ATerm s_40 = t;
  int u_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_123(t);
      ;
      LocalPopChoice(u_40);
    }
  else
    {
      t = s_40;
      {
        ATerm s_73 = NULL,t_73 = NULL,w_73 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_73 = ATgetFirst((ATermList) t);
            t_73 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_73;
        t = foldr_2_0(w_123, x_123, t);
        w_73 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_73, w_73);
        t = x_123(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm w_15 (ATerm t)
{
  t = term_c_21;
  return(t);
}
ATerm x_15 (ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL;
  if(match_cons(t, sym__2))
    {
      f_13 = ATgetArgument(t, 0);
      g_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_9(f_13, g_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_73 = NULL,a_13 = NULL,b_13 = NULL;
  t = times_0_0(t);
  a_13 = t;
  t = SSL_explode_term(a_13);
  if(match_cons(t, sym__2))
    {
      ATerm v_40 = ATgetArgument(t, 0);
      b_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_13;
  t = foldr_2_0(w_15, x_15, t);
  z_73 = t;
  t = SSL_TicksToSeconds(z_73);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_74 = NULL,l_74 = NULL,m_74 = NULL;
  k_74 = t;
  if(match_cons(t, sym__2))
    {
      l_74 = ATgetArgument(t, 0);
      m_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_40 = t;
    int x_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_74;
        if((l_74 != t))
          {
            _fail(t);
          }
        t = k_74;
        ;
        LocalPopChoice(x_40);
      }
    else
      {
        t = w_40;
        t = (ATerm) ATmakeAppl(sym__2, l_74, m_74);
        {
          ATerm y_40 = t;
          int z_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_74, m_74);
              ;
              LocalPopChoice(z_40);
            }
          else
            {
              t = y_40;
              t = SSL_gtr(l_74, m_74);
            }
          t = (ATerm) ATmakeAppl(sym__2, l_74, m_74);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_130 (ATerm), ATerm t)
{
  ATerm a_41 = t;
  int c_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_74 = NULL,r_74 = NULL;
      p_74 = t;
      t = term_i_38;
      t = get_config_0_0(t);
      r_74 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_74, term_f_18);
      t = geq_0_0(t);
      t = p_74;
      t = m_130(t);
      ;
      LocalPopChoice(c_41);
    }
  else
    {
      t = a_41;
    }
  return(t);
}
ATerm y_15 (ATerm t)
{
  ATerm t_74 = NULL,u_74 = NULL,v_74 = NULL,w_74 = NULL;
  t = run_time_0_0(t);
  t_74 = t;
  t = term_c_16;
  t = whoami_0_0(t);
  u_74 = t;
  t = term_c_18;
  v_74 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_41), t_74), term_d_41), u_74);
  w_74 = t;
  t = SSL_printnl(v_74, w_74);
  t = (ATerm) ATmakeAppl(sym__2, term_c_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_41), t_74), term_d_41), u_74));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(y_15, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_74 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_21;
  x_74 = t;
  t = SSL_exit(x_74);
  return(t);
}
ATerm z_15 (ATerm t)
{
  ATerm j_41 = t;
  int k_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(k_41);
    }
  else
    {
      t = j_41;
      {
        ATerm l_41 = t;
        int m_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(m_41);
          }
        else
          {
            t = l_41;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm c_133 (ATerm), ATerm t)
{
  ATerm n_41 = t;
  int o_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_41;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_41);
    }
  else
    {
      t = n_41;
      t = fetch_1_0(z_15, t);
    }
  t = c_133(t);
  return(t);
}
ATerm map_1_0 (ATerm l_106 (ATerm), ATerm t)
{
  ATerm y_74 (ATerm t)
  {
    ATerm q_41 = t;
    int r_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(r_41);
      }
    else
      {
        t = q_41;
        t = Cons_2_0(l_106, y_74, t);
      }
    return(t);
  }
  t = y_74(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm a_75 = NULL,b_75 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_75 = ATgetFirst((ATermList) t);
      b_75 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_75 = NULL,g_75 = NULL;
        t = b_75;
        t = g_0(t);
        f_75 = t;
        t = a_75;
        t = f_0(t);
        g_75 = t;
        t = b_75;
        {
          ATerm a_16 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(f_75), g_75);
            return(t);
          }
          t = reverse_acc_2_0(f_0, a_16, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_16;
      t = g_0(t);
    }
  return(t);
}
ATerm u_9 (ATerm u_83, ATerm v_83, ATerm t)
{
  t = SSL_table_get(u_83, v_83);
  return(t);
}
ATerm Program_1_0 (ATerm d_101 (ATerm), ATerm t)
{
  ATerm h_75 = NULL,i_75 = NULL,j_75 = NULL,k_75 = NULL,a_4 = NULL,b_4 = NULL;
  k_75 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_75);
  h_75 = t;
  t = i_75;
  t = d_101(t);
  j_75 = t;
  b_4 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, j_75);
  a_4 = t;
  t = SSLsetAnnotations(a_4, h_75);
  return(t);
}
ATerm b_16 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm d_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_16 (ATerm t)
{
  ATerm p_75 = NULL;
  p_75 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_75), term_s_41);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_75 = NULL,o_75 = NULL;
  ATerm t_41 = t;
  int u_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_40;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_41);
    }
  else
    {
      t = t_41;
      t = fetch_1_0(b_16, t);
    }
  t = term_v_41;
  t = echo_0_0(t);
  t = term_u_39;
  n_75 = t;
  t = term_v_39;
  o_75 = t;
  t = term_w_41;
  t = u_9(n_75, o_75, t);
  t = reverse_acc_2_0(_id, d_16, t);
  t = map_1_0(e_16, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm e_101 (ATerm), ATerm t)
{
  ATerm q_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL,d_4 = NULL,f_4 = NULL;
  t_75 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      r_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_75);
  q_75 = t;
  t = r_75;
  t = e_101(t);
  s_75 = t;
  f_4 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, s_75);
  d_4 = t;
  t = SSLsetAnnotations(d_4, q_75);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_75 = NULL,a_76 = NULL,b_76 = NULL;
  x_75 = t;
  {
    ATerm x_41 = t;
    int y_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_75;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_41 = ATgetFirst((ATermList) t);
                ATerm a_42 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_75;
          }
        ;
        LocalPopChoice(y_41);
      }
    else
      {
        t = x_41;
        t = (ATerm) ATinsert(ATempty, x_75);
      }
    a_76 = t;
    t = term_y_36;
    b_76 = t;
    t = SSL_printnl(b_76, a_76);
    t = x_75;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_p_40;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm f_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_16 (ATerm t)
{
  ATerm k_76 = NULL,l_76 = NULL;
  t = term_b_42;
  k_76 = t;
  t = term_c_16;
  l_76 = t;
  t = term_c_42;
  t = x_9(k_76, l_76, t);
  return(t);
}
ATerm m_16 (ATerm t)
{
  t = term_d_42;
  return(t);
}
ATerm n_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_16 (ATerm t)
{
  ATerm m_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL;
  t = term_b_42;
  m_76 = t;
  t = term_c_16;
  n_76 = t;
  t = term_c_42;
  t = x_9(m_76, n_76, t);
  t = term_e_42;
  o_76 = t;
  t = term_c_16;
  p_76 = t;
  t = term_f_42;
  t = x_9(o_76, p_76, t);
  t = term_g_42;
  return(t);
}
ATerm p_16 (ATerm t)
{
  t = term_h_42;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_42 = t;
  int j_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_16, h_16, m_16, t);
      ;
      LocalPopChoice(j_42);
    }
  else
    {
      t = i_42;
      t = Option_3_0(n_16, o_16, p_16, t);
    }
  return(t);
}
ATerm q_16 (ATerm t)
{
  ATerm s_76 = NULL,t_76 = NULL;
  s_76 = t;
  t = term_p_40;
  t_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_40, s_76);
  t = x_9(t_76, s_76, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, s_76);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_135 (ATerm), ATerm t)
{
  ATerm r_76 = NULL;
  r_76 = t;
  {
    ATerm k_42 = t;
    int l_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_42;
        t = f_135(t);
        ;
        LocalPopChoice(l_42);
      }
    else
      {
        t = k_42;
      }
    t = r_76;
    {
      ATerm r_16 (ATerm t)
      {
        ATerm n_42 = t;
        int o_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_42 = t;
            int q_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(q_42);
              }
            else
              {
                t = p_42;
                t = f_135(t);
                t = Cons_2_0(_id, r_16, t);
              }
            ;
            LocalPopChoice(o_42);
          }
        else
          {
            t = n_42;
            {
              ATerm v_76 = NULL,w_76 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_76 = ATgetFirst((ATermList) t);
                  w_76 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(w_76), (ATerm) ATmakeAppl(sym_Undefined_1, v_76));
            }
          }
        return(t);
      }
      t = Cons_2_0(q_16, r_16, t);
    }
  }
  return(t);
}
ATerm v_16 (ATerm t)
{
  ATerm m_77 = NULL;
  m_77 = t;
  if(match_string(t, "--help"))
    {
      t = m_77;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_77;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_77;
        }
    }
  return(t);
}
ATerm w_16 (ATerm t)
{
  ATerm n_77 = NULL,t_77 = NULL;
  t = term_p_41;
  n_77 = t;
  t = term_c_16;
  t_77 = t;
  t = term_r_42;
  t = x_9(n_77, t_77, t);
  t = term_s_42;
  return(t);
}
ATerm y_16 (ATerm t)
{
  t = term_t_42;
  return(t);
}
ATerm z_16 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_135 (ATerm), ATerm t)
{
  ATerm d_77 = NULL,e_77 = NULL,h_77 = NULL,i_77 = NULL,j_77 = NULL,k_77 = NULL,l_77 = NULL;
  d_77 = t;
  t = term_u_39;
  i_77 = t;
  t = term_v_39;
  j_77 = t;
  t = (ATerm) ATempty;
  k_77 = t;
  t = SSL_table_put(i_77, j_77, k_77);
  t = d_77;
  {
    ATerm u_16 (ATerm t)
    {
      ATerm u_42 = t;
      int v_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_135(t);
          ;
          LocalPopChoice(v_42);
        }
      else
        {
          t = u_42;
          {
            ATerm w_42 = t;
            int x_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(v_16, w_16, y_16, t);
                ;
                LocalPopChoice(x_42);
              }
            else
              {
                t = w_42;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_16, t);
    {
      ATerm y_42 = t;
      int z_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_78 = NULL;
          a_78 = t;
          {
            ATerm a_43 = t;
            int b_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_13 = NULL;
                t = a_78;
                {
                  ATerm c_43 = t;
                  int d_43 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_p_41;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(d_43);
                    }
                  else
                    {
                      t = c_43;
                      t = fetch_1_0(z_16, t);
                    }
                  t = a_78;
                  t = default_system_usage_0_0(t);
                  t = term_c_21;
                  z_13 = t;
                  t = SSL_exit(z_13);
                }
                ;
                LocalPopChoice(b_43);
              }
            else
              {
                t = a_43;
                {
                  ATerm h_14 = NULL;
                  t = term_b_42;
                  t = get_config_0_0(t);
                  t = a_78;
                  t = default_system_about_0_0(t);
                  t = term_c_21;
                  h_14 = t;
                  t = SSL_exit(h_14);
                }
              }
          }
          ;
          LocalPopChoice(z_42);
        }
      else
        {
          t = y_42;
          {
            ATerm e_43 = t;
            int f_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_78 = NULL,c_78 = NULL,d_78 = NULL;
                ATerm b_17 (ATerm t)
                {
                  ATerm c_17 (ATerm t)
                  {
                    if(((e_77 != NULL) && (e_77 != t)))
                      _fail(t);
                    else
                      e_77 = t;
                    return(t);
                  }
                  t = Undefined_1_0(c_17, t);
                  return(t);
                }
                t = fetch_1_0(b_17, t);
                t = term_c_18;
                b_78 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_77)), term_g_43);
                c_78 = t;
                t = SSL_printnl(b_78, c_78);
                t = (ATerm) ATmakeAppl(sym__2, term_c_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_77)), term_g_43));
                t = default_system_usage_0_0(t);
                t = term_f_18;
                d_78 = t;
                t = SSL_exit(d_78);
                ;
                LocalPopChoice(f_43);
              }
            else
              {
                t = e_43;
              }
          }
        }
      h_77 = t;
      t = term_u_39;
      l_77 = t;
      t = SSL_table_destroy(l_77);
      t = h_77;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_133 (ATerm), ATerm f_133 (ATerm), ATerm g_133 (ATerm), ATerm h_133 (ATerm), ATerm t)
{
  ATerm g_78 = NULL,h_78 = NULL,i_78 = NULL,j_78 = NULL;
  t = parse_options_1_0(e_133, t);
  g_78 = t;
  t = term_l_43;
  h_78 = t;
  t = SSL_table_create(h_78);
  t = term_l_43;
  i_78 = t;
  t = term_m_43;
  j_78 = t;
  t = SSL_table_put(i_78, j_78, g_78);
  t = g_78;
  t = g_133(t);
  {
    ATerm n_43 = t;
    int p_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_133, t);
        ;
        LocalPopChoice(p_43);
      }
    else
      {
        t = n_43;
        {
          ATerm q_43 = t;
          int r_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_133(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(r_43);
            }
          else
            {
              t = q_43;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm f_17 (ATerm t)
{
  t = if_verbose2_1_0(n_17, t);
  return(t);
}
ATerm k_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_17 (ATerm t)
{
  ATerm k_78 = NULL,l_78 = NULL;
  t = term_s_43;
  k_78 = t;
  t = term_c_16;
  l_78 = t;
  t = term_t_43;
  t = x_9(k_78, l_78, t);
  t = term_y_43;
  return(t);
}
ATerm m_17 (ATerm t)
{
  t = term_z_43;
  return(t);
}
ATerm n_17 (ATerm t)
{
  ATerm m_78 = NULL,n_78 = NULL,o_78 = NULL,p_78 = NULL;
  m_78 = t;
  t = term_p_40;
  t = get_config_0_0(t);
  n_78 = t;
  t = term_c_18;
  o_78 = t;
  t = (ATerm) ATinsert(ATempty, n_78);
  p_78 = t;
  t = SSL_printnl(o_78, p_78);
  t = m_78;
  return(t);
}
ATerm iowrap_3_0 (ATerm n_132 (ATerm), ATerm o_132 (ATerm), ATerm p_132 (ATerm), ATerm t)
{
  ATerm d_17 (ATerm t)
  {
    ATerm a_44 = t;
    int b_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_132(t);
        ;
        LocalPopChoice(b_44);
      }
    else
      {
        t = a_44;
        {
          ATerm c_44 = t;
          int d_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(d_44);
            }
          else
            {
              t = c_44;
              {
                ATerm e_44 = t;
                int f_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(f_44);
                  }
                else
                  {
                    t = e_44;
                    {
                      ATerm g_44 = t;
                      int n_44 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(k_17, l_17, m_17, t);
                          ;
                          LocalPopChoice(n_44);
                        }
                      else
                        {
                          t = g_44;
                          {
                            ATerm o_44 = t;
                            int p_44 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(p_44);
                              }
                            else
                              {
                                t = o_44;
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
  ATerm j_17 (ATerm t)
  {
    ATerm q_78 = NULL,r_78 = NULL,s_78 = NULL;
    q_78 = t;
    {
      ATerm q_44 = t;
      int r_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_17 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((r_78 != NULL) && (r_78 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_78 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(o_17, t);
          ;
          LocalPopChoice(r_44);
        }
      else
        {
          t = q_44;
          t = term_w_44;
          r_78 = t;
        }
      t = not_null(r_78);
      t = ReadFromFile_0_0(t);
      s_78 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_78, s_78);
      t = apply_strategy_1_0(n_132, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(d_17, p_132, f_17, j_17, t);
  return(t);
}
ATerm p_17 (ATerm t)
{
  t = _2_0(_id, q_17, t);
  return(t);
}
ATerm q_17 (ATerm t)
{
  t = Specification_1_0(r_17, t);
  return(t);
}
ATerm r_17 (ATerm t)
{
  t = Cons_2_0(_id, s_17, t);
  return(t);
}
ATerm s_17 (ATerm t)
{
  t = Cons_2_0(a_18, b_18, t);
  return(t);
}
ATerm a_18 (ATerm t)
{
  t = Strategies_1_0(all_defs_0_0, t);
  return(t);
}
ATerm b_18 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(p_17, _fail, default_usage_0_0, t);
  return(t);
}
