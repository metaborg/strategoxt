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
ATerm term_c_65;
ATerm term_n_64;
ATerm term_m_64;
ATerm term_l_64;
ATerm term_g_64;
ATerm term_f_64;
ATerm term_e_64;
ATerm term_d_63;
ATerm term_a_63;
ATerm term_r_62;
ATerm term_b_62;
ATerm term_a_62;
ATerm term_z_61;
ATerm term_w_61;
ATerm term_s_61;
ATerm term_q_61;
ATerm term_f_61;
ATerm term_a_61;
ATerm term_t_60;
ATerm term_b_60;
ATerm term_a_60;
ATerm term_s_58;
ATerm term_r_58;
ATerm term_q_58;
ATerm term_p_58;
ATerm term_h_58;
ATerm term_g_58;
ATerm term_f_58;
ATerm term_e_58;
ATerm term_y_57;
ATerm term_x_57;
ATerm term_w_57;
ATerm term_v_57;
ATerm term_u_57;
ATerm term_t_57;
ATerm term_s_57;
ATerm term_r_57;
ATerm term_m_57;
ATerm term_x_56;
ATerm term_o_56;
ATerm term_k_56;
ATerm term_i_55;
ATerm term_h_55;
ATerm term_x_53;
ATerm term_m_53;
ATerm term_g_53;
ATerm term_u_51;
ATerm term_s_51;
ATerm term_t_50;
ATerm term_h_50;
ATerm term_e_50;
ATerm term_c_46;
ATerm term_b_46;
ATerm term_l_42;
ATerm term_h_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_h_41;
ATerm term_k_40;
ATerm term_g_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_k_39;
ATerm term_b_38;
ATerm term_e_36;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_h_33;
ATerm term_m_9;
void init_constant_terms (void)
{
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(sym_Op_2, term_y_41, (ATerm) ATempty);
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(sym_ConstType_1, term_z_41);
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_h_50));
  term_h_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_56));
  term_k_56 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_56));
  term_o_56 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_56));
  term_x_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_57));
  term_m_57 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_57));
  term_r_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_57));
  term_s_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_57));
  term_t_57 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_38);
  ATprotect(&(term_u_57));
  term_u_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_57));
  term_v_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_57));
  term_w_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_57));
  term_x_57 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_57));
  term_y_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_58));
  term_e_58 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_58));
  term_f_58 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_58));
  term_g_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_58));
  term_h_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_58));
  term_p_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_58));
  term_q_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_58));
  term_r_58 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_58));
  term_s_58 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_60));
  term_a_60 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_60));
  term_b_60 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_60));
  term_t_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_61));
  term_a_61 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_61));
  term_f_61 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_61));
  term_q_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_61));
  term_s_61 = (ATerm) ATmakeAppl(sym__3, term_k_56, term_q_61, term_m_9);
  ATprotect(&(term_w_61));
  term_w_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_61));
  term_z_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_62));
  term_a_62 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_62));
  term_b_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_62));
  term_r_62 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_63));
  term_a_63 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_63));
  term_d_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_64));
  term_e_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_64));
  term_f_64 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_64));
  term_g_64 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_64));
  term_l_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_64));
  term_m_64 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_64));
  term_n_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_65));
  term_c_65 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm MissingDef_0_0 (ATerm);
