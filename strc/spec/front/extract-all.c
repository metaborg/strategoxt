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
ATerm term_y_36;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_n_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_l_34;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_o_31;
ATerm term_l_31;
ATerm term_u_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_n_30;
ATerm term_j_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_l_29;
ATerm term_f_29;
ATerm term_c_29;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_e_20;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_v_17;
ATerm term_k_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_b_17;
ATerm term_e_16;
ATerm term_n_14;
ATerm term_y_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
void init_constant_terms (void)
{
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Sort_2, term_k_19, (ATerm) ATempty);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_ConstType_1, term_l_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym__2, term_y_31, term_e_16);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_16);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym__2, term_d_32, term_g_25);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(sym__2, term_p_32, term_q_32);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym__2, term_c_35, term_g_25);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_g_25);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(sym__2, term_r_33, term_g_25);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(sym__2, term_u_30, term_g_25);
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm p_7 (ATerm m_21, ATerm n_21, ATerm p_21, ATerm);
ATerm giving_up_0_0 (ATerm);
ATerm a_0 (ATerm);
ATerm DefinitionExists_0_0 (ATerm);
ATerm sboundin_3_0 (ATerm m_87 (ATerm), ATerm n_87 (ATerm), ATerm o_87 (ATerm), ATerm);
ATerm e_0 (ATerm);
ATerm w_7 (ATerm h_31, ATerm g_31, ATerm);
ATerm u_0 (ATerm);
ATerm w_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm free_vars2_4_0 (ATerm b_99 (ATerm), ATerm c_99 (ATerm), ATerm d_99 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm e_99 (ATerm), ATerm);
ATerm h_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm c_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm svars_arity_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm pat_td_1_0 (ATerm n_86 (ATerm), ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm map1_1_0 (ATerm s_0 (ATerm), ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm w_3 (ATerm);
ATerm e_8 (ATerm m_28, ATerm n_28, ATerm o_28, ATerm);
ATerm c_45 (ATerm m_44, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm c_4 (ATerm);
ATerm e_4 (ATerm);
ATerm g_4 (ATerm);
ATerm k_4 (ATerm);
ATerm m_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm repeat_1_0 (ATerm f_101 (ATerm), ATerm);
ATerm z_4 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm a_5 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm l_89 (ATerm), ATerm);
ATerm i_8 (ATerm z_23, ATerm a_24, ATerm b_24, ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm h_88 (ATerm), ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm tuple_unzip_1_0 (ATerm j_92 (ATerm), ATerm);
ATerm MkDistApplication_0_0 (ATerm);
ATerm j_8 (ATerm d_50, ATerm e_50, ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm copy_1_0 (ATerm g_105 (ATerm), ATerm);
ATerm k_8 (ATerm h_20, ATerm i_20, ATerm);
ATerm last_0_0 (ATerm);
ATerm g_61 (ATerm b_58, ATerm c_58, ATerm e_58, ATerm f_58, ATerm);
ATerm h_61 (ATerm c_60, ATerm d_60, ATerm e_60, ATerm f_60, ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm DefineCongruence_0_0 (ATerm);
ATerm x_5 (ATerm);
ATerm c_6 (ATerm);
ATerm choices_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm alltd_1_0 (ATerm z_89 (ATerm), ATerm);
ATerm e_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm q_87 (ATerm), ATerm r_87 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm p_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm JoinDefs2_0_0 (ATerm);
ATerm a_64 (ATerm q_61, ATerm r_61, ATerm s_61, ATerm t_61, ATerm);
ATerm get_definition_0_0 (ATerm);
ATerm at_end_1_0 (ATerm y_94 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm v_65 (ATerm m_65, ATerm);
ATerm conc_0_0 (ATerm);
ATerm q_8 (ATerm d_102 (ATerm), ATerm p_46, ATerm o_46, ATerm);
ATerm genzip_4_0 (ATerm t_92 (ATerm), ATerm u_92 (ATerm), ATerm v_92 (ATerm), ATerm w_92 (ATerm), ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm v_8 (ATerm o_655, ATerm t_655, ATerm z_65, ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm q_70 (ATerm u_68, ATerm v_68, ATerm w_68, ATerm);
ATerm r_7 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm x_8 (ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm j_117 (ATerm), ATerm w_66, ATerm t_66, ATerm b_67, ATerm x_66, ATerm u_66, ATerm v_66, ATerm);
ATerm GnNextChangeGraph_3_0 (ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm j_117 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm u_101 (ATerm), ATerm v_101 (ATerm), ATerm);
ATerm for_3_0 (ATerm x_101 (ATerm), ATerm y_101 (ATerm), ATerm z_101 (ATerm), ATerm);
ATerm m_8 (ATerm);
ATerm p_8 (ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm y_8 (ATerm);
ATerm z_8 (ATerm);
ATerm b_9 (ATerm);
ATerm y_26 (ATerm d_26, ATerm e_26, ATerm);
ATerm extract_needed_defs_0_0 (ATerm);
ATerm a_9 (ATerm q_117 (ATerm), ATerm u_67, ATerm s_67, ATerm);
ATerm Arities_0_0 (ATerm);
ATerm c_9 (ATerm i_63, ATerm j_63, ATerm);
ATerm e_76 (ATerm u_75, ATerm);
ATerm Definitions_0_0 (ATerm);
ATerm o_9 (ATerm);
ATerm w_9 (ATerm);
ATerm y_9 (ATerm);
ATerm z_9 (ATerm);
ATerm a_10 (ATerm);
ATerm c_10 (ATerm);
ATerm d_10 (ATerm);
ATerm e_10 (ATerm);
ATerm h_10 (ATerm);
ATerm RegisterSDefT_0_0 (ATerm);
ATerm i_10 (ATerm);
ATerm j_10 (ATerm);
ATerm l_10 (ATerm);
ATerm m_10 (ATerm);
ATerm n_10 (ATerm);
ATerm o_10 (ATerm);
ATerm d_9 (ATerm q_21, ATerm s_21, ATerm t_21, ATerm);
ATerm e_9 (ATerm l_102 (ATerm), ATerm m_102 (ATerm), ATerm v_46, ATerm u_46, ATerm);
ATerm f_9 (ATerm i_102 (ATerm), ATerm r_46, ATerm q_46, ATerm);
ATerm foldr_3_0 (ATerm s_104 (ATerm), ATerm t_104 (ATerm), ATerm u_104 (ATerm), ATerm);
ATerm s_10 (ATerm);
ATerm t_10 (ATerm);
ATerm u_10 (ATerm);
ATerm v_10 (ATerm);
ATerm all_defs_0_0 (ATerm);
ATerm Cons_2_0 (ATerm r_72 (ATerm), ATerm s_72 (ATerm), ATerm);
ATerm g_9 (ATerm i_53, ATerm j_53, ATerm);
ATerm h_9 (ATerm w_56, ATerm x_56, ATerm);
ATerm j_9 (ATerm x_109 (ATerm), ATerm i_513, ATerm a_57, ATerm);
ATerm i_9 (ATerm s_56, ATerm t_56, ATerm);
ATerm w_10 (ATerm);
ATerm x_10 (ATerm);
ATerm output_1_0 (ATerm g_114 (ATerm), ATerm);
ATerm u_79 (ATerm o_79, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm k_9 (ATerm y_56, ATerm);
ATerm l_9 (ATerm k_53, ATerm l_53, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm f_81 (ATerm e_80, ATerm);
ATerm g_81 (ATerm i_80, ATerm j_80, ATerm k_80, ATerm);
ATerm h_81 (ATerm s_80, ATerm t_80, ATerm u_80, ATerm);
ATerm m_9 (ATerm);
ATerm y_10 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm h_114 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm z_10 (ATerm);
ATerm a_11 (ATerm);
ATerm b_11 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm c_11 (ATerm);
ATerm e_11 (ATerm);
ATerm f_11 (ATerm);
ATerm g_11 (ATerm);
ATerm h_11 (ATerm);
ATerm j_11 (ATerm);
ATerm k_11 (ATerm);
ATerm l_11 (ATerm);
ATerm m_11 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm u_9 (ATerm z_57, ATerm a_58, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm o_11 (ATerm);
ATerm p_11 (ATerm);
ATerm q_11 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm s_9 (ATerm x_62, ATerm y_62, ATerm w_62, ATerm);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm r_11 (ATerm);
ATerm s_11 (ATerm);
ATerm t_11 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm n_9 (ATerm x_49, ATerm y_49, ATerm);
ATerm foldr_2_0 (ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm u_11 (ATerm);
ATerm v_11 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm h_111 (ATerm), ATerm);
ATerm w_11 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm x_11 (ATerm);
ATerm need_help_1_0 (ATerm x_113 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm a_12 (ATerm);
ATerm c_12 (ATerm);
ATerm e_12 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm s_94 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm q_9 (ATerm g_46, ATerm h_46, ATerm);
ATerm debug_1_0 (ATerm v_109 (ATerm), ATerm);
ATerm map_1_0 (ATerm i_94 (ATerm), ATerm);
ATerm h_12 (ATerm);
ATerm j_12 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm r_9 (ATerm o_64, ATerm p_64, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm k_12 (ATerm);
ATerm m_12 (ATerm);
ATerm n_12 (ATerm);
ATerm o_12 (ATerm);
ATerm p_12 (ATerm);
ATerm q_12 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm a_116 (ATerm), ATerm);
ATerm s_12 (ATerm);
ATerm u_12 (ATerm);
ATerm y_12 (ATerm);
ATerm z_12 (ATerm);
ATerm parse_options_1_0 (ATerm z_115 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm z_113 (ATerm), ATerm a_114 (ATerm), ATerm b_114 (ATerm), ATerm c_114 (ATerm), ATerm);
ATerm g_13 (ATerm);
ATerm h_13 (ATerm);
ATerm i_13 (ATerm);
ATerm j_13 (ATerm);
ATerm k_13 (ATerm);
ATerm l_13 (ATerm);
ATerm m_13 (ATerm);
ATerm n_13 (ATerm);
ATerm o_13 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm p_7 (ATerm m_21, ATerm n_21, ATerm p_21, ATerm t)
{
  ATerm c_0 = NULL,t_0 = NULL;
  t = term_p_13;
  c_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_13), p_21), term_s_13), n_21), term_r_13), m_21), term_q_13);
  t_0 = t;
  t = SSL_printnl(c_0, t_0);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_13), p_21), term_s_13), n_21), term_r_13), m_21), term_q_13);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm v_0 = NULL,x_0 = NULL,y_0 = NULL;
  t = term_p_13;
  x_0 = t;
  t = (ATerm) ATinsert(ATempty, term_w_13);
  y_0 = t;
  t = SSL_printnl(x_0, y_0);
  t = term_y_13;
  v_0 = t;
  t = SSL_exit(v_0);
  t = (ATerm) ATinsert(ATempty, term_w_13);
  return(t);
}
ATerm a_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_13 = ATgetArgument(t, 0);
      if(((ATgetType(z_13) != AT_INT) || (ATgetInt((ATermInt) z_13) != 0)))
        _fail(t);
      {
        ATerm a_14 = ATgetArgument(t, 1);
        if(((ATgetType(a_14) != AT_INT) || (ATgetInt((ATermInt) a_14) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm v_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL,z_1 = NULL;
  v_1 = t;
  if(match_cons(t, sym__2))
    {
      w_1 = ATgetArgument(t, 0);
      x_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_1;
  if(match_cons(t, sym__2))
    {
      y_1 = ATgetArgument(t, 0);
      z_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_1;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = z_1;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm c_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_0 = NULL,q_0 = NULL;
        t = w_1;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm g_14 = ATgetFirst((ATermList) t);
            ATerm h_14 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(h_14) == AT_LIST) && !(ATisEmpty(h_14))))
              {
                ATerm k_14 = ATgetFirst((ATermList) h_14);
                ATerm l_14 = (ATerm) ATgetNext((ATermList) h_14);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm m_14 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(a_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = m_14;
            }
          t = term_p_13;
          o_0 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, w_1), term_n_14);
          q_0 = t;
          t = SSL_printnl(o_0, q_0);
          t = (ATerm) ATinsert(ATinsert(ATempty, w_1), term_n_14);
          t = giving_up_0_0(t);
        }
        ;
        LocalPopChoice(e_14);
      }
    else
      {
        t = c_14;
        {
          ATerm c_1 = NULL,d_1 = NULL;
          t = w_1;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm s_14 = ATgetFirst((ATermList) t);
              if(match_cons(s_14, sym__2))
                {
                  c_1 = ATgetArgument(s_14, 0);
                  d_1 = ATgetArgument(s_14, 1);
                }
              else
                _fail(t);
              {
                ATerm t_14 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(t_14) != AT_LIST) || !(ATisEmpty(t_14))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, w_1, (ATerm) ATmakeAppl(sym__2, c_1, d_1));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, w_1, (ATerm) ATmakeAppl(sym__2, c_1, d_1));
        }
      }
  }
  return(t);
}
ATerm sboundin_3_0 (ATerm m_87 (ATerm), ATerm n_87 (ATerm), ATerm o_87 (ATerm), ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL,l_4 = NULL,q_4 = NULL,t_4 = NULL;
  l_4 = t;
  if(match_cons(t, sym_Let_2))
    {
      q_4 = ATgetArgument(t, 0);
      t_4 = ATgetArgument(t, 1);
      {
        ATerm p_1 = NULL,d_2 = NULL,e_2 = NULL,i_1 = NULL;
        t = SSLgetAnnotations(l_4);
        p_1 = t;
        t = q_4;
        t = m_87(t);
        d_2 = t;
        t = t_4;
        t = m_87(t);
        e_2 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, d_2, e_2);
        i_1 = t;
        t = SSLsetAnnotations(i_1, p_1);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          q_4 = ATgetArgument(t, 0);
          t_4 = ATgetArgument(t, 1);
          i_4 = ATgetArgument(t, 2);
          {
            ATerm b_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,j_1 = NULL;
            t = SSLgetAnnotations(l_4);
            b_4 = t;
            t = q_4;
            t = o_87(t);
            n_4 = t;
            t = t_4;
            t = o_87(t);
            o_4 = t;
            t = i_4;
            t = m_87(t);
            p_4 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, n_4, o_4, p_4);
            j_1 = t;
            t = SSLsetAnnotations(j_1, b_4);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              q_4 = ATgetArgument(t, 0);
              t_4 = ATgetArgument(t, 1);
              i_4 = ATgetArgument(t, 2);
              j_4 = ATgetArgument(t, 3);
              {
                ATerm g_5 = NULL,t_5 = NULL,y_5 = NULL,z_5 = NULL,b_6 = NULL,k_1 = NULL;
                t = SSLgetAnnotations(l_4);
                g_5 = t;
                t = q_4;
                t = o_87(t);
                t_5 = t;
                t = t_4;
                t = o_87(t);
                y_5 = t;
                t = i_4;
                t = o_87(t);
                z_5 = t;
                t = j_4;
                t = m_87(t);
                b_6 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, t_5, y_5, z_5, b_6);
                k_1 = t;
                t = SSLsetAnnotations(k_1, g_5);
              }
            }
          else
            {
              ATerm z_6 = NULL,c_7 = NULL,d_7 = NULL,l_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  q_4 = ATgetArgument(t, 0);
                  t_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(l_4);
              z_6 = t;
              t = q_4;
              t = o_87(t);
              c_7 = t;
              t = t_4;
              t = m_87(t);
              d_7 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, c_7, d_7);
              l_1 = t;
              t = SSLsetAnnotations(l_1, z_6);
            }
        }
    }
  return(t);
}
ATerm e_0 (ATerm t)
{
  ATerm j_5 = NULL;
  ATerm y_14 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          j_5 = ATgetArgument(t, 0);
          {
            ATerm c_15 = ATgetArgument(t, 1);
          }
          {
            ATerm d_15 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_15);
      t = j_5;
    }
  else
    {
      t = y_14;
      if(match_cons(t, sym_SDefT_4))
        {
          j_5 = ATgetArgument(t, 0);
          {
            ATerm e_15 = ATgetArgument(t, 1);
          }
          {
            ATerm f_15 = ATgetArgument(t, 2);
          }
          {
            ATerm g_15 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = j_5;
    }
  return(t);
}
ATerm w_7 (ATerm h_31, ATerm g_31, ATerm t)
{
  t = h_31;
  t = map_1_0(e_0, t);
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
ATerm z_0 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL;
  if(match_cons(t, sym__2))
    {
      f_8 = ATgetArgument(t, 0);
      g_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_9(a_1, f_8, g_8, t);
  return(t);
}
ATerm a_1 (ATerm t)
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
ATerm b_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm p_9 = NULL,t_9 = NULL;
  if(match_cons(t, sym__2))
    {
      p_9 = ATgetArgument(t, 0);
      t_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_9(f_1, p_9, t_9, t);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm v_9 = NULL;
  if(match_cons(t, sym__2))
    {
      v_9 = ATgetArgument(t, 0);
      if((v_9 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm v_6 = NULL;
  if(match_cons(t, sym__2))
    {
      v_6 = ATgetArgument(t, 0);
      if((v_6 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm b_99 (ATerm), ATerm c_99 (ATerm), ATerm d_99 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm e_99 (ATerm), ATerm t)
{
  ATerm w_6 (ATerm t)
  {
    ATerm a_6 = NULL,d_6 = NULL,f_6 = NULL;
    f_6 = t;
    {
      ATerm i_15 = t;
      int j_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_99(t);
          ;
          LocalPopChoice(j_15);
        }
      else
        {
          t = i_15;
          t = (ATerm) ATempty;
        }
      a_6 = t;
      t = f_6;
      {
        ATerm l_15 = t;
        int m_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_6 = NULL,o_7 = NULL,q_7 = NULL;
            t = c_99(t);
            g_6 = t;
            t = f_6;
            {
              ATerm m_0 (ATerm t)
              {
                ATerm i_7 = NULL;
                t = w_6(t);
                i_7 = t;
                t = (ATerm) ATmakeAppl(sym__2, i_7, g_6);
                t = q_8(e_99, i_7, g_6, t);
                return(t);
              }
              t = d_99(m_0, w_6, u_0, t);
              q_7 = t;
              t = SSL_explode_term(q_7);
              if(match_cons(t, sym__2))
                {
                  ATerm n_15 = ATgetArgument(t, 0);
                  o_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = o_7;
              t = foldr_3_0(w_0, z_0, _id, t);
            }
            ;
            LocalPopChoice(m_15);
          }
        else
          {
            t = l_15;
            {
              ATerm o_8 = NULL;
              t = SSL_explode_term(f_6);
              if(match_cons(t, sym__2))
                {
                  ATerm p_15 = ATgetArgument(t, 0);
                  o_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = o_8;
              t = foldr_3_0(b_1, e_1, w_6, t);
            }
          }
        d_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_6, d_6);
        t = f_9(g_1, a_6, d_6, t);
      }
    }
    return(t);
  }
  t = w_6(t);
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm j_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL,x_7 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm r_15 = ATgetArgument(t, 0);
      if(match_cons(r_15, sym_SVar_1))
        {
          j_7 = ATgetArgument(r_15, 0);
        }
      else
        _fail(t);
      t_7 = ATgetArgument(t, 1);
      u_7 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = t_7;
  t = foldr_3_0(o_1, q_1, r_1, t);
  v_7 = t;
  t = u_7;
  t = foldr_3_0(s_1, c_2, f_2, t);
  x_7 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_7, (ATerm) ATmakeAppl(sym__2, v_7, x_7)));
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm c_8 = NULL,l_8 = NULL,n_8 = NULL,t_8 = NULL,w_8 = NULL;
  c_8 = t;
  if(match_cons(t, sym_Let_2))
    {
      l_8 = ATgetArgument(t, 0);
      n_8 = ATgetArgument(t, 1);
      t = c_8;
      t = w_7(l_8, n_8, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          l_8 = ATgetArgument(t, 0);
          n_8 = ATgetArgument(t, 1);
          t_8 = ATgetArgument(t, 2);
          t = n_8;
          t = map_1_0(g_2, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              l_8 = ATgetArgument(t, 0);
              n_8 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, l_8);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  l_8 = ATgetArgument(t, 0);
                  n_8 = ATgetArgument(t, 1);
                  t_8 = ATgetArgument(t, 2);
                  w_8 = ATgetArgument(t, 3);
                  t = n_8;
                  t = map_1_0(j_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      l_8 = ATgetArgument(t, 0);
                      n_8 = ATgetArgument(t, 1);
                      t_8 = ATgetArgument(t, 2);
                      w_8 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_8;
                  t = map_1_0(k_2, t);
                }
            }
        }
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm b_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_15 = ATgetArgument(t, 0);
      if(match_cons(s_15, sym__2))
        {
          b_12 = ATgetArgument(s_15, 0);
          {
            ATerm t_15 = ATgetArgument(s_15, 1);
          }
        }
      else
        _fail(t);
      if((b_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_e_16;
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL;
  if(match_cons(t, sym__2))
    {
      y_7 = ATgetArgument(t, 0);
      z_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_9(y_7, z_7, t);
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_y_13;
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_e_16;
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm a_8 = NULL,b_8 = NULL;
  if(match_cons(t, sym__2))
    {
      a_8 = ATgetArgument(t, 0);
      b_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_9(a_8, b_8, t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_y_13;
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm g_10 = NULL;
  ATerm g_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_10 = ATgetArgument(t, 0);
          {
            ATerm k_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_16);
      t = g_10;
    }
  else
    {
      t = g_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_10;
    }
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm d_11 = NULL;
  ATerm l_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_11 = ATgetArgument(t, 0);
          {
            ATerm o_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_16);
      t = d_11;
    }
  else
    {
      t = l_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_11;
    }
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm y_11 = NULL;
  ATerm v_16 = t;
  int w_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_11 = ATgetArgument(t, 0);
          {
            ATerm y_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_16);
      t = y_11;
    }
  else
    {
      t = v_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_11;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(h_1, m_1, sboundin_3_0, n_1, t);
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm m_20 = NULL,t_20 = NULL,u_20 = NULL;
  t_20 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      u_20 = ATgetArgument(t, 0);
      m_20 = ATgetArgument(t, 1);
      {
        ATerm x_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL;
        t = t_20;
        t = new_0_0(t);
        x_20 = t;
        t = new_0_0(t);
        z_20 = t;
        t = new_0_0(t);
        a_21 = t;
        t = new_0_0(t);
        b_21 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_21), a_21), z_20), x_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, x_20), (ATerm) ATmakeAppl(sym_Var_1, a_21))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, u_20, (ATerm)ATmakeAppl(sym_Var_1, x_20), (ATerm) ATmakeAppl(sym_Var_1, z_20)), (ATerm) ATmakeAppl(sym_BAM_3, m_20, (ATerm)ATmakeAppl(sym_Var_1, a_21), (ATerm) ATmakeAppl(sym_Var_1, b_21)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_b_17, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, b_21)), (ATerm) ATmakeAppl(sym_Var_1, z_20))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          u_20 = ATgetArgument(t, 0);
          {
            ATerm c_21 = NULL,d_21 = NULL,g_21 = NULL,w_21 = NULL;
            t = t_20;
            t = new_0_0(t);
            g_21 = t;
            t = u_20;
            {
              ATerm l_2 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((c_21 != NULL) && (c_21 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      c_21 = ATgetArgument(t, 0);
                    if(((d_21 != NULL) && (d_21 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      d_21 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, g_21);
                return(t);
              }
              t = oncetd_1_0(l_2, t);
              w_21 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_b_17, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_21)), not_null(c_21))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_21)), (ATerm) ATmakeAppl(sym_Build_1, w_21))));
            }
          }
        }
      else
        {
          ATerm y_21 = NULL,z_21 = NULL,k_22 = NULL,m_22 = NULL,s_22 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              u_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_20;
          t = new_0_0(t);
          k_22 = t;
          t = new_0_0(t);
          m_22 = t;
          t = u_20;
          {
            ATerm m_2 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((y_21 != NULL) && (y_21 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    y_21 = ATgetArgument(t, 0);
                  if(((z_21 != NULL) && (z_21 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    z_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, k_22);
              return(t);
            }
            t = oncetd_1_0(m_2, t);
            s_22 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, s_22), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_22)), (ATerm) ATmakeAppl(sym_PrimT_3, term_d_17, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, m_22))))), (ATerm)ATmakeAppl(sym_Var_1, k_22), (ATerm) ATmakeAppl(sym_Op_2, term_e_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_21)), not_null(y_21)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL;
  u_22 = t;
  if(match_cons(t, sym_Match_1))
    {
      v_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL;
        t = u_22;
        t = new_0_0(t);
        z_22 = t;
        t = v_22;
        {
          ATerm n_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((x_22 != NULL) && (x_22 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_22 = ATgetArgument(t, 0);
                if(((y_22 != NULL) && (y_22 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  y_22 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, z_22), x_22);
            return(t);
          }
          t = pat_td_1_0(n_2, t);
          a_23 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_23), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_k_17, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, z_22))), (ATerm) ATmakeAppl(sym_Match_1, not_null(y_22))))));
        }
        ;
        LocalPopChoice(i_17);
      }
    else
      {
        t = h_17;
        {
          ATerm l_17 = t;
          int m_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_23 = NULL,n_23 = NULL,q_23 = NULL;
              t = u_22;
              t = new_0_0(t);
              n_23 = t;
              t = v_22;
              {
                ATerm o_2 (ATerm t)
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
                  t = (ATerm) ATmakeAppl(sym_Var_1, n_23);
                  return(t);
                }
                t = pat_td_1_0(o_2, t);
                q_23 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, q_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, n_23)), not_null(h_23))));
              }
              ;
              LocalPopChoice(m_17);
            }
          else
            {
              t = l_17;
              {
                ATerm s_23 = NULL,v_23 = NULL,y_23 = NULL,j_24 = NULL;
                t = u_22;
                t = new_0_0(t);
                y_23 = t;
                t = v_22;
                {
                  ATerm p_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((v_23 != NULL) && (v_23 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          v_23 = ATgetArgument(t, 0);
                        if(((s_23 != NULL) && (s_23 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          s_23 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, y_23);
                    return(t);
                  }
                  t = pat_td_1_0(p_2, t);
                  j_24 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, j_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, y_23)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(s_23)), not_null(v_23)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm n_86 (ATerm), ATerm t)
{
  ATerm n_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_86(t);
      ;
      LocalPopChoice(q_17);
    }
  else
    {
      t = n_17;
      {
        ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL;
        g_33 = t;
        if(match_cons(t, sym_Op_2))
          {
            h_33 = ATgetArgument(t, 0);
            i_33 = ATgetArgument(t, 1);
            {
              ATerm k_10 = NULL,p_10 = NULL,t_1 = NULL;
              t = SSLgetAnnotations(g_33);
              k_10 = t;
              t = i_33;
              {
                ATerm q_2 (ATerm t)
                {
                  t = pat_td_1_0(n_86, t);
                  return(t);
                }
                t = fetch_1_0(q_2, t);
                p_10 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, h_33, p_10);
                t_1 = t;
                t = SSLsetAnnotations(t_1, k_10);
              }
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                h_33 = ATgetArgument(t, 0);
                i_33 = ATgetArgument(t, 1);
                {
                  ATerm r_17 = t;
                  int s_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_11 = NULL,n_11 = NULL,u_1 = NULL;
                      t = SSLgetAnnotations(g_33);
                      i_11 = t;
                      t = i_33;
                      t = pat_td_1_0(n_86, t);
                      n_11 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, h_33, n_11);
                      u_1 = t;
                      t = SSLsetAnnotations(u_1, i_11);
                      ;
                      LocalPopChoice(s_17);
                    }
                  else
                    {
                      t = r_17;
                      {
                        ATerm i_12 = NULL,l_12 = NULL,a_2 = NULL;
                        t = SSLgetAnnotations(g_33);
                        i_12 = t;
                        t = h_33;
                        t = pat_td_1_0(n_86, t);
                        l_12 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, l_12, i_33);
                        a_2 = t;
                        t = SSLsetAnnotations(a_2, i_12);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    h_33 = ATgetArgument(t, 0);
                    i_33 = ATgetArgument(t, 1);
                    f_33 = ATgetArgument(t, 2);
                    {
                      ATerm x_12 = NULL,c_13 = NULL,b_2 = NULL;
                      t = SSLgetAnnotations(g_33);
                      x_12 = t;
                      t = f_33;
                      {
                        ATerm u_2 (ATerm t)
                        {
                          t = pat_td_1_0(n_86, t);
                          return(t);
                        }
                        t = fetch_1_0(u_2, t);
                        c_13 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, h_33, i_33, c_13);
                        b_2 = t;
                        t = SSLsetAnnotations(b_2, x_12);
                      }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        h_33 = ATgetArgument(t, 0);
                        i_33 = ATgetArgument(t, 1);
                        f_33 = ATgetArgument(t, 2);
                        {
                          ATerm f_14 = NULL,o_14 = NULL,h_2 = NULL;
                          t = SSLgetAnnotations(g_33);
                          f_14 = t;
                          t = f_33;
                          {
                            ATerm v_2 (ATerm t)
                            {
                              t = pat_td_1_0(n_86, t);
                              return(t);
                            }
                            t = fetch_1_0(v_2, t);
                            o_14 = t;
                            t = (ATerm) ATmakeAppl(sym_CallT_3, h_33, i_33, o_14);
                            h_2 = t;
                            t = SSLsetAnnotations(h_2, f_14);
                          }
                        }
                      }
                    else
                      {
                        ATerm h_15 = NULL,k_15 = NULL,i_2 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            h_33 = ATgetArgument(t, 0);
                            i_33 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(g_33);
                        h_15 = t;
                        t = i_33;
                        t = pat_td_1_0(n_86, t);
                        k_15 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, h_33, k_15);
                        i_2 = t;
                        t = SSLsetAnnotations(i_2, h_15);
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
  ATerm a_34 = NULL,c_34 = NULL;
  a_34 = t;
  if(match_cons(t, sym_Build_1))
    {
      c_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_17 = t;
    int u_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_34 = NULL,e_34 = NULL,j_34 = NULL,n_34 = NULL;
        t = a_34;
        t = new_0_0(t);
        j_34 = t;
        t = c_34;
        {
          ATerm w_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((d_34 != NULL) && (d_34 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  d_34 = ATgetArgument(t, 0);
                if(((e_34 != NULL) && (e_34 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  e_34 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, j_34);
            return(t);
          }
          t = pat_td_1_0(w_2, t);
          n_34 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_34), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_v_17, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_34)), not_null(d_34))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_34)))), (ATerm) ATmakeAppl(sym_Build_1, n_34)));
        }
        ;
        LocalPopChoice(u_17);
      }
    else
      {
        t = t_17;
        {
          ATerm w_17 = t;
          int d_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_34 = NULL,r_34 = NULL,s_34 = NULL;
              t = a_34;
              t = new_0_0(t);
              r_34 = t;
              t = c_34;
              {
                ATerm z_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((o_34 != NULL) && (o_34 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        o_34 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, r_34);
                  return(t);
                }
                t = pat_td_1_0(z_2, t);
                s_34 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_34), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_34), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_34)))), (ATerm) ATmakeAppl(sym_Build_1, s_34)));
              }
              ;
              LocalPopChoice(d_18);
            }
          else
            {
              t = w_17;
              {
                ATerm u_34 = NULL,v_34 = NULL,y_34 = NULL,z_34 = NULL;
                t = a_34;
                t = new_0_0(t);
                y_34 = t;
                t = c_34;
                {
                  ATerm a_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((u_34 != NULL) && (u_34 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          u_34 = ATgetArgument(t, 0);
                        if(((v_34 != NULL) && (v_34 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          v_34 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, y_34);
                    return(t);
                  }
                  t = pat_td_1_0(a_3, t);
                  z_34 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_34), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(u_34), not_null(v_34), (ATerm) ATmakeAppl(sym_Var_1, y_34))), (ATerm) ATmakeAppl(sym_Build_1, z_34)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm map1_1_0 (ATerm s_0 (ATerm), ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL;
  a_37 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_37 = ATgetFirst((ATermList) t);
      c_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm o_18 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL,b_16 = NULL,c_16 = NULL,h_16 = NULL,i_16 = NULL,s_2 = NULL,r_2 = NULL;
        t = SSLgetAnnotations(a_37);
        c_16 = t;
        t = b_37;
        t = s_0(t);
        h_16 = t;
        t = (ATerm) ATinsert(CheckATermList(c_37), h_16);
        r_2 = t;
        t = SSLsetAnnotations(r_2, c_16);
        i_16 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_15 = ATgetFirst((ATermList) t);
            w_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_16);
        u_15 = t;
        t = w_15;
        {
          ATerm i_19 = t;
          int j_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(s_0, t);
              ;
              LocalPopChoice(j_19);
            }
          else
            {
              t = i_19;
            }
          b_16 = t;
          t = (ATerm) ATinsert(CheckATermList(b_16), v_15);
          s_2 = t;
          t = SSLsetAnnotations(s_2, u_15);
        }
        ;
        LocalPopChoice(h_19);
      }
    else
      {
        t = o_18;
        {
          ATerm g_17 = NULL,j_17 = NULL,t_2 = NULL;
          t = SSLgetAnnotations(a_37);
          g_17 = t;
          t = c_37;
          t = map1_1_0(s_0, t);
          j_17 = t;
          t = (ATerm) ATinsert(CheckATermList(j_17), b_37);
          t_2 = t;
          t = SSLsetAnnotations(t_2, g_17);
        }
      }
  }
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm p_39 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      p_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, p_39, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_19), term_m_19));
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL;
  r_39 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      q_39 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, q_39, term_m_19);
    }
  else
    {
      t = r_39;
    }
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm j_40 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      j_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, j_40, term_m_19);
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL;
  l_40 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      k_40 = ATgetArgument(t, 0);
      {
        ATerm o_19 = t;
        int p_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, k_40, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_19), term_m_19));
            ;
            LocalPopChoice(p_19);
          }
        else
          {
            t = o_19;
            t = l_40;
          }
      }
    }
  else
    {
      t = l_40;
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm x_40 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      x_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, x_40, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_19), term_m_19));
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm y_40 = NULL,d_41 = NULL;
  d_41 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      y_40 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, y_40, term_m_19);
    }
  else
    {
      t = d_41;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,c_38 = NULL,e_38 = NULL,i_38 = NULL,j_38 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      i_38 = ATgetArgument(t, 0);
      j_38 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, i_38, j_38);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          i_38 = ATgetArgument(t, 0);
          t = i_38;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              y_37 = ATgetFirst((ATermList) t);
              z_37 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, y_37, (ATerm) ATmakeAppl(sym_LChoices_1, z_37));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_q_19;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              i_38 = ATgetArgument(t, 0);
              t = i_38;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_37 = ATgetFirst((ATermList) t);
                  z_37 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, y_37, (ATerm) ATmakeAppl(sym_Choices_1, z_37));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_q_19;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  i_38 = ATgetArgument(t, 0);
                  t = i_38;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      y_37 = ATgetFirst((ATermList) t);
                      z_37 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_37, (ATerm) ATmakeAppl(sym_Seqs_1, z_37));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_r_19;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      i_38 = ATgetArgument(t, 0);
                      j_38 = ATgetArgument(t, 1);
                      e_38 = ATgetArgument(t, 2);
                      c_38 = ATgetArgument(t, 3);
                      {
                        ATerm f_39 = NULL,l_39 = NULL;
                        t = j_38;
                        t = map1_1_0(c_3, t);
                        f_39 = t;
                        t = e_38;
                        t = map1_1_0(d_3, t);
                        l_39 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, i_38, f_39, l_39, c_38);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          i_38 = ATgetArgument(t, 0);
                          j_38 = ATgetArgument(t, 1);
                          e_38 = ATgetArgument(t, 2);
                          c_38 = ATgetArgument(t, 3);
                          {
                            ATerm u_19 = t;
                            int v_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm c_40 = NULL,e_40 = NULL;
                                t = e_38;
                                t = map1_1_0(i_3, t);
                                c_40 = t;
                                t = j_38;
                                t = map_1_0(j_3, t);
                                e_40 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, i_38, e_40, c_40, c_38);
                                ;
                                LocalPopChoice(v_19);
                              }
                            else
                              {
                                t = u_19;
                                {
                                  ATerm s_40 = NULL,w_40 = NULL;
                                  t = j_38;
                                  t = map1_1_0(k_3, t);
                                  s_40 = t;
                                  t = e_38;
                                  t = map_1_0(l_3, t);
                                  w_40 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, i_38, s_40, w_40, c_38);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              i_38 = ATgetArgument(t, 0);
                              j_38 = ATgetArgument(t, 1);
                              e_38 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, j_38, (ATerm) ATmakeAppl(sym_Op_2, term_e_17, (ATerm) ATinsert(ATinsert(ATempty, e_38), i_38)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  i_38 = ATgetArgument(t, 0);
                                  j_38 = ATgetArgument(t, 1);
                                  e_38 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, e_38)), i_38), (ATerm) ATmakeAppl(sym_Build_1, j_38)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      i_38 = ATgetArgument(t, 0);
                                      j_38 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_38, (ATerm) ATmakeAppl(sym_Match_1, j_38));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          i_38 = ATgetArgument(t, 0);
                                          j_38 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, i_38), j_38);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              i_38 = ATgetArgument(t, 0);
                                              j_38 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_38), i_38);
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
ATerm m_3 (ATerm t)
{
  ATerm z_19 = t;
  if((PushChoice() == 0))
    {
      ATerm d_43 = NULL,e_43 = NULL,f_43 = NULL,x_2 = NULL;
      f_43 = t;
      if(match_cons(t, sym_Var_1))
        {
          e_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_43);
      d_43 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, e_43);
      x_2 = t;
      t = SSLsetAnnotations(x_2, d_43);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_19;
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_e_20;
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_43 = ATgetFirst((ATermList) t);
      h_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_43, h_43);
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm i_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_20 = ATgetArgument(t, 0);
      if(match_cons(v_20, sym__2))
        {
          i_43 = ATgetArgument(v_20, 0);
          l_43 = ATgetArgument(v_20, 1);
        }
      else
        _fail(t);
      {
        ATerm w_20 = ATgetArgument(t, 1);
        if(match_cons(w_20, sym__2))
          {
            m_43 = ATgetArgument(w_20, 0);
            n_43 = ATgetArgument(w_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_43), i_43), (ATerm) ATinsert(CheckATermList(n_43), l_43));
  return(t);
}
ATerm t_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_e_20;
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm p_43 = NULL,q_43 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_43 = ATgetFirst((ATermList) t);
      q_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_43, q_43);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm t_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_21 = ATgetArgument(t, 0);
      if(match_cons(f_21, sym__2))
        {
          t_43 = ATgetArgument(f_21, 0);
          v_43 = ATgetArgument(f_21, 1);
        }
      else
        _fail(t);
      {
        ATerm k_21 = ATgetArgument(t, 1);
        if(match_cons(k_21, sym__2))
          {
            w_43 = ATgetArgument(k_21, 0);
            x_43 = ATgetArgument(k_21, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_43), t_43), (ATerm) ATinsert(CheckATermList(x_43), v_43));
  return(t);
}
ATerm e_8 (ATerm m_28, ATerm n_28, ATerm o_28, ATerm t)
{
  ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,y_2 = NULL;
  t = o_28;
  t = fetch_1_0(m_3, t);
  t = o_28;
  t = genzip_4_0(n_3, p_3, q_3, LiftPrimArg_0_0, t);
  o_42 = t;
  if(match_cons(t, sym__2))
    {
      f_42 = ATgetArgument(t, 0);
      g_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_42);
  e_42 = t;
  t = f_42;
  t = concat_0_0(t);
  m_42 = t;
  t = g_42;
  t = genzip_4_0(t_3, u_3, w_3, _id, t);
  n_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_42, n_42);
  y_2 = t;
  t = SSLsetAnnotations(y_2, e_42);
  if(match_cons(t, sym__2))
    {
      b_42 = ATgetArgument(t, 0);
      {
        ATerm l_21 = ATgetArgument(t, 1);
        if(match_cons(l_21, sym__2))
          {
            c_42 = ATgetArgument(l_21, 0);
            d_42 = ATgetArgument(l_21, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, b_42, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_42), (ATerm) ATmakeAppl(sym_CallT_3, m_28, n_28, d_42)));
  return(t);
}
ATerm c_45 (ATerm m_44, ATerm t)
{
  ATerm p_44 = NULL;
  t = m_44;
  {
    ATerm o_21 = t;
    if((PushChoice() == 0))
      {
        ATerm q_44 = NULL,r_44 = NULL,y_44 = NULL,b_3 = NULL;
        y_44 = t;
        if(match_cons(t, sym_Var_1))
          {
            r_44 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_44);
        q_44 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, r_44);
        b_3 = t;
        t = SSLsetAnnotations(b_3, q_44);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_21;
      }
    t = new_0_0(t);
    p_44 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, p_44), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_44), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, p_44)))), (ATerm) ATmakeAppl(sym_Var_1, p_44)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL;
  z_44 = t;
  if(match_cons(t, sym_Var_1))
    {
      a_45 = ATgetArgument(t, 0);
      {
        ATerm r_21 = t;
        int u_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_45(z_44, t);
            ;
            LocalPopChoice(u_21);
          }
        else
          {
            t = r_21;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_r_19, (ATerm) ATmakeAppl(sym_Var_1, a_45)));
          }
      }
    }
  else
    {
      t = c_45(z_44, t);
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm v_21 = t;
  if((PushChoice() == 0))
    {
      ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL,e_3 = NULL;
      u_18 = t;
      if(match_cons(t, sym_Var_1))
        {
          t_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_18);
      s_18 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, t_18);
      e_3 = t;
      t = SSLsetAnnotations(e_3, s_18);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_21;
    }
  return(t);
}
ATerm a_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_e_20;
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_18 = ATgetFirst((ATermList) t);
      w_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_18, w_18);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_21 = ATgetArgument(t, 0);
      if(match_cons(x_21, sym__2))
        {
          x_18 = ATgetArgument(x_21, 0);
          y_18 = ATgetArgument(x_21, 1);
        }
      else
        _fail(t);
      {
        ATerm a_22 = ATgetArgument(t, 1);
        if(match_cons(a_22, sym__2))
          {
            z_18 = ATgetArgument(a_22, 0);
            a_19 = ATgetArgument(a_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_18), x_18), (ATerm) ATinsert(CheckATermList(a_19), y_18));
  return(t);
}
ATerm g_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_e_20;
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_19 = ATgetFirst((ATermList) t);
      c_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_19, c_19);
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_22 = ATgetArgument(t, 0);
      if(match_cons(b_22, sym__2))
        {
          d_19 = ATgetArgument(b_22, 0);
          e_19 = ATgetArgument(b_22, 1);
        }
      else
        _fail(t);
      {
        ATerm d_22 = ATgetArgument(t, 1);
        if(match_cons(d_22, sym__2))
          {
            f_19 = ATgetArgument(d_22, 0);
            g_19 = ATgetArgument(d_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_19), d_19), (ATerm) ATinsert(CheckATermList(g_19), e_19));
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm e_22 = t;
  if((PushChoice() == 0))
    {
      ATerm g_20 = NULL,j_20 = NULL,k_20 = NULL,g_3 = NULL;
      k_20 = t;
      if(match_cons(t, sym_Var_1))
        {
          j_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_20);
      g_20 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, j_20);
      g_3 = t;
      t = SSLsetAnnotations(g_3, g_20);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_22;
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_e_20;
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm l_20 = NULL,n_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_20 = ATgetFirst((ATermList) t);
      n_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_20, n_20);
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_22 = ATgetArgument(t, 0);
      if(match_cons(f_22, sym__2))
        {
          o_20 = ATgetArgument(f_22, 0);
          p_20 = ATgetArgument(f_22, 1);
        }
      else
        _fail(t);
      {
        ATerm g_22 = ATgetArgument(t, 1);
        if(match_cons(g_22, sym__2))
          {
            q_20 = ATgetArgument(g_22, 0);
            r_20 = ATgetArgument(g_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_20), o_20), (ATerm) ATinsert(CheckATermList(r_20), p_20));
  return(t);
}
ATerm w_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_e_20;
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm s_20 = NULL,y_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_20 = ATgetFirst((ATermList) t);
      y_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_20, y_20);
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm e_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_22 = ATgetArgument(t, 0);
      if(match_cons(h_22, sym__2))
        {
          e_21 = ATgetArgument(h_22, 0);
          h_21 = ATgetArgument(h_22, 1);
        }
      else
        _fail(t);
      {
        ATerm i_22 = ATgetArgument(t, 1);
        if(match_cons(i_22, sym__2))
          {
            i_21 = ATgetArgument(i_22, 0);
            j_21 = ATgetArgument(i_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_21), e_21), (ATerm) ATinsert(CheckATermList(j_21), h_21));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL;
  f_49 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      g_49 = ATgetArgument(t, 0);
      h_49 = ATgetArgument(t, 1);
      e_49 = ATgetArgument(t, 2);
      {
        ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,r_18 = NULL,f_3 = NULL;
        t = e_49;
        t = fetch_1_0(z_3, t);
        t = e_49;
        t = genzip_4_0(a_4, c_4, e_4, LiftPrimArg_0_0, t);
        r_18 = t;
        if(match_cons(t, sym__2))
          {
            j_18 = ATgetArgument(t, 0);
            k_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_18);
        a_18 = t;
        t = j_18;
        t = concat_0_0(t);
        l_18 = t;
        t = k_18;
        t = genzip_4_0(g_4, k_4, m_4, _id, t);
        m_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_18, m_18);
        f_3 = t;
        t = SSLsetAnnotations(f_3, a_18);
        if(match_cons(t, sym__2))
          {
            x_17 = ATgetArgument(t, 0);
            {
              ATerm j_22 = ATgetArgument(t, 1);
              if(match_cons(j_22, sym__2))
                {
                  y_17 = ATgetArgument(j_22, 0);
                  z_17 = ATgetArgument(j_22, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, x_17, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, y_17), (ATerm) ATmakeAppl(sym_PrimT_3, g_49, h_49, z_17)));
      }
    }
  else
    {
      ATerm s_19 = NULL,t_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,f_20 = NULL,h_3 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          g_49 = ATgetArgument(t, 0);
          h_49 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_49;
      t = fetch_1_0(r_4, t);
      t = h_49;
      t = genzip_4_0(s_4, u_4, v_4, LiftPrimArg_0_0, t);
      f_20 = t;
      if(match_cons(t, sym__2))
        {
          y_19 = ATgetArgument(t, 0);
          b_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_20);
      x_19 = t;
      t = y_19;
      t = concat_0_0(t);
      c_20 = t;
      t = b_20;
      t = genzip_4_0(w_4, x_4, y_4, _id, t);
      d_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_20, d_20);
      h_3 = t;
      t = SSLsetAnnotations(h_3, x_19);
      if(match_cons(t, sym__2))
        {
          s_19 = ATgetArgument(t, 0);
          {
            ATerm l_22 = ATgetArgument(t, 1);
            if(match_cons(l_22, sym__2))
              {
                t_19 = ATgetArgument(l_22, 0);
                w_19 = ATgetArgument(l_22, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, s_19, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, t_19), (ATerm) ATmakeAppl(sym_PrimT_3, g_49, (ATerm)ATempty, w_19)));
    }
  return(t);
}
ATerm repeat_1_0 (ATerm f_101 (ATerm), ATerm t)
{
  ATerm n_49 (ATerm t)
  {
    ATerm n_22 = t;
    int o_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_101(t);
        t = n_49(t);
        ;
        LocalPopChoice(o_22);
      }
    else
      {
        t = n_22;
      }
    return(t);
  }
  t = n_49(t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL,f_50 = NULL,g_50 = NULL;
  g_50 = t;
  if(match_cons(t, sym_Con_3))
    {
      b_50 = ATgetArgument(t, 0);
      c_50 = ATgetArgument(t, 1);
      f_50 = ATgetArgument(t, 2);
      {
        ATerm c_22 = NULL,o_3 = NULL;
        t = SSLgetAnnotations(g_50);
        c_22 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, b_50, c_50, f_50);
        o_3 = t;
        t = SSLsetAnnotations(o_3, c_22);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = g_50;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm p_22 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(z_4, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_22;
    }
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm i_51 = NULL,j_51 = NULL,k_51 = NULL,l_51 = NULL;
  j_51 = t;
  if(match_cons(t, sym_Con_3))
    {
      k_51 = ATgetArgument(t, 0);
      l_51 = ATgetArgument(t, 1);
      i_51 = ATgetArgument(t, 2);
      {
        ATerm r_22 = NULL,r_3 = NULL;
        t = SSLgetAnnotations(j_51);
        r_22 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, k_51, l_51, i_51);
        r_3 = t;
        t = SSLsetAnnotations(r_3, r_22);
      }
    }
  else
    {
      ATerm o_23 = NULL,s_3 = NULL;
      if(match_cons(t, sym_App_2))
        {
          k_51 = ATgetArgument(t, 0);
          l_51 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_51);
      o_23 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, k_51, l_51);
      s_3 = t;
      t = SSLsetAnnotations(s_3, o_23);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm q_22 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(a_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_22;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm t_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      t_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_51;
  if(match_cons(t, sym_StratRule_3))
    {
      a_52 = ATgetArgument(t, 0);
      b_52 = ATgetArgument(t, 1);
      c_52 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_52), (ATerm) ATmakeAppl(sym_Where_1, c_52)), a_52));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          a_52 = ATgetArgument(t, 0);
          b_52 = ATgetArgument(t, 1);
          c_52 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = a_52;
      t = pureterm_0_0(t);
      t = b_52;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, b_52)), (ATerm) ATmakeAppl(sym_Where_1, c_52)), (ATerm) ATmakeAppl(sym_Match_1, a_52)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm l_89 (ATerm), ATerm t)
{
  ATerm m_52 (ATerm t)
  {
    ATerm t_22 = t;
    int w_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_89(t);
        ;
        LocalPopChoice(w_22);
      }
    else
      {
        t = t_22;
        t = SRTS_one(m_52, t);
      }
    return(t);
  }
  t = m_52(t);
  return(t);
}
ATerm i_8 (ATerm z_23, ATerm a_24, ATerm b_24, ATerm t)
{
  ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL;
  t = new_0_0(t);
  r_52 = t;
  t = z_23;
  {
    ATerm b_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm b_23 = ATgetArgument(t, 0);
          if(match_cons(b_23, sym_Var_1))
            {
              if(((q_52 != NULL) && (q_52 != ATgetArgument(b_23, 0))))
                _fail(ATgetArgument(b_23, 0));
              else
                q_52 = ATgetArgument(b_23, 0);
            }
          else
            _fail(t);
          if(((o_52 != NULL) && (o_52 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            o_52 = ATgetArgument(t, 1);
          {
            ATerm c_23 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, q_52);
      return(t);
    }
    t = oncetd_1_0(b_5, t);
    s_52 = t;
    t = a_24;
    {
      ATerm d_5 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm d_23 = ATgetArgument(t, 0);
            if(match_cons(d_23, sym_Var_1))
              {
                if(((q_52 != NULL) && (q_52 != ATgetArgument(d_23, 0))))
                  _fail(ATgetArgument(d_23, 0));
                else
                  q_52 = ATgetArgument(d_23, 0);
              }
            else
              _fail(t);
            if(((p_52 != NULL) && (p_52 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              p_52 = ATgetArgument(t, 1);
            {
              ATerm e_23 = ATgetArgument(t, 2);
              if(match_cons(e_23, sym_CallT_3))
                {
                  if(((n_52 != NULL) && (n_52 != ATgetArgument(e_23, 0))))
                    _fail(ATgetArgument(e_23, 0));
                  else
                    n_52 = ATgetArgument(e_23, 0);
                  {
                    ATerm f_23 = ATgetArgument(e_23, 1);
                    if(((ATgetType(f_23) != AT_LIST) || !(ATisEmpty(f_23))))
                      _fail(t);
                  }
                  {
                    ATerm g_23 = ATgetArgument(e_23, 2);
                    if(((ATgetType(g_23) != AT_LIST) || !(ATisEmpty(g_23))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, r_52);
        return(t);
      }
      t = oncetd_1_0(d_5, t);
      t_52 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_52), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, s_52, t_52, (ATerm) ATmakeAppl(sym_Seq_2, b_24, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(n_52), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(o_52), not_null(p_52), term_r_19))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(q_52)), (ATerm) ATmakeAppl(sym_Var_1, r_52))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm i_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_23 = t;
      int l_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_53 = NULL,h_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL;
          p_53 = t;
          if(match_cons(t, sym_SRule_1))
            {
              q_53 = ATgetArgument(t, 0);
              t = q_53;
              if(match_cons(t, sym_Rule_3))
                {
                  g_53 = ATgetArgument(t, 0);
                  h_53 = ATgetArgument(t, 1);
                  o_53 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = p_53;
              t = i_8(g_53, h_53, o_53, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm g_24 = NULL,k_24 = NULL,v_3 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  q_53 = ATgetArgument(t, 0);
                  r_53 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(p_53);
              g_24 = t;
              t = r_53;
              t = desugarRule_0_0(t);
              k_24 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, q_53, k_24);
              v_3 = t;
              t = SSLsetAnnotations(v_3, g_24);
            }
          ;
          LocalPopChoice(l_23);
        }
      else
        {
          t = k_23;
          t = RtoS_0_0(t);
        }
      ;
      LocalPopChoice(j_23);
    }
  else
    {
      t = i_23;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm h_88 (ATerm), ATerm t)
{
  ATerm e_5 (ATerm t)
  {
    t = topdown_1_0(h_88, t);
    return(t);
  }
  t = h_88(t);
  t = SRTS_all(e_5, t);
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm m_23 = t;
  int p_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(p_23);
    }
  else
    {
      t = m_23;
    }
  t = repeat_1_0(i_5, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm r_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
      LocalPopChoice(t_23);
    }
  else
    {
      t = r_23;
      {
        ATerm u_23 = t;
        int w_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL;
            f_54 = t;
            if(match_cons(t, sym_CallT_3))
              {
                g_54 = ATgetArgument(t, 0);
                h_54 = ATgetArgument(t, 1);
                i_54 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = f_54;
            t = e_8(g_54, h_54, i_54, t);
            ;
            LocalPopChoice(w_23);
          }
        else
          {
            t = u_23;
            {
              ATerm x_23 = t;
              int c_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(c_24);
                }
              else
                {
                  t = x_23;
                  {
                    ATerm d_24 = t;
                    int e_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(e_24);
                      }
                    else
                      {
                        t = d_24;
                        {
                          ATerm f_24 = t;
                          int h_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm i_24 = t;
                              int l_24 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      n_54 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = n_54;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      o_54 = ATgetArgument(t, 0);
                                      t = o_54;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          o_54 = ATgetArgument(t, 0);
                                          p_54 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, o_54, p_54);
                                    }
                                  ;
                                  LocalPopChoice(l_24);
                                }
                              else
                                {
                                  t = i_24;
                                  t = Mapp2_0_0(t);
                                }
                              ;
                              LocalPopChoice(h_24);
                            }
                          else
                            {
                              t = f_24;
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
  t = topdown_1_0(h_5, t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm l_55 = NULL,m_55 = NULL;
  m_55 = t;
  t = SSL_explode_term(m_55);
  if(match_cons(t, sym__2))
    {
      ATerm m_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_24 = ATgetArgument(t, 1);
        if(((ATgetType(n_24) == AT_LIST) && !(ATisEmpty(n_24))))
          {
            l_55 = ATgetFirst((ATermList) n_24);
            {
              ATerm o_24 = (ATerm) ATgetNext((ATermList) n_24);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_55;
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL;
  r_24 = t;
  t = SSL_explode_term(r_24);
  if(match_cons(t, sym__2))
    {
      ATerm s_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_24 = ATgetArgument(t, 1);
        if(((ATgetType(t_24) == AT_LIST) && !(ATisEmpty(t_24))))
          {
            ATerm u_24 = ATgetFirst((ATermList) t_24);
            p_24 = (ATerm) ATgetNext((ATermList) t_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_e_17;
  q_24 = t;
  t = SSL_mkterm(q_24, p_24);
  return(t);
}
ATerm m_5 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm j_92 (ATerm), ATerm t)
{
  ATerm b_55 = NULL,c_55 = NULL;
  ATerm n_55 (ATerm t)
  {
    ATerm w_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_55 = NULL,e_55 = NULL,j_55 = NULL;
        d_55 = t;
        t = map_1_0(k_5, t);
        t = j_92(t);
        e_55 = t;
        t = d_55;
        t = map_1_0(l_5, t);
        t = n_55(t);
        j_55 = t;
        t = (ATerm) ATinsert(CheckATermList(j_55), e_55);
        ;
        LocalPopChoice(x_24);
      }
    else
      {
        t = w_24;
        t = map_1_0(m_5, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = n_55(t);
  c_55 = t;
  t = term_e_17;
  b_55 = t;
  t = SSL_mkterm(b_55, c_55);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm o_55 = NULL;
  o_55 = t;
  {
    ATerm z_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_55 = NULL,r_55 = NULL,y_55 = NULL;
        t = o_55;
        t = new_0_0(t);
        q_55 = t;
        t = new_0_0(t);
        r_55 = t;
        t = new_0_0(t);
        y_55 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, q_55), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_e_17, (ATerm) ATinsert(ATinsert(ATempty, o_55), (ATerm) ATmakeAppl(sym_Var_1, r_55))), (ATerm) ATmakeAppl(sym_Var_1, y_55)), (ATerm)ATmakeAppl(sym_VarDec_2, q_55, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_19), term_m_19)), r_55, (ATerm)ATmakeAppl(sym_Var_1, r_55), y_55, (ATerm) ATmakeAppl(sym_Var_1, y_55));
        ;
        LocalPopChoice(a_25);
      }
    else
      {
        t = z_24;
        {
          ATerm a_56 = NULL,b_56 = NULL,c_56 = NULL;
          t = o_55;
          t = new_0_0(t);
          a_56 = t;
          t = new_0_0(t);
          b_56 = t;
          t = new_0_0(t);
          c_56 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, a_56), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_e_17, (ATerm) ATinsert(ATinsert(ATempty, o_55), (ATerm) ATmakeAppl(sym_Var_1, b_56))), (ATerm) ATmakeAppl(sym_Var_1, c_56)), (ATerm)ATmakeAppl(sym_VarDec_2, a_56, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_19), term_m_19)), b_56, (ATerm)ATmakeAppl(sym_Var_1, b_56), c_56, (ATerm) ATmakeAppl(sym_Var_1, c_56));
        }
      }
  }
  return(t);
}
ATerm j_8 (ATerm d_50, ATerm e_50, ATerm t)
{
  ATerm c_25 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(d_50, e_50);
      ;
      LocalPopChoice(d_25);
    }
  else
    {
      t = c_25;
      t = SSL_subtr(d_50, e_50);
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm d_56 = NULL,e_56 = NULL;
  if(match_cons(t, sym__2))
    {
      d_56 = ATgetArgument(t, 0);
      e_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, d_56, e_56, (ATerm) ATempty);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm f_56 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm e_25 = ATgetArgument(t, 0);
      if(((ATgetType(e_25) != AT_INT) || (ATgetInt((ATermInt) e_25) != 0)))
        _fail(t);
      {
        ATerm f_25 = ATgetArgument(t, 1);
      }
      f_56 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = f_56;
  return(t);
}
ATerm copy_1_0 (ATerm g_105 (ATerm), ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm g_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL,l_56 = NULL,m_56 = NULL;
    if(match_cons(t, sym__3))
      {
        g_56 = ATgetArgument(t, 0);
        h_56 = ATgetArgument(t, 1);
        i_56 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, g_56, term_y_13);
    t = geq_0_0(t);
    t = term_y_13;
    m_56 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_56, term_y_13);
    t = j_8(g_56, m_56, t);
    j_56 = t;
    t = h_56;
    t = g_105(t);
    l_56 = t;
    t = (ATerm) ATmakeAppl(sym__3, j_56, h_56, (ATerm) ATinsert(CheckATermList(i_56), l_56));
    return(t);
  }
  t = for_3_0(n_5, o_5, p_5, t);
  return(t);
}
ATerm k_8 (ATerm h_20, ATerm i_20, ATerm t)
{
  ATerm q_56 = NULL,r_56 = NULL,u_56 = NULL;
  t = new_0_0(t);
  q_56 = t;
  t = new_0_0(t);
  r_56 = t;
  t = new_0_0(t);
  u_56 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, q_56), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_e_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, h_20)), (ATerm) ATmakeAppl(sym_Var_1, r_56))), (ATerm) ATmakeAppl(sym_Op_2, term_e_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, i_20)), (ATerm) ATmakeAppl(sym_Var_1, u_56)))), (ATerm)ATmakeAppl(sym_VarDec_2, q_56, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_19), term_m_19)), r_56, (ATerm)ATmakeAppl(sym_Var_1, r_56), u_56, (ATerm) ATmakeAppl(sym_Var_1, u_56));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm d_57 = NULL,e_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_57 = ATgetFirst((ATermList) t);
      e_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_57;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_57;
    }
  else
    {
      t = e_57;
      t = last_0_0(t);
    }
  return(t);
}
ATerm g_61 (ATerm b_58, ATerm c_58, ATerm e_58, ATerm f_58, ATerm t)
{
  ATerm r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL,v_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL,h_59 = NULL,i_59 = NULL;
  t = term_y_13;
  i_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_58, term_y_13);
  t = n_9(c_58, i_59, t);
  h_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_59, term_g_25);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_58 = ATgetFirst((ATermList) t);
      t_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_58;
  t = last_0_0(t);
  r_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_58), s_58), t_58);
  t = genzip_4_0(q_5, r_5, u_5, v_5, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      u_58 = ATgetArgument(t, 0);
      v_58 = ATgetArgument(t, 1);
      x_58 = ATgetArgument(t, 2);
      y_58 = ATgetArgument(t, 3);
      z_58 = ATgetArgument(t, 4);
      a_59 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_58), x_58), t_58);
  t = concat_0_0(t);
  b_59 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, b_58, term_h_25), v_58, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(b_59), s_58), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_e_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, s_58)), (ATerm) ATmakeAppl(sym_Op_2, b_58, y_58))), (ATerm)ATmakeAppl(sym_Op_2, term_e_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, r_58)), (ATerm) ATmakeAppl(sym_Op_2, b_58, a_59))), (ATerm) ATmakeAppl(sym_Seqs_1, u_58)))));
  return(t);
}
ATerm h_61 (ATerm c_60, ATerm d_60, ATerm e_60, ATerm f_60, ATerm t)
{
  ATerm j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,r_60 = NULL,w_60 = NULL;
  t = f_60;
  t = new_0_0(t);
  j_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_60, (ATerm) ATmakeAppl(sym_Var_1, j_60));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      k_60 = ATgetArgument(t, 0);
      l_60 = ATgetArgument(t, 1);
      m_60 = ATgetArgument(t, 2);
      n_60 = ATgetArgument(t, 3);
      o_60 = ATgetArgument(t, 4);
      r_60 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_60, o_60);
  t = conc_0_0(t);
  w_60 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, c_60, term_i_25), l_60, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(w_60), j_60), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_e_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, j_60)), (ATerm) ATmakeAppl(sym_Op_2, c_60, n_60))), (ATerm)ATmakeAppl(sym_Op_2, c_60, r_60), (ATerm) ATmakeAppl(sym_Seqs_1, k_60)))));
  return(t);
}
ATerm q_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_25 = ATgetArgument(t, 0);
      ATerm l_25 = ATgetArgument(t, 1);
      if(((ATgetType(l_25) != AT_LIST) || !(ATisEmpty(l_25))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm m_59 = NULL,n_59 = NULL,p_59 = NULL,q_59 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_25 = ATgetArgument(t, 0);
      if(((ATgetType(n_25) == AT_LIST) && !(ATisEmpty(n_25))))
        {
          m_59 = ATgetFirst((ATermList) n_25);
          n_59 = (ATerm) ATgetNext((ATermList) n_25);
        }
      else
        _fail(t);
      {
        ATerm o_25 = ATgetArgument(t, 1);
        if(((ATgetType(o_25) == AT_LIST) && !(ATisEmpty(o_25))))
          {
            p_59 = ATgetFirst((ATermList) o_25);
            q_59 = (ATerm) ATgetNext((ATermList) o_25);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_59, p_59), (ATerm) ATmakeAppl(sym__2, n_59, q_59));
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm r_59 = NULL,u_59 = NULL;
  if(match_cons(t, sym__2))
    {
      r_59 = ATgetArgument(t, 0);
      u_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_59), r_59);
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm y_59 = NULL,a_60 = NULL;
  if(match_cons(t, sym__2))
    {
      y_59 = ATgetArgument(t, 0);
      a_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_8(y_59, a_60, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL;
  y_60 = t;
  if(match_cons(t, sym__3))
    {
      z_60 = ATgetArgument(t, 0);
      a_61 = ATgetArgument(t, 1);
      b_61 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_61;
  if(match_string(t, "T"))
    {
      t = b_61;
      if(match_cons(t, sym__2))
        {
          c_61 = ATgetArgument(t, 0);
          d_61 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = c_61;
      if(match_int(t, 0))
        {
          ATerm p_25 = t;
          int q_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_61(z_60, c_61, d_61, y_60, t);
              ;
              LocalPopChoice(q_25);
            }
          else
            {
              t = p_25;
              {
                ATerm f_61 = NULL;
                t = y_60;
                t = new_0_0(t);
                f_61 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, z_60, term_h_25), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_61), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_e_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, f_61)), (ATerm) ATmakeAppl(sym_Op_2, z_60, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_e_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, f_61)), (ATerm) ATmakeAppl(sym_Op_2, z_60, (ATerm) ATempty))), term_r_19))));
              }
            }
        }
      else
        {
          t = g_61(z_60, c_61, d_61, y_60, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = b_61;
      if(match_cons(t, sym__2))
        {
          c_61 = ATgetArgument(t, 0);
          d_61 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_61(z_60, c_61, d_61, y_60, t);
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = term_q_19;
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL,x_9 = NULL;
  f_12 = t;
  t = SSL_explode_term(f_12);
  if(match_cons(t, sym__2))
    {
      ATerm r_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_25 = ATgetArgument(t, 1);
        if(((ATgetType(s_25) == AT_LIST) && !(ATisEmpty(s_25))))
          {
            g_12 = ATgetFirst((ATermList) s_25);
            {
              ATerm t_25 = (ATerm) ATgetNext((ATermList) s_25);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(f_12);
  if(match_cons(t, sym__2))
    {
      ATerm u_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_25 = ATgetArgument(t, 1);
        if(((ATgetType(w_25) == AT_LIST) && !(ATisEmpty(w_25))))
          {
            ATerm x_25 = ATgetFirst((ATermList) w_25);
            ATerm y_25 = (ATerm) ATgetNext((ATermList) w_25);
            if(((ATgetType(y_25) == AT_LIST) && !(ATisEmpty(y_25))))
              {
                x_9 = ATgetFirst((ATermList) y_25);
                {
                  ATerm z_25 = (ATerm) ATgetNext((ATermList) y_25);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, g_12, x_9);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(x_5, c_6, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm t_12 = NULL,v_12 = NULL,w_12 = NULL,a_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL;
  w_12 = t;
  if(match_cons(t, sym__2))
    {
      a_13 = ATgetArgument(t, 0);
      d_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_13;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_13 = ATgetFirst((ATermList) t);
      f_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_13;
  if(match_cons(t, sym__2))
    {
      t_12 = ATgetArgument(t, 0);
      v_12 = ATgetArgument(t, 1);
      {
        ATerm a_26 = t;
        int b_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_12;
            if((a_13 != t))
              {
                _fail(t);
              }
            t = v_12;
            ;
            LocalPopChoice(b_26);
          }
        else
          {
            t = a_26;
            t = (ATerm) ATmakeAppl(sym__2, a_13, f_13);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, a_13, f_13);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm z_89 (ATerm), ATerm t)
{
  ATerm x_13 (ATerm t)
  {
    ATerm c_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_89(t);
        ;
        LocalPopChoice(f_26);
      }
    else
      {
        t = c_26;
        t = SRTS_all(x_13, t);
      }
    return(t);
  }
  t = x_13(t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_26 = ATgetArgument(t, 0);
      if(((ATgetType(g_26) != AT_LIST) || !(ATisEmpty(g_26))))
        _fail(t);
      {
        ATerm h_26 = ATgetArgument(t, 1);
        if(((ATgetType(h_26) != AT_LIST) || !(ATisEmpty(h_26))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL,u_14 = NULL,v_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_26 = ATgetArgument(t, 0);
      if(((ATgetType(i_26) == AT_LIST) && !(ATisEmpty(i_26))))
        {
          q_14 = ATgetFirst((ATermList) i_26);
          r_14 = (ATerm) ATgetNext((ATermList) i_26);
        }
      else
        _fail(t);
      {
        ATerm j_26 = ATgetArgument(t, 1);
        if(((ATgetType(j_26) == AT_LIST) && !(ATisEmpty(j_26))))
          {
            u_14 = ATgetFirst((ATermList) j_26);
            v_14 = (ATerm) ATgetNext((ATermList) j_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_14, u_14), (ATerm) ATmakeAppl(sym__2, r_14, v_14));
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL;
  if(match_cons(t, sym__2))
    {
      w_14 = ATgetArgument(t, 0);
      x_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_14), w_14);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm b_14 = NULL,d_14 = NULL,i_14 = NULL,j_14 = NULL;
  b_14 = t;
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_26 = ATgetArgument(t, 0);
            ATerm t_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(m_26);
        t = b_14;
      }
    else
      {
        t = l_26;
        {
          ATerm p_14 = NULL;
          if(match_cons(t, sym__3))
            {
              d_14 = ATgetArgument(t, 0);
              i_14 = ATgetArgument(t, 1);
              j_14 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, d_14, i_14);
          t = genzip_4_0(e_6, h_6, i_6, _id, t);
          p_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_14, j_14);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm q_87 (ATerm), ATerm r_87 (ATerm), ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL;
  ATerm k_6 (ATerm t)
  {
    ATerm b_10 = NULL;
    t = q_87(t);
    b_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_10, not_null(a_15));
    t = lookup_0_0(t);
    t = r_87(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((a_15 != NULL) && (a_15 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_15 = ATgetArgument(t, 0);
      z_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_14;
  t = alltd_1_0(k_6, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,x_3 = NULL;
  t_16 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      q_16 = ATgetArgument(t, 0);
      r_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_16);
  p_16 = t;
  t = q_16;
  t = new_0_0(t);
  s_16 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, s_16, r_16);
  x_3 = t;
  t = SSLsetAnnotations(x_3, p_16);
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm u_16 = NULL,x_16 = NULL,z_16 = NULL,a_17 = NULL,c_17 = NULL,y_3 = NULL;
  c_17 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      x_16 = ATgetArgument(t, 0);
      z_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_17);
  u_16 = t;
  t = x_16;
  t = new_0_0(t);
  a_17 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, a_17, z_16);
  y_3 = t;
  t = SSLsetAnnotations(y_3, u_16);
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm f_17 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      f_17 = ATgetArgument(t, 0);
      {
        ATerm v_26 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_17), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm o_17 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      o_17 = ATgetArgument(t, 0);
      {
        ATerm w_26 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, o_17);
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm h_18 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      h_18 = ATgetArgument(t, 0);
      {
        ATerm x_26 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = h_18;
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm i_18 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      i_18 = ATgetArgument(t, 0);
      {
        ATerm z_26 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = i_18;
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm n_18 = NULL,p_18 = NULL,q_18 = NULL,n_19 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      p_18 = ATgetArgument(t, 0);
      n_19 = ATgetArgument(t, 1);
      n_18 = ATgetArgument(t, 2);
      t = p_18;
      if(match_cons(t, sym_SVar_1))
        {
          q_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_19;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_18;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_18;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          p_18 = ATgetArgument(t, 0);
          n_19 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_18;
      if(match_cons(t, sym_SVar_1))
        {
          q_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_19;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_18;
    }
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm a_20 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_20;
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm o_15 = NULL,q_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,d_16 = NULL,f_16 = NULL,n_16 = NULL;
  a_16 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_27 = ATgetFirst((ATermList) t);
      if(match_cons(a_27, sym_SDefT_4))
        {
          o_15 = ATgetArgument(a_27, 0);
          q_15 = ATgetArgument(a_27, 1);
          x_15 = ATgetArgument(a_27, 2);
          {
            ATerm c_27 = ATgetArgument(a_27, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm b_27 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_15;
  t = map_1_0(l_6, t);
  y_15 = t;
  t = x_15;
  t = map_1_0(m_6, t);
  z_15 = t;
  t = y_15;
  t = map_1_0(n_6, t);
  f_16 = t;
  t = z_15;
  t = map_1_0(p_6, t);
  d_16 = t;
  t = a_16;
  {
    ATerm r_6 (ATerm t)
    {
      ATerm p_17 = NULL,b_18 = NULL,c_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm d_27 = ATgetArgument(t, 0);
          p_17 = ATgetArgument(t, 1);
          b_18 = ATgetArgument(t, 2);
          c_18 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = b_18;
      t = map_1_0(s_6, t);
      e_18 = t;
      t = p_17;
      t = map_1_0(t_6, t);
      g_18 = t;
      t = (ATerm) ATmakeAppl(sym__3, g_18, f_16, c_18);
      t = substitute_2_0(x_6, _id, t);
      f_18 = t;
      t = (ATerm) ATmakeAppl(sym__3, e_18, d_16, f_18);
      t = substitute_2_0(y_6, _id, t);
      return(t);
    }
    t = map_1_0(r_6, t);
    t = choices_0_0(t);
    n_16 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, o_15, y_15, z_15, n_16);
  }
  return(t);
}
ATerm a_64 (ATerm q_61, ATerm r_61, ATerm s_61, ATerm t_61, ATerm t)
{
  ATerm e_62 = NULL,k_62 = NULL,l_62 = NULL,p_62 = NULL,d_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_61, r_61);
  t = Definitions_0_0(t);
  e_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_62, s_61);
  p_62 = t;
  if(match_cons(t, sym__2))
    {
      ATerm e_27 = ATgetArgument(t, 0);
      ATerm f_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_62);
  k_62 = t;
  t = e_62;
  {
    ATerm g_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_62 = NULL,s_62 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_62 = ATgetFirst((ATermList) t);
            s_62 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_62;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_62;
        ;
        LocalPopChoice(h_27);
      }
    else
      {
        t = g_27;
        t = JoinDefs2_0_0(t);
      }
    l_62 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_62, s_61);
    d_4 = t;
    t = SSLsetAnnotations(d_4, k_62);
  }
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm v_62 = NULL,c_63 = NULL,e_63 = NULL,h_63 = NULL,l_63 = NULL,p_63 = NULL,q_63 = NULL;
  e_63 = t;
  if(match_cons(t, sym__2))
    {
      h_63 = ATgetArgument(t, 0);
      q_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_63;
  if(match_cons(t, sym__2))
    {
      l_63 = ATgetArgument(t, 0);
      p_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_63;
  if(match_cons(t, sym_Mod_2))
    {
      v_62 = ATgetArgument(t, 0);
      c_63 = ATgetArgument(t, 1);
      {
        ATerm i_27 = t;
        int j_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_63 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, v_62, c_63, p_63);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            z_63 = t;
            t = (ATerm) ATmakeAppl(sym__2, z_63, q_63);
            ;
            LocalPopChoice(j_27);
          }
        else
          {
            t = i_27;
            t = a_64(l_63, p_63, q_63, e_63, t);
          }
      }
    }
  else
    {
      t = a_64(l_63, p_63, q_63, e_63, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm y_94 (ATerm), ATerm t)
{
  ATerm g_65 (ATerm t)
  {
    ATerm d_65 = NULL,e_65 = NULL,f_65 = NULL;
    f_65 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_65 = ATgetFirst((ATermList) t);
        e_65 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm y_24 = NULL,b_25 = NULL,f_4 = NULL;
          t = SSLgetAnnotations(f_65);
          y_24 = t;
          t = e_65;
          t = g_65(t);
          b_25 = t;
          t = (ATerm) ATinsert(CheckATermList(b_25), d_65);
          f_4 = t;
          t = SSLsetAnnotations(f_4, y_24);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_65;
        t = y_94(t);
      }
    return(t);
  }
  t = g_65(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_64 = NULL,d_64 = NULL,e_64 = NULL;
  c_64 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_64;
    }
  else
    {
      ATerm a_7 (ATerm t)
      {
        t = not_null(e_64);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_64 = ATgetFirst((ATermList) t);
          if(((e_64 != NULL) && (e_64 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            e_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_64;
      t = at_end_1_0(a_7, t);
    }
  return(t);
}
ATerm v_65 (ATerm m_65, ATerm t)
{
  ATerm n_65 = NULL;
  t = SSL_explode_term(m_65);
  if(match_cons(t, sym__2))
    {
      ATerm k_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      n_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_65;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm p_65 = NULL,q_65 = NULL,r_65 = NULL;
  r_65 = t;
  if(match_cons(t, sym__2))
    {
      p_65 = ATgetArgument(t, 0);
      q_65 = ATgetArgument(t, 1);
      {
        ATerm l_27 = t;
        int m_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_7 (ATerm t)
            {
              t = q_65;
              return(t);
            }
            t = p_65;
            t = at_end_1_0(b_7, t);
            ;
            LocalPopChoice(m_27);
          }
        else
          {
            t = l_27;
            t = v_65(r_65, t);
          }
      }
    }
  else
    {
      t = v_65(r_65, t);
    }
  return(t);
}
ATerm q_8 (ATerm d_102 (ATerm), ATerm p_46, ATerm o_46, ATerm t)
{
  ATerm e_67 (ATerm t)
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
          ATerm o_27 = t;
          int p_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_66;
              {
                ATerm e_7 (ATerm t)
                {
                  t = o_46;
                  return(t);
                }
                t = e_9(d_102, e_7, q_66, r_66, t);
                t = e_67(t);
              }
              ;
              LocalPopChoice(p_27);
            }
          else
            {
              t = o_27;
              {
                ATerm j_25 = NULL,m_25 = NULL,h_4 = NULL;
                t = SSLgetAnnotations(p_66);
                j_25 = t;
                t = r_66;
                t = e_67(t);
                m_25 = t;
                t = (ATerm) ATinsert(CheckATermList(m_25), q_66);
                h_4 = t;
                t = SSLsetAnnotations(h_4, j_25);
              }
            }
        }
      }
    return(t);
  }
  t = p_46;
  t = e_67(t);
  return(t);
}
ATerm genzip_4_0 (ATerm t_92 (ATerm), ATerm u_92 (ATerm), ATerm v_92 (ATerm), ATerm w_92 (ATerm), ATerm t)
{
  ATerm m_67 (ATerm t)
  {
    ATerm q_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_92(t);
        ;
        LocalPopChoice(r_27);
      }
    else
      {
        t = q_27;
        {
          ATerm g_67 = NULL,h_67 = NULL,i_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL,c_5 = NULL;
          t = u_92(t);
          l_67 = t;
          if(match_cons(t, sym__2))
            {
              h_67 = ATgetArgument(t, 0);
              i_67 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_67);
          g_67 = t;
          t = h_67;
          t = w_92(t);
          j_67 = t;
          t = i_67;
          t = m_67(t);
          k_67 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_67, k_67);
          c_5 = t;
          t = SSLsetAnnotations(c_5, g_67);
          t = v_92(t);
        }
      }
    return(t);
  }
  t = m_67(t);
  return(t);
}
ATerm f_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_27 = ATgetArgument(t, 0);
      if(((ATgetType(t_27) != AT_LIST) || !(ATisEmpty(t_27))))
        _fail(t);
      {
        ATerm u_27 = ATgetArgument(t, 1);
        if(((ATgetType(u_27) != AT_LIST) || !(ATisEmpty(u_27))))
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
  ATerm b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_27 = ATgetArgument(t, 0);
      if(((ATgetType(v_27) == AT_LIST) && !(ATisEmpty(v_27))))
        {
          b_68 = ATgetFirst((ATermList) v_27);
          c_68 = (ATerm) ATgetNext((ATermList) v_27);
        }
      else
        _fail(t);
      {
        ATerm x_27 = ATgetArgument(t, 1);
        if(((ATgetType(x_27) == AT_LIST) && !(ATisEmpty(x_27))))
          {
            d_68 = ATgetFirst((ATermList) x_27);
            e_68 = (ATerm) ATgetNext((ATermList) x_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_68, d_68), (ATerm) ATmakeAppl(sym__2, c_68, e_68));
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm f_68 = NULL,g_68 = NULL;
  if(match_cons(t, sym__2))
    {
      f_68 = ATgetArgument(t, 0);
      g_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_68), f_68);
  return(t);
}
ATerm v_8 (ATerm o_655, ATerm t_655, ATerm z_65, ATerm t)
{
  ATerm o_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL;
  t = SSL_explode_term(t_655);
  if(match_cons(t, sym__2))
    {
      o_67 = ATgetArgument(t, 0);
      q_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(o_655);
  if(match_cons(t, sym__2))
    {
      if((o_67 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      p_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_67, q_67);
  t = genzip_4_0(f_7, g_7, h_7, _id, t);
  r_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_67, z_65);
  t = conc_0_0(t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm o_68 = NULL;
  o_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, o_68);
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm p_68 = NULL,q_68 = NULL,r_68 = NULL,t_68 = NULL,f_5 = NULL;
  t_68 = t;
  if(match_cons(t, sym__2))
    {
      q_68 = ATgetArgument(t, 0);
      r_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_68);
  p_68 = t;
  t = r_68;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_68, r_68);
  f_5 = t;
  t = SSLsetAnnotations(f_5, p_68);
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm r_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL,c_70 = NULL;
  r_69 = t;
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
      c_70 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_27 = t;
        int a_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_70(t_69, u_69, r_69, t);
            ;
            LocalPopChoice(a_28);
          }
        else
          {
            t = y_27;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_69), v_69), c_70);
          }
      }
    }
  else
    {
      t = q_70(t_69, u_69, r_69, t);
    }
  return(t);
}
ATerm q_70 (ATerm u_68, ATerm v_68, ATerm w_68, ATerm t)
{
  ATerm x_68 = NULL,a_69 = NULL,s_5 = NULL,f_69 = NULL,g_69 = NULL,h_69 = NULL,j_69 = NULL;
  t = SSLgetAnnotations(w_68);
  x_68 = t;
  t = v_68;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_69 = ATgetFirst((ATermList) t);
      j_69 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = f_69;
  if(match_cons(t, sym__2))
    {
      g_69 = ATgetArgument(t, 0);
      h_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_28 = t;
    int c_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_69;
        if((g_69 != t))
          {
            _fail(t);
          }
        t = j_69;
        ;
        LocalPopChoice(c_28);
      }
    else
      {
        t = b_28;
        t = v_68;
        t = v_8(g_69, h_69, j_69, t);
      }
    a_69 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_68, a_69);
    s_5 = t;
    t = SSLsetAnnotations(s_5, x_68);
  }
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm n_70 = NULL;
  if(match_cons(t, sym__2))
    {
      n_70 = ATgetArgument(t, 0);
      if((n_70 != ATgetArgument(t, 1)))
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
  ATerm d_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(k_7, l_7, m_7, t);
      ;
      LocalPopChoice(e_28);
    }
  else
    {
      t = d_28;
      {
        ATerm h_70 = NULL,i_70 = NULL,j_70 = NULL;
        h_70 = t;
        if(match_cons(t, sym__2))
          {
            i_70 = ATgetArgument(t, 0);
            j_70 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_70;
        t = q_8(r_7, i_70, j_70, t);
      }
    }
  return(t);
}
ATerm x_8 (ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm j_117 (ATerm), ATerm w_66, ATerm t_66, ATerm b_67, ATerm x_66, ATerm u_66, ATerm v_66, ATerm t)
{
  ATerm r_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL,w_70 = NULL,y_70 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_66, x_66);
  t = h_117(t);
  if(match_cons(t, sym__2))
    {
      s_70 = ATgetArgument(t, 0);
      r_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_70;
  t = i_117(t);
  t_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_70, b_67);
  t = diff_0_0(t);
  u_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_70, t_66);
  t = conc_0_0(t);
  v_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_70, b_67);
  t = conc_0_0(t);
  w_70 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_66, s_70, u_66);
  t = j_117(t);
  y_70 = t;
  t = (ATerm) ATmakeAppl(sym__5, v_70, w_70, r_70, y_70, v_66);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm j_117 (ATerm), ATerm t)
{
  ATerm a_71 = NULL,b_71 = NULL,c_71 = NULL,d_71 = NULL,e_71 = NULL,f_71 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm g_28 = ATgetArgument(t, 0);
      if(((ATgetType(g_28) == AT_LIST) && !(ATisEmpty(g_28))))
        {
          a_71 = ATgetFirst((ATermList) g_28);
          b_71 = (ATerm) ATgetNext((ATermList) g_28);
        }
      else
        _fail(t);
      c_71 = ATgetArgument(t, 1);
      d_71 = ATgetArgument(t, 2);
      e_71 = ATgetArgument(t, 3);
      f_71 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = x_8(h_117, i_117, j_117, a_71, b_71, c_71, d_71, e_71, f_71, t);
  return(t);
}
ATerm while_not_2_0 (ATerm u_101 (ATerm), ATerm v_101 (ATerm), ATerm t)
{
  ATerm g_71 (ATerm t)
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_101(t);
        ;
        LocalPopChoice(i_28);
      }
    else
      {
        t = h_28;
        t = v_101(t);
        t = g_71(t);
      }
    return(t);
  }
  t = g_71(t);
  return(t);
}
ATerm for_3_0 (ATerm x_101 (ATerm), ATerm y_101 (ATerm), ATerm z_101 (ATerm), ATerm t)
{
  t = x_101(t);
  t = while_not_2_0(y_101, z_101, t);
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm b_72 = NULL,e_72 = NULL,f_72 = NULL;
  if(match_cons(t, sym__3))
    {
      b_72 = ATgetArgument(t, 0);
      e_72 = ATgetArgument(t, 1);
      f_72 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, b_72, b_72, e_72, f_72, (ATerm) ATempty);
  return(t);
}
ATerm p_8 (ATerm t)
{
  ATerm k_72 = NULL,l_72 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm k_28 = ATgetArgument(t, 0);
      if(((ATgetType(k_28) != AT_LIST) || !(ATisEmpty(k_28))))
        _fail(t);
      {
        ATerm l_28 = ATgetArgument(t, 1);
      }
      {
        ATerm q_28 = ATgetArgument(t, 2);
      }
      k_72 = ATgetArgument(t, 3);
      l_72 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_72, l_72);
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm r_28 = t;
  int s_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, s_8, y_8, t);
      ;
      LocalPopChoice(s_28);
    }
  else
    {
      t = r_28;
      {
        ATerm z_72 = NULL,a_73 = NULL,b_73 = NULL,c_73 = NULL,d_73 = NULL,e_73 = NULL,f_73 = NULL;
        if(match_cons(t, sym__5))
          {
            z_72 = ATgetArgument(t, 0);
            c_73 = ATgetArgument(t, 1);
            d_73 = ATgetArgument(t, 2);
            e_73 = ATgetArgument(t, 3);
            f_73 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = z_72;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_73 = ATgetFirst((ATermList) t);
            b_73 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, b_73, c_73, d_73, e_73, (ATerm) ATinsert(CheckATermList(f_73), a_73));
      }
    }
  return(t);
}
ATerm s_8 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(z_8, t);
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm v_72 = NULL,x_72 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm t_28 = ATgetArgument(t, 0);
      v_72 = ATgetArgument(t, 1);
      x_72 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_72), v_72);
  return(t);
}
ATerm z_8 (ATerm t)
{
  ATerm v_28 = t;
  int w_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      ;
      LocalPopChoice(w_28);
    }
  else
    {
      t = v_28;
    }
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,u_26 = NULL;
  r_26 = t;
  if(match_cons(t, sym__2))
    {
      s_26 = ATgetArgument(t, 0);
      u_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_26;
  if(match_cons(t, sym_Mod_2))
    {
      p_26 = ATgetArgument(t, 0);
      q_26 = ATgetArgument(t, 1);
      {
        ATerm y_28 = t;
        int z_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_26;
            t = p_7(p_26, q_26, u_26, t);
            ;
            LocalPopChoice(z_28);
          }
        else
          {
            t = y_28;
            t = y_26(s_26, u_26, t);
          }
      }
    }
  else
    {
      t = y_26(s_26, u_26, t);
    }
  return(t);
}
ATerm y_26 (ATerm d_26, ATerm e_26, ATerm t)
{
  ATerm k_26 = NULL,o_26 = NULL;
  t = term_p_13;
  k_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_13), e_26), term_s_13), d_26), term_q_13);
  o_26 = t;
  t = SSL_printnl(k_26, o_26);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_13), e_26), term_s_13), d_26), term_q_13);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm i_74 = NULL,j_74 = NULL,k_74 = NULL,l_74 = NULL,m_74 = NULL;
  t = for_3_0(m_8, p_8, r_8, t);
  i_74 = t;
  if(match_cons(t, sym__2))
    {
      j_74 = ATgetArgument(t, 0);
      k_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_74;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_74;
    }
  else
    {
      ATerm v_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_74 = ATgetFirst((ATermList) t);
          m_74 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(m_74), l_74);
      t = map_1_0(b_9, t);
      t = term_y_13;
      v_25 = t;
      t = SSL_exit(v_25);
    }
  return(t);
}
ATerm a_9 (ATerm q_117 (ATerm), ATerm u_67, ATerm s_67, ATerm t)
{
  ATerm s_74 = NULL,t_74 = NULL,u_74 = NULL,v_74 = NULL,w_74 = NULL,x_74 = NULL;
  v_74 = t;
  t = q_117(t);
  s_74 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_74, u_67, s_67);
  t = s_9(s_74, u_67, s_67, t);
  {
    ATerm a_29 = t;
    int b_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_74 = NULL;
        t = term_c_29;
        y_74 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_74, term_c_29);
        t = r_9(s_74, y_74, t);
        ;
        LocalPopChoice(b_29);
      }
    else
      {
        t = a_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_74 = ATgetFirst((ATermList) t);
        u_74 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_c_29;
    w_74 = t;
    t = (ATerm) ATinsert(CheckATermList(u_74), (ATerm) ATinsert(CheckATermList(t_74), u_67));
    x_74 = t;
    t = SSL_table_put(s_74, w_74, x_74);
    t = v_74;
  }
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm h_75 = NULL;
  h_75 = t;
  {
    ATerm d_29 = t;
    int e_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_27 = NULL,s_27 = NULL;
        t = term_f_29;
        s_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_29, h_75);
        t = c_9(s_27, h_75, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm g_29 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_29) != ATmakeSymbol("j_0", 0, ATtrue)))
              _fail(t);
            n_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_27;
        ;
        LocalPopChoice(e_29);
      }
    else
      {
        t = d_29;
        {
          ATerm w_27 = NULL,z_27 = NULL;
          t = term_f_29;
          z_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_f_29, h_75);
          t = c_9(z_27, h_75, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm h_29 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) h_29) != ATmakeSymbol("f_0", 0, ATtrue)))
                _fail(t);
              w_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_27;
        }
      }
  }
  return(t);
}
ATerm c_9 (ATerm i_63, ATerm j_63, ATerm t)
{
  ATerm k_75 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_63, j_63);
  t = r_9(i_63, j_63, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_75 = ATgetFirst((ATermList) t);
      {
        ATerm k_29 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = k_75;
  return(t);
}
ATerm e_76 (ATerm u_75, ATerm t)
{
  ATerm w_75 = NULL,x_75 = NULL,f_28 = NULL;
  t = term_l_29;
  f_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_29, u_75);
  t = c_9(f_28, u_75, t);
  if(match_cons(t, sym_Defined_3))
    {
      ATerm o_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_29) != ATmakeSymbol("b_0", 0, ATtrue)))
        _fail(t);
      w_75 = ATgetArgument(t, 1);
      x_75 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_75), w_75);
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm a_76 = NULL,c_76 = NULL;
  a_76 = t;
  if(match_cons(t, sym__2))
    {
      ATerm p_29 = ATgetArgument(t, 0);
      c_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_76;
  {
    ATerm q_29 = t;
    int r_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_29 = ATgetArgument(t, 0);
            ATerm t_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(r_29);
        {
          ATerm u_29 = t;
          int v_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_28 = NULL,p_28 = NULL;
              t = term_l_29;
              p_28 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_l_29, a_76);
              t = c_9(p_28, a_76, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm w_29 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) w_29) != ATmakeSymbol("h_0", 0, ATtrue)))
                    _fail(t);
                  j_28 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = j_28;
              ;
              LocalPopChoice(v_29);
            }
          else
            {
              t = u_29;
              t = e_76(a_76, t);
            }
        }
      }
    else
      {
        t = q_29;
        t = e_76(a_76, t);
      }
  }
  return(t);
}
ATerm o_9 (ATerm t)
{
  t = term_e_16;
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm t_76 = NULL,u_76 = NULL;
  if(match_cons(t, sym__2))
    {
      t_76 = ATgetArgument(t, 0);
      u_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_9(t_76, u_76, t);
  return(t);
}
ATerm y_9 (ATerm t)
{
  t = term_y_13;
  return(t);
}
ATerm z_9 (ATerm t)
{
  t = term_e_16;
  return(t);
}
ATerm a_10 (ATerm t)
{
  ATerm v_76 = NULL,w_76 = NULL;
  if(match_cons(t, sym__2))
    {
      v_76 = ATgetArgument(t, 0);
      w_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_9(v_76, w_76, t);
  return(t);
}
ATerm c_10 (ATerm t)
{
  t = term_y_13;
  return(t);
}
ATerm d_10 (ATerm t)
{
  ATerm x_76 = NULL;
  if(match_cons(t, sym__2))
    {
      x_76 = ATgetArgument(t, 0);
      if((x_76 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm e_10 (ATerm t)
{
  t = term_l_29;
  return(t);
}
ATerm h_10 (ATerm t)
{
  t = term_f_29;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm f_76 = NULL,g_76 = NULL,h_76 = NULL,i_76 = NULL,j_76 = NULL,k_76 = NULL,l_76 = NULL,m_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL,r_76 = NULL,s_76 = NULL;
  h_76 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      k_76 = ATgetArgument(t, 0);
      f_76 = ATgetArgument(t, 1);
      g_76 = ATgetArgument(t, 2);
      {
        ATerm x_29 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  m_76 = t;
  t = f_76;
  t = foldr_3_0(o_9, w_9, y_9, t);
  i_76 = t;
  t = g_76;
  t = foldr_3_0(z_9, a_10, c_10, t);
  j_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_76, (ATerm) ATmakeAppl(sym__2, i_76, j_76));
  {
    ATerm y_29 = t;
    int a_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        ;
        LocalPopChoice(a_30);
      }
    else
      {
        t = y_29;
        t = (ATerm) ATempty;
      }
    o_76 = t;
    t = k_76;
    {
      ATerm b_30 = t;
      int c_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Arities_0_0(t);
          ;
          LocalPopChoice(c_30);
        }
      else
        {
          t = b_30;
          t = (ATerm) ATempty;
        }
      n_76 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, i_76, j_76));
      s_76 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, i_76, j_76)), n_76);
      t = f_9(d_10, s_76, n_76, t);
      l_76 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_76, (ATerm) ATmakeAppl(sym__2, i_76, j_76));
      q_76 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_30, (ATerm) ATinsert(CheckATermList(o_76), h_76));
      r_76 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_76, (ATerm) ATmakeAppl(sym__2, i_76, j_76)), (ATerm) ATmakeAppl(sym_Defined_2, term_d_30, (ATerm) ATinsert(CheckATermList(o_76), h_76)));
      t = a_9(e_10, q_76, r_76, t);
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_30, l_76);
      p_76 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_76, (ATerm) ATmakeAppl(sym_Defined_2, term_e_30, l_76));
      t = a_9(h_10, k_76, p_76, t);
      t = m_76;
    }
  }
  return(t);
}
ATerm i_10 (ATerm t)
{
  t = term_e_16;
  return(t);
}
ATerm j_10 (ATerm t)
{
  ATerm b_77 = NULL,c_77 = NULL;
  if(match_cons(t, sym__2))
    {
      b_77 = ATgetArgument(t, 0);
      c_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_9(b_77, c_77, t);
  return(t);
}
ATerm l_10 (ATerm t)
{
  t = term_y_13;
  return(t);
}
ATerm m_10 (ATerm t)
{
  t = term_e_16;
  return(t);
}
ATerm n_10 (ATerm t)
{
  ATerm d_77 = NULL,e_77 = NULL;
  if(match_cons(t, sym__2))
    {
      d_77 = ATgetArgument(t, 0);
      e_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_9(d_77, e_77, t);
  return(t);
}
ATerm o_10 (ATerm t)
{
  t = term_y_13;
  return(t);
}
ATerm d_9 (ATerm q_21, ATerm s_21, ATerm t_21, ATerm t)
{
  ATerm y_76 = NULL,z_76 = NULL;
  t = s_21;
  t = foldr_3_0(i_10, j_10, l_10, t);
  y_76 = t;
  t = t_21;
  t = foldr_3_0(m_10, n_10, o_10, t);
  z_76 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, q_21, (ATerm) ATmakeAppl(sym__2, y_76, z_76)));
  return(t);
}
ATerm e_9 (ATerm l_102 (ATerm), ATerm m_102 (ATerm), ATerm v_46, ATerm u_46, ATerm t)
{
  t = m_102(t);
  {
    ATerm q_10 (ATerm t)
    {
      ATerm f_77 = NULL;
      f_77 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_46, f_77);
      t = l_102(t);
      return(t);
    }
    t = fetch_1_0(q_10, t);
    t = u_46;
  }
  return(t);
}
ATerm f_9 (ATerm i_102 (ATerm), ATerm r_46, ATerm q_46, ATerm t)
{
  ATerm v_77 (ATerm t)
  {
    ATerm q_77 = NULL,r_77 = NULL,s_77 = NULL;
    q_77 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_46;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_77 = ATgetFirst((ATermList) t);
            s_77 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm f_30 = t;
          int g_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_77;
              {
                ATerm r_10 (ATerm t)
                {
                  t = q_46;
                  return(t);
                }
                t = e_9(i_102, r_10, r_77, s_77, t);
                t = v_77(t);
              }
              ;
              LocalPopChoice(g_30);
            }
          else
            {
              t = f_30;
              {
                ATerm u_28 = NULL,x_28 = NULL,w_5 = NULL;
                t = SSLgetAnnotations(q_77);
                u_28 = t;
                t = s_77;
                t = v_77(t);
                x_28 = t;
                t = (ATerm) ATinsert(CheckATermList(x_28), r_77);
                w_5 = t;
                t = SSLsetAnnotations(w_5, u_28);
              }
            }
        }
      }
    return(t);
  }
  t = r_46;
  t = v_77(t);
  return(t);
}
ATerm foldr_3_0 (ATerm s_104 (ATerm), ATerm t_104 (ATerm), ATerm u_104 (ATerm), ATerm t)
{
  ATerm y_77 = NULL,z_77 = NULL,a_78 = NULL;
  y_77 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_77;
      t = s_104(t);
    }
  else
    {
      ATerm d_78 = NULL,e_78 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_77 = ATgetFirst((ATermList) t);
          a_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_77;
      t = u_104(t);
      d_78 = t;
      t = a_78;
      t = foldr_3_0(s_104, t_104, u_104, t);
      e_78 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_78, e_78);
      t = t_104(t);
    }
  return(t);
}
ATerm s_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_10 (ATerm t)
{
  ATerm i_78 = NULL,j_78 = NULL;
  if(match_cons(t, sym__2))
    {
      i_78 = ATgetArgument(t, 0);
      j_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_9(v_10, i_78, j_78, t);
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm l_78 = NULL,m_78 = NULL,n_78 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      l_78 = ATgetArgument(t, 0);
      m_78 = ATgetArgument(t, 1);
      n_78 = ATgetArgument(t, 2);
      {
        ATerm i_30 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = d_9(l_78, m_78, n_78, t);
  return(t);
}
ATerm v_10 (ATerm t)
{
  ATerm k_78 = NULL;
  if(match_cons(t, sym__2))
    {
      k_78 = ATgetArgument(t, 0);
      if((k_78 != ATgetArgument(t, 1)))
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
  ATerm f_78 = NULL,g_78 = NULL,h_78 = NULL;
  h_78 = t;
  t = foldr_3_0(s_10, t_10, u_10, t);
  f_78 = t;
  t = h_78;
  t = map_1_0(RegisterSDefT_0_0, t);
  g_78 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_78, g_78, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm r_72 (ATerm), ATerm s_72 (ATerm), ATerm t)
{
  ATerm o_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL,s_78 = NULL,t_78 = NULL,j_6 = NULL;
  t_78 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_78 = ATgetFirst((ATermList) t);
      q_78 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_78);
  o_78 = t;
  t = p_78;
  t = r_72(t);
  r_78 = t;
  t = q_78;
  t = s_72(t);
  s_78 = t;
  t = (ATerm) ATinsert(CheckATermList(s_78), r_78);
  j_6 = t;
  t = SSLsetAnnotations(j_6, o_78);
  return(t);
}
ATerm g_9 (ATerm i_53, ATerm j_53, ATerm t)
{
  ATerm u_78 = NULL;
  t = SSL_fputc(i_53, j_53);
  u_78 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_78);
  return(t);
}
ATerm h_9 (ATerm w_56, ATerm x_56, ATerm t)
{
  ATerm v_78 = NULL;
  t = SSL_write_term_to_stream_text(w_56, x_56);
  v_78 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_78);
  return(t);
}
ATerm j_9 (ATerm x_109 (ATerm), ATerm i_513, ATerm a_57, ATerm t)
{
  ATerm w_78 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_513, term_j_30);
  t = m_9(t);
  w_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_78, a_57);
  t = x_109(t);
  t = fclose_0_0(t);
  t = a_57;
  return(t);
}
ATerm i_9 (ATerm s_56, ATerm t_56, ATerm t)
{
  ATerm x_78 = NULL;
  t = SSL_write_term_to_stream_baf(s_56, t_56);
  x_78 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_78);
  return(t);
}
ATerm w_10 (ATerm t)
{
  ATerm a_79 = NULL,b_79 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_30 = ATgetArgument(t, 0);
      if(match_cons(k_30, sym_Stream_1))
        {
          a_79 = ATgetArgument(k_30, 0);
        }
      else
        _fail(t);
      b_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_9(a_79, b_79, t);
  return(t);
}
ATerm x_10 (ATerm t)
{
  ATerm c_79 = NULL,d_79 = NULL,e_79 = NULL,f_79 = NULL,g_79 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_30 = ATgetArgument(t, 0);
      if(match_cons(l_30, sym_Stream_1))
        {
          f_79 = ATgetArgument(l_30, 0);
        }
      else
        _fail(t);
      g_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_9(f_79, g_79, t);
  c_79 = t;
  t = term_n_30;
  d_79 = t;
  t = c_79;
  if(match_cons(t, sym_Stream_1))
    {
      e_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_n_30, c_79);
  t = g_9(d_79, e_79, t);
  return(t);
}
ATerm output_1_0 (ATerm g_114 (ATerm), ATerm t)
{
  ATerm y_78 = NULL,z_78 = NULL;
  t = g_114(t);
  z_78 = t;
  {
    ATerm o_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_30;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(p_30);
      }
    else
      {
        t = o_30;
        t = term_r_30;
      }
    y_78 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_78, z_78);
    {
      ATerm s_30 = t;
      int t_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_u_30;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, y_78, z_78);
          LocalPopChoice(t_30);
          if(match_cons(t, sym__2))
            {
              ATerm v_30 = ATgetArgument(t, 0);
              ATerm w_30 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_9(w_10, y_78, z_78, t);
        }
      else
        {
          t = s_30;
          if(match_cons(t, sym__2))
            {
              ATerm x_30 = ATgetArgument(t, 0);
              ATerm y_30 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_9(x_10, y_78, z_78, t);
        }
    }
  }
  return(t);
}
ATerm u_79 (ATerm o_79, ATerm t)
{
  t = SSL_fclose(o_79);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_79 = NULL,s_79 = NULL;
  s_79 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_79 = ATgetArgument(t, 0);
      {
        ATerm z_30 = t;
        int a_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_79);
            ;
            LocalPopChoice(a_31);
          }
        else
          {
            t = z_30;
            t = u_79(s_79, t);
          }
      }
    }
  else
    {
      t = u_79(s_79, t);
    }
  return(t);
}
ATerm k_9 (ATerm y_56, ATerm t)
{
  t = SSL_read_term_from_stream(y_56);
  return(t);
}
ATerm l_9 (ATerm k_53, ATerm l_53, ATerm t)
{
  ATerm v_79 = NULL;
  t = SSL_fopen(k_53, l_53);
  v_79 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_79);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_79 = NULL;
  t = SSL_stdin_stream();
  w_79 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_79);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm x_79 = NULL;
  t = SSL_stdout_stream();
  x_79 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_79);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm y_79 = NULL;
  t = SSL_stderr_stream();
  y_79 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_79);
  return(t);
}
ATerm f_81 (ATerm e_80, ATerm t)
{
  ATerm f_80 = NULL;
  t = SSL_explode_term(e_80);
  if(match_cons(t, sym__2))
    {
      ATerm b_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_31 = ATgetArgument(t, 1);
        if(((ATgetType(c_31) == AT_LIST) && !(ATisEmpty(c_31))))
          {
            f_80 = ATgetFirst((ATermList) c_31);
            {
              ATerm d_31 = (ATerm) ATgetNext((ATermList) c_31);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_80;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_80;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_80;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_80;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm g_81 (ATerm i_80, ATerm j_80, ATerm k_80, ATerm t)
{
  ATerm l_80 = NULL,m_80 = NULL,n_80 = NULL,q_80 = NULL,o_6 = NULL;
  t = SSLgetAnnotations(k_80);
  n_80 = t;
  t = i_80;
  if(match_cons(t, sym_Path_1))
    {
      q_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_80, j_80);
  o_6 = t;
  t = SSLsetAnnotations(o_6, n_80);
  if(match_cons(t, sym__2))
    {
      l_80 = ATgetArgument(t, 0);
      m_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_9(l_80, m_80, t);
  return(t);
}
ATerm h_81 (ATerm s_80, ATerm t_80, ATerm u_80, ATerm t)
{
  ATerm v_80 = NULL,w_80 = NULL,x_80 = NULL,a_81 = NULL,q_6 = NULL;
  t = SSLgetAnnotations(u_80);
  x_80 = t;
  t = SSL_is_string(s_80);
  a_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_81, t_80);
  q_6 = t;
  t = SSLsetAnnotations(q_6, x_80);
  if(match_cons(t, sym__2))
    {
      v_80 = ATgetArgument(t, 0);
      w_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_9(v_80, w_80, t);
  return(t);
}
ATerm m_9 (ATerm t)
{
  ATerm c_81 = NULL,d_81 = NULL,e_81 = NULL;
  c_81 = t;
  if(match_cons(t, sym__2))
    {
      d_81 = ATgetArgument(t, 0);
      e_81 = ATgetArgument(t, 1);
      {
        ATerm e_31 = t;
        int f_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_81(c_81, t);
            ;
            LocalPopChoice(f_31);
          }
        else
          {
            t = e_31;
            {
              ATerm i_31 = t;
              int j_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_81(d_81, e_81, c_81, t);
                  ;
                  LocalPopChoice(j_31);
                }
              else
                {
                  t = i_31;
                  t = h_81(d_81, e_81, c_81, t);
                }
            }
          }
      }
    }
  else
    {
      t = f_81(c_81, t);
    }
  return(t);
}
ATerm y_10 (ATerm t)
{
  t = term_l_31;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_81 = NULL,j_81 = NULL,k_81 = NULL;
  ATerm m_31 = t;
  int n_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_81 = NULL;
      l_81 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_81, term_o_31);
      t = m_9(t);
      ;
      LocalPopChoice(n_31);
    }
  else
    {
      t = m_31;
      t = debug_1_0(y_10, t);
      _fail(t);
    }
  j_81 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_9(k_81, t);
  i_81 = t;
  t = j_81;
  t = fclose_0_0(t);
  t = i_81;
  return(t);
}
ATerm input_1_0 (ATerm h_114 (ATerm), ATerm t)
{
  ATerm p_31 = t;
  int q_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_31;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_31);
    }
  else
    {
      t = p_31;
      t = term_t_31;
    }
  t = ReadFromFile_0_0(t);
  t = h_114(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm n_81 = NULL,o_81 = NULL,p_81 = NULL,q_81 = NULL,r_81 = NULL;
  n_81 = t;
  t = term_g_25;
  t = whoami_0_0(t);
  o_81 = t;
  t = term_p_13;
  q_81 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_31), o_81), term_u_31);
  r_81 = t;
  t = SSL_printnl(q_81, r_81);
  t = term_y_13;
  p_81 = t;
  t = SSL_exit(p_81);
  t = n_81;
  return(t);
}
ATerm z_10 (ATerm t)
{
  ATerm t_81 = NULL;
  t_81 = t;
  if(match_string(t, "-k"))
    {
      t = t_81;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = t_81;
    }
  return(t);
}
ATerm a_11 (ATerm t)
{
  ATerm u_81 = NULL,v_81 = NULL,w_81 = NULL;
  u_81 = t;
  t = SSL_string_to_int(u_81);
  v_81 = t;
  t = term_w_31;
  w_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_31, v_81);
  t = u_9(w_81, v_81, t);
  t = u_81;
  return(t);
}
ATerm b_11 (ATerm t)
{
  t = term_x_31;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_10, a_11, b_11, t);
  return(t);
}
ATerm c_11 (ATerm t)
{
  ATerm y_81 = NULL;
  y_81 = t;
  if(match_string(t, "-S"))
    {
      t = y_81;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_81;
    }
  return(t);
}
ATerm e_11 (ATerm t)
{
  ATerm z_81 = NULL,a_82 = NULL;
  t = term_y_31;
  z_81 = t;
  t = term_e_16;
  a_82 = t;
  t = term_z_31;
  t = u_9(z_81, a_82, t);
  t = term_a_32;
  return(t);
}
ATerm f_11 (ATerm t)
{
  t = term_b_32;
  return(t);
}
ATerm g_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_11 (ATerm t)
{
  ATerm b_82 = NULL,c_82 = NULL,d_82 = NULL;
  b_82 = t;
  t = SSL_string_to_int(b_82);
  c_82 = t;
  t = term_y_31;
  d_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_31, c_82);
  t = u_9(d_82, c_82, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_82);
  return(t);
}
ATerm j_11 (ATerm t)
{
  t = term_c_32;
  return(t);
}
ATerm k_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_11 (ATerm t)
{
  ATerm e_82 = NULL,f_82 = NULL;
  t = term_d_32;
  e_82 = t;
  t = term_g_25;
  f_82 = t;
  t = term_e_32;
  t = u_9(e_82, f_82, t);
  t = term_g_32;
  return(t);
}
ATerm m_11 (ATerm t)
{
  t = term_h_32;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_32 = t;
  int k_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_11, e_11, f_11, t);
      ;
      LocalPopChoice(k_32);
    }
  else
    {
      t = i_32;
      {
        ATerm l_32 = t;
        int n_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(g_11, h_11, j_11, t);
            ;
            LocalPopChoice(n_32);
          }
        else
          {
            t = l_32;
            t = Option_3_0(k_11, l_11, m_11, t);
          }
      }
    }
  return(t);
}
ATerm u_9 (ATerm z_57, ATerm a_58, ATerm t)
{
  ATerm g_82 = NULL;
  t = term_o_32;
  g_82 = t;
  t = SSL_table_put(g_82, z_57, a_58);
  t = (ATerm) ATmakeAppl(sym__3, term_o_32, z_57, a_58);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm j_82 = NULL,k_82 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_82 = NULL,m_82 = NULL,n_82 = NULL;
      t = term_g_25;
      t = i_0(t);
      l_82 = t;
      t = term_p_32;
      m_82 = t;
      t = term_q_32;
      n_82 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_32, term_q_32, l_82);
      t = s_9(m_82, n_82, l_82, t);
      _fail(t);
    }
  else
    {
      ATerm q_82 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_82 = ATgetFirst((ATermList) t);
          k_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_82;
      t = d_0(t);
      t = term_g_25;
      t = g_0(t);
      q_82 = t;
      t = (ATerm) ATinsert(CheckATermList(k_82), q_82);
    }
  return(t);
}
ATerm o_11 (ATerm t)
{
  ATerm s_82 = NULL;
  s_82 = t;
  if(match_string(t, "-o"))
    {
      t = s_82;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_82;
    }
  return(t);
}
ATerm p_11 (ATerm t)
{
  ATerm t_82 = NULL,u_82 = NULL;
  t_82 = t;
  t = term_q_30;
  u_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_30, t_82);
  t = u_9(u_82, t_82, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_82);
  return(t);
}
ATerm q_11 (ATerm t)
{
  t = term_r_32;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_11, p_11, q_11, t);
  return(t);
}
ATerm s_9 (ATerm x_62, ATerm y_62, ATerm w_62, ATerm t)
{
  ATerm w_82 = NULL,x_82 = NULL,y_82 = NULL;
  w_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_62, y_62);
  {
    ATerm s_32 = t;
    int t_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_32 = ATgetArgument(t, 0);
            ATerm v_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, x_62, y_62);
        t = r_9(x_62, y_62, t);
        ;
        LocalPopChoice(t_32);
      }
    else
      {
        t = s_32;
        t = (ATerm) ATempty;
      }
    x_82 = t;
    t = (ATerm) ATinsert(CheckATermList(x_82), w_62);
    y_82 = t;
    t = SSL_table_put(x_62, y_62, y_82);
    t = w_82;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm f_83 = NULL,g_83 = NULL,h_83 = NULL,i_83 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_83 = NULL,k_83 = NULL,l_83 = NULL;
      t = term_g_25;
      t = r_0(t);
      j_83 = t;
      t = term_p_32;
      k_83 = t;
      t = term_q_32;
      l_83 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_32, term_q_32, j_83);
      t = s_9(k_83, l_83, j_83, t);
      _fail(t);
    }
  else
    {
      ATerm p_83 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_83 = ATgetFirst((ATermList) t);
          g_83 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_83;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_83 = ATgetFirst((ATermList) t);
          i_83 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_83;
      t = n_0(t);
      t = h_83;
      t = p_0(t);
      p_83 = t;
      t = (ATerm) ATinsert(CheckATermList(i_83), p_83);
    }
  return(t);
}
ATerm r_11 (ATerm t)
{
  ATerm r_83 = NULL;
  r_83 = t;
  if(match_string(t, "-i"))
    {
      t = r_83;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_83;
    }
  return(t);
}
ATerm s_11 (ATerm t)
{
  ATerm s_83 = NULL,t_83 = NULL;
  s_83 = t;
  t = term_s_31;
  t_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_31, s_83);
  t = u_9(t_83, s_83, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_83);
  return(t);
}
ATerm t_11 (ATerm t)
{
  t = term_w_32;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_11, s_11, t_11, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_83 = NULL,v_83 = NULL,w_83 = NULL,x_83 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_25;
  t = whoami_0_0(t);
  u_83 = t;
  t = term_p_13;
  w_83 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_32), u_83);
  x_83 = t;
  t = SSL_printnl(w_83, x_83);
  t = term_y_13;
  v_83 = t;
  t = SSL_exit(v_83);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_y_32;
  t = get_config_0_0(t);
  return(t);
}
ATerm n_9 (ATerm x_49, ATerm y_49, ATerm t)
{
  ATerm z_32 = t;
  int a_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_49, y_49);
      ;
      LocalPopChoice(a_33);
    }
  else
    {
      t = z_32;
      t = SSL_addr(x_49, y_49);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm t)
{
  ATerm z_83 = NULL,a_84 = NULL,b_84 = NULL;
  z_83 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_83;
      t = q_104(t);
    }
  else
    {
      ATerm e_84 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_84 = ATgetFirst((ATermList) t);
          b_84 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_84;
      t = foldr_2_0(q_104, r_104, t);
      e_84 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_84, e_84);
      t = r_104(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm u_11 (ATerm t)
{
  t = term_e_16;
  return(t);
}
ATerm v_11 (ATerm t)
{
  ATerm m_29 = NULL,n_29 = NULL;
  if(match_cons(t, sym__2))
    {
      m_29 = ATgetArgument(t, 0);
      n_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_9(m_29, n_29, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_84 = NULL,i_29 = NULL,j_29 = NULL;
  t = times_0_0(t);
  j_29 = t;
  t = SSL_explode_term(j_29);
  if(match_cons(t, sym__2))
    {
      ATerm b_33 = ATgetArgument(t, 0);
      i_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_29;
  t = foldr_2_0(u_11, v_11, t);
  h_84 = t;
  t = SSL_TicksToSeconds(h_84);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_84 = NULL,t_84 = NULL,u_84 = NULL;
  s_84 = t;
  if(match_cons(t, sym__2))
    {
      t_84 = ATgetArgument(t, 0);
      u_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_84;
        if((t_84 != t))
          {
            _fail(t);
          }
        t = s_84;
        ;
        LocalPopChoice(d_33);
      }
    else
      {
        t = c_33;
        t = (ATerm) ATmakeAppl(sym__2, t_84, u_84);
        {
          ATerm e_33 = t;
          int j_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_84, u_84);
              ;
              LocalPopChoice(j_33);
            }
          else
            {
              t = e_33;
              t = SSL_gtr(t_84, u_84);
            }
          t = (ATerm) ATmakeAppl(sym__2, t_84, u_84);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_111 (ATerm), ATerm t)
{
  ATerm y_84 = NULL;
  y_84 = t;
  {
    ATerm l_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_85 = NULL;
        t = term_y_31;
        t = get_config_0_0(t);
        a_85 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_85, term_y_13);
        t = geq_0_0(t);
        t = y_84;
        t = h_111(t);
        ;
        LocalPopChoice(m_33);
      }
    else
      {
        t = l_33;
        t = y_84;
      }
  }
  return(t);
}
ATerm w_11 (ATerm t)
{
  ATerm c_85 = NULL,d_85 = NULL,f_85 = NULL,g_85 = NULL;
  t = run_time_0_0(t);
  c_85 = t;
  t = term_g_25;
  t = whoami_0_0(t);
  d_85 = t;
  t = term_p_13;
  f_85 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_33), c_85), term_n_33), d_85);
  g_85 = t;
  t = SSL_printnl(f_85, g_85);
  t = (ATerm) ATmakeAppl(sym__2, term_p_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_33), c_85), term_n_33), d_85));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm h_85 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_16;
  h_85 = t;
  t = SSL_exit(h_85);
  return(t);
}
ATerm x_11 (ATerm t)
{
  ATerm p_85 = NULL,q_85 = NULL;
  q_85 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = q_85;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          p_85 = ATgetArgument(t, 0);
          {
            ATerm z_29 = NULL,u_6 = NULL;
            t = SSLgetAnnotations(q_85);
            z_29 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_85);
            u_6 = t;
            t = SSLsetAnnotations(u_6, z_29);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = q_85;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm x_113 (ATerm), ATerm t)
{
  ATerm p_33 = t;
  int q_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_33;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_33);
    }
  else
    {
      t = p_33;
      t = fetch_1_0(x_11, t);
    }
  t = x_113(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm t_85 = NULL,u_85 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_85 = ATgetFirst((ATermList) t);
      u_85 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_85 = NULL,z_85 = NULL;
        ATerm z_11 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_85)), not_null(z_85));
          return(t);
        }
        t = u_85;
        t = l_0(t);
        if(((y_85 != NULL) && (y_85 != t)))
          _fail(t);
        else
          y_85 = t;
        t = t_85;
        t = k_0(t);
        if(((z_85 != NULL) && (z_85 != t)))
          _fail(t);
        else
          z_85 = t;
        t = u_85;
        t = reverse_acc_2_0(k_0, z_11, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_g_25;
      t = l_0(t);
    }
  return(t);
}
ATerm a_12 (ATerm t)
{
  ATerm d_86 = NULL,e_86 = NULL,f_86 = NULL,n_7 = NULL;
  f_86 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_86);
  d_86 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_86);
  n_7 = t;
  t = SSLsetAnnotations(n_7, d_86);
  return(t);
}
ATerm c_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_12 (ATerm t)
{
  ATerm h_86 = NULL;
  h_86 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_86), term_s_33);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_86 = NULL,c_86 = NULL;
  ATerm u_33 = t;
  int v_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_32;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_33);
    }
  else
    {
      t = u_33;
      t = fetch_1_0(a_12, t);
    }
  t = term_w_33;
  t = echo_0_0(t);
  t = term_p_32;
  b_86 = t;
  t = term_q_32;
  c_86 = t;
  t = term_x_33;
  t = r_9(b_86, c_86, t);
  t = reverse_acc_2_0(_id, c_12, t);
  t = map_1_0(e_12, t);
  return(t);
}
ATerm fetch_1_0 (ATerm s_94 (ATerm), ATerm t)
{
  ATerm g_87 (ATerm t)
  {
    ATerm d_87 = NULL,e_87 = NULL,f_87 = NULL;
    d_87 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_87 = ATgetFirst((ATermList) t);
        f_87 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_33 = t;
      int z_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_30 = NULL,m_30 = NULL,s_7 = NULL;
          t = SSLgetAnnotations(d_87);
          h_30 = t;
          t = e_87;
          t = s_94(t);
          m_30 = t;
          t = (ATerm) ATinsert(CheckATermList(f_87), m_30);
          s_7 = t;
          t = SSLsetAnnotations(s_7, h_30);
          ;
          LocalPopChoice(z_33);
        }
      else
        {
          t = y_33;
          {
            ATerm k_31 = NULL,r_31 = NULL,d_8 = NULL;
            t = SSLgetAnnotations(d_87);
            k_31 = t;
            t = f_87;
            t = g_87(t);
            r_31 = t;
            t = (ATerm) ATinsert(CheckATermList(r_31), e_87);
            d_8 = t;
            t = SSLsetAnnotations(d_8, k_31);
          }
        }
    }
    return(t);
  }
  t = g_87(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_87 = NULL,l_87 = NULL,p_87 = NULL;
  k_87 = t;
  {
    ATerm b_34 = t;
    int f_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_87;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_34 = ATgetFirst((ATermList) t);
                ATerm h_34 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_87;
          }
        ;
        LocalPopChoice(f_34);
      }
    else
      {
        t = b_34;
        t = (ATerm) ATinsert(ATempty, k_87);
      }
    l_87 = t;
    t = term_r_30;
    p_87 = t;
    t = SSL_printnl(p_87, l_87);
    t = k_87;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_y_32;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm q_9 (ATerm g_46, ATerm h_46, ATerm t)
{
  t = SSL_strcat(g_46, h_46);
  return(t);
}
ATerm debug_1_0 (ATerm v_109 (ATerm), ATerm t)
{
  ATerm v_87 = NULL,w_87 = NULL,x_87 = NULL,y_87 = NULL;
  v_87 = t;
  t = v_109(t);
  w_87 = t;
  t = term_p_13;
  x_87 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_87), w_87);
  y_87 = t;
  t = SSL_printnl(x_87, y_87);
  t = v_87;
  return(t);
}
ATerm map_1_0 (ATerm i_94 (ATerm), ATerm t)
{
  ATerm q_88 (ATerm t)
  {
    ATerm n_88 = NULL,o_88 = NULL,p_88 = NULL;
    n_88 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_88;
      }
    else
      {
        ATerm f_32 = NULL,j_32 = NULL,m_32 = NULL,u_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_88 = ATgetFirst((ATermList) t);
            p_88 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_88);
        f_32 = t;
        t = o_88;
        t = i_94(t);
        j_32 = t;
        t = p_88;
        t = q_88(t);
        m_32 = t;
        t = (ATerm) ATinsert(CheckATermList(m_32), j_32);
        u_8 = t;
        t = SSLsetAnnotations(u_8, f_32);
      }
    return(t);
  }
  t = q_88(t);
  return(t);
}
ATerm h_12 (ATerm t)
{
  ATerm i_34 = t;
  int k_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(k_34);
    }
  else
    {
      t = i_34;
    }
  return(t);
}
ATerm j_12 (ATerm t)
{
  t = term_l_34;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm m_34 = t;
  int p_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_88 = NULL;
      y_88 = t;
      t = SSL_is_string(y_88);
      ;
      LocalPopChoice(p_34);
    }
  else
    {
      t = m_34;
      {
        ATerm q_34 = t;
        int t_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(h_12, t);
            ;
            LocalPopChoice(t_34);
          }
        else
          {
            t = q_34;
            {
              ATerm e_89 = NULL,f_89 = NULL,g_89 = NULL;
              e_89 = t;
              if(match_cons(t, sym_Path_1))
                {
                  f_89 = ATgetArgument(t, 0);
                  t = f_89;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      f_89 = ATgetArgument(t, 0);
                      t = f_89;
                      {
                        ATerm w_34 = t;
                        int x_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(x_34);
                          }
                        else
                          {
                            t = w_34;
                            t = debug_1_0(j_12, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm k_89 = NULL,n_89 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          f_89 = ATgetArgument(t, 0);
                          g_89 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = f_89;
                      t = eval_config_0_0(t);
                      k_89 = t;
                      t = g_89;
                      t = eval_config_0_0(t);
                      n_89 = t;
                      t = (ATerm) ATmakeAppl(sym__2, k_89, n_89);
                      t = q_9(k_89, n_89, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm r_9 (ATerm o_64, ATerm p_64, ATerm t)
{
  t = SSL_table_get(o_64, p_64);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm r_89 = NULL,s_89 = NULL;
  r_89 = t;
  t = term_o_32;
  s_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_32, r_89);
  t = r_9(s_89, r_89, t);
  {
    ATerm a_35 = t;
    int b_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_89 = NULL,u_89 = NULL;
        t = eval_config_0_0(t);
        t_89 = t;
        t = term_o_32;
        u_89 = t;
        t = SSL_table_put(u_89, r_89, t_89);
        t = t_89;
        ;
        LocalPopChoice(b_35);
      }
    else
      {
        t = a_35;
      }
  }
  return(t);
}
ATerm k_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_12 (ATerm t)
{
  ATerm x_89 = NULL,y_89 = NULL;
  t = term_c_35;
  x_89 = t;
  t = term_g_25;
  y_89 = t;
  t = term_d_35;
  t = u_9(x_89, y_89, t);
  return(t);
}
ATerm n_12 (ATerm t)
{
  t = term_e_35;
  return(t);
}
ATerm o_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_12 (ATerm t)
{
  ATerm b_90 = NULL,c_90 = NULL,d_90 = NULL,e_90 = NULL;
  t = term_c_35;
  d_90 = t;
  t = term_g_25;
  e_90 = t;
  t = term_d_35;
  t = u_9(d_90, e_90, t);
  t = term_f_35;
  b_90 = t;
  t = term_g_25;
  c_90 = t;
  t = term_g_35;
  t = u_9(b_90, c_90, t);
  t = term_h_35;
  return(t);
}
ATerm q_12 (ATerm t)
{
  t = term_i_35;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_35 = t;
  int k_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_12, m_12, n_12, t);
      ;
      LocalPopChoice(k_35);
    }
  else
    {
      t = j_35;
      t = Option_3_0(o_12, p_12, q_12, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_116 (ATerm), ATerm t)
{
  ATerm j_90 = NULL,k_90 = NULL,l_90 = NULL,m_90 = NULL,o_90 = NULL,p_90 = NULL,f_10 = NULL;
  j_90 = t;
  {
    ATerm l_35 = t;
    int m_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_35;
        t = a_116(t);
        ;
        LocalPopChoice(m_35);
      }
    else
      {
        t = l_35;
      }
    t = j_90;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_90 = ATgetFirst((ATermList) t);
        m_90 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(j_90);
    k_90 = t;
    t = term_y_32;
    p_90 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_y_32, l_90);
    t = u_9(p_90, l_90, t);
    t = m_90;
    {
      ATerm z_90 (ATerm t)
      {
        ATerm o_35 = t;
        int p_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_35 = t;
            int r_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_90 = NULL;
                s_90 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = s_90;
                ;
                LocalPopChoice(r_35);
              }
            else
              {
                t = q_35;
                t = a_116(t);
                t = Cons_2_0(_id, z_90, t);
              }
            ;
            LocalPopChoice(p_35);
          }
        else
          {
            t = o_35;
            {
              ATerm v_90 = NULL,w_90 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_90 = ATgetFirst((ATermList) t);
                  w_90 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(w_90), (ATerm) ATmakeAppl(sym_Undefined_1, v_90));
            }
          }
        return(t);
      }
      t = z_90(t);
      o_90 = t;
      t = (ATerm) ATinsert(CheckATermList(o_90), (ATerm) ATmakeAppl(sym_Program_1, l_90));
      f_10 = t;
      t = SSLsetAnnotations(f_10, k_90);
    }
  }
  return(t);
}
ATerm s_12 (ATerm t)
{
  ATerm l_91 = NULL;
  l_91 = t;
  if(match_string(t, "--help"))
    {
      t = l_91;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = l_91;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = l_91;
        }
    }
  return(t);
}
ATerm u_12 (ATerm t)
{
  ATerm m_91 = NULL,n_91 = NULL;
  t = term_r_33;
  m_91 = t;
  t = term_g_25;
  n_91 = t;
  t = term_s_35;
  t = u_9(m_91, n_91, t);
  t = term_t_35;
  return(t);
}
ATerm y_12 (ATerm t)
{
  t = term_u_35;
  return(t);
}
ATerm z_12 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm z_115 (ATerm), ATerm t)
{
  ATerm e_91 = NULL,f_91 = NULL,g_91 = NULL,h_91 = NULL,i_91 = NULL,j_91 = NULL,k_91 = NULL;
  g_91 = t;
  t = term_p_32;
  i_91 = t;
  t = term_q_32;
  j_91 = t;
  t = (ATerm) ATempty;
  k_91 = t;
  t = SSL_table_put(i_91, j_91, k_91);
  t = g_91;
  {
    ATerm r_12 (ATerm t)
    {
      ATerm v_35 = t;
      int w_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_115(t);
          ;
          LocalPopChoice(w_35);
        }
      else
        {
          t = v_35;
          {
            ATerm x_35 = t;
            int y_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_12, u_12, y_12, t);
                ;
                LocalPopChoice(y_35);
              }
            else
              {
                t = x_35;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_12, t);
    {
      ATerm z_35 = t;
      int a_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_91 = NULL;
          w_91 = t;
          {
            ATerm b_36 = t;
            int c_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_33 = NULL;
                t = w_91;
                {
                  ATerm d_36 = t;
                  int e_36 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_r_33;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(e_36);
                    }
                  else
                    {
                      t = d_36;
                      t = fetch_1_0(z_12, t);
                    }
                  t = w_91;
                  t = default_system_usage_0_0(t);
                  t = term_e_16;
                  k_33 = t;
                  t = SSL_exit(k_33);
                }
                ;
                LocalPopChoice(c_36);
              }
            else
              {
                t = b_36;
                {
                  ATerm t_33 = NULL;
                  t = term_c_35;
                  t = get_config_0_0(t);
                  t = w_91;
                  t = default_system_about_0_0(t);
                  t = term_e_16;
                  t_33 = t;
                  t = SSL_exit(t_33);
                }
              }
          }
          ;
          LocalPopChoice(a_36);
        }
      else
        {
          t = z_35;
          {
            ATerm f_36 = t;
            int g_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_91 = NULL,y_91 = NULL,z_91 = NULL;
                ATerm b_13 (ATerm t)
                {
                  ATerm a_92 = NULL,b_92 = NULL,c_92 = NULL,d_12 = NULL;
                  c_92 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      b_92 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(c_92);
                  a_92 = t;
                  t = b_92;
                  if(((e_91 != NULL) && (e_91 != t)))
                    _fail(t);
                  else
                    e_91 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, b_92);
                  d_12 = t;
                  t = SSLsetAnnotations(d_12, a_92);
                  return(t);
                }
                t = fetch_1_0(b_13, t);
                t = term_p_13;
                y_91 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_91)), term_h_36);
                z_91 = t;
                t = SSL_printnl(y_91, z_91);
                t = (ATerm) ATmakeAppl(sym__2, term_p_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_91)), term_h_36));
                t = default_system_usage_0_0(t);
                t = term_y_13;
                x_91 = t;
                t = SSL_exit(x_91);
                ;
                LocalPopChoice(g_36);
              }
            else
              {
                t = f_36;
              }
          }
        }
      f_91 = t;
      t = term_p_32;
      h_91 = t;
      t = SSL_table_destroy(h_91);
      t = f_91;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_113 (ATerm), ATerm a_114 (ATerm), ATerm b_114 (ATerm), ATerm c_114 (ATerm), ATerm t)
{
  ATerm h_92 = NULL,i_92 = NULL,l_92 = NULL,m_92 = NULL;
  t = parse_options_1_0(z_113, t);
  h_92 = t;
  t = term_i_36;
  m_92 = t;
  t = SSL_table_create(m_92);
  t = term_i_36;
  i_92 = t;
  t = term_j_36;
  l_92 = t;
  t = SSL_table_put(i_92, l_92, h_92);
  t = h_92;
  t = b_114(t);
  {
    ATerm k_36 = t;
    int l_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_114, t);
        ;
        LocalPopChoice(l_36);
      }
    else
      {
        t = k_36;
        {
          ATerm m_36 = t;
          int n_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_114(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(n_36);
            }
          else
            {
              t = m_36;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm g_13 (ATerm t)
{
  ATerm o_36 = t;
  int p_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(p_36);
    }
  else
    {
      t = o_36;
      {
        ATerm q_36 = t;
        int r_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(r_36);
          }
        else
          {
            t = q_36;
            {
              ATerm s_36 = t;
              int t_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(i_13, j_13, k_13, t);
                  ;
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
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(v_36);
                      }
                    else
                      {
                        t = u_36;
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
ATerm h_13 (ATerm t)
{
  t = input_1_0(l_13, t);
  return(t);
}
ATerm i_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_13 (ATerm t)
{
  ATerm o_92 = NULL,p_92 = NULL;
  t = term_u_30;
  o_92 = t;
  t = term_g_25;
  p_92 = t;
  t = term_w_36;
  t = u_9(o_92, p_92, t);
  t = term_x_36;
  return(t);
}
ATerm k_13 (ATerm t)
{
  t = term_y_36;
  return(t);
}
ATerm l_13 (ATerm t)
{
  t = output_1_0(m_13, t);
  return(t);
}
ATerm m_13 (ATerm t)
{
  ATerm r_92 = NULL,s_92 = NULL,y_92 = NULL,z_92 = NULL,a_93 = NULL,b_93 = NULL,c_93 = NULL,d_93 = NULL,v_24 = NULL,u_13 = NULL;
  d_93 = t;
  if(match_cons(t, sym_Specification_1))
    {
      s_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_93);
  r_92 = t;
  t = s_92;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_92 = ATgetFirst((ATermList) t);
      a_93 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_92);
  y_92 = t;
  t = a_93;
  t = Cons_2_0(n_13, o_13, t);
  b_93 = t;
  t = (ATerm) ATinsert(CheckATermList(b_93), z_92);
  u_13 = t;
  t = SSLsetAnnotations(u_13, y_92);
  c_93 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, c_93);
  v_24 = t;
  t = SSLsetAnnotations(v_24, r_92);
  return(t);
}
ATerm n_13 (ATerm t)
{
  ATerm e_93 = NULL,f_93 = NULL,g_93 = NULL,h_93 = NULL,t_13 = NULL;
  h_93 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      f_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_93);
  e_93 = t;
  t = f_93;
  t = all_defs_0_0(t);
  g_93 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, g_93);
  t_13 = t;
  t = SSLsetAnnotations(t_13, e_93);
  return(t);
}
ATerm o_13 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(g_13, default_usage_0_0, _id, h_13, t);
  return(t);
}
