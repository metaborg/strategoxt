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
ATerm term_s_45;
ATerm term_d_45;
ATerm term_c_45;
ATerm term_x_44;
ATerm term_b_44;
ATerm term_a_44;
ATerm term_v_43;
ATerm term_p_43;
ATerm term_o_43;
ATerm term_n_43;
ATerm term_m_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_s_42;
ATerm term_n_42;
ATerm term_c_42;
ATerm term_b_42;
ATerm term_a_42;
ATerm term_x_40;
ATerm term_p_40;
ATerm term_o_40;
ATerm term_n_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_g_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_c_40;
ATerm term_u_39;
ATerm term_r_38;
ATerm term_a_38;
ATerm term_v_37;
ATerm term_j_37;
ATerm term_i_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_i_30;
ATerm term_c_30;
ATerm term_w_25;
ATerm term_o_25;
ATerm term_g_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_u_24;
ATerm term_p_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_d_23;
ATerm term_c_22;
ATerm term_d_19;
ATerm term_x_18;
ATerm term_a_16;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_i_15;
ATerm term_m_9;
void init_constant_terms (void)
{
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_Op_2, term_d_25, (ATerm) ATempty);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_ConstType_1, term_e_25);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_18);
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(sym__3, term_k_43, term_l_43, term_m_9);
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm MissingDef_0_0 (ATerm);
ATerm MissingDefMod_0_0 (ATerm);
ATerm giving_up_0_0 (ATerm);
ATerm q_0 (ATerm);
ATerm DefinitionExists_0_0 (ATerm);
ATerm Rec_2_0 (ATerm a_97 (ATerm), ATerm b_97 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm x_98 (ATerm), ATerm y_98 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm s_98 (ATerm), ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm);
ATerm Let_2_0 (ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm z_108 (ATerm), ATerm a_109 (ATerm), ATerm b_109 (ATerm), ATerm);
ATerm r_0 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm split_2_0 (ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm);
ATerm u_0 (ATerm);
ATerm w_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm h_1 (ATerm);
ATerm free_vars2_4_0 (ATerm c_118 (ATerm), ATerm d_118 (ATerm), ATerm e_118 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm f_118 (ATerm), ATerm);
ATerm i_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm b_2 (ATerm);
ATerm svars_arity_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm alltd_1_0 (ATerm m_111 (ATerm), ATerm);
ATerm c_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm d_109 (ATerm), ATerm e_109 (ATerm), ATerm);
ATerm VarDec_2_0 (ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm);
ATerm n_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm h_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm s_3 (ATerm);
ATerm u_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
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
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm f_5 (ATerm);
ATerm i_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm r_5 (ATerm);
ATerm LiftCallArgs_0_0 (ATerm);
ATerm j_28 (ATerm c_28, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm Var_1_0 (ATerm t_92 (ATerm), ATerm);
ATerm v_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm repeat_1_0 (ATerm b_120 (ATerm), ATerm);
ATerm r_6 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm App_2_0 (ATerm h_93 (ATerm), ATerm i_93 (ATerm), ATerm);
ATerm Con_3_0 (ATerm t_93 (ATerm), ATerm u_93 (ATerm), ATerm v_93 (ATerm), ATerm);
ATerm s_6 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm Scope_2_0 (ATerm n_96 (ATerm), ATerm o_96 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm y_110 (ATerm), ATerm);
ATerm Rcon_0_0 (ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm u_109 (ATerm), ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm e_7 (ATerm);
ATerm tuple_unzip_1_0 (ATerm w_113 (ATerm), ATerm);
ATerm MkDistApplication_0_0 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm copy_1_0 (ATerm z_123 (ATerm), ATerm);
ATerm MkThreadApplication_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm o_41 (ATerm r_35, ATerm s_35, ATerm t_35, ATerm u_35, ATerm);
ATerm p_41 (ATerm y_38, ATerm z_38, ATerm a_39, ATerm l_39, ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm DefineCongruence_0_0 (ATerm);
ATerm CongruenceDef_0_0 (ATerm);
ATerm n_7 (ATerm);
ATerm get_definition_0_0 (ATerm);
ATerm diff_1_0 (ATerm z_120 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm g_114 (ATerm), ATerm h_114 (ATerm), ATerm i_114 (ATerm), ATerm j_114 (ATerm), ATerm);
ATerm p_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm t_8 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm GnNextChangeGraph_3_0 (ATerm a_136 (ATerm), ATerm b_136 (ATerm), ATerm c_136 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm q_120 (ATerm), ATerm r_120 (ATerm), ATerm);
ATerm for_3_0 (ATerm t_120 (ATerm), ATerm u_120 (ATerm), ATerm v_120 (ATerm), ATerm);
ATerm w_8 (ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm a_9 (ATerm);
ATerm h_9 (ATerm);
ATerm k_9 (ATerm);
ATerm l_9 (ATerm);
ATerm extract_needed_defs_0_0 (ATerm);
ATerm assert_1_0 (ATerm j_136 (ATerm), ATerm);
ATerm Arities_0_0 (ATerm);
ATerm v_51 (ATerm l_51, ATerm);
ATerm Definitions_0_0 (ATerm);
ATerm n_9 (ATerm);
ATerm r_9 (ATerm);
ATerm s_9 (ATerm);
ATerm x_9 (ATerm);
ATerm y_9 (ATerm);
ATerm z_9 (ATerm);
ATerm a_10 (ATerm);
ATerm b_10 (ATerm);
ATerm d_10 (ATerm);
ATerm RegisterSDefT_0_0 (ATerm);
ATerm k_10 (ATerm);
ATerm l_10 (ATerm);
ATerm m_10 (ATerm);
ATerm n_10 (ATerm);
ATerm o_10 (ATerm);
ATerm r_10 (ATerm);
ATerm DefinitionName_0_0 (ATerm);
ATerm union_1_0 (ATerm e_121 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm m_123 (ATerm), ATerm n_123 (ATerm), ATerm o_123 (ATerm), ATerm);
ATerm w_10 (ATerm);
ATerm x_10 (ATerm);
ATerm y_10 (ATerm);
ATerm all_defs_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm v_91 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm r_91 (ATerm), ATerm s_91 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm a_92 (ATerm), ATerm);
ATerm _2_0 (ATerm c_87 (ATerm), ATerm d_87 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm q_128 (ATerm), ATerm);
ATerm d_11 (ATerm);
ATerm m_11 (ATerm);
ATerm n_11 (ATerm);
ATerm o_11 (ATerm);
ATerm p_11 (ATerm);
ATerm q_11 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm s_131 (ATerm), ATerm);
ATerm o_56 (ATerm i_56, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm u_11 (ATerm);
ATerm y_11 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm l_106 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm r_106 (ATerm), ATerm);
ATerm b_12 (ATerm);
ATerm c_12 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm g_12 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm b_130 (ATerm), ATerm);
ATerm h_12 (ATerm);
ATerm j_12 (ATerm);
ATerm k_12 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm s_12 (ATerm);
ATerm t_12 (ATerm);
ATerm u_12 (ATerm);
ATerm v_12 (ATerm);
ATerm w_12 (ATerm);
ATerm x_12 (ATerm);
ATerm y_12 (ATerm);
ATerm a_13 (ATerm);
ATerm b_13 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm c_13 (ATerm);
ATerm d_13 (ATerm);
ATerm e_13 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm g_13 (ATerm);
ATerm h_13 (ATerm);
ATerm i_13 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm k_123 (ATerm), ATerm l_123 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm k_13 (ATerm);
ATerm l_13 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm a_130 (ATerm), ATerm);
ATerm m_13 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm o_13 (ATerm);
ATerm need_help_1_0 (ATerm q_132 (ATerm), ATerm);
ATerm map_1_0 (ATerm a_106 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm s_100 (ATerm), ATerm);
ATerm q_13 (ATerm);
ATerm s_13 (ATerm);
ATerm t_13 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm t_100 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm u_13 (ATerm);
ATerm v_13 (ATerm);
ATerm w_13 (ATerm);
ATerm x_13 (ATerm);
ATerm y_13 (ATerm);
ATerm a_14 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm b_14 (ATerm);
ATerm parse_options_p__1_0 (ATerm t_134 (ATerm), ATerm);
ATerm f_14 (ATerm);
ATerm g_14 (ATerm);
ATerm i_14 (ATerm);
ATerm m_14 (ATerm);
ATerm parse_options_1_0 (ATerm s_134 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm s_132 (ATerm), ATerm t_132 (ATerm), ATerm u_132 (ATerm), ATerm v_132 (ATerm), ATerm);
ATerm r_14 (ATerm);
ATerm t_14 (ATerm);
ATerm u_14 (ATerm);
ATerm v_14 (ATerm);
ATerm w_14 (ATerm);
ATerm iowrap_3_0 (ATerm b_132 (ATerm), ATerm c_132 (ATerm), ATerm d_132 (ATerm), ATerm);
ATerm y_14 (ATerm);
ATerm z_14 (ATerm);
ATerm a_15 (ATerm);
ATerm f_15 (ATerm);
ATerm g_15 (ATerm);
ATerm h_15 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_0 = NULL,o_0 = NULL;
  m_0 = t;
  t = term_m_9;
  t = whoami_0_0(t);
  o_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), o_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = m_0;
  return(t);
}
ATerm MissingDef_0_0 (ATerm t)
{
  ATerm p_0 = NULL,t_0 = NULL;
  if(match_cons(t, sym__2))
    {
      p_0 = ATgetArgument(t, 0);
      t_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue))), t_0), (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue))), p_0), (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue))));
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_15), t_0), term_l_15), p_0), term_i_15);
  return(t);
}
ATerm MissingDefMod_0_0 (ATerm t)
{
  ATerm x_0 = NULL,y_0 = NULL,z_0 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_15 = ATgetArgument(t, 0);
      if(match_cons(n_15, sym_Mod_2))
        {
          x_0 = ATgetArgument(n_15, 0);
          y_0 = ATgetArgument(n_15, 1);
        }
      else
        _fail(t);
      z_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue))), z_0), (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue))), y_0), (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue))), x_0), (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue))));
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_15), z_0), term_l_15), y_0), term_p_15), x_0), term_i_15);
  return(t);
}
ATerm giving_up_0_0 (ATerm t)
{
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = (ATerm) ATinsert(ATempty, term_q_15);
  return(t);
}
ATerm q_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_15 = ATgetArgument(t, 0);
      if(((ATgetType(r_15) != AT_INT) || (ATgetInt((ATermInt) r_15) != 0)))
        _fail(t);
      {
        ATerm s_15 = ATgetArgument(t, 1);
        if(((ATgetType(s_15) != AT_INT) || (ATgetInt((ATermInt) s_15) != 0)))
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
    ATerm t_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_1;
        t = Arities_0_0(t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm v_15 = ATgetFirst((ATermList) t);
            ATerm w_15 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(w_15) == AT_LIST) && !(ATisEmpty(w_15))))
              {
                ATerm x_15 = ATgetFirst((ATermList) w_15);
                ATerm y_15 = (ATerm) ATgetNext((ATermList) w_15);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        {
          ATerm z_15 = t;
          if((PushChoice() == 0))
            {
              t = fetch_1_0(q_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = z_15;
            }
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, x_1), (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue))));
          t = (ATerm) ATinsert(ATinsert(ATempty, x_1), term_a_16);
          t = giving_up_0_0(t);
        }
        ;
        LocalPopChoice(u_15);
      }
    else
      {
        t = t_15;
        {
          ATerm f_1 = NULL,g_1 = NULL;
          t = x_1;
          t = Arities_0_0(t);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm b_16 = ATgetFirst((ATermList) t);
              if(match_cons(b_16, sym__2))
                {
                  f_1 = ATgetArgument(b_16, 0);
                  g_1 = ATgetArgument(b_16, 1);
                }
              else
                _fail(t);
              {
                ATerm d_16 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(d_16) != AT_LIST) || !(ATisEmpty(d_16))))
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
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL;
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
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, g_2, h_2), d_2);
  return(t);
}
ATerm SDefT_4_0 (ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm x_98 (ATerm), ATerm y_98 (ATerm), ATerm t)
{
  ATerm m_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL;
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
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, s_2, t_2, u_2, v_2), m_2);
  return(t);
}
ATerm SDef_3_0 (ATerm s_98 (ATerm), ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL;
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
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, d_3, e_3, f_3), z_2);
  return(t);
}
ATerm Let_2_0 (ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL;
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
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, m_3, n_3), j_3);
  return(t);
}
ATerm sboundin_3_0 (ATerm z_108 (ATerm), ATerm a_109 (ATerm), ATerm b_109 (ATerm), ATerm t)
{
  ATerm e_16 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(z_108, z_108, t);
      ;
      LocalPopChoice(g_16);
    }
  else
    {
      t = e_16;
      {
        ATerm h_16 = t;
        int i_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(b_109, b_109, z_108, t);
            ;
            LocalPopChoice(i_16);
          }
        else
          {
            t = h_16;
            {
              ATerm j_16 = t;
              int k_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(b_109, b_109, b_109, z_108, t);
                  ;
                  LocalPopChoice(k_16);
                }
              else
                {
                  t = j_16;
                  t = Rec_2_0(b_109, z_108, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm r_0 (ATerm t)
{
  ATerm v_3 = NULL;
  ATerm l_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          v_3 = ATgetArgument(t, 0);
          {
            ATerm o_16 = ATgetArgument(t, 1);
          }
          {
            ATerm q_16 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_16);
      t = v_3;
    }
  else
    {
      t = l_16;
      if(match_cons(t, sym_SDefT_4))
        {
          v_3 = ATgetArgument(t, 0);
          {
            ATerm u_16 = ATgetArgument(t, 1);
          }
          {
            ATerm v_16 = ATgetArgument(t, 2);
          }
          {
            ATerm y_16 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = v_3;
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm t_3 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      t_3 = ATgetArgument(t, 0);
      {
        ATerm z_16 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = t_3;
  t = map_1_0(r_0, t);
  return(t);
}
ATerm split_2_0 (ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm t)
{
  ATerm k_57 = NULL,m_57 = NULL,n_57 = NULL;
  k_57 = t;
  t = g_113(t);
  m_57 = t;
  t = k_57;
  t = h_113(t);
  n_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_57, n_57);
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
  t = union_1_0(b_1, t);
  return(t);
}
ATerm b_1 (ATerm t)
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
ATerm c_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_1 (ATerm t)
{
  t = union_1_0(e_1, t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm w_4 = NULL;
  if(match_cons(t, sym__2))
    {
      w_4 = ATgetArgument(t, 0);
      if((w_4 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm m_4 = NULL;
  if(match_cons(t, sym__2))
    {
      m_4 = ATgetArgument(t, 0);
      if((m_4 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4_0 (ATerm c_118 (ATerm), ATerm d_118 (ATerm), ATerm e_118 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm f_118 (ATerm), ATerm t)
{
  ATerm o_4 (ATerm t)
  {
    ATerm j_1 = NULL,k_1 = NULL,l_1 = NULL;
    j_1 = t;
    {
      ATerm a_17 = t;
      int f_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_118(t);
          ;
          LocalPopChoice(f_17);
        }
      else
        {
          t = a_17;
          t = (ATerm) ATempty;
        }
      k_1 = t;
      t = j_1;
      {
        ATerm k_17 = t;
        int l_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_3 = NULL,f_4 = NULL,h_4 = NULL;
            t = j_1;
            t = d_118(t);
            r_3 = t;
            t = j_1;
            {
              ATerm s_0 (ATerm t)
              {
                ATerm v_0 (ATerm t)
                {
                  t = r_3;
                  return(t);
                }
                t = split_2_0(o_4, v_0, t);
                t = diff_1_0(f_118, t);
                return(t);
              }
              t = e_118(s_0, o_4, u_0, t);
              f_4 = t;
              t = SSL_explode_term(f_4);
              if(match_cons(t, sym__2))
                {
                  ATerm o_17 = ATgetArgument(t, 0);
                  h_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = h_4;
              t = foldr_3_0(w_0, a_1, _id, t);
            }
            ;
            LocalPopChoice(l_17);
          }
        else
          {
            t = k_17;
            {
              ATerm s_4 = NULL;
              t = SSL_explode_term(j_1);
              if(match_cons(t, sym__2))
                {
                  ATerm q_17 = ATgetArgument(t, 0);
                  s_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = s_4;
              t = foldr_3_0(c_1, d_1, o_4, t);
            }
          }
        l_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_1, l_1);
        t = union_1_0(h_1, t);
      }
    }
    return(t);
  }
  t = o_4(t);
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm a_5 = NULL,g_5 = NULL,h_5 = NULL,m_5 = NULL,q_5 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm r_17 = ATgetArgument(t, 0);
      if(match_cons(r_17, sym_SVar_1))
        {
          a_5 = ATgetArgument(r_17, 0);
        }
      else
        _fail(t);
      g_5 = ATgetArgument(t, 1);
      h_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = g_5;
  t = foldr_3_0(o_1, p_1, q_1, t);
  m_5 = t;
  t = h_5;
  t = foldr_3_0(r_1, s_1, t_1, t);
  q_5 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, a_5, (ATerm) ATmakeAppl(sym__2, m_5, q_5)));
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm s_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind1_0_0(t);
      ;
      LocalPopChoice(t_17);
    }
  else
    {
      t = s_17;
      {
        ATerm a_6 = NULL,b_6 = NULL;
        ATerm x_17 = t;
        int y_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDef_3))
              {
                ATerm b_18 = ATgetArgument(t, 0);
                b_6 = ATgetArgument(t, 1);
                {
                  ATerm d_18 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(y_17);
            t = b_6;
            t = map_1_0(u_1, t);
          }
        else
          {
            t = x_17;
            {
              ATerm e_18 = t;
              int g_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      a_6 = ATgetArgument(t, 0);
                      {
                        ATerm j_18 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(g_18);
                  t = (ATerm) ATinsert(ATempty, a_6);
                }
              else
                {
                  t = e_18;
                  {
                    ATerm k_18 = t;
                    int l_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm m_18 = ATgetArgument(t, 0);
                            b_6 = ATgetArgument(t, 1);
                            {
                              ATerm o_18 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm p_18 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(l_18);
                        t = b_6;
                        t = map_1_0(v_1, t);
                      }
                    else
                      {
                        t = k_18;
                        if(match_cons(t, sym_RDefT_4))
                          {
                            ATerm r_18 = ATgetArgument(t, 0);
                            b_6 = ATgetArgument(t, 1);
                            {
                              ATerm s_18 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm t_18 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = b_6;
                        t = map_1_0(b_2, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm h_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_18 = ATgetArgument(t, 0);
      if(match_cons(u_18, sym__2))
        {
          h_7 = ATgetArgument(u_18, 0);
          {
            ATerm v_18 = ATgetArgument(u_18, 1);
          }
        }
      else
        _fail(t);
      if((h_7 != ATgetArgument(t, 1)))
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
  t = term_x_18;
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm t_5 = NULL,u_5 = NULL;
  if(match_cons(t, sym__2))
    {
      t_5 = ATgetArgument(t, 0);
      u_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_18 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(t_5, u_5);
        ;
        LocalPopChoice(c_19);
      }
    else
      {
        t = y_18;
        t = SSL_addr(t_5, u_5);
      }
  }
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_d_19;
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_x_18;
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm w_5 = NULL,x_5 = NULL;
  if(match_cons(t, sym__2))
    {
      w_5 = ATgetArgument(t, 0);
      x_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(w_5, x_5);
        ;
        LocalPopChoice(g_19);
      }
    else
      {
        t = f_19;
        t = SSL_addr(w_5, x_5);
      }
  }
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_d_19;
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm j_6 = NULL;
  ATerm h_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_6 = ATgetArgument(t, 0);
          {
            ATerm n_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_19);
      t = j_6;
    }
  else
    {
      t = h_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_6;
    }
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm u_6 = NULL;
  ATerm o_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_6 = ATgetArgument(t, 0);
          {
            ATerm u_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_19);
      t = u_6;
    }
  else
    {
      t = o_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_6;
    }
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm d_7 = NULL;
  ATerm a_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_7 = ATgetArgument(t, 0);
          {
            ATerm h_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_20);
      t = d_7;
    }
  else
    {
      t = a_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_7;
    }
  return(t);
}
ATerm svars_arity_0_0 (ATerm t)
{
  t = free_vars2_4_0(i_1, m_1, sboundin_3_0, n_1, t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL,k_8 = NULL,l_8 = NULL,o_8 = NULL,p_8 = NULL;
  if(match_cons(t, sym__2))
    {
      k_8 = ATgetArgument(t, 0);
      l_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_8;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_8 = ATgetFirst((ATermList) t);
      p_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_8;
  if(match_cons(t, sym__2))
    {
      e_8 = ATgetArgument(t, 0);
      f_8 = ATgetArgument(t, 1);
      {
        ATerm j_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_8;
            if((k_8 != t))
              {
                _fail(t);
              }
            t = f_8;
            ;
            LocalPopChoice(k_20);
          }
        else
          {
            t = j_20;
            t = (ATerm) ATmakeAppl(sym__2, k_8, p_8);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, k_8, p_8);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm alltd_1_0 (ATerm m_111 (ATerm), ATerm t)
{
  ATerm t_9 (ATerm t)
  {
    ATerm o_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_111(t);
        ;
        LocalPopChoice(t_20);
      }
    else
      {
        t = o_20;
        t = SRTS_all(t_9, t);
      }
    return(t);
  }
  t = t_9(t);
  return(t);
}
ATerm c_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_20 = ATgetArgument(t, 0);
      if(((ATgetType(u_20) != AT_LIST) || !(ATisEmpty(u_20))))
        _fail(t);
      {
        ATerm v_20 = ATgetArgument(t, 1);
        if(((ATgetType(v_20) != AT_LIST) || !(ATisEmpty(v_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm e_11 = NULL,s_11 = NULL,t_11 = NULL,v_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_20 = ATgetArgument(t, 0);
      if(((ATgetType(w_20) == AT_LIST) && !(ATisEmpty(w_20))))
        {
          e_11 = ATgetFirst((ATermList) w_20);
          t_11 = (ATerm) ATgetNext((ATermList) w_20);
        }
      else
        _fail(t);
      {
        ATerm x_20 = ATgetArgument(t, 1);
        if(((ATgetType(x_20) == AT_LIST) && !(ATisEmpty(x_20))))
          {
            s_11 = ATgetFirst((ATermList) x_20);
            v_11 = (ATerm) ATgetNext((ATermList) x_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_11, s_11), (ATerm) ATmakeAppl(sym__2, t_11, v_11));
  return(t);
}
ATerm k_2 (ATerm t)
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
  ATerm c_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL;
  c_10 = t;
  {
    ATerm y_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_21 = ATgetArgument(t, 0);
            ATerm b_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(z_20);
        t = c_10;
      }
    else
      {
        t = y_20;
        {
          ATerm t_10 = NULL;
          if(match_cons(t, sym__3))
            {
              f_10 = ATgetArgument(t, 0);
              g_10 = ATgetArgument(t, 1);
              h_10 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, f_10, g_10);
          t = genzip_4_0(c_2, j_2, k_2, _id, t);
          t_10 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_10, h_10);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm d_109 (ATerm), ATerm e_109 (ATerm), ATerm t)
{
  ATerm e_12 = NULL,i_12 = NULL;
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      i_12 = ATgetArgument(t, 0);
      e_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_12;
  {
    ATerm l_2 (ATerm t)
    {
      ATerm j_5 = NULL;
      t = d_109(t);
      j_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_5, i_12);
      t = lookup_0_0(t);
      t = e_109(t);
      return(t);
    }
    t = alltd_1_0(l_2, t);
  }
  return(t);
}
ATerm VarDec_2_0 (ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm t)
{
  ATerm m_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,z_12 = NULL;
  z_12 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      o_12 = ATgetArgument(t, 0);
      p_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_12);
  m_12 = t;
  t = o_12;
  t = o_98(t);
  q_12 = t;
  t = p_12;
  t = p_98(t);
  r_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, q_12, r_12), m_12);
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = VarDec_2_0(new_0_0, _id, t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = VarDec_2_0(new_0_0, _id, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm h_17 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      h_17 = ATgetArgument(t, 0);
      {
        ATerm i_21 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_17), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm i_17 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      i_17 = ATgetArgument(t, 0);
      {
        ATerm j_21 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, i_17);
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm w_17 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      w_17 = ATgetArgument(t, 0);
      {
        ATerm t_21 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = w_17;
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm z_17 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      z_17 = ATgetArgument(t, 0);
      {
        ATerm u_21 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = z_17;
  return(t);
}
ATerm s_3 (ATerm t)
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
ATerm u_3 (ATerm t)
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
ATerm w_3 (ATerm t)
{
  t = term_c_22;
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm s_5 = NULL,o_6 = NULL,z_6 = NULL;
  s_5 = t;
  t = SSL_explode_term(s_5);
  if(match_cons(t, sym__2))
    {
      ATerm d_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_22 = ATgetArgument(t, 1);
        if(((ATgetType(e_22) == AT_LIST) && !(ATisEmpty(e_22))))
          {
            o_6 = ATgetFirst((ATermList) e_22);
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
  t = SSL_explode_term(s_5);
  if(match_cons(t, sym__2))
    {
      ATerm h_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_22 = ATgetArgument(t, 1);
        if(((ATgetType(i_22) == AT_LIST) && !(ATisEmpty(i_22))))
          {
            ATerm j_22 = ATgetFirst((ATermList) i_22);
            ATerm k_22 = (ATerm) ATgetNext((ATermList) i_22);
            if(((ATgetType(k_22) == AT_LIST) && !(ATisEmpty(k_22))))
              {
                z_6 = ATgetFirst((ATermList) k_22);
                {
                  ATerm r_22 = (ATerm) ATgetNext((ATermList) k_22);
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
  t = (ATerm) ATmakeAppl(sym_Choice_2, o_6, z_6);
  return(t);
}
ATerm JoinDefs2_0_0 (ATerm t)
{
  ATerm e_15 = NULL,o_15 = NULL,c_16 = NULL,p_16 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,g_17 = NULL;
  e_15 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_22 = ATgetFirst((ATermList) t);
      if(match_cons(s_22, sym_SDefT_4))
        {
          o_15 = ATgetArgument(s_22, 0);
          c_16 = ATgetArgument(s_22, 1);
          p_16 = ATgetArgument(s_22, 2);
          {
            ATerm z_22 = ATgetArgument(s_22, 3);
          }
        }
      else
        _fail(t);
      {
        ATerm v_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = c_16;
  t = map_1_0(n_2, t);
  b_17 = t;
  t = p_16;
  t = map_1_0(x_2, t);
  c_17 = t;
  t = b_17;
  t = map_1_0(y_2, t);
  d_17 = t;
  t = c_17;
  t = map_1_0(h_3, t);
  e_17 = t;
  t = e_15;
  {
    ATerm i_3 (ATerm t)
    {
      ATerm j_17 = NULL,m_17 = NULL,n_17 = NULL,p_17 = NULL,u_17 = NULL,v_17 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          ATerm a_23 = ATgetArgument(t, 0);
          j_17 = ATgetArgument(t, 1);
          m_17 = ATgetArgument(t, 2);
          n_17 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = m_17;
      t = map_1_0(p_3, t);
      p_17 = t;
      t = j_17;
      t = map_1_0(q_3, t);
      u_17 = t;
      t = (ATerm) ATmakeAppl(sym__3, u_17, d_17, n_17);
      t = substitute_2_0(s_3, _id, t);
      v_17 = t;
      t = (ATerm) ATmakeAppl(sym__3, p_17, e_17, v_17);
      t = substitute_2_0(u_3, _id, t);
      return(t);
    }
    t = map_1_0(i_3, t);
    t = foldr_2_0(w_3, x_3, t);
    g_17 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, o_15, b_17, c_17, g_17);
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_19), k_19), j_19), i_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, i_19), (ATerm) ATmakeAppl(sym_Var_1, k_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, b_19, (ATerm)ATmakeAppl(sym_Var_1, i_19), (ATerm) ATmakeAppl(sym_Var_1, j_19)), (ATerm) ATmakeAppl(sym_BAM_3, z_18, (ATerm)ATmakeAppl(sym_Var_1, k_19), (ATerm) ATmakeAppl(sym_Var_1, l_19)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_d_23, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_19)), (ATerm) ATmakeAppl(sym_Var_1, j_19))))));
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
              ATerm y_3 (ATerm t)
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
              t = oncetd_1_0(y_3, t);
              t_19 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_d_23, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_19)), not_null(r_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_19)), (ATerm) ATmakeAppl(sym_Build_1, t_19))));
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
            ATerm z_3 (ATerm t)
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
            t = oncetd_1_0(z_3, t);
            z_19 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_19), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, w_19)), (ATerm) ATmakeAppl(sym_PrimT_3, term_f_23, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, w_19))))), (ATerm)ATmakeAppl(sym_Var_1, v_19), (ATerm) ATmakeAppl(sym_Op_2, term_g_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_19)), not_null(x_19)))))));
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
    ATerm h_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL,i_20 = NULL;
        t = b_20;
        t = new_0_0(t);
        e_20 = t;
        t = c_20;
        {
          ATerm a_4 (ATerm t)
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
          t = pat_td_1_0(a_4, t);
          i_20 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, i_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_p_23, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, e_20))), (ATerm) ATmakeAppl(sym_Match_1, not_null(f_20))))));
        }
        ;
        LocalPopChoice(k_23);
      }
    else
      {
        t = h_23;
        {
          ATerm t_23 = t;
          int z_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL;
              t = b_20;
              t = new_0_0(t);
              l_20 = t;
              t = c_20;
              {
                ATerm b_4 (ATerm t)
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
                t = pat_td_1_0(b_4, t);
                n_20 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, l_20)), not_null(m_20))));
              }
              ;
              LocalPopChoice(z_23);
            }
          else
            {
              t = t_23;
              {
                ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL;
                t = b_20;
                t = new_0_0(t);
                p_20 = t;
                t = c_20;
                {
                  ATerm c_4 (ATerm t)
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
                  t = pat_td_1_0(c_4, t);
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
  ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL;
  h_21 = t;
  if(match_cons(t, sym_As_2))
    {
      d_21 = ATgetArgument(t, 0);
      e_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_21);
  c_21 = t;
  t = d_21;
  t = k_93(t);
  f_21 = t;
  t = e_21;
  t = l_93(t);
  g_21 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, f_21, g_21), c_21);
  return(t);
}
ATerm CallT_3_0 (ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL;
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
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, p_21, q_21, r_21), l_21);
  return(t);
}
ATerm PrimT_3_0 (ATerm j_97 (ATerm), ATerm k_97 (ATerm), ATerm l_97 (ATerm), ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,g_22 = NULL;
  g_22 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      w_21 = ATgetArgument(t, 0);
      x_21 = ATgetArgument(t, 1);
      y_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_22);
  v_21 = t;
  t = w_21;
  t = j_97(t);
  z_21 = t;
  t = x_21;
  t = k_97(t);
  a_22 = t;
  t = y_21;
  t = l_97(t);
  b_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, z_21, a_22, b_22), v_21);
  return(t);
}
ATerm Explode_2_0 (ATerm d_93 (ATerm), ATerm e_93 (ATerm), ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL;
  q_22 = t;
  if(match_cons(t, sym_Explode_2))
    {
      m_22 = ATgetArgument(t, 0);
      n_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_22);
  l_22 = t;
  t = m_22;
  t = d_93(t);
  o_22 = t;
  t = n_22;
  t = e_93(t);
  p_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, o_22, p_22), l_22);
  return(t);
}
ATerm Op_2_0 (ATerm z_92 (ATerm), ATerm a_93 (ATerm), ATerm t)
{
  ATerm t_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,c_23 = NULL,e_23 = NULL;
  e_23 = t;
  if(match_cons(t, sym_Op_2))
    {
      w_22 = ATgetArgument(t, 0);
      x_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_23);
  t_22 = t;
  t = w_22;
  t = z_92(t);
  y_22 = t;
  t = x_22;
  t = a_93(t);
  c_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, y_22, c_23), t_22);
  return(t);
}
ATerm pat_td_1_0 (ATerm h_105 (ATerm), ATerm t)
{
  ATerm a_24 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_105(t);
      ;
      LocalPopChoice(b_24);
    }
  else
    {
      t = a_24;
      {
        ATerm c_24 = t;
        int d_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_4 (ATerm t)
            {
              ATerm e_4 (ATerm t)
              {
                t = pat_td_1_0(h_105, t);
                return(t);
              }
              t = fetch_1_0(e_4, t);
              return(t);
            }
            t = Op_2_0(_id, d_4, t);
            ;
            LocalPopChoice(d_24);
          }
        else
          {
            t = c_24;
            {
              ATerm e_24 = t;
              int j_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_4 (ATerm t)
                  {
                    t = pat_td_1_0(h_105, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, g_4, t);
                  ;
                  LocalPopChoice(j_24);
                }
              else
                {
                  t = e_24;
                  {
                    ATerm m_24 = t;
                    int n_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm i_4 (ATerm t)
                        {
                          t = pat_td_1_0(h_105, t);
                          return(t);
                        }
                        t = Explode_2_0(i_4, _id, t);
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
                              ATerm j_4 (ATerm t)
                              {
                                ATerm k_4 (ATerm t)
                                {
                                  t = pat_td_1_0(h_105, t);
                                  return(t);
                                }
                                t = fetch_1_0(k_4, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, j_4, t);
                              ;
                              LocalPopChoice(p_24);
                            }
                          else
                            {
                              t = o_24;
                              {
                                ATerm q_24 = t;
                                int r_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm l_4 (ATerm t)
                                    {
                                      ATerm n_4 (ATerm t)
                                      {
                                        t = pat_td_1_0(h_105, t);
                                        return(t);
                                      }
                                      t = fetch_1_0(n_4, t);
                                      return(t);
                                    }
                                    t = CallT_3_0(_id, _id, l_4, t);
                                    ;
                                    LocalPopChoice(r_24);
                                  }
                                else
                                  {
                                    t = q_24;
                                    {
                                      ATerm p_4 (ATerm t)
                                      {
                                        t = pat_td_1_0(h_105, t);
                                        return(t);
                                      }
                                      t = As_2_0(_id, p_4, t);
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
    ATerm s_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL;
        t = i_23;
        t = new_0_0(t);
        l_23 = t;
        t = j_23;
        {
          ATerm r_4 (ATerm t)
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
          t = pat_td_1_0(r_4, t);
          o_23 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_u_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_23)), not_null(m_23))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, l_23)))), (ATerm) ATmakeAppl(sym_Build_1, o_23)));
        }
        ;
        LocalPopChoice(t_24);
      }
    else
      {
        t = s_24;
        {
          ATerm v_24 = t;
          int w_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL;
              t = i_23;
              t = new_0_0(t);
              q_23 = t;
              t = j_23;
              {
                ATerm t_4 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((r_23 != NULL) && (r_23 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        r_23 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, q_23);
                  return(t);
                }
                t = pat_td_1_0(t_4, t);
                s_23 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_23), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_23)))), (ATerm) ATmakeAppl(sym_Build_1, s_23)));
              }
              ;
              LocalPopChoice(w_24);
            }
          else
            {
              t = v_24;
              {
                ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL;
                t = i_23;
                t = new_0_0(t);
                u_23 = t;
                t = j_23;
                {
                  ATerm u_4 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((v_23 != NULL) && (v_23 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          v_23 = ATgetArgument(t, 0);
                        if(((w_23 != NULL) && (w_23 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          w_23 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, u_23);
                    return(t);
                  }
                  t = pat_td_1_0(u_4, t);
                  x_23 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(v_23), not_null(w_23), (ATerm) ATmakeAppl(sym_Var_1, u_23))), (ATerm) ATmakeAppl(sym_Build_1, x_23)));
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
  ATerm x_24 = t;
  int y_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm v_4 (ATerm t)
        {
          ATerm z_24 = t;
          int c_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(c_25);
            }
          else
            {
              t = z_24;
            }
          return(t);
        }
        t = Cons_2_0(_id, v_4, t);
      }
      ;
      LocalPopChoice(y_24);
    }
  else
    {
      t = x_24;
      {
        ATerm x_4 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, x_4, t);
      }
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm f_25 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      f_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, f_25, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_g_25), term_g_25));
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm i_25 = t;
  int j_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_25 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, h_25, term_g_25);
      ;
      LocalPopChoice(j_25);
    }
  else
    {
      t = i_25;
    }
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm r_25 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      r_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, r_25, term_g_25);
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm k_25 = t;
  int l_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_25 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, t_25, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_g_25), term_g_25));
      ;
      LocalPopChoice(l_25);
    }
  else
    {
      t = k_25;
    }
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm i_26 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      i_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, i_26, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_g_25), term_g_25));
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm m_25 = t;
  int n_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_26 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, k_26, term_g_25);
      ;
      LocalPopChoice(n_25);
    }
  else
    {
      t = m_25;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,k_24 = NULL,l_24 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      k_24 = ATgetArgument(t, 0);
      l_24 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, k_24, l_24);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          k_24 = ATgetArgument(t, 0);
          t = k_24;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_24 = ATgetFirst((ATermList) t);
              g_24 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, f_24, (ATerm) ATmakeAppl(sym_LChoices_1, g_24));
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
              k_24 = ATgetArgument(t, 0);
              t = k_24;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_24 = ATgetFirst((ATermList) t);
                  g_24 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, f_24, (ATerm) ATmakeAppl(sym_Choices_1, g_24));
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
                  k_24 = ATgetArgument(t, 0);
                  t = k_24;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      f_24 = ATgetFirst((ATermList) t);
                      g_24 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_24, (ATerm) ATmakeAppl(sym_Seqs_1, g_24));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_o_25;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      k_24 = ATgetArgument(t, 0);
                      l_24 = ATgetArgument(t, 1);
                      i_24 = ATgetArgument(t, 2);
                      h_24 = ATgetArgument(t, 3);
                      {
                        ATerm a_25 = NULL,b_25 = NULL;
                        t = l_24;
                        t = map1_1_0(y_4, t);
                        a_25 = t;
                        t = i_24;
                        t = map1_1_0(z_4, t);
                        b_25 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, k_24, a_25, b_25, h_24);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          k_24 = ATgetArgument(t, 0);
                          l_24 = ATgetArgument(t, 1);
                          i_24 = ATgetArgument(t, 2);
                          h_24 = ATgetArgument(t, 3);
                          {
                            ATerm s_25 = t;
                            int u_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm p_25 = NULL,q_25 = NULL;
                                t = i_24;
                                t = map1_1_0(b_5, t);
                                p_25 = t;
                                t = l_24;
                                t = map_1_0(c_5, t);
                                q_25 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, k_24, q_25, p_25, h_24);
                                ;
                                LocalPopChoice(u_25);
                              }
                            else
                              {
                                t = s_25;
                                {
                                  ATerm g_26 = NULL,h_26 = NULL;
                                  t = l_24;
                                  t = map1_1_0(d_5, t);
                                  g_26 = t;
                                  t = i_24;
                                  t = map_1_0(e_5, t);
                                  h_26 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, k_24, g_26, h_26, h_24);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              k_24 = ATgetArgument(t, 0);
                              l_24 = ATgetArgument(t, 1);
                              i_24 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, l_24, (ATerm) ATmakeAppl(sym_Op_2, term_g_23, (ATerm) ATinsert(ATinsert(ATempty, i_24), k_24)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  k_24 = ATgetArgument(t, 0);
                                  l_24 = ATgetArgument(t, 1);
                                  i_24 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, i_24)), k_24), (ATerm) ATmakeAppl(sym_Build_1, l_24)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      k_24 = ATgetArgument(t, 0);
                                      l_24 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, k_24, (ATerm) ATmakeAppl(sym_Match_1, l_24));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          k_24 = ATgetArgument(t, 0);
                                          l_24 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_24), l_24);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              k_24 = ATgetArgument(t, 0);
                                              l_24 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, l_24), k_24);
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
ATerm f_5 (ATerm t)
{
  ATerm v_25 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_25;
    }
  return(t);
}
ATerm i_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_w_25;
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm e_27 = NULL,g_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_27 = ATgetFirst((ATermList) t);
      g_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_27, g_27);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm h_27 = NULL,k_27 = NULL,l_27 = NULL,o_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_25 = ATgetArgument(t, 0);
      if(match_cons(x_25, sym__2))
        {
          h_27 = ATgetArgument(x_25, 0);
          l_27 = ATgetArgument(x_25, 1);
        }
      else
        _fail(t);
      {
        ATerm y_25 = ATgetArgument(t, 1);
        if(match_cons(y_25, sym__2))
          {
            k_27 = ATgetArgument(y_25, 0);
            o_27 = ATgetArgument(y_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_27), h_27), (ATerm) ATinsert(CheckATermList(o_27), l_27));
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = genzip_4_0(o_5, p_5, r_5, _id, t);
  return(t);
}
ATerm o_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_w_25;
  return(t);
}
ATerm p_5 (ATerm t)
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
ATerm r_5 (ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_25 = ATgetArgument(t, 0);
      if(match_cons(z_25, sym__2))
        {
          s_27 = ATgetArgument(z_25, 0);
          u_27 = ATgetArgument(z_25, 1);
        }
      else
        _fail(t);
      {
        ATerm a_26 = ATgetArgument(t, 1);
        if(match_cons(a_26, sym__2))
          {
            t_27 = ATgetArgument(a_26, 0);
            v_27 = ATgetArgument(a_26, 1);
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
ATerm LiftCallArgs_0_0 (ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      y_26 = ATgetArgument(t, 0);
      z_26 = ATgetArgument(t, 1);
      a_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_27;
  t = fetch_1_0(f_5, t);
  t = a_27;
  t = genzip_4_0(i_5, k_5, l_5, LiftPrimArg_0_0, t);
  t = _2_0(concat_0_0, n_5, t);
  if(match_cons(t, sym__2))
    {
      b_27 = ATgetArgument(t, 0);
      {
        ATerm b_26 = ATgetArgument(t, 1);
        if(match_cons(b_26, sym__2))
          {
            c_27 = ATgetArgument(b_26, 0);
            d_27 = ATgetArgument(b_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, b_27, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_27), (ATerm) ATmakeAppl(sym_CallT_3, y_26, z_26, d_27)));
  return(t);
}
ATerm j_28 (ATerm c_28, ATerm t)
{
  ATerm e_28 = NULL;
  t = c_28;
  {
    ATerm c_26 = t;
    if((PushChoice() == 0))
      {
        t = Var_1_0(_id, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_26;
      }
    t = new_0_0(t);
    e_28 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, e_28), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, c_28), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, e_28)))), (ATerm) ATmakeAppl(sym_Var_1, e_28)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL;
  f_28 = t;
  if(match_cons(t, sym_Var_1))
    {
      g_28 = ATgetArgument(t, 0);
      {
        ATerm d_26 = t;
        int e_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_28(f_28, t);
            ;
            LocalPopChoice(e_26);
          }
        else
          {
            t = d_26;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_o_25, (ATerm) ATmakeAppl(sym_Var_1, g_28)));
          }
      }
    }
  else
    {
      t = j_28(f_28, t);
    }
  return(t);
}
ATerm Var_1_0 (ATerm t_92 (ATerm), ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL;
  n_28 = t;
  if(match_cons(t, sym_Var_1))
    {
      l_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_28);
  k_28 = t;
  t = l_28;
  t = t_92(t);
  m_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, m_28), k_28);
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm f_26 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_26;
    }
  return(t);
}
ATerm y_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_w_25;
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm t_7 = NULL,u_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_7 = ATgetFirst((ATermList) t);
      u_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_7, u_7);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm v_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_26 = ATgetArgument(t, 0);
      if(match_cons(j_26, sym__2))
        {
          v_7 = ATgetArgument(j_26, 0);
          z_7 = ATgetArgument(j_26, 1);
        }
      else
        _fail(t);
      {
        ATerm l_26 = ATgetArgument(t, 1);
        if(match_cons(l_26, sym__2))
          {
            y_7 = ATgetArgument(l_26, 0);
            a_8 = ATgetArgument(l_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_7), v_7), (ATerm) ATinsert(CheckATermList(a_8), z_7));
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = genzip_4_0(e_6, f_6, g_6, _id, t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_w_25;
  return(t);
}
ATerm f_6 (ATerm t)
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
ATerm g_6 (ATerm t)
{
  ATerm d_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_26 = ATgetArgument(t, 0);
      if(match_cons(m_26, sym__2))
        {
          d_8 = ATgetArgument(m_26, 0);
          h_8 = ATgetArgument(m_26, 1);
        }
      else
        _fail(t);
      {
        ATerm n_26 = ATgetArgument(t, 1);
        if(match_cons(n_26, sym__2))
          {
            g_8 = ATgetArgument(n_26, 0);
            i_8 = ATgetArgument(n_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_8), d_8), (ATerm) ATinsert(CheckATermList(i_8), h_8));
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm o_26 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_26;
    }
  return(t);
}
ATerm i_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_w_25;
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm d_9 = NULL,e_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_9 = ATgetFirst((ATermList) t);
      e_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_9, e_9);
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL,i_9 = NULL,j_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_26 = ATgetArgument(t, 0);
      if(match_cons(p_26, sym__2))
        {
          f_9 = ATgetArgument(p_26, 0);
          i_9 = ATgetArgument(p_26, 1);
        }
      else
        _fail(t);
      {
        ATerm q_26 = ATgetArgument(t, 1);
        if(match_cons(q_26, sym__2))
          {
            g_9 = ATgetArgument(q_26, 0);
            j_9 = ATgetArgument(q_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_9), f_9), (ATerm) ATinsert(CheckATermList(j_9), i_9));
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = genzip_4_0(n_6, p_6, q_6, _id, t);
  return(t);
}
ATerm n_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_w_25;
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm o_9 = NULL,p_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_9 = ATgetFirst((ATermList) t);
      p_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_9, p_9);
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm q_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_26 = ATgetArgument(t, 0);
      if(match_cons(r_26, sym__2))
        {
          q_9 = ATgetArgument(r_26, 0);
          v_9 = ATgetArgument(r_26, 1);
        }
      else
        _fail(t);
      {
        ATerm s_26 = ATgetArgument(t, 1);
        if(match_cons(s_26, sym__2))
          {
            u_9 = ATgetArgument(s_26, 0);
            w_9 = ATgetArgument(s_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_9), q_9), (ATerm) ATinsert(CheckATermList(w_9), v_9));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL;
  t_30 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      u_30 = ATgetArgument(t, 0);
      v_30 = ATgetArgument(t, 1);
      s_30 = ATgetArgument(t, 2);
      {
        ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL;
        t = s_30;
        t = fetch_1_0(v_5, t);
        t = s_30;
        t = genzip_4_0(y_5, z_5, c_6, LiftPrimArg_0_0, t);
        t = _2_0(concat_0_0, d_6, t);
        if(match_cons(t, sym__2))
          {
            q_7 = ATgetArgument(t, 0);
            {
              ATerm t_26 = ATgetArgument(t, 1);
              if(match_cons(t_26, sym__2))
                {
                  r_7 = ATgetArgument(t_26, 0);
                  s_7 = ATgetArgument(t_26, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, q_7, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_7), (ATerm) ATmakeAppl(sym_PrimT_3, u_30, v_30, s_7)));
      }
    }
  else
    {
      ATerm z_8 = NULL,b_9 = NULL,c_9 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          u_30 = ATgetArgument(t, 0);
          v_30 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_30;
      t = fetch_1_0(h_6, t);
      t = v_30;
      t = genzip_4_0(i_6, k_6, l_6, LiftPrimArg_0_0, t);
      t = _2_0(concat_0_0, m_6, t);
      if(match_cons(t, sym__2))
        {
          z_8 = ATgetArgument(t, 0);
          {
            ATerm u_26 = ATgetArgument(t, 1);
            if(match_cons(u_26, sym__2))
              {
                b_9 = ATgetArgument(u_26, 0);
                c_9 = ATgetArgument(u_26, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, z_8, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, b_9), (ATerm) ATmakeAppl(sym_PrimT_3, u_30, (ATerm)ATempty, c_9)));
    }
  return(t);
}
ATerm repeat_1_0 (ATerm b_120 (ATerm), ATerm t)
{
  ATerm y_30 (ATerm t)
  {
    ATerm v_26 = t;
    int w_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_120(t);
        t = y_30(t);
        ;
        LocalPopChoice(w_26);
      }
    else
      {
        t = v_26;
      }
    return(t);
  }
  t = y_30(t);
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm x_26 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Con_3_0(_id, _id, _id, t);
      ;
      LocalPopChoice(f_27);
    }
  else
    {
      t = x_26;
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm i_27 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(r_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_27;
    }
  return(t);
}
ATerm App_2_0 (ATerm h_93 (ATerm), ATerm i_93 (ATerm), ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL;
  e_31 = t;
  if(match_cons(t, sym_App_2))
    {
      a_31 = ATgetArgument(t, 0);
      b_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_31);
  z_30 = t;
  t = a_31;
  t = h_93(t);
  c_31 = t;
  t = b_31;
  t = i_93(t);
  d_31 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, c_31, d_31), z_30);
  return(t);
}
ATerm Con_3_0 (ATerm t_93 (ATerm), ATerm u_93 (ATerm), ATerm v_93 (ATerm), ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,q_31 = NULL,r_31 = NULL;
  r_31 = t;
  if(match_cons(t, sym_Con_3))
    {
      i_31 = ATgetArgument(t, 0);
      j_31 = ATgetArgument(t, 1);
      k_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_31);
  h_31 = t;
  t = i_31;
  t = t_93(t);
  l_31 = t;
  t = j_31;
  t = u_93(t);
  m_31 = t;
  t = k_31;
  t = v_93(t);
  q_31 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, l_31, m_31, q_31), h_31);
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm j_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Con_3_0(_id, _id, _id, t);
      ;
      LocalPopChoice(m_27);
    }
  else
    {
      t = j_27;
      t = App_2_0(_id, _id, t);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm n_27 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(s_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_27;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL,c_32 = NULL,d_32 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      x_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_31;
  if(match_cons(t, sym_StratRule_3))
    {
      y_31 = ATgetArgument(t, 0);
      c_32 = ATgetArgument(t, 1);
      d_32 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_32), (ATerm) ATmakeAppl(sym_Where_1, d_32)), y_31));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          y_31 = ATgetArgument(t, 0);
          c_32 = ATgetArgument(t, 1);
          d_32 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = y_31;
      t = pureterm_0_0(t);
      t = c_32;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, c_32)), (ATerm) ATmakeAppl(sym_Where_1, d_32)), (ATerm) ATmakeAppl(sym_Match_1, y_31)));
    }
  return(t);
}
ATerm Scope_2_0 (ATerm n_96 (ATerm), ATerm o_96 (ATerm), ATerm t)
{
  ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL;
  q_32 = t;
  if(match_cons(t, sym_Scope_2))
    {
      m_32 = ATgetArgument(t, 0);
      n_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_32);
  l_32 = t;
  t = m_32;
  t = n_96(t);
  o_32 = t;
  t = n_32;
  t = o_96(t);
  p_32 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, o_32, p_32), l_32);
  return(t);
}
ATerm oncetd_1_0 (ATerm y_110 (ATerm), ATerm t)
{
  ATerm t_32 (ATerm t)
  {
    ATerm p_27 = t;
    int w_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_110(t);
        ;
        LocalPopChoice(w_27);
      }
    else
      {
        t = p_27;
        t = SRTS_one(t_32, t);
      }
    return(t);
  }
  t = t_32(t);
  return(t);
}
ATerm Rcon_0_0 (ATerm t)
{
  ATerm u_32 = NULL,y_32 = NULL,z_32 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,i_33 = NULL,j_33 = NULL,l_33 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      ATerm x_27 = ATgetArgument(t, 0);
      if(match_cons(x_27, sym_Rule_3))
        {
          u_32 = ATgetArgument(x_27, 0);
          y_32 = ATgetArgument(x_27, 1);
          z_32 = ATgetArgument(x_27, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = new_0_0(t);
  b_33 = t;
  t = u_32;
  {
    ATerm t_6 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm y_27 = ATgetArgument(t, 0);
          if(match_cons(y_27, sym_Var_1))
            {
              if(((d_33 != NULL) && (d_33 != ATgetArgument(y_27, 0))))
                _fail(ATgetArgument(y_27, 0));
              else
                d_33 = ATgetArgument(y_27, 0);
            }
          else
            _fail(t);
          if(((c_33 != NULL) && (c_33 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            c_33 = ATgetArgument(t, 1);
          {
            ATerm z_27 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_33));
      return(t);
    }
    t = oncetd_1_0(t_6, t);
    e_33 = t;
    t = y_32;
    {
      ATerm v_6 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm a_28 = ATgetArgument(t, 0);
            if(match_cons(a_28, sym_Var_1))
              {
                if(((d_33 != NULL) && (d_33 != ATgetArgument(a_28, 0))))
                  _fail(ATgetArgument(a_28, 0));
                else
                  d_33 = ATgetArgument(a_28, 0);
              }
            else
              _fail(t);
            if(((i_33 != NULL) && (i_33 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              i_33 = ATgetArgument(t, 1);
            {
              ATerm b_28 = ATgetArgument(t, 2);
              if(match_cons(b_28, sym_CallT_3))
                {
                  if(((j_33 != NULL) && (j_33 != ATgetArgument(b_28, 0))))
                    _fail(ATgetArgument(b_28, 0));
                  else
                    j_33 = ATgetArgument(b_28, 0);
                  {
                    ATerm d_28 = ATgetArgument(b_28, 1);
                    if(((ATgetType(d_28) != AT_LIST) || !(ATisEmpty(d_28))))
                      _fail(t);
                  }
                  {
                    ATerm h_28 = ATgetArgument(b_28, 2);
                    if(((ATgetType(h_28) != AT_LIST) || !(ATisEmpty(h_28))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, b_33);
        return(t);
      }
      t = oncetd_1_0(v_6, t);
      l_33 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_33), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, e_33, l_33, (ATerm) ATmakeAppl(sym_Seq_2, z_32, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(j_33), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(c_33), not_null(i_33), term_o_25))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(d_33)), (ATerm) ATmakeAppl(sym_Var_1, b_33))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm i_28 = t;
  int o_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_28 = t;
      int q_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Rcon_0_0(t);
          t = desugarRule_0_0(t);
          ;
          LocalPopChoice(q_28);
        }
      else
        {
          t = p_28;
          {
            ATerm r_28 = t;
            int s_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Scope_2_0(_id, desugarRule_0_0, t);
                ;
                LocalPopChoice(s_28);
              }
            else
              {
                t = r_28;
                t = RtoS_0_0(t);
              }
          }
        }
      ;
      LocalPopChoice(o_28);
    }
  else
    {
      t = i_28;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm u_109 (ATerm), ATerm t)
{
  t = u_109(t);
  {
    ATerm w_6 (ATerm t)
    {
      t = topdown_1_0(u_109, t);
      return(t);
    }
    t = SRTS_all(w_6, t);
  }
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm t_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(u_28);
    }
  else
    {
      t = t_28;
    }
  t = repeat_1_0(y_6, t);
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm v_28 = t;
  int w_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
      LocalPopChoice(w_28);
    }
  else
    {
      t = v_28;
      {
        ATerm x_28 = t;
        int y_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftCallArgs_0_0(t);
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
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(a_29);
                }
              else
                {
                  t = z_28;
                  {
                    ATerm b_29 = t;
                    int c_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(c_29);
                      }
                    else
                      {
                        t = b_29;
                        {
                          ATerm d_29 = t;
                          int e_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm f_29 = t;
                              int g_29 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm e_10 = NULL,i_10 = NULL,j_10 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      e_10 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = e_10;
                                  {
                                    ATerm a_7 (ATerm t)
                                    {
                                      if(match_cons(t, sym_RootApp_1))
                                        {
                                          ATerm h_29 = ATgetArgument(t, 0);
                                          if(match_cons(h_29, sym_Match_1))
                                            {
                                              if(((i_10 != NULL) && (i_10 != ATgetArgument(h_29, 0))))
                                                _fail(ATgetArgument(h_29, 0));
                                              else
                                                i_10 = ATgetArgument(h_29, 0);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                      t = not_null(i_10);
                                      return(t);
                                    }
                                    t = pat_td_1_0(a_7, t);
                                    j_10 = t;
                                    t = (ATerm) ATmakeAppl(sym_Match_1, j_10);
                                  }
                                  ;
                                  LocalPopChoice(g_29);
                                }
                              else
                                {
                                  t = f_29;
                                  {
                                    ATerm i_29 = t;
                                    int j_29 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL;
                                        if(match_cons(t, sym_Match_1))
                                          {
                                            q_33 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = q_33;
                                        if(match_cons(t, sym_RootApp_1))
                                          {
                                            r_33 = ATgetArgument(t, 0);
                                            t = r_33;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_App_2))
                                              {
                                                r_33 = ATgetArgument(t, 0);
                                                s_33 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym_BA_2, r_33, s_33);
                                          }
                                        ;
                                        LocalPopChoice(j_29);
                                      }
                                    else
                                      {
                                        t = i_29;
                                        t = Mapp2_0_0(t);
                                      }
                                  }
                                }
                              ;
                              LocalPopChoice(e_29);
                            }
                          else
                            {
                              t = d_29;
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
  t = topdown_1_0(x_6, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL;
  p_10 = t;
  t = SSL_explode_term(p_10);
  if(match_cons(t, sym__2))
    {
      ATerm k_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_29 = ATgetArgument(t, 1);
        if(((ATgetType(l_29) == AT_LIST) && !(ATisEmpty(l_29))))
          {
            q_10 = ATgetFirst((ATermList) l_29);
            {
              ATerm m_29 = (ATerm) ATgetNext((ATermList) l_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_10;
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm u_10 = NULL,v_10 = NULL;
  u_10 = t;
  t = SSL_explode_term(u_10);
  if(match_cons(t, sym__2))
    {
      ATerm n_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_29 = ATgetArgument(t, 1);
        if(((ATgetType(o_29) == AT_LIST) && !(ATisEmpty(o_29))))
          {
            ATerm p_29 = ATgetFirst((ATermList) o_29);
            v_10 = (ATerm) ATgetNext((ATermList) o_29);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), v_10);
  return(t);
}
ATerm e_7 (ATerm t)
{
  if(!(match_cons(t, sym__0)))
    _fail(t);
  return(t);
}
ATerm tuple_unzip_1_0 (ATerm w_113 (ATerm), ATerm t)
{
  ATerm y_33 = NULL;
  ATerm d_34 (ATerm t)
  {
    ATerm q_29 = t;
    int r_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_33 = NULL,b_34 = NULL,c_34 = NULL;
        z_33 = t;
        t = map_1_0(b_7, t);
        t = w_113(t);
        b_34 = t;
        t = z_33;
        t = map_1_0(c_7, t);
        t = d_34(t);
        c_34 = t;
        t = (ATerm) ATinsert(CheckATermList(c_34), b_34);
        ;
        LocalPopChoice(r_29);
      }
    else
      {
        t = q_29;
        t = map_1_0(e_7, t);
        t = (ATerm) ATempty;
      }
    return(t);
  }
  t = d_34(t);
  y_33 = t;
  t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), y_33);
  return(t);
}
ATerm MkDistApplication_0_0 (ATerm t)
{
  ATerm e_34 = NULL;
  e_34 = t;
  {
    ATerm s_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
        t = e_34;
        t = new_0_0(t);
        g_34 = t;
        t = new_0_0(t);
        h_34 = t;
        t = new_0_0(t);
        i_34 = t;
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_34), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_g_23, (ATerm) ATinsert(ATinsert(ATempty, e_34), (ATerm) ATmakeAppl(sym_Var_1, h_34))), (ATerm) ATmakeAppl(sym_Var_1, i_34)), (ATerm)ATmakeAppl(sym_VarDec_2, g_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_g_25), term_g_25)), h_34, (ATerm)ATmakeAppl(sym_Var_1, h_34), i_34, (ATerm) ATmakeAppl(sym_Var_1, i_34));
        ;
        LocalPopChoice(t_29);
      }
    else
      {
        t = s_29;
        {
          ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL;
          t = e_34;
          t = new_0_0(t);
          k_34 = t;
          t = new_0_0(t);
          l_34 = t;
          t = new_0_0(t);
          m_34 = t;
          t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_34), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_g_23, (ATerm) ATinsert(ATinsert(ATempty, e_34), (ATerm) ATmakeAppl(sym_Var_1, l_34))), (ATerm) ATmakeAppl(sym_Var_1, m_34)), (ATerm)ATmakeAppl(sym_VarDec_2, k_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_g_25), term_g_25)), l_34, (ATerm)ATmakeAppl(sym_Var_1, l_34), m_34, (ATerm) ATmakeAppl(sym_Var_1, m_34));
        }
      }
  }
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL;
  if(match_cons(t, sym__2))
    {
      n_34 = ATgetArgument(t, 0);
      o_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, n_34, o_34, (ATerm) ATempty);
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm p_34 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm u_29 = ATgetArgument(t, 0);
      if(((ATgetType(u_29) != AT_INT) || (ATgetInt((ATermInt) u_29) != 0)))
        _fail(t);
      {
        ATerm v_29 = ATgetArgument(t, 1);
      }
      p_34 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = p_34;
  return(t);
}
ATerm copy_1_0 (ATerm z_123 (ATerm), ATerm t)
{
  ATerm i_7 (ATerm t)
  {
    ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL;
    if(match_cons(t, sym__3))
      {
        q_34 = ATgetArgument(t, 0);
        r_34 = ATgetArgument(t, 1);
        s_34 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, q_34, term_d_19);
    t = geq_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, q_34, term_d_19);
    {
      ATerm w_29 = t;
      int x_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(q_34, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(x_29);
        }
      else
        {
          t = w_29;
          t = SSL_subtr(q_34, (ATerm) ATmakeInt(1));
        }
      t_34 = t;
      t = r_34;
      t = z_123(t);
      u_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, t_34, r_34, (ATerm) ATinsert(CheckATermList(s_34), u_34));
    }
    return(t);
  }
  t = for_3_0(f_7, g_7, i_7, t);
  return(t);
}
ATerm MkThreadApplication_0_0 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL;
  if(match_cons(t, sym__2))
    {
      v_34 = ATgetArgument(t, 0);
      w_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = new_0_0(t);
  x_34 = t;
  t = new_0_0(t);
  y_34 = t;
  t = new_0_0(t);
  z_34 = t;
  t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, x_34), (ATerm)ATempty, (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_g_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_34)), (ATerm) ATmakeAppl(sym_Var_1, y_34))), (ATerm) ATmakeAppl(sym_Op_2, term_g_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, w_34)), (ATerm) ATmakeAppl(sym_Var_1, z_34)))), (ATerm)ATmakeAppl(sym_VarDec_2, x_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_g_25), term_g_25)), y_34, (ATerm)ATmakeAppl(sym_Var_1, y_34), z_34, (ATerm) ATmakeAppl(sym_Var_1, z_34));
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_35 = ATgetFirst((ATermList) t);
      e_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_35;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm y_29 = t;
      int z_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_35;
          ;
          LocalPopChoice(z_29);
        }
      else
        {
          t = y_29;
          t = e_35;
          t = last_0_0(t);
        }
    }
  else
    {
      t = e_35;
      t = last_0_0(t);
    }
  return(t);
}
ATerm o_41 (ATerm r_35, ATerm s_35, ATerm t_35, ATerm u_35, ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_35, term_d_19);
  {
    ATerm a_30 = t;
    int b_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(s_35, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(b_30);
      }
    else
      {
        t = a_30;
        t = SSL_addr(s_35, (ATerm) ATmakeInt(1));
      }
    y_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_35, term_m_9);
    t = copy_1_0(new_0_0, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_35 = ATgetFirst((ATermList) t);
        a_36 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = a_36;
    t = last_0_0(t);
    b_36 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_36), z_35), a_36);
    t = genzip_4_0(j_7, k_7, l_7, MkThreadApplication_0_0, t);
    t = tuple_unzip_1_0(_id, t);
    if(match_cons(t, sym__6))
      {
        c_36 = ATgetArgument(t, 0);
        d_36 = ATgetArgument(t, 1);
        e_36 = ATgetArgument(t, 2);
        f_36 = ATgetArgument(t, 3);
        g_36 = ATgetArgument(t, 4);
        h_36 = ATgetArgument(t, 5);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, g_36), e_36), a_36);
    t = concat_0_0(t);
    i_36 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, r_35, term_c_30), d_36, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(i_36), z_35), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_g_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, z_35)), (ATerm) ATmakeAppl(sym_Op_2, r_35, f_36))), (ATerm)ATmakeAppl(sym_Op_2, term_g_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, b_36)), (ATerm) ATmakeAppl(sym_Op_2, r_35, h_36))), (ATerm) ATmakeAppl(sym_Seqs_1, c_36)))));
  }
  return(t);
}
ATerm p_41 (ATerm y_38, ATerm z_38, ATerm a_39, ATerm l_39, ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,f_40 = NULL;
  t = l_39;
  t = new_0_0(t);
  v_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_38, (ATerm) ATmakeAppl(sym_Var_1, v_39));
  t = copy_1_0(MkDistApplication_0_0, t);
  t = tuple_unzip_1_0(_id, t);
  if(match_cons(t, sym__6))
    {
      w_39 = ATgetArgument(t, 0);
      x_39 = ATgetArgument(t, 1);
      y_39 = ATgetArgument(t, 2);
      z_39 = ATgetArgument(t, 3);
      a_40 = ATgetArgument(t, 4);
      b_40 = ATgetArgument(t, 5);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_39, a_40);
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_7 (ATerm t)
        {
          t = a_40;
          return(t);
        }
        if(match_cons(t, sym__2))
          {
            ATerm f_30 = ATgetArgument(t, 0);
            ATerm g_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_39;
        t = at_end_1_0(m_7, t);
        ;
        LocalPopChoice(e_30);
      }
    else
      {
        t = d_30;
        {
          ATerm z_10 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, y_39, a_40));
          if(match_cons(t, sym__2))
            {
              ATerm h_30 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) h_30) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              z_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_10;
          t = concat_0_0(t);
        }
      }
    f_40 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, y_38, term_i_30), x_39, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(f_40), v_39), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_g_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_39)), (ATerm) ATmakeAppl(sym_Op_2, y_38, z_39))), (ATerm)ATmakeAppl(sym_Op_2, y_38, b_40), (ATerm) ATmakeAppl(sym_Seqs_1, w_39)))));
  }
  return(t);
}
ATerm j_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_30 = ATgetArgument(t, 0);
      ATerm k_30 = ATgetArgument(t, 1);
      if(((ATgetType(k_30) != AT_LIST) || !(ATisEmpty(k_30))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm j_36 = NULL,k_36 = NULL,m_36 = NULL,f_37 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_30 = ATgetArgument(t, 0);
      if(((ATgetType(l_30) == AT_LIST) && !(ATisEmpty(l_30))))
        {
          j_36 = ATgetFirst((ATermList) l_30);
          m_36 = (ATerm) ATgetNext((ATermList) l_30);
        }
      else
        _fail(t);
      {
        ATerm m_30 = ATgetArgument(t, 1);
        if(((ATgetType(m_30) == AT_LIST) && !(ATisEmpty(m_30))))
          {
            k_36 = ATgetFirst((ATermList) m_30);
            f_37 = (ATerm) ATgetNext((ATermList) m_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_36, k_36), (ATerm) ATmakeAppl(sym__2, m_36, f_37));
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm l_38 = NULL,x_38 = NULL;
  if(match_cons(t, sym__2))
    {
      l_38 = ATgetArgument(t, 0);
      x_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_38), l_38);
  return(t);
}
ATerm DefineCongruence_0_0 (ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL,w_40 = NULL,z_40 = NULL,k_41 = NULL,l_41 = NULL;
  s_40 = t;
  if(match_cons(t, sym__3))
    {
      t_40 = ATgetArgument(t, 0);
      w_40 = ATgetArgument(t, 1);
      z_40 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = w_40;
  if(match_string(t, "T"))
    {
      t = z_40;
      if(match_cons(t, sym__2))
        {
          k_41 = ATgetArgument(t, 0);
          l_41 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_41;
      if(match_int(t, 0))
        {
          ATerm n_30 = t;
          int o_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_41(t_40, k_41, l_41, s_40, t);
              ;
              LocalPopChoice(o_30);
            }
          else
            {
              t = n_30;
              {
                ATerm n_41 = NULL;
                t = s_40;
                t = new_0_0(t);
                n_41 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, (ATerm)ATmakeAppl(sym_Mod_2, t_40, term_c_30), (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_41), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_g_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, n_41)), (ATerm) ATmakeAppl(sym_Op_2, t_40, (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_g_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, n_41)), (ATerm) ATmakeAppl(sym_Op_2, t_40, (ATerm) ATempty))), term_o_25))));
              }
            }
        }
      else
        {
          t = o_41(t_40, k_41, l_41, s_40, t);
        }
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("D", 0, ATtrue)))
        _fail(t);
      t = z_40;
      if(match_cons(t, sym__2))
        {
          k_41 = ATgetArgument(t, 0);
          l_41 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_41(t_40, k_41, l_41, s_40, t);
    }
  return(t);
}
ATerm CongruenceDef_0_0 (ATerm t)
{
  ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_30 = ATgetArgument(t, 0);
      if(match_cons(p_30, sym__2))
        {
          ATerm q_30 = ATgetArgument(p_30, 0);
          if(match_cons(q_30, sym_Mod_2))
            {
              q_41 = ATgetArgument(q_30, 0);
              r_41 = ATgetArgument(q_30, 1);
            }
          else
            _fail(t);
          s_41 = ATgetArgument(p_30, 1);
        }
      else
        _fail(t);
      t_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, q_41, r_41, s_41);
  t = DefineCongruence_0_0(t);
  t = desugar_0_0(t);
  u_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_41, t_41);
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm r_30 = t;
  int w_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_41 = NULL,z_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_41 = ATgetFirst((ATermList) t);
          z_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_41;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_41;
      ;
      LocalPopChoice(w_30);
    }
  else
    {
      t = r_30;
      t = JoinDefs2_0_0(t);
    }
  return(t);
}
ATerm get_definition_0_0 (ATerm t)
{
  ATerm x_30 = t;
  int f_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0_0(t);
      ;
      LocalPopChoice(f_31);
    }
  else
    {
      t = x_30;
      {
        ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm g_31 = ATgetArgument(t, 0);
            if(match_cons(g_31, sym__2))
              {
                f_11 = ATgetArgument(g_31, 0);
                g_11 = ATgetArgument(g_31, 1);
              }
            else
              _fail(t);
            h_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_11, g_11);
        t = Definitions_0_0(t);
        i_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_11, h_11);
        t = _2_0(n_7, _id, t);
      }
    }
  return(t);
}
ATerm diff_1_0 (ATerm z_120 (ATerm), ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL;
  if(match_cons(t, sym__2))
    {
      y_42 = ATgetArgument(t, 0);
      z_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_42;
  {
    ATerm a_43 (ATerm t)
    {
      ATerm n_31 = t;
      int o_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(o_31);
        }
      else
        {
          t = n_31;
          {
            ATerm p_31 = t;
            int s_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_11 = NULL,k_11 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    j_11 = ATgetFirst((ATermList) t);
                    k_11 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = z_42;
                {
                  ATerm o_7 (ATerm t)
                  {
                    ATerm l_11 = NULL;
                    l_11 = t;
                    t = (ATerm) ATmakeAppl(sym__2, j_11, l_11);
                    t = z_120(t);
                    return(t);
                  }
                  t = fetch_1_0(o_7, t);
                  t = k_11;
                  t = a_43(t);
                }
                ;
                LocalPopChoice(s_31);
              }
            else
              {
                t = p_31;
                t = Cons_2_0(_id, a_43, t);
              }
          }
        }
      return(t);
    }
    t = a_43(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm g_114 (ATerm), ATerm h_114 (ATerm), ATerm i_114 (ATerm), ATerm j_114 (ATerm), ATerm t)
{
  ATerm b_43 (ATerm t)
  {
    ATerm t_31 = t;
    int u_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_114(t);
        ;
        LocalPopChoice(u_31);
      }
    else
      {
        t = t_31;
        t = h_114(t);
        t = _2_0(j_114, b_43, t);
        t = i_114(t);
      }
    return(t);
  }
  t = b_43(t);
  return(t);
}
ATerm p_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_31 = ATgetArgument(t, 0);
      if(((ATgetType(v_31) != AT_LIST) || !(ATisEmpty(v_31))))
        _fail(t);
      {
        ATerm w_31 = ATgetArgument(t, 1);
        if(((ATgetType(w_31) != AT_LIST) || !(ATisEmpty(w_31))))
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
  ATerm s_43 = NULL,c_44 = NULL,d_44 = NULL,g_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_31 = ATgetArgument(t, 0);
      if(((ATgetType(z_31) == AT_LIST) && !(ATisEmpty(z_31))))
        {
          s_43 = ATgetFirst((ATermList) z_31);
          d_44 = (ATerm) ATgetNext((ATermList) z_31);
        }
      else
        _fail(t);
      {
        ATerm a_32 = ATgetArgument(t, 1);
        if(((ATgetType(a_32) == AT_LIST) && !(ATisEmpty(a_32))))
          {
            c_44 = ATgetFirst((ATermList) a_32);
            g_44 = (ATerm) ATgetNext((ATermList) a_32);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_43, c_44), (ATerm) ATmakeAppl(sym__2, d_44, g_44));
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL;
  if(match_cons(t, sym__2))
    {
      n_44 = ATgetArgument(t, 0);
      o_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_44), n_44);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_32 = ATgetFirst((ATermList) t);
      if(match_cons(b_32, sym__2))
        {
          d_43 = ATgetArgument(b_32, 0);
          e_43 = ATgetArgument(b_32, 1);
        }
      else
        _fail(t);
      f_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(e_43);
  if(match_cons(t, sym__2))
    {
      g_43 = ATgetArgument(t, 0);
      h_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(d_43);
  if(match_cons(t, sym__2))
    {
      if((g_43 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      i_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_43, h_43);
  t = genzip_4_0(p_7, w_7, x_7, _id, t);
  j_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_43, f_43);
  {
    ATerm e_32 = t;
    int f_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_32 = ATgetArgument(t, 0);
            ATerm h_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_43;
        {
          ATerm j_8 (ATerm t)
          {
            t = f_43;
            return(t);
          }
          t = at_end_1_0(j_8, t);
        }
        ;
        LocalPopChoice(f_32);
      }
    else
      {
        t = e_32;
        {
          ATerm r_11 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, j_43, f_43));
          if(match_cons(t, sym__2))
            {
              ATerm i_32 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) i_32) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              r_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_11;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm p_47 = NULL;
  p_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, p_47);
  return(t);
}
ATerm n_8 (ATerm t)
{
  t = _2_0(_id, r_8, t);
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm j_32 = t;
  int k_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, s_8, t);
      ;
      LocalPopChoice(k_32);
    }
  else
    {
      t = j_32;
      {
        ATerm y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL;
        if(match_cons(t, sym__2))
          {
            y_47 = ATgetArgument(t, 0);
            z_47 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_47;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_48 = ATgetFirst((ATermList) t);
            b_48 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_47), a_48), b_48);
      }
    }
  return(t);
}
ATerm r_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm r_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_47 = ATgetFirst((ATermList) t);
          u_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_47;
      if(match_cons(t, sym__2))
        {
          s_47 = ATgetArgument(t, 0);
          t_47 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_47;
      if((s_47 != t))
        {
          _fail(t);
        }
      t = u_47;
      ;
      LocalPopChoice(s_32);
    }
  else
    {
      t = r_32;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm t_8 (ATerm t)
{
  ATerm f_48 = NULL;
  if(match_cons(t, sym__2))
    {
      f_48 = ATgetArgument(t, 0);
      if((f_48 != ATgetArgument(t, 1)))
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
  ATerm v_32 = t;
  int w_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(m_8, n_8, q_8, t);
      ;
      LocalPopChoice(w_32);
    }
  else
    {
      t = v_32;
      t = diff_1_0(t_8, t);
    }
  return(t);
}
ATerm GnNextChangeGraph_3_0 (ATerm a_136 (ATerm), ATerm b_136 (ATerm), ATerm c_136 (ATerm), ATerm t)
{
  ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm x_32 = ATgetArgument(t, 0);
      if(((ATgetType(x_32) == AT_LIST) && !(ATisEmpty(x_32))))
        {
          i_48 = ATgetFirst((ATermList) x_32);
          j_48 = (ATerm) ATgetNext((ATermList) x_32);
        }
      else
        _fail(t);
      k_48 = ATgetArgument(t, 1);
      l_48 = ATgetArgument(t, 2);
      m_48 = ATgetArgument(t, 3);
      n_48 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_48, l_48);
  t = a_136(t);
  if(match_cons(t, sym__2))
    {
      r_48 = ATgetArgument(t, 0);
      s_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_48;
  t = b_136(t);
  t_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_48, k_48);
  t = diff_0_0(t);
  u_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_48, j_48);
  {
    ATerm a_33 = t;
    int f_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_33 = ATgetArgument(t, 0);
            ATerm h_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_48;
        {
          ATerm u_8 (ATerm t)
          {
            t = j_48;
            return(t);
          }
          t = at_end_1_0(u_8, t);
        }
        ;
        LocalPopChoice(f_33);
      }
    else
      {
        t = a_33;
        {
          ATerm a_12 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, u_48, j_48));
          if(match_cons(t, sym__2))
            {
              ATerm k_33 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) k_33) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              a_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_12;
          t = concat_0_0(t);
        }
      }
    v_48 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_48, k_48);
    {
      ATerm m_33 = t;
      int n_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm o_33 = ATgetArgument(t, 0);
              ATerm p_33 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_48;
          {
            ATerm v_8 (ATerm t)
            {
              t = k_48;
              return(t);
            }
            t = at_end_1_0(v_8, t);
          }
          ;
          LocalPopChoice(n_33);
        }
      else
        {
          t = m_33;
          {
            ATerm f_12 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, u_48, k_48));
            if(match_cons(t, sym__2))
              {
                ATerm t_33 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) t_33) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                f_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = f_12;
            t = concat_0_0(t);
          }
        }
      w_48 = t;
      t = (ATerm) ATmakeAppl(sym__3, i_48, r_48, m_48);
      t = c_136(t);
      x_48 = t;
      t = (ATerm) ATmakeAppl(sym__5, v_48, w_48, s_48, x_48, n_48);
    }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm q_120 (ATerm), ATerm r_120 (ATerm), ATerm t)
{
  ATerm e_49 (ATerm t)
  {
    ATerm u_33 = t;
    int v_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_120(t);
        ;
        LocalPopChoice(v_33);
      }
    else
      {
        t = u_33;
        t = r_120(t);
        t = e_49(t);
      }
    return(t);
  }
  t = e_49(t);
  return(t);
}
ATerm for_3_0 (ATerm t_120 (ATerm), ATerm u_120 (ATerm), ATerm v_120 (ATerm), ATerm t)
{
  t = t_120(t);
  t = while_not_2_0(u_120, v_120, t);
  return(t);
}
ATerm w_8 (ATerm t)
{
  ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL;
  if(match_cons(t, sym__3))
    {
      l_49 = ATgetArgument(t, 0);
      m_49 = ATgetArgument(t, 1);
      n_49 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, l_49, l_49, m_49, n_49, (ATerm) ATempty);
  return(t);
}
ATerm x_8 (ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm w_33 = ATgetArgument(t, 0);
      if(((ATgetType(w_33) != AT_LIST) || !(ATisEmpty(w_33))))
        _fail(t);
      {
        ATerm x_33 = ATgetArgument(t, 1);
      }
      {
        ATerm a_34 = ATgetArgument(t, 2);
      }
      o_49 = ATgetArgument(t, 3);
      p_49 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_49, p_49);
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm f_34 = t;
  int j_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = GnNextChangeGraph_3_0(get_definition_0_0, a_9, h_9, t);
      ;
      LocalPopChoice(j_34);
    }
  else
    {
      t = f_34;
      {
        ATerm t_49 = NULL,u_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL,z_49 = NULL;
        if(match_cons(t, sym__5))
          {
            t_49 = ATgetArgument(t, 0);
            w_49 = ATgetArgument(t, 1);
            x_49 = ATgetArgument(t, 2);
            y_49 = ATgetArgument(t, 3);
            z_49 = ATgetArgument(t, 4);
          }
        else
          _fail(t);
        t = t_49;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_49 = ATgetFirst((ATermList) t);
            v_49 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__5, v_49, w_49, x_49, y_49, (ATerm) ATinsert(CheckATermList(z_49), u_49));
      }
    }
  return(t);
}
ATerm a_9 (ATerm t)
{
  t = svars_arity_0_0(t);
  t = map_1_0(k_9, t);
  return(t);
}
ATerm h_9 (ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm a_35 = ATgetArgument(t, 0);
      q_49 = ATgetArgument(t, 1);
      r_49 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_49), q_49);
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm b_35 = t;
  int c_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefinitionExists_0_0(t);
      ;
      LocalPopChoice(c_35);
    }
  else
    {
      t = b_35;
    }
  return(t);
}
ATerm l_9 (ATerm t)
{
  ATerm f_35 = t;
  int g_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MissingDefMod_0_0(t);
      ;
      LocalPopChoice(g_35);
    }
  else
    {
      t = f_35;
      t = MissingDef_0_0(t);
    }
  return(t);
}
ATerm extract_needed_defs_0_0 (ATerm t)
{
  t = for_3_0(w_8, x_8, y_8, t);
  {
    ATerm h_35 = t;
    int i_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_50 = NULL,i_50 = NULL;
        if(match_cons(t, sym__2))
          {
            h_50 = ATgetArgument(t, 0);
            i_50 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_50;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_50;
        ;
        LocalPopChoice(i_35);
      }
    else
      {
        t = h_35;
        {
          ATerm l_12 = NULL,n_12 = NULL;
          if(match_cons(t, sym__2))
            {
              ATerm j_35 = ATgetArgument(t, 0);
              ATerm k_35 = ATgetArgument(t, 1);
              if(((ATgetType(k_35) == AT_LIST) && !(ATisEmpty(k_35))))
                {
                  l_12 = ATgetFirst((ATermList) k_35);
                  n_12 = (ATerm) ATgetNext((ATermList) k_35);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(n_12), l_12);
          t = map_1_0(l_9, t);
          t = SSL_exit((ATerm) ATmakeInt(1));
        }
      }
  }
  return(t);
}
ATerm assert_1_0 (ATerm j_136 (ATerm), ATerm t)
{
  ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL;
  if(match_cons(t, sym__2))
    {
      k_50 = ATgetArgument(t, 0);
      l_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_136(t);
  m_50 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_50, k_50, l_50);
  t = table_push_0_0(t);
  {
    ATerm l_35 = t;
    int m_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(m_50, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(m_35);
      }
    else
      {
        t = l_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_50 = ATgetFirst((ATermList) t);
        o_50 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(m_50, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(o_50), (ATerm) ATinsert(CheckATermList(n_50), k_50)));
    t = (ATerm) ATmakeAppl(sym__2, k_50, l_50);
  }
  return(t);
}
ATerm Arities_0_0 (ATerm t)
{
  ATerm x_50 = NULL;
  x_50 = t;
  {
    ATerm n_35 = t;
    int o_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_13 = NULL,j_13 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue)), x_50);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_13 = ATgetFirst((ATermList) t);
            {
              ATerm p_35 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = j_13;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm q_35 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_35) != ATmakeSymbol("j_0", 0, ATtrue)))
              _fail(t);
            f_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_13;
        ;
        LocalPopChoice(o_35);
      }
    else
      {
        t = n_35;
        {
          ATerm n_13 = NULL,r_13 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue)), x_50);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_13 = ATgetFirst((ATermList) t);
              {
                ATerm v_35 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = r_13;
          if(match_cons(t, sym_Defined_2))
            {
              ATerm w_35 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) w_35) != ATmakeSymbol("f_0", 0, ATtrue)))
                _fail(t);
              n_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_13;
        }
      }
  }
  return(t);
}
ATerm v_51 (ATerm l_51, ATerm t)
{
  ATerm n_51 = NULL,o_51 = NULL,z_13 = NULL;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue)), l_51);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_13 = ATgetFirst((ATermList) t);
      {
        ATerm x_35 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_13;
  if(match_cons(t, sym_Defined_3))
    {
      ATerm l_36 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_36) != ATmakeSymbol("b_0", 0, ATtrue)))
        _fail(t);
      n_51 = ATgetArgument(t, 1);
      o_51 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_51), n_51);
  return(t);
}
ATerm Definitions_0_0 (ATerm t)
{
  ATerm r_51 = NULL,t_51 = NULL;
  r_51 = t;
  if(match_cons(t, sym__2))
    {
      ATerm n_36 = ATgetArgument(t, 0);
      t_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_51;
  {
    ATerm o_36 = t;
    int p_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_36 = ATgetArgument(t, 0);
            ATerm r_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(p_36);
        {
          ATerm s_36 = t;
          int t_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_14 = NULL,h_14 = NULL;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue)), r_51);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_14 = ATgetFirst((ATermList) t);
                  {
                    ATerm u_36 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = h_14;
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm v_36 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) v_36) != ATmakeSymbol("h_0", 0, ATtrue)))
                    _fail(t);
                  d_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_14;
              ;
              LocalPopChoice(t_36);
            }
          else
            {
              t = s_36;
              t = v_51(r_51, t);
            }
        }
      }
    else
      {
        t = o_36;
        t = v_51(r_51, t);
      }
  }
  return(t);
}
ATerm n_9 (ATerm t)
{
  t = term_x_18;
  return(t);
}
ATerm r_9 (ATerm t)
{
  ATerm k_52 = NULL,l_52 = NULL;
  if(match_cons(t, sym__2))
    {
      k_52 = ATgetArgument(t, 0);
      l_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_36 = t;
    int x_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(k_52, l_52);
        ;
        LocalPopChoice(x_36);
      }
    else
      {
        t = w_36;
        t = SSL_addr(k_52, l_52);
      }
  }
  return(t);
}
ATerm s_9 (ATerm t)
{
  t = term_d_19;
  return(t);
}
ATerm x_9 (ATerm t)
{
  t = term_x_18;
  return(t);
}
ATerm y_9 (ATerm t)
{
  ATerm m_52 = NULL,n_52 = NULL;
  if(match_cons(t, sym__2))
    {
      m_52 = ATgetArgument(t, 0);
      n_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_36 = t;
    int z_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(m_52, n_52);
        ;
        LocalPopChoice(z_36);
      }
    else
      {
        t = y_36;
        t = SSL_addr(m_52, n_52);
      }
  }
  return(t);
}
ATerm z_9 (ATerm t)
{
  t = term_d_19;
  return(t);
}
ATerm a_10 (ATerm t)
{
  ATerm o_52 = NULL;
  if(match_cons(t, sym__2))
    {
      o_52 = ATgetArgument(t, 0);
      if((o_52 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm b_10 (ATerm t)
{
  t = term_a_37;
  return(t);
}
ATerm d_10 (ATerm t)
{
  t = term_b_37;
  return(t);
}
ATerm RegisterSDefT_0_0 (ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL;
  a_52 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      b_52 = ATgetArgument(t, 0);
      c_52 = ATgetArgument(t, 1);
      d_52 = ATgetArgument(t, 2);
      {
        ATerm c_37 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  e_52 = t;
  t = c_52;
  t = foldr_3_0(n_9, r_9, s_9, t);
  f_52 = t;
  t = d_52;
  t = foldr_3_0(x_9, y_9, z_9, t);
  g_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_52, (ATerm) ATmakeAppl(sym__2, f_52, g_52));
  {
    ATerm d_37 = t;
    int e_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Definitions_0_0(t);
        ;
        LocalPopChoice(e_37);
      }
    else
      {
        t = d_37;
        t = (ATerm) ATempty;
      }
    h_52 = t;
    t = b_52;
    {
      ATerm g_37 = t;
      int h_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Arities_0_0(t);
          ;
          LocalPopChoice(h_37);
        }
      else
        {
          t = g_37;
          t = (ATerm) ATempty;
        }
      i_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, f_52, g_52)), i_52);
      t = union_1_0(a_10, t);
      j_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_52, (ATerm) ATmakeAppl(sym__2, f_52, g_52)), (ATerm) ATmakeAppl(sym_Defined_2, term_i_37, (ATerm) ATinsert(CheckATermList(h_52), a_52)));
      t = assert_1_0(b_10, t);
      t = (ATerm) ATmakeAppl(sym__2, b_52, (ATerm) ATmakeAppl(sym_Defined_2, term_j_37, j_52));
      t = assert_1_0(d_10, t);
      t = e_52;
    }
  }
  return(t);
}
ATerm k_10 (ATerm t)
{
  t = term_x_18;
  return(t);
}
ATerm l_10 (ATerm t)
{
  ATerm w_52 = NULL,x_52 = NULL;
  if(match_cons(t, sym__2))
    {
      w_52 = ATgetArgument(t, 0);
      x_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_37 = t;
    int l_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(w_52, x_52);
        ;
        LocalPopChoice(l_37);
      }
    else
      {
        t = k_37;
        t = SSL_addr(w_52, x_52);
      }
  }
  return(t);
}
ATerm m_10 (ATerm t)
{
  t = term_d_19;
  return(t);
}
ATerm n_10 (ATerm t)
{
  t = term_x_18;
  return(t);
}
ATerm o_10 (ATerm t)
{
  ATerm y_52 = NULL,z_52 = NULL;
  if(match_cons(t, sym__2))
    {
      y_52 = ATgetArgument(t, 0);
      z_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_37 = t;
    int n_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(y_52, z_52);
        ;
        LocalPopChoice(n_37);
      }
    else
      {
        t = m_37;
        t = SSL_addr(y_52, z_52);
      }
  }
  return(t);
}
ATerm r_10 (ATerm t)
{
  t = term_d_19;
  return(t);
}
ATerm DefinitionName_0_0 (ATerm t)
{
  ATerm p_52 = NULL,q_52 = NULL,r_52 = NULL,u_52 = NULL,v_52 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      p_52 = ATgetArgument(t, 0);
      q_52 = ATgetArgument(t, 1);
      r_52 = ATgetArgument(t, 2);
      {
        ATerm o_37 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = q_52;
  t = foldr_3_0(k_10, l_10, m_10, t);
  u_52 = t;
  t = r_52;
  t = foldr_3_0(n_10, o_10, r_10, t);
  v_52 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, p_52, (ATerm) ATmakeAppl(sym__2, u_52, v_52)));
  return(t);
}
ATerm union_1_0 (ATerm e_121 (ATerm), ATerm t)
{
  ATerm d_53 = NULL,e_53 = NULL;
  if(match_cons(t, sym__2))
    {
      d_53 = ATgetArgument(t, 0);
      e_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_53;
  {
    ATerm f_53 (ATerm t)
    {
      ATerm p_37 = t;
      int q_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = e_53;
          ;
          LocalPopChoice(q_37);
        }
      else
        {
          t = p_37;
          {
            ATerm r_37 = t;
            int s_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_14 = NULL,k_14 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    j_14 = ATgetFirst((ATermList) t);
                    k_14 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = e_53;
                {
                  ATerm s_10 (ATerm t)
                  {
                    ATerm l_14 = NULL;
                    l_14 = t;
                    t = (ATerm) ATmakeAppl(sym__2, j_14, l_14);
                    t = e_121(t);
                    return(t);
                  }
                  t = fetch_1_0(s_10, t);
                  t = k_14;
                  t = f_53(t);
                }
                ;
                LocalPopChoice(s_37);
              }
            else
              {
                t = r_37;
                t = Cons_2_0(_id, f_53, t);
              }
          }
        }
      return(t);
    }
    t = f_53(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm m_123 (ATerm), ATerm n_123 (ATerm), ATerm o_123 (ATerm), ATerm t)
{
  ATerm t_37 = t;
  int u_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_123(t);
      ;
      LocalPopChoice(u_37);
    }
  else
    {
      t = t_37;
      {
        ATerm j_53 = NULL,k_53 = NULL,o_53 = NULL,p_53 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_53 = ATgetFirst((ATermList) t);
            k_53 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_53;
        t = o_123(t);
        o_53 = t;
        t = k_53;
        t = foldr_3_0(m_123, n_123, o_123, t);
        p_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_53, p_53);
        t = n_123(t);
      }
    }
  return(t);
}
ATerm w_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_10 (ATerm t)
{
  t = union_1_0(y_10, t);
  return(t);
}
ATerm y_10 (ATerm t)
{
  ATerm t_53 = NULL;
  if(match_cons(t, sym__2))
    {
      t_53 = ATgetArgument(t, 0);
      if((t_53 != ATgetArgument(t, 1)))
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
  ATerm q_53 = NULL,r_53 = NULL,s_53 = NULL;
  q_53 = t;
  t = foldr_3_0(w_10, x_10, DefinitionName_0_0, t);
  r_53 = t;
  t = q_53;
  t = map_1_0(RegisterSDefT_0_0, t);
  s_53 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_53, s_53, (ATerm) ATempty);
  t = extract_needed_defs_0_0(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm v_91 (ATerm), ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL,w_53 = NULL,z_53 = NULL;
  z_53 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      v_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_53);
  u_53 = t;
  t = v_53;
  t = v_91(t);
  w_53 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, w_53), u_53);
  return(t);
}
ATerm Cons_2_0 (ATerm r_91 (ATerm), ATerm s_91 (ATerm), ATerm t)
{
  ATerm f_54 = NULL,j_54 = NULL,k_54 = NULL,l_54 = NULL,m_54 = NULL,n_54 = NULL;
  n_54 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_54 = ATgetFirst((ATermList) t);
      k_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_54);
  f_54 = t;
  t = j_54;
  t = r_91(t);
  l_54 = t;
  t = k_54;
  t = s_91(t);
  m_54 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(m_54), l_54), f_54);
  return(t);
}
ATerm Specification_1_0 (ATerm a_92 (ATerm), ATerm t)
{
  ATerm q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL;
  t_54 = t;
  if(match_cons(t, sym_Specification_1))
    {
      r_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_54);
  q_54 = t;
  t = r_54;
  t = a_92(t);
  s_54 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, s_54), q_54);
  return(t);
}
ATerm _2_0 (ATerm c_87 (ATerm), ATerm d_87 (ATerm), ATerm t)
{
  ATerm y_54 = NULL,z_54 = NULL,b_55 = NULL,c_55 = NULL,e_55 = NULL,f_55 = NULL;
  f_55 = t;
  if(match_cons(t, sym__2))
    {
      z_54 = ATgetArgument(t, 0);
      b_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_55);
  y_54 = t;
  t = z_54;
  t = c_87(t);
  c_55 = t;
  t = b_55;
  t = d_87(t);
  e_55 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, c_55, e_55), y_54);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm q_128 (ATerm), ATerm t)
{
  ATerm i_55 = NULL,j_55 = NULL,k_55 = NULL;
  if(match_cons(t, sym__2))
    {
      i_55 = ATgetArgument(t, 0);
      j_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_55, term_v_37);
  t = open_stream_0_0(t);
  k_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_55, j_55);
  t = q_128(t);
  t = fclose_0_0(t);
  t = j_55;
  return(t);
}
ATerm d_11 (ATerm t)
{
  t = fetch_1_0(n_11, t);
  return(t);
}
ATerm m_11 (ATerm t)
{
  t = WriteToFile_1_0(o_11, t);
  return(t);
}
ATerm n_11 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm o_11 (ATerm t)
{
  ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_37 = ATgetArgument(t, 0);
      if(match_cons(w_37, sym_Stream_1))
        {
          o_55 = ATgetArgument(w_37, 0);
        }
      else
        _fail(t);
      p_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(o_55, p_55);
  q_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_55);
  return(t);
}
ATerm p_11 (ATerm t)
{
  t = WriteToFile_1_0(q_11, t);
  return(t);
}
ATerm q_11 (ATerm t)
{
  ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_37 = ATgetArgument(t, 0);
      if(match_cons(x_37, sym_Stream_1))
        {
          r_55 = ATgetArgument(x_37, 0);
        }
      else
        _fail(t);
      s_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(r_55, s_55);
  t_55 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), t_55);
  u_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_55);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm l_55 = NULL,n_55 = NULL;
  l_55 = t;
  {
    ATerm a_11 (ATerm t)
    {
      ATerm y_37 = t;
      int z_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_11 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((n_55 != NULL) && (n_55 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  n_55 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(b_11, t);
          ;
          LocalPopChoice(z_37);
        }
      else
        {
          t = y_37;
          t = term_a_38;
          if(((n_55 != NULL) && (n_55 != t)))
            _fail(t);
          else
            n_55 = t;
        }
      return(t);
    }
    t = _2_0(a_11, _id, t);
    t = l_55;
    {
      ATerm c_11 (ATerm t)
      {
        ATerm o_14 = NULL;
        o_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_55), o_14);
        return(t);
      }
      t = _2_0(_id, c_11, t);
      {
        ATerm b_38 = t;
        int c_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(d_11, m_11, t);
            ;
            LocalPopChoice(c_38);
          }
        else
          {
            t = b_38;
            t = _2_0(_id, p_11, t);
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
ATerm apply_strategy_1_0 (ATerm s_131 (ATerm), ATerm t)
{
  ATerm v_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL;
  v_55 = t;
  t = dtime_0_0(t);
  t = v_55;
  t = s_131(t);
  x_55 = t;
  t = dtime_0_0(t);
  y_55 = t;
  t = x_55;
  if(match_cons(t, sym__2))
    {
      z_55 = ATgetArgument(t, 0);
      a_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_55), (ATerm) ATmakeAppl(sym_Runtime_1, y_55)), a_56);
  return(t);
}
ATerm o_56 (ATerm i_56, ATerm t)
{
  t = SSL_fclose(i_56);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_56 = NULL,m_56 = NULL;
  m_56 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_56 = ATgetArgument(t, 0);
      {
        ATerm d_38 = t;
        int e_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_56);
            ;
            LocalPopChoice(e_38);
          }
        else
          {
            t = d_38;
            t = o_56(m_56, t);
          }
      }
    }
  else
    {
      t = o_56(m_56, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_56 = NULL;
  t = SSL_stdin_stream();
  p_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_56);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_56 = NULL;
  t = SSL_stdout_stream();
  q_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_56);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_56 = NULL;
  t = SSL_stderr_stream();
  r_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_56);
  return(t);
}
ATerm u_11 (ATerm t)
{
  ATerm z_56 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      z_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_56;
  return(t);
}
ATerm y_11 (ATerm t)
{
  ATerm d_57 = NULL;
  d_57 = t;
  t = SSL_is_string(d_57);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_38 = ATgetArgument(t, 0);
      ATerm g_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_38 = t;
    int i_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_15 = NULL,c_15 = NULL;
        b_15 = t;
        t = SSL_explode_term(b_15);
        if(match_cons(t, sym__2))
          {
            ATerm j_38 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_38) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm k_38 = ATgetArgument(t, 1);
              if(((ATgetType(k_38) == AT_LIST) && !(ATisEmpty(k_38))))
                {
                  c_15 = ATgetFirst((ATermList) k_38);
                  {
                    ATerm m_38 = (ATerm) ATgetNext((ATermList) k_38);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = c_15;
        if(match_cons(t, sym_stderr_0))
          {
            t = c_15;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = c_15;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = c_15;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(i_38);
      }
    else
      {
        t = h_38;
        {
          ATerm n_38 = t;
          int o_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL;
              t = _2_0(u_11, _id, t);
              if(match_cons(t, sym__2))
                {
                  w_56 = ATgetArgument(t, 0);
                  x_56 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(w_56, x_56);
              y_56 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, y_56);
              ;
              LocalPopChoice(o_38);
            }
          else
            {
              t = n_38;
              {
                ATerm a_57 = NULL,b_57 = NULL,c_57 = NULL;
                t = _2_0(y_11, _id, t);
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
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_57 = NULL,g_57 = NULL,h_57 = NULL;
  ATerm p_38 = t;
  int q_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_57 = NULL;
      i_57 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_57, term_r_38);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(q_38);
    }
  else
    {
      t = p_38;
      {
        ATerm d_15 = NULL;
        d_15 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, d_15), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = d_15;
        _fail(t);
      }
    }
  e_57 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(h_57);
  g_57 = t;
  t = e_57;
  t = fclose_0_0(t);
  t = g_57;
  return(t);
}
ATerm fetch_1_0 (ATerm l_106 (ATerm), ATerm t)
{
  ATerm o_57 (ATerm t)
  {
    ATerm s_38 = t;
    int t_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(l_106, _id, t);
        ;
        LocalPopChoice(t_38);
      }
    else
      {
        t = s_38;
        t = Cons_2_0(_id, o_57, t);
      }
    return(t);
  }
  t = o_57(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_38 = t;
  int v_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(v_38);
    }
  else
    {
      t = u_38;
      {
        ATerm r_57 = NULL,s_57 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_57 = ATgetFirst((ATermList) t);
            s_57 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_57;
        {
          ATerm z_11 (ATerm t)
          {
            t = s_57;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(z_11, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm r_106 (ATerm), ATerm t)
{
  ATerm y_57 (ATerm t)
  {
    ATerm w_38 = t;
    int b_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, y_57, t);
        ;
        LocalPopChoice(b_39);
      }
    else
      {
        t = w_38;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_106(t);
      }
    return(t);
  }
  t = y_57(t);
  return(t);
}
ATerm b_12 (ATerm t)
{
  ATerm b_58 = NULL;
  b_58 = t;
  t = SSL_explode_string(b_58);
  return(t);
}
ATerm c_12 (ATerm t)
{
  ATerm c_58 = NULL;
  c_58 = t;
  t = SSL_explode_string(c_58);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm a_58 = NULL;
  t = _2_0(b_12, c_12, t);
  {
    ATerm c_39 = t;
    int d_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_58 = NULL,f_58 = NULL;
        if(match_cons(t, sym__2))
          {
            e_58 = ATgetArgument(t, 0);
            f_58 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_58;
        {
          ATerm d_12 (ATerm t)
          {
            t = f_58;
            return(t);
          }
          t = at_end_1_0(d_12, t);
        }
        ;
        LocalPopChoice(d_39);
      }
    else
      {
        t = c_39;
        {
          ATerm j_15 = NULL,k_15 = NULL;
          j_15 = t;
          t = SSL_explode_term(j_15);
          if(match_cons(t, sym__2))
            {
              ATerm e_39 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) e_39) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              k_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_15;
          t = concat_0_0(t);
        }
      }
    a_58 = t;
    t = SSL_implode_string(a_58);
  }
  return(t);
}
ATerm g_12 (ATerm t)
{
  ATerm f_39 = t;
  int g_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(g_39);
    }
  else
    {
      t = f_39;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm h_39 = t;
  int i_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_58 = NULL;
      p_58 = t;
      t = SSL_is_string(p_58);
      ;
      LocalPopChoice(i_39);
    }
  else
    {
      t = h_39;
      {
        ATerm j_39 = t;
        int k_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(g_12, t);
            ;
            LocalPopChoice(k_39);
          }
        else
          {
            t = j_39;
            {
              ATerm u_58 = NULL,w_58 = NULL,x_58 = NULL;
              u_58 = t;
              if(match_cons(t, sym_Path_1))
                {
                  w_58 = ATgetArgument(t, 0);
                  t = w_58;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      w_58 = ATgetArgument(t, 0);
                      t = w_58;
                      {
                        ATerm m_39 = t;
                        int n_39 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), w_58);
                            {
                              ATerm o_39 = t;
                              int p_39 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm f_16 = NULL;
                                  t = eval_config_0_0(t);
                                  f_16 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), w_58, f_16);
                                  t = f_16;
                                  ;
                                  LocalPopChoice(p_39);
                                }
                              else
                                {
                                  t = o_39;
                                }
                            }
                            ;
                            LocalPopChoice(n_39);
                          }
                        else
                          {
                            t = m_39;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, w_58), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = w_58;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm b_59 = NULL,c_59 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          w_58 = ATgetArgument(t, 0);
                          x_58 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = w_58;
                      t = eval_config_0_0(t);
                      b_59 = t;
                      t = x_58;
                      t = eval_config_0_0(t);
                      c_59 = t;
                      t = (ATerm) ATmakeAppl(sym__2, b_59, c_59);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm b_130 (ATerm), ATerm t)
{
  ATerm q_39 = t;
  int r_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_59 = NULL,j_59 = NULL;
      h_59 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm s_39 = t;
        int t_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_16 = NULL;
            t = eval_config_0_0(t);
            m_16 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), m_16);
            t = m_16;
            ;
            LocalPopChoice(t_39);
          }
        else
          {
            t = s_39;
          }
        j_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_59, term_u_39);
        t = geq_0_0(t);
        t = h_59;
        t = b_130(t);
      }
      ;
      LocalPopChoice(r_39);
    }
  else
    {
      t = q_39;
    }
  return(t);
}
ATerm h_12 (ATerm t)
{
  ATerm l_59 = NULL;
  l_59 = t;
  if(match_string(t, "-k"))
    {
      t = l_59;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = l_59;
    }
  return(t);
}
ATerm j_12 (ATerm t)
{
  ATerm m_59 = NULL,n_59 = NULL;
  m_59 = t;
  t = SSL_string_to_int(m_59);
  n_59 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), n_59);
  t = m_59;
  return(t);
}
ATerm k_12 (ATerm t)
{
  t = term_c_40;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_12, j_12, k_12, t);
  return(t);
}
ATerm s_12 (ATerm t)
{
  ATerm p_59 = NULL;
  p_59 = t;
  if(match_string(t, "-S"))
    {
      t = p_59;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = p_59;
    }
  return(t);
}
ATerm t_12 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_d_40;
  return(t);
}
ATerm u_12 (ATerm t)
{
  t = term_e_40;
  return(t);
}
ATerm v_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_12 (ATerm t)
{
  ATerm q_59 = NULL,r_59 = NULL;
  q_59 = t;
  t = SSL_string_to_int(q_59);
  r_59 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), r_59);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, q_59);
  return(t);
}
ATerm x_12 (ATerm t)
{
  t = term_g_40;
  return(t);
}
ATerm y_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_13 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_h_40;
  return(t);
}
ATerm b_13 (ATerm t)
{
  t = term_i_40;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_40 = t;
  int k_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_12, t_12, u_12, t);
      ;
      LocalPopChoice(k_40);
    }
  else
    {
      t = j_40;
      {
        ATerm l_40 = t;
        int m_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(v_12, w_12, x_12, t);
            ;
            LocalPopChoice(m_40);
          }
        else
          {
            t = l_40;
            t = Option_3_0(y_12, a_13, b_13, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm u_59 = NULL,v_59 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_59 = NULL;
      t = term_m_9;
      t = d_0(t);
      w_59 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_40, term_o_40, w_59);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm z_59 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_59 = ATgetFirst((ATermList) t);
          v_59 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_59;
      t = a_0(t);
      t = term_m_9;
      t = c_0(t);
      z_59 = t;
      t = (ATerm) ATinsert(CheckATermList(v_59), z_59);
    }
  return(t);
}
ATerm c_13 (ATerm t)
{
  ATerm b_60 = NULL;
  b_60 = t;
  if(match_string(t, "-o"))
    {
      t = b_60;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = b_60;
    }
  return(t);
}
ATerm d_13 (ATerm t)
{
  ATerm c_60 = NULL;
  c_60 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), c_60);
  t = (ATerm) ATmakeAppl(sym_Output_1, c_60);
  return(t);
}
ATerm e_13 (ATerm t)
{
  t = term_p_40;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_13, d_13, e_13, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL;
  if(match_cons(t, sym__3))
    {
      f_60 = ATgetArgument(t, 0);
      g_60 = ATgetArgument(t, 1);
      h_60 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_60, g_60);
  {
    ATerm q_40 = t;
    int r_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_40 = ATgetArgument(t, 0);
            ATerm v_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(f_60, g_60);
        ;
        LocalPopChoice(r_40);
      }
    else
      {
        t = q_40;
        t = (ATerm) ATempty;
      }
    i_60 = t;
    t = SSL_table_put(f_60, g_60, (ATerm) ATinsert(CheckATermList(i_60), h_60));
    t = (ATerm) ATmakeAppl(sym__3, f_60, g_60, h_60);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm q_60 = NULL,r_60 = NULL,s_60 = NULL,u_60 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_60 = NULL;
      t = term_m_9;
      t = l_0(t);
      v_60 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_40, term_o_40, v_60);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm z_60 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_60 = ATgetFirst((ATermList) t);
          r_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_60;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_60 = ATgetFirst((ATermList) t);
          u_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_60;
      t = i_0(t);
      t = s_60;
      t = k_0(t);
      z_60 = t;
      t = (ATerm) ATinsert(CheckATermList(u_60), z_60);
    }
  return(t);
}
ATerm g_13 (ATerm t)
{
  ATerm b_61 = NULL;
  b_61 = t;
  if(match_string(t, "-i"))
    {
      t = b_61;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_61;
    }
  return(t);
}
ATerm h_13 (ATerm t)
{
  ATerm c_61 = NULL;
  c_61 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), c_61);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_61);
  return(t);
}
ATerm i_13 (ATerm t)
{
  t = term_x_40;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_13, h_13, i_13, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_61 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_9;
  t = whoami_0_0(t);
  d_61 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), d_61));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm y_40 = t;
    int a_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_16 = NULL;
        t = eval_config_0_0(t);
        r_16 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), r_16);
        t = r_16;
        ;
        LocalPopChoice(a_41);
      }
    else
      {
        t = y_40;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm k_123 (ATerm), ATerm l_123 (ATerm), ATerm t)
{
  ATerm b_41 = t;
  int c_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_123(t);
      ;
      LocalPopChoice(c_41);
    }
  else
    {
      t = b_41;
      {
        ATerm g_61 = NULL,h_61 = NULL,k_61 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_61 = ATgetFirst((ATermList) t);
            h_61 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_61;
        t = foldr_2_0(k_123, l_123, t);
        k_61 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_61, k_61);
        t = l_123(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm k_13 (ATerm t)
{
  t = term_x_18;
  return(t);
}
ATerm l_13 (ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL;
  if(match_cons(t, sym__2))
    {
      w_16 = ATgetArgument(t, 0);
      x_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_41 = t;
    int e_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(w_16, x_16);
        ;
        LocalPopChoice(e_41);
      }
    else
      {
        t = d_41;
        t = SSL_addr(w_16, x_16);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_61 = NULL,s_16 = NULL,t_16 = NULL;
  t = times_0_0(t);
  s_16 = t;
  t = SSL_explode_term(s_16);
  if(match_cons(t, sym__2))
    {
      ATerm f_41 = ATgetArgument(t, 0);
      t_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_16;
  t = foldr_2_0(k_13, l_13, t);
  n_61 = t;
  t = SSL_TicksToSeconds(n_61);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_61 = NULL,z_61 = NULL,a_62 = NULL;
  y_61 = t;
  if(match_cons(t, sym__2))
    {
      z_61 = ATgetArgument(t, 0);
      a_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_41 = t;
    int h_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_62;
        if((z_61 != t))
          {
            _fail(t);
          }
        t = y_61;
        ;
        LocalPopChoice(h_41);
      }
    else
      {
        t = g_41;
        t = y_61;
        {
          ATerm i_41 = t;
          int j_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(z_61, a_62);
              ;
              LocalPopChoice(j_41);
            }
          else
            {
              t = i_41;
              t = SSL_gtr(z_61, a_62);
            }
          t = (ATerm) ATmakeAppl(sym__2, z_61, a_62);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_130 (ATerm), ATerm t)
{
  ATerm m_41 = t;
  int v_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_62 = NULL,f_62 = NULL;
      d_62 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm w_41 = t;
        int x_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_18 = NULL;
            t = eval_config_0_0(t);
            f_18 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), f_18);
            t = f_18;
            ;
            LocalPopChoice(x_41);
          }
        else
          {
            t = w_41;
          }
        f_62 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_62, term_d_19);
        t = geq_0_0(t);
        t = d_62;
        t = a_130(t);
      }
      ;
      LocalPopChoice(v_41);
    }
  else
    {
      t = m_41;
    }
  return(t);
}
ATerm m_13 (ATerm t)
{
  ATerm h_62 = NULL,i_62 = NULL;
  t = run_time_0_0(t);
  h_62 = t;
  t = term_m_9;
  t = whoami_0_0(t);
  i_62 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), h_62), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), i_62));
  t = (ATerm) ATmakeAppl(sym__2, term_a_42, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_42), h_62), term_b_42), i_62));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_13, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm o_13 (ATerm t)
{
  ATerm d_42 = t;
  int e_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(e_42);
    }
  else
    {
      t = d_42;
      {
        ATerm f_42 = t;
        int g_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(g_42);
          }
        else
          {
            t = f_42;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_132 (ATerm), ATerm t)
{
  ATerm h_42 = t;
  int i_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm j_42 = t;
        int k_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_18 = NULL;
            t = eval_config_0_0(t);
            q_18 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), q_18);
            t = q_18;
            ;
            LocalPopChoice(k_42);
          }
        else
          {
            t = j_42;
          }
      }
      ;
      LocalPopChoice(i_42);
    }
  else
    {
      t = h_42;
      t = fetch_1_0(o_13, t);
    }
  t = q_132(t);
  return(t);
}
ATerm map_1_0 (ATerm a_106 (ATerm), ATerm t)
{
  ATerm j_62 (ATerm t)
  {
    ATerm l_42 = t;
    int m_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(m_42);
      }
    else
      {
        t = l_42;
        t = Cons_2_0(a_106, j_62, t);
      }
    return(t);
  }
  t = j_62(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm l_62 = NULL,m_62 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_62 = ATgetFirst((ATermList) t);
      m_62 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_62 = NULL,r_62 = NULL;
        t = m_62;
        t = g_0(t);
        q_62 = t;
        t = l_62;
        t = e_0(t);
        r_62 = t;
        t = m_62;
        {
          ATerm p_13 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(q_62), r_62);
            return(t);
          }
          t = reverse_acc_2_0(e_0, p_13, t);
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
  ATerm s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL;
  v_62 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_62);
  s_62 = t;
  t = t_62;
  t = s_100(t);
  u_62 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, u_62), s_62);
  return(t);
}
ATerm q_13 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm s_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_13 (ATerm t)
{
  ATerm y_62 = NULL;
  y_62 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_62), term_n_42);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_42 = t;
  int p_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm q_42 = t;
        int r_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_18 = NULL;
            t = eval_config_0_0(t);
            w_18 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), w_18);
            t = w_18;
            ;
            LocalPopChoice(r_42);
          }
        else
          {
            t = q_42;
          }
      }
      ;
      LocalPopChoice(p_42);
    }
  else
    {
      t = o_42;
      t = fetch_1_0(q_13, t);
    }
  t = term_s_42;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, s_13, t);
  t = map_1_0(t_13, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm t_100 (ATerm), ATerm t)
{
  ATerm z_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL;
  c_63 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      a_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_63);
  z_62 = t;
  t = a_63;
  t = t_100(t);
  b_63 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, b_63), z_62);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_63 = NULL,h_63 = NULL;
  g_63 = t;
  {
    ATerm t_42 = t;
    int u_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_63;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_42 = ATgetFirst((ATermList) t);
                ATerm w_42 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_63;
          }
        ;
        LocalPopChoice(u_42);
      }
    else
      {
        t = t_42;
        t = (ATerm) ATinsert(ATempty, g_63);
      }
    h_63 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), h_63);
    t = g_63;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm x_42 = t;
    int c_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_19 = NULL;
        t = eval_config_0_0(t);
        e_19 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), e_19);
        t = e_19;
        ;
        LocalPopChoice(c_43);
      }
    else
      {
        t = x_42;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm u_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_13 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_m_43;
  return(t);
}
ATerm w_13 (ATerm t)
{
  t = term_n_43;
  return(t);
}
ATerm x_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_13 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_o_43;
  return(t);
}
ATerm a_14 (ATerm t)
{
  t = term_p_43;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_43 = t;
  int r_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_13, v_13, w_13, t);
      ;
      LocalPopChoice(r_43);
    }
  else
    {
      t = q_43;
      t = Option_3_0(x_13, y_13, a_14, t);
    }
  return(t);
}
ATerm b_14 (ATerm t)
{
  ATerm n_63 = NULL;
  n_63 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), n_63);
  t = (ATerm) ATmakeAppl(sym_Program_1, n_63);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_134 (ATerm), ATerm t)
{
  ATerm m_63 = NULL;
  m_63 = t;
  {
    ATerm t_43 = t;
    int u_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_43;
        t = t_134(t);
        ;
        LocalPopChoice(u_43);
      }
    else
      {
        t = t_43;
      }
    t = m_63;
    {
      ATerm c_14 (ATerm t)
      {
        ATerm w_43 = t;
        int x_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_43 = t;
            int z_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(z_43);
              }
            else
              {
                t = y_43;
                t = t_134(t);
                t = Cons_2_0(_id, c_14, t);
              }
            ;
            LocalPopChoice(x_43);
          }
        else
          {
            t = w_43;
            {
              ATerm p_63 = NULL,q_63 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_63 = ATgetFirst((ATermList) t);
                  q_63 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(q_63), (ATerm) ATmakeAppl(sym_Undefined_1, p_63));
            }
          }
        return(t);
      }
      t = Cons_2_0(b_14, c_14, t);
    }
  }
  return(t);
}
ATerm f_14 (ATerm t)
{
  ATerm a_64 = NULL;
  a_64 = t;
  if(match_string(t, "--help"))
    {
      t = a_64;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = a_64;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = a_64;
        }
    }
  return(t);
}
ATerm g_14 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_a_44;
  return(t);
}
ATerm i_14 (ATerm t)
{
  t = term_b_44;
  return(t);
}
ATerm m_14 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_134 (ATerm), ATerm t)
{
  ATerm x_63 = NULL,y_63 = NULL,z_63 = NULL;
  x_63 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = x_63;
  {
    ATerm e_14 (ATerm t)
    {
      ATerm e_44 = t;
      int f_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_134(t);
          ;
          LocalPopChoice(f_44);
        }
      else
        {
          t = e_44;
          {
            ATerm h_44 = t;
            int i_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_14, g_14, i_14, t);
                ;
                LocalPopChoice(i_44);
              }
            else
              {
                t = h_44;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_14, t);
    {
      ATerm j_44 = t;
      int k_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_64 = NULL;
          f_64 = t;
          {
            ATerm l_44 = t;
            int m_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = f_64;
                {
                  ATerm p_44 = t;
                  int q_44 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm r_44 = t;
                        int s_44 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm k_21 = NULL;
                            t = eval_config_0_0(t);
                            k_21 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), k_21);
                            t = k_21;
                            ;
                            LocalPopChoice(s_44);
                          }
                        else
                          {
                            t = r_44;
                          }
                      }
                      ;
                      LocalPopChoice(q_44);
                    }
                  else
                    {
                      t = p_44;
                      t = fetch_1_0(m_14, t);
                    }
                  t = f_64;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(m_44);
              }
            else
              {
                t = l_44;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm t_44 = t;
                  int u_44 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_22 = NULL;
                      t = eval_config_0_0(t);
                      u_22 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), u_22);
                      t = u_22;
                      ;
                      LocalPopChoice(u_44);
                    }
                  else
                    {
                      t = t_44;
                    }
                  t = f_64;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(k_44);
        }
      else
        {
          t = j_44;
          {
            ATerm v_44 = t;
            int w_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_14 (ATerm t)
                {
                  ATerm p_14 (ATerm t)
                  {
                    if(((y_63 != NULL) && (y_63 != t)))
                      _fail(t);
                    else
                      y_63 = t;
                    return(t);
                  }
                  t = Undefined_1_0(p_14, t);
                  return(t);
                }
                t = fetch_1_0(n_14, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(y_63)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_a_42, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_63)), term_x_44));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(w_44);
              }
            else
              {
                t = v_44;
              }
          }
        }
      z_63 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = z_63;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_132 (ATerm), ATerm t_132 (ATerm), ATerm u_132 (ATerm), ATerm v_132 (ATerm), ATerm t)
{
  ATerm i_64 = NULL;
  t = parse_options_1_0(s_132, t);
  i_64 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), i_64);
  t = i_64;
  t = u_132(t);
  {
    ATerm y_44 = t;
    int z_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_132, t);
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
              t = v_132(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(b_45);
            }
          else
            {
              t = a_45;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm r_14 (ATerm t)
{
  t = if_verbose2_1_0(w_14, t);
  return(t);
}
ATerm t_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_14 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_c_45;
  return(t);
}
ATerm v_14 (ATerm t)
{
  t = term_d_45;
  return(t);
}
ATerm w_14 (ATerm t)
{
  ATerm j_64 = NULL,k_64 = NULL;
  j_64 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm e_45 = t;
    int f_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_23 = NULL;
        t = eval_config_0_0(t);
        b_23 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), b_23);
        t = b_23;
        ;
        LocalPopChoice(f_45);
      }
    else
      {
        t = e_45;
      }
    k_64 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, k_64));
    t = j_64;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm b_132 (ATerm), ATerm c_132 (ATerm), ATerm d_132 (ATerm), ATerm t)
{
  ATerm q_14 (ATerm t)
  {
    ATerm g_45 = t;
    int h_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_132(t);
        ;
        LocalPopChoice(h_45);
      }
    else
      {
        t = g_45;
        {
          ATerm i_45 = t;
          int j_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(j_45);
            }
          else
            {
              t = i_45;
              {
                ATerm k_45 = t;
                int l_45 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(l_45);
                  }
                else
                  {
                    t = k_45;
                    {
                      ATerm m_45 = t;
                      int n_45 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(t_14, u_14, v_14, t);
                          ;
                          LocalPopChoice(n_45);
                        }
                      else
                        {
                          t = m_45;
                          {
                            ATerm o_45 = t;
                            int p_45 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(p_45);
                              }
                            else
                              {
                                t = o_45;
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
  ATerm s_14 (ATerm t)
  {
    ATerm l_64 = NULL,m_64 = NULL,y_23 = NULL;
    l_64 = t;
    {
      ATerm q_45 = t;
      int r_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_14 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((m_64 != NULL) && (m_64 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_64 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(x_14, t);
          ;
          LocalPopChoice(r_45);
        }
      else
        {
          t = q_45;
          t = term_s_45;
          m_64 = t;
        }
      t = not_null(m_64);
      t = ReadFromFile_0_0(t);
      y_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_64, y_23);
      t = apply_strategy_1_0(b_132, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(q_14, d_132, r_14, s_14, t);
  return(t);
}
ATerm y_14 (ATerm t)
{
  t = _2_0(_id, z_14, t);
  return(t);
}
ATerm z_14 (ATerm t)
{
  t = Specification_1_0(a_15, t);
  return(t);
}
ATerm a_15 (ATerm t)
{
  t = Cons_2_0(_id, f_15, t);
  return(t);
}
ATerm f_15 (ATerm t)
{
  t = Cons_2_0(g_15, h_15, t);
  return(t);
}
ATerm g_15 (ATerm t)
{
  t = Strategies_1_0(all_defs_0_0, t);
  return(t);
}
ATerm h_15 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(y_14, _fail, default_usage_0_0, t);
  return(t);
}