ATerm MissingDefMod_0_0 (ATerm);
ATerm giving_up_0_0 (ATerm);
ATerm o_19 (ATerm);
ATerm DefinitionExists_0_0 (ATerm);
ATerm Rec_2_0 (ATerm a_97 (ATerm), ATerm b_97 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm x_98 (ATerm), ATerm y_98 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm s_98 (ATerm), ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm);
ATerm Let_2_0 (ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm y_108 (ATerm), ATerm z_108 (ATerm), ATerm a_109 (ATerm), ATerm);
ATerm u_19 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm split_2_0 (ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm);
ATerm d_20 (ATerm);
ATerm j_20 (ATerm);
ATerm k_20 (ATerm);
ATerm o_20 (ATerm);
ATerm t_20 (ATerm);
ATerm u_20 (ATerm);
ATerm v_20 (ATerm);
ATerm x_20 (ATerm);
ATerm free_vars2_4_0 (ATerm b_118 (ATerm), ATerm c_118 (ATerm), ATerm d_118 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm e_118 (ATerm), ATerm);
ATerm y_20 (ATerm);
ATerm z_20 (ATerm);
ATerm a_21 (ATerm);
ATerm b_21 (ATerm);
ATerm c_21 (ATerm);
ATerm j_21 (ATerm);
ATerm k_21 (ATerm);
ATerm t_21 (ATerm);
ATerm v_21 (ATerm);
ATerm w_21 (ATerm);
ATerm y_21 (ATerm);
ATerm a_22 (ATerm);
ATerm svars_arity_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm alltd_1_0 (ATerm l_111 (ATerm), ATerm);
ATerm b_22 (ATerm);
ATerm e_22 (ATerm);
ATerm f_22 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm c_109 (ATerm), ATerm d_109 (ATerm), ATerm);
ATerm VarDec_2_0 (ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm);
ATerm k_22 (ATerm);
ATerm l_22 (ATerm);
ATerm n_22 (ATerm);
ATerm p_22 (ATerm);
ATerm x_22 (ATerm);
ATerm y_22 (ATerm);
ATerm f_23 (ATerm);
ATerm g_23 (ATerm);
ATerm h_23 (ATerm);
ATerm k_23 (ATerm);
ATerm JoinDefs2_0_0 (ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm As_2_0 (ATerm k_93 (ATerm), ATerm l_93 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm j_97 (ATerm), ATerm k_97 (ATerm), ATerm l_97 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm d_93 (ATerm), ATerm e_93 (ATerm), ATerm);
ATerm Op_2_0 (ATerm z_92 (ATerm), ATerm a_93 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm h_105 (ATerm), ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm r_24 (ATerm);
ATerm s_24 (ATerm);
ATerm t_24 (ATerm);
ATerm v_24 (ATerm);
ATerm x_24 (ATerm);
ATerm a_25 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm b_25 (ATerm);
ATerm c_25 (ATerm);
ATerm d_25 (ATerm);
ATerm e_25 (ATerm);
ATerm f_25 (ATerm);
ATerm g_25 (ATerm);
ATerm h_25 (ATerm);
ATerm i_25 (ATerm);
ATerm LiftCallArgs_0_0 (ATerm);
ATerm l_28 (ATerm f_28, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm Var_1_0 (ATerm t_92 (ATerm), ATerm);
ATerm j_25 (ATerm);
ATerm k_25 (ATerm);
ATerm l_25 (ATerm);
ATerm p_25 (ATerm);
ATerm r_25 (ATerm);
ATerm s_25 (ATerm);
ATerm t_25 (ATerm);
ATerm u_25 (ATerm);
ATerm v_25 (ATerm);
ATerm z_25 (ATerm);
ATerm a_26 (ATerm);
ATerm c_26 (ATerm);
ATerm d_26 (ATerm);
ATerm e_26 (ATerm);
ATerm f_26 (ATerm);
ATerm g_26 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm repeat_1_0 (ATerm a_120 (ATerm), ATerm);
ATerm h_26 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm App_2_0 (ATerm h_93 (ATerm), ATerm i_93 (ATerm), ATerm);
ATerm Con_3_0 (ATerm t_93 (ATerm), ATerm u_93 (ATerm), ATerm v_93 (ATerm), ATerm);
ATerm i_26 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm Scope_2_0 (ATerm n_96 (ATerm), ATerm o_96 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm x_110 (ATerm), ATerm);
ATerm Rcon_0_0 (ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm t_109 (ATerm), ATerm);
ATerm p_26 (ATerm);
ATerm q_26 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm t_26 (ATerm);
ATerm u_26 (ATerm);
ATerm v_26 (ATerm);
ATerm tuple_unzip_1_0 (ATerm v_113 (ATerm), ATerm);
ATerm MkDistApplication_0_0 (ATerm);
ATerm w_26 (ATerm);
ATerm x_26 (ATerm);
ATerm copy_1_0 (ATerm a_124 (ATerm), ATerm);
ATerm MkThreadApplication_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm m_41 (ATerm m_35, ATerm n_35, ATerm o_35, ATerm p_35, ATerm);
ATerm n_41 (ATerm x_38, ATerm y_38, ATerm z_38, ATerm a_39, ATerm);
ATerm z_26 (ATerm);
ATerm a_27 (ATerm);
ATerm b_27 (ATerm);
ATerm DefineCongruence_0_0 (ATerm);
ATerm CongruenceDef_0_0 (ATerm);
ATerm c_27 (ATerm);
ATerm get_definition_0_0 (ATerm);
ATerm at_end_1_0 (ATerm q_106 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm f_44 (ATerm g_43, ATerm);
ATerm conc_0_0 (ATerm);
ATerm diff_1_0 (ATerm y_120 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm f_114 (ATerm), ATerm g_114 (ATerm), ATerm h_114 (ATerm), ATerm i_114 (ATerm), ATerm);
ATerm g_27 (ATerm);
ATerm h_27 (ATerm);
ATerm i_27 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm p_27 (ATerm);
ATerm a_28 (ATerm);
ATerm d_28 (ATerm);
ATerm e_28 (ATerm);
ATerm g_28 (ATerm);
ATerm k_28 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm GnNextChangeGraph_3_0 (ATerm b_136 (ATerm), ATerm c_136 (ATerm), ATerm d_136 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm p_120 (ATerm), ATerm q_120 (ATerm), ATerm);
ATerm for_3_0 (ATerm s_120 (ATerm), ATerm t_120 (ATerm), ATerm u_120 (ATerm), ATerm);
ATerm m_28 (ATerm);
ATerm o_28 (ATerm);
ATerm s_28 (ATerm);
ATerm t_28 (ATerm);
ATerm u_28 (ATerm);
ATerm v_28 (ATerm);
ATerm w_28 (ATerm);
ATerm extract_needed_defs_0_0 (ATerm);
ATerm assert_1_0 (ATerm k_136 (ATerm), ATerm);
ATerm Arities_0_0 (ATerm);
ATerm d_52 (ATerm n_51, ATerm);
ATerm Definitions_0_0 (ATerm);
ATerm x_28 (ATerm);
ATerm y_28 (ATerm);
ATerm z_28 (ATerm);
ATerm a_29 (ATerm);
ATerm b_29 (ATerm);
ATerm c_29 (ATerm);
ATerm d_29 (ATerm);
ATerm e_29 (ATerm);
ATerm f_29 (ATerm);
ATerm RegisterSDefT_0_0 (ATerm);
ATerm g_29 (ATerm);
ATerm h_29 (ATerm);
ATerm i_29 (ATerm);
ATerm j_29 (ATerm);
ATerm k_29 (ATerm);
ATerm l_29 (ATerm);
ATerm DefinitionName_0_0 (ATerm);
ATerm union_1_0 (ATerm d_121 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm n_123 (ATerm), ATerm o_123 (ATerm), ATerm p_123 (ATerm), ATerm);
ATerm n_29 (ATerm);
ATerm o_29 (ATerm);
ATerm p_29 (ATerm);
ATerm all_defs_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm v_91 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm r_91 (ATerm), ATerm s_91 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm a_92 (ATerm), ATerm);
ATerm _2_0 (ATerm c_87 (ATerm), ATerm d_87 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm r_128 (ATerm), ATerm);
ATerm t_29 (ATerm);
ATerm u_29 (ATerm);
ATerm v_29 (ATerm);
ATerm w_29 (ATerm);
ATerm x_29 (ATerm);
ATerm y_29 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm t_131 (ATerm), ATerm);
ATerm s_56 (ATerm m_56, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm z_29 (ATerm);
ATerm a_30 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm k_106 (ATerm), ATerm);
ATerm b_30 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm c_130 (ATerm), ATerm);
ATerm c_30 (ATerm);
ATerm d_30 (ATerm);
ATerm e_30 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm f_30 (ATerm);
ATerm g_30 (ATerm);
ATerm h_30 (ATerm);
ATerm i_30 (ATerm);
ATerm j_30 (ATerm);
ATerm k_30 (ATerm);
ATerm l_30 (ATerm);
ATerm m_30 (ATerm);
ATerm n_30 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm o_30 (ATerm);
ATerm p_30 (ATerm);
ATerm q_30 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm r_30 (ATerm);
ATerm s_30 (ATerm);
ATerm t_30 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm l_123 (ATerm), ATerm m_123 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm y_30 (ATerm);
ATerm z_30 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm b_130 (ATerm), ATerm);
ATerm b_31 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm c_31 (ATerm);
ATerm need_help_1_0 (ATerm r_132 (ATerm), ATerm);
ATerm map_1_0 (ATerm a_106 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm s_100 (ATerm), ATerm);
ATerm g_31 (ATerm);
ATerm l_31 (ATerm);
ATerm m_31 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm t_100 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm n_31 (ATerm);
ATerm o_31 (ATerm);
ATerm p_31 (ATerm);
ATerm q_31 (ATerm);
ATerm z_31 (ATerm);
ATerm a_32 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm b_32 (ATerm);
ATerm parse_options_p__1_0 (ATerm u_134 (ATerm), ATerm);
ATerm i_32 (ATerm);
ATerm j_32 (ATerm);
ATerm k_32 (ATerm);
ATerm l_32 (ATerm);
ATerm parse_options_1_0 (ATerm t_134 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm t_132 (ATerm), ATerm u_132 (ATerm), ATerm v_132 (ATerm), ATerm w_132 (ATerm), ATerm);
ATerm v_32 (ATerm);
ATerm j_33 (ATerm);
ATerm k_33 (ATerm);
ATerm o_33 (ATerm);
ATerm p_33 (ATerm);
ATerm iowrap_3_0 (ATerm c_132 (ATerm), ATerm d_132 (ATerm), ATerm e_132 (ATerm), ATerm);
ATerm r_33 (ATerm);
ATerm s_33 (ATerm);
ATerm v_33 (ATerm);
ATerm a_34 (ATerm);
ATerm e_34 (ATerm);
ATerm r_34 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm l_0 = NULL,o_0 = NULL,q_0 = NULL,r_0 = NULL,s_0 = NULL,u_0 = NULL,v_0 = NULL,w_0 = NULL;
  l_0 = t;
  t = term_m_9;
  t = whoami_0_0(t);
  o_0 = t;
  s_0 = t;
  t = term_h_33;
  q_0 = t;
  t = s_0;
  u_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_34), o_0), term_w_34);
  r_0 = t;
  t = SSL_printnl(q_0, r_0);
  w_0 = t;
  t = term_y_34;
  v_0 = t;
  t = SSL_exit(v_0);
  t = l_0;
  return(t);
}
ATerm MissingDef_0_0 (ATerm t)
{
  ATerm p_0 = NULL,t_0 = NULL,a_1 = NULL,b_1 = NULL,c_1 = NULL,d_1 = NULL;
  if(match_cons(t, sym__2))
    {
      p_0 = ATgetArgument(t, 0);
      t_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  c_1 = t;
  t = term_h_33;
  a_1 = t;
  t = c_1;
  d_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_35), t_0), term_c_35), p_0), term_b_35);
  b_1 = t;
  t = SSL_printnl(a_1, b_1);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_35), t_0), term_c_35), p_0), term_b_35);
  return(t);
}
ATerm MissingDefMod_0_0 (ATerm t)
{
  ATerm x_0 = NULL,y_0 = NULL,z_0 = NULL,e_1 = NULL,h_1 = NULL,i_1 = NULL,m_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_35 = ATgetArgument(t, 0);
      if(match_cons(e_35, sym_Mod_2))
        {
          x_0 = ATgetArgument(e_35, 0);
          y_0 = ATgetArgument(e_35, 1);
        }
      else
        _fail(t);
      z_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  i_1 = t;
  t = term_h_33;
  e_1 = t;
  t = i_1;
  m_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_35), z_0), term_c_35), y_0), term_f_35), x_0), term_b_35);
  h_1 = t;
  t = SSL_printnl(e_1, h_1);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_35), z_0), term_c_35), y_0), term_f_35), x_0), term_b_35);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL;
  p_1 = t;
  t = term_h_33;
  n_1 = t;
  t = p_1;
  q_1 = t;
  t = (ATerm) ATinsert(ATempty, term_g_35);
  o_1 = t;
  t = SSL_printnl(n_1, o_1);
  s_1 = t;
  t = term_y_34;
  r_1 = t;
  t = SSL_exit(r_1);
  t = (ATerm) ATinsert(ATempty, term_g_35);
  return(t);
}
ATerm o_19 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_35 = ATgetArgument(t, 0);
      if(((ATgetType(h_35) != AT_INT) || (ATgetInt((ATermInt) h_35) != 0)))
        _fail(t);
      {
        ATerm i_35 = ATgetArgument(t, 1);
        if(((ATgetType(i_35) != AT_INT) || (ATgetInt((ATermInt) i_35) != 0)))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DefinitionExists_0_0 (ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL;
  w_1 = t;
  if(match_cons(t, sym__2))
    {
      x_1 = ATgetArgument(t, 0);
      y_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_1;
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
    ATerm j_35 = t;
    int k_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_1 = NULL,u_1 = NULL,v_1 = NULL,b_2 = NULL;
        t = x_1;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm l_35 = ATgetFirst((ATermList) t);
            ATerm q_35 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(q_35) == AT_LIST) && !(ATisEmpty(q_35))))
              {
                ATerm r_35 = ATgetFirst((ATermList) q_35);
                ATerm s_35 = (ATerm) ATgetNext((ATermList) q_35);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm d_36 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(o_19, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_36;
            }
          v_1 = t;
          t = term_h_33;
          t_1 = t;
          t = v_1;
          b_2 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, x_1), term_e_36);
          u_1 = t;
          t = SSL_printnl(t_1, u_1);
          t = (ATerm) ATinsert(ATinsert(ATempty, x_1), term_e_36);
          t = giving_up_0_0(t);
        }
        ;
        LocalPopChoice(k_35);
      }
    else
      {
        t = j_35;
        {
          ATerm f_1 = NULL,g_1 = NULL;
          t = x_1;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm g_36 = ATgetFirst((ATermList) t);
              if(match_cons(g_36, sym__2))
                {
                  f_1 = ATgetArgument(g_36, 0);
                  g_1 = ATgetArgument(g_36, 1);
                }
              else
                _fail(t);
              {
                ATerm k_36 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(k_36) != AT_LIST) || !(ATisEmpty(k_36))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, x_1, (ATerm) ATmakeAppl(sym__2, f_1, g_1));
          t = Definitions_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, x_1, (ATerm) ATmakeAppl(sym__2, f_1, g_1));
        }
      }
  }
  return(t);
}
ATerm Rec_2_0 (ATerm a_97 (ATerm), ATerm b_97 (ATerm), ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,c_2 = NULL,j_2 = NULL;
  i_2 = t;
  if(match_cons(t, sym_Rec_2))
    {
      e_2 = ATgetArgument(t, 0);
      f_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_2);
  d_2 = t;
  t = e_2;
  t = a_97(t);
  g_2 = t;
  t = f_2;
  t = b_97(t);
  h_2 = t;
  j_2 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, g_2, h_2);
  c_2 = t;
  t = SSLsetAnnotations(c_2, d_2);
  return(t);
}
ATerm SDefT_4_0 (ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm x_98 (ATerm), ATerm y_98 (ATerm), ATerm t)
{
  ATerm m_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,k_2 = NULL,l_2 = NULL;
  w_2 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      o_2 = ATgetArgument(t, 0);
      p_2 = ATgetArgument(t, 1);
      q_2 = ATgetArgument(t, 2);
      r_2 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_2);
  m_2 = t;
  t = o_2;
  t = v_98(t);
  s_2 = t;
  t = p_2;
  t = w_98(t);
  t_2 = t;
  t = q_2;
  t = x_98(t);
  u_2 = t;
  t = r_2;
  t = y_98(t);
  v_2 = t;
  l_2 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, s_2, t_2, u_2, v_2);
  k_2 = t;
  t = SSLsetAnnotations(k_2, m_2);
  return(t);
}
ATerm SDef_3_0 (ATerm s_98 (ATerm), ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,n_2 = NULL,x_2 = NULL;
  g_3 = t;
  if(match_cons(t, sym_SDef_3))
    {
      a_3 = ATgetArgument(t, 0);
      b_3 = ATgetArgument(t, 1);
      c_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_3);
  z_2 = t;
  t = a_3;
  t = s_98(t);
  d_3 = t;
  t = b_3;
  t = t_98(t);
  e_3 = t;
  t = c_3;
  t = u_98(t);
  f_3 = t;
  x_2 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, d_3, e_3, f_3);
  n_2 = t;
  t = SSLsetAnnotations(n_2, z_2);
  return(t);
}
ATerm Let_2_0 (ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,y_2 = NULL,h_3 = NULL;
  o_3 = t;
  if(match_cons(t, sym_Let_2))
    {
      k_3 = ATgetArgument(t, 0);
      l_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_3);
  j_3 = t;
  t = k_3;
  t = d_96(t);
  m_3 = t;
  t = l_3;
  t = e_96(t);
  n_3 = t;
  h_3 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, m_3, n_3);
  y_2 = t;
  t = SSLsetAnnotations(y_2, j_3);
  return(t);
}
ATerm sboundin_3_0 (ATerm y_108 (ATerm), ATerm z_108 (ATerm), ATerm a_109 (ATerm), ATerm t)
{
  ATerm l_36 = t;
  int n_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(y_108, y_108, t);
      ;
      LocalPopChoice(n_36);
    }
  else
    {
      t = l_36;
      {
        ATerm o_36 = t;
        int p_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(a_109, a_109, y_108, t);
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
                  t = SDefT_4_0(a_109, a_109, a_109, y_108, t);
                  ;
                  LocalPopChoice(r_36);
                }
              else
                {
                  t = q_36;
                  t = Rec_2_0(a_109, y_108, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm u_19 (ATerm t)
{
  ATerm u_3 = NULL;
  ATerm s_36 = t;
  int t_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          u_3 = ATgetArgument(t, 0);
          {
            ATerm u_36 = ATgetArgument(t, 1);
          }
          {
            ATerm v_36 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_36);
      t = u_3;
    }
  else
    {
      t = s_36;
      if(match_cons(t, sym_SDefT_4))
        {
          u_3 = ATgetArgument(t, 0);
          {
            ATerm w_36 = ATgetArgument(t, 1);
          }
          {
            ATerm x_36 = ATgetArgument(t, 2);
          }
          {
            ATerm y_36 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = u_3;
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm s_3 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      s_3 = ATgetArgument(t, 0);
      {
        ATerm z_36 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = s_3;
  t = map_1_0(u_19, t);
  return(t);
}
ATerm split_2_0 (ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm t)
{
  ATerm n_57 = NULL,o_57 = NULL,p_57 = NULL;
  n_57 = t;
  t = f_113(t);
  o_57 = t;
  t = n_57;
  t = g_113(t);
  p_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_57, p_57);
  return(t);
}
ATerm d_20 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_20 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_20 (ATerm t)
{
  t = union_1_0(o_20, t);
  return(t);
}
ATerm o_20 (ATerm t)
{
  ATerm q_4 = NULL;
  if(match_cons(t, sym__2))
    {
      q_4 = ATgetArgument(t, 0);
      if((q_4 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm t_20 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_20 (ATerm t)
{
  t = union_1_0(v_20, t);
  return(t);
}
ATerm v_20 (ATerm t)
{
  ATerm x_4 = NULL;
  if(match_cons(t, sym__2))
    {
      x_4 = ATgetArgument(t, 0);
      if((x_4 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm x_20 (ATerm t)
{
  ATerm k_4 = NULL;
  if(match_cons(t, sym__2))
    {
      k_4 = ATgetArgument(t, 0);
      if((k_4 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm b_118 (ATerm), ATerm c_118 (ATerm), ATerm d_118 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm e_118 (ATerm), ATerm t)
{
  ATerm m_4 (ATerm t)
  {
    ATerm j_1 = NULL,k_1 = NULL,l_1 = NULL;
    j_1 = t;
    {
      ATerm a_37 = t;
      int b_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_118(t);
          ;
          LocalPopChoice(b_37);
        }
      else
        {
          t = a_37;
          t = (ATerm) ATempty;
        }
      k_1 = t;
      t = j_1;
      {
        ATerm c_37 = t;
        int d_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_3 = NULL,j_4 = NULL,l_4 = NULL;
            t = j_1;
            t = c_118(t);
            r_3 = t;
            t = j_1;
            {
              ATerm a_20 (ATerm t)
              {
                ATerm h_20 (ATerm t)
                {
                  t = r_3;
                  return(t);
                }
                t = split_2_0(m_4, h_20, t);
                t = diff_1_0(e_118, t);
                return(t);
              }
              t = d_118(a_20, m_4, d_20, t);
              j_4 = t;
              t = SSL_explode_term(j_4);
              if(match_cons(t, sym__2))
                {
                  ATerm e_37 = ATgetArgument(t, 0);
                  l_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = l_4;
              t = foldr_3_0(j_20, k_20, _id, t);
            }
            ;
            LocalPopChoice(d_37);
          }
        else
          {
            t = c_37;
            {
              ATerm s_4 = NULL;
              t = SSL_explode_term(j_1);
              if(match_cons(t, sym__2))
                {
                  ATerm g_37 = ATgetArgument(t, 0);
                  s_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = s_4;
              t = foldr_3_0(t_20, u_20, m_4, t);
            }
          }
        l_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_1, l_1);
        t = union_1_0(x_20, t);
      }
    }
    return(t);
  }
  t = m_4(t);
  return(t);
}
ATerm y_20 (ATerm t)
{
  ATerm t_4 = NULL,a_5 = NULL,g_5 = NULL,h_5 = NULL,m_5 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm h_37 = ATgetArgument(t, 0);
      if(match_cons(h_37, sym_SVar_1))
        {
          t_4 = ATgetArgument(h_37, 0);
        }
      else
        _fail(t);
      a_5 = ATgetArgument(t, 1);
      g_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_5;
  t = foldr_3_0(b_21, c_21, j_21, t);
  h_5 = t;
  t = g_5;
  t = foldr_3_0(k_21, t_21, v_21, t);
  m_5 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_4, (ATerm) ATmakeAppl(sym__2, h_5, m_5)));
  return(t);
}
ATerm z_20 (ATerm t)
{
  ATerm i_37 = t;
  int j_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind1_0_0(t);
      ;
      LocalPopChoice(j_37);
    }
  else
    {
      t = i_37;
      {
        ATerm y_5 = NULL,a_6 = NULL;
        ATerm k_37 = t;
        int l_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDef_3))
              {
                ATerm m_37 = ATgetArgument(t, 0);
                a_6 = ATgetArgument(t, 1);
                {
                  ATerm n_37 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(l_37);
            t = a_6;
            t = map_1_0(w_21, t);
          }
        else
          {
            t = k_37;
            {
              ATerm o_37 = t;
              int p_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      y_5 = ATgetArgument(t, 0);
                      {
                        ATerm q_37 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(p_37);
                  t = (ATerm) ATinsert(ATempty, y_5);
                }
              else
                {
                  t = o_37;
                  {
                    ATerm r_37 = t;
                    int s_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm t_37 = ATgetArgument(t, 0);
                            a_6 = ATgetArgument(t, 1);
                            {
                              ATerm u_37 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm v_37 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(s_37);
                        t = a_6;
                        t = map_1_0(y_21, t);
                      }
                    else
                      {
                        t = r_37;
                        if(match_cons(t, sym_RDefT_4))
                          {
                            ATerm w_37 = ATgetArgument(t, 0);
                            a_6 = ATgetArgument(t, 1);
                            {
                              ATerm x_37 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm y_37 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = a_6;
                        t = map_1_0(a_22, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm a_21 (ATerm t)
{
  ATerm f_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_37 = ATgetArgument(t, 0);
      if(match_cons(z_37, sym__2))
        {
          f_7 = ATgetArgument(z_37, 0);
          {
            ATerm a_38 = ATgetArgument(z_37, 1);
          }
        }
      else
        _fail(t);
      if((f_7 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm b_21 (ATerm t)
{
  t = term_b_38;
  return(t);
}
ATerm c_21 (ATerm t)
{
  ATerm q_5 = NULL,t_5 = NULL;
  if(match_cons(t, sym__2))
    {
      q_5 = ATgetArgument(t, 0);
      t_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_38 = t;
    int d_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(q_5, t_5);
        ;
        LocalPopChoice(d_38);
      }
    else
      {
        t = c_38;
        t = SSL_addr(q_5, t_5);
      }
  }
  return(t);
}
ATerm j_21 (ATerm t)
{
  t = term_y_34;
  return(t);
}
ATerm k_21 (ATerm t)
{
  t = term_b_38;
  return(t);
}
ATerm t_21 (ATerm t)
{
  ATerm u_5 = NULL,w_5 = NULL;
  if(match_cons(t, sym__2))
    {
      u_5 = ATgetArgument(t, 0);
      w_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_38 = t;
    int f_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(u_5, w_5);
        ;
        LocalPopChoice(f_38);
      }
    else
      {
        t = e_38;
        t = SSL_addr(u_5, w_5);
      }
  }
  return(t);
}
ATerm v_21 (ATerm t)
{
  t = term_y_34;
  return(t);
}
ATerm w_21 (ATerm t)
{
  ATerm i_6 = NULL;
  ATerm g_38 = t;
  int h_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_6 = ATgetArgument(t, 0);
          {
            ATerm i_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_38);
      t = i_6;
    }
  else
    {
      t = g_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_6;
    }
  return(t);
}
ATerm y_21 (ATerm t)
{
  ATerm t_6 = NULL;
  ATerm j_38 = t;
  int k_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_6 = ATgetArgument(t, 0);
          {
            ATerm m_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_38);
      t = t_6;
    }
  else
    {
      t = j_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_6;
    }
  return(t);
}
ATerm a_22 (ATerm t)
{
  ATerm c_7 = NULL;
  ATerm n_38 = t;
  int o_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_7 = ATgetArgument(t, 0);
          {
            ATerm p_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_38);
      t = c_7;
    }
  else
    {
      t = n_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_7;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(y_20, z_20, sboundin_3_0, a_21, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm d_8 = NULL,e_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,p_8 = NULL;
  if(match_cons(t, sym__2))
    {
      j_8 = ATgetArgument(t, 0);
      k_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_8;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_8 = ATgetFirst((ATermList) t);
      p_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_8;
  if(match_cons(t, sym__2))
    {
      d_8 = ATgetArgument(t, 0);
      e_8 = ATgetArgument(t, 1);
      {
        ATerm q_38 = t;
        int r_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_8;
            if((j_8 != t))
              {
                _fail(t);
              }
            t = e_8;
            ;
            LocalPopChoice(r_38);
          }
        else
          {
            t = q_38;
            t = (ATerm) ATmakeAppl(sym__2, j_8, p_8);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, j_8, p_8);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm l_111 (ATerm), ATerm t)
{
  ATerm s_9 (ATerm t)
  {
    ATerm s_38 = t;
    int t_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_111(t);
        ;
        LocalPopChoice(t_38);
      }
    else
      {
        t = s_38;
        t = SRTS_all(s_9, t);
      }
    return(t);
  }
  t = s_9(t);
  return(t);
}
ATerm b_22 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_38 = ATgetArgument(t, 0);
      if(((ATgetType(u_38) != AT_LIST) || !(ATisEmpty(u_38))))
        _fail(t);
      {
        ATerm v_38 = ATgetArgument(t, 1);
        if(((ATgetType(v_38) != AT_LIST) || !(ATisEmpty(v_38))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_22 (ATerm t)
{
  ATerm u_10 = NULL,g_11 = NULL,t_11 = NULL,v_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_38 = ATgetArgument(t, 0);
      if(((ATgetType(w_38) == AT_LIST) && !(ATisEmpty(w_38))))
        {
          u_10 = ATgetFirst((ATermList) w_38);
          t_11 = (ATerm) ATgetNext((ATermList) w_38);
        }
      else
        _fail(t);
      {
        ATerm b_39 = ATgetArgument(t, 1);
        if(((ATgetType(b_39) == AT_LIST) && !(ATisEmpty(b_39))))
          {
            g_11 = ATgetFirst((ATermList) b_39);
            v_11 = (ATerm) ATgetNext((ATermList) b_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_10, g_11), (ATerm) ATmakeAppl(sym__2, t_11, v_11));
  return(t);
}
ATerm f_22 (ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL;
  if(match_cons(t, sym__2))
    {
      w_11 = ATgetArgument(t, 0);
      x_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_11), w_11);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm v_9 = NULL,d_10 = NULL,f_10 = NULL,g_10 = NULL;
  v_9 = t;
  {
    ATerm c_39 = t;
    int d_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_39 = ATgetArgument(t, 0);
            ATerm f_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(d_39);
        t = v_9;
      }
    else
      {
        t = c_39;
        {
          ATerm n_10 = NULL;
          if(match_cons(t, sym__3))
            {
              d_10 = ATgetArgument(t, 0);
              f_10 = ATgetArgument(t, 1);
              g_10 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, d_10, f_10);
          t = genzip_4_0(b_22, e_22, f_22, _id, t);
          n_10 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_10, g_10);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm c_109 (ATerm), ATerm d_109 (ATerm), ATerm t)
{
  ATerm y_11 = NULL,e_12 = NULL;
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      e_12 = ATgetArgument(t, 0);
      y_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_11;
  {
    ATerm j_22 (ATerm t)
    {
      ATerm k_5 = NULL;
      t = c_109(t);
      k_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_5, e_12);
      t = lookup_0_0(t);
      t = d_109(t);
      return(t);
    }
    t = alltd_1_0(j_22, t);
  }
  return(t);
}
ATerm VarDec_2_0 (ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm t)
{
  ATerm j_12 = NULL,m_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,i_3 = NULL,p_3 = NULL;
  r_12 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      m_12 = ATgetArgument(t, 0);
      o_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_12);
  j_12 = t;
  t = m_12;
  t = o_98(t);
  p_12 = t;
  t = o_12;
  t = p_98(t);
  q_12 = t;
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, p_12, q_12);
  i_3 = t;
  t = SSLsetAnnotations(i_3, j_12);
  return(t);
}
ATerm k_22 (ATerm t)
{
  t = VarDec_2_0(new_0_0, _id, t);
  return(t);
}
ATerm l_22 (ATerm t)
{
  t = VarDec_2_0(new_0_0, _id, t);
  return(t);
}
ATerm n_22 (ATerm t)
{
  ATerm h_17 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      h_17 = ATgetArgument(t, 0);
      {
        ATerm g_39 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_17), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
ATerm p_22 (ATerm t)
{
  ATerm i_17 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      i_17 = ATgetArgument(t, 0);
      {
        ATerm h_39 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, i_17);
  return(t);
}
ATerm x_22 (ATerm t)
{
  ATerm w_17 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      w_17 = ATgetArgument(t, 0);
      {
        ATerm i_39 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = w_17;
  return(t);
}
ATerm y_22 (ATerm t)
{
  ATerm z_17 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      z_17 = ATgetArgument(t, 0);
      {
        ATerm j_39 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = z_17;
  return(t);
}
ATerm f_23 (ATerm t)
{
  ATerm a_18 = NULL,c_18 = NULL,h_18 = NULL,i_18 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      c_18 = ATgetArgument(t, 0);
      i_18 = ATgetArgument(t, 1);
      a_18 = ATgetArgument(t, 2);
      t = c_18;
      if(match_cons(t, sym_SVar_1))
        {
          h_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_18;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_18;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_18;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          c_18 = ATgetArgument(t, 0);
          i_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = c_18;
      if(match_cons(t, sym_SVar_1))
        {
          h_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_18;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_18;
    }
  return(t);
}
ATerm g_23 (ATerm t)
{
  ATerm n_18 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_18;
  return(t);
}
ATerm h_23 (ATerm t)
{
  t = term_k_39;
  return(t);
}
ATerm k_23 (ATerm t)
{
  ATerm v_5 = NULL,p_6 = NULL,a_7 = NULL;
  v_5 = t;
  t = SSL_explode_term(v_5);
  if(match_cons(t, sym__2))
    {
      ATerm l_39 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_39) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_39 = ATgetArgument(t, 1);
        if(((ATgetType(m_39) == AT_LIST) && !(ATisEmpty(m_39))))
          {
            p_6 = ATgetFirst((ATermList) m_39);
            {
              ATerm n_39 = (ATerm) ATgetNext((ATermList) m_39);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(v_5);
  if(match_cons(t, sym__2))
    {
      ATerm o_39 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_39) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_39 = ATgetArgument(t, 1);
        if(((ATgetType(p_39) == AT_LIST) && !(ATisEmpty(p_39))))
          {
            ATerm q_39 = ATgetFirst((ATermList) p_39);
            ATerm r_39 = (ATerm) ATgetNext((ATermList) p_39);
            if(((ATgetType(r_39) == AT_LIST) && !(ATisEmpty(r_39))))
              {
                a_7 = ATgetFirst((ATermList) r_39);
                {
                  ATerm s_39 = (ATerm) ATgetNext((ATermList) r_39);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, p_6, a_7);
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm v_14 = NULL,f_15 = NULL,q_15 = NULL,d_16 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,g_17 = NULL;
  v_14 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_39 = ATgetFirst((ATermList) t);
      if(match_cons(t_39, sym_SDefT_4))
        {
          f_15 = ATgetArgument(t_39, 0);
          q_15 = ATgetArgument(t_39, 1);
          d_16 = ATgetArgument(t_39, 2);
          {
            ATerm w_39 = ATgetArgument(t_39, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm u_39 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_15;
  t = map_1_0(k_22, t);
  b_17 = t;
  t = d_16;
  t = map_1_0(l_22, t);
  c_17 = t;
  t = b_17;
  t = map_1_0(n_22, t);
  d_17 = t;
  t = c_17;
  t = map_1_0(p_22, t);
  e_17 = t;
  t = v_14;
  {
    ATerm q_22 (ATerm t)
    {
      ATerm j_17 = NULL,m_17 = NULL,n_17 = NULL,p_17 = NULL,u_17 = NULL,v_17 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm c_40 = ATgetArgument(t, 0);
          j_17 = ATgetArgument(t, 1);
          m_17 = ATgetArgument(t, 2);
          n_17 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = m_17;
      t = map_1_0(x_22, t);
      p_17 = t;
      t = j_17;
      t = map_1_0(y_22, t);
      u_17 = t;
      t = (ATerm) ATmakeAppl(sym__3, u_17, d_17, n_17);
      t = substitute_2_0(f_23, _id, t);
      v_17 = t;
      t = (ATerm) ATmakeAppl(sym__3, p_17, e_17, v_17);
      t = substitute_2_0(g_23, _id, t);
      return(t);
    }
    t = map_1_0(q_22, t);
    t = foldr_2_0(h_23, k_23, t);
    g_17 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, f_15, b_17, c_17, g_17);
  }
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL;
  a_19 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      b_19 = ATgetArgument(t, 0);
      z_18 = ATgetArgument(t, 1);
      {
        ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL;
        t = a_19;
        t = new_0_0(t);
        i_19 = t;
        t = new_0_0(t);
        j_19 = t;
        t = new_0_0(t);
        k_19 = t;
        t = new_0_0(t);
        l_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_19), k_19), j_19), i_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, i_19), (ATerm) ATmakeAppl(sym_Var_1, k_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, b_19, (ATerm)ATmakeAppl(sym_Var_1, i_19), (ATerm) ATmakeAppl(sym_Var_1, j_19)), (ATerm) ATmakeAppl(sym_BAM_3, z_18, (ATerm)ATmakeAppl(sym_Var_1, k_19), (ATerm) ATmakeAppl(sym_Var_1, l_19)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_d_40, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_19)), (ATerm) ATmakeAppl(sym_Var_1, j_19))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          b_19 = ATgetArgument(t, 0);
          {
            ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL;
            t = a_19;
            t = new_0_0(t);
            q_19 = t;
            t = b_19;
            {
              ATerm p_23 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((r_19 != NULL) && (r_19 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      r_19 = ATgetArgument(t, 0);
                    if(((s_19 != NULL) && (s_19 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      s_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, q_19);
                return(t);
              }
              t = oncetd_1_0(p_23, t);
              t_19 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_d_40, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_19)), not_null(r_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_19)), (ATerm) ATmakeAppl(sym_Build_1, t_19))));
            }
          }
        }
      else
        {
          ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              b_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_19;
          t = new_0_0(t);
          v_19 = t;
          t = new_0_0(t);
          w_19 = t;
          t = b_19;
          {
            ATerm r_23 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((x_19 != NULL) && (x_19 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    x_19 = ATgetArgument(t, 0);
                  if(((y_19 != NULL) && (y_19 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    y_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, v_19);
              return(t);
            }
            t = oncetd_1_0(r_23, t);
            z_19 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_19), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, w_19)), (ATerm) ATmakeAppl(sym_PrimT_3, term_e_40, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, w_19))))), (ATerm)ATmakeAppl(sym_Var_1, v_19), (ATerm) ATmakeAppl(sym_Op_2, term_g_40, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_19)), not_null(x_19)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL;
  b_20 = t;
  if(match_cons(t, sym_Match_1))
    {
      c_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_40 = t;
    int j_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL,i_20 = NULL;
        t = b_20;
        t = new_0_0(t);
        e_20 = t;
        t = c_20;
        {
          ATerm s_23 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((g_20 != NULL) && (g_20 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_20 = ATgetArgument(t, 0);
                if(((f_20 != NULL) && (f_20 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  f_20 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, e_20), not_null(g_20));
            return(t);
          }
          t = pat_td_1_0(s_23, t);
          i_20 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, i_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_k_40, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, e_20))), (ATerm) ATmakeAppl(sym_Match_1, not_null(f_20))))));
        }
        ;
        LocalPopChoice(j_40);
      }
    else
      {
        t = h_40;
        {
          ATerm l_40 = t;
          int m_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL;
              t = b_20;
              t = new_0_0(t);
              l_20 = t;
              t = c_20;
              {
                ATerm v_23 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((m_20 != NULL) && (m_20 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        m_20 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, l_20);
                  return(t);
                }
                t = pat_td_1_0(v_23, t);
                n_20 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, l_20)), not_null(m_20))));
              }
              ;
              LocalPopChoice(m_40);
            }
          else
            {
              t = l_40;
              {
                ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL;
                t = b_20;
                t = new_0_0(t);
                p_20 = t;
                t = c_20;
                {
                  ATerm w_23 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((q_20 != NULL) && (q_20 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          q_20 = ATgetArgument(t, 0);
                        if(((r_20 != NULL) && (r_20 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          r_20 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, p_20);
                    return(t);
                  }
                  t = pat_td_1_0(w_23, t);
                  s_20 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, s_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, p_20)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(r_20)), not_null(q_20)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm As_2_0 (ATerm k_93 (ATerm), ATerm l_93 (ATerm), ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,q_3 = NULL,t_3 = NULL;
  i_21 = t;
  if(match_cons(t, sym_As_2))
    {
      e_21 = ATgetArgument(t, 0);
      f_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_21);
  d_21 = t;
  t = e_21;
  t = k_93(t);
  g_21 = t;
  t = f_21;
  t = l_93(t);
  h_21 = t;
  t_3 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, g_21, h_21);
  q_3 = t;
  t = SSLsetAnnotations(q_3, d_21);
  return(t);
}
ATerm CallT_3_0 (ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,v_3 = NULL,w_3 = NULL;
  s_21 = t;
  if(match_cons(t, sym_CallT_3))
    {
      m_21 = ATgetArgument(t, 0);
      n_21 = ATgetArgument(t, 1);
      o_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_21);
  l_21 = t;
  t = m_21;
  t = h_96(t);
  p_21 = t;
  t = n_21;
  t = i_96(t);
  q_21 = t;
  t = o_21;
  t = j_96(t);
  r_21 = t;
  w_3 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, p_21, q_21, r_21);
  v_3 = t;
  t = SSLsetAnnotations(v_3, l_21);
  return(t);
}
ATerm PrimT_3_0 (ATerm j_97 (ATerm), ATerm k_97 (ATerm), ATerm l_97 (ATerm), ATerm t)
{
  ATerm z_21 = NULL,c_22 = NULL,d_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,m_22 = NULL,o_22 = NULL,x_3 = NULL,y_3 = NULL;
  o_22 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      c_22 = ATgetArgument(t, 0);
      d_22 = ATgetArgument(t, 1);
      g_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_22);
  z_21 = t;
  t = c_22;
  t = j_97(t);
  h_22 = t;
  t = d_22;
  t = k_97(t);
  i_22 = t;
  t = g_22;
  t = l_97(t);
  m_22 = t;
  y_3 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, h_22, i_22, m_22);
  x_3 = t;
  t = SSLsetAnnotations(x_3, z_21);
  return(t);
}
ATerm Explode_2_0 (ATerm d_93 (ATerm), ATerm e_93 (ATerm), ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,z_3 = NULL,a_4 = NULL;
  w_22 = t;
  if(match_cons(t, sym_Explode_2))
    {
      s_22 = ATgetArgument(t, 0);
      t_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_22);
  r_22 = t;
  t = s_22;
  t = d_93(t);
  u_22 = t;
  t = t_22;
  t = e_93(t);
  v_22 = t;
  a_4 = t;
  t = (ATerm) ATmakeAppl(sym_Explode_2, u_22, v_22);
  z_3 = t;
  t = SSLsetAnnotations(z_3, r_22);
  return(t);
}
ATerm Op_2_0 (ATerm z_92 (ATerm), ATerm a_93 (ATerm), ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,b_4 = NULL,c_4 = NULL;
  e_23 = t;
  if(match_cons(t, sym_Op_2))
    {
      a_23 = ATgetArgument(t, 0);
      b_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_23);
  z_22 = t;
  t = a_23;
  t = z_92(t);
  c_23 = t;
  t = b_23;
  t = a_93(t);
  d_23 = t;
  c_4 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, c_23, d_23);
  b_4 = t;
  t = SSLsetAnnotations(b_4, z_22);
  return(t);
}
ATerm pat_td_1_0 (ATerm h_105 (ATerm), ATerm t)
{
  ATerm n_40 = t;
  int p_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_105(t);
      ;
      LocalPopChoice(p_40);
    }
  else
    {
      t = n_40;
      {
        ATerm q_40 = t;
        int u_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_23 (ATerm t)
            {
              ATerm y_23 (ATerm t)
              {
                t = pat_td_1_0(h_105, t);
                return(t);
              }
              t = fetch_1_0(y_23, t);
              return(t);
            }
            t = Op_2_0(_id, x_23, t);
            ;
            LocalPopChoice(u_40);
          }
        else
          {
            t = q_40;
            {
              ATerm v_40 = t;
              int x_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_24 (ATerm t)
                  {
                    t = pat_td_1_0(h_105, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, d_24, t);
                  ;
                  LocalPopChoice(x_40);
                }
              else
                {
                  t = v_40;
                  {
                    ATerm y_40 = t;
                    int a_41 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm e_24 (ATerm t)
                        {
                          t = pat_td_1_0(h_105, t);
                          return(t);
                        }
                        t = Explode_2_0(e_24, _id, t);
                        ;
                        LocalPopChoice(a_41);
                      }
                    else
                      {
                        t = y_40;
                        {
                          ATerm b_41 = t;
                          int c_41 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm f_24 (ATerm t)
                              {
                                ATerm g_24 (ATerm t)
                                {
                                  t = pat_td_1_0(h_105, t);
                                  return(t);
                                }
                                t = fetch_1_0(g_24, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, f_24, t);
                              ;
                              LocalPopChoice(c_41);
                            }
                          else
                            {
                              t = b_41;
                              {
                                ATerm d_41 = t;
                                int e_41 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm h_24 (ATerm t)
                                    {
                                      ATerm i_24 (ATerm t)
                                      {
                                        t = pat_td_1_0(h_105, t);
                                        return(t);
                                      }
                                      t = fetch_1_0(i_24, t);
                                      return(t);
                                    }
                                    t = CallT_3_0(_id, _id, h_24, t);
                                    ;
                                    LocalPopChoice(e_41);
                                  }
                                else
                                  {
                                    t = d_41;
                                    {
                                      ATerm j_24 (ATerm t)
                                      {
                                        t = pat_td_1_0(h_105, t);
                                        return(t);
                                      }
                                      t = As_2_0(_id, j_24, t);
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
  ATerm i_23 = NULL,j_23 = NULL;
  i_23 = t;
  if(match_cons(t, sym_Build_1))
    {
      j_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_41 = t;
    int g_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL;
        t = i_23;
        t = new_0_0(t);
        l_23 = t;
        t = j_23;
        {
          ATerm k_24 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
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
          t = pat_td_1_0(k_24, t);
          o_23 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_h_41, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_23)), not_null(m_23))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, l_23)))), (ATerm) ATmakeAppl(sym_Build_1, o_23)));
        }
        ;
        LocalPopChoice(g_41);
      }
    else
      {
        t = f_41;
        {
          ATerm i_41 = t;
          int j_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_23 = NULL,t_23 = NULL,u_23 = NULL;
              t = i_23;
              t = new_0_0(t);
              q_23 = t;
              t = j_23;
              {
                ATerm l_24 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((t_23 != NULL) && (t_23 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        t_23 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, q_23);
                  return(t);
                }
                t = pat_td_1_0(l_24, t);
                u_23 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_23), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_23)))), (ATerm) ATmakeAppl(sym_Build_1, u_23)));
              }
              ;
              LocalPopChoice(j_41);
            }
          else
            {
              t = i_41;
              {
                ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL;
                t = i_23;
                t = new_0_0(t);
                z_23 = t;
                t = j_23;
                {
                  ATerm o_24 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((a_24 != NULL) && (a_24 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          a_24 = ATgetArgument(t, 0);
                        if(((b_24 != NULL) && (b_24 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          b_24 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, z_23);
                    return(t);
                  }
                  t = pat_td_1_0(o_24, t);
                  c_24 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(a_24), not_null(b_24), (ATerm) ATmakeAppl(sym_Var_1, z_23))), (ATerm) ATmakeAppl(sym_Build_1, c_24)));
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
  ATerm k_41 = t;
  int t_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm p_24 (ATerm t)
        {
          ATerm u_41 = t;
          int v_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(v_41);
            }
          else
            {
              t = u_41;
            }
          return(t);
        }
        t = Cons_2_0(_id, p_24, t);
      }
      ;
      LocalPopChoice(t_41);
    }
  else
    {
      t = k_41;
      {
        ATerm q_24 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, q_24, t);
      }
    }
  return(t);
}
ATerm r_24 (ATerm t)
{
  ATerm o_25 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      o_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, o_25, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_42), term_a_42));
  return(t);
}
ATerm s_24 (ATerm t)
{
  ATerm b_42 = t;
  int c_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_25 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, q_25, term_a_42);
      ;
      LocalPopChoice(c_42);
    }
  else
    {
      t = b_42;
    }
  return(t);
}
ATerm t_24 (ATerm t)
{
  ATerm y_25 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      y_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, y_25, term_a_42);
  return(t);
}
ATerm v_24 (ATerm t)
{
  ATerm d_42 = t;
  int e_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_26 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, b_26, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_42), term_a_42));
      ;
      LocalPopChoice(e_42);
    }
  else
    {
      t = d_42;
    }
  return(t);
}
ATerm x_24 (ATerm t)
{
  ATerm o_26 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      o_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, o_26, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_42), term_a_42));
  return(t);
}
ATerm a_25 (ATerm t)
{
  ATerm f_42 = t;
  int g_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_26 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, s_26, term_a_42);
      ;
      LocalPopChoice(g_42);
    }
  else
    {
      t = f_42;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL,u_24 = NULL,w_24 = NULL,y_24 = NULL,z_24 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      y_24 = ATgetArgument(t, 0);
      z_24 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, y_24, z_24);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          y_24 = ATgetArgument(t, 0);
          t = y_24;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_24 = ATgetFirst((ATermList) t);
              n_24 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, m_24, (ATerm) ATmakeAppl(sym_LChoices_1, n_24));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_k_39;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              y_24 = ATgetArgument(t, 0);
              t = y_24;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_24 = ATgetFirst((ATermList) t);
                  n_24 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, m_24, (ATerm) ATmakeAppl(sym_Choices_1, n_24));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_k_39;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  y_24 = ATgetArgument(t, 0);
                  t = y_24;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      m_24 = ATgetFirst((ATermList) t);
                      n_24 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_24, (ATerm) ATmakeAppl(sym_Seqs_1, n_24));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_h_42;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      y_24 = ATgetArgument(t, 0);
                      z_24 = ATgetArgument(t, 1);
                      w_24 = ATgetArgument(t, 2);
                      u_24 = ATgetArgument(t, 3);
                      {
                        ATerm m_25 = NULL,n_25 = NULL;
                        t = z_24;
                        t = map1_1_0(r_24, t);
                        m_25 = t;
                        t = w_24;
                        t = map1_1_0(s_24, t);
                        n_25 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, y_24, m_25, n_25, u_24);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          y_24 = ATgetArgument(t, 0);
                          z_24 = ATgetArgument(t, 1);
                          w_24 = ATgetArgument(t, 2);
                          u_24 = ATgetArgument(t, 3);
                          {
                            ATerm i_42 = t;
                            int j_42 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm w_25 = NULL,x_25 = NULL;
                                t = w_24;
                                t = map1_1_0(t_24, t);
                                w_25 = t;
                                t = z_24;
                                t = map_1_0(v_24, t);
                                x_25 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, y_24, x_25, w_25, u_24);
                                ;
                                LocalPopChoice(j_42);
                              }
                            else
                              {
                                t = i_42;
                                {
                                  ATerm m_26 = NULL,n_26 = NULL;
                                  t = z_24;
                                  t = map1_1_0(x_24, t);
                                  m_26 = t;
                                  t = w_24;
                                  t = map_1_0(a_25, t);
                                  n_26 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, y_24, m_26, n_26, u_24);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              y_24 = ATgetArgument(t, 0);
                              z_24 = ATgetArgument(t, 1);
                              w_24 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, z_24, (ATerm) ATmakeAppl(sym_Op_2, term_g_40, (ATerm) ATinsert(ATinsert(ATempty, w_24), y_24)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  y_24 = ATgetArgument(t, 0);
                                  z_24 = ATgetArgument(t, 1);
                                  w_24 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, w_24)), y_24), (ATerm) ATmakeAppl(sym_Build_1, z_24)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      y_24 = ATgetArgument(t, 0);
                                      z_24 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_24, (ATerm) ATmakeAppl(sym_Match_1, z_24));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          y_24 = ATgetArgument(t, 0);
                                          z_24 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, y_24), z_24);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              y_24 = ATgetArgument(t, 0);
                                              z_24 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_24), y_24);
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
ATerm b_25 (ATerm t)
{
  ATerm k_42 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_42;
    }
  return(t);
}
ATerm c_25 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_42;
  return(t);
}
ATerm d_25 (ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_27 = ATgetFirst((ATermList) t);
      r_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_27, r_27);
  return(t);
}
ATerm e_25 (ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_42 = ATgetArgument(t, 0);
      if(match_cons(m_42, sym__2))
        {
          s_27 = ATgetArgument(m_42, 0);
          u_27 = ATgetArgument(m_42, 1);
        }
      else
        _fail(t);
      {
        ATerm n_42 = ATgetArgument(t, 1);
        if(match_cons(n_42, sym__2))
          {
            t_27 = ATgetArgument(n_42, 0);
            v_27 = ATgetArgument(n_42, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_27), s_27), (ATerm) ATinsert(CheckATermList(v_27), u_27));
  return(t);
}
ATerm f_25 (ATerm t)
{
  t = genzip_4_0(g_25, h_25, i_25, _id, t);
  return(t);
}
ATerm g_25 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_42;
  return(t);
}
ATerm h_25 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_27 = ATgetFirst((ATermList) t);
      x_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_27, x_27);
  return(t);
}
ATerm i_25 (ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL,b_28 = NULL,c_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_42 = ATgetArgument(t, 0);
      if(match_cons(o_42, sym__2))
        {
          y_27 = ATgetArgument(o_42, 0);
          b_28 = ATgetArgument(o_42, 1);
        }
      else
        _fail(t);
      {
        ATerm p_42 = ATgetArgument(t, 1);
        if(match_cons(p_42, sym__2))
          {
            z_27 = ATgetArgument(p_42, 0);
            c_28 = ATgetArgument(p_42, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_27), y_27), (ATerm) ATinsert(CheckATermList(c_28), b_28));
  return(t);
}
ATerm LiftCallArgs_0_0 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      j_27 = ATgetArgument(t, 0);
      k_27 = ATgetArgument(t, 1);
      l_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = l_27;
  t = fetch_1_0(b_25, t);
  t = l_27;
  t = genzip_4_0(c_25, d_25, e_25, LiftPrimArg_0_0, t);
  t = _2_0(concat_0_0, f_25, t);
  if(match_cons(t, sym__2))
    {
      m_27 = ATgetArgument(t, 0);
      {
        ATerm q_42 = ATgetArgument(t, 1);
        if(match_cons(q_42, sym__2))
          {
            n_27 = ATgetArgument(q_42, 0);
            o_27 = ATgetArgument(q_42, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, m_27, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, n_27), (ATerm) ATmakeAppl(sym_CallT_3, j_27, k_27, o_27)));
  return(t);
}
ATerm l_28 (ATerm f_28, ATerm t)
{
  ATerm h_28 = NULL;
  t = f_28;
  {
    ATerm r_42 = t;
    if((PushChoice() == 0))
      {
        t = Var_1_0(_id, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_42;
      }
    t = new_0_0(t);
    h_28 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, h_28), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_28), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_28)))), (ATerm) ATmakeAppl(sym_Var_1, h_28)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL;
  i_28 = t;
  if(match_cons(t, sym_Var_1))
    {
      j_28 = ATgetArgument(t, 0);
      {
        ATerm s_42 = t;
        int t_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_28(i_28, t);
            ;
            LocalPopChoice(t_42);
          }
        else
          {
            t = s_42;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_h_42, (ATerm) ATmakeAppl(sym_Var_1, j_28)));
          }
      }
    }
  else
    {
      t = l_28(i_28, t);
    }
  return(t);
}
ATerm Var_1_0 (ATerm t_92 (ATerm), ATerm t)
{
  ATerm n_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,d_4 = NULL,e_4 = NULL;
  r_28 = t;
  if(match_cons(t, sym_Var_1))
    {
      p_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_28);
  n_28 = t;
  t = p_28;
  t = t_92(t);
  q_28 = t;
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_28);
  d_4 = t;
  t = SSLsetAnnotations(d_4, n_28);
  return(t);
}
ATerm j_25 (ATerm t)
{
  ATerm u_42 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_42;
    }
  return(t);
}
ATerm k_25 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_42;
  return(t);
}
ATerm l_25 (ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_7 = ATgetFirst((ATermList) t);
      v_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_7, v_7);
  return(t);
}
ATerm p_25 (ATerm t)
{
  ATerm w_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_42 = ATgetArgument(t, 0);
      if(match_cons(v_42, sym__2))
        {
          w_7 = ATgetArgument(v_42, 0);
          z_7 = ATgetArgument(v_42, 1);
        }
      else
        _fail(t);
      {
        ATerm w_42 = ATgetArgument(t, 1);
        if(match_cons(w_42, sym__2))
          {
            y_7 = ATgetArgument(w_42, 0);
            a_8 = ATgetArgument(w_42, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_7), w_7), (ATerm) ATinsert(CheckATermList(a_8), z_7));
  return(t);
}
ATerm r_25 (ATerm t)
{
  t = genzip_4_0(s_25, t_25, u_25, _id, t);
  return(t);
}
ATerm s_25 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_42;
  return(t);
}
ATerm t_25 (ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_8 = ATgetFirst((ATermList) t);
      c_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_8, c_8);
  return(t);
}
ATerm u_25 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL,m_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_42 = ATgetArgument(t, 0);
      if(match_cons(x_42, sym__2))
        {
          g_8 = ATgetArgument(x_42, 0);
          i_8 = ATgetArgument(x_42, 1);
        }
      else
        _fail(t);
      {
        ATerm a_43 = ATgetArgument(t, 1);
        if(match_cons(a_43, sym__2))
          {
            h_8 = ATgetArgument(a_43, 0);
            m_8 = ATgetArgument(a_43, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_8), g_8), (ATerm) ATinsert(CheckATermList(m_8), i_8));
  return(t);
}
ATerm v_25 (ATerm t)
{
  ATerm b_43 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_43;
    }
  return(t);
}
ATerm z_25 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_42;
  return(t);
}
ATerm a_26 (ATerm t)
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
ATerm c_26 (ATerm t)
{
  ATerm g_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_43 = ATgetArgument(t, 0);
      if(match_cons(c_43, sym__2))
        {
          g_9 = ATgetArgument(c_43, 0);
          j_9 = ATgetArgument(c_43, 1);
        }
      else
        _fail(t);
      {
        ATerm e_43 = ATgetArgument(t, 1);
        if(match_cons(e_43, sym__2))
          {
            i_9 = ATgetArgument(e_43, 0);
            k_9 = ATgetArgument(e_43, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_9), g_9), (ATerm) ATinsert(CheckATermList(k_9), j_9));
  return(t);
}
ATerm d_26 (ATerm t)
{
  t = genzip_4_0(e_26, f_26, g_26, _id, t);
  return(t);
}
ATerm e_26 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_42;
  return(t);
}
ATerm f_26 (ATerm t)
{
  ATerm p_9 = NULL,q_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_9 = ATgetFirst((ATermList) t);
      q_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_9, q_9);
  return(t);
}
ATerm g_26 (ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL,w_9 = NULL,x_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_43 = ATgetArgument(t, 0);
      if(match_cons(f_43, sym__2))
        {
          t_9 = ATgetArgument(f_43, 0);
          w_9 = ATgetArgument(f_43, 1);
        }
      else
        _fail(t);
      {
        ATerm h_43 = ATgetArgument(t, 1);
        if(match_cons(h_43, sym__2))
          {
            u_9 = ATgetArgument(h_43, 0);
            x_9 = ATgetArgument(h_43, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_9), t_9), (ATerm) ATinsert(CheckATermList(x_9), w_9));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL;
  v_30 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      w_30 = ATgetArgument(t, 0);
      x_30 = ATgetArgument(t, 1);
      u_30 = ATgetArgument(t, 2);
      {
        ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL;
        t = u_30;
        t = fetch_1_0(j_25, t);
        t = u_30;
        t = genzip_4_0(k_25, l_25, p_25, LiftPrimArg_0_0, t);
        t = _2_0(concat_0_0, r_25, t);
        if(match_cons(t, sym__2))
          {
            r_7 = ATgetArgument(t, 0);
            {
              ATerm k_43 = ATgetArgument(t, 1);
              if(match_cons(k_43, sym__2))
                {
                  s_7 = ATgetArgument(k_43, 0);
                  t_7 = ATgetArgument(k_43, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, r_7, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, s_7), (ATerm) ATmakeAppl(sym_PrimT_3, w_30, x_30, t_7)));
      }
    }
  else
    {
      ATerm a_9 = NULL,c_9 = NULL,d_9 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          w_30 = ATgetArgument(t, 0);
          x_30 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_30;
      t = fetch_1_0(v_25, t);
      t = x_30;
      t = genzip_4_0(z_25, a_26, c_26, LiftPrimArg_0_0, t);
      t = _2_0(concat_0_0, d_26, t);
      if(match_cons(t, sym__2))
        {
          a_9 = ATgetArgument(t, 0);
          {
            ATerm l_43 = ATgetArgument(t, 1);
            if(match_cons(l_43, sym__2))
              {
                c_9 = ATgetArgument(l_43, 0);
                d_9 = ATgetArgument(l_43, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, a_9, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_9), (ATerm) ATmakeAppl(sym_PrimT_3, w_30, (ATerm)ATempty, d_9)));
    }
  return(t);
}
ATerm repeat_1_0 (ATerm a_120 (ATerm), ATerm t)
{
  ATerm a_31 (ATerm t)
  {
    ATerm m_43 = t;
    int n_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_120(t);
        t = a_31(t);
        ;
        LocalPopChoice(n_43);
      }
    else
      {
        t = m_43;
      }
    return(t);
  }
  t = a_31(t);
  return(t);
}
ATerm h_26 (ATerm t)
{
  ATerm o_43 = t;
  int p_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Con_3_0(_id, _id, _id, t);
      ;
      LocalPopChoice(p_43);
    }
  else
    {
      t = o_43;
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm q_43 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(h_26, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_43;
    }
  return(t);
}
ATerm App_2_0 (ATerm h_93 (ATerm), ATerm i_93 (ATerm), ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,f_4 = NULL,g_4 = NULL;
  k_31 = t;
  if(match_cons(t, sym_App_2))
    {
      f_31 = ATgetArgument(t, 0);
      h_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_31);
  e_31 = t;
  t = f_31;
  t = h_93(t);
  i_31 = t;
  t = h_31;
  t = i_93(t);
  j_31 = t;
  g_4 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, i_31, j_31);
  f_4 = t;
  t = SSLsetAnnotations(f_4, e_31);
  return(t);
}
ATerm Con_3_0 (ATerm t_93 (ATerm), ATerm u_93 (ATerm), ATerm v_93 (ATerm), ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL,h_4 = NULL,i_4 = NULL;
  y_31 = t;
  if(match_cons(t, sym_Con_3))
    {
      s_31 = ATgetArgument(t, 0);
      t_31 = ATgetArgument(t, 1);
      u_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_31);
  r_31 = t;
  t = s_31;
  t = t_93(t);
  v_31 = t;
  t = t_31;
  t = u_93(t);
  w_31 = t;
  t = u_31;
  t = v_93(t);
  x_31 = t;
  i_4 = t;
  t = (ATerm) ATmakeAppl(sym_Con_3, v_31, w_31, x_31);
  h_4 = t;
  t = SSLsetAnnotations(h_4, r_31);
  return(t);
}
ATerm i_26 (ATerm t)
{
  ATerm r_43 = t;
  int t_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Con_3_0(_id, _id, _id, t);
      ;
      LocalPopChoice(t_43);
    }
  else
    {
      t = r_43;
      t = App_2_0(_id, _id, t);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm u_43 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(i_26, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_43;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      e_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_32;
  if(match_cons(t, sym_StratRule_3))
    {
      f_32 = ATgetArgument(t, 0);
      g_32 = ATgetArgument(t, 1);
      h_32 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, g_32), (ATerm) ATmakeAppl(sym_Where_1, h_32)), f_32));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          f_32 = ATgetArgument(t, 0);
          g_32 = ATgetArgument(t, 1);
          h_32 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = f_32;
      t = pureterm_0_0(t);
      t = g_32;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, g_32)), (ATerm) ATmakeAppl(sym_Where_1, h_32)), (ATerm) ATmakeAppl(sym_Match_1, f_32)));
    }
  return(t);
}
ATerm Scope_2_0 (ATerm n_96 (ATerm), ATerm o_96 (ATerm), ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL,n_4 = NULL,o_4 = NULL;
  t_32 = t;
  if(match_cons(t, sym_Scope_2))
    {
      p_32 = ATgetArgument(t, 0);
      q_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_32);
  o_32 = t;
  t = p_32;
  t = n_96(t);
  r_32 = t;
  t = q_32;
  t = o_96(t);
  s_32 = t;
  o_4 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, r_32, s_32);
  n_4 = t;
  t = SSLsetAnnotations(n_4, o_32);
  return(t);
}
ATerm oncetd_1_0 (ATerm x_110 (ATerm), ATerm t)
{
  ATerm w_32 (ATerm t)
  {
    ATerm v_43 = t;
    int w_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_110(t);
        ;
        LocalPopChoice(w_43);
      }
    else
      {
        t = v_43;
        t = SRTS_one(w_32, t);
      }
    return(t);
  }
  t = w_32(t);
  return(t);
}
ATerm Rcon_0_0 (ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      ATerm x_43 = ATgetArgument(t, 0);
      if(match_cons(x_43, sym_Rule_3))
        {
          x_32 = ATgetArgument(x_43, 0);
          y_32 = ATgetArgument(x_43, 1);
          z_32 = ATgetArgument(x_43, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = new_0_0(t);
  a_33 = t;
  t = x_32;
  {
    ATerm j_26 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm y_43 = ATgetArgument(t, 0);
          if(match_cons(y_43, sym_Var_1))
            {
              if(((c_33 != NULL) && (c_33 != ATgetArgument(y_43, 0))))
                _fail(ATgetArgument(y_43, 0));
              else
                c_33 = ATgetArgument(y_43, 0);
            }
          else
            _fail(t);
          if(((b_33 != NULL) && (b_33 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            b_33 = ATgetArgument(t, 1);
          {
            ATerm z_43 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_33));
      return(t);
    }
    t = oncetd_1_0(j_26, t);
    d_33 = t;
    t = y_32;
    {
      ATerm k_26 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm a_44 = ATgetArgument(t, 0);
            if(match_cons(a_44, sym_Var_1))
              {
                if(((c_33 != NULL) && (c_33 != ATgetArgument(a_44, 0))))
                  _fail(ATgetArgument(a_44, 0));
                else
                  c_33 = ATgetArgument(a_44, 0);
              }
            else
              _fail(t);
            if(((e_33 != NULL) && (e_33 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              e_33 = ATgetArgument(t, 1);
            {
              ATerm b_44 = ATgetArgument(t, 2);
              if(match_cons(b_44, sym_CallT_3))
                {
                  if(((f_33 != NULL) && (f_33 != ATgetArgument(b_44, 0))))
                    _fail(ATgetArgument(b_44, 0));
                  else
                    f_33 = ATgetArgument(b_44, 0);
                  {
                    ATerm d_44 = ATgetArgument(b_44, 1);
                    if(((ATgetType(d_44) != AT_LIST) || !(ATisEmpty(d_44))))
                      _fail(t);
                  }
                  {
                    ATerm e_44 = ATgetArgument(b_44, 2);
                    if(((ATgetType(e_44) != AT_LIST) || !(ATisEmpty(e_44))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, a_33);
        return(t);
      }
      t = oncetd_1_0(k_26, t);
      g_33 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_33), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, d_33, g_33, (ATerm) ATmakeAppl(sym_Seq_2, z_32, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(f_33), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(b_33), not_null(e_33), term_h_42))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(c_33)), (ATerm) ATmakeAppl(sym_Var_1, a_33))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm i_44 = t;
  int j_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_44 = t;
      int l_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Rcon_0_0(t);
          t = desugarRule_0_0(t);
          ;
          LocalPopChoice(l_44);
        }
      else
        {
          t = k_44;
          {
            ATerm m_44 = t;
            int r_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Scope_2_0(_id, desugarRule_0_0, t);
                ;
                LocalPopChoice(r_44);
              }
            else
              {
                t = m_44;
                t = RtoS_0_0(t);
              }
          }
        }
      ;
      LocalPopChoice(j_44);
    }
  else
    {
      t = i_44;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm t_109 (ATerm), ATerm t)
{
  t = t_109(t);
  {
    ATerm l_26 (ATerm t)
    {
      t = topdown_1_0(t_109, t);
      return(t);
    }
    t = SRTS_all(l_26, t);
  }
  return(t);
}
ATerm p_26 (ATerm t)
{
  ATerm s_44 = t;
  int t_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(t_44);
    }
  else
    {
      t = s_44;
    }
  t = repeat_1_0(q_26, t);
  return(t);
}
ATerm q_26 (ATerm t)
{
  ATerm u_44 = t;
  int v_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
      LocalPopChoice(v_44);
    }
  else
    {
      t = u_44;
      {
        ATerm w_44 = t;
        int x_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftCallArgs_0_0(t);
            ;
            LocalPopChoice(x_44);
          }
        else
          {
            t = w_44;
            {
              ATerm y_44 = t;
              int z_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(z_44);
                }
              else
                {
                  t = y_44;
                  {
                    ATerm a_45 = t;
                    int b_45 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(b_45);
                      }
                    else
                      {
                        t = a_45;
                        {
                          ATerm c_45 = t;
                          int d_45 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm e_45 = t;
                              int f_45 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      i_10 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = i_10;
                                  {
                                    ATerm r_26 (ATerm t)
                                    {
                                      if(match_cons(t, sym_RootApp_1))
                                        {
                                          ATerm g_45 = ATgetArgument(t, 0);
                                          if(match_cons(g_45, sym_Match_1))
                                            {
                                              if(((j_10 != NULL) && (j_10 != ATgetArgument(g_45, 0))))
                                                _fail(ATgetArgument(g_45, 0));
                                              else
                                                j_10 = ATgetArgument(g_45, 0);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                      t = not_null(j_10);
                                      return(t);
                                    }
                                    t = pat_td_1_0(r_26, t);
                                    k_10 = t;
                                    t = (ATerm) ATmakeAppl(sym_Match_1, k_10);
                                  }
                                  ;
                                  LocalPopChoice(f_45);
                                }
                              else
                                {
                                  t = e_45;
                                  {
                                    ATerm h_45 = t;
                                    int i_45 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm l_33 = NULL,m_33 = NULL,n_33 = NULL;
                                        if(match_cons(t, sym_Match_1))
                                          {
                                            l_33 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = l_33;
                                        if(match_cons(t, sym_RootApp_1))
                                          {
                                            m_33 = ATgetArgument(t, 0);
                                            t = m_33;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_App_2))
                                              {
                                                m_33 = ATgetArgument(t, 0);
                                                n_33 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym_BA_2, m_33, n_33);
                                          }
                                        ;
                                        LocalPopChoice(i_45);
                                      }
                                    else
                                      {
                                        t = h_45;
                                        t = Mapp2_0_0(t);
                                      }
                                  }
                                }
                              ;
                              LocalPopChoice(d_45);
                            }
                          else
                            {
                              t = c_45;
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
  t = topdown_1_0(p_26, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm t_26 (ATerm t)
{
  ATerm q_10 = NULL,r_10 = NULL;
  q_10 = t;
  t = SSL_explode_term(q_10);
  if(match_cons(t, sym__2))
    {
      ATerm j_45 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_45) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_45 = ATgetArgument(t, 1);
        if(((ATgetType(k_45) == AT_LIST) && !(ATisEmpty(k_45))))
          {
            r_10 = ATgetFirst((ATermList) k_45);
            {
              ATerm l_45 = (ATerm) ATgetNext((ATermList) k_45);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_10;
  return(t);
}
ATerm u_26 (ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL,p_4 = NULL,r_4 = NULL;
  v_10 = t;
  t = SSL_explode_term(v_10);
  if(match_cons(t, sym__2))
    {
      ATerm m_45 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_45) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_45 = ATgetArgument(t, 1);
        if(((ATgetType(n_45) == AT_LIST) && !(ATisEmpty(n_45))))
          {
            ATerm o_45 = ATgetFirst((ATermList) n_45);
            w_10 = (ATerm) ATgetNext((ATermList) n_45);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  r_4 = t;
  t = term_g_40;
  p_4 = t;
  t = SSL_mkterm(p_4, w_10);
  return(t);
}
ATerm v_26 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm v_113 (ATerm), ATerm t)
{
  ATerm t_33 = NULL,u_4 = NULL,v_4 = NULL;
  ATerm y_33 (ATerm t)
  {
    ATerm p_45 = t;
    int q_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_33 = NULL,w_33 = NULL,x_33 = NULL;
        u_33 = t;
        t = map_1_0(t_26, t);
        t = v_113(t);
        w_33 = t;
        t = u_33;
        t = map_1_0(u_26, t);
        t = y_33(t);
        x_33 = t;
        t = (ATerm) ATinsert(CheckATermList(x_33), w_33);
        ;
        LocalPopChoice(q_45);
      }
    else
      {
        t = p_45;
        t = map_1_0(v_26, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = y_33(t);
  t_33 = t;
  v_4 = t;
  t = term_g_40;
  u_4 = t;
  t = SSL_mkterm(u_4, t_33);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm z_33 = NULL;
  z_33 = t;
  {
    ATerm r_45 = t;
    int s_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL;
        t = z_33;
        t = new_0_0(t);
        b_34 = t;
        t = new_0_0(t);
        c_34 = t;
        t = new_0_0(t);
        d_34 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_34), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_g_40, (ATerm) ATinsert(ATinsert(ATempty, z_33), (ATerm) ATmakeAppl(sym_Var_1, c_34))), (ATerm) ATmakeAppl(sym_Var_1, d_34)), (ATerm)ATmakeAppl(sym_VarDec_2, b_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_42), term_a_42)), c_34, (ATerm)ATmakeAppl(sym_Var_1, c_34), d_34, (ATerm) ATmakeAppl(sym_Var_1, d_34));
        ;
        LocalPopChoice(s_45);
      }
    else
      {
        t = r_45;
        {
          ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL;
          t = z_33;
          t = new_0_0(t);
          f_34 = t;
          t = new_0_0(t);
          g_34 = t;
          t = new_0_0(t);
          h_34 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_34), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_g_40, (ATerm) ATinsert(ATinsert(ATempty, z_33), (ATerm) ATmakeAppl(sym_Var_1, g_34))), (ATerm) ATmakeAppl(sym_Var_1, h_34)), (ATerm)ATmakeAppl(sym_VarDec_2, f_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_42), term_a_42)), g_34, (ATerm)ATmakeAppl(sym_Var_1, g_34), h_34, (ATerm) ATmakeAppl(sym_Var_1, h_34));
        }
      }
  }
  return(t);
}
ATerm w_26 (ATerm t)
{
  ATerm i_34 = NULL,j_34 = NULL;
  if(match_cons(t, sym__2))
    {
      i_34 = ATgetArgument(t, 0);
      j_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, i_34, j_34, (ATerm) ATempty);
  return(t);
}
ATerm x_26 (ATerm t)
{
  ATerm k_34 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm t_45 = ATgetArgument(t, 0);
      if(((ATgetType(t_45) != AT_INT) || (ATgetInt((ATermInt) t_45) != 0)))
        _fail(t);
      {
        ATerm u_45 = ATgetArgument(t, 1);
      }
      k_34 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = k_34;
  return(t);
}
ATerm copy_1_0 (ATerm a_124 (ATerm), ATerm t)
{
  ATerm y_26 (ATerm t)
  {
    ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL;
    if(match_cons(t, sym__3))
      {
        l_34 = ATgetArgument(t, 0);
        m_34 = ATgetArgument(t, 1);
        n_34 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, l_34, term_y_34);
    t = geq_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, l_34, term_y_34);
    {
      ATerm v_45 = t;
      int w_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_4 = NULL,y_4 = NULL;
          y_4 = t;
          t = term_y_34;
          w_4 = t;
          t = SSL_subti(l_34, w_4);
          ;
          LocalPopChoice(w_45);
        }
      else
        {
          t = v_45;
          {
            ATerm z_4 = NULL,b_5 = NULL;
            b_5 = t;
            t = term_y_34;
            z_4 = t;
            t = SSL_subtr(l_34, z_4);
          }
        }
      o_34 = t;
      t = m_34;
      t = a_124(t);
      p_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, o_34, m_34, (ATerm) ATinsert(CheckATermList(n_34), p_34));
    }
    return(t);
  }
  t = for_3_0(w_26, x_26, y_26, t);
  return(t);
}
ATerm MkThreadApplication_0_0 (ATerm t)
{
  ATerm q_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL;
  if(match_cons(t, sym__2))
    {
      q_34 = ATgetArgument(t, 0);
      s_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = new_0_0(t);
  t_34 = t;
  t = new_0_0(t);
  u_34 = t;
  t = new_0_0(t);
  v_34 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, t_34), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_g_40, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, q_34)), (ATerm) ATmakeAppl(sym_Var_1, u_34))), (ATerm) ATmakeAppl(sym_Op_2, term_g_40, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, s_34)), (ATerm) ATmakeAppl(sym_Var_1, v_34)))), (ATerm)ATmakeAppl(sym_VarDec_2, t_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_42), term_a_42)), u_34, (ATerm)ATmakeAppl(sym_Var_1, u_34), v_34, (ATerm) ATmakeAppl(sym_Var_1, v_34));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_34 = ATgetFirst((ATermList) t);
      a_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_35;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm x_45 = t;
      int y_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_34;
          ;
          LocalPopChoice(y_45);
        }
      else
        {
          t = x_45;
          t = a_35;
          t = last_0_0(t);
        }
    }
  else
    {
      t = a_35;
      t = last_0_0(t);
    }
  return(t);
}
ATerm m_41 (ATerm m_35, ATerm n_35, ATerm o_35, ATerm p_35, ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,f_36 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_35, term_y_34);
  {
    ATerm z_45 = t;
    int a_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_5 = NULL,d_5 = NULL;
        d_5 = t;
        t = term_y_34;
        c_5 = t;
        t = SSL_addi(n_35, c_5);
        ;
        LocalPopChoice(a_46);
      }
    else
      {
        t = z_45;
        {
          ATerm e_5 = NULL,f_5 = NULL;
          f_5 = t;
          t = term_y_34;
          e_5 = t;
          t = SSL_addr(n_35, e_5);
        }
      }
    t_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_35, term_m_9);
    t = copy_1_0(new_0_0, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_35 = ATgetFirst((ATermList) t);
        v_35 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = v_35;
    t = last_0_0(t);
    w_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_35), u_35), v_35);
    t = genzip_4_0(z_26, a_27, b_27, MkThreadApplication_0_0, t);
    t = tuple_unzip_1_0(_id, t);
    if(match_cons(t, sym__6))
      {
        x_35 = ATgetArgument(t, 0);
        y_35 = ATgetArgument(t, 1);
        z_35 = ATgetArgument(t, 2);
        a_36 = ATgetArgument(t, 3);
        b_36 = ATgetArgument(t, 4);
        c_36 = ATgetArgument(t, 5);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_36), z_35), v_35);
    t = concat_0_0(t);
    f_36 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, m_35, term_b_46), y_35, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(f_36), u_35), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_g_40, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, u_35)), (ATerm) ATmakeAppl(sym_Op_2, m_35, a_36))), (ATerm)ATmakeAppl(sym_Op_2, term_g_40, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, w_35)), (ATerm) ATmakeAppl(sym_Op_2, m_35, c_36))), (ATerm) ATmakeAppl(sym_Seqs_1, x_35)))));
  }
  return(t);
}
ATerm n_41 (ATerm x_38, ATerm y_38, ATerm z_38, ATerm a_39, ATerm t)
{
  ATerm v_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,f_40 = NULL,i_40 = NULL;
  t = a_39;
  t = new_0_0(t);
  v_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_38, (ATerm) ATmakeAppl(sym_Var_1, v_39));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      x_39 = ATgetArgument(t, 0);
      y_39 = ATgetArgument(t, 1);
      z_39 = ATgetArgument(t, 2);
      a_40 = ATgetArgument(t, 3);
      b_40 = ATgetArgument(t, 4);
      f_40 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_39, b_40);
  t = conc_0_0(t);
  i_40 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, x_38, term_c_46), y_39, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(i_40), v_39), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_g_40, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_39)), (ATerm) ATmakeAppl(sym_Op_2, x_38, a_40))), (ATerm)ATmakeAppl(sym_Op_2, x_38, f_40), (ATerm) ATmakeAppl(sym_Seqs_1, x_39)))));
  return(t);
}
ATerm z_26 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_46 = ATgetArgument(t, 0);
      ATerm e_46 = ATgetArgument(t, 1);
      if(((ATgetType(e_46) != AT_LIST) || !(ATisEmpty(e_46))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_27 (ATerm t)
{
  ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL,m_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_46 = ATgetArgument(t, 0);
      if(((ATgetType(f_46) == AT_LIST) && !(ATisEmpty(f_46))))
        {
          h_36 = ATgetFirst((ATermList) f_46);
          j_36 = (ATerm) ATgetNext((ATermList) f_46);
        }
      else
        _fail(t);
      {
        ATerm g_46 = ATgetArgument(t, 1);
        if(((ATgetType(g_46) == AT_LIST) && !(ATisEmpty(g_46))))
          {
            i_36 = ATgetFirst((ATermList) g_46);
            m_36 = (ATerm) ATgetNext((ATermList) g_46);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_36, i_36), (ATerm) ATmakeAppl(sym__2, j_36, m_36));
  return(t);
}
ATerm b_27 (ATerm t)
{
  ATerm f_37 = NULL,l_38 = NULL;
  if(match_cons(t, sym__2))
    {
      f_37 = ATgetArgument(t, 0);
      l_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_38), f_37);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm o_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL,w_40 = NULL,z_40 = NULL;
  o_40 = t;
  if(match_cons(t, sym__3))
    {
      r_40 = ATgetArgument(t, 0);
      s_40 = ATgetArgument(t, 1);
      t_40 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = s_40;
  if(match_string(t, "T"))
    {
      t = t_40;
      if(match_cons(t, sym__2))
        {
          w_40 = ATgetArgument(t, 0);
          z_40 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_40;
      if(match_int(t, 0))
        {
          ATerm h_46 = t;
          int i_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_41(r_40, w_40, z_40, o_40, t);
              ;
              LocalPopChoice(i_46);
            }
          else
            {
              t = h_46;
              {
                ATerm l_41 = NULL;
                t = o_40;
                t = new_0_0(t);
                l_41 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, r_40, term_b_46), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_41), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_g_40, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_41)), (ATerm) ATmakeAppl(sym_Op_2, r_40, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_g_40, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_41)), (ATerm) ATmakeAppl(sym_Op_2, r_40, (ATerm) ATempty))), term_h_42))));
              }
            }
        }
      else
        {
          t = m_41(r_40, w_40, z_40, o_40, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = t_40;
      if(match_cons(t, sym__2))
        {
          w_40 = ATgetArgument(t, 0);
          z_40 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = n_41(r_40, w_40, z_40, o_40, t);
    }
  return(t);
}
ATerm CongruenceDef_0_0 (ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_46 = ATgetArgument(t, 0);
      if(match_cons(j_46, sym__2))
        {
          ATerm k_46 = ATgetArgument(j_46, 0);
          if(match_cons(k_46, sym_Mod_2))
            {
              o_41 = ATgetArgument(k_46, 0);
              p_41 = ATgetArgument(k_46, 1);
            }
          else
            _fail(t);
          q_41 = ATgetArgument(j_46, 1);
        }
      else
        _fail(t);
      r_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, o_41, p_41, q_41);
  t = DefineCongruence_0_0(t);
  t = desugar_0_0(t);
  s_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_41, r_41);
  return(t);
}
ATerm c_27 (ATerm t)
{
  ATerm l_46 = t;
  int m_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_41 = NULL,x_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_41 = ATgetFirst((ATermList) t);
          x_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_41;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_41;
      ;
      LocalPopChoice(m_46);
    }
  else
    {
      t = l_46;
      t = JoinDefs2_0_0(t);
    }
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm n_46 = t;
  int o_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0_0(t);
      ;
      LocalPopChoice(o_46);
    }
  else
    {
      t = n_46;
      {
        ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm p_46 = ATgetArgument(t, 0);
            if(match_cons(p_46, sym__2))
              {
                b_11 = ATgetArgument(p_46, 0);
                c_11 = ATgetArgument(p_46, 1);
              }
            else
              _fail(t);
            d_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_11, c_11);
        t = Definitions_0_0(t);
        e_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_11, d_11);
        t = _2_0(c_27, _id, t);
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm q_106 (ATerm), ATerm t)
{
  ATerm d_43 (ATerm t)
  {
    ATerm q_46 = t;
    int r_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, d_43, t);
        ;
        LocalPopChoice(r_46);
      }
    else
      {
        t = q_46;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_106(t);
      }
    return(t);
  }
  t = d_43(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_46 = t;
  int t_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(t_46);
    }
  else
    {
      t = s_46;
      {
        ATerm y_42 = NULL,z_42 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_42 = ATgetFirst((ATermList) t);
            z_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_42;
        {
          ATerm d_27 (ATerm t)
          {
            t = z_42;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(d_27, t);
        }
      }
    }
  return(t);
}
ATerm f_44 (ATerm g_43, ATerm t)
{
  ATerm i_43 = NULL;
  t = SSL_explode_term(g_43);
  if(match_cons(t, sym__2))
    {
      ATerm u_46 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_46) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      i_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_43;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm j_43 = NULL,s_43 = NULL,c_44 = NULL;
  c_44 = t;
  if(match_cons(t, sym__2))
    {
      j_43 = ATgetArgument(t, 0);
      s_43 = ATgetArgument(t, 1);
      {
        ATerm v_46 = t;
        int w_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_27 (ATerm t)
            {
              t = s_43;
              return(t);
            }
            t = j_43;
            t = at_end_1_0(e_27, t);
            ;
            LocalPopChoice(w_46);
          }
        else
          {
            t = v_46;
            t = f_44(c_44, t);
          }
      }
    }
  else
    {
      t = f_44(c_44, t);
    }
  return(t);
}
ATerm diff_1_0 (ATerm y_120 (ATerm), ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL;
  if(match_cons(t, sym__2))
    {
      g_44 = ATgetArgument(t, 0);
      h_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_44;
  {
    ATerm n_44 (ATerm t)
    {
      ATerm x_46 = t;
      int a_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(a_47);
        }
      else
        {
          t = x_46;
          {
            ATerm b_47 = t;
            int c_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_11 = NULL,h_11 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    f_11 = ATgetFirst((ATermList) t);
                    h_11 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = h_44;
                {
                  ATerm f_27 (ATerm t)
                  {
                    ATerm i_11 = NULL;
                    i_11 = t;
                    t = (ATerm) ATmakeAppl(sym__2, f_11, i_11);
                    t = y_120(t);
                    return(t);
                  }
                  t = fetch_1_0(f_27, t);
                  t = h_11;
                  t = n_44(t);
                }
                ;
                LocalPopChoice(c_47);
              }
            else
              {
                t = b_47;
                t = Cons_2_0(_id, n_44, t);
              }
          }
        }
      return(t);
    }
    t = n_44(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm f_114 (ATerm), ATerm g_114 (ATerm), ATerm h_114 (ATerm), ATerm i_114 (ATerm), ATerm t)
{
  ATerm o_44 (ATerm t)
  {
    ATerm d_47 = t;
    int e_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_114(t);
        ;
        LocalPopChoice(e_47);
      }
    else
      {
        t = d_47;
        t = g_114(t);
        t = _2_0(i_114, o_44, t);
        t = h_114(t);
      }
    return(t);
  }
  t = o_44(t);
  return(t);
}
ATerm g_27 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_47 = ATgetArgument(t, 0);
      if(((ATgetType(f_47) != AT_LIST) || !(ATisEmpty(f_47))))
        _fail(t);
      {
        ATerm g_47 = ATgetArgument(t, 1);
        if(((ATgetType(g_47) != AT_LIST) || !(ATisEmpty(g_47))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_27 (ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_47 = ATgetArgument(t, 0);
      if(((ATgetType(h_47) == AT_LIST) && !(ATisEmpty(h_47))))
        {
          l_47 = ATgetFirst((ATermList) h_47);
          n_47 = (ATerm) ATgetNext((ATermList) h_47);
        }
      else
        _fail(t);
      {
        ATerm r_47 = ATgetArgument(t, 1);
        if(((ATgetType(r_47) == AT_LIST) && !(ATisEmpty(r_47))))
          {
            m_47 = ATgetFirst((ATermList) r_47);
            o_47 = (ATerm) ATgetNext((ATermList) r_47);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_47, m_47), (ATerm) ATmakeAppl(sym__2, n_47, o_47));
  return(t);
}
ATerm i_27 (ATerm t)
{
  ATerm p_47 = NULL,q_47 = NULL;
  if(match_cons(t, sym__2))
    {
      p_47 = ATgetArgument(t, 0);
      q_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_47), p_47);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL,y_46 = NULL,z_46 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_47 = ATgetFirst((ATermList) t);
      if(match_cons(s_47, sym__2))
        {
          p_44 = ATgetArgument(s_47, 0);
          q_44 = ATgetArgument(s_47, 1);
        }
      else
        _fail(t);
      y_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(q_44);
  if(match_cons(t, sym__2))
    {
      z_46 = ATgetArgument(t, 0);
      i_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(p_44);
  if(match_cons(t, sym__2))
    {
      if((z_46 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      j_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_47, i_47);
  t = genzip_4_0(g_27, h_27, i_27, _id, t);
  k_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_47, y_46);
  t = conc_0_0(t);
  return(t);
}
ATerm p_27 (ATerm t)
{
  ATerm v_47 = NULL;
  v_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, v_47);
  return(t);
}
ATerm a_28 (ATerm t)
{
  t = _2_0(_id, e_28, t);
  return(t);
}
ATerm d_28 (ATerm t)
{
  ATerm t_47 = t;
  int u_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, g_28, t);
      ;
      LocalPopChoice(u_47);
    }
  else
    {
      t = t_47;
      {
        ATerm e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL;
        if(match_cons(t, sym__2))
          {
            e_48 = ATgetArgument(t, 0);
            f_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_48;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_48 = ATgetFirst((ATermList) t);
            h_48 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_48), g_48), h_48);
      }
    }
  return(t);
}
ATerm e_28 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm g_28 (ATerm t)
{
  ATerm w_47 = t;
  int b_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_47 = ATgetFirst((ATermList) t);
          a_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_47;
      if(match_cons(t, sym__2))
        {
          y_47 = ATgetArgument(t, 0);
          z_47 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_47;
      if((y_47 != t))
        {
          _fail(t);
        }
      t = a_48;
      ;
      LocalPopChoice(b_48);
    }
  else
    {
      t = w_47;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm k_28 (ATerm t)
{
  ATerm l_48 = NULL;
  if(match_cons(t, sym__2))
    {
      l_48 = ATgetArgument(t, 0);
      if((l_48 != ATgetArgument(t, 1)))
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
  ATerm c_48 = t;
  int d_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(p_27, a_28, d_28, t);
      ;
      LocalPopChoice(d_48);
    }
  else
    {
      t = c_48;
      t = diff_1_0(k_28, t);
    }
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm b_136 (ATerm), ATerm c_136 (ATerm), ATerm d_136 (ATerm), ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm i_48 = ATgetArgument(t, 0);
      if(((ATgetType(i_48) == AT_LIST) && !(ATisEmpty(i_48))))
        {
          r_48 = ATgetFirst((ATermList) i_48);
          s_48 = (ATerm) ATgetNext((ATermList) i_48);
        }
      else
        _fail(t);
      t_48 = ATgetArgument(t, 1);
      u_48 = ATgetArgument(t, 2);
      v_48 = ATgetArgument(t, 3);
      w_48 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_48, u_48);
  t = b_136(t);
  if(match_cons(t, sym__2))
    {
      x_48 = ATgetArgument(t, 0);
      y_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_48;
  t = c_136(t);
  z_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_48, t_48);
  t = diff_0_0(t);
  a_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_49, s_48);
  t = conc_0_0(t);
  b_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_49, t_48);
  t = conc_0_0(t);
  c_49 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_48, x_48, v_48);
  t = d_136(t);
  d_49 = t;
  t = (ATerm) ATmakeAppl(sym__5, b_49, c_49, y_48, d_49, w_48);
  return(t);
}
ATerm while_not_2_0 (ATerm p_120 (ATerm), ATerm q_120 (ATerm), ATerm t)
{
  ATerm e_49 (ATerm t)
  {
    ATerm j_48 = t;
    int k_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_120(t);
        ;
        LocalPopChoice(k_48);
      }
    else
      {
        t = j_48;
        t = q_120(t);
        t = e_49(t);
      }
    return(t);
  }
  t = e_49(t);
  return(t);
}
ATerm for_3_0 (ATerm s_120 (ATerm), ATerm t_120 (ATerm), ATerm u_120 (ATerm), ATerm t)
{
  t = s_120(t);
  t = while_not_2_0(t_120, u_120, t);
  return(t);
}
ATerm m_28 (ATerm t)
{
  ATerm l_49 = NULL,n_49 = NULL,o_49 = NULL;
  if(match_cons(t, sym__3))
    {
      l_49 = ATgetArgument(t, 0);
      n_49 = ATgetArgument(t, 1);
      o_49 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, l_49, l_49, n_49, o_49, (ATerm) ATempty);
  return(t);
}
ATerm o_28 (ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm m_48 = ATgetArgument(t, 0);
      if(((ATgetType(m_48) != AT_LIST) || !(ATisEmpty(m_48))))
        _fail(t);
      {
        ATerm n_48 = ATgetArgument(t, 1);
      }
      {
        ATerm o_48 = ATgetArgument(t, 2);
      }
      p_49 = ATgetArgument(t, 3);
      q_49 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_49, q_49);
  return(t);
}
ATerm s_28 (ATerm t)
{
  ATerm p_48 = t;
  int q_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, t_28, u_28, t);
      ;
      LocalPopChoice(q_48);
    }
  else
    {
      t = p_48;
      {
        ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL,z_49 = NULL,a_50 = NULL;
        if(match_cons(t, sym__5))
          {
            u_49 = ATgetArgument(t, 0);
            x_49 = ATgetArgument(t, 1);
            y_49 = ATgetArgument(t, 2);
            z_49 = ATgetArgument(t, 3);
            a_50 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = u_49;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_49 = ATgetFirst((ATermList) t);
            w_49 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, w_49, x_49, y_49, z_49, (ATerm) ATinsert(CheckATermList(a_50), v_49));
      }
    }
  return(t);
}
ATerm t_28 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(v_28, t);
  return(t);
}
ATerm u_28 (ATerm t)
{
  ATerm r_49 = NULL,s_49 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm f_49 = ATgetArgument(t, 0);
      r_49 = ATgetArgument(t, 1);
      s_49 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_49), r_49);
  return(t);
}
ATerm v_28 (ATerm t)
{
  ATerm g_49 = t;
  int h_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      ;
      LocalPopChoice(h_49);
    }
  else
    {
      t = g_49;
    }
  return(t);
}
ATerm w_28 (ATerm t)
{
  ATerm i_49 = t;
  int j_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MissingDefMod_0_0(t);
      ;
      LocalPopChoice(j_49);
    }
  else
    {
      t = i_49;
      t = MissingDef_0_0(t);
    }
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  t = for_3_0(m_28, o_28, s_28, t);
  {
    ATerm k_49 = t;
    int m_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_50 = NULL,j_50 = NULL;
        if(match_cons(t, sym__2))
          {
            i_50 = ATgetArgument(t, 0);
            j_50 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_50;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_50;
        ;
        LocalPopChoice(m_49);
      }
    else
      {
        t = k_49;
        {
          ATerm p_11 = NULL,q_11 = NULL,i_5 = NULL,j_5 = NULL;
          if(match_cons(t, sym__2))
            {
              ATerm t_49 = ATgetArgument(t, 0);
              ATerm b_50 = ATgetArgument(t, 1);
              if(((ATgetType(b_50) == AT_LIST) && !(ATisEmpty(b_50))))
                {
                  p_11 = ATgetFirst((ATermList) b_50);
                  q_11 = (ATerm) ATgetNext((ATermList) b_50);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(q_11), p_11);
          t = map_1_0(w_28, t);
          j_5 = t;
          t = term_y_34;
          i_5 = t;
          t = SSL_exit(i_5);
        }
      }
  }
  return(t);
}
ATerm assert_1_0 (ATerm k_136 (ATerm), ATerm t)
{
  ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL,o_5 = NULL,p_5 = NULL,r_5 = NULL,s_5 = NULL;
  if(match_cons(t, sym__2))
    {
      l_50 = ATgetArgument(t, 0);
      m_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_136(t);
  n_50 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_50, l_50, m_50);
  t = table_push_0_0(t);
  {
    ATerm c_50 = t;
    int d_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_5 = NULL,n_5 = NULL;
        n_5 = t;
        t = term_e_50;
        l_5 = t;
        t = SSL_table_get(n_50, l_5);
        ;
        LocalPopChoice(d_50);
      }
    else
      {
        t = c_50;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_50 = ATgetFirst((ATermList) t);
        p_50 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    r_5 = t;
    t = term_e_50;
    o_5 = t;
    t = r_5;
    s_5 = t;
    t = (ATerm) ATinsert(CheckATermList(p_50), (ATerm) ATinsert(CheckATermList(o_50), l_50));
    p_5 = t;
    t = SSL_table_put(n_50, o_5, p_5);
    t = (ATerm) ATmakeAppl(sym__2, l_50, m_50);
  }
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm a_51 = NULL;
  a_51 = t;
  {
    ATerm f_50 = t;
    int g_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_12 = NULL,n_12 = NULL,x_5 = NULL,z_5 = NULL;
        t = term_h_50;
        z_5 = t;
        t = term_h_50;
        x_5 = t;
        t = SSL_table_get(x_5, a_51);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_12 = ATgetFirst((ATermList) t);
            {
              ATerm k_50 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = n_12;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm q_50 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_50) != ATmakeSymbol("j_0", 0, ATtrue)))
              _fail(t);
            h_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_12;
        ;
        LocalPopChoice(g_50);
      }
    else
      {
        t = f_50;
        {
          ATerm v_12 = NULL,z_12 = NULL,b_6 = NULL,c_6 = NULL;
          t = term_h_50;
          c_6 = t;
          t = term_h_50;
          b_6 = t;
          t = SSL_table_get(b_6, a_51);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_12 = ATgetFirst((ATermList) t);
              {
                ATerm r_50 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = z_12;
          if(match_cons(t, sym_Defined_2))
            {
              ATerm s_50 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) s_50) != ATmakeSymbol("e_0", 0, ATtrue)))
                _fail(t);
              v_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_12;
        }
      }
  }
  return(t);
}
ATerm d_52 (ATerm n_51, ATerm t)
{
  ATerm p_51 = NULL,q_51 = NULL,j_13 = NULL,d_6 = NULL,e_6 = NULL;
  t = term_t_50;
  e_6 = t;
  t = term_t_50;
  d_6 = t;
  t = SSL_table_get(d_6, n_51);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_13 = ATgetFirst((ATermList) t);
      {
        ATerm u_50 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_13;
  if(match_cons(t, sym_Defined_3))
    {
      ATerm v_50 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_50) != ATmakeSymbol("c_0", 0, ATtrue)))
        _fail(t);
      p_51 = ATgetArgument(t, 1);
      q_51 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_51), p_51);
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm t_51 = NULL,b_52 = NULL;
  t_51 = t;
  if(match_cons(t, sym__2))
    {
      ATerm w_50 = ATgetArgument(t, 0);
      b_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_52;
  {
    ATerm x_50 = t;
    int y_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_50 = ATgetArgument(t, 0);
            ATerm b_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(y_50);
        {
          ATerm c_51 = t;
          int d_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_13 = NULL,r_13 = NULL,f_6 = NULL,g_6 = NULL;
              t = term_t_50;
              g_6 = t;
              t = term_t_50;
              f_6 = t;
              t = SSL_table_get(f_6, t_51);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  r_13 = ATgetFirst((ATermList) t);
                  {
                    ATerm e_51 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = r_13;
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm f_51 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) f_51) != ATmakeSymbol("h_0", 0, ATtrue)))
                    _fail(t);
                  n_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_13;
              ;
              LocalPopChoice(d_51);
            }
          else
            {
              t = c_51;
              t = d_52(t_51, t);
            }
        }
      }
    else
      {
        t = x_50;
        t = d_52(t_51, t);
      }
  }
  return(t);
}
ATerm x_28 (ATerm t)
{
  t = term_b_38;
  return(t);
}
ATerm y_28 (ATerm t)
{
  ATerm o_52 = NULL,p_52 = NULL;
  if(match_cons(t, sym__2))
    {
      o_52 = ATgetArgument(t, 0);
      p_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_51 = t;
    int h_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(o_52, p_52);
        ;
        LocalPopChoice(h_51);
      }
    else
      {
        t = g_51;
        t = SSL_addr(o_52, p_52);
      }
  }
  return(t);
}
ATerm z_28 (ATerm t)
{
  t = term_y_34;
  return(t);
}
ATerm a_29 (ATerm t)
{
  t = term_b_38;
  return(t);
}
ATerm b_29 (ATerm t)
{
  ATerm q_52 = NULL,r_52 = NULL;
  if(match_cons(t, sym__2))
    {
      q_52 = ATgetArgument(t, 0);
      r_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_51 = t;
    int j_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(q_52, r_52);
        ;
        LocalPopChoice(j_51);
      }
    else
      {
        t = i_51;
        t = SSL_addr(q_52, r_52);
      }
  }
  return(t);
}
ATerm c_29 (ATerm t)
{
  t = term_y_34;
  return(t);
}
ATerm d_29 (ATerm t)
{
  ATerm t_52 = NULL;
  if(match_cons(t, sym__2))
    {
      t_52 = ATgetArgument(t, 0);
      if((t_52 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm e_29 (ATerm t)
{
  t = term_t_50;
  return(t);
}
ATerm f_29 (ATerm t)
{
  t = term_h_50;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL;
  e_52 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      f_52 = ATgetArgument(t, 0);
      g_52 = ATgetArgument(t, 1);
      h_52 = ATgetArgument(t, 2);
      {
        ATerm k_51 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  i_52 = t;
  t = g_52;
  t = foldr_3_0(x_28, y_28, z_28, t);
  j_52 = t;
  t = h_52;
  t = foldr_3_0(a_29, b_29, c_29, t);
  k_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_52, (ATerm) ATmakeAppl(sym__2, j_52, k_52));
  {
    ATerm l_51 = t;
    int m_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        ;
        LocalPopChoice(m_51);
      }
    else
      {
        t = l_51;
        t = (ATerm) ATempty;
      }
    l_52 = t;
    t = f_52;
    {
      ATerm o_51 = t;
      int r_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Arities_0_0(t);
          ;
          LocalPopChoice(r_51);
        }
      else
        {
          t = o_51;
          t = (ATerm) ATempty;
        }
      m_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_52, k_52)), m_52);
      t = union_1_0(d_29, t);
      n_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_52, (ATerm) ATmakeAppl(sym__2, j_52, k_52)), (ATerm) ATmakeAppl(sym_Defined_2, term_s_51, (ATerm) ATinsert(CheckATermList(l_52), e_52)));
      t = assert_1_0(e_29, t);
      t = (ATerm) ATmakeAppl(sym__2, f_52, (ATerm) ATmakeAppl(sym_Defined_2, term_u_51, n_52));
      t = assert_1_0(f_29, t);
      t = i_52;
    }
  }
  return(t);
}
ATerm g_29 (ATerm t)
{
  t = term_b_38;
  return(t);
}
ATerm h_29 (ATerm t)
{
  ATerm a_53 = NULL,b_53 = NULL;
  if(match_cons(t, sym__2))
    {
      a_53 = ATgetArgument(t, 0);
      b_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_51 = t;
    int w_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(a_53, b_53);
        ;
        LocalPopChoice(w_51);
      }
    else
      {
        t = v_51;
        t = SSL_addr(a_53, b_53);
      }
  }
  return(t);
}
ATerm i_29 (ATerm t)
{
  t = term_y_34;
  return(t);
}
ATerm j_29 (ATerm t)
{
  t = term_b_38;
  return(t);
}
ATerm k_29 (ATerm t)
{
  ATerm c_53 = NULL,e_53 = NULL;
  if(match_cons(t, sym__2))
    {
      c_53 = ATgetArgument(t, 0);
      e_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_51 = t;
    int y_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(c_53, e_53);
        ;
        LocalPopChoice(y_51);
      }
    else
      {
        t = x_51;
        t = SSL_addr(c_53, e_53);
      }
  }
  return(t);
}
ATerm l_29 (ATerm t)
{
  t = term_y_34;
  return(t);
}
ATerm DefinitionName_0_0 (ATerm t)
{
  ATerm u_52 = NULL,v_52 = NULL,w_52 = NULL,y_52 = NULL,z_52 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      u_52 = ATgetArgument(t, 0);
      v_52 = ATgetArgument(t, 1);
      w_52 = ATgetArgument(t, 2);
      {
        ATerm z_51 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = v_52;
  t = foldr_3_0(g_29, h_29, i_29, t);
  y_52 = t;
  t = w_52;
  t = foldr_3_0(j_29, k_29, l_29, t);
  z_52 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, u_52, (ATerm) ATmakeAppl(sym__2, y_52, z_52)));
  return(t);
}
ATerm union_1_0 (ATerm d_121 (ATerm), ATerm t)
{
  ATerm i_53 = NULL,j_53 = NULL;
  if(match_cons(t, sym__2))
    {
      i_53 = ATgetArgument(t, 0);
      j_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_53;
  {
    ATerm k_53 (ATerm t)
    {
      ATerm a_52 = t;
      int c_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = j_53;
          ;
          LocalPopChoice(c_52);
        }
      else
        {
          t = a_52;
          {
            ATerm s_52 = t;
            int x_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_13 = NULL,u_13 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    t_13 = ATgetFirst((ATermList) t);
                    u_13 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = j_53;
                {
                  ATerm m_29 (ATerm t)
                  {
                    ATerm v_13 = NULL;
                    v_13 = t;
                    t = (ATerm) ATmakeAppl(sym__2, t_13, v_13);
                    t = d_121(t);
                    return(t);
                  }
                  t = fetch_1_0(m_29, t);
                  t = u_13;
                  t = k_53(t);
                }
                ;
                LocalPopChoice(x_52);
              }
            else
              {
                t = s_52;
                t = Cons_2_0(_id, k_53, t);
              }
          }
        }
      return(t);
    }
    t = k_53(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm n_123 (ATerm), ATerm o_123 (ATerm), ATerm p_123 (ATerm), ATerm t)
{
  ATerm d_53 = t;
  int f_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_123(t);
      ;
      LocalPopChoice(f_53);
    }
  else
    {
      t = d_53;
      {
        ATerm n_53 = NULL,o_53 = NULL,r_53 = NULL,s_53 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_53 = ATgetFirst((ATermList) t);
            o_53 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_53;
        t = p_123(t);
        r_53 = t;
        t = o_53;
        t = foldr_3_0(n_123, o_123, p_123, t);
        s_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_53, s_53);
        t = o_123(t);
      }
    }
  return(t);
}
ATerm n_29 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_29 (ATerm t)
{
  t = union_1_0(p_29, t);
  return(t);
}
ATerm p_29 (ATerm t)
{
  ATerm w_53 = NULL;
  if(match_cons(t, sym__2))
    {
      w_53 = ATgetArgument(t, 0);
      if((w_53 != ATgetArgument(t, 1)))
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
  ATerm t_53 = NULL,u_53 = NULL,v_53 = NULL;
  t_53 = t;
  t = foldr_3_0(n_29, o_29, DefinitionName_0_0, t);
  u_53 = t;
  t = t_53;
  t = map_1_0(RegisterSDefT_0_0, t);
  v_53 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_53, v_53, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm v_91 (ATerm), ATerm t)
{
  ATerm z_53 = NULL,a_54 = NULL,e_54 = NULL,f_54 = NULL,h_6 = NULL,j_6 = NULL;
  f_54 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      a_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_54);
  z_53 = t;
  t = a_54;
  t = v_91(t);
  e_54 = t;
  j_6 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, e_54);
  h_6 = t;
  t = SSLsetAnnotations(h_6, z_53);
  return(t);
}
ATerm Cons_2_0 (ATerm r_91 (ATerm), ATerm s_91 (ATerm), ATerm t)
{
  ATerm l_54 = NULL,m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL,k_6 = NULL,l_6 = NULL;
  q_54 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_54 = ATgetFirst((ATermList) t);
      n_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_54);
  l_54 = t;
  t = m_54;
  t = r_91(t);
  o_54 = t;
  t = n_54;
  t = s_91(t);
  p_54 = t;
  l_6 = t;
  t = (ATerm) ATinsert(CheckATermList(p_54), o_54);
  k_6 = t;
  t = SSLsetAnnotations(k_6, l_54);
  return(t);
}
ATerm Specification_1_0 (ATerm a_92 (ATerm), ATerm t)
{
  ATerm t_54 = NULL,u_54 = NULL,v_54 = NULL,w_54 = NULL,m_6 = NULL,n_6 = NULL;
  w_54 = t;
  if(match_cons(t, sym_Specification_1))
    {
      u_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_54);
  t_54 = t;
  t = u_54;
  t = a_92(t);
  v_54 = t;
  n_6 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, v_54);
  m_6 = t;
  t = SSLsetAnnotations(m_6, t_54);
  return(t);
}
ATerm _2_0 (ATerm c_87 (ATerm), ATerm d_87 (ATerm), ATerm t)
{
  ATerm z_54 = NULL,b_55 = NULL,c_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL,o_6 = NULL,q_6 = NULL;
  g_55 = t;
  if(match_cons(t, sym__2))
    {
      b_55 = ATgetArgument(t, 0);
      c_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_55);
  z_54 = t;
  t = b_55;
  t = c_87(t);
  e_55 = t;
  t = c_55;
  t = d_87(t);
  f_55 = t;
  q_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_55, f_55);
  o_6 = t;
  t = SSLsetAnnotations(o_6, z_54);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm r_128 (ATerm), ATerm t)
{
  ATerm k_55 = NULL,l_55 = NULL,o_55 = NULL;
  if(match_cons(t, sym__2))
    {
      k_55 = ATgetArgument(t, 0);
      l_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_55, term_g_53);
  t = open_stream_0_0(t);
  o_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_55, l_55);
  t = r_128(t);
  t = fclose_0_0(t);
  t = l_55;
  return(t);
}
ATerm t_29 (ATerm t)
{
  t = fetch_1_0(v_29, t);
  return(t);
}
ATerm u_29 (ATerm t)
{
  t = WriteToFile_1_0(w_29, t);
  return(t);
}
ATerm v_29 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm w_29 (ATerm t)
{
  ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_53 = ATgetArgument(t, 0);
      if(match_cons(h_53, sym_Stream_1))
        {
          r_55 = ATgetArgument(h_53, 0);
        }
      else
        _fail(t);
      s_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(r_55, s_55);
  t_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_55);
  return(t);
}
ATerm x_29 (ATerm t)
{
  t = WriteToFile_1_0(y_29, t);
  return(t);
}
ATerm y_29 (ATerm t)
{
  ATerm u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL,r_6 = NULL,s_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_53 = ATgetArgument(t, 0);
      if(match_cons(l_53, sym_Stream_1))
        {
          u_55 = ATgetArgument(l_53, 0);
        }
      else
        _fail(t);
      v_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(u_55, v_55);
  w_55 = t;
  s_6 = t;
  t = term_m_53;
  r_6 = t;
  t = SSL_fputc(r_6, w_55);
  x_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_55);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm p_55 = NULL,q_55 = NULL;
  p_55 = t;
  {
    ATerm q_29 (ATerm t)
    {
      ATerm p_53 = t;
      int q_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_29 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((q_55 != NULL) && (q_55 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  q_55 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(r_29, t);
          ;
          LocalPopChoice(q_53);
        }
      else
        {
          t = p_53;
          t = term_x_53;
          if(((q_55 != NULL) && (q_55 != t)))
            _fail(t);
          else
            q_55 = t;
        }
      return(t);
    }
    t = _2_0(q_29, _id, t);
    t = p_55;
    {
      ATerm s_29 (ATerm t)
      {
        ATerm y_13 = NULL;
        y_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_55), y_13);
        return(t);
      }
      t = _2_0(_id, s_29, t);
      {
        ATerm y_53 = t;
        int b_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(t_29, u_29, t);
            ;
            LocalPopChoice(b_54);
          }
        else
          {
            t = y_53;
            t = _2_0(_id, x_29, t);
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
ATerm apply_strategy_1_0 (ATerm t_131 (ATerm), ATerm t)
{
  ATerm y_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL,c_56 = NULL;
  y_55 = t;
  t = dtime_0_0(t);
  t = y_55;
  t = t_131(t);
  z_55 = t;
  t = dtime_0_0(t);
  a_56 = t;
  t = z_55;
  if(match_cons(t, sym__2))
    {
      b_56 = ATgetArgument(t, 0);
      c_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_56), (ATerm) ATmakeAppl(sym_Runtime_1, a_56)), c_56);
  return(t);
}
ATerm s_56 (ATerm m_56, ATerm t)
{
  t = SSL_fclose(m_56);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_56 = NULL,q_56 = NULL;
  q_56 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_56 = ATgetArgument(t, 0);
      {
        ATerm c_54 = t;
        int d_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_56);
            ;
            LocalPopChoice(d_54);
          }
        else
          {
            t = c_54;
            t = s_56(q_56, t);
          }
      }
    }
  else
    {
      t = s_56(q_56, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_56 = NULL;
  t = SSL_stdin_stream();
  t_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_56);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_56 = NULL;
  t = SSL_stdout_stream();
  u_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_56);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_56 = NULL;
  t = SSL_stderr_stream();
  v_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_56);
  return(t);
}
ATerm z_29 (ATerm t)
{
  ATerm d_57 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      d_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_57;
  return(t);
}
ATerm a_30 (ATerm t)
{
  ATerm h_57 = NULL;
  h_57 = t;
  t = SSL_is_string(h_57);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_54 = ATgetArgument(t, 0);
      ATerm h_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_54 = t;
    int j_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_14 = NULL,m_14 = NULL;
        l_14 = t;
        t = SSL_explode_term(l_14);
        if(match_cons(t, sym__2))
          {
            ATerm k_54 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_54) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm r_54 = ATgetArgument(t, 1);
              if(((ATgetType(r_54) == AT_LIST) && !(ATisEmpty(r_54))))
                {
                  m_14 = ATgetFirst((ATermList) r_54);
                  {
                    ATerm s_54 = (ATerm) ATgetNext((ATermList) r_54);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = m_14;
        if(match_cons(t, sym_stderr_0))
          {
            t = m_14;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = m_14;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = m_14;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(j_54);
      }
    else
      {
        t = i_54;
        {
          ATerm x_54 = t;
          int y_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_57 = NULL,b_57 = NULL,c_57 = NULL;
              t = _2_0(z_29, _id, t);
              if(match_cons(t, sym__2))
                {
                  a_57 = ATgetArgument(t, 0);
                  b_57 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(a_57, b_57);
              c_57 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, c_57);
              ;
              LocalPopChoice(y_54);
            }
          else
            {
              t = x_54;
              {
                ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL;
                t = _2_0(a_30, _id, t);
                if(match_cons(t, sym__2))
                  {
                    e_57 = ATgetArgument(t, 0);
                    f_57 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(e_57, f_57);
                g_57 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, g_57);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_57 = NULL,j_57 = NULL,k_57 = NULL;
  ATerm a_55 = t;
  int d_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_57 = NULL;
      l_57 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_57, term_h_55);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(d_55);
    }
  else
    {
      t = a_55;
      {
        ATerm n_14 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL;
        n_14 = t;
        t = term_i_55;
        w_6 = t;
        t = term_h_33;
        u_6 = t;
        t = w_6;
        x_6 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, n_14), term_i_55);
        v_6 = t;
        t = SSL_printnl(u_6, v_6);
        t = n_14;
        _fail(t);
      }
    }
  i_57 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(k_57);
  j_57 = t;
  t = i_57;
  t = fclose_0_0(t);
  t = j_57;
  return(t);
}
ATerm fetch_1_0 (ATerm k_106 (ATerm), ATerm t)
{
  ATerm q_57 (ATerm t)
  {
    ATerm j_55 = t;
    int m_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(k_106, _id, t);
        ;
        LocalPopChoice(m_55);
      }
    else
      {
        t = j_55;
        t = Cons_2_0(_id, q_57, t);
      }
    return(t);
  }
  t = q_57(t);
  return(t);
}
ATerm b_30 (ATerm t)
{
  ATerm n_55 = t;
  int d_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(d_56);
    }
  else
    {
      t = n_55;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm e_56 = t;
  int f_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_57 = NULL;
      z_57 = t;
      t = SSL_is_string(z_57);
      ;
      LocalPopChoice(f_56);
    }
  else
    {
      t = e_56;
      {
        ATerm g_56 = t;
        int h_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(b_30, t);
            ;
            LocalPopChoice(h_56);
          }
        else
          {
            t = g_56;
            {
              ATerm k_58 = NULL,l_58 = NULL,m_58 = NULL;
              k_58 = t;
              if(match_cons(t, sym_Path_1))
                {
                  l_58 = ATgetArgument(t, 0);
                  t = l_58;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      l_58 = ATgetArgument(t, 0);
                      t = l_58;
                      {
                        ATerm i_56 = t;
                        int j_56 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm y_6 = NULL,z_6 = NULL;
                            z_6 = t;
                            t = term_k_56;
                            y_6 = t;
                            t = SSL_table_get(y_6, l_58);
                            {
                              ATerm l_56 = t;
                              int n_56 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm k_15 = NULL,b_7 = NULL,d_7 = NULL;
                                  t = eval_config_0_0(t);
                                  k_15 = t;
                                  d_7 = t;
                                  t = term_k_56;
                                  b_7 = t;
                                  t = SSL_table_put(b_7, l_58, k_15);
                                  t = k_15;
                                  ;
                                  LocalPopChoice(n_56);
                                }
                              else
                                {
                                  t = l_56;
                                }
                            }
                            ;
                            LocalPopChoice(j_56);
                          }
                        else
                          {
                            t = i_56;
                            {
                              ATerm e_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL;
                              t = term_o_56;
                              h_7 = t;
                              t = term_h_33;
                              e_7 = t;
                              t = h_7;
                              i_7 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, l_58), term_o_56);
                              g_7 = t;
                              t = SSL_printnl(e_7, g_7);
                              t = l_58;
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm u_15 = NULL,v_15 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          l_58 = ATgetArgument(t, 0);
                          m_58 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = l_58;
                      t = eval_config_0_0(t);
                      u_15 = t;
                      t = m_58;
                      t = eval_config_0_0(t);
                      v_15 = t;
                      t = SSL_strcat(u_15, v_15);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm c_130 (ATerm), ATerm t)
{
  ATerm r_56 = t;
  int w_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_58 = NULL,v_58 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL;
      t_58 = t;
      t = term_x_56;
      l_7 = t;
      t = term_k_56;
      j_7 = t;
      t = l_7;
      m_7 = t;
      t = term_x_56;
      k_7 = t;
      t = SSL_table_get(j_7, k_7);
      {
        ATerm y_56 = t;
        int z_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_16 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL;
            t = eval_config_0_0(t);
            c_16 = t;
            p_7 = t;
            t = term_k_56;
            n_7 = t;
            t = p_7;
            q_7 = t;
            t = term_x_56;
            o_7 = t;
            t = SSL_table_put(n_7, o_7, c_16);
            t = c_16;
            ;
            LocalPopChoice(z_56);
          }
        else
          {
            t = y_56;
          }
        v_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_58, term_m_57);
        t = geq_0_0(t);
        t = t_58;
        t = c_130(t);
      }
      ;
      LocalPopChoice(w_56);
    }
  else
    {
      t = r_56;
    }
  return(t);
}
ATerm c_30 (ATerm t)
{
  ATerm x_58 = NULL;
  x_58 = t;
  if(match_string(t, "-k"))
    {
      t = x_58;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_58;
    }
  return(t);
}
ATerm d_30 (ATerm t)
{
  ATerm y_58 = NULL,z_58 = NULL,x_7 = NULL,f_8 = NULL,n_8 = NULL,o_8 = NULL;
  y_58 = t;
  t = SSL_string_to_int(y_58);
  z_58 = t;
  n_8 = t;
  t = term_k_56;
  x_7 = t;
  t = n_8;
  o_8 = t;
  t = term_r_57;
  f_8 = t;
  t = SSL_table_put(x_7, f_8, z_58);
  t = y_58;
  return(t);
}
ATerm e_30 (ATerm t)
{
  t = term_s_57;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_30, d_30, e_30, t);
  return(t);
}
ATerm f_30 (ATerm t)
{
  ATerm b_59 = NULL;
  b_59 = t;
  if(match_string(t, "-S"))
    {
      t = b_59;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_59;
    }
  return(t);
}
ATerm g_30 (ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL;
  t_8 = t;
  t = term_k_56;
  q_8 = t;
  t = t_8;
  u_8 = t;
  t = term_x_56;
  r_8 = t;
  t = u_8;
  v_8 = t;
  t = term_b_38;
  s_8 = t;
  t = SSL_table_put(q_8, r_8, s_8);
  t = term_t_57;
  return(t);
}
ATerm h_30 (ATerm t)
{
  t = term_u_57;
  return(t);
}
ATerm i_30 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_30 (ATerm t)
{
  ATerm c_59 = NULL,d_59 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL;
  c_59 = t;
  t = SSL_string_to_int(c_59);
  d_59 = t;
  y_8 = t;
  t = term_k_56;
  w_8 = t;
  t = y_8;
  z_8 = t;
  t = term_x_56;
  x_8 = t;
  t = SSL_table_put(w_8, x_8, d_59);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_59);
  return(t);
}
ATerm k_30 (ATerm t)
{
  t = term_v_57;
  return(t);
}
ATerm l_30 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_30 (ATerm t)
{
  ATerm b_9 = NULL,h_9 = NULL,l_9 = NULL,n_9 = NULL,o_9 = NULL,r_9 = NULL;
  n_9 = t;
  t = term_k_56;
  b_9 = t;
  t = n_9;
  o_9 = t;
  t = term_w_57;
  h_9 = t;
  t = o_9;
  r_9 = t;
  t = term_m_9;
  l_9 = t;
  t = SSL_table_put(b_9, h_9, l_9);
  t = term_x_57;
  return(t);
}
ATerm n_30 (ATerm t)
{
  t = term_y_57;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_58 = t;
  int b_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_30, g_30, h_30, t);
      ;
      LocalPopChoice(b_58);
    }
  else
    {
      t = a_58;
      {
        ATerm c_58 = t;
        int d_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(i_30, j_30, k_30, t);
            ;
            LocalPopChoice(d_58);
          }
        else
          {
            t = c_58;
            t = Option_3_0(l_30, m_30, n_30, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm g_59 = NULL,h_59 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_59 = NULL;
      t = term_m_9;
      t = d_0(t);
      i_59 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_58, term_f_58, i_59);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm l_59 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_59 = ATgetFirst((ATermList) t);
          h_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_59;
      t = a_0(t);
      t = term_m_9;
      t = b_0(t);
      l_59 = t;
      t = (ATerm) ATinsert(CheckATermList(h_59), l_59);
    }
  return(t);
}
ATerm o_30 (ATerm t)
{
  ATerm n_59 = NULL;
  n_59 = t;
  if(match_string(t, "-o"))
    {
      t = n_59;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_59;
    }
  return(t);
}
ATerm p_30 (ATerm t)
{
  ATerm o_59 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL;
  o_59 = t;
  a_10 = t;
  t = term_k_56;
  y_9 = t;
  t = a_10;
  b_10 = t;
  t = term_g_58;
  z_9 = t;
  t = SSL_table_put(y_9, z_9, o_59);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_59);
  return(t);
}
ATerm q_30 (ATerm t)
{
  t = term_h_58;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_30, p_30, q_30, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm r_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL,c_10 = NULL,e_10 = NULL;
  if(match_cons(t, sym__3))
    {
      r_59 = ATgetArgument(t, 0);
      s_59 = ATgetArgument(t, 1);
      t_59 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_59, s_59);
  {
    ATerm i_58 = t;
    int j_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_58 = ATgetArgument(t, 0);
            ATerm o_58 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(r_59, s_59);
        ;
        LocalPopChoice(j_58);
      }
    else
      {
        t = i_58;
        t = (ATerm) ATempty;
      }
    u_59 = t;
    e_10 = t;
    t = (ATerm) ATinsert(CheckATermList(u_59), t_59);
    c_10 = t;
    t = SSL_table_put(r_59, s_59, c_10);
    t = (ATerm) ATmakeAppl(sym__3, r_59, s_59, t_59);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm c_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_60 = NULL;
      t = term_m_9;
      t = m_0(t);
      g_60 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_58, term_f_58, g_60);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm k_60 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_60 = ATgetFirst((ATermList) t);
          d_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_60;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_60 = ATgetFirst((ATermList) t);
          f_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_60;
      t = i_0(t);
      t = e_60;
      t = k_0(t);
      k_60 = t;
      t = (ATerm) ATinsert(CheckATermList(f_60), k_60);
    }
  return(t);
}
ATerm r_30 (ATerm t)
{
  ATerm m_60 = NULL;
  m_60 = t;
  if(match_string(t, "-i"))
    {
      t = m_60;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_60;
    }
  return(t);
}
ATerm s_30 (ATerm t)
{
  ATerm n_60 = NULL,h_10 = NULL,l_10 = NULL,m_10 = NULL,o_10 = NULL;
  n_60 = t;
  m_10 = t;
  t = term_k_56;
  h_10 = t;
  t = m_10;
  o_10 = t;
  t = term_p_58;
  l_10 = t;
  t = SSL_table_put(h_10, l_10, n_60);
  t = (ATerm) ATmakeAppl(sym_Input_1, n_60);
  return(t);
}
ATerm t_30 (ATerm t)
{
  t = term_q_58;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_30, s_30, t_30, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_60 = NULL,y_10 = NULL,p_10 = NULL,s_10 = NULL,t_10 = NULL,x_10 = NULL,z_10 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_9;
  t = whoami_0_0(t);
  o_60 = t;
  t_10 = t;
  t = term_h_33;
  p_10 = t;
  t = t_10;
  x_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_58), o_60);
  s_10 = t;
  t = SSL_printnl(p_10, s_10);
  z_10 = t;
  t = term_y_34;
  y_10 = t;
  t = SSL_exit(y_10);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm a_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL;
  t = term_s_58;
  k_11 = t;
  t = term_k_56;
  a_11 = t;
  t = k_11;
  l_11 = t;
  t = term_s_58;
  j_11 = t;
  t = SSL_table_get(a_11, j_11);
  {
    ATerm u_58 = t;
    int w_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_16 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,r_11 = NULL;
        t = eval_config_0_0(t);
        h_16 = t;
        o_11 = t;
        t = term_k_56;
        m_11 = t;
        t = o_11;
        r_11 = t;
        t = term_s_58;
        n_11 = t;
        t = SSL_table_put(m_11, n_11, h_16);
        t = h_16;
        ;
        LocalPopChoice(w_58);
      }
    else
      {
        t = u_58;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm l_123 (ATerm), ATerm m_123 (ATerm), ATerm t)
{
  ATerm a_59 = t;
  int e_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_123(t);
      ;
      LocalPopChoice(e_59);
    }
  else
    {
      t = a_59;
      {
        ATerm r_60 = NULL,s_60 = NULL,w_60 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_60 = ATgetFirst((ATermList) t);
            s_60 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_60;
        t = foldr_2_0(l_123, m_123, t);
        w_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_60, w_60);
        t = m_123(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm y_30 (ATerm t)
{
  t = term_b_38;
  return(t);
}
ATerm z_30 (ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL;
  if(match_cons(t, sym__2))
    {
      m_16 = ATgetArgument(t, 0);
      n_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_59 = t;
    int j_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(m_16, n_16);
        ;
        LocalPopChoice(j_59);
      }
    else
      {
        t = f_59;
        t = SSL_addr(m_16, n_16);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_60 = NULL,i_16 = NULL,j_16 = NULL;
  t = times_0_0(t);
  i_16 = t;
  t = SSL_explode_term(i_16);
  if(match_cons(t, sym__2))
    {
      ATerm k_59 = ATgetArgument(t, 0);
      j_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_16;
  t = foldr_2_0(y_30, z_30, t);
  z_60 = t;
  t = SSL_TicksToSeconds(z_60);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_61 = NULL,l_61 = NULL,m_61 = NULL;
  k_61 = t;
  if(match_cons(t, sym__2))
    {
      l_61 = ATgetArgument(t, 0);
      m_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_59 = t;
    int p_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_61;
        if((l_61 != t))
          {
            _fail(t);
          }
        t = k_61;
        ;
        LocalPopChoice(p_59);
      }
    else
      {
        t = m_59;
        t = k_61;
        {
          ATerm q_59 = t;
          int v_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_61, m_61);
              ;
              LocalPopChoice(v_59);
            }
          else
            {
              t = q_59;
              t = SSL_gtr(l_61, m_61);
            }
          t = (ATerm) ATmakeAppl(sym__2, l_61, m_61);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_130 (ATerm), ATerm t)
{
  ATerm w_59 = t;
  int x_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_61 = NULL,r_61 = NULL,s_11 = NULL,u_11 = NULL,z_11 = NULL,a_12 = NULL;
      p_61 = t;
      t = term_x_56;
      z_11 = t;
      t = term_k_56;
      s_11 = t;
      t = z_11;
      a_12 = t;
      t = term_x_56;
      u_11 = t;
      t = SSL_table_get(s_11, u_11);
      {
        ATerm y_59 = t;
        int z_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_17 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,f_12 = NULL;
            t = eval_config_0_0(t);
            k_17 = t;
            d_12 = t;
            t = term_k_56;
            b_12 = t;
            t = d_12;
            f_12 = t;
            t = term_x_56;
            c_12 = t;
            t = SSL_table_put(b_12, c_12, k_17);
            t = k_17;
            ;
            LocalPopChoice(z_59);
          }
        else
          {
            t = y_59;
          }
        r_61 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_61, term_y_34);
        t = geq_0_0(t);
        t = p_61;
        t = b_130(t);
      }
      ;
      LocalPopChoice(x_59);
    }
  else
    {
      t = w_59;
    }
  return(t);
}
ATerm b_31 (ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL,g_12 = NULL,i_12 = NULL,k_12 = NULL,l_12 = NULL;
  t = run_time_0_0(t);
  t_61 = t;
  t = term_m_9;
  t = whoami_0_0(t);
  u_61 = t;
  k_12 = t;
  t = term_h_33;
  g_12 = t;
  t = k_12;
  l_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_60), t_61), term_a_60), u_61);
  i_12 = t;
  t = SSL_printnl(g_12, i_12);
  t = (ATerm) ATmakeAppl(sym__2, term_h_33, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_60), t_61), term_a_60), u_61));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_31, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL;
  t = report_run_time_0_0(t);
  t_12 = t;
  t = term_b_38;
  s_12 = t;
  t = SSL_exit(s_12);
  return(t);
}
ATerm c_31 (ATerm t)
{
  ATerm h_60 = t;
  int i_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(i_60);
    }
  else
    {
      t = h_60;
      {
        ATerm j_60 = t;
        int l_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(l_60);
          }
        else
          {
            t = j_60;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm r_132 (ATerm), ATerm t)
{
  ATerm p_60 = t;
  int q_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL;
      t = term_t_60;
      x_12 = t;
      t = term_k_56;
      u_12 = t;
      t = x_12;
      y_12 = t;
      t = term_t_60;
      w_12 = t;
      t = SSL_table_get(u_12, w_12);
      {
        ATerm u_60 = t;
        int v_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_17 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL;
            t = eval_config_0_0(t);
            s_17 = t;
            c_13 = t;
            t = term_k_56;
            a_13 = t;
            t = c_13;
            d_13 = t;
            t = term_t_60;
            b_13 = t;
            t = SSL_table_put(a_13, b_13, s_17);
            t = s_17;
            ;
            LocalPopChoice(v_60);
          }
        else
          {
            t = u_60;
          }
      }
      ;
      LocalPopChoice(q_60);
    }
  else
    {
      t = p_60;
      t = fetch_1_0(c_31, t);
    }
  t = r_132(t);
  return(t);
}
ATerm map_1_0 (ATerm a_106 (ATerm), ATerm t)
{
  ATerm v_61 (ATerm t)
  {
    ATerm x_60 = t;
    int y_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(y_60);
      }
    else
      {
        t = x_60;
        t = Cons_2_0(a_106, v_61, t);
      }
    return(t);
  }
  t = v_61(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm x_61 = NULL,y_61 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_61 = ATgetFirst((ATermList) t);
      y_61 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_62 = NULL,d_62 = NULL;
        t = y_61;
        t = g_0(t);
        c_62 = t;
        t = x_61;
        t = f_0(t);
        d_62 = t;
        t = y_61;
        {
          ATerm d_31 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(c_62), d_62);
            return(t);
          }
          t = reverse_acc_2_0(f_0, d_31, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_9;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm s_100 (ATerm), ATerm t)
{
  ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL,e_13 = NULL,f_13 = NULL;
  h_62 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_62);
  e_62 = t;
  t = f_62;
  t = s_100(t);
  g_62 = t;
  f_13 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_62);
  e_13 = t;
  t = SSLsetAnnotations(e_13, e_62);
  return(t);
}
ATerm g_31 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm l_31 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_31 (ATerm t)
{
  ATerm k_62 = NULL;
  k_62 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_62), term_a_61);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_13 = NULL,s_13 = NULL,w_13 = NULL,x_13 = NULL;
  ATerm b_61 = t;
  int c_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL,k_13 = NULL;
      t = term_s_58;
      i_13 = t;
      t = term_k_56;
      g_13 = t;
      t = i_13;
      k_13 = t;
      t = term_s_58;
      h_13 = t;
      t = SSL_table_get(g_13, h_13);
      {
        ATerm d_61 = t;
        int e_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_18 = NULL,l_13 = NULL,m_13 = NULL,o_13 = NULL,p_13 = NULL;
            t = eval_config_0_0(t);
            d_18 = t;
            o_13 = t;
            t = term_k_56;
            l_13 = t;
            t = o_13;
            p_13 = t;
            t = term_s_58;
            m_13 = t;
            t = SSL_table_put(l_13, m_13, d_18);
            t = d_18;
            ;
            LocalPopChoice(e_61);
          }
        else
          {
            t = d_61;
          }
      }
      ;
      LocalPopChoice(c_61);
    }
  else
    {
      t = b_61;
      t = fetch_1_0(g_31, t);
    }
  t = term_f_61;
  t = echo_0_0(t);
  w_13 = t;
  t = term_e_58;
  q_13 = t;
  t = w_13;
  x_13 = t;
  t = term_f_58;
  s_13 = t;
  t = SSL_table_get(q_13, s_13);
  t = reverse_acc_2_0(_id, l_31, t);
  t = map_1_0(m_31, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm t_100 (ATerm), ATerm t)
{
  ATerm l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL,z_13 = NULL,a_14 = NULL;
  o_62 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      m_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_62);
  l_62 = t;
  t = m_62;
  t = t_100(t);
  n_62 = t;
  a_14 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, n_62);
  z_13 = t;
  t = SSLsetAnnotations(z_13, l_62);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_62 = NULL,t_62 = NULL,b_14 = NULL,c_14 = NULL;
  s_62 = t;
  {
    ATerm g_61 = t;
    int h_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_62;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_61 = ATgetFirst((ATermList) t);
                ATerm j_61 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_62;
          }
        ;
        LocalPopChoice(h_61);
      }
    else
      {
        t = g_61;
        t = (ATerm) ATinsert(ATempty, s_62);
      }
    t_62 = t;
    c_14 = t;
    t = term_x_53;
    b_14 = t;
    t = SSL_printnl(b_14, t_62);
    t = s_62;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL;
  t = term_s_58;
  f_14 = t;
  t = term_k_56;
  d_14 = t;
  t = f_14;
  g_14 = t;
  t = term_s_58;
  e_14 = t;
  t = SSL_table_get(d_14, e_14);
  {
    ATerm n_61 = t;
    int o_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_18 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL;
        t = eval_config_0_0(t);
        k_18 = t;
        j_14 = t;
        t = term_k_56;
        h_14 = t;
        t = j_14;
        k_14 = t;
        t = term_s_58;
        i_14 = t;
        t = SSL_table_put(h_14, i_14, k_18);
        t = k_18;
        ;
        LocalPopChoice(o_61);
      }
    else
      {
        t = n_61;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm n_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_31 (ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL;
  r_14 = t;
  t = term_k_56;
  o_14 = t;
  t = r_14;
  s_14 = t;
  t = term_q_61;
  p_14 = t;
  t = s_14;
  t_14 = t;
  t = term_m_9;
  q_14 = t;
  t = SSL_table_put(o_14, p_14, q_14);
  t = term_s_61;
  return(t);
}
ATerm p_31 (ATerm t)
{
  t = term_w_61;
  return(t);
}
ATerm q_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_31 (ATerm t)
{
  ATerm u_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,g_15 = NULL,h_15 = NULL;
  y_14 = t;
  t = term_k_56;
  u_14 = t;
  t = y_14;
  z_14 = t;
  t = term_q_61;
  w_14 = t;
  t = z_14;
  a_15 = t;
  t = term_m_9;
  x_14 = t;
  t = SSL_table_put(u_14, w_14, x_14);
  e_15 = t;
  t = term_k_56;
  b_15 = t;
  t = e_15;
  g_15 = t;
  t = term_z_61;
  c_15 = t;
  t = g_15;
  h_15 = t;
  t = term_m_9;
  d_15 = t;
  t = SSL_table_put(b_15, c_15, d_15);
  t = term_a_62;
  return(t);
}
ATerm a_32 (ATerm t)
{
  t = term_b_62;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_62 = t;
  int j_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_31, o_31, p_31, t);
      ;
      LocalPopChoice(j_62);
    }
  else
    {
      t = i_62;
      t = Option_3_0(q_31, z_31, a_32, t);
    }
  return(t);
}
ATerm b_32 (ATerm t)
{
  ATerm z_62 = NULL,i_15 = NULL,j_15 = NULL,l_15 = NULL,m_15 = NULL;
  z_62 = t;
  l_15 = t;
  t = term_k_56;
  i_15 = t;
  t = l_15;
  m_15 = t;
  t = term_s_58;
  j_15 = t;
  t = SSL_table_put(i_15, j_15, z_62);
  t = (ATerm) ATmakeAppl(sym_Program_1, z_62);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_134 (ATerm), ATerm t)
{
  ATerm y_62 = NULL;
  y_62 = t;
  {
    ATerm p_62 = t;
    int q_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_62;
        t = u_134(t);
        ;
        LocalPopChoice(q_62);
      }
    else
      {
        t = p_62;
      }
    t = y_62;
    {
      ATerm c_32 (ATerm t)
      {
        ATerm u_62 = t;
        int v_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_62 = t;
            int x_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(x_62);
              }
            else
              {
                t = w_62;
                t = u_134(t);
                t = Cons_2_0(_id, c_32, t);
              }
            ;
            LocalPopChoice(v_62);
          }
        else
          {
            t = u_62;
            {
              ATerm b_63 = NULL,c_63 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_63 = ATgetFirst((ATermList) t);
                  c_63 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(c_63), (ATerm) ATmakeAppl(sym_Undefined_1, b_63));
            }
          }
        return(t);
      }
      t = Cons_2_0(b_32, c_32, t);
    }
  }
  return(t);
}
ATerm i_32 (ATerm t)
{
  ATerm m_63 = NULL;
  m_63 = t;
  if(match_string(t, "--help"))
    {
      t = m_63;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_63;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_63;
        }
    }
  return(t);
}
ATerm j_32 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL;
  z_15 = t;
  t = term_k_56;
  w_15 = t;
  t = z_15;
  a_16 = t;
  t = term_t_60;
  x_15 = t;
  t = a_16;
  b_16 = t;
  t = term_m_9;
  y_15 = t;
  t = SSL_table_put(w_15, x_15, y_15);
  t = term_a_63;
  return(t);
}
ATerm k_32 (ATerm t)
{
  t = term_d_63;
  return(t);
}
ATerm l_32 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm t_134 (ATerm), ATerm t)
{
  ATerm j_63 = NULL,k_63 = NULL,l_63 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,b_18 = NULL,e_18 = NULL;
  j_63 = t;
  r_15 = t;
  t = term_e_58;
  n_15 = t;
  t = r_15;
  s_15 = t;
  t = term_f_58;
  o_15 = t;
  t = s_15;
  t_15 = t;
  t = (ATerm) ATempty;
  p_15 = t;
  t = SSL_table_put(n_15, o_15, p_15);
  t = j_63;
  {
    ATerm d_32 (ATerm t)
    {
      ATerm e_63 = t;
      int f_63 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_134(t);
          ;
          LocalPopChoice(f_63);
        }
      else
        {
          t = e_63;
          {
            ATerm g_63 = t;
            int h_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(i_32, j_32, k_32, t);
                ;
                LocalPopChoice(h_63);
              }
            else
              {
                t = g_63;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(d_32, t);
    {
      ATerm i_63 = t;
      int n_63 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_63 = NULL;
          r_63 = t;
          {
            ATerm o_63 = t;
            int p_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_16 = NULL,s_16 = NULL;
                t = r_63;
                {
                  ATerm q_63 = t;
                  int s_63 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL,k_16 = NULL;
                      t = term_t_60;
                      g_16 = t;
                      t = term_k_56;
                      e_16 = t;
                      t = g_16;
                      k_16 = t;
                      t = term_t_60;
                      f_16 = t;
                      t = SSL_table_get(e_16, f_16);
                      {
                        ATerm t_63 = t;
                        int z_63 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm p_19 = NULL,l_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL;
                            t = eval_config_0_0(t);
                            p_19 = t;
                            p_16 = t;
                            t = term_k_56;
                            l_16 = t;
                            t = p_16;
                            q_16 = t;
                            t = term_t_60;
                            o_16 = t;
                            t = SSL_table_put(l_16, o_16, p_19);
                            t = p_19;
                            ;
                            LocalPopChoice(z_63);
                          }
                        else
                          {
                            t = t_63;
                          }
                      }
                      ;
                      LocalPopChoice(s_63);
                    }
                  else
                    {
                      t = q_63;
                      t = fetch_1_0(l_32, t);
                    }
                  t = r_63;
                  t = default_system_usage_0_0(t);
                  s_16 = t;
                  t = term_b_38;
                  r_16 = t;
                  t = SSL_exit(r_16);
                }
                ;
                LocalPopChoice(p_63);
              }
            else
              {
                t = o_63;
                {
                  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,f_17 = NULL,l_17 = NULL;
                  t = term_q_61;
                  v_16 = t;
                  t = term_k_56;
                  t_16 = t;
                  t = v_16;
                  w_16 = t;
                  t = term_q_61;
                  u_16 = t;
                  t = SSL_table_get(t_16, u_16);
                  {
                    ATerm a_64 = t;
                    int b_64 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_20 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL;
                        t = eval_config_0_0(t);
                        w_20 = t;
                        z_16 = t;
                        t = term_k_56;
                        x_16 = t;
                        t = z_16;
                        a_17 = t;
                        t = term_q_61;
                        y_16 = t;
                        t = SSL_table_put(x_16, y_16, w_20);
                        t = w_20;
                        ;
                        LocalPopChoice(b_64);
                      }
                    else
                      {
                        t = a_64;
                      }
                    t = r_63;
                    t = default_system_about_0_0(t);
                    l_17 = t;
                    t = term_b_38;
                    f_17 = t;
                    t = SSL_exit(f_17);
                  }
                }
              }
          }
          ;
          LocalPopChoice(n_63);
        }
      else
        {
          t = i_63;
          {
            ATerm c_64 = t;
            int d_64 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_17 = NULL,q_17 = NULL,r_17 = NULL,t_17 = NULL,x_17 = NULL,y_17 = NULL;
                ATerm m_32 (ATerm t)
                {
                  ATerm n_32 (ATerm t)
                  {
                    if(((k_63 != NULL) && (k_63 != t)))
                      _fail(t);
                    else
                      k_63 = t;
                    return(t);
                  }
                  t = Undefined_1_0(n_32, t);
                  return(t);
                }
                t = fetch_1_0(m_32, t);
                r_17 = t;
                t = term_h_33;
                o_17 = t;
                t = r_17;
                t_17 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_63)), term_e_64);
                q_17 = t;
                t = SSL_printnl(o_17, q_17);
                t = (ATerm) ATmakeAppl(sym__2, term_h_33, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_63)), term_e_64));
                t = default_system_usage_0_0(t);
                y_17 = t;
                t = term_y_34;
                x_17 = t;
                t = SSL_exit(x_17);
                ;
                LocalPopChoice(d_64);
              }
            else
              {
                t = c_64;
              }
          }
        }
      l_63 = t;
      e_18 = t;
      t = term_e_58;
      b_18 = t;
      t = SSL_table_destroy(b_18);
      t = l_63;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_132 (ATerm), ATerm u_132 (ATerm), ATerm v_132 (ATerm), ATerm w_132 (ATerm), ATerm t)
{
  ATerm u_63 = NULL,f_18 = NULL,g_18 = NULL,j_18 = NULL,l_18 = NULL,m_18 = NULL,o_18 = NULL;
  t = parse_options_1_0(t_132, t);
  u_63 = t;
  g_18 = t;
  t = term_f_64;
  f_18 = t;
  t = SSL_table_create(f_18);
  m_18 = t;
  t = term_f_64;
  j_18 = t;
  t = m_18;
  o_18 = t;
  t = term_g_64;
  l_18 = t;
  t = SSL_table_put(j_18, l_18, u_63);
  t = u_63;
  t = v_132(t);
  {
    ATerm h_64 = t;
    int i_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_132, t);
        ;
        LocalPopChoice(i_64);
      }
    else
      {
        t = h_64;
        {
          ATerm j_64 = t;
          int k_64 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_132(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(k_64);
            }
          else
            {
              t = j_64;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm v_32 (ATerm t)
{
  t = if_verbose2_1_0(p_33, t);
  return(t);
}
ATerm j_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_33 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL;
  s_18 = t;
  t = term_k_56;
  p_18 = t;
  t = s_18;
  t_18 = t;
  t = term_l_64;
  q_18 = t;
  t = t_18;
  u_18 = t;
  t = term_m_9;
  r_18 = t;
  t = SSL_table_put(p_18, q_18, r_18);
  t = term_m_64;
  return(t);
}
ATerm o_33 (ATerm t)
{
  t = term_n_64;
  return(t);
}
ATerm p_33 (ATerm t)
{
  ATerm v_63 = NULL,w_63 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,g_19 = NULL,h_19 = NULL,m_19 = NULL,n_19 = NULL;
  v_63 = t;
  t = term_s_58;
  x_18 = t;
  t = term_k_56;
  v_18 = t;
  t = x_18;
  y_18 = t;
  t = term_s_58;
  w_18 = t;
  t = SSL_table_get(v_18, w_18);
  {
    ATerm o_64 = t;
    int p_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_21 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL;
        t = eval_config_0_0(t);
        u_21 = t;
        e_19 = t;
        t = term_k_56;
        c_19 = t;
        t = e_19;
        f_19 = t;
        t = term_s_58;
        d_19 = t;
        t = SSL_table_put(c_19, d_19, u_21);
        t = u_21;
        ;
        LocalPopChoice(p_64);
      }
    else
      {
        t = o_64;
      }
    w_63 = t;
    m_19 = t;
    t = term_h_33;
    g_19 = t;
    t = m_19;
    n_19 = t;
    t = (ATerm) ATinsert(ATempty, w_63);
    h_19 = t;
    t = SSL_printnl(g_19, h_19);
    t = v_63;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm c_132 (ATerm), ATerm d_132 (ATerm), ATerm e_132 (ATerm), ATerm t)
{
  ATerm u_32 (ATerm t)
  {
    ATerm q_64 = t;
    int r_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_132(t);
        ;
        LocalPopChoice(r_64);
      }
    else
      {
        t = q_64;
        {
          ATerm s_64 = t;
          int t_64 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(t_64);
            }
          else
            {
              t = s_64;
              {
                ATerm u_64 = t;
                int v_64 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(v_64);
                  }
                else
                  {
                    t = u_64;
                    {
                      ATerm w_64 = t;
                      int x_64 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(j_33, k_33, o_33, t);
                          ;
                          LocalPopChoice(x_64);
                        }
                      else
                        {
                          t = w_64;
                          {
                            ATerm y_64 = t;
                            int z_64 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(z_64);
                              }
                            else
                              {
                                t = y_64;
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
  ATerm i_33 (ATerm t)
  {
    ATerm x_63 = NULL,y_63 = NULL,x_21 = NULL;
    x_63 = t;
    {
      ATerm a_65 = t;
      int b_65 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_33 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((y_63 != NULL) && (y_63 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_63 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(q_33, t);
          ;
          LocalPopChoice(b_65);
        }
      else
        {
          t = a_65;
          t = term_c_65;
          y_63 = t;
        }
      t = not_null(y_63);
      t = ReadFromFile_0_0(t);
      x_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_63, x_21);
      t = apply_strategy_1_0(c_132, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(u_32, e_132, v_32, i_33, t);
  return(t);
}
ATerm r_33 (ATerm t)
{
  t = _2_0(_id, s_33, t);
  return(t);
}
ATerm s_33 (ATerm t)
{
  t = Specification_1_0(v_33, t);
  return(t);
}
ATerm v_33 (ATerm t)
{
  t = Cons_2_0(_id, a_34, t);
  return(t);
}
ATerm a_34 (ATerm t)
{
  t = Cons_2_0(e_34, r_34, t);
  return(t);
}
ATerm e_34 (ATerm t)
{
  t = Strategies_1_0(all_defs_0_0, t);
  return(t);
}
ATerm r_34 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(r_33, _fail, default_usage_0_0, t);
  return(t);
}
