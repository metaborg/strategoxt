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
ATerm term_m_37;
ATerm term_l_37;
ATerm term_k_37;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_y_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_c_35;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_j_34;
ATerm term_h_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_d_32;
ATerm term_a_32;
ATerm term_x_31;
ATerm term_d_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_w_30;
ATerm term_t_30;
ATerm term_p_30;
ATerm term_n_30;
ATerm term_w_29;
ATerm term_s_29;
ATerm term_p_29;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_f_21;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_18;
ATerm term_o_17;
ATerm term_j_17;
ATerm term_h_17;
ATerm term_f_17;
ATerm term_j_16;
ATerm term_x_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_u_13;
ATerm term_p_13;
void init_constant_terms (void)
{
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Sort_2, term_n_19, (ATerm) ATempty);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_ConstType_1, term_o_19);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym__2, term_l_32, term_j_16);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_16);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym__2, term_r_32, term_r_25);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym__2, term_a_33, term_b_33);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(sym__2, term_n_35, term_r_25);
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_r_25);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(sym__2, term_h_34, term_r_25);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(sym__2, term_d_31, term_r_25);
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm q_7 (ATerm l_21, ATerm n_21, ATerm o_21, ATerm);
ATerm giving_up_0_0 (ATerm);
ATerm a_0 (ATerm);
ATerm DefinitionExists_0_0 (ATerm);
ATerm sboundin_3_0 (ATerm l_87 (ATerm), ATerm m_87 (ATerm), ATerm n_87 (ATerm), ATerm);
ATerm e_0 (ATerm);
ATerm x_7 (ATerm k_31, ATerm j_31, ATerm);
ATerm u_0 (ATerm);
ATerm w_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm free_vars2_4_0 (ATerm a_99 (ATerm), ATerm b_99 (ATerm), ATerm c_99 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm d_99 (ATerm), ATerm);
ATerm h_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm y_1 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm k_2 (ATerm);
ATerm svars_arity_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm pat_td_1_0 (ATerm m_86 (ATerm), ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm map1_1_0 (ATerm s_0 (ATerm), ATerm);
ATerm b_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm q_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm x_3 (ATerm);
ATerm g_8 (ATerm p_28, ATerm q_28, ATerm r_28, ATerm);
ATerm y_44 (ATerm h_44, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm f_4 (ATerm);
ATerm h_4 (ATerm);
ATerm l_4 (ATerm);
ATerm q_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm repeat_1_0 (ATerm e_101 (ATerm), ATerm);
ATerm z_4 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm a_5 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm k_89 (ATerm), ATerm);
ATerm j_8 (ATerm z_23, ATerm a_24, ATerm b_24, ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm g_88 (ATerm), ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm tuple_unzip_1_0 (ATerm i_92 (ATerm), ATerm);
ATerm MkDistApplication_0_0 (ATerm);
ATerm k_8 (ATerm d_50, ATerm e_50, ATerm);
ATerm q_5 (ATerm);
ATerm s_5 (ATerm);
ATerm copy_1_0 (ATerm f_105 (ATerm), ATerm);
ATerm l_8 (ATerm g_20, ATerm h_20, ATerm);
ATerm last_0_0 (ATerm);
ATerm r_61 (ATerm p_58, ATerm q_58, ATerm r_58, ATerm s_58, ATerm);
ATerm s_61 (ATerm g_60, ATerm h_60, ATerm j_60, ATerm k_60, ATerm);
ATerm w_5 (ATerm);
ATerm y_5 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm DefineCongruence_0_0 (ATerm);
ATerm f_6 (ATerm);
ATerm i_6 (ATerm);
ATerm choices_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm alltd_1_0 (ATerm y_89 (ATerm), ATerm);
ATerm j_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm p_87 (ATerm), ATerm q_87 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm o_6 (ATerm);
ATerm q_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm y_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm e_7 (ATerm);
ATerm JoinDefs2_0_0 (ATerm);
ATerm h_64 (ATerm z_61, ATerm a_62, ATerm b_62, ATerm c_62, ATerm);
ATerm get_definition_0_0 (ATerm);
ATerm at_end_1_0 (ATerm x_94 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm i_66 (ATerm r_65, ATerm);
ATerm conc_0_0 (ATerm);
ATerm q_8 (ATerm c_102 (ATerm), ATerm r_46, ATerm q_46, ATerm);
ATerm genzip_4_0 (ATerm s_92 (ATerm), ATerm t_92 (ATerm), ATerm u_92 (ATerm), ATerm v_92 (ATerm), ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm u_8 (ATerm m_652, ATerm r_652, ATerm z_65, ATerm);
ATerm r_7 (ATerm);
ATerm m_8 (ATerm);
ATerm p_8 (ATerm);
ATerm x_70 (ATerm e_69, ATerm f_69, ATerm g_69, ATerm);
ATerm r_8 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm w_8 (ATerm g_117 (ATerm), ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm w_66, ATerm t_66, ATerm b_67, ATerm x_66, ATerm u_66, ATerm v_66, ATerm);
ATerm GnNextChangeGraph_3_0 (ATerm g_117 (ATerm), ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm t_101 (ATerm), ATerm u_101 (ATerm), ATerm);
ATerm for_3_0 (ATerm w_101 (ATerm), ATerm x_101 (ATerm), ATerm y_101 (ATerm), ATerm);
ATerm s_8 (ATerm);
ATerm y_8 (ATerm);
ATerm a_9 (ATerm);
ATerm m_9 (ATerm);
ATerm n_9 (ATerm);
ATerm v_9 (ATerm);
ATerm x_9 (ATerm);
ATerm y_26 (ATerm b_26, ATerm c_26, ATerm);
ATerm extract_needed_defs_0_0 (ATerm);
ATerm z_8 (ATerm p_117 (ATerm), ATerm u_67, ATerm s_67, ATerm);
ATerm Arities_0_0 (ATerm);
ATerm b_9 (ATerm i_63, ATerm j_63, ATerm);
ATerm p_76 (ATerm f_76, ATerm);
ATerm Definitions_0_0 (ATerm);
ATerm y_9 (ATerm);
ATerm z_9 (ATerm);
ATerm b_10 (ATerm);
ATerm c_10 (ATerm);
ATerm d_10 (ATerm);
ATerm g_10 (ATerm);
ATerm h_10 (ATerm);
ATerm i_10 (ATerm);
ATerm k_10 (ATerm);
ATerm RegisterSDefT_0_0 (ATerm);
ATerm l_10 (ATerm);
ATerm m_10 (ATerm);
ATerm n_10 (ATerm);
ATerm p_10 (ATerm);
ATerm q_10 (ATerm);
ATerm r_10 (ATerm);
ATerm c_9 (ATerm p_21, ATerm r_21, ATerm s_21, ATerm);
ATerm d_9 (ATerm k_102 (ATerm), ATerm l_102 (ATerm), ATerm x_46, ATerm w_46, ATerm);
ATerm e_9 (ATerm h_102 (ATerm), ATerm t_46, ATerm s_46, ATerm);
ATerm foldr_3_0 (ATerm r_104 (ATerm), ATerm s_104 (ATerm), ATerm t_104 (ATerm), ATerm);
ATerm u_10 (ATerm);
ATerm v_10 (ATerm);
ATerm w_10 (ATerm);
ATerm x_10 (ATerm);
ATerm all_defs_0_0 (ATerm);
ATerm Cons_2_0 (ATerm r_72 (ATerm), ATerm s_72 (ATerm), ATerm);
ATerm f_9 (ATerm i_53, ATerm j_53, ATerm);
ATerm g_9 (ATerm w_56, ATerm x_56, ATerm);
ATerm i_9 (ATerm w_109 (ATerm), ATerm g_510, ATerm a_57, ATerm);
ATerm h_9 (ATerm s_56, ATerm t_56, ATerm);
ATerm y_10 (ATerm);
ATerm z_10 (ATerm);
ATerm output_1_0 (ATerm f_114 (ATerm), ATerm);
ATerm f_80 (ATerm z_79, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm j_9 (ATerm y_56, ATerm);
ATerm k_9 (ATerm k_53, ATerm l_53, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm q_81 (ATerm p_80, ATerm);
ATerm r_81 (ATerm t_80, ATerm u_80, ATerm v_80, ATerm);
ATerm s_81 (ATerm d_81, ATerm e_81, ATerm f_81, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm a_11 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm g_114 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm c_11 (ATerm);
ATerm d_11 (ATerm);
ATerm e_11 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm f_11 (ATerm);
ATerm g_11 (ATerm);
ATerm i_11 (ATerm);
ATerm j_11 (ATerm);
ATerm k_11 (ATerm);
ATerm l_11 (ATerm);
ATerm n_11 (ATerm);
ATerm o_11 (ATerm);
ATerm p_11 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm s_9 (ATerm z_57, ATerm a_58, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm q_11 (ATerm);
ATerm r_11 (ATerm);
ATerm s_11 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm q_9 (ATerm x_62, ATerm y_62, ATerm w_62, ATerm);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm t_11 (ATerm);
ATerm u_11 (ATerm);
ATerm v_11 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm l_9 (ATerm x_49, ATerm y_49, ATerm);
ATerm foldr_2_0 (ATerm p_104 (ATerm), ATerm q_104 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm w_11 (ATerm);
ATerm y_11 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm g_111 (ATerm), ATerm);
ATerm z_11 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm b_12 (ATerm);
ATerm need_help_1_0 (ATerm w_113 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm g_12 (ATerm);
ATerm i_12 (ATerm);
ATerm j_12 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm r_94 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm o_9 (ATerm i_46, ATerm j_46, ATerm);
ATerm debug_1_0 (ATerm u_109 (ATerm), ATerm);
ATerm map_1_0 (ATerm h_94 (ATerm), ATerm);
ATerm l_12 (ATerm);
ATerm m_12 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm p_9 (ATerm o_64, ATerm p_64, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm n_12 (ATerm);
ATerm o_12 (ATerm);
ATerm p_12 (ATerm);
ATerm q_12 (ATerm);
ATerm r_12 (ATerm);
ATerm t_12 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm z_115 (ATerm), ATerm);
ATerm y_12 (ATerm);
ATerm a_13 (ATerm);
ATerm f_13 (ATerm);
ATerm g_13 (ATerm);
ATerm parse_options_1_0 (ATerm y_115 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm y_113 (ATerm), ATerm z_113 (ATerm), ATerm a_114 (ATerm), ATerm b_114 (ATerm), ATerm);
ATerm i_13 (ATerm);
ATerm j_13 (ATerm);
ATerm k_13 (ATerm);
ATerm l_13 (ATerm);
ATerm m_13 (ATerm);
ATerm n_13 (ATerm);
ATerm o_13 (ATerm);
ATerm q_13 (ATerm);
ATerm t_13 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm q_7 (ATerm l_21, ATerm n_21, ATerm o_21, ATerm t)
{
  ATerm c_0 = NULL,t_0 = NULL;
  t = term_p_13;
  c_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_13), o_21), term_x_13), n_21), term_w_13), l_21), term_u_13);
  t_0 = t;
  t = SSL_printnl(c_0, t_0);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_13), o_21), term_x_13), n_21), term_w_13), l_21), term_u_13);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm v_0 = NULL,x_0 = NULL,y_0 = NULL;
  t = term_p_13;
  x_0 = t;
  t = (ATerm) ATinsert(ATempty, term_z_13);
  y_0 = t;
  t = SSL_printnl(x_0, y_0);
  t = term_b_14;
  v_0 = t;
  t = SSL_exit(v_0);
  t = (ATerm) ATinsert(ATempty, term_z_13);
  return(t);
}
ATerm a_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_14 = ATgetArgument(t, 0);
      if(((ATgetType(d_14) != AT_INT) || (ATgetInt((ATermInt) d_14) != 0)))
        _fail(t);
      {
        ATerm f_14 = ATgetArgument(t, 1);
        if(((ATgetType(f_14) != AT_INT) || (ATgetInt((ATermInt) f_14) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm v_1 = NULL,w_1 = NULL,x_1 = NULL,z_1 = NULL,a_2 = NULL;
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
      z_1 = ATgetArgument(t, 0);
      a_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_1;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = a_2;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  {
    ATerm i_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_0 = NULL,q_0 = NULL;
        t = w_1;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_14 = ATgetFirst((ATermList) t);
            ATerm l_14 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(l_14) == AT_LIST) && !(ATisEmpty(l_14))))
              {
                ATerm m_14 = ATgetFirst((ATermList) l_14);
                ATerm r_14 = (ATerm) ATgetNext((ATermList) l_14);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm s_14 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(a_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = s_14;
            }
          t = term_p_13;
          o_0 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, w_1), term_x_14);
          q_0 = t;
          t = SSL_printnl(o_0, q_0);
          t = (ATerm) ATinsert(ATinsert(ATempty, w_1), term_x_14);
          t = giving_up_0_0(t);
        }
        ;
        LocalPopChoice(j_14);
      }
    else
      {
        t = i_14;
        {
          ATerm c_1 = NULL,d_1 = NULL;
          t = w_1;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm a_15 = ATgetFirst((ATermList) t);
              if(match_cons(a_15, sym__2))
                {
                  c_1 = ATgetArgument(a_15, 0);
                  d_1 = ATgetArgument(a_15, 1);
                }
              else
                _fail(t);
              {
                ATerm b_15 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(b_15) != AT_LIST) || !(ATisEmpty(b_15))))
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
ATerm sboundin_3_0 (ATerm l_87 (ATerm), ATerm m_87 (ATerm), ATerm n_87 (ATerm), ATerm t)
{
  ATerm j_4 = NULL,k_4 = NULL,m_4 = NULL,r_4 = NULL,u_4 = NULL;
  m_4 = t;
  if(match_cons(t, sym_Let_2))
    {
      r_4 = ATgetArgument(t, 0);
      u_4 = ATgetArgument(t, 1);
      {
        ATerm p_1 = NULL,d_2 = NULL,e_2 = NULL,i_1 = NULL;
        t = SSLgetAnnotations(m_4);
        p_1 = t;
        t = r_4;
        t = l_87(t);
        d_2 = t;
        t = u_4;
        t = l_87(t);
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
          r_4 = ATgetArgument(t, 0);
          u_4 = ATgetArgument(t, 1);
          j_4 = ATgetArgument(t, 2);
          {
            ATerm r_3 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,j_1 = NULL;
            t = SSLgetAnnotations(m_4);
            r_3 = t;
            t = r_4;
            t = n_87(t);
            n_4 = t;
            t = u_4;
            t = n_87(t);
            o_4 = t;
            t = j_4;
            t = l_87(t);
            p_4 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, n_4, o_4, p_4);
            j_1 = t;
            t = SSLsetAnnotations(j_1, r_3);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              r_4 = ATgetArgument(t, 0);
              u_4 = ATgetArgument(t, 1);
              j_4 = ATgetArgument(t, 2);
              k_4 = ATgetArgument(t, 3);
              {
                ATerm e_5 = NULL,r_5 = NULL,u_5 = NULL,z_5 = NULL,b_6 = NULL,k_1 = NULL;
                t = SSLgetAnnotations(m_4);
                e_5 = t;
                t = r_4;
                t = n_87(t);
                r_5 = t;
                t = u_4;
                t = n_87(t);
                u_5 = t;
                t = j_4;
                t = n_87(t);
                z_5 = t;
                t = k_4;
                t = l_87(t);
                b_6 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, r_5, u_5, z_5, b_6);
                k_1 = t;
                t = SSLsetAnnotations(k_1, e_5);
              }
            }
          else
            {
              ATerm z_6 = NULL,c_7 = NULL,d_7 = NULL,l_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  r_4 = ATgetArgument(t, 0);
                  u_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(m_4);
              z_6 = t;
              t = r_4;
              t = n_87(t);
              c_7 = t;
              t = u_4;
              t = l_87(t);
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
  ATerm k_5 = NULL;
  ATerm c_15 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          k_5 = ATgetArgument(t, 0);
          {
            ATerm e_15 = ATgetArgument(t, 1);
          }
          {
            ATerm f_15 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_15);
      t = k_5;
    }
  else
    {
      t = c_15;
      if(match_cons(t, sym_SDefT_4))
        {
          k_5 = ATgetArgument(t, 0);
          {
            ATerm h_15 = ATgetArgument(t, 1);
          }
          {
            ATerm i_15 = ATgetArgument(t, 2);
          }
          {
            ATerm k_15 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = k_5;
    }
  return(t);
}
ATerm x_7 (ATerm k_31, ATerm j_31, ATerm t)
{
  t = k_31;
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
  ATerm e_8 = NULL,f_8 = NULL;
  if(match_cons(t, sym__2))
    {
      e_8 = ATgetArgument(t, 0);
      f_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_9(a_1, e_8, f_8, t);
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
  ATerm r_9 = NULL,t_9 = NULL;
  if(match_cons(t, sym__2))
    {
      r_9 = ATgetArgument(t, 0);
      t_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_9(f_1, r_9, t_9, t);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm u_9 = NULL;
  if(match_cons(t, sym__2))
    {
      u_9 = ATgetArgument(t, 0);
      if((u_9 != ATgetArgument(t, 1)))
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
  ATerm w_6 = NULL;
  if(match_cons(t, sym__2))
    {
      w_6 = ATgetArgument(t, 0);
      if((w_6 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm a_99 (ATerm), ATerm b_99 (ATerm), ATerm c_99 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm d_99 (ATerm), ATerm t)
{
  ATerm x_6 (ATerm t)
  {
    ATerm a_6 = NULL,e_6 = NULL,g_6 = NULL;
    g_6 = t;
    {
      ATerm l_15 = t;
      int m_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_99(t);
          ;
          LocalPopChoice(m_15);
        }
      else
        {
          t = l_15;
          t = (ATerm) ATempty;
        }
      a_6 = t;
      t = g_6;
      {
        ATerm o_15 = t;
        int q_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_6 = NULL,o_7 = NULL,p_7 = NULL;
            t = b_99(t);
            h_6 = t;
            t = g_6;
            {
              ATerm m_0 (ATerm t)
              {
                ATerm i_7 = NULL;
                t = x_6(t);
                i_7 = t;
                t = (ATerm) ATmakeAppl(sym__2, i_7, h_6);
                t = q_8(d_99, i_7, h_6, t);
                return(t);
              }
              t = c_99(m_0, x_6, u_0, t);
              p_7 = t;
              t = SSL_explode_term(p_7);
              if(match_cons(t, sym__2))
                {
                  ATerm r_15 = ATgetArgument(t, 0);
                  o_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = o_7;
              t = foldr_3_0(w_0, z_0, _id, t);
            }
            ;
            LocalPopChoice(q_15);
          }
        else
          {
            t = o_15;
            {
              ATerm o_8 = NULL;
              t = SSL_explode_term(g_6);
              if(match_cons(t, sym__2))
                {
                  ATerm s_15 = ATgetArgument(t, 0);
                  o_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = o_8;
              t = foldr_3_0(b_1, e_1, x_6, t);
            }
          }
        e_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_6, e_6);
        t = e_9(g_1, a_6, e_6, t);
      }
    }
    return(t);
  }
  t = x_6(t);
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm j_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm d_16 = ATgetArgument(t, 0);
      if(match_cons(d_16, sym_SVar_1))
        {
          j_7 = ATgetArgument(d_16, 0);
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
  t = foldr_3_0(s_1, y_1, f_2, t);
  w_7 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_7, (ATerm) ATmakeAppl(sym__2, v_7, w_7)));
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm c_8 = NULL,i_8 = NULL,n_8 = NULL,t_8 = NULL,x_8 = NULL;
  c_8 = t;
  if(match_cons(t, sym_Let_2))
    {
      i_8 = ATgetArgument(t, 0);
      n_8 = ATgetArgument(t, 1);
      t = c_8;
      t = x_7(i_8, n_8, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          i_8 = ATgetArgument(t, 0);
          n_8 = ATgetArgument(t, 1);
          t_8 = ATgetArgument(t, 2);
          t = n_8;
          t = map_1_0(g_2, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              i_8 = ATgetArgument(t, 0);
              n_8 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, i_8);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  i_8 = ATgetArgument(t, 0);
                  n_8 = ATgetArgument(t, 1);
                  t_8 = ATgetArgument(t, 2);
                  x_8 = ATgetArgument(t, 3);
                  t = n_8;
                  t = map_1_0(h_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      i_8 = ATgetArgument(t, 0);
                      n_8 = ATgetArgument(t, 1);
                      t_8 = ATgetArgument(t, 2);
                      x_8 = ATgetArgument(t, 3);
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
  ATerm a_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_16 = ATgetArgument(t, 0);
      if(match_cons(f_16, sym__2))
        {
          a_12 = ATgetArgument(f_16, 0);
          {
            ATerm i_16 = ATgetArgument(f_16, 1);
          }
        }
      else
        _fail(t);
      if((a_12 != ATgetArgument(t, 1)))
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
  t = term_j_16;
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
  t = l_9(y_7, z_7, t);
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_j_16;
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm a_8 = NULL,b_8 = NULL;
  if(match_cons(t, sym__2))
    {
      a_8 = ATgetArgument(t, 0);
      b_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_9(a_8, b_8, t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm f_10 = NULL;
  ATerm k_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_10 = ATgetArgument(t, 0);
          {
            ATerm n_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_16);
      t = f_10;
    }
  else
    {
      t = k_16;
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
ATerm h_2 (ATerm t)
{
  ATerm b_11 = NULL;
  ATerm t_16 = t;
  int u_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_11 = ATgetArgument(t, 0);
          {
            ATerm w_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_16);
      t = b_11;
    }
  else
    {
      t = t_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_11;
    }
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm x_11 = NULL;
  ATerm z_16 = t;
  int b_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_11 = ATgetArgument(t, 0);
          {
            ATerm c_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_17);
      t = x_11;
    }
  else
    {
      t = z_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_11;
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
  ATerm i_20 = NULL,l_20 = NULL,s_20 = NULL;
  l_20 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      s_20 = ATgetArgument(t, 0);
      i_20 = ATgetArgument(t, 1);
      {
        ATerm w_20 = NULL,x_20 = NULL,a_21 = NULL,b_21 = NULL;
        t = l_20;
        t = new_0_0(t);
        w_20 = t;
        t = new_0_0(t);
        x_20 = t;
        t = new_0_0(t);
        a_21 = t;
        t = new_0_0(t);
        b_21 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_21), a_21), x_20), w_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, w_20), (ATerm) ATmakeAppl(sym_Var_1, a_21))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, s_20, (ATerm)ATmakeAppl(sym_Var_1, w_20), (ATerm) ATmakeAppl(sym_Var_1, x_20)), (ATerm) ATmakeAppl(sym_BAM_3, i_20, (ATerm)ATmakeAppl(sym_Var_1, a_21), (ATerm) ATmakeAppl(sym_Var_1, b_21)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_f_17, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, b_21)), (ATerm) ATmakeAppl(sym_Var_1, x_20))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          s_20 = ATgetArgument(t, 0);
          {
            ATerm d_21 = NULL,e_21 = NULL,h_21 = NULL,t_21 = NULL;
            t = l_20;
            t = new_0_0(t);
            h_21 = t;
            t = s_20;
            {
              ATerm l_2 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((d_21 != NULL) && (d_21 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      d_21 = ATgetArgument(t, 0);
                    if(((e_21 != NULL) && (e_21 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      e_21 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, h_21);
                return(t);
              }
              t = oncetd_1_0(l_2, t);
              t_21 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_f_17, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_21)), not_null(d_21))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_21)), (ATerm) ATmakeAppl(sym_Build_1, t_21))));
            }
          }
        }
      else
        {
          ATerm x_21 = NULL,y_21 = NULL,a_22 = NULL,k_22 = NULL,m_22 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              s_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_20;
          t = new_0_0(t);
          a_22 = t;
          t = new_0_0(t);
          k_22 = t;
          t = s_20;
          {
            ATerm m_2 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((x_21 != NULL) && (x_21 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    x_21 = ATgetArgument(t, 0);
                  if(((y_21 != NULL) && (y_21 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    y_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, a_22);
              return(t);
            }
            t = oncetd_1_0(m_2, t);
            m_22 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, m_22), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_22)), (ATerm) ATmakeAppl(sym_PrimT_3, term_h_17, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, k_22))))), (ATerm)ATmakeAppl(sym_Var_1, a_22), (ATerm) ATmakeAppl(sym_Op_2, term_j_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_21)), not_null(x_21)))))));
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
    ATerm k_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL;
        t = t_22;
        t = new_0_0(t);
        y_22 = t;
        t = u_22;
        {
          ATerm n_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((w_22 != NULL) && (w_22 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_22 = ATgetArgument(t, 0);
                if(((x_22 != NULL) && (x_22 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  x_22 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, y_22), w_22);
            return(t);
          }
          t = pat_td_1_0(n_2, t);
          z_22 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_22), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_o_17, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_22))), (ATerm) ATmakeAppl(sym_Match_1, not_null(x_22))))));
        }
        ;
        LocalPopChoice(l_17);
      }
    else
      {
        t = k_17;
        {
          ATerm p_17 = t;
          int q_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_23 = NULL,h_23 = NULL,n_23 = NULL;
              t = t_22;
              t = new_0_0(t);
              h_23 = t;
              t = u_22;
              {
                ATerm o_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((e_23 != NULL) && (e_23 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        e_23 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, h_23);
                  return(t);
                }
                t = pat_td_1_0(o_2, t);
                n_23 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, h_23)), not_null(e_23))));
              }
              ;
              LocalPopChoice(q_17);
            }
          else
            {
              t = p_17;
              {
                ATerm r_23 = NULL,s_23 = NULL,v_23 = NULL,y_23 = NULL;
                t = t_22;
                t = new_0_0(t);
                v_23 = t;
                t = u_22;
                {
                  ATerm p_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((s_23 != NULL) && (s_23 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          s_23 = ATgetArgument(t, 0);
                        if(((r_23 != NULL) && (r_23 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          r_23 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, v_23);
                    return(t);
                  }
                  t = pat_td_1_0(p_2, t);
                  y_23 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, y_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, v_23)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(r_23)), not_null(s_23)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm m_86 (ATerm), ATerm t)
{
  ATerm r_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_86(t);
      ;
      LocalPopChoice(s_17);
    }
  else
    {
      t = r_17;
      {
        ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL;
        f_33 = t;
        if(match_cons(t, sym_Op_2))
          {
            g_33 = ATgetArgument(t, 0);
            h_33 = ATgetArgument(t, 1);
            {
              ATerm j_10 = NULL,o_10 = NULL,t_1 = NULL;
              t = SSLgetAnnotations(f_33);
              j_10 = t;
              t = h_33;
              {
                ATerm q_2 (ATerm t)
                {
                  t = pat_td_1_0(m_86, t);
                  return(t);
                }
                t = fetch_1_0(q_2, t);
                o_10 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, g_33, o_10);
                t_1 = t;
                t = SSLsetAnnotations(t_1, j_10);
              }
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                g_33 = ATgetArgument(t, 0);
                h_33 = ATgetArgument(t, 1);
                {
                  ATerm t_17 = t;
                  int u_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_11 = NULL,m_11 = NULL,u_1 = NULL;
                      t = SSLgetAnnotations(f_33);
                      h_11 = t;
                      t = h_33;
                      t = pat_td_1_0(m_86, t);
                      m_11 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, g_33, m_11);
                      u_1 = t;
                      t = SSLsetAnnotations(u_1, h_11);
                      ;
                      LocalPopChoice(u_17);
                    }
                  else
                    {
                      t = t_17;
                      {
                        ATerm h_12 = NULL,k_12 = NULL,b_2 = NULL;
                        t = SSLgetAnnotations(f_33);
                        h_12 = t;
                        t = g_33;
                        t = pat_td_1_0(m_86, t);
                        k_12 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, k_12, h_33);
                        b_2 = t;
                        t = SSLsetAnnotations(b_2, h_12);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    g_33 = ATgetArgument(t, 0);
                    h_33 = ATgetArgument(t, 1);
                    e_33 = ATgetArgument(t, 2);
                    {
                      ATerm w_12 = NULL,b_13 = NULL,c_2 = NULL;
                      t = SSLgetAnnotations(f_33);
                      w_12 = t;
                      t = e_33;
                      {
                        ATerm r_2 (ATerm t)
                        {
                          t = pat_td_1_0(m_86, t);
                          return(t);
                        }
                        t = fetch_1_0(r_2, t);
                        b_13 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, g_33, h_33, b_13);
                        c_2 = t;
                        t = SSLsetAnnotations(c_2, w_12);
                      }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        g_33 = ATgetArgument(t, 0);
                        h_33 = ATgetArgument(t, 1);
                        e_33 = ATgetArgument(t, 2);
                        {
                          ATerm e_14 = NULL,q_14 = NULL,i_2 = NULL;
                          t = SSLgetAnnotations(f_33);
                          e_14 = t;
                          t = e_33;
                          {
                            ATerm v_2 (ATerm t)
                            {
                              t = pat_td_1_0(m_86, t);
                              return(t);
                            }
                            t = fetch_1_0(v_2, t);
                            q_14 = t;
                            t = (ATerm) ATmakeAppl(sym_CallT_3, g_33, h_33, q_14);
                            i_2 = t;
                            t = SSLsetAnnotations(i_2, e_14);
                          }
                        }
                      }
                    else
                      {
                        ATerm g_15 = NULL,j_15 = NULL,j_2 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            g_33 = ATgetArgument(t, 0);
                            h_33 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(f_33);
                        g_15 = t;
                        t = h_33;
                        t = pat_td_1_0(m_86, t);
                        j_15 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, g_33, j_15);
                        j_2 = t;
                        t = SSLsetAnnotations(j_2, g_15);
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
  ATerm z_33 = NULL,a_34 = NULL;
  z_33 = t;
  if(match_cons(t, sym_Build_1))
    {
      a_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_17 = t;
    int b_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_34 = NULL,c_34 = NULL,i_34 = NULL,l_34 = NULL;
        t = z_33;
        t = new_0_0(t);
        i_34 = t;
        t = a_34;
        {
          ATerm w_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((b_34 != NULL) && (b_34 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  b_34 = ATgetArgument(t, 0);
                if(((c_34 != NULL) && (c_34 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  c_34 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, i_34);
            return(t);
          }
          t = pat_td_1_0(w_2, t);
          l_34 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_34), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_m_18, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_34)), not_null(b_34))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, i_34)))), (ATerm) ATmakeAppl(sym_Build_1, l_34)));
        }
        ;
        LocalPopChoice(b_18);
      }
    else
      {
        t = v_17;
        {
          ATerm h_19 = t;
          int i_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_34 = NULL,u_34 = NULL,v_34 = NULL;
              t = z_33;
              t = new_0_0(t);
              u_34 = t;
              t = a_34;
              {
                ATerm x_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((m_34 != NULL) && (m_34 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        m_34 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, u_34);
                  return(t);
                }
                t = pat_td_1_0(x_2, t);
                v_34 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_34), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_34), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_34)))), (ATerm) ATmakeAppl(sym_Build_1, v_34)));
              }
              ;
              LocalPopChoice(i_19);
            }
          else
            {
              t = h_19;
              {
                ATerm w_34 = NULL,z_34 = NULL,d_35 = NULL,e_35 = NULL;
                t = z_33;
                t = new_0_0(t);
                d_35 = t;
                t = a_34;
                {
                  ATerm a_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((w_34 != NULL) && (w_34 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          w_34 = ATgetArgument(t, 0);
                        if(((z_34 != NULL) && (z_34 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          z_34 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, d_35);
                    return(t);
                  }
                  t = pat_td_1_0(a_3, t);
                  e_35 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_35), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(w_34), not_null(z_34), (ATerm) ATmakeAppl(sym_Var_1, d_35))), (ATerm) ATmakeAppl(sym_Build_1, e_35)));
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
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL;
  x_36 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_36 = ATgetFirst((ATermList) t);
      z_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm j_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL,a_16 = NULL,b_16 = NULL,g_16 = NULL,h_16 = NULL,t_2 = NULL,s_2 = NULL;
        t = SSLgetAnnotations(x_36);
        b_16 = t;
        t = y_36;
        t = s_0(t);
        g_16 = t;
        t = (ATerm) ATinsert(CheckATermList(z_36), g_16);
        s_2 = t;
        t = SSLsetAnnotations(s_2, b_16);
        h_16 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_15 = ATgetFirst((ATermList) t);
            v_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_16);
        t_15 = t;
        t = v_15;
        {
          ATerm l_19 = t;
          int m_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(s_0, t);
              ;
              LocalPopChoice(m_19);
            }
          else
            {
              t = l_19;
            }
          a_16 = t;
          t = (ATerm) ATinsert(CheckATermList(a_16), u_15);
          t_2 = t;
          t = SSLsetAnnotations(t_2, t_15);
        }
        ;
        LocalPopChoice(k_19);
      }
    else
      {
        t = j_19;
        {
          ATerm e_17 = NULL,i_17 = NULL,u_2 = NULL;
          t = SSLgetAnnotations(x_36);
          e_17 = t;
          t = z_36;
          t = map1_1_0(s_0, t);
          i_17 = t;
          t = (ATerm) ATinsert(CheckATermList(i_17), y_36);
          u_2 = t;
          t = SSLsetAnnotations(u_2, e_17);
        }
      }
  }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm k_39 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      k_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, k_39, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_19), term_p_19));
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm s_39 = NULL,t_39 = NULL;
  t_39 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      s_39 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, s_39, term_p_19);
    }
  else
    {
      t = t_39;
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm h_40 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, h_40, term_p_19);
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL;
  k_40 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      j_40 = ATgetArgument(t, 0);
      {
        ATerm q_19 = t;
        int r_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, j_40, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_19), term_p_19));
            ;
            LocalPopChoice(r_19);
          }
        else
          {
            t = q_19;
            t = k_40;
          }
      }
    }
  else
    {
      t = k_40;
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm a_41 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      a_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, a_41, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_19), term_p_19));
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL;
  c_41 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      b_41 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, b_41, term_p_19);
    }
  else
    {
      t = c_41;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm x_37 = NULL,y_37 = NULL,b_38 = NULL,d_38 = NULL,f_38 = NULL,g_38 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      f_38 = ATgetArgument(t, 0);
      g_38 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, f_38, g_38);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          f_38 = ATgetArgument(t, 0);
          t = f_38;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_37 = ATgetFirst((ATermList) t);
              y_37 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, x_37, (ATerm) ATmakeAppl(sym_LChoices_1, y_37));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_t_19;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              f_38 = ATgetArgument(t, 0);
              t = f_38;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  x_37 = ATgetFirst((ATermList) t);
                  y_37 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, x_37, (ATerm) ATmakeAppl(sym_Choices_1, y_37));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_t_19;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  f_38 = ATgetArgument(t, 0);
                  t = f_38;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      x_37 = ATgetFirst((ATermList) t);
                      y_37 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_37, (ATerm) ATmakeAppl(sym_Seqs_1, y_37));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_u_19;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_38 = ATgetArgument(t, 0);
                      g_38 = ATgetArgument(t, 1);
                      d_38 = ATgetArgument(t, 2);
                      b_38 = ATgetArgument(t, 3);
                      {
                        ATerm h_39 = NULL,j_39 = NULL;
                        t = g_38;
                        t = map1_1_0(b_3, t);
                        h_39 = t;
                        t = d_38;
                        t = map1_1_0(d_3, t);
                        j_39 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, f_38, h_39, j_39, b_38);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          f_38 = ATgetArgument(t, 0);
                          g_38 = ATgetArgument(t, 1);
                          d_38 = ATgetArgument(t, 2);
                          b_38 = ATgetArgument(t, 3);
                          {
                            ATerm z_19 = t;
                            int u_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm e_40 = NULL,g_40 = NULL;
                                t = d_38;
                                t = map1_1_0(e_3, t);
                                e_40 = t;
                                t = g_38;
                                t = map_1_0(j_3, t);
                                g_40 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, f_38, g_40, e_40, b_38);
                                ;
                                LocalPopChoice(u_20);
                              }
                            else
                              {
                                t = z_19;
                                {
                                  ATerm x_40 = NULL,z_40 = NULL;
                                  t = g_38;
                                  t = map1_1_0(k_3, t);
                                  x_40 = t;
                                  t = d_38;
                                  t = map_1_0(l_3, t);
                                  z_40 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, f_38, x_40, z_40, b_38);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              f_38 = ATgetArgument(t, 0);
                              g_38 = ATgetArgument(t, 1);
                              d_38 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, g_38, (ATerm) ATmakeAppl(sym_Op_2, term_j_17, (ATerm) ATinsert(ATinsert(ATempty, d_38), f_38)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  f_38 = ATgetArgument(t, 0);
                                  g_38 = ATgetArgument(t, 1);
                                  d_38 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, d_38)), f_38), (ATerm) ATmakeAppl(sym_Build_1, g_38)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      f_38 = ATgetArgument(t, 0);
                                      g_38 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_38, (ATerm) ATmakeAppl(sym_Match_1, g_38));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          f_38 = ATgetArgument(t, 0);
                                          g_38 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, f_38), g_38);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              f_38 = ATgetArgument(t, 0);
                                              g_38 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, g_38), f_38);
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
  ATerm v_20 = t;
  if((PushChoice() == 0))
    {
      ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL,y_2 = NULL;
      v_42 = t;
      if(match_cons(t, sym_Var_1))
        {
          u_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_42);
      t_42 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, u_42);
      y_2 = t;
      t = SSLsetAnnotations(y_2, t_42);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_20;
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_f_21;
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm w_42 = NULL,x_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_42 = ATgetFirst((ATermList) t);
      x_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_42, x_42);
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL,c_43 = NULL,h_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_21 = ATgetArgument(t, 0);
      if(match_cons(j_21, sym__2))
        {
          y_42 = ATgetArgument(j_21, 0);
          z_42 = ATgetArgument(j_21, 1);
        }
      else
        _fail(t);
      {
        ATerm k_21 = ATgetArgument(t, 1);
        if(match_cons(k_21, sym__2))
          {
            c_43 = ATgetArgument(k_21, 0);
            h_43 = ATgetArgument(k_21, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_43), y_42), (ATerm) ATinsert(CheckATermList(h_43), z_42));
  return(t);
}
ATerm u_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_f_21;
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm i_43 = NULL,n_43 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_43 = ATgetFirst((ATermList) t);
      n_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_43, n_43);
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL,v_43 = NULL,a_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_21 = ATgetArgument(t, 0);
      if(match_cons(m_21, sym__2))
        {
          q_43 = ATgetArgument(m_21, 0);
          r_43 = ATgetArgument(m_21, 1);
        }
      else
        _fail(t);
      {
        ATerm q_21 = ATgetArgument(t, 1);
        if(match_cons(q_21, sym__2))
          {
            v_43 = ATgetArgument(q_21, 0);
            a_44 = ATgetArgument(q_21, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_43), q_43), (ATerm) ATinsert(CheckATermList(a_44), r_43));
  return(t);
}
ATerm g_8 (ATerm p_28, ATerm q_28, ATerm r_28, ATerm t)
{
  ATerm g_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,z_2 = NULL;
  t = r_28;
  t = fetch_1_0(m_3, t);
  t = r_28;
  t = genzip_4_0(n_3, o_3, q_3, LiftPrimArg_0_0, t);
  s_42 = t;
  if(match_cons(t, sym__2))
    {
      o_42 = ATgetArgument(t, 0);
      p_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_42);
  n_42 = t;
  t = o_42;
  t = concat_0_0(t);
  q_42 = t;
  t = p_42;
  t = genzip_4_0(u_3, v_3, x_3, _id, t);
  r_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_42, r_42);
  z_2 = t;
  t = SSLsetAnnotations(z_2, n_42);
  if(match_cons(t, sym__2))
    {
      g_42 = ATgetArgument(t, 0);
      {
        ATerm u_21 = ATgetArgument(t, 1);
        if(match_cons(u_21, sym__2))
          {
            l_42 = ATgetArgument(u_21, 0);
            m_42 = ATgetArgument(u_21, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, g_42, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, l_42), (ATerm) ATmakeAppl(sym_CallT_3, p_28, q_28, m_42)));
  return(t);
}
ATerm y_44 (ATerm h_44, ATerm t)
{
  ATerm n_44 = NULL;
  t = h_44;
  {
    ATerm v_21 = t;
    if((PushChoice() == 0))
      {
        ATerm r_44 = NULL,t_44 = NULL,u_44 = NULL,c_3 = NULL;
        u_44 = t;
        if(match_cons(t, sym_Var_1))
          {
            t_44 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_44);
        r_44 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, t_44);
        c_3 = t;
        t = SSLsetAnnotations(c_3, r_44);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_21;
      }
    t = new_0_0(t);
    n_44 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, n_44), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_44), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_44)))), (ATerm) ATmakeAppl(sym_Var_1, n_44)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm v_44 = NULL,w_44 = NULL;
  v_44 = t;
  if(match_cons(t, sym_Var_1))
    {
      w_44 = ATgetArgument(t, 0);
      {
        ATerm w_21 = t;
        int z_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_44(v_44, t);
            ;
            LocalPopChoice(z_21);
          }
        else
          {
            t = w_21;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_u_19, (ATerm) ATmakeAppl(sym_Var_1, w_44)));
          }
      }
    }
  else
    {
      t = y_44(v_44, t);
    }
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm b_22 = t;
  if((PushChoice() == 0))
    {
      ATerm r_18 = NULL,s_18 = NULL,u_18 = NULL,f_3 = NULL;
      u_18 = t;
      if(match_cons(t, sym_Var_1))
        {
          s_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_18);
      r_18 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, s_18);
      f_3 = t;
      t = SSLsetAnnotations(f_3, r_18);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_22;
    }
  return(t);
}
ATerm b_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_f_21;
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
ATerm d_4 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_22 = ATgetArgument(t, 0);
      if(match_cons(d_22, sym__2))
        {
          x_18 = ATgetArgument(d_22, 0);
          y_18 = ATgetArgument(d_22, 1);
        }
      else
        _fail(t);
      {
        ATerm e_22 = ATgetArgument(t, 1);
        if(match_cons(e_22, sym__2))
          {
            z_18 = ATgetArgument(e_22, 0);
            a_19 = ATgetArgument(e_22, 1);
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
ATerm f_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_f_21;
  return(t);
}
ATerm h_4 (ATerm t)
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
ATerm l_4 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_22 = ATgetArgument(t, 0);
      if(match_cons(f_22, sym__2))
        {
          d_19 = ATgetArgument(f_22, 0);
          e_19 = ATgetArgument(f_22, 1);
        }
      else
        _fail(t);
      {
        ATerm g_22 = ATgetArgument(t, 1);
        if(match_cons(g_22, sym__2))
          {
            f_19 = ATgetArgument(g_22, 0);
            g_19 = ATgetArgument(g_22, 1);
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
ATerm q_4 (ATerm t)
{
  ATerm h_22 = t;
  if((PushChoice() == 0))
    {
      ATerm f_20 = NULL,j_20 = NULL,k_20 = NULL,h_3 = NULL;
      k_20 = t;
      if(match_cons(t, sym_Var_1))
        {
          j_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_20);
      f_20 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, j_20);
      h_3 = t;
      t = SSLsetAnnotations(h_3, f_20);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_22;
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_f_21;
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_20 = ATgetFirst((ATermList) t);
      n_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_20, n_20);
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_22 = ATgetArgument(t, 0);
      if(match_cons(i_22, sym__2))
        {
          o_20 = ATgetArgument(i_22, 0);
          p_20 = ATgetArgument(i_22, 1);
        }
      else
        _fail(t);
      {
        ATerm j_22 = ATgetArgument(t, 1);
        if(match_cons(j_22, sym__2))
          {
            q_20 = ATgetArgument(j_22, 0);
            r_20 = ATgetArgument(j_22, 1);
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
  t = term_f_21;
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm t_20 = NULL,y_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_20 = ATgetFirst((ATermList) t);
      y_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_20, y_20);
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm z_20 = NULL,c_21 = NULL,g_21 = NULL,i_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_22 = ATgetArgument(t, 0);
      if(match_cons(l_22, sym__2))
        {
          z_20 = ATgetArgument(l_22, 0);
          c_21 = ATgetArgument(l_22, 1);
        }
      else
        _fail(t);
      {
        ATerm n_22 = ATgetArgument(t, 1);
        if(match_cons(n_22, sym__2))
          {
            g_21 = ATgetArgument(n_22, 0);
            i_21 = ATgetArgument(n_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_21), z_20), (ATerm) ATinsert(CheckATermList(i_21), c_21));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm e_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL;
  h_49 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      i_49 = ATgetArgument(t, 0);
      j_49 = ATgetArgument(t, 1);
      e_49 = ATgetArgument(t, 2);
      {
        ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,p_18 = NULL,q_18 = NULL,g_3 = NULL;
        t = e_49;
        t = fetch_1_0(a_4, t);
        t = e_49;
        t = genzip_4_0(b_4, c_4, d_4, LiftPrimArg_0_0, t);
        q_18 = t;
        if(match_cons(t, sym__2))
          {
            i_18 = ATgetArgument(t, 0);
            j_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_18);
        h_18 = t;
        t = i_18;
        t = concat_0_0(t);
        k_18 = t;
        t = j_18;
        t = genzip_4_0(f_4, h_4, l_4, _id, t);
        p_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_18, p_18);
        g_3 = t;
        t = SSLsetAnnotations(g_3, h_18);
        if(match_cons(t, sym__2))
          {
            w_17 = ATgetArgument(t, 0);
            {
              ATerm o_22 = ATgetArgument(t, 1);
              if(match_cons(o_22, sym__2))
                {
                  x_17 = ATgetArgument(o_22, 0);
                  y_17 = ATgetArgument(o_22, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, w_17, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_17), (ATerm) ATmakeAppl(sym_PrimT_3, i_49, j_49, y_17)));
      }
    }
  else
    {
      ATerm s_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL,i_3 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          i_49 = ATgetArgument(t, 0);
          j_49 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = j_49;
      t = fetch_1_0(q_4, t);
      t = j_49;
      t = genzip_4_0(s_4, t_4, v_4, LiftPrimArg_0_0, t);
      e_20 = t;
      if(match_cons(t, sym__2))
        {
          a_20 = ATgetArgument(t, 0);
          b_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_20);
      x_19 = t;
      t = a_20;
      t = concat_0_0(t);
      c_20 = t;
      t = b_20;
      t = genzip_4_0(w_4, x_4, y_4, _id, t);
      d_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_20, d_20);
      i_3 = t;
      t = SSLsetAnnotations(i_3, x_19);
      if(match_cons(t, sym__2))
        {
          s_19 = ATgetArgument(t, 0);
          {
            ATerm p_22 = ATgetArgument(t, 1);
            if(match_cons(p_22, sym__2))
              {
                v_19 = ATgetArgument(p_22, 0);
                w_19 = ATgetArgument(p_22, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, s_19, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, v_19), (ATerm) ATmakeAppl(sym_PrimT_3, i_49, (ATerm)ATempty, w_19)));
    }
  return(t);
}
ATerm repeat_1_0 (ATerm e_101 (ATerm), ATerm t)
{
  ATerm p_49 (ATerm t)
  {
    ATerm q_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_101(t);
        t = p_49(t);
        ;
        LocalPopChoice(s_22);
      }
    else
      {
        t = q_22;
      }
    return(t);
  }
  t = p_49(t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL;
  i_50 = t;
  if(match_cons(t, sym_Con_3))
    {
      f_50 = ATgetArgument(t, 0);
      g_50 = ATgetArgument(t, 1);
      h_50 = ATgetArgument(t, 2);
      {
        ATerm c_22 = NULL,p_3 = NULL;
        t = SSLgetAnnotations(i_50);
        c_22 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, f_50, g_50, h_50);
        p_3 = t;
        t = SSLsetAnnotations(p_3, c_22);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = i_50;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm v_22 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(z_4, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_22;
    }
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm e_51 = NULL,f_51 = NULL,k_51 = NULL,l_51 = NULL;
  f_51 = t;
  if(match_cons(t, sym_Con_3))
    {
      k_51 = ATgetArgument(t, 0);
      l_51 = ATgetArgument(t, 1);
      e_51 = ATgetArgument(t, 2);
      {
        ATerm r_22 = NULL,s_3 = NULL;
        t = SSLgetAnnotations(f_51);
        r_22 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, k_51, l_51, e_51);
        s_3 = t;
        t = SSLsetAnnotations(s_3, r_22);
      }
    }
  else
    {
      ATerm o_23 = NULL,t_3 = NULL;
      if(match_cons(t, sym_App_2))
        {
          k_51 = ATgetArgument(t, 0);
          l_51 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_51);
      o_23 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, k_51, l_51);
      t_3 = t;
      t = SSLsetAnnotations(t_3, o_23);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm a_23 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(a_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_23;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm r_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      r_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_51;
  if(match_cons(t, sym_StratRule_3))
    {
      u_51 = ATgetArgument(t, 0);
      v_51 = ATgetArgument(t, 1);
      w_51 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_51), (ATerm) ATmakeAppl(sym_Where_1, w_51)), u_51));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          u_51 = ATgetArgument(t, 0);
          v_51 = ATgetArgument(t, 1);
          w_51 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = u_51;
      t = pureterm_0_0(t);
      t = v_51;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, v_51)), (ATerm) ATmakeAppl(sym_Where_1, w_51)), (ATerm) ATmakeAppl(sym_Match_1, u_51)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm k_89 (ATerm), ATerm t)
{
  ATerm d_52 (ATerm t)
  {
    ATerm b_23 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_89(t);
        ;
        LocalPopChoice(c_23);
      }
    else
      {
        t = b_23;
        t = SRTS_one(d_52, t);
      }
    return(t);
  }
  t = d_52(t);
  return(t);
}
ATerm j_8 (ATerm z_23, ATerm a_24, ATerm b_24, ATerm t)
{
  ATerm e_52 = NULL,f_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL,l_52 = NULL,s_52 = NULL;
  t = new_0_0(t);
  k_52 = t;
  t = z_23;
  {
    ATerm b_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm d_23 = ATgetArgument(t, 0);
          if(match_cons(d_23, sym_Var_1))
            {
              if(((j_52 != NULL) && (j_52 != ATgetArgument(d_23, 0))))
                _fail(ATgetArgument(d_23, 0));
              else
                j_52 = ATgetArgument(d_23, 0);
            }
          else
            _fail(t);
          if(((f_52 != NULL) && (f_52 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            f_52 = ATgetArgument(t, 1);
          {
            ATerm f_23 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, j_52);
      return(t);
    }
    t = oncetd_1_0(b_5, t);
    l_52 = t;
    t = a_24;
    {
      ATerm c_5 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm g_23 = ATgetArgument(t, 0);
            if(match_cons(g_23, sym_Var_1))
              {
                if(((j_52 != NULL) && (j_52 != ATgetArgument(g_23, 0))))
                  _fail(ATgetArgument(g_23, 0));
                else
                  j_52 = ATgetArgument(g_23, 0);
              }
            else
              _fail(t);
            if(((i_52 != NULL) && (i_52 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              i_52 = ATgetArgument(t, 1);
            {
              ATerm i_23 = ATgetArgument(t, 2);
              if(match_cons(i_23, sym_CallT_3))
                {
                  if(((e_52 != NULL) && (e_52 != ATgetArgument(i_23, 0))))
                    _fail(ATgetArgument(i_23, 0));
                  else
                    e_52 = ATgetArgument(i_23, 0);
                  {
                    ATerm j_23 = ATgetArgument(i_23, 1);
                    if(((ATgetType(j_23) != AT_LIST) || !(ATisEmpty(j_23))))
                      _fail(t);
                  }
                  {
                    ATerm k_23 = ATgetArgument(i_23, 2);
                    if(((ATgetType(k_23) != AT_LIST) || !(ATisEmpty(k_23))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, k_52);
        return(t);
      }
      t = oncetd_1_0(c_5, t);
      s_52 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_52), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, l_52, s_52, (ATerm) ATmakeAppl(sym_Seq_2, b_24, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(e_52), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(f_52), not_null(i_52), term_u_19))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_52)), (ATerm) ATmakeAppl(sym_Var_1, k_52))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm l_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_23 = t;
      int q_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL;
          r_53 = t;
          if(match_cons(t, sym_SRule_1))
            {
              s_53 = ATgetArgument(t, 0);
              t = s_53;
              if(match_cons(t, sym_Rule_3))
                {
                  o_53 = ATgetArgument(t, 0);
                  p_53 = ATgetArgument(t, 1);
                  q_53 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = r_53;
              t = j_8(o_53, p_53, q_53, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm g_24 = NULL,j_24 = NULL,w_3 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  s_53 = ATgetArgument(t, 0);
                  t_53 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(r_53);
              g_24 = t;
              t = t_53;
              t = desugarRule_0_0(t);
              j_24 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, s_53, j_24);
              w_3 = t;
              t = SSLsetAnnotations(w_3, g_24);
            }
          ;
          LocalPopChoice(q_23);
        }
      else
        {
          t = p_23;
          t = RtoS_0_0(t);
        }
      ;
      LocalPopChoice(m_23);
    }
  else
    {
      t = l_23;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm g_88 (ATerm), ATerm t)
{
  ATerm f_5 (ATerm t)
  {
    t = topdown_1_0(g_88, t);
    return(t);
  }
  t = g_88(t);
  t = SRTS_all(f_5, t);
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(u_23);
    }
  else
    {
      t = t_23;
    }
  t = repeat_1_0(i_5, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm w_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
      LocalPopChoice(x_23);
    }
  else
    {
      t = w_23;
      {
        ATerm c_24 = t;
        int d_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_54 = NULL,i_54 = NULL,j_54 = NULL,k_54 = NULL;
            h_54 = t;
            if(match_cons(t, sym_CallT_3))
              {
                i_54 = ATgetArgument(t, 0);
                j_54 = ATgetArgument(t, 1);
                k_54 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = h_54;
            t = g_8(i_54, j_54, k_54, t);
            ;
            LocalPopChoice(d_24);
          }
        else
          {
            t = c_24;
            {
              ATerm e_24 = t;
              int f_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(f_24);
                }
              else
                {
                  t = e_24;
                  {
                    ATerm h_24 = t;
                    int i_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(i_24);
                      }
                    else
                      {
                        t = h_24;
                        {
                          ATerm k_24 = t;
                          int l_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm m_24 = t;
                              int n_24 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      p_54 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = p_54;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      q_54 = ATgetArgument(t, 0);
                                      {
                                        ATerm r_24 = t;
                                        int s_24 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm t_54 = NULL,u_54 = NULL;
                                            t = p_54;
                                            {
                                              ATerm j_5 (ATerm t)
                                              {
                                                if(match_cons(t, sym_RootApp_1))
                                                  {
                                                    ATerm t_24 = ATgetArgument(t, 0);
                                                    if(match_cons(t_24, sym_Match_1))
                                                      {
                                                        if(((t_54 != NULL) && (t_54 != ATgetArgument(t_24, 0))))
                                                          _fail(ATgetArgument(t_24, 0));
                                                        else
                                                          t_54 = ATgetArgument(t_24, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = t_54;
                                                return(t);
                                              }
                                              t = pat_td_1_0(j_5, t);
                                              u_54 = t;
                                              t = (ATerm) ATmakeAppl(sym_Match_1, u_54);
                                            }
                                            ;
                                            LocalPopChoice(s_24);
                                          }
                                        else
                                          {
                                            t = r_24;
                                            t = q_54;
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          q_54 = ATgetArgument(t, 0);
                                          r_54 = ATgetArgument(t, 1);
                                          {
                                            ATerm v_24 = t;
                                            int w_24 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm x_54 = NULL,y_54 = NULL;
                                                t = p_54;
                                                {
                                                  ATerm l_5 (ATerm t)
                                                  {
                                                    if(match_cons(t, sym_RootApp_1))
                                                      {
                                                        ATerm y_24 = ATgetArgument(t, 0);
                                                        if(match_cons(y_24, sym_Match_1))
                                                          {
                                                            if(((x_54 != NULL) && (x_54 != ATgetArgument(y_24, 0))))
                                                              _fail(ATgetArgument(y_24, 0));
                                                            else
                                                              x_54 = ATgetArgument(y_24, 0);
                                                          }
                                                        else
                                                          _fail(t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = x_54;
                                                    return(t);
                                                  }
                                                  t = pat_td_1_0(l_5, t);
                                                  y_54 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, y_54);
                                                }
                                                ;
                                                LocalPopChoice(w_24);
                                              }
                                            else
                                              {
                                                t = v_24;
                                                t = (ATerm) ATmakeAppl(sym_BA_2, q_54, r_54);
                                              }
                                          }
                                        }
                                      else
                                        {
                                          ATerm c_55 = NULL,d_55 = NULL;
                                          t = p_54;
                                          {
                                            ATerm m_5 (ATerm t)
                                            {
                                              if(match_cons(t, sym_RootApp_1))
                                                {
                                                  ATerm z_24 = ATgetArgument(t, 0);
                                                  if(match_cons(z_24, sym_Match_1))
                                                    {
                                                      if(((c_55 != NULL) && (c_55 != ATgetArgument(z_24, 0))))
                                                        _fail(ATgetArgument(z_24, 0));
                                                      else
                                                        c_55 = ATgetArgument(z_24, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                _fail(t);
                                              t = c_55;
                                              return(t);
                                            }
                                            t = pat_td_1_0(m_5, t);
                                            d_55 = t;
                                            t = (ATerm) ATmakeAppl(sym_Match_1, d_55);
                                          }
                                        }
                                    }
                                  ;
                                  LocalPopChoice(n_24);
                                }
                              else
                                {
                                  t = m_24;
                                  t = Mapp2_0_0(t);
                                }
                              ;
                              LocalPopChoice(l_24);
                            }
                          else
                            {
                              t = k_24;
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
ATerm n_5 (ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL;
  t_55 = t;
  t = SSL_explode_term(t_55);
  if(match_cons(t, sym__2))
    {
      ATerm b_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_25 = ATgetArgument(t, 1);
        if(((ATgetType(c_25) == AT_LIST) && !(ATisEmpty(c_25))))
          {
            s_55 = ATgetFirst((ATermList) c_25);
            {
              ATerm d_25 = (ATerm) ATgetNext((ATermList) c_25);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_55;
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL;
  q_24 = t;
  t = SSL_explode_term(q_24);
  if(match_cons(t, sym__2))
    {
      ATerm e_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_25 = ATgetArgument(t, 1);
        if(((ATgetType(f_25) == AT_LIST) && !(ATisEmpty(f_25))))
          {
            ATerm g_25 = ATgetFirst((ATermList) f_25);
            o_24 = (ATerm) ATgetNext((ATermList) f_25);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_j_17;
  p_24 = t;
  t = SSL_mkterm(p_24, o_24);
  return(t);
}
ATerm p_5 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm i_92 (ATerm), ATerm t)
{
  ATerm h_55 = NULL,i_55 = NULL;
  ATerm u_55 (ATerm t)
  {
    ATerm h_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_55 = NULL,k_55 = NULL,l_55 = NULL;
        j_55 = t;
        t = map_1_0(n_5, t);
        t = i_92(t);
        k_55 = t;
        t = j_55;
        t = map_1_0(o_5, t);
        t = u_55(t);
        l_55 = t;
        t = (ATerm) ATinsert(CheckATermList(l_55), k_55);
        ;
        LocalPopChoice(j_25);
      }
    else
      {
        t = h_25;
        t = map_1_0(p_5, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = u_55(t);
  i_55 = t;
  t = term_j_17;
  h_55 = t;
  t = SSL_mkterm(h_55, i_55);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm v_55 = NULL;
  v_55 = t;
  {
    ATerm k_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_56 = NULL,c_56 = NULL,d_56 = NULL;
        t = v_55;
        t = new_0_0(t);
        b_56 = t;
        t = new_0_0(t);
        c_56 = t;
        t = new_0_0(t);
        d_56 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_56), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_j_17, (ATerm) ATinsert(ATinsert(ATempty, v_55), (ATerm) ATmakeAppl(sym_Var_1, c_56))), (ATerm) ATmakeAppl(sym_Var_1, d_56)), (ATerm)ATmakeAppl(sym_VarDec_2, b_56, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_19), term_p_19)), c_56, (ATerm)ATmakeAppl(sym_Var_1, c_56), d_56, (ATerm) ATmakeAppl(sym_Var_1, d_56));
        ;
        LocalPopChoice(m_25);
      }
    else
      {
        t = k_25;
        {
          ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL;
          t = v_55;
          t = new_0_0(t);
          f_56 = t;
          t = new_0_0(t);
          g_56 = t;
          t = new_0_0(t);
          h_56 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_56), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_j_17, (ATerm) ATinsert(ATinsert(ATempty, v_55), (ATerm) ATmakeAppl(sym_Var_1, g_56))), (ATerm) ATmakeAppl(sym_Var_1, h_56)), (ATerm)ATmakeAppl(sym_VarDec_2, f_56, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_19), term_p_19)), g_56, (ATerm)ATmakeAppl(sym_Var_1, g_56), h_56, (ATerm) ATmakeAppl(sym_Var_1, h_56));
        }
      }
  }
  return(t);
}
ATerm k_8 (ATerm d_50, ATerm e_50, ATerm t)
{
  ATerm n_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(d_50, e_50);
      ;
      LocalPopChoice(o_25);
    }
  else
    {
      t = n_25;
      t = SSL_subtr(d_50, e_50);
    }
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm i_56 = NULL,j_56 = NULL;
  if(match_cons(t, sym__2))
    {
      i_56 = ATgetArgument(t, 0);
      j_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, i_56, j_56, (ATerm) ATempty);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm q_56 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm p_25 = ATgetArgument(t, 0);
      if(((ATgetType(p_25) != AT_INT) || (ATgetInt((ATermInt) p_25) != 0)))
        _fail(t);
      {
        ATerm q_25 = ATgetArgument(t, 1);
      }
      q_56 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_56;
  return(t);
}
ATerm copy_1_0 (ATerm f_105 (ATerm), ATerm t)
{
  ATerm v_5 (ATerm t)
  {
    ATerm r_56 = NULL,u_56 = NULL,v_56 = NULL,b_57 = NULL,c_57 = NULL,d_57 = NULL;
    if(match_cons(t, sym__3))
      {
        r_56 = ATgetArgument(t, 0);
        u_56 = ATgetArgument(t, 1);
        v_56 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, r_56, term_b_14);
    t = geq_0_0(t);
    t = term_b_14;
    d_57 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_56, term_b_14);
    t = k_8(r_56, d_57, t);
    b_57 = t;
    t = u_56;
    t = f_105(t);
    c_57 = t;
    t = (ATerm) ATmakeAppl(sym__3, b_57, u_56, (ATerm) ATinsert(CheckATermList(v_56), c_57));
    return(t);
  }
  t = for_3_0(q_5, s_5, v_5, t);
  return(t);
}
ATerm l_8 (ATerm g_20, ATerm h_20, ATerm t)
{
  ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL;
  t = new_0_0(t);
  e_57 = t;
  t = new_0_0(t);
  f_57 = t;
  t = new_0_0(t);
  g_57 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_57), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_j_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_20)), (ATerm) ATmakeAppl(sym_Var_1, f_57))), (ATerm) ATmakeAppl(sym_Op_2, term_j_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, h_20)), (ATerm) ATmakeAppl(sym_Var_1, g_57)))), (ATerm)ATmakeAppl(sym_VarDec_2, e_57, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_19), term_p_19)), f_57, (ATerm)ATmakeAppl(sym_Var_1, f_57), g_57, (ATerm) ATmakeAppl(sym_Var_1, g_57));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm k_57 = NULL,m_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_57 = ATgetFirst((ATermList) t);
      m_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_57;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_57;
    }
  else
    {
      t = m_57;
      t = last_0_0(t);
    }
  return(t);
}
ATerm r_61 (ATerm p_58, ATerm q_58, ATerm r_58, ATerm s_58, ATerm t)
{
  ATerm y_58 = NULL,z_58 = NULL,a_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,h_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL;
  t = term_b_14;
  n_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_58, term_b_14);
  t = l_9(q_58, n_59, t);
  m_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_59, term_r_25);
  t = copy_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_58 = ATgetFirst((ATermList) t);
      a_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_59;
  t = last_0_0(t);
  y_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_59), z_58), a_59);
  t = genzip_4_0(w_5, y_5, c_6, d_6, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      c_59 = ATgetArgument(t, 0);
      d_59 = ATgetArgument(t, 1);
      e_59 = ATgetArgument(t, 2);
      f_59 = ATgetArgument(t, 3);
      h_59 = ATgetArgument(t, 4);
      k_59 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, h_59), e_59), a_59);
  t = concat_0_0(t);
  l_59 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, p_58, term_s_25), d_59, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(l_59), z_58), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_j_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, z_58)), (ATerm) ATmakeAppl(sym_Op_2, p_58, f_59))), (ATerm)ATmakeAppl(sym_Op_2, term_j_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_58)), (ATerm) ATmakeAppl(sym_Op_2, p_58, k_59))), (ATerm) ATmakeAppl(sym_Seqs_1, c_59)))));
  return(t);
}
ATerm s_61 (ATerm g_60, ATerm h_60, ATerm j_60, ATerm k_60, ATerm t)
{
  ATerm u_60 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL;
  t = k_60;
  t = new_0_0(t);
  u_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_60, (ATerm) ATmakeAppl(sym_Var_1, u_60));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      v_60 = ATgetArgument(t, 0);
      w_60 = ATgetArgument(t, 1);
      x_60 = ATgetArgument(t, 2);
      y_60 = ATgetArgument(t, 3);
      z_60 = ATgetArgument(t, 4);
      a_61 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_60, z_60);
  t = conc_0_0(t);
  b_61 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, g_60, term_t_25), w_60, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(b_61), u_60), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_j_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, u_60)), (ATerm) ATmakeAppl(sym_Op_2, g_60, y_60))), (ATerm)ATmakeAppl(sym_Op_2, g_60, a_61), (ATerm) ATmakeAppl(sym_Seqs_1, v_60)))));
  return(t);
}
ATerm w_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_25 = ATgetArgument(t, 0);
      ATerm w_25 = ATgetArgument(t, 1);
      if(((ATgetType(w_25) != AT_LIST) || !(ATisEmpty(w_25))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm o_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_25 = ATgetArgument(t, 0);
      if(((ATgetType(x_25) == AT_LIST) && !(ATisEmpty(x_25))))
        {
          o_59 = ATgetFirst((ATermList) x_25);
          q_59 = (ATerm) ATgetNext((ATermList) x_25);
        }
      else
        _fail(t);
      {
        ATerm y_25 = ATgetArgument(t, 1);
        if(((ATgetType(y_25) == AT_LIST) && !(ATisEmpty(y_25))))
          {
            r_59 = ATgetFirst((ATermList) y_25);
            s_59 = (ATerm) ATgetNext((ATermList) y_25);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_59, r_59), (ATerm) ATmakeAppl(sym__2, q_59, s_59));
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm t_59 = NULL,u_59 = NULL;
  if(match_cons(t, sym__2))
    {
      t_59 = ATgetArgument(t, 0);
      u_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_59), t_59);
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm y_59 = NULL,b_60 = NULL;
  if(match_cons(t, sym__2))
    {
      y_59 = ATgetArgument(t, 0);
      b_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_8(y_59, b_60, t);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL,j_61 = NULL,o_61 = NULL;
  d_61 = t;
  if(match_cons(t, sym__3))
    {
      e_61 = ATgetArgument(t, 0);
      f_61 = ATgetArgument(t, 1);
      g_61 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = f_61;
  if(match_string(t, "T"))
    {
      t = g_61;
      if(match_cons(t, sym__2))
        {
          j_61 = ATgetArgument(t, 0);
          o_61 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = j_61;
      if(match_int(t, 0))
        {
          ATerm z_25 = t;
          int a_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_61(e_61, j_61, o_61, d_61, t);
              ;
              LocalPopChoice(a_26);
            }
          else
            {
              t = z_25;
              {
                ATerm q_61 = NULL;
                t = d_61;
                t = new_0_0(t);
                q_61 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, e_61, term_s_25), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_61), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_j_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, q_61)), (ATerm) ATmakeAppl(sym_Op_2, e_61, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_j_17, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, q_61)), (ATerm) ATmakeAppl(sym_Op_2, e_61, (ATerm) ATempty))), term_u_19))));
              }
            }
        }
      else
        {
          t = r_61(e_61, j_61, o_61, d_61, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = g_61;
      if(match_cons(t, sym__2))
        {
          j_61 = ATgetArgument(t, 0);
          o_61 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_61(e_61, j_61, o_61, d_61, t);
    }
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = term_t_19;
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL,w_9 = NULL;
  e_12 = t;
  t = SSL_explode_term(e_12);
  if(match_cons(t, sym__2))
    {
      ATerm d_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_26 = ATgetArgument(t, 1);
        if(((ATgetType(e_26) == AT_LIST) && !(ATisEmpty(e_26))))
          {
            f_12 = ATgetFirst((ATermList) e_26);
            {
              ATerm f_26 = (ATerm) ATgetNext((ATermList) e_26);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(e_12);
  if(match_cons(t, sym__2))
    {
      ATerm g_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_26 = ATgetArgument(t, 1);
        if(((ATgetType(h_26) == AT_LIST) && !(ATisEmpty(h_26))))
          {
            ATerm j_26 = ATgetFirst((ATermList) h_26);
            ATerm k_26 = (ATerm) ATgetNext((ATermList) h_26);
            if(((ATgetType(k_26) == AT_LIST) && !(ATisEmpty(k_26))))
              {
                w_9 = ATgetFirst((ATermList) k_26);
                {
                  ATerm m_26 = (ATerm) ATgetNext((ATermList) k_26);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, f_12, w_9);
  return(t);
}
ATerm choices_0_0 (ATerm t)
{
  t = foldr_2_0(f_6, i_6, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm s_12 = NULL,u_12 = NULL,v_12 = NULL,z_12 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL;
  v_12 = t;
  if(match_cons(t, sym__2))
    {
      z_12 = ATgetArgument(t, 0);
      c_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_13;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_13 = ATgetFirst((ATermList) t);
      e_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = d_13;
  if(match_cons(t, sym__2))
    {
      s_12 = ATgetArgument(t, 0);
      u_12 = ATgetArgument(t, 1);
      {
        ATerm n_26 = t;
        int t_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_12;
            if((z_12 != t))
              {
                _fail(t);
              }
            t = u_12;
            ;
            LocalPopChoice(t_26);
          }
        else
          {
            t = n_26;
            t = (ATerm) ATmakeAppl(sym__2, z_12, e_13);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, z_12, e_13);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm y_89 (ATerm), ATerm t)
{
  ATerm v_13 (ATerm t)
  {
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_89(t);
        ;
        LocalPopChoice(v_26);
      }
    else
      {
        t = u_26;
        t = SRTS_all(v_13, t);
      }
    return(t);
  }
  t = v_13(t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_26 = ATgetArgument(t, 0);
      if(((ATgetType(w_26) != AT_LIST) || !(ATisEmpty(w_26))))
        _fail(t);
      {
        ATerm x_26 = ATgetArgument(t, 1);
        if(((ATgetType(x_26) != AT_LIST) || !(ATisEmpty(x_26))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL,t_14 = NULL,u_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_26 = ATgetArgument(t, 0);
      if(((ATgetType(z_26) == AT_LIST) && !(ATisEmpty(z_26))))
        {
          o_14 = ATgetFirst((ATermList) z_26);
          p_14 = (ATerm) ATgetNext((ATermList) z_26);
        }
      else
        _fail(t);
      {
        ATerm a_27 = ATgetArgument(t, 1);
        if(((ATgetType(a_27) == AT_LIST) && !(ATisEmpty(a_27))))
          {
            t_14 = ATgetFirst((ATermList) a_27);
            u_14 = (ATerm) ATgetNext((ATermList) a_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_14, t_14), (ATerm) ATmakeAppl(sym__2, p_14, u_14));
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm v_14 = NULL,w_14 = NULL;
  if(match_cons(t, sym__2))
    {
      v_14 = ATgetArgument(t, 0);
      w_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_14), v_14);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm a_14 = NULL,c_14 = NULL,g_14 = NULL,h_14 = NULL;
  a_14 = t;
  {
    ATerm b_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_27 = ATgetArgument(t, 0);
            ATerm e_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(c_27);
        t = a_14;
      }
    else
      {
        t = b_27;
        {
          ATerm n_14 = NULL;
          if(match_cons(t, sym__3))
            {
              c_14 = ATgetArgument(t, 0);
              g_14 = ATgetArgument(t, 1);
              h_14 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, c_14, g_14);
          t = genzip_4_0(j_6, l_6, m_6, _id, t);
          n_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_14, h_14);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm p_87 (ATerm), ATerm q_87 (ATerm), ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL;
  ATerm n_6 (ATerm t)
  {
    ATerm a_10 = NULL;
    t = p_87(t);
    a_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_10, not_null(z_14));
    t = lookup_0_0(t);
    t = q_87(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((z_14 != NULL) && (z_14 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_14 = ATgetArgument(t, 0);
      y_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_14;
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
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,y_3 = NULL;
  s_16 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      p_16 = ATgetArgument(t, 0);
      q_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_16);
  o_16 = t;
  t = p_16;
  t = new_0_0(t);
  r_16 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, r_16, q_16);
  y_3 = t;
  t = SSLsetAnnotations(y_3, o_16);
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm v_16 = NULL,x_16 = NULL,y_16 = NULL,a_17 = NULL,d_17 = NULL,z_3 = NULL;
  d_17 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      x_16 = ATgetArgument(t, 0);
      y_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_17);
  v_16 = t;
  t = x_16;
  t = new_0_0(t);
  a_17 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, a_17, y_16);
  z_3 = t;
  t = SSLsetAnnotations(z_3, v_16);
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm g_17 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      g_17 = ATgetArgument(t, 0);
      {
        ATerm f_27 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_17), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm m_17 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      m_17 = ATgetArgument(t, 0);
      {
        ATerm g_27 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, m_17);
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm f_18 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      f_18 = ATgetArgument(t, 0);
      {
        ATerm h_27 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = f_18;
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm g_18 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      g_18 = ATgetArgument(t, 0);
      {
        ATerm i_27 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = g_18;
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm l_18 = NULL,n_18 = NULL,o_18 = NULL,t_18 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      n_18 = ATgetArgument(t, 0);
      t_18 = ATgetArgument(t, 1);
      l_18 = ATgetArgument(t, 2);
      t = n_18;
      if(match_cons(t, sym_SVar_1))
        {
          o_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_18;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_18;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_18;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          n_18 = ATgetArgument(t, 0);
          t_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = n_18;
      if(match_cons(t, sym_SVar_1))
        {
          o_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_18;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_18;
    }
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm y_19 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_19;
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm n_15 = NULL,p_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,c_16 = NULL,e_16 = NULL,m_16 = NULL;
  z_15 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_27 = ATgetFirst((ATermList) t);
      if(match_cons(j_27, sym_SDefT_4))
        {
          n_15 = ATgetArgument(j_27, 0);
          p_15 = ATgetArgument(j_27, 1);
          w_15 = ATgetArgument(j_27, 2);
          {
            ATerm l_27 = ATgetArgument(j_27, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm k_27 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = p_15;
  t = map_1_0(o_6, t);
  x_15 = t;
  t = w_15;
  t = map_1_0(q_6, t);
  y_15 = t;
  t = x_15;
  t = map_1_0(s_6, t);
  e_16 = t;
  t = y_15;
  t = map_1_0(t_6, t);
  c_16 = t;
  t = z_15;
  {
    ATerm u_6 (ATerm t)
    {
      ATerm n_17 = NULL,z_17 = NULL,a_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm n_27 = ATgetArgument(t, 0);
          n_17 = ATgetArgument(t, 1);
          z_17 = ATgetArgument(t, 2);
          a_18 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = z_17;
      t = map_1_0(y_6, t);
      c_18 = t;
      t = n_17;
      t = map_1_0(a_7, t);
      e_18 = t;
      t = (ATerm) ATmakeAppl(sym__3, e_18, e_16, a_18);
      t = substitute_2_0(b_7, _id, t);
      d_18 = t;
      t = (ATerm) ATmakeAppl(sym__3, c_18, c_16, d_18);
      t = substitute_2_0(e_7, _id, t);
      return(t);
    }
    t = map_1_0(u_6, t);
    t = choices_0_0(t);
    m_16 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, n_15, x_15, y_15, m_16);
  }
  return(t);
}
ATerm h_64 (ATerm z_61, ATerm a_62, ATerm b_62, ATerm c_62, ATerm t)
{
  ATerm n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL,e_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_61, a_62);
  t = Definitions_0_0(t);
  n_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_62, b_62);
  q_62 = t;
  if(match_cons(t, sym__2))
    {
      ATerm o_27 = ATgetArgument(t, 0);
      ATerm q_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_62);
  o_62 = t;
  t = n_62;
  {
    ATerm r_27 = t;
    int s_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_62 = NULL,t_62 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_62 = ATgetFirst((ATermList) t);
            t_62 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_62;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_62;
        ;
        LocalPopChoice(s_27);
      }
    else
      {
        t = r_27;
        t = JoinDefs2_0_0(t);
      }
    p_62 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_62, b_62);
    e_4 = t;
    t = SSLsetAnnotations(e_4, o_62);
  }
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm e_63 = NULL,h_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL,q_63 = NULL,r_63 = NULL;
  k_63 = t;
  if(match_cons(t, sym__2))
    {
      l_63 = ATgetArgument(t, 0);
      r_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_63;
  if(match_cons(t, sym__2))
    {
      m_63 = ATgetArgument(t, 0);
      q_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_63;
  if(match_cons(t, sym_Mod_2))
    {
      e_63 = ATgetArgument(t, 0);
      h_63 = ATgetArgument(t, 1);
      {
        ATerm t_27 = t;
        int u_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_64 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, e_63, h_63, q_63);
            t = DefineCongruence_0_0(t);
            t = desugar_0_0(t);
            d_64 = t;
            t = (ATerm) ATmakeAppl(sym__2, d_64, r_63);
            ;
            LocalPopChoice(u_27);
          }
        else
          {
            t = t_27;
            t = h_64(m_63, q_63, r_63, k_63, t);
          }
      }
    }
  else
    {
      t = h_64(m_63, q_63, r_63, k_63, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm x_94 (ATerm), ATerm t)
{
  ATerm l_65 (ATerm t)
  {
    ATerm h_65 = NULL,i_65 = NULL,k_65 = NULL;
    k_65 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_65 = ATgetFirst((ATermList) t);
        i_65 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm x_24 = NULL,a_25 = NULL,g_4 = NULL;
          t = SSLgetAnnotations(k_65);
          x_24 = t;
          t = i_65;
          t = l_65(t);
          a_25 = t;
          t = (ATerm) ATinsert(CheckATermList(a_25), h_65);
          g_4 = t;
          t = SSLsetAnnotations(g_4, x_24);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_65;
        t = x_94(t);
      }
    return(t);
  }
  t = l_65(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_64 = NULL,k_64 = NULL,l_64 = NULL;
  j_64 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_64;
    }
  else
    {
      ATerm f_7 (ATerm t)
      {
        t = not_null(l_64);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_64 = ATgetFirst((ATermList) t);
          if(((l_64 != NULL) && (l_64 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            l_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_64;
      t = at_end_1_0(f_7, t);
    }
  return(t);
}
ATerm i_66 (ATerm r_65, ATerm t)
{
  ATerm s_65 = NULL;
  t = SSL_explode_term(r_65);
  if(match_cons(t, sym__2))
    {
      ATerm v_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      s_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_65;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_65 = NULL,a_66 = NULL,f_66 = NULL;
  f_66 = t;
  if(match_cons(t, sym__2))
    {
      v_65 = ATgetArgument(t, 0);
      a_66 = ATgetArgument(t, 1);
      {
        ATerm w_27 = t;
        int y_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_7 (ATerm t)
            {
              t = a_66;
              return(t);
            }
            t = v_65;
            t = at_end_1_0(g_7, t);
            ;
            LocalPopChoice(y_27);
          }
        else
          {
            t = w_27;
            t = i_66(f_66, t);
          }
      }
    }
  else
    {
      t = i_66(f_66, t);
    }
  return(t);
}
ATerm q_8 (ATerm c_102 (ATerm), ATerm r_46, ATerm q_46, ATerm t)
{
  ATerm k_67 (ATerm t)
  {
    ATerm f_67 = NULL,g_67 = NULL,h_67 = NULL;
    f_67 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_67;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_67 = ATgetFirst((ATermList) t);
            h_67 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm z_27 = t;
          int b_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_67;
              {
                ATerm h_7 (ATerm t)
                {
                  t = q_46;
                  return(t);
                }
                t = d_9(c_102, h_7, g_67, h_67, t);
                t = k_67(t);
              }
              ;
              LocalPopChoice(b_28);
            }
          else
            {
              t = z_27;
              {
                ATerm i_25 = NULL,l_25 = NULL,i_4 = NULL;
                t = SSLgetAnnotations(f_67);
                i_25 = t;
                t = h_67;
                t = k_67(t);
                l_25 = t;
                t = (ATerm) ATinsert(CheckATermList(l_25), g_67);
                i_4 = t;
                t = SSLsetAnnotations(i_4, i_25);
              }
            }
        }
      }
    return(t);
  }
  t = r_46;
  t = k_67(t);
  return(t);
}
ATerm genzip_4_0 (ATerm s_92 (ATerm), ATerm t_92 (ATerm), ATerm u_92 (ATerm), ATerm v_92 (ATerm), ATerm t)
{
  ATerm c_68 (ATerm t)
  {
    ATerm c_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_92(t);
        ;
        LocalPopChoice(d_28);
      }
    else
      {
        t = c_28;
        {
          ATerm m_67 = NULL,n_67 = NULL,o_67 = NULL,r_67 = NULL,x_67 = NULL,y_67 = NULL,d_5 = NULL;
          t = t_92(t);
          y_67 = t;
          if(match_cons(t, sym__2))
            {
              n_67 = ATgetArgument(t, 0);
              o_67 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_67);
          m_67 = t;
          t = n_67;
          t = v_92(t);
          r_67 = t;
          t = o_67;
          t = c_68(t);
          x_67 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_67, x_67);
          d_5 = t;
          t = SSLsetAnnotations(d_5, m_67);
          t = u_92(t);
        }
      }
    return(t);
  }
  t = c_68(t);
  return(t);
}
ATerm k_7 (ATerm t)
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
ATerm l_7 (ATerm t)
{
  ATerm k_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_28 = ATgetArgument(t, 0);
      if(((ATgetType(h_28) == AT_LIST) && !(ATisEmpty(h_28))))
        {
          k_68 = ATgetFirst((ATermList) h_28);
          l_68 = (ATerm) ATgetNext((ATermList) h_28);
        }
      else
        _fail(t);
      {
        ATerm i_28 = ATgetArgument(t, 1);
        if(((ATgetType(i_28) == AT_LIST) && !(ATisEmpty(i_28))))
          {
            m_68 = ATgetFirst((ATermList) i_28);
            n_68 = (ATerm) ATgetNext((ATermList) i_28);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_68, m_68), (ATerm) ATmakeAppl(sym__2, l_68, n_68));
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm o_68 = NULL,p_68 = NULL;
  if(match_cons(t, sym__2))
    {
      o_68 = ATgetArgument(t, 0);
      p_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_68), o_68);
  return(t);
}
ATerm u_8 (ATerm m_652, ATerm r_652, ATerm z_65, ATerm t)
{
  ATerm e_68 = NULL,f_68 = NULL,g_68 = NULL,i_68 = NULL;
  t = SSL_explode_term(r_652);
  if(match_cons(t, sym__2))
    {
      e_68 = ATgetArgument(t, 0);
      g_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(m_652);
  if(match_cons(t, sym__2))
    {
      if((e_68 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      f_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_68, g_68);
  t = genzip_4_0(k_7, l_7, m_7, _id, t);
  i_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_68, z_65);
  t = conc_0_0(t);
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm z_68 = NULL;
  z_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, z_68);
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm a_69 = NULL,b_69 = NULL,c_69 = NULL,d_69 = NULL,g_5 = NULL;
  d_69 = t;
  if(match_cons(t, sym__2))
    {
      b_69 = ATgetArgument(t, 0);
      c_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_69);
  a_69 = t;
  t = c_69;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_69, c_69);
  g_5 = t;
  t = SSLsetAnnotations(g_5, a_69);
  return(t);
}
ATerm p_8 (ATerm t)
{
  ATerm z_69 = NULL,b_70 = NULL,c_70 = NULL,d_70 = NULL,f_70 = NULL;
  z_69 = t;
  if(match_cons(t, sym__2))
    {
      b_70 = ATgetArgument(t, 0);
      c_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_70;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_70 = ATgetFirst((ATermList) t);
      f_70 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_28 = t;
        int l_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_70(b_70, c_70, z_69, t);
            ;
            LocalPopChoice(l_28);
          }
        else
          {
            t = j_28;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_70), d_70), f_70);
          }
      }
    }
  else
    {
      t = x_70(b_70, c_70, z_69, t);
    }
  return(t);
}
ATerm x_70 (ATerm e_69, ATerm f_69, ATerm g_69, ATerm t)
{
  ATerm h_69 = NULL,l_69 = NULL,t_5 = NULL,o_69 = NULL,p_69 = NULL,q_69 = NULL,r_69 = NULL;
  t = SSLgetAnnotations(g_69);
  h_69 = t;
  t = f_69;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_69 = ATgetFirst((ATermList) t);
      r_69 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_69;
  if(match_cons(t, sym__2))
    {
      p_69 = ATgetArgument(t, 0);
      q_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_28 = t;
    int o_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_69;
        if((p_69 != t))
          {
            _fail(t);
          }
        t = r_69;
        ;
        LocalPopChoice(o_28);
      }
    else
      {
        t = m_28;
        t = f_69;
        t = u_8(p_69, q_69, r_69, t);
      }
    l_69 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_69, l_69);
    t_5 = t;
    t = SSLsetAnnotations(t_5, h_69);
  }
  return(t);
}
ATerm r_8 (ATerm t)
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
  ATerm s_28 = t;
  int t_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(r_7, m_8, p_8, t);
      ;
      LocalPopChoice(t_28);
    }
  else
    {
      t = s_28;
      {
        ATerm l_70 = NULL,m_70 = NULL,n_70 = NULL;
        l_70 = t;
        if(match_cons(t, sym__2))
          {
            m_70 = ATgetArgument(t, 0);
            n_70 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_70;
        t = q_8(r_8, m_70, n_70, t);
      }
    }
  return(t);
}
ATerm w_8 (ATerm g_117 (ATerm), ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm w_66, ATerm t_66, ATerm b_67, ATerm x_66, ATerm u_66, ATerm v_66, ATerm t)
{
  ATerm z_70 = NULL,a_71 = NULL,b_71 = NULL,c_71 = NULL,e_71 = NULL,f_71 = NULL,i_71 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_66, x_66);
  t = g_117(t);
  if(match_cons(t, sym__2))
    {
      a_71 = ATgetArgument(t, 0);
      z_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_71;
  t = h_117(t);
  b_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_71, b_67);
  t = diff_0_0(t);
  c_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_71, t_66);
  t = conc_0_0(t);
  e_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_71, b_67);
  t = conc_0_0(t);
  f_71 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_66, a_71, u_66);
  t = i_117(t);
  i_71 = t;
  t = (ATerm) ATmakeAppl(sym__5, e_71, f_71, z_70, i_71, v_66);
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm g_117 (ATerm), ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm t)
{
  ATerm k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL,o_71 = NULL,q_71 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm u_28 = ATgetArgument(t, 0);
      if(((ATgetType(u_28) == AT_LIST) && !(ATisEmpty(u_28))))
        {
          k_71 = ATgetFirst((ATermList) u_28);
          l_71 = (ATerm) ATgetNext((ATermList) u_28);
        }
      else
        _fail(t);
      m_71 = ATgetArgument(t, 1);
      n_71 = ATgetArgument(t, 2);
      o_71 = ATgetArgument(t, 3);
      q_71 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = w_8(g_117, h_117, i_117, k_71, l_71, m_71, n_71, o_71, q_71, t);
  return(t);
}
ATerm while_not_2_0 (ATerm t_101 (ATerm), ATerm u_101 (ATerm), ATerm t)
{
  ATerm r_71 (ATerm t)
  {
    ATerm w_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_101(t);
        ;
        LocalPopChoice(x_28);
      }
    else
      {
        t = w_28;
        t = u_101(t);
        t = r_71(t);
      }
    return(t);
  }
  t = r_71(t);
  return(t);
}
ATerm for_3_0 (ATerm w_101 (ATerm), ATerm x_101 (ATerm), ATerm y_101 (ATerm), ATerm t)
{
  t = w_101(t);
  t = while_not_2_0(x_101, y_101, t);
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm d_72 = NULL,g_72 = NULL,h_72 = NULL;
  if(match_cons(t, sym__3))
    {
      d_72 = ATgetArgument(t, 0);
      g_72 = ATgetArgument(t, 1);
      h_72 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, d_72, d_72, g_72, h_72, (ATerm) ATempty);
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm n_72 = NULL,q_72 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm z_28 = ATgetArgument(t, 0);
      if(((ATgetType(z_28) != AT_LIST) || !(ATisEmpty(z_28))))
        _fail(t);
      {
        ATerm a_29 = ATgetArgument(t, 1);
      }
      {
        ATerm b_29 = ATgetArgument(t, 2);
      }
      n_72 = ATgetArgument(t, 3);
      q_72 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_72, q_72);
  return(t);
}
ATerm a_9 (ATerm t)
{
  ATerm c_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, m_9, n_9, t);
      ;
      LocalPopChoice(d_29);
    }
  else
    {
      t = c_29;
      {
        ATerm c_73 = NULL,d_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,m_73 = NULL,q_73 = NULL;
        if(match_cons(t, sym__5))
          {
            c_73 = ATgetArgument(t, 0);
            h_73 = ATgetArgument(t, 1);
            i_73 = ATgetArgument(t, 2);
            m_73 = ATgetArgument(t, 3);
            q_73 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = c_73;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_73 = ATgetFirst((ATermList) t);
            g_73 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, g_73, h_73, i_73, m_73, (ATerm) ATinsert(CheckATermList(q_73), d_73));
      }
    }
  return(t);
}
ATerm m_9 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(v_9, t);
  return(t);
}
ATerm n_9 (ATerm t)
{
  ATerm z_72 = NULL,a_73 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm e_29 = ATgetArgument(t, 0);
      z_72 = ATgetArgument(t, 1);
      a_73 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_73), z_72);
  return(t);
}
ATerm v_9 (ATerm t)
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
ATerm x_9 (ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL;
  q_26 = t;
  if(match_cons(t, sym__2))
    {
      r_26 = ATgetArgument(t, 0);
      s_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_26;
  if(match_cons(t, sym_Mod_2))
    {
      o_26 = ATgetArgument(t, 0);
      p_26 = ATgetArgument(t, 1);
      {
        ATerm h_29 = t;
        int i_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_26;
            t = q_7(o_26, p_26, s_26, t);
            ;
            LocalPopChoice(i_29);
          }
        else
          {
            t = h_29;
            t = y_26(r_26, s_26, t);
          }
      }
    }
  else
    {
      t = y_26(r_26, s_26, t);
    }
  return(t);
}
ATerm y_26 (ATerm b_26, ATerm c_26, ATerm t)
{
  ATerm i_26 = NULL,l_26 = NULL;
  t = term_p_13;
  i_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_13), c_26), term_x_13), b_26), term_u_13);
  l_26 = t;
  t = SSL_printnl(i_26, l_26);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_13), c_26), term_x_13), b_26), term_u_13);
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  ATerm t_74 = NULL,u_74 = NULL,v_74 = NULL,w_74 = NULL,x_74 = NULL;
  t = for_3_0(s_8, y_8, a_9, t);
  t_74 = t;
  if(match_cons(t, sym__2))
    {
      u_74 = ATgetArgument(t, 0);
      v_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_74;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_74;
    }
  else
    {
      ATerm u_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_74 = ATgetFirst((ATermList) t);
          x_74 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(x_74), w_74);
      t = map_1_0(x_9, t);
      t = term_b_14;
      u_25 = t;
      t = SSL_exit(u_25);
    }
  return(t);
}
ATerm z_8 (ATerm p_117 (ATerm), ATerm u_67, ATerm s_67, ATerm t)
{
  ATerm b_75 = NULL,c_75 = NULL,d_75 = NULL,e_75 = NULL,f_75 = NULL,g_75 = NULL;
  e_75 = t;
  t = p_117(t);
  b_75 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_75, u_67, s_67);
  t = q_9(b_75, u_67, s_67, t);
  {
    ATerm l_29 = t;
    int m_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_75 = NULL;
        t = term_p_29;
        h_75 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_75, term_p_29);
        t = p_9(b_75, h_75, t);
        ;
        LocalPopChoice(m_29);
      }
    else
      {
        t = l_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_75 = ATgetFirst((ATermList) t);
        d_75 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_p_29;
    f_75 = t;
    t = (ATerm) ATinsert(CheckATermList(d_75), (ATerm) ATinsert(CheckATermList(c_75), u_67));
    g_75 = t;
    t = SSL_table_put(b_75, f_75, g_75);
    t = e_75;
  }
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm s_75 = NULL;
  s_75 = t;
  {
    ATerm q_29 = t;
    int r_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_27 = NULL,p_27 = NULL;
        t = term_s_29;
        p_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_29, s_75);
        t = b_9(p_27, s_75, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm t_29 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) t_29) != ATmakeSymbol("j_0", 0, ATtrue)))
              _fail(t);
            m_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_27;
        ;
        LocalPopChoice(r_29);
      }
    else
      {
        t = q_29;
        {
          ATerm x_27 = NULL,a_28 = NULL;
          t = term_s_29;
          a_28 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_s_29, s_75);
          t = b_9(a_28, s_75, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm u_29 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) u_29) != ATmakeSymbol("f_0", 0, ATtrue)))
                _fail(t);
              x_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_27;
        }
      }
  }
  return(t);
}
ATerm b_9 (ATerm i_63, ATerm j_63, ATerm t)
{
  ATerm v_75 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_63, j_63);
  t = p_9(i_63, j_63, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_75 = ATgetFirst((ATermList) t);
      {
        ATerm v_29 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_75;
  return(t);
}
ATerm p_76 (ATerm f_76, ATerm t)
{
  ATerm h_76 = NULL,i_76 = NULL,g_28 = NULL;
  t = term_w_29;
  g_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_29, f_76);
  t = b_9(g_28, f_76, t);
  if(match_cons(t, sym_Defined_3))
    {
      ATerm x_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_29) != ATmakeSymbol("b_0", 0, ATtrue)))
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
      ATerm y_29 = ATgetArgument(t, 0);
      n_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_76;
  {
    ATerm z_29 = t;
    int b_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_30 = ATgetArgument(t, 0);
            ATerm d_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(b_30);
        {
          ATerm e_30 = t;
          int f_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_28 = NULL,n_28 = NULL;
              t = term_w_29;
              n_28 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_w_29, l_76);
              t = b_9(n_28, l_76, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm g_30 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) g_30) != ATmakeSymbol("h_0", 0, ATtrue)))
                    _fail(t);
                  k_28 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = k_28;
              ;
              LocalPopChoice(f_30);
            }
          else
            {
              t = e_30;
              t = p_76(l_76, t);
            }
        }
      }
    else
      {
        t = z_29;
        t = p_76(l_76, t);
      }
  }
  return(t);
}
ATerm y_9 (ATerm t)
{
  t = term_j_16;
  return(t);
}
ATerm z_9 (ATerm t)
{
  ATerm e_77 = NULL,f_77 = NULL;
  if(match_cons(t, sym__2))
    {
      e_77 = ATgetArgument(t, 0);
      f_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_9(e_77, f_77, t);
  return(t);
}
ATerm b_10 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm c_10 (ATerm t)
{
  t = term_j_16;
  return(t);
}
ATerm d_10 (ATerm t)
{
  ATerm g_77 = NULL,h_77 = NULL;
  if(match_cons(t, sym__2))
    {
      g_77 = ATgetArgument(t, 0);
      h_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_9(g_77, h_77, t);
  return(t);
}
ATerm g_10 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm h_10 (ATerm t)
{
  ATerm i_77 = NULL;
  if(match_cons(t, sym__2))
    {
      i_77 = ATgetArgument(t, 0);
      if((i_77 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm i_10 (ATerm t)
{
  t = term_w_29;
  return(t);
}
ATerm k_10 (ATerm t)
{
  t = term_s_29;
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
        ATerm h_30 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  x_76 = t;
  t = q_76;
  t = foldr_3_0(y_9, z_9, b_10, t);
  t_76 = t;
  t = r_76;
  t = foldr_3_0(c_10, d_10, g_10, t);
  u_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_76, (ATerm) ATmakeAppl(sym__2, t_76, u_76));
  {
    ATerm i_30 = t;
    int k_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        ;
        LocalPopChoice(k_30);
      }
    else
      {
        t = i_30;
        t = (ATerm) ATempty;
      }
    z_76 = t;
    t = v_76;
    {
      ATerm l_30 = t;
      int m_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Arities_0_0(t);
          ;
          LocalPopChoice(m_30);
        }
      else
        {
          t = l_30;
          t = (ATerm) ATempty;
        }
      y_76 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_76, u_76));
      d_77 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_76, u_76)), y_76);
      t = e_9(h_10, d_77, y_76, t);
      w_76 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_76, (ATerm) ATmakeAppl(sym__2, t_76, u_76));
      b_77 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_n_30, (ATerm) ATinsert(CheckATermList(z_76), s_76));
      c_77 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_76, (ATerm) ATmakeAppl(sym__2, t_76, u_76)), (ATerm) ATmakeAppl(sym_Defined_2, term_n_30, (ATerm) ATinsert(CheckATermList(z_76), s_76)));
      t = z_8(i_10, b_77, c_77, t);
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_30, w_76);
      a_77 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_76, (ATerm) ATmakeAppl(sym_Defined_2, term_p_30, w_76));
      t = z_8(k_10, v_76, a_77, t);
      t = x_76;
    }
  }
  return(t);
}
ATerm l_10 (ATerm t)
{
  t = term_j_16;
  return(t);
}
ATerm m_10 (ATerm t)
{
  ATerm m_77 = NULL,n_77 = NULL;
  if(match_cons(t, sym__2))
    {
      m_77 = ATgetArgument(t, 0);
      n_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_9(m_77, n_77, t);
  return(t);
}
ATerm n_10 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm p_10 (ATerm t)
{
  t = term_j_16;
  return(t);
}
ATerm q_10 (ATerm t)
{
  ATerm o_77 = NULL,p_77 = NULL;
  if(match_cons(t, sym__2))
    {
      o_77 = ATgetArgument(t, 0);
      p_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_9(o_77, p_77, t);
  return(t);
}
ATerm r_10 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm c_9 (ATerm p_21, ATerm r_21, ATerm s_21, ATerm t)
{
  ATerm j_77 = NULL,k_77 = NULL;
  t = r_21;
  t = foldr_3_0(l_10, m_10, n_10, t);
  j_77 = t;
  t = s_21;
  t = foldr_3_0(p_10, q_10, r_10, t);
  k_77 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, p_21, (ATerm) ATmakeAppl(sym__2, j_77, k_77)));
  return(t);
}
ATerm d_9 (ATerm k_102 (ATerm), ATerm l_102 (ATerm), ATerm x_46, ATerm w_46, ATerm t)
{
  t = l_102(t);
  {
    ATerm s_10 (ATerm t)
    {
      ATerm q_77 = NULL;
      q_77 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_46, q_77);
      t = k_102(t);
      return(t);
    }
    t = fetch_1_0(s_10, t);
    t = w_46;
  }
  return(t);
}
ATerm e_9 (ATerm h_102 (ATerm), ATerm t_46, ATerm s_46, ATerm t)
{
  ATerm g_78 (ATerm t)
  {
    ATerm b_78 = NULL,c_78 = NULL,d_78 = NULL;
    b_78 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_46;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_78 = ATgetFirst((ATermList) t);
            d_78 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm q_30 = t;
          int r_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_78;
              {
                ATerm t_10 (ATerm t)
                {
                  t = s_46;
                  return(t);
                }
                t = d_9(h_102, t_10, c_78, d_78, t);
                t = g_78(t);
              }
              ;
              LocalPopChoice(r_30);
            }
          else
            {
              t = q_30;
              {
                ATerm v_28 = NULL,y_28 = NULL,x_5 = NULL;
                t = SSLgetAnnotations(b_78);
                v_28 = t;
                t = d_78;
                t = g_78(t);
                y_28 = t;
                t = (ATerm) ATinsert(CheckATermList(y_28), c_78);
                x_5 = t;
                t = SSLsetAnnotations(x_5, v_28);
              }
            }
        }
      }
    return(t);
  }
  t = t_46;
  t = g_78(t);
  return(t);
}
ATerm foldr_3_0 (ATerm r_104 (ATerm), ATerm s_104 (ATerm), ATerm t_104 (ATerm), ATerm t)
{
  ATerm j_78 = NULL,k_78 = NULL,l_78 = NULL;
  j_78 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_78;
      t = r_104(t);
    }
  else
    {
      ATerm o_78 = NULL,p_78 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_78 = ATgetFirst((ATermList) t);
          l_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_78;
      t = t_104(t);
      o_78 = t;
      t = l_78;
      t = foldr_3_0(r_104, s_104, t_104, t);
      p_78 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_78, p_78);
      t = s_104(t);
    }
  return(t);
}
ATerm u_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_10 (ATerm t)
{
  ATerm t_78 = NULL,u_78 = NULL;
  if(match_cons(t, sym__2))
    {
      t_78 = ATgetArgument(t, 0);
      u_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_9(x_10, t_78, u_78, t);
  return(t);
}
ATerm w_10 (ATerm t)
{
  ATerm w_78 = NULL,x_78 = NULL,y_78 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      w_78 = ATgetArgument(t, 0);
      x_78 = ATgetArgument(t, 1);
      y_78 = ATgetArgument(t, 2);
      {
        ATerm s_30 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = c_9(w_78, x_78, y_78, t);
  return(t);
}
ATerm x_10 (ATerm t)
{
  ATerm v_78 = NULL;
  if(match_cons(t, sym__2))
    {
      v_78 = ATgetArgument(t, 0);
      if((v_78 != ATgetArgument(t, 1)))
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
  ATerm q_78 = NULL,r_78 = NULL,s_78 = NULL;
  s_78 = t;
  t = foldr_3_0(u_10, v_10, w_10, t);
  q_78 = t;
  t = s_78;
  t = map_1_0(RegisterSDefT_0_0, t);
  r_78 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_78, r_78, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm r_72 (ATerm), ATerm s_72 (ATerm), ATerm t)
{
  ATerm z_78 = NULL,a_79 = NULL,b_79 = NULL,c_79 = NULL,d_79 = NULL,e_79 = NULL,k_6 = NULL;
  e_79 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_79 = ATgetFirst((ATermList) t);
      b_79 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_79);
  z_78 = t;
  t = a_79;
  t = r_72(t);
  c_79 = t;
  t = b_79;
  t = s_72(t);
  d_79 = t;
  t = (ATerm) ATinsert(CheckATermList(d_79), c_79);
  k_6 = t;
  t = SSLsetAnnotations(k_6, z_78);
  return(t);
}
ATerm f_9 (ATerm i_53, ATerm j_53, ATerm t)
{
  ATerm f_79 = NULL;
  t = SSL_fputc(i_53, j_53);
  f_79 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_79);
  return(t);
}
ATerm g_9 (ATerm w_56, ATerm x_56, ATerm t)
{
  ATerm g_79 = NULL;
  t = SSL_write_term_to_stream_text(w_56, x_56);
  g_79 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_79);
  return(t);
}
ATerm i_9 (ATerm w_109 (ATerm), ATerm g_510, ATerm a_57, ATerm t)
{
  ATerm h_79 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_510, term_t_30);
  t = open_stream_0_0(t);
  h_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_79, a_57);
  t = w_109(t);
  t = fclose_0_0(t);
  t = a_57;
  return(t);
}
ATerm h_9 (ATerm s_56, ATerm t_56, ATerm t)
{
  ATerm i_79 = NULL;
  t = SSL_write_term_to_stream_baf(s_56, t_56);
  i_79 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_79);
  return(t);
}
ATerm y_10 (ATerm t)
{
  ATerm l_79 = NULL,m_79 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_30 = ATgetArgument(t, 0);
      if(match_cons(u_30, sym_Stream_1))
        {
          l_79 = ATgetArgument(u_30, 0);
        }
      else
        _fail(t);
      m_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_9(l_79, m_79, t);
  return(t);
}
ATerm z_10 (ATerm t)
{
  ATerm n_79 = NULL,o_79 = NULL,p_79 = NULL,q_79 = NULL,r_79 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_30 = ATgetArgument(t, 0);
      if(match_cons(v_30, sym_Stream_1))
        {
          q_79 = ATgetArgument(v_30, 0);
        }
      else
        _fail(t);
      r_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_9(q_79, r_79, t);
  n_79 = t;
  t = term_w_30;
  o_79 = t;
  t = n_79;
  if(match_cons(t, sym_Stream_1))
    {
      p_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_w_30, n_79);
  t = f_9(o_79, p_79, t);
  return(t);
}
ATerm output_1_0 (ATerm f_114 (ATerm), ATerm t)
{
  ATerm j_79 = NULL,k_79 = NULL;
  t = f_114(t);
  k_79 = t;
  {
    ATerm x_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_30;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(y_30);
      }
    else
      {
        t = x_30;
        t = term_a_31;
      }
    j_79 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_79, k_79);
    {
      ATerm b_31 = t;
      int c_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_d_31;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, j_79, k_79);
          LocalPopChoice(c_31);
          if(match_cons(t, sym__2))
            {
              ATerm e_31 = ATgetArgument(t, 0);
              ATerm f_31 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_9(y_10, j_79, k_79, t);
        }
      else
        {
          t = b_31;
          if(match_cons(t, sym__2))
            {
              ATerm g_31 = ATgetArgument(t, 0);
              ATerm i_31 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_9(z_10, j_79, k_79, t);
        }
    }
  }
  return(t);
}
ATerm f_80 (ATerm z_79, ATerm t)
{
  t = SSL_fclose(z_79);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_80 = NULL,d_80 = NULL;
  d_80 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_80 = ATgetArgument(t, 0);
      {
        ATerm l_31 = t;
        int m_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_80);
            ;
            LocalPopChoice(m_31);
          }
        else
          {
            t = l_31;
            t = f_80(d_80, t);
          }
      }
    }
  else
    {
      t = f_80(d_80, t);
    }
  return(t);
}
ATerm j_9 (ATerm y_56, ATerm t)
{
  t = SSL_read_term_from_stream(y_56);
  return(t);
}
ATerm k_9 (ATerm k_53, ATerm l_53, ATerm t)
{
  ATerm g_80 = NULL;
  t = SSL_fopen(k_53, l_53);
  g_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_80);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_80 = NULL;
  t = SSL_stdin_stream();
  h_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_80);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_80 = NULL;
  t = SSL_stdout_stream();
  i_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_80);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_80 = NULL;
  t = SSL_stderr_stream();
  j_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_80);
  return(t);
}
ATerm q_81 (ATerm p_80, ATerm t)
{
  ATerm q_80 = NULL;
  t = SSL_explode_term(p_80);
  if(match_cons(t, sym__2))
    {
      ATerm n_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_31 = ATgetArgument(t, 1);
        if(((ATgetType(o_31) == AT_LIST) && !(ATisEmpty(o_31))))
          {
            q_80 = ATgetFirst((ATermList) o_31);
            {
              ATerm p_31 = (ATerm) ATgetNext((ATermList) o_31);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_80;
  if(match_cons(t, sym_stderr_0))
    {
      t = q_80;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = q_80;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_80;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm r_81 (ATerm t_80, ATerm u_80, ATerm v_80, ATerm t)
{
  ATerm w_80 = NULL,x_80 = NULL,y_80 = NULL,b_81 = NULL,p_6 = NULL;
  t = SSLgetAnnotations(v_80);
  y_80 = t;
  t = t_80;
  if(match_cons(t, sym_Path_1))
    {
      b_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_81, u_80);
  p_6 = t;
  t = SSLsetAnnotations(p_6, y_80);
  if(match_cons(t, sym__2))
    {
      w_80 = ATgetArgument(t, 0);
      x_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_9(w_80, x_80, t);
  return(t);
}
ATerm s_81 (ATerm d_81, ATerm e_81, ATerm f_81, ATerm t)
{
  ATerm g_81 = NULL,h_81 = NULL,i_81 = NULL,l_81 = NULL,r_6 = NULL;
  t = SSLgetAnnotations(f_81);
  i_81 = t;
  t = SSL_is_string(d_81);
  l_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_81, e_81);
  r_6 = t;
  t = SSLsetAnnotations(r_6, i_81);
  if(match_cons(t, sym__2))
    {
      g_81 = ATgetArgument(t, 0);
      h_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_9(g_81, h_81, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm n_81 = NULL,o_81 = NULL,p_81 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_31 = ATgetArgument(t, 0);
      ATerm s_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  n_81 = t;
  if(match_cons(t, sym__2))
    {
      o_81 = ATgetArgument(t, 0);
      p_81 = ATgetArgument(t, 1);
      {
        ATerm t_31 = t;
        int u_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_81(n_81, t);
            ;
            LocalPopChoice(u_31);
          }
        else
          {
            t = t_31;
            {
              ATerm v_31 = t;
              int w_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_81(o_81, p_81, n_81, t);
                  ;
                  LocalPopChoice(w_31);
                }
              else
                {
                  t = v_31;
                  t = s_81(o_81, p_81, n_81, t);
                }
            }
          }
      }
    }
  else
    {
      t = q_81(n_81, t);
    }
  return(t);
}
ATerm a_11 (ATerm t)
{
  t = term_x_31;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_81 = NULL,u_81 = NULL,v_81 = NULL;
  ATerm y_31 = t;
  int z_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_81 = NULL;
      w_81 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_81, term_a_32);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(z_31);
    }
  else
    {
      t = y_31;
      t = debug_1_0(a_11, t);
      _fail(t);
    }
  u_81 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_9(v_81, t);
  t_81 = t;
  t = u_81;
  t = fclose_0_0(t);
  t = t_81;
  return(t);
}
ATerm input_1_0 (ATerm g_114 (ATerm), ATerm t)
{
  ATerm b_32 = t;
  int c_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_32;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_32);
    }
  else
    {
      t = b_32;
      t = term_f_32;
    }
  t = ReadFromFile_0_0(t);
  t = g_114(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm y_81 = NULL,z_81 = NULL,a_82 = NULL,b_82 = NULL,c_82 = NULL;
  y_81 = t;
  t = term_r_25;
  t = whoami_0_0(t);
  z_81 = t;
  t = term_p_13;
  b_82 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_32), z_81), term_g_32);
  c_82 = t;
  t = SSL_printnl(b_82, c_82);
  t = term_b_14;
  a_82 = t;
  t = SSL_exit(a_82);
  t = y_81;
  return(t);
}
ATerm c_11 (ATerm t)
{
  ATerm e_82 = NULL;
  e_82 = t;
  if(match_string(t, "-k"))
    {
      t = e_82;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_82;
    }
  return(t);
}
ATerm d_11 (ATerm t)
{
  ATerm f_82 = NULL,g_82 = NULL,h_82 = NULL;
  f_82 = t;
  t = SSL_string_to_int(f_82);
  g_82 = t;
  t = term_j_32;
  h_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_32, g_82);
  t = s_9(h_82, g_82, t);
  t = f_82;
  return(t);
}
ATerm e_11 (ATerm t)
{
  t = term_k_32;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_11, d_11, e_11, t);
  return(t);
}
ATerm f_11 (ATerm t)
{
  ATerm j_82 = NULL;
  j_82 = t;
  if(match_string(t, "-S"))
    {
      t = j_82;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_82;
    }
  return(t);
}
ATerm g_11 (ATerm t)
{
  ATerm k_82 = NULL,l_82 = NULL;
  t = term_l_32;
  k_82 = t;
  t = term_j_16;
  l_82 = t;
  t = term_n_32;
  t = s_9(k_82, l_82, t);
  t = term_o_32;
  return(t);
}
ATerm i_11 (ATerm t)
{
  t = term_p_32;
  return(t);
}
ATerm j_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_11 (ATerm t)
{
  ATerm m_82 = NULL,n_82 = NULL,o_82 = NULL;
  m_82 = t;
  t = SSL_string_to_int(m_82);
  n_82 = t;
  t = term_l_32;
  o_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_32, n_82);
  t = s_9(o_82, n_82, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_82);
  return(t);
}
ATerm l_11 (ATerm t)
{
  t = term_q_32;
  return(t);
}
ATerm n_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_11 (ATerm t)
{
  ATerm p_82 = NULL,q_82 = NULL;
  t = term_r_32;
  p_82 = t;
  t = term_r_25;
  q_82 = t;
  t = term_s_32;
  t = s_9(p_82, q_82, t);
  t = term_t_32;
  return(t);
}
ATerm p_11 (ATerm t)
{
  t = term_u_32;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_32 = t;
  int w_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_11, g_11, i_11, t);
      ;
      LocalPopChoice(w_32);
    }
  else
    {
      t = v_32;
      {
        ATerm x_32 = t;
        int y_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(j_11, k_11, l_11, t);
            ;
            LocalPopChoice(y_32);
          }
        else
          {
            t = x_32;
            t = Option_3_0(n_11, o_11, p_11, t);
          }
      }
    }
  return(t);
}
ATerm s_9 (ATerm z_57, ATerm a_58, ATerm t)
{
  ATerm r_82 = NULL;
  t = term_z_32;
  r_82 = t;
  t = SSL_table_put(r_82, z_57, a_58);
  t = (ATerm) ATmakeAppl(sym__3, term_z_32, z_57, a_58);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm u_82 = NULL,v_82 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_82 = NULL,x_82 = NULL,y_82 = NULL;
      t = term_r_25;
      t = i_0(t);
      w_82 = t;
      t = term_a_33;
      x_82 = t;
      t = term_b_33;
      y_82 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_33, term_b_33, w_82);
      t = q_9(x_82, y_82, w_82, t);
      _fail(t);
    }
  else
    {
      ATerm b_83 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_82 = ATgetFirst((ATermList) t);
          v_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_82;
      t = d_0(t);
      t = term_r_25;
      t = g_0(t);
      b_83 = t;
      t = (ATerm) ATinsert(CheckATermList(v_82), b_83);
    }
  return(t);
}
ATerm q_11 (ATerm t)
{
  ATerm d_83 = NULL;
  d_83 = t;
  if(match_string(t, "-o"))
    {
      t = d_83;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_83;
    }
  return(t);
}
ATerm r_11 (ATerm t)
{
  ATerm e_83 = NULL,f_83 = NULL;
  e_83 = t;
  t = term_z_30;
  f_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_30, e_83);
  t = s_9(f_83, e_83, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, e_83);
  return(t);
}
ATerm s_11 (ATerm t)
{
  t = term_c_33;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_11, r_11, s_11, t);
  return(t);
}
ATerm q_9 (ATerm x_62, ATerm y_62, ATerm w_62, ATerm t)
{
  ATerm h_83 = NULL,i_83 = NULL,j_83 = NULL;
  h_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_62, y_62);
  {
    ATerm d_33 = t;
    int i_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_33 = ATgetArgument(t, 0);
            ATerm l_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, x_62, y_62);
        t = p_9(x_62, y_62, t);
        ;
        LocalPopChoice(i_33);
      }
    else
      {
        t = d_33;
        t = (ATerm) ATempty;
      }
    i_83 = t;
    t = (ATerm) ATinsert(CheckATermList(i_83), w_62);
    j_83 = t;
    t = SSL_table_put(x_62, y_62, j_83);
    t = h_83;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm q_83 = NULL,r_83 = NULL,s_83 = NULL,t_83 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_83 = NULL,v_83 = NULL,w_83 = NULL;
      t = term_r_25;
      t = r_0(t);
      u_83 = t;
      t = term_a_33;
      v_83 = t;
      t = term_b_33;
      w_83 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_33, term_b_33, u_83);
      t = q_9(v_83, w_83, u_83, t);
      _fail(t);
    }
  else
    {
      ATerm a_84 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_83 = ATgetFirst((ATermList) t);
          r_83 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_83;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_83 = ATgetFirst((ATermList) t);
          t_83 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_83;
      t = n_0(t);
      t = s_83;
      t = p_0(t);
      a_84 = t;
      t = (ATerm) ATinsert(CheckATermList(t_83), a_84);
    }
  return(t);
}
ATerm t_11 (ATerm t)
{
  ATerm c_84 = NULL;
  c_84 = t;
  if(match_string(t, "-i"))
    {
      t = c_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = c_84;
    }
  return(t);
}
ATerm u_11 (ATerm t)
{
  ATerm d_84 = NULL,e_84 = NULL;
  d_84 = t;
  t = term_d_32;
  e_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_32, d_84);
  t = s_9(e_84, d_84, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, d_84);
  return(t);
}
ATerm v_11 (ATerm t)
{
  t = term_m_33;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_11, u_11, v_11, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_84 = NULL,g_84 = NULL,h_84 = NULL,i_84 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_25;
  t = whoami_0_0(t);
  f_84 = t;
  t = term_p_13;
  h_84 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_33), f_84);
  i_84 = t;
  t = SSL_printnl(h_84, i_84);
  t = term_b_14;
  g_84 = t;
  t = SSL_exit(g_84);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_o_33;
  t = get_config_0_0(t);
  return(t);
}
ATerm l_9 (ATerm x_49, ATerm y_49, ATerm t)
{
  ATerm p_33 = t;
  int r_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_49, y_49);
      ;
      LocalPopChoice(r_33);
    }
  else
    {
      t = p_33;
      t = SSL_addr(x_49, y_49);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_104 (ATerm), ATerm q_104 (ATerm), ATerm t)
{
  ATerm k_84 = NULL,l_84 = NULL,m_84 = NULL;
  k_84 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_84;
      t = p_104(t);
    }
  else
    {
      ATerm p_84 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_84 = ATgetFirst((ATermList) t);
          m_84 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_84;
      t = foldr_2_0(p_104, q_104, t);
      p_84 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_84, p_84);
      t = q_104(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm w_11 (ATerm t)
{
  t = term_j_16;
  return(t);
}
ATerm y_11 (ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL;
  if(match_cons(t, sym__2))
    {
      n_29 = ATgetArgument(t, 0);
      o_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_9(n_29, o_29, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm s_84 = NULL,j_29 = NULL,k_29 = NULL;
  t = times_0_0(t);
  k_29 = t;
  t = SSL_explode_term(k_29);
  if(match_cons(t, sym__2))
    {
      ATerm s_33 = ATgetArgument(t, 0);
      j_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_29;
  t = foldr_2_0(w_11, y_11, t);
  s_84 = t;
  t = SSL_TicksToSeconds(s_84);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_85 = NULL,e_85 = NULL,f_85 = NULL;
  d_85 = t;
  if(match_cons(t, sym__2))
    {
      e_85 = ATgetArgument(t, 0);
      f_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_33 = t;
    int u_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_85;
        if((e_85 != t))
          {
            _fail(t);
          }
        t = d_85;
        ;
        LocalPopChoice(u_33);
      }
    else
      {
        t = t_33;
        t = (ATerm) ATmakeAppl(sym__2, e_85, f_85);
        {
          ATerm v_33 = t;
          int w_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_85, f_85);
              ;
              LocalPopChoice(w_33);
            }
          else
            {
              t = v_33;
              t = SSL_gtr(e_85, f_85);
            }
          t = (ATerm) ATmakeAppl(sym__2, e_85, f_85);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_111 (ATerm), ATerm t)
{
  ATerm j_85 = NULL;
  j_85 = t;
  {
    ATerm x_33 = t;
    int y_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_85 = NULL;
        t = term_l_32;
        t = get_config_0_0(t);
        l_85 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_85, term_b_14);
        t = geq_0_0(t);
        t = j_85;
        t = g_111(t);
        ;
        LocalPopChoice(y_33);
      }
    else
      {
        t = x_33;
        t = j_85;
      }
  }
  return(t);
}
ATerm z_11 (ATerm t)
{
  ATerm n_85 = NULL,o_85 = NULL,q_85 = NULL,r_85 = NULL;
  t = run_time_0_0(t);
  n_85 = t;
  t = term_r_25;
  t = whoami_0_0(t);
  o_85 = t;
  t = term_p_13;
  q_85 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_34), n_85), term_d_34), o_85);
  r_85 = t;
  t = SSL_printnl(q_85, r_85);
  t = (ATerm) ATmakeAppl(sym__2, term_p_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_34), n_85), term_d_34), o_85));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(z_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_85 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_16;
  s_85 = t;
  t = SSL_exit(s_85);
  return(t);
}
ATerm b_12 (ATerm t)
{
  ATerm a_86 = NULL,b_86 = NULL;
  b_86 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = b_86;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          a_86 = ATgetArgument(t, 0);
          {
            ATerm a_30 = NULL,v_6 = NULL;
            t = SSLgetAnnotations(b_86);
            a_30 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, a_86);
            v_6 = t;
            t = SSLsetAnnotations(v_6, a_30);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = b_86;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm w_113 (ATerm), ATerm t)
{
  ATerm f_34 = t;
  int g_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_34;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_34);
    }
  else
    {
      t = f_34;
      t = fetch_1_0(b_12, t);
    }
  t = w_113(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm e_86 = NULL,f_86 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_86 = ATgetFirst((ATermList) t);
      f_86 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_86 = NULL,k_86 = NULL;
        ATerm d_12 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_86)), not_null(k_86));
          return(t);
        }
        t = f_86;
        t = l_0(t);
        if(((j_86 != NULL) && (j_86 != t)))
          _fail(t);
        else
          j_86 = t;
        t = e_86;
        t = k_0(t);
        if(((k_86 != NULL) && (k_86 != t)))
          _fail(t);
        else
          k_86 = t;
        t = f_86;
        t = reverse_acc_2_0(k_0, d_12, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_25;
      t = l_0(t);
    }
  return(t);
}
ATerm g_12 (ATerm t)
{
  ATerm q_86 = NULL,r_86 = NULL,s_86 = NULL,n_7 = NULL;
  s_86 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_86);
  q_86 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_86);
  n_7 = t;
  t = SSLsetAnnotations(n_7, q_86);
  return(t);
}
ATerm i_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_12 (ATerm t)
{
  ATerm u_86 = NULL;
  u_86 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_86), term_j_34);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_86 = NULL,p_86 = NULL;
  ATerm k_34 = t;
  int n_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_33;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_34);
    }
  else
    {
      t = k_34;
      t = fetch_1_0(g_12, t);
    }
  t = term_o_34;
  t = echo_0_0(t);
  t = term_a_33;
  o_86 = t;
  t = term_b_33;
  p_86 = t;
  t = term_p_34;
  t = p_9(o_86, p_86, t);
  t = reverse_acc_2_0(_id, i_12, t);
  t = map_1_0(j_12, t);
  return(t);
}
ATerm fetch_1_0 (ATerm r_94 (ATerm), ATerm t)
{
  ATerm w_87 (ATerm t)
  {
    ATerm t_87 = NULL,u_87 = NULL,v_87 = NULL;
    t_87 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_87 = ATgetFirst((ATermList) t);
        v_87 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm q_34 = t;
      int r_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_30 = NULL,o_30 = NULL,s_7 = NULL;
          t = SSLgetAnnotations(t_87);
          j_30 = t;
          t = u_87;
          t = r_94(t);
          o_30 = t;
          t = (ATerm) ATinsert(CheckATermList(v_87), o_30);
          s_7 = t;
          t = SSLsetAnnotations(s_7, j_30);
          ;
          LocalPopChoice(r_34);
        }
      else
        {
          t = q_34;
          {
            ATerm h_31 = NULL,q_31 = NULL,d_8 = NULL;
            t = SSLgetAnnotations(t_87);
            h_31 = t;
            t = v_87;
            t = w_87(t);
            q_31 = t;
            t = (ATerm) ATinsert(CheckATermList(q_31), u_87);
            d_8 = t;
            t = SSLsetAnnotations(d_8, h_31);
          }
        }
    }
    return(t);
  }
  t = w_87(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_88 = NULL,b_88 = NULL,c_88 = NULL;
  a_88 = t;
  {
    ATerm s_34 = t;
    int t_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_88;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_34 = ATgetFirst((ATermList) t);
                ATerm y_34 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_88;
          }
        ;
        LocalPopChoice(t_34);
      }
    else
      {
        t = s_34;
        t = (ATerm) ATinsert(ATempty, a_88);
      }
    b_88 = t;
    t = term_a_31;
    c_88 = t;
    t = SSL_printnl(c_88, b_88);
    t = a_88;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_o_33;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm o_9 (ATerm i_46, ATerm j_46, ATerm t)
{
  t = SSL_strcat(i_46, j_46);
  return(t);
}
ATerm debug_1_0 (ATerm u_109 (ATerm), ATerm t)
{
  ATerm j_88 = NULL,k_88 = NULL,l_88 = NULL,m_88 = NULL;
  j_88 = t;
  t = u_109(t);
  k_88 = t;
  t = term_p_13;
  l_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_88), k_88);
  m_88 = t;
  t = SSL_printnl(l_88, m_88);
  t = j_88;
  return(t);
}
ATerm map_1_0 (ATerm h_94 (ATerm), ATerm t)
{
  ATerm b_89 (ATerm t)
  {
    ATerm y_88 = NULL,z_88 = NULL,a_89 = NULL;
    y_88 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_88;
      }
    else
      {
        ATerm e_32 = NULL,i_32 = NULL,m_32 = NULL,v_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_88 = ATgetFirst((ATermList) t);
            a_89 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_88);
        e_32 = t;
        t = z_88;
        t = h_94(t);
        i_32 = t;
        t = a_89;
        t = b_89(t);
        m_32 = t;
        t = (ATerm) ATinsert(CheckATermList(m_32), i_32);
        v_8 = t;
        t = SSLsetAnnotations(v_8, e_32);
      }
    return(t);
  }
  t = b_89(t);
  return(t);
}
ATerm l_12 (ATerm t)
{
  ATerm a_35 = t;
  int b_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(b_35);
    }
  else
    {
      t = a_35;
    }
  return(t);
}
ATerm m_12 (ATerm t)
{
  t = term_c_35;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm f_35 = t;
  int g_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_89 = NULL;
      j_89 = t;
      t = SSL_is_string(j_89);
      ;
      LocalPopChoice(g_35);
    }
  else
    {
      t = f_35;
      {
        ATerm h_35 = t;
        int i_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(l_12, t);
            ;
            LocalPopChoice(i_35);
          }
        else
          {
            t = h_35;
            {
              ATerm r_89 = NULL,s_89 = NULL,t_89 = NULL;
              r_89 = t;
              if(match_cons(t, sym_Path_1))
                {
                  s_89 = ATgetArgument(t, 0);
                  t = s_89;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      s_89 = ATgetArgument(t, 0);
                      t = s_89;
                      {
                        ATerm j_35 = t;
                        int k_35 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(k_35);
                          }
                        else
                          {
                            t = j_35;
                            t = debug_1_0(m_12, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm x_89 = NULL,a_90 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          s_89 = ATgetArgument(t, 0);
                          t_89 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_89;
                      t = eval_config_0_0(t);
                      x_89 = t;
                      t = t_89;
                      t = eval_config_0_0(t);
                      a_90 = t;
                      t = (ATerm) ATmakeAppl(sym__2, x_89, a_90);
                      t = o_9(x_89, a_90, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm p_9 (ATerm o_64, ATerm p_64, ATerm t)
{
  t = SSL_table_get(o_64, p_64);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm e_90 = NULL,f_90 = NULL;
  e_90 = t;
  t = term_z_32;
  f_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_32, e_90);
  t = p_9(f_90, e_90, t);
  {
    ATerm l_35 = t;
    int m_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_90 = NULL,h_90 = NULL;
        t = eval_config_0_0(t);
        g_90 = t;
        t = term_z_32;
        h_90 = t;
        t = SSL_table_put(h_90, e_90, g_90);
        t = g_90;
        ;
        LocalPopChoice(m_35);
      }
    else
      {
        t = l_35;
      }
  }
  return(t);
}
ATerm n_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_12 (ATerm t)
{
  ATerm k_90 = NULL,l_90 = NULL;
  t = term_n_35;
  k_90 = t;
  t = term_r_25;
  l_90 = t;
  t = term_o_35;
  t = s_9(k_90, l_90, t);
  return(t);
}
ATerm p_12 (ATerm t)
{
  t = term_p_35;
  return(t);
}
ATerm q_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_12 (ATerm t)
{
  ATerm m_90 = NULL,n_90 = NULL,o_90 = NULL,p_90 = NULL;
  t = term_n_35;
  o_90 = t;
  t = term_r_25;
  p_90 = t;
  t = term_o_35;
  t = s_9(o_90, p_90, t);
  t = term_q_35;
  m_90 = t;
  t = term_r_25;
  n_90 = t;
  t = term_r_35;
  t = s_9(m_90, n_90, t);
  t = term_s_35;
  return(t);
}
ATerm t_12 (ATerm t)
{
  t = term_t_35;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_35 = t;
  int v_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_12, o_12, p_12, t);
      ;
      LocalPopChoice(v_35);
    }
  else
    {
      t = u_35;
      t = Option_3_0(q_12, r_12, t_12, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_115 (ATerm), ATerm t)
{
  ATerm u_90 = NULL,v_90 = NULL,w_90 = NULL,x_90 = NULL,z_90 = NULL,a_91 = NULL,e_10 = NULL;
  u_90 = t;
  {
    ATerm w_35 = t;
    int x_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_35;
        t = z_115(t);
        ;
        LocalPopChoice(x_35);
      }
    else
      {
        t = w_35;
      }
    t = u_90;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_90 = ATgetFirst((ATermList) t);
        x_90 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_90);
    v_90 = t;
    t = term_o_33;
    a_91 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_o_33, w_90);
    t = s_9(a_91, w_90, t);
    t = x_90;
    {
      ATerm k_91 (ATerm t)
      {
        ATerm z_35 = t;
        int a_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_36 = t;
            int c_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_91 = NULL;
                d_91 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = d_91;
                ;
                LocalPopChoice(c_36);
              }
            else
              {
                t = b_36;
                t = z_115(t);
                t = Cons_2_0(_id, k_91, t);
              }
            ;
            LocalPopChoice(a_36);
          }
        else
          {
            t = z_35;
            {
              ATerm g_91 = NULL,h_91 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_91 = ATgetFirst((ATermList) t);
                  h_91 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(h_91), (ATerm) ATmakeAppl(sym_Undefined_1, g_91));
            }
          }
        return(t);
      }
      t = k_91(t);
      z_90 = t;
      t = (ATerm) ATinsert(CheckATermList(z_90), (ATerm) ATmakeAppl(sym_Program_1, w_90));
      e_10 = t;
      t = SSLsetAnnotations(e_10, v_90);
    }
  }
  return(t);
}
ATerm y_12 (ATerm t)
{
  ATerm y_91 = NULL;
  y_91 = t;
  if(match_string(t, "--help"))
    {
      t = y_91;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_91;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_91;
        }
    }
  return(t);
}
ATerm a_13 (ATerm t)
{
  ATerm z_91 = NULL,a_92 = NULL;
  t = term_h_34;
  z_91 = t;
  t = term_r_25;
  a_92 = t;
  t = term_d_36;
  t = s_9(z_91, a_92, t);
  t = term_e_36;
  return(t);
}
ATerm f_13 (ATerm t)
{
  t = term_f_36;
  return(t);
}
ATerm g_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_115 (ATerm), ATerm t)
{
  ATerm p_91 = NULL,q_91 = NULL,r_91 = NULL,u_91 = NULL,v_91 = NULL,w_91 = NULL,x_91 = NULL;
  r_91 = t;
  t = term_a_33;
  v_91 = t;
  t = term_b_33;
  w_91 = t;
  t = (ATerm) ATempty;
  x_91 = t;
  t = SSL_table_put(v_91, w_91, x_91);
  t = r_91;
  {
    ATerm x_12 (ATerm t)
    {
      ATerm g_36 = t;
      int h_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_115(t);
          ;
          LocalPopChoice(h_36);
        }
      else
        {
          t = g_36;
          {
            ATerm i_36 = t;
            int j_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(y_12, a_13, f_13, t);
                ;
                LocalPopChoice(j_36);
              }
            else
              {
                t = i_36;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_12, t);
    {
      ATerm k_36 = t;
      int l_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_92 = NULL;
          h_92 = t;
          {
            ATerm m_36 = t;
            int n_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_33 = NULL;
                t = h_92;
                {
                  ATerm o_36 = t;
                  int p_36 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_h_34;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(p_36);
                    }
                  else
                    {
                      t = o_36;
                      t = fetch_1_0(g_13, t);
                    }
                  t = h_92;
                  t = default_system_usage_0_0(t);
                  t = term_j_16;
                  j_33 = t;
                  t = SSL_exit(j_33);
                }
                ;
                LocalPopChoice(n_36);
              }
            else
              {
                t = m_36;
                {
                  ATerm q_33 = NULL;
                  t = term_n_35;
                  t = get_config_0_0(t);
                  t = h_92;
                  t = default_system_about_0_0(t);
                  t = term_j_16;
                  q_33 = t;
                  t = SSL_exit(q_33);
                }
              }
          }
          ;
          LocalPopChoice(l_36);
        }
      else
        {
          t = k_36;
          {
            ATerm q_36 = t;
            int r_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_92 = NULL,l_92 = NULL,m_92 = NULL;
                ATerm h_13 (ATerm t)
                {
                  ATerm n_92 = NULL,o_92 = NULL,p_92 = NULL,c_12 = NULL;
                  p_92 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      o_92 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(p_92);
                  n_92 = t;
                  t = o_92;
                  if(((p_91 != NULL) && (p_91 != t)))
                    _fail(t);
                  else
                    p_91 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, o_92);
                  c_12 = t;
                  t = SSLsetAnnotations(c_12, n_92);
                  return(t);
                }
                t = fetch_1_0(h_13, t);
                t = term_p_13;
                l_92 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_91)), term_s_36);
                m_92 = t;
                t = SSL_printnl(l_92, m_92);
                t = (ATerm) ATmakeAppl(sym__2, term_p_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_91)), term_s_36));
                t = default_system_usage_0_0(t);
                t = term_b_14;
                k_92 = t;
                t = SSL_exit(k_92);
                ;
                LocalPopChoice(r_36);
              }
            else
              {
                t = q_36;
              }
          }
        }
      q_91 = t;
      t = term_a_33;
      u_91 = t;
      t = SSL_table_destroy(u_91);
      t = q_91;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_113 (ATerm), ATerm z_113 (ATerm), ATerm a_114 (ATerm), ATerm b_114 (ATerm), ATerm t)
{
  ATerm z_92 = NULL,a_93 = NULL,b_93 = NULL,c_93 = NULL;
  t = parse_options_1_0(y_113, t);
  z_92 = t;
  t = term_t_36;
  c_93 = t;
  t = SSL_table_create(c_93);
  t = term_t_36;
  a_93 = t;
  t = term_u_36;
  b_93 = t;
  t = SSL_table_put(a_93, b_93, z_92);
  t = z_92;
  t = a_114(t);
  {
    ATerm v_36 = t;
    int w_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_113, t);
        ;
        LocalPopChoice(w_36);
      }
    else
      {
        t = v_36;
        {
          ATerm a_37 = t;
          int b_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_114(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(b_37);
            }
          else
            {
              t = a_37;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm i_13 (ATerm t)
{
  ATerm c_37 = t;
  int d_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(d_37);
    }
  else
    {
      t = c_37;
      {
        ATerm e_37 = t;
        int f_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(f_37);
          }
        else
          {
            t = e_37;
            {
              ATerm g_37 = t;
              int h_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(k_13, l_13, m_13, t);
                  ;
                  LocalPopChoice(h_37);
                }
              else
                {
                  t = g_37;
                  {
                    ATerm i_37 = t;
                    int j_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(j_37);
                      }
                    else
                      {
                        t = i_37;
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
ATerm j_13 (ATerm t)
{
  t = input_1_0(n_13, t);
  return(t);
}
ATerm k_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_13 (ATerm t)
{
  ATerm e_93 = NULL,f_93 = NULL;
  t = term_d_31;
  e_93 = t;
  t = term_r_25;
  f_93 = t;
  t = term_k_37;
  t = s_9(e_93, f_93, t);
  t = term_l_37;
  return(t);
}
ATerm m_13 (ATerm t)
{
  t = term_m_37;
  return(t);
}
ATerm n_13 (ATerm t)
{
  t = output_1_0(o_13, t);
  return(t);
}
ATerm o_13 (ATerm t)
{
  ATerm h_93 = NULL,i_93 = NULL,j_93 = NULL,k_93 = NULL,l_93 = NULL,m_93 = NULL,n_93 = NULL,o_93 = NULL,u_24 = NULL,s_13 = NULL;
  o_93 = t;
  if(match_cons(t, sym_Specification_1))
    {
      i_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_93);
  h_93 = t;
  t = i_93;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_93 = ATgetFirst((ATermList) t);
      l_93 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_93);
  j_93 = t;
  t = l_93;
  t = Cons_2_0(q_13, t_13, t);
  m_93 = t;
  t = (ATerm) ATinsert(CheckATermList(m_93), k_93);
  s_13 = t;
  t = SSLsetAnnotations(s_13, j_93);
  n_93 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, n_93);
  u_24 = t;
  t = SSLsetAnnotations(u_24, h_93);
  return(t);
}
ATerm q_13 (ATerm t)
{
  ATerm p_93 = NULL,q_93 = NULL,r_93 = NULL,s_93 = NULL,r_13 = NULL;
  s_93 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      q_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_93);
  p_93 = t;
  t = q_93;
  t = all_defs_0_0(t);
  r_93 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, r_93);
  r_13 = t;
  t = SSLsetAnnotations(r_13, p_93);
  return(t);
}
ATerm t_13 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(i_13, default_usage_0_0, _id, j_13, t);
  return(t);
}
